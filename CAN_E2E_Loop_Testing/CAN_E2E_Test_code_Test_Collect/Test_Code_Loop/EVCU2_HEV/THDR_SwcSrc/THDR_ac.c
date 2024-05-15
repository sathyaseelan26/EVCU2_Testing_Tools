/*
 * File: THDR_ac.c
 *
 * Code generated for Simulink model 'THDR_ac'.
 *
 * Model version                  : 9.673
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 19:31:17 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "THDR_ac.h"

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2016a.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_THDR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT) HeTHDR_b_PIM_FrstGnrtn = 0;/* Referenced by: '<S1002>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_10 || Rte_SysCon_Variant_THDR_11 || Rte_SysCon_Variant_THDR_13 || Rte_SysCon_Variant_THDR_19 || Rte_SysCon_Variant_THDR_9

static volatile CONST(float32, THDR_VAR_INIT) HeTHDR_t_MedTEH = 0.1F;/* Referenced by:
                                                                      * '<S12>/Calib'
                                                                      * '<S777>/Calib'
                                                                      * '<S1029>/Calib'
                                                                      * '<S1040>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(float32, THDR_VAR_INIT)
    KaTHDR_T_HTCL_TempSnsRat_Thrshld_Array[3] =
{
    10.0F, 20.0F, 30.0F
} ;                                    /* Referenced by: '<S817>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(float32, THDR_VAR_INIT) KaTHDR_T_LTCL_SnsrThrshlds[10] =
{
    10.0F, 10.0F, 10.0F, 10.0F, 10.0F, 10.0F, 10.0F, 10.0F, 10.0F, 10.0F
} ;                                    /* Referenced by: '<S1128>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_11

static volatile CONST(float32, THDR_VAR_INIT) KeTHDR_Cnt_AGS2_Perf_FailCnt =
    20.0F;                             /* Referenced by: '<S26>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_11

static volatile CONST(float32, THDR_VAR_INIT) KeTHDR_Cnt_AGS2_Perf_SmpCnt =
    20.0F;                             /* Referenced by: '<S27>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_10

static volatile CONST(float32, THDR_VAR_INIT) KeTHDR_Cnt_AGS_Perf_FailCnt =
    20.0F;                             /* Referenced by: '<S70>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_10

static volatile CONST(float32, THDR_VAR_INIT) KeTHDR_Cnt_AGS_Perf_SmpCnt = 20.0F;/* Referenced by: '<S71>/Calib' */

#endif

#if !Rte_SysCon_Variant_THDR_4 && Rte_SysCon_Variant_THDR_13

static volatile CONST(uint16, THDR_VAR_INIT) KeTHDR_Cnt_ECHTIS_FailCnt = 1100U;/* Referenced by: '<S639>/Calib' */

#endif

#if !Rte_SysCon_Variant_THDR_4 && Rte_SysCon_Variant_THDR_13

static volatile CONST(uint16, THDR_VAR_INIT) KeTHDR_Cnt_ECHTIS_SmpCnt = 1200U;/* Referenced by: '<S640>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(uint16, THDR_VAR_INIT) KeTHDR_Cnt_ECH_Inlet_FailCnt = 700U;/* Referenced by: '<S594>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(uint16, THDR_VAR_INIT) KeTHDR_Cnt_ECH_Inlet_SmpCnt = 1200U;/* Referenced by: '<S595>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(uint16, THDR_VAR_INIT) KeTHDR_Cnt_ECH_Outlet_FailCnt =
    700U;                              /* Referenced by: '<S615>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(uint16, THDR_VAR_INIT) KeTHDR_Cnt_ECH_Outlet_SmpCnt =
    1200U;                             /* Referenced by: '<S616>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_19

static volatile CONST(float32, THDR_VAR_INIT) KeTHDR_Cnt_EEXV_Out_FailCnt =
    20.0F;                             /* Referenced by: '<S458>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_19

static volatile CONST(float32, THDR_VAR_INIT) KeTHDR_Cnt_EEXV_Out_SmpCnt = 20.0F;/* Referenced by: '<S459>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(uint16, THDR_VAR_INIT) KeTHDR_Cnt_HCCTIS_FailCnt = 1100U;/* Referenced by: '<S660>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(uint16, THDR_VAR_INIT) KeTHDR_Cnt_HCCTIS_SmpCnt = 1200U;/* Referenced by: '<S661>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13 && Rte_SysCon_Variant_THDR_4

static volatile CONST(uint16, THDR_VAR_INIT) KeTHDR_Cnt_HCCTOS_FailCnt = 1100U;/* Referenced by: '<S684>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13 && Rte_SysCon_Variant_THDR_4

static volatile CONST(uint16, THDR_VAR_INIT) KeTHDR_Cnt_HCCTOS_SmpCnt = 1200U;/* Referenced by: '<S685>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(uint16, THDR_VAR_INIT) KeTHDR_Cnt_HTAP_FailCnt = 100U;/* Referenced by: '<S705>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(uint16, THDR_VAR_INIT) KeTHDR_Cnt_HTAP_SmpCnt = 125U;/* Referenced by: '<S706>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_19

static volatile CONST(uint16, THDR_VAR_INIT) KeTHDR_Cnt_HoldVehicle_Soak = 1U;/* Referenced by: '<S551>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(uint8, THDR_VAR_INIT) KeTHDR_Cnt_IUMPR_HTCL_MaxDTCSet = 3U;/* Referenced by:
                                                                      * '<S124>/Calib'
                                                                      * '<S158>/Calib'
                                                                      * '<S194>/Calib'
                                                                      * '<S230>/Calib'
                                                                      * '<S270>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_THDR_7 && Rte_SysCon_Variant_THDR_9

static volatile CONST(uint16, THDR_VAR_INIT) KeTHDR_Cnt_LRCTOS_FailCnt = 1100U;/* Referenced by: '<S886>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_7 && Rte_SysCon_Variant_THDR_9

static volatile CONST(uint16, THDR_VAR_INIT) KeTHDR_Cnt_LRCTOS_SmpCnt = 1200U;/* Referenced by: '<S887>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_8 && Rte_SysCon_Variant_THDR_9

static volatile CONST(uint16, THDR_VAR_INIT) KeTHDR_Cnt_LTPP2_FailCnt = 1100U;/* Referenced by: '<S910>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_8 && Rte_SysCon_Variant_THDR_9

static volatile CONST(uint16, THDR_VAR_INIT) KeTHDR_Cnt_LTPP2_SmpCnt = 1200U;/* Referenced by: '<S911>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(uint16, THDR_VAR_INIT) KeTHDR_Cnt_LTPP_FailCnt = 1100U;/* Referenced by: '<S931>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(uint16, THDR_VAR_INIT) KeTHDR_Cnt_LTPP_SmpCnt = 1200U;/* Referenced by: '<S932>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_19

static volatile CONST(float32, THDR_VAR_INIT) KeTHDR_Cnt_OEXV_In_FailCnt = 20.0F;/* Referenced by: '<S478>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_19

static volatile CONST(float32, THDR_VAR_INIT) KeTHDR_Cnt_OEXV_In_SmpCnt = 20.0F;/* Referenced by: '<S479>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_19

static volatile CONST(float32, THDR_VAR_INIT) KeTHDR_Cnt_OEXV_Out_FailCnt =
    20.0F;                             /* Referenced by: '<S498>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_19

static volatile CONST(float32, THDR_VAR_INIT) KeTHDR_Cnt_OEXV_Out_SmpCnt = 20.0F;/* Referenced by: '<S499>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(uint16, THDR_VAR_INIT) KeTHDR_Cnt_OOCTOS_FailCnt = 1100U;/* Referenced by: '<S952>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(uint16, THDR_VAR_INIT) KeTHDR_Cnt_OOCTOS_SmpCnt = 1200U;/* Referenced by: '<S953>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(uint16, THDR_VAR_INIT) KeTHDR_Cnt_PPCTIS_FailCnt = 1100U;/* Referenced by: '<S973>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(uint16, THDR_VAR_INIT) KeTHDR_Cnt_PPCTIS_OT_FailCnt = 100U;/* Referenced by: '<S394>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(uint16, THDR_VAR_INIT) KeTHDR_Cnt_PPCTIS_OT_SmpCnt = 1200U;/* Referenced by: '<S395>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(uint16, THDR_VAR_INIT) KeTHDR_Cnt_PPCTIS_SmpCnt = 1200U;/* Referenced by: '<S974>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(float32, THDR_VAR_INIT) KeTHDR_I_AHP_Curr_Cons = 254.0F;/* Referenced by: '<S808>/Calib' */

#endif

#if (Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_9) || (Rte_SysCon_Variant_THDR_6 && Rte_SysCon_Variant_THDR_9)

static volatile CONST(float32, THDR_VAR_INIT) KeTHDR_Pct_CPV_CombBTL = 50.0F;/* Referenced by:
                                                                      * '<S1145>/Calib'
                                                                      * '<S1184>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(float32, THDR_VAR_INIT) KeTHDR_Pct_CabVlvSts_MaxPos = 0.0F;/* Referenced by: '<S742>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(float32, THDR_VAR_INIT) KeTHDR_Pct_HTCV_Close_Pos = 0.0F;/* Referenced by: '<S803>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(float32, THDR_VAR_INIT) KeTHDR_Pct_HTCV_Open_Pos = 90.0F;/* Referenced by: '<S804>/Calib' */

#endif

#if (Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_9) || (Rte_SysCon_Variant_THDR_5 && Rte_SysCon_Variant_THDR_9)

static volatile CONST(float32, THDR_VAR_INIT) KeTHDR_Pct_HTLVlv_CombHTL = 50.0F;/* Referenced by:
                                                                      * '<S1134>/Calib'
                                                                      * '<S1146>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_THDR_13 && Rte_SysCon_Variant_THDR_5

static volatile CONST(float32, THDR_VAR_INIT) KeTHDR_Pct_HTRVlv_ByPassPos = 0.0F;/* Referenced by: '<S821>/Calib' */

#endif

#if (Rte_SysCon_Variant_THDR_10 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_11 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_13) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_19) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_9)

static volatile CONST(float32, THDR_VAR_INIT) KeTHDR_Pct_HT_CabVlvSts_RCVR_Dial =
    0.0F;                              /* Referenced by: '<S1242>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_9

static volatile CONST(float32, THDR_VAR_INIT) KeTHDR_Pct_LTRVlvSts_MaxPos =
    100.0F;                            /* Referenced by: '<S1126>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_9

static volatile CONST(float32, THDR_VAR_INIT) KeTHDR_Pct_LTRVlv_ClosePos = 0.0F;/* Referenced by: '<S1147>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_11

static volatile CONST(float32, THDR_VAR_INIT)
    KeTHDR_T_AGS2_Perf_AmbAirTempMin_Enbl = 0.0F;/* Referenced by: '<S50>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_10

static volatile CONST(float32, THDR_VAR_INIT)
    KeTHDR_T_AGS_Perf_AmbAirTempMin_Enbl = 0.0F;/* Referenced by: '<S94>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(float32, THDR_VAR_INIT) KeTHDR_T_HTCL_DfltTmp_SnsrDisabled
    = 99.0F;                           /* Referenced by: '<S852>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_19

static volatile CONST(uint8, THDR_VAR_INIT) KeTHDR_T_OEXV_In_EEXV_Out_TmpThrshld
    = 10U;                             /* Referenced by: '<S520>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_19

static volatile CONST(uint8, THDR_VAR_INIT)
    KeTHDR_T_OEXV_Out_EEXV_Out_TmpThrshld = 10U;/* Referenced by: '<S521>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_19

static volatile CONST(uint8, THDR_VAR_INIT) KeTHDR_T_OEXV_Out_OEXV_In_TmpThrshld
    = 10U;                             /* Referenced by: '<S522>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(float32, THDR_VAR_INIT) KeTHDR_T_PPCTISOT_AmbTempMax =
    40.0F;                             /* Referenced by: '<S407>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(float32, THDR_VAR_INIT) KeTHDR_T_PPCTIS_OT_DiagThrshHi =
    75.0F;                             /* Referenced by: '<S418>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(float32, THDR_VAR_INIT) KeTHDR_T_PPCTIS_OT_DiagThrshLo =
    70.0F;                             /* Referenced by: '<S419>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_19

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_ACL_Dfrst_Ovrd = 1;/* Referenced by: '<S552>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_19

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_ACL_EAC_Ovrd = 1;/* Referenced by: '<S536>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_19

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_ACL_EEXV_OutTemp_FA_EnblCnds = 1;/* Referenced by: '<S559>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_19

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_ACL_EEXV_OutTemp_FA_FltCndsEnbl = 1;/* Referenced by: '<S577>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_19

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_ACL_OEXV_OutTemp_FA_EnblCnds = 1;/* Referenced by: '<S569>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_19

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_ACL_OEXV_OutTemp_FA_FltCndsEnbl = 1;/* Referenced by: '<S578>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_19

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_ACL_VehicleSoakTime_Ovrd =
    1;                                 /* Referenced by: '<S553>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_19

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_AC_RefrigTempSnsr4CktPerf_LtchEnbl = 1;/* Referenced by: '<S500>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_19

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_AC_RefrigTempSnsr5CktPerf_LtchEnbl = 1;/* Referenced by: '<S480>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_19

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_AC_RefrigTempSnsrCPerf_LtchEnbl = 1;/* Referenced by: '<S460>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_11

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_AGS2_Perf_CurrPosFA_FaultSymp_Enbl = 1;/* Referenced by: '<S60>/Calib' */

#endif

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_AGS2_Perf_FltDtct_D = 0;/* Referenced by: '<S1264>/Calib' */
static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_AGS2_Perf_FltDtct_SD = 0;/* Referenced by: '<S1265>/Calib' */

#if Rte_SysCon_Variant_THDR_11

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_AGS2_Perf_NotDTC_OV = 0;/* Referenced by: '<S51>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_11

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_AGS2_Perf_WaitFirstMvmt_OV = 1;/* Referenced by: '<S52>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_11

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_AGS2_Perf_XYEnbl = 1;/* Referenced by: '<S28>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_10

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_AGS_A_Perf_LtchEnbl = 1;/* Referenced by: '<S72>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_11

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_AGS_B_Perf_LtchEnbl = 1;/* Referenced by: '<S29>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_10

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_AGS_Perf_CurrPosFA_FaultSymp_Enbl = 1;/* Referenced by: '<S104>/Calib' */

#endif

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_AGS_Perf_FltDtct_D = 0;/* Referenced by: '<S1266>/Calib' */
static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_AGS_Perf_FltDtct_SD = 0;/* Referenced by: '<S1267>/Calib' */

#if Rte_SysCon_Variant_THDR_10

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_AGS_Perf_NotDTC_OV = 0;/* Referenced by: '<S95>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_10

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_AGS_Perf_WaitFirstMvmt_OV
    = 1;                               /* Referenced by: '<S96>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_10

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_AGS_Perf_XYEnbl = 1;/* Referenced by: '<S73>/Calib' */

#endif

#if !Rte_SysCon_Variant_THDR_4 && Rte_SysCon_Variant_THDR_13

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_CT2_SnsrPerf_LtchEnbl = 1;/* Referenced by: '<S641>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_CT3_SnsrPerf_LtchEnbl = 1;/* Referenced by: '<S662>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_CT_SnsrPerf_LtchEnbl = 1;/* Referenced by: '<S954>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_CabVlvSts_Chk_Deb_D = 1;/* Referenced by: '<S779>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_CabVlv_DisbDbnc_RST = 1;/* Referenced by: '<S743>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_ClntTempTooHigh_LtchEnbl =
    1;                                 /* Referenced by: '<S396>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_CoolPmpATempSnsrPerf_LtchEnbl = 1;/* Referenced by: '<S707>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_DT_BEV_Slct = 1;/* Referenced by:
                                                                      * '<S822>/Calib'
                                                                      * '<S780>/Calib'
                                                                      */

#endif

#if (Rte_SysCon_Variant_THDR_10 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_11 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_13) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_19) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_9)

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_DiagGlblCndtnsValid_OvrdEnbl = 0;/* Referenced by: '<S1234>/Calib' */

#endif

#if (Rte_SysCon_Variant_THDR_10 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_11 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_13) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_19) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_9)

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_DiagGlblCndtnsValid_OvrdVal = 0;/* Referenced by: '<S1235>/Calib' */

#endif

#if (Rte_SysCon_Variant_THDR_10 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_11 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_13) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_19) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_9)

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_DsblDigFailSfe_OvdEnbl =
    0;                                 /* Referenced by: '<S1236>/Calib' */

#endif

#if (Rte_SysCon_Variant_THDR_10 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_11 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_13) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_19) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_9)

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_DsblDigFailSfe_OvrdVal =
    0;                                 /* Referenced by: '<S1237>/Calib' */

#endif

#if !Rte_SysCon_Variant_THDR_4 && Rte_SysCon_Variant_THDR_13

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_ECHTIS_Flt = 1;/* Referenced by: '<S642>/Calib' */

#endif

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_ECHTIS_FltDtct_Dial = 0;/* Referenced by: '<S1256>/Calib' */
static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_ECHTIS_FltDtct_SD = 0;/* Referenced by: '<S1257>/Calib' */

#if !Rte_SysCon_Variant_THDR_4 && Rte_SysCon_Variant_THDR_13

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_ECHTIS_XYEnbl = 1;/* Referenced by: '<S643>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_ECH_In_Flt = 1;/* Referenced by: '<S596>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_ECH_In_XYEnbl = 1;/* Referenced by: '<S597>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_ECH_LINBusOff_Ovrrd_D = 0;/* Referenced by: '<S760>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_ECH_LIN_Valid_Ovrrd_D = 1;/* Referenced by: '<S797>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_ECH_Out_Flt = 1;/* Referenced by: '<S617>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_ECH_Out_XYEnbl = 1;/* Referenced by: '<S618>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_ECH_RspnsErr_Ovrrd_D = 1;/* Referenced by: '<S761>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_ECH_TempIn_LtchEnbl = 1;/* Referenced by: '<S598>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_ECH_TempOut_LtchEnbl = 1;/* Referenced by: '<S619>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13 && Rte_SysCon_Variant_THDR_4

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_ECT_Snsr4CktPerf_LtchEnbl
    = 1;                               /* Referenced by: '<S686>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_19

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_EEXV_Out_XYEnbl = 1;/* Referenced by: '<S461>/Calib' */

#endif

#if (Rte_SysCon_Variant_THDR_10 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_11 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_13) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_19) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_9)

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_EngSpd_SelDial = 0;/* Referenced by: '<S1240>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_HCCTISCabVlvSts_Chk_Deb_D
    = 0;                               /* Referenced by: '<S805>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_HCCTISEnbl4oldRU_Ovrrd_D =
    1;                                 /* Referenced by: '<S806>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_HCCTIS_Flt = 1;/* Referenced by: '<S663>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_HCCTIS_XYEnbl = 1;/* Referenced by: '<S664>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13 && Rte_SysCon_Variant_THDR_4

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_HCCTOS_Flt = 1;/* Referenced by: '<S687>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13 && Rte_SysCon_Variant_THDR_4

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_HCCTOS_XYEnbl = 1;/* Referenced by: '<S688>/Calib' */

#endif

#if (Rte_SysCon_Variant_THDR_10 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_11 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_13) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_19) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_9)

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_HTAPFunPer_FltDtct_D = 0;/* Referenced by: '<S1248>/Calib' */

#endif

#if (Rte_SysCon_Variant_THDR_10 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_11 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_13) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_19) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_9)

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_HTAPFunPer_FltDtct_SD = 0;/* Referenced by: '<S1249>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_HTAP_DryRunOvrrd_D = 0;/* Referenced by: '<S781>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_HTAP_Flt = 1;/* Referenced by: '<S708>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_HTAP_FunPerf_PassOvrrd_D =
    0;                                 /* Referenced by: '<S782>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_HTAP_XYEnbl = 1;/* Referenced by: '<S709>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_HTCL_EnblSnsr1 = 1;/* Referenced by: '<S853>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_HTCL_EnblSnsr2 = 1;/* Referenced by: '<S854>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_HTCL_EnblSnsr3 = 1;/* Referenced by: '<S855>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_HTCL_EnblSnsr4 = 1;/* Referenced by: '<S856>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_HTCL_EnblSnsr5 = 1;/* Referenced by: '<S857>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_HTCL_Snsr2_FA_EnblCnds =
    1;                                 /* Referenced by: '<S762>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_HTCL_Snsr2_FA_FltCndsEnbl
    = 1;                               /* Referenced by: '<S813>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_HTCL_Snsr3_FA_EnblCnds =
    1;                                 /* Referenced by: '<S766>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_HTCL_Snsr3_FA_FltCndsEnbl
    = 1;                               /* Referenced by: '<S814>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_HTCL_Snsr5_FA_EnblCnds =
    1;                                 /* Referenced by: '<S809>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_HTCL_Snsr5_FA_FltCndsEnbl
    = 1;                               /* Referenced by: '<S815>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_HTCV_Enbl4oldRU_Ovrrd_D =
    1;                                 /* Referenced by: '<S771>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_HTShtOffVlv_Cmd_Diag_D =
    0;                                 /* Referenced by: '<S783>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_HTShtOffVlv_Cmd_Diag_SD =
    0;                                 /* Referenced by: '<S784>/Calib' */

#endif

#if (Rte_SysCon_Variant_THDR_10 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_11 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_13) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_19) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_9)

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_HT_CabVlvSts_RCVR_Pct_SelDial = 0;/* Referenced by: '<S1243>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_ECHTISPerf_ECHTISShrtHi_Enbl = 1;/* Referenced by: '<S271>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_ECHTISPerf_ECHTISShrtLo_Enbl = 1;/* Referenced by: '<S272>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_ECHTISPerf_ECHTinPerf_Enbl = 1;/* Referenced by: '<S273>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_ECHTISPerf_ECHoutPerf_Enbl = 1;/* Referenced by: '<S274>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_IUMPR_ECHTISPerf_Enbl = 1;/* Referenced by: '<S275>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_ECHTISPerf_HCCTISPerf_Enbl = 1;/* Referenced by: '<S293>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_ECHTISPerf_HCCTISShrtHi_Enbl = 1;/* Referenced by: '<S294>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_ECHTISPerf_HCCTISShrtLo_Enbl = 1;/* Referenced by: '<S295>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_ECHTISPerf_HTAPPerf_Enbl = 1;/* Referenced by: '<S276>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_ECHTISPerf_HTAPTempPerf_Enbl = 1;/* Referenced by: '<S277>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_ECHTISPerf_LIN1Off_Enbl = 0;/* Referenced by: '<S278>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_ECHTISPerf_LIN2Off_Enbl = 1;/* Referenced by: '<S279>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_ECHTISPerf_LOCwECH_Enbl = 0;/* Referenced by: '<S280>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_IUMPR_ECHTISPerf_Ovrrd =
    0;                                 /* Referenced by: '<S281>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_ECHTISPerf_Relay_Enbl = 1;/* Referenced by: '<S282>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_ECHinPerf_ECHTISPerf_Enbl = 1;/* Referenced by: '<S216>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_ECHinPerf_ECHTISShrtHi_Enbl = 1;/* Referenced by: '<S217>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_ECHinPerf_ECHTISShrtLo_Enbl = 1;/* Referenced by: '<S218>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_ECHinPerf_ECHoutPerf_Enbl = 1;/* Referenced by: '<S195>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_IUMPR_ECHinPerf_Enbl = 1;/* Referenced by: '<S196>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_ECHinPerf_HCCTISPerf_Enbl = 1;/* Referenced by: '<S220>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_ECHinPerf_HCCTISShrtHi_Enbl = 1;/* Referenced by: '<S221>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_ECHinPerf_HCCTISShrtLo_Enbl = 1;/* Referenced by: '<S222>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_ECHinPerf_HTAPPerf_Enbl = 1;/* Referenced by: '<S197>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_ECHinPerf_HTAPTempPerf_Enbl = 1;/* Referenced by: '<S198>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_ECHinPerf_LIN1Off_Enbl = 0;/* Referenced by: '<S199>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_ECHinPerf_LIN2Off_Enbl = 1;/* Referenced by: '<S200>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_ECHinPerf_LOCwECH_Enbl = 1;/* Referenced by: '<S201>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_IUMPR_ECHinPerf_Ovrrd = 0;/* Referenced by: '<S202>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_ECHoutPerf_ECHTISPerf_Enbl = 1;/* Referenced by: '<S180>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_ECHoutPerf_ECHTISShrtHi_Enbl = 1;/* Referenced by: '<S181>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_ECHoutPerf_ECHTISShrtLo_Enbl = 1;/* Referenced by: '<S182>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_ECHoutPerf_ECHinPerf_Enbl = 1;/* Referenced by: '<S159>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_IUMPR_ECHoutPerf_Enbl = 1;/* Referenced by: '<S160>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_ECHoutPerf_HCCTISPerf_Enbl = 1;/* Referenced by: '<S184>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_ECHoutPerf_HCCTISShrtHi_Enbl = 1;/* Referenced by: '<S185>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_ECHoutPerf_HCCTISShrtLo_Enbl = 1;/* Referenced by: '<S186>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_ECHoutPerf_HTAPPerf_Enbl = 1;/* Referenced by: '<S161>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_ECHoutPerf_HTAPTempPerf_Enbl = 1;/* Referenced by: '<S162>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_ECHoutPerf_LIN1Off_Enbl = 0;/* Referenced by: '<S163>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_ECHoutPerf_LIN2Off_Enbl = 1;/* Referenced by: '<S164>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_ECHoutPerf_LOCwECH_Enbl = 1;/* Referenced by: '<S165>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_IUMPR_ECHoutPerf_Ovrrd =
    0;                                 /* Referenced by: '<S166>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_HCCTISPerf_ECHTISPerf_Enbl = 1;/* Referenced by: '<S148>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_HCCTISPerf_ECHTISShrtHi_Enbl = 1;/* Referenced by: '<S149>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_HCCTISPerf_ECHTISShrtLo_Enbl = 1;/* Referenced by: '<S150>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_HCCTISPerf_ECHTinPerf_Enbl = 1;/* Referenced by: '<S125>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_HCCTISPerf_ECHoutPerf_Enbl = 1;/* Referenced by: '<S126>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_IUMPR_HCCTISPerf_Enbl = 1;/* Referenced by: '<S127>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_HCCTISPerf_HCCTISShrtHi_Enbl = 1;/* Referenced by: '<S128>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_HCCTISPerf_HCCTISShrtLo_Enbl = 1;/* Referenced by: '<S129>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_HCCTISPerf_HTAPPerf_Enbl = 1;/* Referenced by: '<S130>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_HCCTISPerf_HTAPTempPerf_Enbl = 1;/* Referenced by: '<S131>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_HCCTISPerf_LIN1Off_Enbl = 0;/* Referenced by: '<S132>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_HCCTISPerf_LIN2Off_Enbl = 1;/* Referenced by: '<S133>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_IUMPR_HCCTISPerf_Ovrrd =
    0;                                 /* Referenced by: '<S134>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_HCCTISPerf_Relay_Enbl = 1;/* Referenced by: '<S135>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_HTAPTempPerf_ECHTISPerf_Enbl = 1;/* Referenced by: '<S253>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_HTAPTempPerf_ECHTISShrtHi_Enbl = 1;/* Referenced by: '<S254>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_HTAPTempPerf_ECHTISShrtLo_Enbl = 1;/* Referenced by: '<S255>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_HTAPTempPerf_ECHTinPerf_Enbl = 1;/* Referenced by: '<S231>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_HTAPTempPerf_ECHoutPerf_Enbl = 1;/* Referenced by: '<S232>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_IUMPR_HTAPTempPerf_Enbl =
    1;                                 /* Referenced by: '<S233>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_HTAPTempPerf_HCCTISPerf_Enbl = 1;/* Referenced by: '<S257>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_HTAPTempPerf_HCCTISShrtHi_Enbl = 1;/* Referenced by: '<S258>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_HTAPTempPerf_HCCTISShrtLo_Enbl = 1;/* Referenced by: '<S259>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_HTAPTempPerf_HTAPPerf_Enbl = 1;/* Referenced by: '<S234>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_HTAPTempPerf_LIN1Off_Enbl = 0;/* Referenced by: '<S235>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_HTAPTempPerf_LIN2Off_Enbl = 1;/* Referenced by: '<S236>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_HTAPTempPerf_LOCwECH_Enbl = 1;/* Referenced by: '<S237>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_IUMPR_HTAPTempPerf_Ovrrd =
    0;                                 /* Referenced by: '<S238>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_1

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_HTAPTempPerf_Relay_Enbl = 1;/* Referenced by: '<S239>/Calib' */

#endif

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_IUMPR_LTPP2Perf_D = 0;/* Referenced by: '<S1283>/Calib' */

#if Rte_SysCon_Variant_THDR_2

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_LTPP2Perf_LINBus2_Enbl = 1;/* Referenced by: '<S377>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_2

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_LTPP2Perf_LTPPTempPerf_Enbl = 1;/* Referenced by: '<S378>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_2

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_LTPP2Perf_OCCTOSShrtHi_Enbl = 1;/* Referenced by: '<S379>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_2

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_LTPP2Perf_OCCTOSShrtLo_Enbl = 1;/* Referenced by: '<S380>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_2

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_LTPP2Perf_PECP2Perf_Enbl = 1;/* Referenced by: '<S381>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_2

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_LTPP2Perf_PECP2_DryRnChk_Enbl = 1;/* Referenced by: '<S382>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_2

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_LTPP2Perf_PECPPerf_Enbl = 1;/* Referenced by: '<S383>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_2

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_LTPP2Perf_PECP_DryRnChk_Enbl = 1;/* Referenced by: '<S384>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_2

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_LTPP2Perf_PECTOSPerf_Enbl = 1;/* Referenced by: '<S385>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_2

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_LTPP2Perf_PPCTISPerf_Enbl = 1;/* Referenced by: '<S386>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_2

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_LTPP2Perf_PPCTISShrtHi_Enbl = 1;/* Referenced by: '<S387>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_2

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_LTPP2Perf_PPCTISShrtLo_Enbl = 1;/* Referenced by: '<S388>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_2

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_LTPP2Perf_Relay_Enbl = 1;/* Referenced by: '<S389>/Calib' */

#endif

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_IUMPR_LTPP2Perf_SD = 0;/* Referenced by: '<S1284>/Calib' */
static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_IUMPR_LTPPPerf_D = 0;/* Referenced by: '<S1281>/Calib' */

#if Rte_SysCon_Variant_THDR_2

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_LTPPPerf_LINBus1_Enbl = 0;/* Referenced by: '<S354>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_2

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_LTPPPerf_LINBus2_Enbl = 0;/* Referenced by: '<S355>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_2

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_LTPPPerf_LTPP2TempPerf_Enbl = 1;/* Referenced by: '<S356>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_2

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_LTPPPerf_OCCTOSShrtHi_Enbl = 1;/* Referenced by: '<S357>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_2

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_LTPPPerf_OCCTOSShrtLo_Enbl = 1;/* Referenced by: '<S358>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_2

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_LTPPPerf_PECP2Perf_Enbl = 1;/* Referenced by: '<S359>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_2

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_LTPPPerf_PECP2_DryRnChk_Enbl = 1;/* Referenced by: '<S360>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_2

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_LTPPPerf_PECPPerf_Enbl = 1;/* Referenced by: '<S361>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_2

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_LTPPPerf_PECP_DryRnChk_Enbl = 1;/* Referenced by: '<S362>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_2

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_LTPPPerf_PECTOSPerf_Enbl = 1;/* Referenced by: '<S363>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_2

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_LTPPPerf_PPCTISPerf_Enbl = 1;/* Referenced by: '<S364>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_2

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_LTPPPerf_PPCTISShrtHi_Enbl = 1;/* Referenced by: '<S365>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_2

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_LTPPPerf_PPCTISShrtLo_Enbl = 1;/* Referenced by: '<S366>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_2

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_IUMPR_LTPPPerf_Relay_Enbl
    = 1;                               /* Referenced by: '<S367>/Calib' */

#endif

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_IUMPR_LTPPPerf_SD = 0;/* Referenced by: '<S1282>/Calib' */
static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_IUMPR_PECTOSPerf_D = 0;/* Referenced by: '<S1279>/Calib' */

#if Rte_SysCon_Variant_THDR_2

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_PECTOSPerf_LOCBPCM_Enbl = 0;/* Referenced by: '<S330>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_2

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_PECTOSPerf_LTPP2TempPerf_Enbl = 1;/* Referenced by: '<S331>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_2

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_PECTOSPerf_LTPPTempPerf_Enbl = 1;/* Referenced by: '<S332>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_2

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_PECTOSPerf_OCCTOSShrtHi_Enbl = 1;/* Referenced by: '<S333>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_2

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_PECTOSPerf_OCCTOSShrtLo_Enbl = 1;/* Referenced by: '<S334>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_2

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_PECTOSPerf_PECP2Perf_Enbl = 1;/* Referenced by: '<S335>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_2

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_PECTOSPerf_PECP2_DryRnChk_Enbl = 1;/* Referenced by: '<S336>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_2

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_PECTOSPerf_PECPPerf_Enbl = 1;/* Referenced by: '<S337>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_2

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_PECTOSPerf_PECP_DryRnChk_Enbl = 1;/* Referenced by: '<S338>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_2

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_PECTOSPerf_PPCTISPerf_Enbl = 1;/* Referenced by: '<S339>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_2

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_PECTOSPerf_PPCTISShrtHi_Enbl = 1;/* Referenced by: '<S340>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_2

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_PECTOSPerf_PPCTISShrtLo_Enbl = 1;/* Referenced by: '<S341>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_2

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_PECTOSPerf_Relay_Enbl = 1;/* Referenced by: '<S342>/Calib' */

#endif

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_IUMPR_PECTOSPerf_SD = 0;/* Referenced by: '<S1280>/Calib' */

#if Rte_SysCon_Variant_THDR_2

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_PECTOSPerf_ePTBusOff_Enbl = 0;/* Referenced by: '<S343>/Calib' */

#endif

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_IUMPR_PPCTISPerf_D = 0;/* Referenced by: '<S1277>/Calib' */

#if Rte_SysCon_Variant_THDR_2

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_PPCTISPerf_LTPP2TempPerf_Enbl = 1;/* Referenced by: '<S308>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_2

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_PPCTISPerf_LTPPTempPerf_Enbl = 1;/* Referenced by: '<S309>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_2

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_PPCTISPerf_OCCTOSShrtHi_Enbl = 1;/* Referenced by: '<S310>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_2

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_PPCTISPerf_OCCTOSShrtLo_Enbl = 1;/* Referenced by: '<S311>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_2

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_PPCTISPerf_PECP2Perf_Enbl = 1;/* Referenced by: '<S312>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_2

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_PPCTISPerf_PECP2_DryRnChk_Enbl = 1;/* Referenced by: '<S313>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_2

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_PPCTISPerf_PECPPerf_Enbl = 1;/* Referenced by: '<S314>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_2

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_PPCTISPerf_PECP_DryRnChk_Enbl = 1;/* Referenced by: '<S315>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_2

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_PPCTISPerf_PECTOSPerf_Enbl = 1;/* Referenced by: '<S316>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_2

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_PPCTISPerf_PPCTISShrtHi_Enbl = 1;/* Referenced by: '<S317>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_2

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_PPCTISPerf_PPCTISShrtLo_Enbl = 1;/* Referenced by: '<S318>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_2

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_IUMPR_PPCTISPerf_Relay_Enbl = 1;/* Referenced by: '<S319>/Calib' */

#endif

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_IUMPR_PPCTISPerf_SD = 0;/* Referenced by: '<S1278>/Calib' */
static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_InTmpSns_FltDtct_Dial = 0;/* Referenced by: '<S1258>/Calib' */
static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_InTmpSns_FltDtct_SD = 0;/* Referenced by: '<S1259>/Calib' */

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_LIN1_BusOff_Ovrrd_D = 1;/* Referenced by: '<S798>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_LIN2_BusOff_Ovrrd_D = 0;/* Referenced by: '<S799>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_LRCTOS_NtPrsnt = 0;/* Referenced by: '<S1115>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_LRCTOS_Temp_FA_D = 0;/* Referenced by: '<S1199>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_LRCTOS_Temp_FA_SD = 0;/* Referenced by: '<S1200>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_7 && Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_LRCTOS_XYEnbl = 1;/* Referenced by: '<S888>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_7 && Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_LRCTOS_XYFlt = 1;/* Referenced by: '<S889>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_LTCL_GlblEnbl_Ovrd = 1;/* Referenced by: '<S1024>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_8 && Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_LTCL_LTPP2_FA_EnblCnds =
    1;                                 /* Referenced by: '<S1062>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_LTCL_LTPP2_FA_FltCndsEnbl
    = 1;                               /* Referenced by: '<S1116>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_LTCL_LTPP_FA_EnblCnds = 1;/* Referenced by: '<S1078>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_LTCL_LTPP_FA_FltCndsEnbl =
    1;                                 /* Referenced by: '<S1118>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_LTCL_PECTOS_FA_EnblCnds =
    1;                                 /* Referenced by: '<S1093>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_LTCL_PECTOS_FA_FltCndsEnbl = 0;/* Referenced by: '<S1120>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_LTCL_SysVoltChck_Ovrd = 0;/* Referenced by: '<S1019>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_LTCL_TempSnsrRtnlty_Enbl_1_Ovrd = 1;/* Referenced by: '<S1010>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_LTCL_TempSnsrRtnlty_GEN1_Comm_Ovrd = 1;/* Referenced by: '<S1020>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_LTCL_TempSnsrRtnlty_GEN2_Comm_Ovrd = 0;/* Referenced by: '<S1021>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_LTCL_TempSnsrRtnlty_LTPP2_Chk_Enbl = 0;/* Referenced by: '<S1025>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_LTCL_TempSnsrRtnlty_LTPP2_DryRn_Ovrd = 0;/* Referenced by: '<S1030>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_LTCL_TempSnsrRtnlty_LTPP2_MinTime_Ovrd = 0;/* Referenced by: '<S1031>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_LTCL_TempSnsrRtnlty_LTPP2_PrfmncEnbl_Ovrd = 0;/* Referenced by: '<S1032>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_LTCL_TempSnsrRtnlty_LTPP2_Prfmnc_Ovrd = 0;/* Referenced by: '<S1033>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_LTCL_TempSnsrRtnlty_LTPP2_RPM_Ovrd = 0;/* Referenced by: '<S1034>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_8 && Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_LTCL_TempSnsrRtnlty_LTPP2_TempFA_Enbl = 0;/* Referenced by: '<S1063>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_LTCL_TempSnsrRtnlty_LTPP_DryRn_Ovrd = 0;/* Referenced by: '<S1041>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_LTCL_TempSnsrRtnlty_LTPP_MinTime_Ovrd = 0;/* Referenced by: '<S1042>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_LTCL_TempSnsrRtnlty_LTPP_PrfmncEnbl_Ovrd = 0;/* Referenced by: '<S1043>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_LTCL_TempSnsrRtnlty_LTPP_Prfmnc_Ovrd = 0;/* Referenced by: '<S1044>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_LTCL_TempSnsrRtnlty_LTPP_RPM_Ovrd = 0;/* Referenced by: '<S1045>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_LTCL_TempSnsrRtnlty_LTPP_TempFA_Enbl = 0;/* Referenced by: '<S1079>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_LTCL_TempSnsrRtnlty_PECTOS_TempFA_Enbl = 1;/* Referenced by: '<S1094>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_LTCL_TempSnsrRtnlty_PPCTIS_TempFA_Enbl = 1;/* Referenced by: '<S1109>/Calib' */

#endif

#if !Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_LTCL_TempSnsrRtnlty_ThrmlRlyCrkt_Ovrd = 0;/* Referenced by: '<S1022>/Calib' */

#endif

#if !Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_LTCL_TempSnsrRtnlty_ThrmlSysEnbl_Ovrd = 0;/* Referenced by: '<S1023>/Calib' */

#endif

#if (Rte_SysCon_Variant_THDR_10 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_11 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_13) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_19) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_9)

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_LTPP2_FunPer_FltDtct_D =
    0;                                 /* Referenced by: '<S1246>/Calib' */

#endif

#if (Rte_SysCon_Variant_THDR_10 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_11 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_13) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_19) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_9)

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_LTPP2_FunPer_FltDtct_SD =
    0;                                 /* Referenced by: '<S1247>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_LTPP2_NtPrsnt = 0;/* Referenced by: '<S1117>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_LTPP2_Temp_FA_D = 1;/* Referenced by: '<S1201>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_LTPP2_Temp_FA_SD = 0;/* Referenced by: '<S1202>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_8 && Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_LTPP2_XYEnbl = 1;/* Referenced by: '<S912>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_8 && Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_LTPP2_XYFlt = 1;/* Referenced by: '<S913>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_LTPP_Flt = 1;/* Referenced by: '<S933>/Calib' */

#endif

#if (Rte_SysCon_Variant_THDR_10 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_11 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_13) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_19) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_9)

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_LTPP_FunPer_FltDtct_D = 0;/* Referenced by: '<S1244>/Calib' */

#endif

#if (Rte_SysCon_Variant_THDR_10 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_11 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_13) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_19) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_9)

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_LTPP_FunPer_FltDtct_SD =
    0;                                 /* Referenced by: '<S1245>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_LTPP_NtPrsnt = 0;/* Referenced by: '<S1119>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_LTPP_Temp_FA_D = 1;/* Referenced by: '<S1203>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_LTPP_Temp_FA_SD = 0;/* Referenced by: '<S1204>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_LTPP_XYEnbl = 1;/* Referenced by: '<S934>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_7 && Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_LTRVlv_Chck_Ovrd = 0;/* Referenced by: '<S1052>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_M182_HTL_LINBusOff_LOC_Ovrrd_D = 0;/* Referenced by: '<S800>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_7 && Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_MtrElect_CT_SnsrBPerf_LtchEnbl = 1;/* Referenced by: '<S890>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_MtrElect_CT_SnsrPerf_LtchEnbl = 1;/* Referenced by: '<S975>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_MtrElect_CoolPmpATempSnsrPerf_LtchEnbl = 1;/* Referenced by: '<S935>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_8 && Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_b_MtrElect_CoolPmpBTempSnsrPerf_LtchEnbl = 1;/* Referenced by: '<S914>/Calib' */

#endif

#if (Rte_SysCon_Variant_THDR_10 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_11 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_13) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_19) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_9)

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_OCDiagFA_HTCV_D = 0;/* Referenced by: '<S1232>/Calib' */

#endif

#if (Rte_SysCon_Variant_THDR_10 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_11 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_13) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_19) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_9)

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_OCDiagFA_HTCV_SD = 0;/* Referenced by: '<S1233>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_19

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_OEXV_In_XYEnbl = 1;/* Referenced by: '<S481>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_19

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_OEXV_Out_XYEnbl = 1;/* Referenced by: '<S501>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_OOCTOS_Flt = 1;/* Referenced by: '<S955>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_OOCTOS_XYEnbl = 1;/* Referenced by: '<S956>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_PECTOS_NtPrsnt = 0;/* Referenced by: '<S1121>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_PECTOS_Temp_FA_D = 1;/* Referenced by: '<S1205>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_PECTOS_Temp_FA_SD = 0;/* Referenced by: '<S1206>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_PPCTISOT_AmbTempChck_OV =
    0;                                 /* Referenced by: '<S408>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_PPCTISOT_DryRunDTC_OV = 0;/* Referenced by: '<S409>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_PPCTISOT_Flt_En = 1;/* Referenced by: '<S420>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_PPCTISOT_KeyRun_OV = 0;/* Referenced by: '<S410>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_PPCTISOT_LTPP2_DryRun_OV =
    0;                                 /* Referenced by: '<S411>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_PPCTISOT_LTPP_Perf_OV = 0;/* Referenced by: '<S412>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_PPCTISOT_P0A01_OV = 0;/* Referenced by: '<S413>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_PPCTISOT_PPCTISFA_OV = 0;/* Referenced by: '<S414>/Calib' */

#endif

#if !Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_PPCTISOT_ThrmlRlyCkt_OV =
    0;                                 /* Referenced by: '<S415>/Calib' */

#endif

#if !Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_PPCTISOT_ThrmlRly_OV = 0;/* Referenced by: '<S416>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_PPCTIS_Flt = 1;/* Referenced by: '<S976>/Calib' */

#endif

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_PPCTIS_FltDtct_Dial = 0;/* Referenced by: '<S1260>/Calib' */
static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_PPCTIS_FltDtct_SD = 0;/* Referenced by: '<S1261>/Calib' */

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_PPCTIS_NtPrsnt = 0;/* Referenced by: '<S1122>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_PPCTIS_OT_Diag_Enable = 1;/* Referenced by: '<S400>/Calib' */

#endif

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_PPCTIS_OT_FltDtct_Dial =
    0;                                 /* Referenced by: '<S1254>/Calib' */
static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_PPCTIS_OT_FltDtct_SD = 0;/* Referenced by: '<S1255>/Calib' */
static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_PPCTIS_RtnltyEnbl_D = 0;/* Referenced by: '<S1262>/Calib' */
static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_PPCTIS_RtnltyEnbl_SD = 0;/* Referenced by: '<S1263>/Calib' */

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_PPCTIS_Temp_FA_D = 1;/* Referenced by: '<S1207>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_PPCTIS_Temp_FA_SD = 0;/* Referenced by: '<S1208>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_PPCTIS_XYEnbl = 1;/* Referenced by: '<S977>/Calib' */

#endif

#if (Rte_SysCon_Variant_THDR_10 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_11 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_13) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_19) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_9)

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_PostClrDiagDsbl_OvrdEnbl =
    0;                                 /* Referenced by: '<S1238>/Calib' */

#endif

#if (Rte_SysCon_Variant_THDR_10 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_11 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_13) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_19) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_9)

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_PostClrDiagDsbl_OvrdVal =
    0;                                 /* Referenced by: '<S1239>/Calib' */

#endif

#if (Rte_SysCon_Variant_THDR_10 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_11 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_13) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_19) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_9)

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_STBDiagFA_HTCV_D = 0;/* Referenced by: '<S1230>/Calib' */

#endif

#if (Rte_SysCon_Variant_THDR_10 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_11 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_13) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_19) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_9)

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_STBDiagFA_HTCV_SD = 0;/* Referenced by: '<S1231>/Calib' */

#endif

#if (Rte_SysCon_Variant_THDR_10 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_11 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_13) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_19) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_9)

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_STGDiagFA_HTCV_D = 0;/* Referenced by: '<S1228>/Calib' */

#endif

#if (Rte_SysCon_Variant_THDR_10 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_11 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_13) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_19) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_9)

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_STGDiagFA_HTCV_SD = 0;/* Referenced by: '<S1229>/Calib' */

#endif

#if (!Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_13) || (!Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_9) || Rte_SysCon_Variant_THDR_19

static volatile CONST(boolean, THDR_VAR_INIT) KeTHDR_b_ThrmlRlyCtrlCkt_D = 0;/* Referenced by: '<S14>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_19

static volatile CONST(float32, THDR_VAR_INIT) KeTHDR_dn_EAC_CompAccelThr = 1.0F;/* Referenced by: '<S537>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_19

static volatile CONST(float32, THDR_VAR_INIT) KeTHDR_dn_EAC_CompMinAccel = 1.0F;/* Referenced by: '<S538>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(TePMPR_e_FTSNA, THDR_VAR_INIT) KeTHDR_e_LTPP2_NoDryRun =
    CePMPR_e_FTSNA_False;              /* Referenced by: '<S1035>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(TePMPR_e_FTSNA, THDR_VAR_INIT) KeTHDR_e_LTPP_NoDryRun =
    CePMPR_e_FTSNA_False;              /* Referenced by: '<S1046>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(sint8, THDR_VAR_INIT) KeTHDR_i_HTCL_TmpSnsrRat_Level_s1s2 =
    1;                                 /* Referenced by:
                                        * '<S823>/Calib'
                                        * '<S837>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(sint8, THDR_VAR_INIT) KeTHDR_i_HTCL_TmpSnsrRat_Level_s1s3 =
    3;                                 /* Referenced by:
                                        * '<S824>/Calib'
                                        * '<S838>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(sint8, THDR_VAR_INIT) KeTHDR_i_HTCL_TmpSnsrRat_Level_s1s4 =
    1;                                 /* Referenced by:
                                        * '<S839>/Calib'
                                        * '<S829>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_THDR_13 && Rte_SysCon_Variant_THDR_5

static volatile CONST(sint8, THDR_VAR_INIT)
    KeTHDR_i_HTCL_TmpSnsrRat_Level_s1s4_HTRVlvBypass = 3;/* Referenced by: '<S833>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(sint8, THDR_VAR_INIT) KeTHDR_i_HTCL_TmpSnsrRat_Level_s1s5 =
    2;                                 /* Referenced by:
                                        * '<S825>/Calib'
                                        * '<S840>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(sint8, THDR_VAR_INIT) KeTHDR_i_HTCL_TmpSnsrRat_Level_s2s3 =
    2;                                 /* Referenced by:
                                        * '<S826>/Calib'
                                        * '<S841>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(sint8, THDR_VAR_INIT) KeTHDR_i_HTCL_TmpSnsrRat_Level_s2s4 =
    1;                                 /* Referenced by:
                                        * '<S842>/Calib'
                                        * '<S830>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_THDR_13 && Rte_SysCon_Variant_THDR_5

static volatile CONST(sint8, THDR_VAR_INIT)
    KeTHDR_i_HTCL_TmpSnsrRat_Level_s2s4_HTRVlvBypass = 3;/* Referenced by: '<S834>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(sint8, THDR_VAR_INIT) KeTHDR_i_HTCL_TmpSnsrRat_Level_s2s5 =
    2;                                 /* Referenced by:
                                        * '<S827>/Calib'
                                        * '<S843>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(sint8, THDR_VAR_INIT) KeTHDR_i_HTCL_TmpSnsrRat_Level_s3s4 =
    1;                                 /* Referenced by:
                                        * '<S844>/Calib'
                                        * '<S831>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_THDR_13 && Rte_SysCon_Variant_THDR_5

static volatile CONST(sint8, THDR_VAR_INIT)
    KeTHDR_i_HTCL_TmpSnsrRat_Level_s3s4_HTRVlvBypass = 3;/* Referenced by: '<S835>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(sint8, THDR_VAR_INIT) KeTHDR_i_HTCL_TmpSnsrRat_Level_s3s5 =
    2;                                 /* Referenced by:
                                        * '<S828>/Calib'
                                        * '<S845>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(sint8, THDR_VAR_INIT) KeTHDR_i_HTCL_TmpSnsrRat_Level_s4s5 =
    1;                                 /* Referenced by:
                                        * '<S846>/Calib'
                                        * '<S832>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_THDR_13 && Rte_SysCon_Variant_THDR_5

static volatile CONST(sint8, THDR_VAR_INIT)
    KeTHDR_i_HTCL_TmpSnsrRat_Level_s4s5_HTRVlvBypass = 3;/* Referenced by: '<S836>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_9

static volatile CONST(uint8, THDR_VAR_INIT)
    KeTHDR_i_LRCTOS_LTPP2_DiffLvl_CombHTL = 1U;/* Referenced by: '<S1168>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_9

static volatile CONST(uint8, THDR_VAR_INIT) KeTHDR_i_LRCTOS_LTPP_DiffLvl_CombBTL
    = 1U;                              /* Referenced by: '<S1164>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_9

static volatile CONST(uint8, THDR_VAR_INIT) KeTHDR_i_LRCTOS_LTPP_DiffLvl_CombHTL
    = 1U;                              /* Referenced by: '<S1169>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_9

static volatile CONST(uint8, THDR_VAR_INIT)
    KeTHDR_i_LRCTOS_PECTOS_DiffLvl_CombHTL = 1U;/* Referenced by: '<S1170>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_9

static volatile CONST(uint8, THDR_VAR_INIT)
    KeTHDR_i_LRCTOS_PPCTIS_DiffLvl_CombBTL = 1U;/* Referenced by: '<S1165>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_9

static volatile CONST(uint8, THDR_VAR_INIT)
    KeTHDR_i_LRCTOS_PPCTIS_DiffLvl_CombHTL = 1U;/* Referenced by: '<S1171>/Calib' */

#endif

#if (!Rte_SysCon_Variant_THDR_3 && !Rte_SysCon_Variant_THDR_5 && !Rte_SysCon_Variant_THDR_6 && Rte_SysCon_Variant_THDR_9) || (Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_9)

static volatile CONST(uint8, THDR_VAR_INIT) KeTHDR_i_LTPP2_LRCTOS_DiffLvl = 1U;/* Referenced by:
                                                                      * '<S1172>/Calib'
                                                                      * '<S1160>/Calib'
                                                                      * '<S1166>/Calib'
                                                                      */

#endif

#if (!Rte_SysCon_Variant_THDR_3 && !Rte_SysCon_Variant_THDR_5 && !Rte_SysCon_Variant_THDR_6 && Rte_SysCon_Variant_THDR_9) || (Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_9) || (Rte_SysCon_Variant_THDR_5 && Rte_SysCon_Variant_THDR_9) || (Rte_SysCon_Variant_THDR_6 && Rte_SysCon_Variant_THDR_9)

static volatile CONST(uint8, THDR_VAR_INIT) KeTHDR_i_LTPP2_PECTOS_DiffLvl = 1U;/* Referenced by:
                                                                      * '<S1173>/Calib'
                                                                      * '<S1141>/Calib'
                                                                      * '<S1157>/Calib'
                                                                      * '<S1191>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_THDR_6 && Rte_SysCon_Variant_THDR_9

static volatile CONST(uint8, THDR_VAR_INIT)
    KeTHDR_i_LTPP2_PECTOS_DiffLvl_CombBTL = 2U;/* Referenced by: '<S1188>/Calib' */

#endif

#if (!Rte_SysCon_Variant_THDR_3 && !Rte_SysCon_Variant_THDR_5 && !Rte_SysCon_Variant_THDR_6 && Rte_SysCon_Variant_THDR_9) || (Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_9) || (Rte_SysCon_Variant_THDR_5 && Rte_SysCon_Variant_THDR_9) || (Rte_SysCon_Variant_THDR_6 && Rte_SysCon_Variant_THDR_9)

static volatile CONST(uint8, THDR_VAR_INIT) KeTHDR_i_LTPP2_PPCTIS_DiffLvl = 1U;/* Referenced by:
                                                                      * '<S1174>/Calib'
                                                                      * '<S1185>/Calib'
                                                                      * '<S1142>/Calib'
                                                                      * '<S1158>/Calib'
                                                                      */

#endif

#if (!Rte_SysCon_Variant_THDR_3 && !Rte_SysCon_Variant_THDR_5 && !Rte_SysCon_Variant_THDR_6 && Rte_SysCon_Variant_THDR_9) || (Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_9)

static volatile CONST(uint8, THDR_VAR_INIT) KeTHDR_i_LTPP_LRCTOS_DiffLvl = 1U;/* Referenced by:
                                                                      * '<S1175>/Calib'
                                                                      * '<S1161>/Calib'
                                                                      */

#endif

#if (!Rte_SysCon_Variant_THDR_3 && !Rte_SysCon_Variant_THDR_5 && !Rte_SysCon_Variant_THDR_6 && Rte_SysCon_Variant_THDR_9) || (Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_9) || (Rte_SysCon_Variant_THDR_5 && Rte_SysCon_Variant_THDR_9) || (Rte_SysCon_Variant_THDR_6 && Rte_SysCon_Variant_THDR_9)

static volatile CONST(uint8, THDR_VAR_INIT) KeTHDR_i_LTPP_LTPP2_DiffLvl = 1U;/* Referenced by:
                                                                      * '<S1135>/Calib'
                                                                      * '<S1176>/Calib'
                                                                      * '<S1186>/Calib'
                                                                      * '<S1159>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_9

static volatile CONST(uint8, THDR_VAR_INIT) KeTHDR_i_LTPP_LTPP2_DiffLvl_CombHTL =
    1U;                                /* Referenced by: '<S1154>/Calib' */

#endif

#if (!Rte_SysCon_Variant_THDR_3 && !Rte_SysCon_Variant_THDR_5 && !Rte_SysCon_Variant_THDR_6 && Rte_SysCon_Variant_THDR_9) || (Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_9) || (Rte_SysCon_Variant_THDR_5 && Rte_SysCon_Variant_THDR_9) || (Rte_SysCon_Variant_THDR_6 && Rte_SysCon_Variant_THDR_9)

static volatile CONST(uint8, THDR_VAR_INIT) KeTHDR_i_LTPP_PECTOS_DiffLvl = 1U;/* Referenced by:
                                                                      * '<S1136>/Calib'
                                                                      * '<S1148>/Calib'
                                                                      * '<S1177>/Calib'
                                                                      * '<S1192>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_THDR_6 && Rte_SysCon_Variant_THDR_9

static volatile CONST(uint8, THDR_VAR_INIT) KeTHDR_i_LTPP_PECTOS_DiffLvl_CombBTL
    = 2U;                              /* Referenced by: '<S1189>/Calib' */

#endif

#if (!Rte_SysCon_Variant_THDR_3 && !Rte_SysCon_Variant_THDR_5 && !Rte_SysCon_Variant_THDR_6 && Rte_SysCon_Variant_THDR_9) || (Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_9) || (Rte_SysCon_Variant_THDR_5 && Rte_SysCon_Variant_THDR_9) || (Rte_SysCon_Variant_THDR_6 && Rte_SysCon_Variant_THDR_9)

static volatile CONST(uint8, THDR_VAR_INIT) KeTHDR_i_LTPP_PPCTIS_DiffLvl = 1U;/* Referenced by:
                                                                      * '<S1137>/Calib'
                                                                      * '<S1149>/Calib'
                                                                      * '<S1178>/Calib'
                                                                      * '<S1187>/Calib'
                                                                      */

#endif

#if (!Rte_SysCon_Variant_THDR_3 && !Rte_SysCon_Variant_THDR_5 && !Rte_SysCon_Variant_THDR_6 && Rte_SysCon_Variant_THDR_9) || (Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_9)

static volatile CONST(uint8, THDR_VAR_INIT) KeTHDR_i_PECTOS_LRCTOS_DiffLvl = 1U;/* Referenced by:
                                                                      * '<S1179>/Calib'
                                                                      * '<S1162>/Calib'
                                                                      * '<S1167>/Calib'
                                                                      */

#endif

#if (Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_9) || (Rte_SysCon_Variant_THDR_5 && Rte_SysCon_Variant_THDR_9)

static volatile CONST(uint8, THDR_VAR_INIT)
    KeTHDR_i_PECTOS_LTPP2_DiffLvl_CombHTL = 2U;/* Referenced by:
                                                * '<S1139>/Calib'
                                                * '<S1155>/Calib'
                                                */

#endif

#if (!Rte_SysCon_Variant_THDR_3 && !Rte_SysCon_Variant_THDR_5 && !Rte_SysCon_Variant_THDR_6 && Rte_SysCon_Variant_THDR_9) || (Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_9)

static volatile CONST(uint8, THDR_VAR_INIT) KeTHDR_i_PPCTIS_LRCTOS_DiffLvl = 1U;/* Referenced by:
                                                                      * '<S1180>/Calib'
                                                                      * '<S1163>/Calib'
                                                                      */

#endif

#if (Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_9) || (Rte_SysCon_Variant_THDR_5 && Rte_SysCon_Variant_THDR_9)

static volatile CONST(uint8, THDR_VAR_INIT)
    KeTHDR_i_PPCTIS_LTPP2_DiffLvl_CombHTL = 2U;/* Referenced by:
                                                * '<S1140>/Calib'
                                                * '<S1156>/Calib'
                                                */

#endif

#if (!Rte_SysCon_Variant_THDR_3 && !Rte_SysCon_Variant_THDR_5 && !Rte_SysCon_Variant_THDR_6 && Rte_SysCon_Variant_THDR_9) || (Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_9) || (Rte_SysCon_Variant_THDR_5 && Rte_SysCon_Variant_THDR_9) || (Rte_SysCon_Variant_THDR_6 && Rte_SysCon_Variant_THDR_9)

static volatile CONST(uint8, THDR_VAR_INIT) KeTHDR_i_PPCTIS_PECTOS_DiffLvl = 1U;/* Referenced by:
                                                                      * '<S1138>/Calib'
                                                                      * '<S1150>/Calib'
                                                                      * '<S1181>/Calib'
                                                                      * '<S1193>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_THDR_6 && Rte_SysCon_Variant_THDR_9

static volatile CONST(uint8, THDR_VAR_INIT)
    KeTHDR_i_PPCTIS_PECTOS_DiffLvl_CombBTL = 2U;/* Referenced by: '<S1190>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_19

static volatile CONST(float32, THDR_VAR_INIT) KeTHDR_n_EAC_SpdThrshld_LSP_Diag =
    1000.0F;                           /* Referenced by: '<S539>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_19

static volatile CONST(float32, THDR_VAR_INIT) KeTHDR_n_EAC_SpdThrshld_RSP_Diag =
    2500.0F;                           /* Referenced by: '<S540>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_19

static volatile CONST(float32, THDR_VAR_INIT) KeTHDR_n_EAC_SpdThrshld_Run =
    10.0F;                             /* Referenced by: '<S541>/Calib' */

#endif

#if (Rte_SysCon_Variant_THDR_10 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_11 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_13) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_19) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_9)

static volatile CONST(float32, THDR_VAR_INIT) KeTHDR_n_EngSpd_Dial = 0.0F;/* Referenced by: '<S1241>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(float32, THDR_VAR_INIT) KeTHDR_n_Eng_RPM_Min = 700.0F;/* Referenced by: '<S785>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(float32, THDR_VAR_INIT) KeTHDR_n_LTPP2_Min_RPM_Enbl =
    1500.0F;                           /* Referenced by: '<S1036>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(float32, THDR_VAR_INIT) KeTHDR_n_LTPP_Min_RPM_Enbl =
    1500.0F;                           /* Referenced by: '<S1047>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(float32, THDR_VAR_INIT) KeTHDR_n_MinDiag_HTAP_RPM = 100.0F;/* Referenced by: '<S786>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_11

static volatile CONST(float32, THDR_VAR_INIT)
    KeTHDR_t_AGS2_Perf_CurrPosFA_DbncTime = 1.0F;/* Referenced by: '<S61>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_11

static volatile CONST(float32, THDR_VAR_INIT)
    KeTHDR_t_AGS2_Perf_PosReqNoChgTime_Enbl = 3.0F;/* Referenced by: '<S53>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_11

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_t_AGS2_Perf_PosReqNoChgTime_OV = 0;/* Referenced by: '<S54>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_10

static volatile CONST(float32, THDR_VAR_INIT)
    KeTHDR_t_AGS_Perf_CurrPosFA_DbncTime = 1.0F;/* Referenced by: '<S105>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_10

static volatile CONST(float32, THDR_VAR_INIT)
    KeTHDR_t_AGS_Perf_PosReqNoChgTime_Enbl = 3.0F;/* Referenced by: '<S97>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_10

static volatile CONST(boolean, THDR_VAR_INIT)
    KeTHDR_t_AGS_Perf_PosReqNoChgTime_OV = 0;/* Referenced by: '<S98>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(float32, THDR_VAR_INIT) KeTHDR_t_CabVlvSts_Chk_DebTime =
    5.0F;                              /* Referenced by: '<S744>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_19

static volatile CONST(float32, THDR_VAR_INIT) KeTHDR_t_EAC_CompAC_Time = 1.0F;/* Referenced by: '<S542>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_19

static volatile CONST(float32, THDR_VAR_INIT) KeTHDR_t_EAC_FilterDeriv_CutOff =
    2.0F;                              /* Referenced by: '<S543>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_19

static volatile CONST(float32, THDR_VAR_INIT) KeTHDR_t_EAC_OffTimeCnt = 2.0F;/* Referenced by: '<S545>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_19

static volatile CONST(float32, THDR_VAR_INIT) KeTHDR_t_EEXV_OutTemp_FA_DbncTime =
    1.0F;                              /* Referenced by: '<S560>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(float32, THDR_VAR_INIT)
    KeTHDR_t_HTCL_BSWFlt_Snsr2_DbncTime = 1.0F;/* Referenced by:
                                                * '<S763>/Calib'
                                                * '<S767>/Calib'
                                                */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(float32, THDR_VAR_INIT)
    KeTHDR_t_HTCL_BSWFlt_Snsr5_DbncTime = 1.0F;/* Referenced by: '<S810>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_8 && Rte_SysCon_Variant_THDR_9

static volatile CONST(float32, THDR_VAR_INIT) KeTHDR_t_LTPP2_FA_DbncTime = 1.0F;/* Referenced by: '<S1066>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(float32, THDR_VAR_INIT) KeTHDR_t_LTPP2_Min_Time_Enbl =
    20.0F;                             /* Referenced by: '<S1037>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(float32, THDR_VAR_INIT) KeTHDR_t_LTPP_FA_DbncTime = 1.0F;/* Referenced by: '<S1082>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(float32, THDR_VAR_INIT) KeTHDR_t_LTPP_Min_Time_Enbl =
    20.0F;                             /* Referenced by: '<S1048>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_13

static volatile CONST(float32, THDR_VAR_INIT) KeTHDR_t_MinDiag_HTAPOnTime = 5.0F;/* Referenced by: '<S787>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_19

static volatile CONST(float32, THDR_VAR_INIT) KeTHDR_t_OEXV_OutTemp_FA_DbncTime =
    1.0F;                              /* Referenced by: '<S570>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(float32, THDR_VAR_INIT) KeTHDR_t_PECTOS_FA_DbncTime = 1.0F;/* Referenced by: '<S1097>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(float32, THDR_VAR_INIT) KeTHDR_t_PPCTISOT_Diag = 0.1F;/* Referenced by: '<S421>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_9

static volatile CONST(float32, THDR_VAR_INIT) KeTHDR_t_PPCTISOT_TurnOffDelay =
    2.0F;                              /* Referenced by: '<S422>/Calib' */

#endif

#if Rte_SysCon_Variant_THDR_19

static volatile CONST(uint32, THDR_VAR_INIT) KeTHDR_t_VehicleSoakTime = 1U;/* Referenced by: '<S554>/Calib' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_THDR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_THDR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_THDR_11

static VAR(uint16, THDR_VAR_INIT) VeTHDR_Cnt_AGS2_Perf_FailCnt;/* '<S39>/Switch1' */

#endif

#if Rte_SysCon_Variant_THDR_11

static VAR(uint16, THDR_VAR_INIT) VeTHDR_Cnt_AGS2_Perf_SmpCnt;/* '<S40>/Switch1' */

#endif

#if Rte_SysCon_Variant_THDR_10

static VAR(uint16, THDR_VAR_INIT) VeTHDR_Cnt_AGS_Perf_FailCnt;/* '<S83>/Switch1' */

#endif

#if Rte_SysCon_Variant_THDR_10

static VAR(uint16, THDR_VAR_INIT) VeTHDR_Cnt_AGS_Perf_SmpCnt;/* '<S84>/Switch1' */

#endif

#if !Rte_SysCon_Variant_THDR_4 && Rte_SysCon_Variant_THDR_13

static VAR(uint16, THDR_VAR_INIT) VeTHDR_Cnt_ECHTIS_FailCnt;/* '<S653>/Switch1' */

#endif

#if !Rte_SysCon_Variant_THDR_4 && Rte_SysCon_Variant_THDR_13

static VAR(uint16, THDR_VAR_INIT) VeTHDR_Cnt_ECHTIS_SmpCnt;/* '<S654>/Switch1' */

#endif

#if Rte_SysCon_Variant_THDR_13

static VAR(uint16, THDR_VAR_INIT) VeTHDR_Cnt_ECH_In_FailCnt;/* '<S608>/Switch1' */

#endif

#if Rte_SysCon_Variant_THDR_13

static VAR(uint16, THDR_VAR_INIT) VeTHDR_Cnt_ECH_In_SmpCnt;/* '<S609>/Switch1' */

#endif

#if Rte_SysCon_Variant_THDR_13

static VAR(uint16, THDR_VAR_INIT) VeTHDR_Cnt_ECH_Out_FailCnt;/* '<S629>/Switch1' */

#endif

#if Rte_SysCon_Variant_THDR_13

static VAR(uint16, THDR_VAR_INIT) VeTHDR_Cnt_ECH_Out_SmpCnt;/* '<S630>/Switch1' */

#endif

#if Rte_SysCon_Variant_THDR_19

static VAR(uint16, THDR_VAR_INIT) VeTHDR_Cnt_EEXV_OutFailCnt;/* '<S471>/Switch1' */

#endif

#if Rte_SysCon_Variant_THDR_19

static VAR(uint16, THDR_VAR_INIT) VeTHDR_Cnt_EEXV_OutSampleCnt;/* '<S472>/Switch1' */

#endif

#if Rte_SysCon_Variant_THDR_13

static VAR(uint16, THDR_VAR_INIT) VeTHDR_Cnt_HCCTIS_FailCnt;/* '<S674>/Switch1' */

#endif

#if Rte_SysCon_Variant_THDR_13

static VAR(uint16, THDR_VAR_INIT) VeTHDR_Cnt_HCCTIS_SmpCnt;/* '<S675>/Switch1' */

#endif

#if Rte_SysCon_Variant_THDR_13 && Rte_SysCon_Variant_THDR_4

static VAR(uint16, THDR_VAR_INIT) VeTHDR_Cnt_HCCTOS_FailCnt;/* '<S698>/Switch1' */

#endif

#if Rte_SysCon_Variant_THDR_13 && Rte_SysCon_Variant_THDR_4

static VAR(uint16, THDR_VAR_INIT) VeTHDR_Cnt_HCCTOS_SmpCnt;/* '<S699>/Switch1' */

#endif

#if Rte_SysCon_Variant_THDR_13

static VAR(uint16, THDR_VAR_INIT) VeTHDR_Cnt_HTAP_FailCnt;/* '<S719>/Switch1' */

#endif

#if Rte_SysCon_Variant_THDR_13

static VAR(uint16, THDR_VAR_INIT) VeTHDR_Cnt_HTAP_SmpCnt;/* '<S720>/Switch1' */

#endif

#if Rte_SysCon_Variant_THDR_7 && Rte_SysCon_Variant_THDR_9

static VAR(uint16, THDR_VAR_INIT) VeTHDR_Cnt_LRCTOS_FailCnt;/* '<S900>/Switch1' */

#endif

#if Rte_SysCon_Variant_THDR_7 && Rte_SysCon_Variant_THDR_9

static VAR(uint16, THDR_VAR_INIT) VeTHDR_Cnt_LRCTOS_SmpCnt;/* '<S901>/Switch1' */

#endif

#if Rte_SysCon_Variant_THDR_8 && Rte_SysCon_Variant_THDR_9

static VAR(uint16, THDR_VAR_INIT) VeTHDR_Cnt_LTPP2_FailCnt;/* '<S924>/Switch1' */

#endif

#if Rte_SysCon_Variant_THDR_8 && Rte_SysCon_Variant_THDR_9

static VAR(uint16, THDR_VAR_INIT) VeTHDR_Cnt_LTPP2_SmpCnt;/* '<S925>/Switch1' */

#endif

#if Rte_SysCon_Variant_THDR_9

static VAR(uint16, THDR_VAR_INIT) VeTHDR_Cnt_LTPP_FailCnt;/* '<S945>/Switch1' */

#endif

#if Rte_SysCon_Variant_THDR_9

static VAR(uint16, THDR_VAR_INIT) VeTHDR_Cnt_LTPP_SmpCnt;/* '<S946>/Switch1' */

#endif

#if Rte_SysCon_Variant_THDR_9

static VAR(uint16, THDR_VAR_INIT) VeTHDR_Cnt_OCCTOS_FailCnt;/* '<S966>/Switch1' */

#endif

#if Rte_SysCon_Variant_THDR_9

static VAR(uint16, THDR_VAR_INIT) VeTHDR_Cnt_OCCTOS_SmpCnt;/* '<S967>/Switch1' */

#endif

#if Rte_SysCon_Variant_THDR_19

static VAR(uint16, THDR_VAR_INIT) VeTHDR_Cnt_OEXV_InFailCnt;/* '<S491>/Switch1' */

#endif

#if Rte_SysCon_Variant_THDR_19

static VAR(uint16, THDR_VAR_INIT) VeTHDR_Cnt_OEXV_InSampleCnt;/* '<S492>/Switch1' */

#endif

#if Rte_SysCon_Variant_THDR_19

static VAR(uint16, THDR_VAR_INIT) VeTHDR_Cnt_OEXV_OutFailCnt;/* '<S511>/Switch1' */

#endif

#if Rte_SysCon_Variant_THDR_19

static VAR(uint16, THDR_VAR_INIT) VeTHDR_Cnt_OEXV_OutSampleCnt;/* '<S512>/Switch1' */

#endif

#if Rte_SysCon_Variant_THDR_9

static VAR(uint16, THDR_VAR_INIT) VeTHDR_Cnt_PPCTIS_FailCnt;/* '<S987>/Switch1' */

#endif

#if Rte_SysCon_Variant_THDR_9

static VAR(uint16, THDR_VAR_INIT) VeTHDR_Cnt_PPCTIS_SmpCnt;/* '<S988>/Switch1' */

#endif

#if (Rte_SysCon_Variant_THDR_10 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_11 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_13) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_19) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_9)

static VAR(float32, THDR_VAR_INIT) VeTHDR_Pct_HT_CabVlvSts_AD;/* '<S1224>/Switch' */

#endif

#if Rte_SysCon_Variant_THDR_13

static VAR(float32, THDR_VAR_INIT) VeTHDR_T_HTCL_Temp1;/* '<S847>/Switch2' */

#endif

#if Rte_SysCon_Variant_THDR_13

static VAR(float32, THDR_VAR_INIT) VeTHDR_T_HTCL_Temp2;/* '<S848>/Switch2' */

#endif

#if Rte_SysCon_Variant_THDR_13

static VAR(float32, THDR_VAR_INIT) VeTHDR_T_HTCL_Temp3;/* '<S849>/Switch2' */

#endif

#if Rte_SysCon_Variant_THDR_13

static VAR(float32, THDR_VAR_INIT) VeTHDR_T_HTCL_Temp4;/* '<S850>/Switch2' */

#endif

#if Rte_SysCon_Variant_THDR_13

static VAR(float32, THDR_VAR_INIT) VeTHDR_T_HTCL_Temp5;/* '<S851>/Switch2' */

#endif

#if Rte_SysCon_Variant_THDR_19

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_ACL_CommonEnbl;/* '<S525>/Logical Operator' */

#endif

#if Rte_SysCon_Variant_THDR_19

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_ACL_CommonPerfEnbl;/* '<S525>/Logical Operator1' */

#endif

#if Rte_SysCon_Variant_THDR_11

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_AGS2_Perf_Enbl;/* '<S24>/Logical Operator4' */

#endif

#if Rte_SysCon_Variant_THDR_11

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_AGS2_Perf_FaultSymp;/* '<S25>/Logical Operator' */

#endif

#if Rte_SysCon_Variant_THDR_11

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_AGS2_Perf_PhysCond_Enbl;/* '<S24>/Logical Operator3' */

#endif

#if Rte_SysCon_Variant_THDR_11

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_AGS2_Perf_PosReqNoChgTime_Enbl;/* '<S24>/Logical Operator13' */

#endif

#if Rte_SysCon_Variant_THDR_11

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_AGS2_Perf_SysCond_Enbl;/* '<S24>/Logical Operator8' */

#endif

#if Rte_SysCon_Variant_THDR_11

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_AGS2_Perf_WaitFirstMvmt_Enbl;/* '<S24>/Logical Operator' */

#endif

#if Rte_SysCon_Variant_THDR_10

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_AGS_Perf_Enbl;/* '<S68>/Logical Operator4' */

#endif

#if Rte_SysCon_Variant_THDR_10

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_AGS_Perf_FaultSymp;/* '<S69>/Logical Operator' */

#endif

#if Rte_SysCon_Variant_THDR_10

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_AGS_Perf_PhysCond_Enbl;/* '<S68>/Logical Operator5' */

#endif

#if Rte_SysCon_Variant_THDR_10

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_AGS_Perf_PosReqNoChgTime_Enbl;/* '<S68>/Logical Operator13' */

#endif

#if Rte_SysCon_Variant_THDR_10

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_AGS_Perf_SysCond_Enbl;/* '<S68>/Logical Operator8' */

#endif

#if Rte_SysCon_Variant_THDR_10

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_AGS_Perf_WaitFirstMvmt_Enbl;/* '<S68>/Logical Operator' */

#endif

#if Rte_SysCon_Variant_THDR_13 && Rte_SysCon_Variant_THDR_5

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_CPV2_ByPassHTR;/* '<S816>/Comparison7' */

#endif

#if Rte_SysCon_Variant_THDR_13

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_CabVlvSts_Chk_Deb_NewApp;/* '<S749>/Gain' */

#endif

#if (Rte_SysCon_Variant_THDR_10 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_11 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_13) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_19) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_9)

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_DiagGlblCndtnsValid_OvrdVal_Dial;/* '<S1222>/Switch1' */

#endif

#if (Rte_SysCon_Variant_THDR_10 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_11 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_13) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_19) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_9)

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_DsblDiagFailSafe_Dial;/* '<S1222>/Switch5' */

#endif

#if Rte_SysCon_Variant_THDR_19

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_EAC_MinOnTimeEnbl;/* '<S529>/Logical Operator6' */

#endif

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_ECHTIS_FltDtct_B4D;/* synthesized block */

#if Rte_SysCon_Variant_THDR_13

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_ECH_In_Enbl_NewApp;/* '<S753>/Logical6' */

#endif

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_ECH_In_FltDtct_B4D;/* synthesized block */

#if Rte_SysCon_Variant_THDR_13

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_ECH_Out_Enbl_NewApp;/* '<S754>/Logical6' */

#endif

#if Rte_SysCon_Variant_THDR_13

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_ECH_Out_FltDtct;/* '<S620>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_THDR_19

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_EEXV_OutTempDiagEnbl;/* '<S526>/Logical Operator2' */

#endif

#if Rte_SysCon_Variant_THDR_19

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_EEXV_OutTempFltDtct;/* '<S462>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_THDR_19

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_EEXV_OutTempNoDcsFlg;/* '<S523>/Relational Operator13' */

#endif

#if Rte_SysCon_Variant_THDR_19

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_EEXV_OutTempRatDsbl;/* '<S524>/Logical Operator1' */

#endif

#if Rte_SysCon_Variant_THDR_19

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_EEXV_OutTempRatEnbl;/* '<S526>/Logical Operator' */

#endif

#if Rte_SysCon_Variant_THDR_19

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_EEXV_OutTempRatFlt;/* '<S523>/Relational Operator12' */

#endif

#if Rte_SysCon_Variant_THDR_19

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_EEXV_OutTemp_FA_Cnfrm;/* '<S563>/AND' */

#endif

#if Rte_SysCon_Variant_THDR_13

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_HCCTIS_Enbl_NewApp;/* '<S757>/Logical7' */

#endif

#if Rte_SysCon_Variant_THDR_13

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_HCCTIS_Enbl_P1P2_NewApp;/* '<S757>/Logical17' */

#endif

#if Rte_SysCon_Variant_THDR_13

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_HCCTIS_Enbl_RU_NewApp;/* '<S757>/Logical8' */

#endif

#if Rte_SysCon_Variant_THDR_13

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_HCCTIS_FltDtct;/* '<S665>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_THDR_13

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_HCCTOS_Enbl_NewApp;/* '<S758>/Logical2' */

#endif

#if Rte_SysCon_Variant_THDR_13 && Rte_SysCon_Variant_THDR_4

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_HCCTOS_FltDtct_B4D;/* '<S689>/Relational Operator' */

#endif

#if (Rte_SysCon_Variant_THDR_10 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_11 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_13) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_19) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_9)

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_HTAPFunPer_FltDtct_AD;/* '<S1227>/Switch' */

#endif

#if Rte_SysCon_Variant_THDR_13

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_HTAP_Enbl_NewApp;/* '<S759>/Logical5' */

#endif

#if Rte_SysCon_Variant_THDR_13

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_HTAP_TmpSnsr_FltDtct;/* '<S710>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_THDR_13

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_HTCL_Disbl1;/* '<S864>/Gain' */

#endif

#if Rte_SysCon_Variant_THDR_13

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_HTCL_Disbl2;/* '<S865>/Gain' */

#endif

#if Rte_SysCon_Variant_THDR_13

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_HTCL_Disbl3;/* '<S866>/Gain' */

#endif

#if Rte_SysCon_Variant_THDR_13

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_HTCL_Disbl4;/* '<S867>/Gain' */

#endif

#if Rte_SysCon_Variant_THDR_13

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_HTCL_Disbl5;/* '<S868>/Gain' */

#endif

#if Rte_SysCon_Variant_THDR_13

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_HTCL_FA_Rat_S1_Pred;/* '<S739>/Relational Operator4' */

#endif

#if Rte_SysCon_Variant_THDR_13

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_HTCL_FA_Rat_S2_Pred;/* '<S739>/Relational Operator10' */

#endif

#if Rte_SysCon_Variant_THDR_13

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_HTCL_FA_Rat_S3_Pred;/* '<S739>/Relational Operator12' */

#endif

#if Rte_SysCon_Variant_THDR_13

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_HTCL_FA_Rat_S4_Pred;/* '<S739>/Relational Operator18' */

#endif

#if Rte_SysCon_Variant_THDR_13

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_HTCL_FA_Rat_S5_Pred;/* '<S739>/Relational Operator24' */

#endif

#if Rte_SysCon_Variant_THDR_13

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_HTCL_S1_NoDecision;/* '<S739>/Relational Operator5' */

#endif

#if Rte_SysCon_Variant_THDR_13

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_HTCL_S2_NoDecision;/* '<S739>/Relational Operator11' */

#endif

#if Rte_SysCon_Variant_THDR_13

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_HTCL_S3_NoDecision;/* '<S739>/Relational Operator13' */

#endif

#if Rte_SysCon_Variant_THDR_13

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_HTCL_S4_NoDecision;/* '<S739>/Relational Operator19' */

#endif

#if Rte_SysCon_Variant_THDR_13

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_HTCL_S5_NoDecision;/* '<S739>/Relational Operator25' */

#endif

#if Rte_SysCon_Variant_THDR_13

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_HTCL_TempSnsrRat_FltSymptm_Snsr2;/* '<S731>/Logical8' */

#endif

#if Rte_SysCon_Variant_THDR_13

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_HTCL_TempSnsrRat_FltSymptm_Snsr3;/* '<S731>/Logical10' */

#endif

#if Rte_SysCon_Variant_THDR_13

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_HTCL_TempSnsrRat_FltSymptm_Snsr5;/* '<S731>/Logical14' */

#endif

#if Rte_SysCon_Variant_THDR_13

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_HTL_CPV2_Enbl;/* '<S773>/Switch1' */

#endif

#if Rte_SysCon_Variant_THDR_13

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_HTL_GlobalEnbl_2;/* '<S773>/Logical' */

#endif

#if Rte_SysCon_Variant_THDR_7 && Rte_SysCon_Variant_THDR_9

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_LRCTOS_FltDtct;/* '<S891>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_THDR_9

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_LRCTOS_FltSymFnl;/* '<S1110>/Switch' */

#endif

#if Rte_SysCon_Variant_THDR_9

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_LRCTOS_FltSymRaw_SF;/* '<S999>/Relational Operator24' */

#endif

#if Rte_SysCon_Variant_THDR_9

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_LRCTOS_NoDecision_SF;/* '<S999>/Relational Operator25' */

#endif

#if Rte_SysCon_Variant_THDR_9

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_LRCTOS_RtnlztnEnbl;/* synthesized block */

#endif

#if Rte_SysCon_Variant_THDR_9

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_LTCL_GlblRtnlztnEnbl1;/* '<S1008>/Logical17' */

#endif

#if Rte_SysCon_Variant_THDR_9

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_LTCL_GlblRtnlztnEnbl2;/* '<S1009>/Logical1' */

#endif

#if Rte_SysCon_Variant_THDR_8 && Rte_SysCon_Variant_THDR_9

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_LTPP2_FltDtct;/* '<S915>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_THDR_9

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_LTPP2_FltSymFnl;/* '<S1111>/Switch' */

#endif

#if Rte_SysCon_Variant_THDR_9

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_LTPP2_FltSymRaw_SF;/* '<S999>/Relational Operator10' */

#endif

#if (Rte_SysCon_Variant_THDR_10 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_11 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_13) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_19) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_9)

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_LTPP2_FunPer_FltDtct_AD;/* '<S1226>/Switch' */

#endif

#if Rte_SysCon_Variant_THDR_9

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_LTPP2_NoDecision_SF;/* '<S999>/Relational Operator11' */

#endif

#if Rte_SysCon_Variant_THDR_9

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_LTPP2_RtnlztnEnbl;/* synthesized block */

#endif

#if Rte_SysCon_Variant_THDR_9

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_LTPP_FltDtct;/* '<S936>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_THDR_9

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_LTPP_FltSymRaw_SF;/* '<S999>/Relational Operator4' */

#endif

#if Rte_SysCon_Variant_THDR_9

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_LTPP_FltSympFnl;/* '<S1112>/Switch' */

#endif

#if (Rte_SysCon_Variant_THDR_10 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_11 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_13) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_19) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_9)

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_LTPP_FunPer_FltDtct_AD;/* '<S1225>/Switch' */

#endif

#if Rte_SysCon_Variant_THDR_9

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_LTPP_NoDecision_SF;/* '<S999>/Relational Operator5' */

#endif

#if Rte_SysCon_Variant_THDR_9

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_LTPP_RtnlztnEnbl;/* '<S1005>/Logical4' */

#endif

#if Rte_SysCon_Variant_THDR_9

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_OCCTOS_FltDtct;/* '<S957>/Relational Operator' */

#endif

#if (Rte_SysCon_Variant_THDR_10 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_11 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_13) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_19) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_9)

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_OCDiagFA_HTCV_AD;/* '<S1221>/Switch' */

#endif

#if Rte_SysCon_Variant_THDR_19

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_OEXV_InTempDiagEnbl;/* '<S527>/Logical Operator1' */

#endif

#if Rte_SysCon_Variant_THDR_19

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_OEXV_InTempFltDtct;/* '<S482>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_THDR_19

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_OEXV_InTempNoDcsFlg;/* '<S523>/Relational Operator11' */

#endif

#if Rte_SysCon_Variant_THDR_19

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_OEXV_InTempRatDsbl;/* '<S524>/Logical Operator2' */

#endif

#if Rte_SysCon_Variant_THDR_19

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_OEXV_InTempRatEnbl;/* '<S527>/Logical Operator' */

#endif

#if Rte_SysCon_Variant_THDR_19

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_OEXV_InTempRatFlt;/* '<S523>/Relational Operator10' */

#endif

#if Rte_SysCon_Variant_THDR_19

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_OEXV_OutTempDiagEnbl;/* '<S528>/Logical Operator2' */

#endif

#if Rte_SysCon_Variant_THDR_19

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_OEXV_OutTempFltDtct;/* '<S502>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_THDR_19

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_OEXV_OutTempNoDcsFlg;/* '<S523>/Relational Operator5' */

#endif

#if Rte_SysCon_Variant_THDR_19

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_OEXV_OutTempRatDsbl;/* '<S524>/Logical Operator3' */

#endif

#if Rte_SysCon_Variant_THDR_19

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_OEXV_OutTempRatEnbl;/* '<S528>/Logical Operator' */

#endif

#if Rte_SysCon_Variant_THDR_19

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_OEXV_OutTempRatFlt;/* '<S523>/Relational Operator4' */

#endif

#if Rte_SysCon_Variant_THDR_19

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_OEXV_OutTemp_FA_Cnfrm;/* '<S573>/AND' */

#endif

#if Rte_SysCon_Variant_THDR_9

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_PECTOS_FltSymFnl;/* '<S1113>/Switch' */

#endif

#if Rte_SysCon_Variant_THDR_9

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_PECTOS_FltSymRaw_SF;/* '<S999>/Relational Operator18' */

#endif

#if Rte_SysCon_Variant_THDR_9

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_PECTOS_NoDecision_SF;/* '<S999>/Relational Operator19' */

#endif

#if Rte_SysCon_Variant_THDR_9

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_PECTOS_RtnlztnEnbl;/* '<S1006>/Logical6' */

#endif

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_PPCTIS_FltDtct_B4D;/* synthesized block */

#if Rte_SysCon_Variant_THDR_9

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_PPCTIS_FltSymFnl;/* '<S1114>/Switch' */

#endif

#if Rte_SysCon_Variant_THDR_9

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_PPCTIS_FltSymRaw_SF;/* '<S999>/Relational Operator12' */

#endif

#if Rte_SysCon_Variant_THDR_9

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_PPCTIS_NoDecision_SF;/* '<S999>/Relational Operator13' */

#endif

#if Rte_SysCon_Variant_THDR_9

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_PPCTIS_OT_DiagEn;/* '<S392>/Logical7' */

#endif

#if Rte_SysCon_Variant_THDR_9

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_PPCTIS_OT_Flt;/* '<S393>/Logical7' */

#endif

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_PPCTIS_OT_FltDtct_B4D;/* synthesized block */
static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_PPCTIS_RtnlztnEnbl;/* synthesized block */

#if (Rte_SysCon_Variant_THDR_10 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_11 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_13) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_19) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_9)

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_PostCodeClrDiagDsbl_OvrdVal_Dial;/* '<S1222>/Switch6' */

#endif

#if Rte_SysCon_Variant_THDR_10 || Rte_SysCon_Variant_THDR_11 || Rte_SysCon_Variant_THDR_13 || Rte_SysCon_Variant_THDR_19 || Rte_SysCon_Variant_THDR_9

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_ResetCnts;/* '<S17>/Gain' */

#endif

#if Rte_SysCon_Variant_THDR_10 || Rte_SysCon_Variant_THDR_11 || Rte_SysCon_Variant_THDR_13 || Rte_SysCon_Variant_THDR_19 || Rte_SysCon_Variant_THDR_9

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_ResetFOMs;/* '<S16>/Gain' */

#endif

#if (Rte_SysCon_Variant_THDR_10 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_11 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_13) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_19) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_9)

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_STBDiagFA_HTCV_AD;/* '<S1220>/Switch' */

#endif

#if (Rte_SysCon_Variant_THDR_10 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_11 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_13) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_19) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_9)

static VAR(boolean, THDR_VAR_INIT) VeTHDR_b_STGDiagFA_HTCV_AD;/* '<S1219>/Switch' */

#endif

#if Rte_SysCon_Variant_THDR_19

static VAR(float32, THDR_VAR_INIT) VeTHDR_dn_EAC_Accel;/* '<S531>/Multiplication2' */

#endif

#if Rte_SysCon_Variant_THDR_19

static VAR(float32, THDR_VAR_INIT) VeTHDR_dn_EAC_AccelFiltered;/* '<S532>/Switch1' */

#endif

#if (Rte_SysCon_Variant_THDR_10 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_11 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_13) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_19) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_9)

static VAR(float32, THDR_VAR_INIT) VeTHDR_n_InputSpeed;/* '<S1223>/Switch' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_THDR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_THDR
#include "MemMap.h"

CONST(ConstB_THDR_ac_T, THDR_VAR_INIT) THDR_ac_ConstB =
{
    CeDFIB_e_Init,                     /* '<S1287>/Constant' */
    CeDFIB_e_Init,                     /* '<S1288>/Constant' */
    CeDFIB_e_Init,                     /* '<S1289>/Constant' */
    CeDFIB_e_Init,                     /* '<S1290>/Constant' */
    CeDFIB_e_Init,                     /* '<S1291>/Constant' */
    CeDFIB_e_Init,                     /* '<S1292>/Constant' */
    CeDFIB_e_Init,                     /* '<S1293>/Constant' */
    CeDFIB_e_Init,                     /* '<S1294>/Constant' */
    CeDFIB_e_Init,                     /* '<S1295>/Constant' */
    CeDFIB_e_Init,                     /* '<S1296>/Constant' */
    CeDFIB_e_Init,                     /* '<S1297>/Constant' */
    CeDFIB_e_Init,                     /* '<S1298>/Constant' */
    CeDFIB_e_Init,                     /* '<S1299>/Constant' */
    CeDFIB_e_Init,                     /* '<S1300>/Constant' */
    CeDFIB_e_Init,                     /* '<S1301>/Constant' */
    CeDFIB_e_Init,                     /* '<S1302>/Constant' */
    CeDFIB_e_Init                      /* '<S1303>/Constant' */
};

#define STOP_SEC_CONST_UNSPECIFIED_THDR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_THDR
#include "MemMap.h"

CONST(ConstP_THDR_ac_T, THDR_VAR_INIT) THDR_ac_ConstP =
{

#if Rte_SysCon_Variant_THDR_10 || Rte_SysCon_Variant_THDR_11

    /* Pooled Parameter (Expression: [0 1;1 0;0 1;0 1;1 0;1 0;0 0;0 0])
     * Referenced by:
     *   '<S55>/Logic'
     *   '<S99>/Logic'
     */
    {
        0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0
    },

#endif

#ifndef CONSTP_THDR_AC_T_VARIANT_EXISTS

    0
#endif
};

#define STOP_SEC_CONST_UNSPECIFIED_THDR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_THDR
#include "MemMap.h"

VAR(B_THDR_ac_T, THDR_VAR_INIT) THDR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_THDR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_THDR
#include "MemMap.h"

VAR(DW_THDR_ac_T, THDR_VAR_INIT) THDR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_THDR
#include "MemMap.h"
#if Rte_SysCon_Variant_THDR_10 || Rte_SysCon_Variant_THDR_11 || Rte_SysCon_Variant_THDR_13 || Rte_SysCon_Variant_THDR_19 || Rte_SysCon_Variant_THDR_9

static FUNC(void, THDR_CODE_LOCAL) THDR_ac_Fail(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, THDR_VAR_INIT)
    rty_FaultSts);

#endif

#if Rte_SysCon_Variant_THDR_10 || Rte_SysCon_Variant_THDR_11 || Rte_SysCon_Variant_THDR_13 || Rte_SysCon_Variant_THDR_19 || Rte_SysCon_Variant_THDR_9

static FUNC(void, THDR_CODE_LOCAL) THDR_ac_Init_l(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, THDR_VAR_INIT)
    rty_FaultSts);

#endif

#if Rte_SysCon_Variant_THDR_10 || Rte_SysCon_Variant_THDR_11 || Rte_SysCon_Variant_THDR_13 || Rte_SysCon_Variant_THDR_19 || Rte_SysCon_Variant_THDR_9

static FUNC(void, THDR_CODE_LOCAL) THDR_ac_Pass(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, THDR_VAR_INIT)
    rty_FaultSts);

#endif

#if Rte_SysCon_Variant_THDR_13

static FUNC(void, THDR_CODE_LOCAL) THDR_ac_SnsrRat_V02(void);

#endif

#if Rte_SysCon_Variant_THDR_9

static FUNC(void, THDR_CODE_LOCAL) THDR_ac_SnsrRat_V02_n(void);

#endif

/*
 * Output and update for enable system:
 *    '<S30>/Fail'
 *    '<S74>/Fail'
 *    '<S397>/Fail'
 *    '<S462>/Fail'
 *    '<S482>/Fail'
 *    '<S502>/Fail'
 *    '<S599>/Fail'
 *    '<S620>/Fail'
 *    '<S644>/Fail'
 *    '<S665>/Fail'
 *    ...
 */
#if Rte_SysCon_Variant_THDR_10 || Rte_SysCon_Variant_THDR_11 || Rte_SysCon_Variant_THDR_13 || Rte_SysCon_Variant_THDR_19 || Rte_SysCon_Variant_THDR_9

static FUNC(void, THDR_CODE_LOCAL) THDR_ac_Fail(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, THDR_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S30>/Fail' incorporates:
     *  EnablePort: '<S35>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S35>/FaultSts' incorporates:
         *  Constant: '<S41>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Fail;
    }

    /* End of Outputs for SubSystem: '<S30>/Fail' */
}

#endif

/*
 * Output and update for enable system:
 *    '<S30>/Init'
 *    '<S74>/Init'
 *    '<S397>/Init'
 *    '<S462>/Init'
 *    '<S482>/Init'
 *    '<S502>/Init'
 *    '<S599>/Init'
 *    '<S620>/Init'
 *    '<S644>/Init'
 *    '<S665>/Init'
 *    ...
 */
#if Rte_SysCon_Variant_THDR_10 || Rte_SysCon_Variant_THDR_11 || Rte_SysCon_Variant_THDR_13 || Rte_SysCon_Variant_THDR_19 || Rte_SysCon_Variant_THDR_9

static FUNC(void, THDR_CODE_LOCAL) THDR_ac_Init_l(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, THDR_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S30>/Init' incorporates:
     *  EnablePort: '<S36>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S36>/FaultSts' incorporates:
         *  Constant: '<S42>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Init;
    }

    /* End of Outputs for SubSystem: '<S30>/Init' */
}

#endif

/*
 * Output and update for enable system:
 *    '<S30>/Pass'
 *    '<S74>/Pass'
 *    '<S397>/Pass'
 *    '<S462>/Pass'
 *    '<S482>/Pass'
 *    '<S502>/Pass'
 *    '<S599>/Pass'
 *    '<S620>/Pass'
 *    '<S644>/Pass'
 *    '<S665>/Pass'
 *    ...
 */
#if Rte_SysCon_Variant_THDR_10 || Rte_SysCon_Variant_THDR_11 || Rte_SysCon_Variant_THDR_13 || Rte_SysCon_Variant_THDR_19 || Rte_SysCon_Variant_THDR_9

static FUNC(void, THDR_CODE_LOCAL) THDR_ac_Pass(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, THDR_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S30>/Pass' incorporates:
     *  EnablePort: '<S37>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S37>/FaultSts' incorporates:
         *  Constant: '<S43>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Pass;
    }

    /* End of Outputs for SubSystem: '<S30>/Pass' */
}

#endif

/* Output and update for atomic system: '<S593>/SnsrRat_V02' */
#if Rte_SysCon_Variant_THDR_13

static FUNC(void, THDR_CODE_LOCAL) THDR_ac_SnsrRat_V02(void)
{
    uint32 VeTHDR_b_HTCL_S3_NoDecision_tmp;
    boolean VeTHDR_b_HTCL_FA_Rat_S2_Pred_tmp;
    boolean VeTHDR_b_HTCL_FA_Rat_S2_Pred_tmp_0;
    boolean VeTHDR_b_HTCL_FA_Rat_S2_Pred_tmp_1;
    boolean VeTHDR_b_HTCL_FA_Rat_S2_Pred_tmp_2;
    boolean VeTHDR_b_HTCL_FA_Rat_S3_Pred_tmp;

    /* Logic: '<S739>/Logical Operator12' incorporates:
     *  Logic: '<S739>/Logical Operator18'
     *  Logic: '<S739>/Logical Operator26'
     *  Logic: '<S739>/Logical Operator34'
     */
    VeTHDR_b_HTCL_FA_Rat_S2_Pred_tmp = !VeTHDR_b_HTCL_Disbl1;

    /* Logic: '<S739>/Logical Operator14' incorporates:
     *  Logic: '<S739>/Logical Operator20'
     *  Logic: '<S739>/Logical Operator37'
     *  Logic: '<S739>/Logical Operator6'
     */
    VeTHDR_b_HTCL_FA_Rat_S2_Pred_tmp_0 = !VeTHDR_b_HTCL_Disbl4;

    /* Logic: '<S739>/Logical Operator15' incorporates:
     *  Logic: '<S739>/Logical Operator21'
     *  Logic: '<S739>/Logical Operator29'
     *  Logic: '<S739>/Logical Operator7'
     */
    VeTHDR_b_HTCL_FA_Rat_S2_Pred_tmp_1 = !VeTHDR_b_HTCL_Disbl5;

    /* Logic: '<S739>/Logical Operator13' incorporates:
     *  Logic: '<S739>/Logical Operator28'
     *  Logic: '<S739>/Logical Operator36'
     *  Logic: '<S739>/Logical Operator5'
     */
    VeTHDR_b_HTCL_FA_Rat_S2_Pred_tmp_2 = !VeTHDR_b_HTCL_Disbl3;

    /* RelationalOperator: '<S739>/Relational Operator10' incorporates:
     *  Abs: '<S739>/Abs4'
     *  Abs: '<S739>/Abs5'
     *  Abs: '<S739>/Abs6'
     *  Abs: '<S739>/Abs7'
     *  Constant: '<S739>/Constant Value'
     *  Logic: '<S739>/Logical Operator10'
     *  Logic: '<S739>/Logical Operator11'
     *  Logic: '<S739>/Logical Operator12'
     *  Logic: '<S739>/Logical Operator13'
     *  Logic: '<S739>/Logical Operator14'
     *  Logic: '<S739>/Logical Operator15'
     *  Logic: '<S739>/Logical Operator8'
     *  Logic: '<S739>/Logical Operator9'
     *  RelationalOperator: '<S739>/Relational Operator6'
     *  RelationalOperator: '<S739>/Relational Operator7'
     *  RelationalOperator: '<S739>/Relational Operator8'
     *  RelationalOperator: '<S739>/Relational Operator9'
     *  Sum: '<S739>/Subtract2'
     *  Sum: '<S739>/Sum4'
     *  Sum: '<S739>/Sum5'
     *  Sum: '<S739>/Sum6'
     *  Sum: '<S739>/Sum7'
     */
    VeTHDR_b_HTCL_FA_Rat_S2_Pred = (((sint32)((uint32)(((((uint32)(((fabsf
        (VeTHDR_T_HTCL_Temp2 - VeTHDR_T_HTCL_Temp1) >= THDR_ac_B.TempSelector[0])
        && VeTHDR_b_HTCL_FA_Rat_S2_Pred_tmp) ? 1 : 0)) + ((uint32)(((fabsf
        (VeTHDR_T_HTCL_Temp2 - VeTHDR_T_HTCL_Temp3) >= THDR_ac_B.TempSelector[4])
        && VeTHDR_b_HTCL_FA_Rat_S2_Pred_tmp_2) ? 1 : 0))) + ((uint32)(((fabsf
        (VeTHDR_T_HTCL_Temp2 - VeTHDR_T_HTCL_Temp4) >= THDR_ac_B.TempSelector[5])
        && VeTHDR_b_HTCL_FA_Rat_S2_Pred_tmp_0) ? 1 : 0))) + ((uint32)(((fabsf
        (VeTHDR_T_HTCL_Temp2 - VeTHDR_T_HTCL_Temp5) >= THDR_ac_B.TempSelector[6])
        && VeTHDR_b_HTCL_FA_Rat_S2_Pred_tmp_1) ? 1 : 0))))) >= 2);

    /* RelationalOperator: '<S739>/Relational Operator11' incorporates:
     *  Constant: '<S739>/Constant Value'
     *  DataTypeConversion: '<S739>/Data Type Conversion28'
     *  DataTypeConversion: '<S739>/Data Type Conversion29'
     *  DataTypeConversion: '<S739>/Data Type Conversion30'
     *  DataTypeConversion: '<S739>/Data Type Conversion31'
     *  Sum: '<S739>/Subtract3'
     */
    VeTHDR_b_HTCL_S2_NoDecision = (((sint32)((uint32)(((((uint32)
        (VeTHDR_b_HTCL_Disbl1 ? 1U : 0U)) + (VeTHDR_b_HTCL_Disbl3 ? 1U : 0U)) +
        (VeTHDR_b_HTCL_Disbl4 ? 1U : 0U)) + (VeTHDR_b_HTCL_Disbl5 ? 1U : 0U)))) >
        2);

    /* Logic: '<S739>/Logical Operator19' incorporates:
     *  Logic: '<S739>/Logical Operator27'
     *  Logic: '<S739>/Logical Operator35'
     *  Logic: '<S739>/Logical Operator4'
     */
    VeTHDR_b_HTCL_FA_Rat_S3_Pred_tmp = !VeTHDR_b_HTCL_Disbl2;

    /* RelationalOperator: '<S739>/Relational Operator12' incorporates:
     *  Abs: '<S739>/Abs10'
     *  Abs: '<S739>/Abs11'
     *  Abs: '<S739>/Abs8'
     *  Abs: '<S739>/Abs9'
     *  Constant: '<S739>/Constant Value'
     *  Logic: '<S739>/Logical Operator16'
     *  Logic: '<S739>/Logical Operator17'
     *  Logic: '<S739>/Logical Operator19'
     *  Logic: '<S739>/Logical Operator22'
     *  Logic: '<S739>/Logical Operator23'
     *  RelationalOperator: '<S739>/Relational Operator14'
     *  RelationalOperator: '<S739>/Relational Operator15'
     *  RelationalOperator: '<S739>/Relational Operator16'
     *  RelationalOperator: '<S739>/Relational Operator17'
     *  Sum: '<S739>/Subtract4'
     *  Sum: '<S739>/Sum10'
     *  Sum: '<S739>/Sum11'
     *  Sum: '<S739>/Sum8'
     *  Sum: '<S739>/Sum9'
     */
    VeTHDR_b_HTCL_FA_Rat_S3_Pred = (((sint32)((uint32)(((((uint32)(((fabsf
        (VeTHDR_T_HTCL_Temp3 - VeTHDR_T_HTCL_Temp1) >= THDR_ac_B.TempSelector[1])
        && VeTHDR_b_HTCL_FA_Rat_S2_Pred_tmp) ? 1 : 0)) + ((uint32)(((fabsf
        (VeTHDR_T_HTCL_Temp3 - VeTHDR_T_HTCL_Temp2) >= THDR_ac_B.TempSelector[4])
        && VeTHDR_b_HTCL_FA_Rat_S3_Pred_tmp) ? 1 : 0))) + ((uint32)(((fabsf
        (VeTHDR_T_HTCL_Temp3 - VeTHDR_T_HTCL_Temp4) >= THDR_ac_B.TempSelector[7])
        && VeTHDR_b_HTCL_FA_Rat_S2_Pred_tmp_0) ? 1 : 0))) + ((uint32)(((fabsf
        (VeTHDR_T_HTCL_Temp3 - VeTHDR_T_HTCL_Temp5) >= THDR_ac_B.TempSelector[8])
        && VeTHDR_b_HTCL_FA_Rat_S2_Pred_tmp_1) ? 1 : 0))))) >= 2);

    /* Sum: '<S739>/Subtract5' incorporates:
     *  DataTypeConversion: '<S739>/Data Type Conversion20'
     *  DataTypeConversion: '<S739>/Data Type Conversion21'
     *  Sum: '<S739>/Subtract7'
     */
    VeTHDR_b_HTCL_S3_NoDecision_tmp = ((uint32)(VeTHDR_b_HTCL_Disbl1 ? 1U : 0U))
        + (VeTHDR_b_HTCL_Disbl2 ? 1U : 0U);

    /* RelationalOperator: '<S739>/Relational Operator13' incorporates:
     *  Constant: '<S739>/Constant Value'
     *  DataTypeConversion: '<S739>/Data Type Conversion22'
     *  DataTypeConversion: '<S739>/Data Type Conversion23'
     *  Sum: '<S739>/Subtract5'
     */
    VeTHDR_b_HTCL_S3_NoDecision = (((sint32)((uint32)
        ((VeTHDR_b_HTCL_S3_NoDecision_tmp + (VeTHDR_b_HTCL_Disbl4 ? 1U : 0U)) +
         (VeTHDR_b_HTCL_Disbl5 ? 1U : 0U)))) > 2);

    /* RelationalOperator: '<S739>/Relational Operator18' incorporates:
     *  Abs: '<S739>/Abs12'
     *  Abs: '<S739>/Abs13'
     *  Abs: '<S739>/Abs14'
     *  Abs: '<S739>/Abs15'
     *  Constant: '<S739>/Constant Value'
     *  Logic: '<S739>/Logical Operator24'
     *  Logic: '<S739>/Logical Operator25'
     *  Logic: '<S739>/Logical Operator30'
     *  Logic: '<S739>/Logical Operator31'
     *  RelationalOperator: '<S739>/Relational Operator20'
     *  RelationalOperator: '<S739>/Relational Operator21'
     *  RelationalOperator: '<S739>/Relational Operator22'
     *  RelationalOperator: '<S739>/Relational Operator23'
     *  Sum: '<S739>/Subtract6'
     *  Sum: '<S739>/Sum12'
     *  Sum: '<S739>/Sum13'
     *  Sum: '<S739>/Sum14'
     *  Sum: '<S739>/Sum15'
     */
    VeTHDR_b_HTCL_FA_Rat_S4_Pred = (((sint32)((uint32)(((((uint32)(((fabsf
        (VeTHDR_T_HTCL_Temp4 - VeTHDR_T_HTCL_Temp1) >= THDR_ac_B.TempSelector[2])
        && VeTHDR_b_HTCL_FA_Rat_S2_Pred_tmp) ? 1 : 0)) + ((uint32)(((fabsf
        (VeTHDR_T_HTCL_Temp4 - VeTHDR_T_HTCL_Temp2) >= THDR_ac_B.TempSelector[5])
        && VeTHDR_b_HTCL_FA_Rat_S3_Pred_tmp) ? 1 : 0))) + ((uint32)(((fabsf
        (VeTHDR_T_HTCL_Temp4 - VeTHDR_T_HTCL_Temp3) >= THDR_ac_B.TempSelector[7])
        && VeTHDR_b_HTCL_FA_Rat_S2_Pred_tmp_2) ? 1 : 0))) + ((uint32)(((fabsf
        (VeTHDR_T_HTCL_Temp4 - VeTHDR_T_HTCL_Temp5) >= THDR_ac_B.TempSelector[9])
        && VeTHDR_b_HTCL_FA_Rat_S2_Pred_tmp_1) ? 1 : 0))))) >= 2);

    /* Sum: '<S739>/Subtract7' incorporates:
     *  DataTypeConversion: '<S739>/Data Type Conversion14'
     *  Sum: '<S739>/Subtract9'
     */
    VeTHDR_b_HTCL_S3_NoDecision_tmp += VeTHDR_b_HTCL_Disbl3 ? 1U : 0U;

    /* RelationalOperator: '<S739>/Relational Operator19' incorporates:
     *  Constant: '<S739>/Constant Value'
     *  DataTypeConversion: '<S739>/Data Type Conversion15'
     *  Sum: '<S739>/Subtract7'
     */
    VeTHDR_b_HTCL_S4_NoDecision = (((sint32)((uint32)
        (VeTHDR_b_HTCL_S3_NoDecision_tmp + (VeTHDR_b_HTCL_Disbl5 ? 1U : 0U)))) >
        2);

    /* RelationalOperator: '<S739>/Relational Operator24' incorporates:
     *  Abs: '<S739>/Abs16'
     *  Abs: '<S739>/Abs17'
     *  Abs: '<S739>/Abs18'
     *  Abs: '<S739>/Abs19'
     *  Constant: '<S739>/Constant Value'
     *  Logic: '<S739>/Logical Operator32'
     *  Logic: '<S739>/Logical Operator33'
     *  Logic: '<S739>/Logical Operator38'
     *  Logic: '<S739>/Logical Operator39'
     *  RelationalOperator: '<S739>/Relational Operator26'
     *  RelationalOperator: '<S739>/Relational Operator27'
     *  RelationalOperator: '<S739>/Relational Operator28'
     *  RelationalOperator: '<S739>/Relational Operator29'
     *  Sum: '<S739>/Subtract8'
     *  Sum: '<S739>/Sum16'
     *  Sum: '<S739>/Sum17'
     *  Sum: '<S739>/Sum18'
     *  Sum: '<S739>/Sum19'
     */
    VeTHDR_b_HTCL_FA_Rat_S5_Pred = (((sint32)((uint32)(((((uint32)(((fabsf
        (VeTHDR_T_HTCL_Temp5 - VeTHDR_T_HTCL_Temp1) >= THDR_ac_B.TempSelector[3])
        && VeTHDR_b_HTCL_FA_Rat_S2_Pred_tmp) ? 1 : 0)) + ((uint32)(((fabsf
        (VeTHDR_T_HTCL_Temp5 - VeTHDR_T_HTCL_Temp2) >= THDR_ac_B.TempSelector[6])
        && VeTHDR_b_HTCL_FA_Rat_S3_Pred_tmp) ? 1 : 0))) + ((uint32)(((fabsf
        (VeTHDR_T_HTCL_Temp5 - VeTHDR_T_HTCL_Temp3) >= THDR_ac_B.TempSelector[8])
        && VeTHDR_b_HTCL_FA_Rat_S2_Pred_tmp_2) ? 1 : 0))) + ((uint32)(((fabsf
        (VeTHDR_T_HTCL_Temp5 - VeTHDR_T_HTCL_Temp4) >= THDR_ac_B.TempSelector[9])
        && VeTHDR_b_HTCL_FA_Rat_S2_Pred_tmp_0) ? 1 : 0))))) >= 2);

    /* RelationalOperator: '<S739>/Relational Operator25' incorporates:
     *  Constant: '<S739>/Constant Value'
     *  DataTypeConversion: '<S739>/Data Type Conversion7'
     *  Sum: '<S739>/Subtract9'
     */
    VeTHDR_b_HTCL_S5_NoDecision = (((sint32)((uint32)
        (VeTHDR_b_HTCL_S3_NoDecision_tmp + (VeTHDR_b_HTCL_Disbl4 ? 1U : 0U)))) >
        2);

    /* RelationalOperator: '<S739>/Relational Operator4' incorporates:
     *  Abs: '<S739>/Abs'
     *  Abs: '<S739>/Abs1'
     *  Abs: '<S739>/Abs2'
     *  Abs: '<S739>/Abs3'
     *  Constant: '<S739>/Constant Value'
     *  Logic: '<S739>/Logical Operator'
     *  Logic: '<S739>/Logical Operator1'
     *  Logic: '<S739>/Logical Operator2'
     *  Logic: '<S739>/Logical Operator3'
     *  RelationalOperator: '<S739>/Relational Operator'
     *  RelationalOperator: '<S739>/Relational Operator1'
     *  RelationalOperator: '<S739>/Relational Operator2'
     *  RelationalOperator: '<S739>/Relational Operator3'
     *  Sum: '<S739>/Subtract'
     *  Sum: '<S739>/Sum'
     *  Sum: '<S739>/Sum1'
     *  Sum: '<S739>/Sum2'
     *  Sum: '<S739>/Sum3'
     */
    VeTHDR_b_HTCL_FA_Rat_S1_Pred = (((sint32)((uint32)(((((uint32)(((fabsf
        (VeTHDR_T_HTCL_Temp1 - VeTHDR_T_HTCL_Temp2) >= THDR_ac_B.TempSelector[0])
        && VeTHDR_b_HTCL_FA_Rat_S3_Pred_tmp) ? 1 : 0)) + ((uint32)(((fabsf
        (VeTHDR_T_HTCL_Temp1 - VeTHDR_T_HTCL_Temp3) >= THDR_ac_B.TempSelector[1])
        && VeTHDR_b_HTCL_FA_Rat_S2_Pred_tmp_2) ? 1 : 0))) + ((uint32)(((fabsf
        (VeTHDR_T_HTCL_Temp1 - VeTHDR_T_HTCL_Temp4) >= THDR_ac_B.TempSelector[2])
        && VeTHDR_b_HTCL_FA_Rat_S2_Pred_tmp_0) ? 1 : 0))) + ((uint32)(((fabsf
        (VeTHDR_T_HTCL_Temp1 - VeTHDR_T_HTCL_Temp5) >= THDR_ac_B.TempSelector[3])
        && VeTHDR_b_HTCL_FA_Rat_S2_Pred_tmp_1) ? 1 : 0))))) >= 2);

    /* RelationalOperator: '<S739>/Relational Operator5' incorporates:
     *  Constant: '<S739>/Constant Value'
     *  DataTypeConversion: '<S739>/Data Type Conversion36'
     *  DataTypeConversion: '<S739>/Data Type Conversion37'
     *  DataTypeConversion: '<S739>/Data Type Conversion38'
     *  DataTypeConversion: '<S739>/Data Type Conversion39'
     *  Sum: '<S739>/Subtract1'
     */
    VeTHDR_b_HTCL_S1_NoDecision = (((sint32)((uint32)(((((uint32)
        (VeTHDR_b_HTCL_Disbl2 ? 1U : 0U)) + (VeTHDR_b_HTCL_Disbl3 ? 1U : 0U)) +
        (VeTHDR_b_HTCL_Disbl4 ? 1U : 0U)) + (VeTHDR_b_HTCL_Disbl5 ? 1U : 0U)))) >
        2);
}

#endif

/* Output and update for atomic system: '<S882>/SnsrRat_V02' */
#if Rte_SysCon_Variant_THDR_9

static FUNC(void, THDR_CODE_LOCAL) THDR_ac_SnsrRat_V02_n(void)
{
    float32 tmpRead;
    float32 tmpRead_0;
    float32 tmpRead_1;
    float32 tmpRead_2;
    uint32 VeTHDR_b_PPCTIS_NoDecision_SF_tmp;
    boolean VeTHDR_b_LTPP2_FltSymRaw_SF_tmp;
    boolean VeTHDR_b_LTPP2_FltSymRaw_SF_tmp_0;
    boolean VeTHDR_b_LTPP2_FltSymRaw_SF_tmp_1;
    boolean VeTHDR_b_LTPP2_FltSymRaw_SF_tmp_2;
    boolean VeTHDR_b_PPCTIS_FltSymRaw_SF_tmp;

    /* Inport: '<Root>/VeTMIR_T_LTR_ClntTmpOut' */
    (void)Rte_Read_VeTMIR_T_LTR_ClntTmpOut_Value(&tmpRead_2);

    /* Inport: '<Root>/VePMIR_T_LTPsvPump2Temp' */
    (void)Rte_Read_VePMIR_T_LTPsvPump2Temp_Value(&tmpRead_1);

    /* Inport: '<Root>/VeTMIR_T_OnBrdChrg_ClntTmpIn' */
    (void)Rte_Read_VeTMIR_T_OnBrdChrg_ClntTmpIn_Value(&tmpRead_0);

    /* Inport: '<Root>/VePMIR_T_LTPsvPumpTemp' */
    (void)Rte_Read_VePMIR_T_LTPsvPumpTemp_Value(&tmpRead);

    /* Logic: '<S999>/Logical Operator12' incorporates:
     *  Logic: '<S999>/Logical Operator18'
     *  Logic: '<S999>/Logical Operator26'
     *  Logic: '<S999>/Logical Operator34'
     */
    VeTHDR_b_LTPP2_FltSymRaw_SF_tmp = !THDR_ac_B.LogicalOperator3;

    /* Logic: '<S999>/Logical Operator14' incorporates:
     *  Logic: '<S999>/Logical Operator20'
     *  Logic: '<S999>/Logical Operator37'
     *  Logic: '<S999>/Logical Operator6'
     */
    VeTHDR_b_LTPP2_FltSymRaw_SF_tmp_0 = !THDR_ac_B.LogicalOperator4;

    /* Logic: '<S999>/Logical Operator15' incorporates:
     *  Logic: '<S999>/Logical Operator21'
     *  Logic: '<S999>/Logical Operator29'
     *  Logic: '<S999>/Logical Operator7'
     */
    VeTHDR_b_LTPP2_FltSymRaw_SF_tmp_1 = !THDR_ac_B.LogicalOperator5;

    /* Logic: '<S999>/Logical Operator13' incorporates:
     *  Logic: '<S999>/Logical Operator28'
     *  Logic: '<S999>/Logical Operator36'
     *  Logic: '<S999>/Logical Operator5'
     */
    VeTHDR_b_LTPP2_FltSymRaw_SF_tmp_2 = !THDR_ac_B.LogicalOperator2;

    /* RelationalOperator: '<S999>/Relational Operator10' incorporates:
     *  Abs: '<S999>/Abs4'
     *  Abs: '<S999>/Abs5'
     *  Abs: '<S999>/Abs6'
     *  Abs: '<S999>/Abs7'
     *  Constant: '<S999>/Constant Value'
     *  Logic: '<S999>/Logical Operator10'
     *  Logic: '<S999>/Logical Operator11'
     *  Logic: '<S999>/Logical Operator12'
     *  Logic: '<S999>/Logical Operator13'
     *  Logic: '<S999>/Logical Operator14'
     *  Logic: '<S999>/Logical Operator15'
     *  Logic: '<S999>/Logical Operator8'
     *  Logic: '<S999>/Logical Operator9'
     *  RelationalOperator: '<S999>/Relational Operator6'
     *  RelationalOperator: '<S999>/Relational Operator7'
     *  RelationalOperator: '<S999>/Relational Operator8'
     *  RelationalOperator: '<S999>/Relational Operator9'
     *  Sum: '<S999>/Subtract2'
     *  Sum: '<S999>/Sum4'
     *  Sum: '<S999>/Sum5'
     *  Sum: '<S999>/Sum6'
     *  Sum: '<S999>/Sum7'
     */
    VeTHDR_b_LTPP2_FltSymRaw_SF = (((sint32)((uint32)(((((uint32)(((fabsf
        (tmpRead_1 - tmpRead) >= THDR_ac_B.Selector[0]) &&
        VeTHDR_b_LTPP2_FltSymRaw_SF_tmp) ? 1 : 0)) + ((uint32)(((fabsf(tmpRead_1
        - THDR_ac_B.TmpSignalConversionAtVeTMIR_T_PsvPmpClnt) >=
        THDR_ac_B.Selector[4]) && VeTHDR_b_LTPP2_FltSymRaw_SF_tmp_2) ? 1 : 0)))
        + ((uint32)(((fabsf(tmpRead_1 - tmpRead_0) >= THDR_ac_B.Selector[5]) &&
                     VeTHDR_b_LTPP2_FltSymRaw_SF_tmp_0) ? 1 : 0))) + ((uint32)
        (((fabsf(tmpRead_1 - tmpRead_2) >= THDR_ac_B.Selector[6]) &&
          VeTHDR_b_LTPP2_FltSymRaw_SF_tmp_1) ? 1 : 0))))) >= 2);

    /* RelationalOperator: '<S999>/Relational Operator11' incorporates:
     *  Constant: '<S999>/Constant Value'
     *  DataTypeConversion: '<S999>/Data Type Conversion28'
     *  DataTypeConversion: '<S999>/Data Type Conversion29'
     *  DataTypeConversion: '<S999>/Data Type Conversion30'
     *  DataTypeConversion: '<S999>/Data Type Conversion31'
     *  Sum: '<S999>/Subtract3'
     */
    VeTHDR_b_LTPP2_NoDecision_SF = (((sint32)((uint32)(((((uint32)
        (THDR_ac_B.LogicalOperator3 ? 1U : 0U)) + (THDR_ac_B.LogicalOperator2 ?
        1U : 0U)) + (THDR_ac_B.LogicalOperator4 ? 1U : 0U)) +
        (THDR_ac_B.LogicalOperator5 ? 1U : 0U)))) > 2);

    /* Logic: '<S999>/Logical Operator19' incorporates:
     *  Logic: '<S999>/Logical Operator27'
     *  Logic: '<S999>/Logical Operator35'
     *  Logic: '<S999>/Logical Operator4'
     */
    VeTHDR_b_PPCTIS_FltSymRaw_SF_tmp = !THDR_ac_B.LogicalOperator1;

    /* RelationalOperator: '<S999>/Relational Operator12' incorporates:
     *  Abs: '<S999>/Abs10'
     *  Abs: '<S999>/Abs11'
     *  Abs: '<S999>/Abs8'
     *  Abs: '<S999>/Abs9'
     *  Constant: '<S999>/Constant Value'
     *  Logic: '<S999>/Logical Operator16'
     *  Logic: '<S999>/Logical Operator17'
     *  Logic: '<S999>/Logical Operator19'
     *  Logic: '<S999>/Logical Operator22'
     *  Logic: '<S999>/Logical Operator23'
     *  RelationalOperator: '<S999>/Relational Operator14'
     *  RelationalOperator: '<S999>/Relational Operator15'
     *  RelationalOperator: '<S999>/Relational Operator16'
     *  RelationalOperator: '<S999>/Relational Operator17'
     *  Sum: '<S999>/Subtract4'
     *  Sum: '<S999>/Sum10'
     *  Sum: '<S999>/Sum11'
     *  Sum: '<S999>/Sum8'
     *  Sum: '<S999>/Sum9'
     */
    VeTHDR_b_PPCTIS_FltSymRaw_SF = (((sint32)((uint32)(((((uint32)(((fabsf
        (THDR_ac_B.TmpSignalConversionAtVeTMIR_T_PsvPmpClnt - tmpRead) >=
        THDR_ac_B.Selector[1]) && VeTHDR_b_LTPP2_FltSymRaw_SF_tmp) ? 1 : 0)) +
        ((uint32)(((fabsf(THDR_ac_B.TmpSignalConversionAtVeTMIR_T_PsvPmpClnt -
                          tmpRead_1) >= THDR_ac_B.Selector[4]) &&
                   VeTHDR_b_PPCTIS_FltSymRaw_SF_tmp) ? 1 : 0))) + ((uint32)
        (((fabsf(THDR_ac_B.TmpSignalConversionAtVeTMIR_T_PsvPmpClnt - tmpRead_0)
           >= THDR_ac_B.Selector[7]) && VeTHDR_b_LTPP2_FltSymRaw_SF_tmp_0) ? 1 :
         0))) + ((uint32)(((fabsf
                            (THDR_ac_B.TmpSignalConversionAtVeTMIR_T_PsvPmpClnt
        - tmpRead_2) >= THDR_ac_B.Selector[8]) &&
                           VeTHDR_b_LTPP2_FltSymRaw_SF_tmp_1) ? 1 : 0))))) >= 2);

    /* Sum: '<S999>/Subtract5' incorporates:
     *  DataTypeConversion: '<S999>/Data Type Conversion20'
     *  DataTypeConversion: '<S999>/Data Type Conversion21'
     *  Sum: '<S999>/Subtract7'
     */
    VeTHDR_b_PPCTIS_NoDecision_SF_tmp = ((uint32)(THDR_ac_B.LogicalOperator3 ?
        1U : 0U)) + (THDR_ac_B.LogicalOperator1 ? 1U : 0U);

    /* RelationalOperator: '<S999>/Relational Operator13' incorporates:
     *  Constant: '<S999>/Constant Value'
     *  DataTypeConversion: '<S999>/Data Type Conversion22'
     *  DataTypeConversion: '<S999>/Data Type Conversion23'
     *  Sum: '<S999>/Subtract5'
     */
    VeTHDR_b_PPCTIS_NoDecision_SF = (((sint32)((uint32)
        ((VeTHDR_b_PPCTIS_NoDecision_SF_tmp + (THDR_ac_B.LogicalOperator4 ? 1U :
        0U)) + (THDR_ac_B.LogicalOperator5 ? 1U : 0U)))) > 2);

    /* RelationalOperator: '<S999>/Relational Operator18' incorporates:
     *  Abs: '<S999>/Abs12'
     *  Abs: '<S999>/Abs13'
     *  Abs: '<S999>/Abs14'
     *  Abs: '<S999>/Abs15'
     *  Constant: '<S999>/Constant Value'
     *  Logic: '<S999>/Logical Operator24'
     *  Logic: '<S999>/Logical Operator25'
     *  Logic: '<S999>/Logical Operator30'
     *  Logic: '<S999>/Logical Operator31'
     *  RelationalOperator: '<S999>/Relational Operator20'
     *  RelationalOperator: '<S999>/Relational Operator21'
     *  RelationalOperator: '<S999>/Relational Operator22'
     *  RelationalOperator: '<S999>/Relational Operator23'
     *  Sum: '<S999>/Subtract6'
     *  Sum: '<S999>/Sum12'
     *  Sum: '<S999>/Sum13'
     *  Sum: '<S999>/Sum14'
     *  Sum: '<S999>/Sum15'
     */
    VeTHDR_b_PECTOS_FltSymRaw_SF = (((sint32)((uint32)(((((uint32)(((fabsf
        (tmpRead_0 - tmpRead) >= THDR_ac_B.Selector[2]) &&
        VeTHDR_b_LTPP2_FltSymRaw_SF_tmp) ? 1 : 0)) + ((uint32)(((fabsf(tmpRead_0
        - tmpRead_1) >= THDR_ac_B.Selector[5]) &&
        VeTHDR_b_PPCTIS_FltSymRaw_SF_tmp) ? 1 : 0))) + ((uint32)(((fabsf
        (tmpRead_0 - THDR_ac_B.TmpSignalConversionAtVeTMIR_T_PsvPmpClnt) >=
        THDR_ac_B.Selector[7]) && VeTHDR_b_LTPP2_FltSymRaw_SF_tmp_2) ? 1 : 0)))
        + ((uint32)(((fabsf(tmpRead_0 - tmpRead_2) >= THDR_ac_B.Selector[9]) &&
                     VeTHDR_b_LTPP2_FltSymRaw_SF_tmp_1) ? 1 : 0))))) >= 2);

    /* Sum: '<S999>/Subtract7' incorporates:
     *  DataTypeConversion: '<S999>/Data Type Conversion14'
     *  Sum: '<S999>/Subtract9'
     */
    VeTHDR_b_PPCTIS_NoDecision_SF_tmp += THDR_ac_B.LogicalOperator2 ? 1U : 0U;

    /* RelationalOperator: '<S999>/Relational Operator19' incorporates:
     *  Constant: '<S999>/Constant Value'
     *  DataTypeConversion: '<S999>/Data Type Conversion15'
     *  Sum: '<S999>/Subtract7'
     */
    VeTHDR_b_PECTOS_NoDecision_SF = (((sint32)((uint32)
        (VeTHDR_b_PPCTIS_NoDecision_SF_tmp + (THDR_ac_B.LogicalOperator5 ? 1U :
        0U)))) > 2);

    /* RelationalOperator: '<S999>/Relational Operator24' incorporates:
     *  Abs: '<S999>/Abs16'
     *  Abs: '<S999>/Abs17'
     *  Abs: '<S999>/Abs18'
     *  Abs: '<S999>/Abs19'
     *  Constant: '<S999>/Constant Value'
     *  Logic: '<S999>/Logical Operator32'
     *  Logic: '<S999>/Logical Operator33'
     *  Logic: '<S999>/Logical Operator38'
     *  Logic: '<S999>/Logical Operator39'
     *  RelationalOperator: '<S999>/Relational Operator26'
     *  RelationalOperator: '<S999>/Relational Operator27'
     *  RelationalOperator: '<S999>/Relational Operator28'
     *  RelationalOperator: '<S999>/Relational Operator29'
     *  Sum: '<S999>/Subtract8'
     *  Sum: '<S999>/Sum16'
     *  Sum: '<S999>/Sum17'
     *  Sum: '<S999>/Sum18'
     *  Sum: '<S999>/Sum19'
     */
    VeTHDR_b_LRCTOS_FltSymRaw_SF = (((sint32)((uint32)(((((uint32)(((fabsf
        (tmpRead_2 - tmpRead) >= THDR_ac_B.Selector[3]) &&
        VeTHDR_b_LTPP2_FltSymRaw_SF_tmp) ? 1 : 0)) + ((uint32)(((fabsf(tmpRead_2
        - tmpRead_1) >= THDR_ac_B.Selector[6]) &&
        VeTHDR_b_PPCTIS_FltSymRaw_SF_tmp) ? 1 : 0))) + ((uint32)(((fabsf
        (tmpRead_2 - THDR_ac_B.TmpSignalConversionAtVeTMIR_T_PsvPmpClnt) >=
        THDR_ac_B.Selector[8]) && VeTHDR_b_LTPP2_FltSymRaw_SF_tmp_2) ? 1 : 0)))
        + ((uint32)(((fabsf(tmpRead_2 - tmpRead_0) >= THDR_ac_B.Selector[9]) &&
                     VeTHDR_b_LTPP2_FltSymRaw_SF_tmp_0) ? 1 : 0))))) >= 2);

    /* RelationalOperator: '<S999>/Relational Operator25' incorporates:
     *  Constant: '<S999>/Constant Value'
     *  DataTypeConversion: '<S999>/Data Type Conversion7'
     *  Sum: '<S999>/Subtract9'
     */
    VeTHDR_b_LRCTOS_NoDecision_SF = (((sint32)((uint32)
        (VeTHDR_b_PPCTIS_NoDecision_SF_tmp + (THDR_ac_B.LogicalOperator4 ? 1U :
        0U)))) > 2);

    /* RelationalOperator: '<S999>/Relational Operator4' incorporates:
     *  Abs: '<S999>/Abs'
     *  Abs: '<S999>/Abs1'
     *  Abs: '<S999>/Abs2'
     *  Abs: '<S999>/Abs3'
     *  Constant: '<S999>/Constant Value'
     *  Logic: '<S999>/Logical Operator'
     *  Logic: '<S999>/Logical Operator1'
     *  Logic: '<S999>/Logical Operator2'
     *  Logic: '<S999>/Logical Operator3'
     *  RelationalOperator: '<S999>/Relational Operator'
     *  RelationalOperator: '<S999>/Relational Operator1'
     *  RelationalOperator: '<S999>/Relational Operator2'
     *  RelationalOperator: '<S999>/Relational Operator3'
     *  Sum: '<S999>/Subtract'
     *  Sum: '<S999>/Sum'
     *  Sum: '<S999>/Sum1'
     *  Sum: '<S999>/Sum2'
     *  Sum: '<S999>/Sum3'
     */
    VeTHDR_b_LTPP_FltSymRaw_SF = (((sint32)((uint32)(((((uint32)(((fabsf(tmpRead
        - tmpRead_1) >= THDR_ac_B.Selector[0]) &&
        VeTHDR_b_PPCTIS_FltSymRaw_SF_tmp) ? 1 : 0)) + ((uint32)(((fabsf(tmpRead
        - THDR_ac_B.TmpSignalConversionAtVeTMIR_T_PsvPmpClnt) >=
        THDR_ac_B.Selector[1]) && VeTHDR_b_LTPP2_FltSymRaw_SF_tmp_2) ? 1 : 0)))
        + ((uint32)(((fabsf(tmpRead - tmpRead_0) >= THDR_ac_B.Selector[2]) &&
                     VeTHDR_b_LTPP2_FltSymRaw_SF_tmp_0) ? 1 : 0))) + ((uint32)
        (((fabsf(tmpRead - tmpRead_2) >= THDR_ac_B.Selector[3]) &&
          VeTHDR_b_LTPP2_FltSymRaw_SF_tmp_1) ? 1 : 0))))) >= 2);

    /* RelationalOperator: '<S999>/Relational Operator5' incorporates:
     *  Constant: '<S999>/Constant Value'
     *  DataTypeConversion: '<S999>/Data Type Conversion36'
     *  DataTypeConversion: '<S999>/Data Type Conversion37'
     *  DataTypeConversion: '<S999>/Data Type Conversion38'
     *  DataTypeConversion: '<S999>/Data Type Conversion39'
     *  Sum: '<S999>/Subtract1'
     */
    VeTHDR_b_LTPP_NoDecision_SF = (((sint32)((uint32)(((((uint32)
        (THDR_ac_B.LogicalOperator1 ? 1U : 0U)) + (THDR_ac_B.LogicalOperator2 ?
        1U : 0U)) + (THDR_ac_B.LogicalOperator4 ? 1U : 0U)) +
        (THDR_ac_B.LogicalOperator5 ? 1U : 0U)))) > 2);
}

#endif

/* Model step function for TID1 */
FUNC(void, THDR_CODE) THDR_MedTEH(void) /* Explicit Task: MedTEH */
{

#if Rte_SysCon_Variant_THDR_1 || Rte_SysCon_Variant_THDR_10 || Rte_SysCon_Variant_THDR_11 || Rte_SysCon_Variant_THDR_13 || Rte_SysCon_Variant_THDR_19 || Rte_SysCon_Variant_THDR_2 || Rte_SysCon_Variant_THDR_9

    uint32 rowIdx;

#endif

#if Rte_SysCon_Variant_THDR_13

    float32 tmpRead;

#endif

#if Rte_SysCon_Variant_THDR_13

    TeHTIR_e_HVC_Htr_Warning tmpRead_0;

#endif

#if Rte_SysCon_Variant_THDR_13

    TeHTIR_e_HVC_Htr_Warning tmpRead_1;

#endif

#if Rte_SysCon_Variant_THDR_9

    float32 tmpRead_2;

#endif

#if Rte_SysCon_Variant_THDR_9

    float32 tmpRead_3;

#endif

#if Rte_SysCon_Variant_THDR_9

    TePMPR_e_FTSNA tmpRead_4;

#endif

#if Rte_SysCon_Variant_THDR_9

    TePMPR_e_FTSNA tmpRead_5;

#endif

#if Rte_SysCon_Variant_THDR_9

    boolean tmpRead_6;

#endif

#if Rte_SysCon_Variant_THDR_13

    TePMPR_e_FTSNA tmpRead_7;

#endif

#if Rte_SysCon_Variant_THDR_13

    boolean tmpRead_8;

#endif

#if Rte_SysCon_Variant_THDR_9

    TePMDR_e_PowerMode tmpRead_9;

#endif

#if Rte_SysCon_Variant_THDR_13 && Rte_SysCon_Variant_THDR_3

    boolean tmpRead_a;

#endif

#if Rte_SysCon_Variant_THDR_13 && Rte_SysCon_Variant_THDR_3

    boolean tmpRead_b;

#endif

#if Rte_SysCon_Variant_THDR_13 && Rte_SysCon_Variant_THDR_3

    boolean tmpRead_c;

#endif

#if Rte_SysCon_Variant_THDR_10

    TeFSCR_e_AGS_PosRq tmpRead_d;

#endif

#if Rte_SysCon_Variant_THDR_11

    TeFSCR_e_AGS_PosRq tmpRead_e;

#endif

#if Rte_SysCon_Variant_THDR_13

    float32 tmpRead_f;

#endif

#if Rte_SysCon_Variant_THDR_13 || Rte_SysCon_Variant_THDR_19

    boolean tmpRead_g;

#endif

#if Rte_SysCon_Variant_THDR_19

    TeTAIR_e_CompStat tmpRead_h;

#endif

#if Rte_SysCon_Variant_THDR_13 || Rte_SysCon_Variant_THDR_19 || Rte_SysCon_Variant_THDR_9

    uint32 tmpRead_i;

#endif

#if Rte_SysCon_Variant_THDR_19

    boolean tmpRead_j;

#endif

#if Rte_SysCon_Variant_THDR_13 && Rte_SysCon_Variant_THDR_5

    float32 tmpRead_k;

#endif

#if Rte_SysCon_Variant_THDR_13

    boolean tmpRead_l;

#endif

    boolean rtb_LogicalOperator;
    boolean rtb_VariantMerge_For_Variant_Source_Va_d;
    boolean rtb_VariantMerge_For_Variant_Source_Va_e;
    boolean rtb_VeTHDR_b_DiagGlblCndtnsValid_OvrdVal;

#if Rte_SysCon_Variant_THDR_1

    sint16 rtb_Switch1_hy;

#endif

    boolean rtb_LogicalOperator1;
    boolean rtb_LogicalOperator_gn1;
    boolean rtb_LogicalOperator_hrx;
    boolean rtb_LogicalOperator_nyo;

#if Rte_SysCon_Variant_THDR_1 || Rte_SysCon_Variant_THDR_19 || Rte_SysCon_Variant_THDR_9

    boolean rtb_LogicalOperator12_op;

#endif

#if Rte_SysCon_Variant_THDR_19 || Rte_SysCon_Variant_THDR_2 || Rte_SysCon_Variant_THDR_9

    boolean rtb_LogicalOperator_mxy;

#endif

#if Rte_SysCon_Variant_THDR_19 || Rte_SysCon_Variant_THDR_2 || Rte_SysCon_Variant_THDR_9

    boolean rtb_LogicalOperator_hi;

#endif

#if Rte_SysCon_Variant_THDR_19 || Rte_SysCon_Variant_THDR_2

    boolean rtb_LogicalOperator_h1;

#endif

#if Rte_SysCon_Variant_THDR_2

    boolean rtb_LogicalOperator_ia;

#endif

#if Rte_SysCon_Variant_THDR_2

    boolean rtb_LogicalOperator_n1h;

#endif

#if Rte_SysCon_Variant_THDR_2

    boolean rtb_LogicalOperator_hx;

#endif

#if Rte_SysCon_Variant_THDR_2

    boolean rtb_LogicalOperator_of3;

#endif

#if Rte_SysCon_Variant_THDR_2

    boolean rtb_Logical1;

#endif

#if Rte_SysCon_Variant_THDR_2 || Rte_SysCon_Variant_THDR_9

    boolean rtb_VariantMerge_For_Variant_Source_Va_m;

#endif

#if Rte_SysCon_Variant_THDR_2

    boolean rtb_Logical10;

#endif

#if Rte_SysCon_Variant_THDR_2

    boolean rtb_Logical2;

#endif

#if Rte_SysCon_Variant_THDR_2

    boolean rtb_Logical3;

#endif

#if Rte_SysCon_Variant_THDR_2

    boolean rtb_Logical4;

#endif

#if Rte_SysCon_Variant_THDR_2

    boolean rtb_Logical5;

#endif

#if Rte_SysCon_Variant_THDR_2

    boolean rtb_Logical6;

#endif

#if Rte_SysCon_Variant_THDR_2

    boolean rtb_Logical7;

#endif

#if Rte_SysCon_Variant_THDR_2

    boolean rtb_Logical8;

#endif

#if Rte_SysCon_Variant_THDR_2 || Rte_SysCon_Variant_THDR_9

    boolean rtb_VariantMerge_For_Variant_Source_Va_f;

#endif

#if Rte_SysCon_Variant_THDR_2

    boolean rtb_Logical9;

#endif

#if Rte_SysCon_Variant_THDR_2 || Rte_SysCon_Variant_THDR_9

    boolean rtb_VariantMerge_For_Variant_Source_V_cm;

#endif

#if Rte_SysCon_Variant_THDR_2

    boolean rtb_Logical12;

#endif

#if Rte_SysCon_Variant_THDR_2 || Rte_SysCon_Variant_THDR_9

    boolean rtb_VariantMerge_For_Variant_Source_Va_g;

#endif

#if (!Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_13) || Rte_SysCon_Variant_THDR_19 || Rte_SysCon_Variant_THDR_9

    boolean rtb_Logical1_fp;

#endif

#if Rte_SysCon_Variant_THDR_13

    boolean rtb_Logical3_bd;

#endif

#if (Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_9) || (Rte_SysCon_Variant_THDR_7 && Rte_SysCon_Variant_THDR_9)

    boolean rtb_VariantMerge_For_Variant_Source_V_hq;

#endif

#if (Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_9) || (Rte_SysCon_Variant_THDR_7 && Rte_SysCon_Variant_THDR_9)

    boolean rtb_VariantMerge_For_Variant_Source_V_j2;

#endif

#if Rte_SysCon_Variant_THDR_10 || Rte_SysCon_Variant_THDR_11 || Rte_SysCon_Variant_THDR_19 || Rte_SysCon_Variant_THDR_9

    float32 rtb_TmpSignalConversionAtVeAATR_T_EstAmb;

#endif

#if Rte_SysCon_Variant_THDR_10 || Rte_SysCon_Variant_THDR_11

    boolean rtb_TmpSignalConversionAtVeFSCR_b_AGS2_C;

#endif

#if Rte_SysCon_Variant_THDR_10 || Rte_SysCon_Variant_THDR_11

    boolean rtb_RelationalOperator1_ls;

#endif

#if Rte_SysCon_Variant_THDR_11

    boolean rtb_LessThanorEqual_lu;

#endif

#if Rte_SysCon_Variant_THDR_11

    boolean rtb_Logic_n[2];

#endif

#if Rte_SysCon_Variant_THDR_10

    boolean rtb_TmpSignalConversionAtVeFSCR_b_AGS_Ca;

#endif

#if Rte_SysCon_Variant_THDR_10

    boolean rtb_Logic[2];

#endif

#if Rte_SysCon_Variant_THDR_13 || Rte_SysCon_Variant_THDR_19 || Rte_SysCon_Variant_THDR_9

    boolean rtb_UnitDelay_kj;

#endif

#if (!Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_13) || Rte_SysCon_Variant_THDR_19 || Rte_SysCon_Variant_THDR_9

    boolean rtb_TmpSignalConversionAtVePMTR_b_ThrmlS;

#endif

#if Rte_SysCon_Variant_THDR_9

    boolean rtb_TmpSignalConversionAtVeTMIR_b_PsvPmp;

#endif

#if Rte_SysCon_Variant_THDR_9

    boolean rtb_TmpSignalConversionAtVeCPDR_b_LTPP_F;

#endif

#if Rte_SysCon_Variant_THDR_13 || Rte_SysCon_Variant_THDR_19

    boolean rtb_TmpSignalConversionAtVeTAIR_b_EEXV_R;

#endif

#if Rte_SysCon_Variant_THDR_19

    float32 rtb_TmpSignalConversionAtVeTAIR_n_CompSp;

#endif

#if Rte_SysCon_Variant_THDR_13 || Rte_SysCon_Variant_THDR_19

    boolean rtb_TmpSignalConversionAtVeTAIR_b_OEXV_R;

#endif

#if Rte_SysCon_Variant_THDR_19

    float32 rtb_TmpSignalConversionAtVeTAIR_T_EEXV_R;

#endif

#if Rte_SysCon_Variant_THDR_19

    float32 rtb_TmpSignalConversionAtVeTAIR_T_OEXV_R;

#endif

#if Rte_SysCon_Variant_THDR_19

    float32 rtb_TmpSignalConversionAtVeTAIR_T_OEXV_I;

#endif

#if Rte_SysCon_Variant_THDR_13 || Rte_SysCon_Variant_THDR_19

    boolean rtb_AND_c0;

#endif

#if Rte_SysCon_Variant_THDR_13

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HVC_Ht;

#endif

#if Rte_SysCon_Variant_THDR_13

    boolean rtb_Logical10_ly;

#endif

#if Rte_SysCon_Variant_THDR_13

    boolean rtb_Logical5_f;

#endif

#if Rte_SysCon_Variant_THDR_13

    boolean rtb_Logical12_iq;

#endif

#if Rte_SysCon_Variant_THDR_13

    boolean rtb_VariantMerge_For_Variant_Source_Va_b;

#endif

#if Rte_SysCon_Variant_THDR_13

    boolean rtb_VariantMergeForOutportMainRly;

#endif

#if Rte_SysCon_Variant_THDR_13

    boolean rtb_Logical7_kh;

#endif

#if Rte_SysCon_Variant_THDR_13

    boolean rtb_UnitDelay_io;

#endif

#if Rte_SysCon_Variant_THDR_13

    boolean rtb_TmpSignalConversionAtVeTRIR_b_HtrC_n;

#endif

#if Rte_SysCon_Variant_THDR_13

    boolean rtb_UnitDelay1_f;

#endif

#if Rte_SysCon_Variant_THDR_13

    boolean rtb_TmpSignalConversionAtVeTMIR_b_ElecCl;

#endif

#if Rte_SysCon_Variant_THDR_13 || Rte_SysCon_Variant_THDR_9

    boolean rtb_UnitDelay1_d3;

#endif

#if Rte_SysCon_Variant_THDR_13

    boolean rtb_UnitDelay_im;

#endif

#if Rte_SysCon_Variant_THDR_13

    boolean rtb_TmpSignalConversionAtVeTRIR_b_HtrCor;

#endif

#if Rte_SysCon_Variant_THDR_13

    sint8 rtb_VariantMerge_For_Variant_Source_V_nb[10];

#endif

#if Rte_SysCon_Variant_THDR_13 || Rte_SysCon_Variant_THDR_9

    boolean rtb_TmpSignalConversionAtVePMIR_b_HTAuxP;

#endif

#if Rte_SysCon_Variant_THDR_9

    boolean rtb_Comparison7_p;

#endif

#if Rte_SysCon_Variant_THDR_9

    boolean rtb_UnitDelay1_k2;

#endif

#if Rte_SysCon_Variant_THDR_9

    boolean rtb_UnitDelay_hn;

#endif

#if Rte_SysCon_Variant_THDR_9

    boolean rtb_Switch_m;

#endif

#if Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_9

    float32 rtb_TmpSignalConversionAtVeTAIR_Pct_LTR_;

#endif

#if Rte_SysCon_Variant_THDR_9

    boolean rtb_VariantMerge_For_Variant_Source_Va_l;

#endif

#if Rte_SysCon_Variant_THDR_9

    boolean rtb_Switch_h;

#endif

#if (Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_9) || (Rte_SysCon_Variant_THDR_5 && Rte_SysCon_Variant_THDR_9)

    float32 rtb_TmpSignalConversionAtVeTAIR_Pct_HTL_;

#endif

#if Rte_SysCon_Variant_THDR_9

    uint8 rtb_VariantMerge_For_Variant_Source_Va_n[10];

#endif

#if (Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_9) || (Rte_SysCon_Variant_THDR_6 && Rte_SysCon_Variant_THDR_9)

    float32 rtb_TmpSignalConversionAtVeTAIR_Pct_FrWy;

#endif

#if Rte_SysCon_Variant_THDR_10 || Rte_SysCon_Variant_THDR_11

    float32 rtb_Switch1_cr;

#endif

#if Rte_SysCon_Variant_THDR_10 || Rte_SysCon_Variant_THDR_11

    boolean rtb_AND_nb;

#endif

#if Rte_SysCon_Variant_THDR_10

    boolean rtb_AND_jj;

#endif

#if Rte_SysCon_Variant_THDR_9 || (Rte_SysCon_Variant_THDR_13 && Rte_SysCon_Variant_THDR_3)

    boolean rtb_TmpSignalConversionAtVeTMIR_b_MainRl;

#endif

#if Rte_SysCon_Variant_THDR_9

    boolean rtb_VariantMergeForOutportb_LRCTOS_Enbl_;

#endif

#if Rte_SysCon_Variant_THDR_13

    boolean rtb_VariantMergeForOutportHCCTOS_FltSymp;

#endif

#if Rte_SysCon_Variant_THDR_8 && Rte_SysCon_Variant_THDR_9

    boolean rtb_Logical_lv;

#endif

#if Rte_SysCon_Variant_THDR_9

    boolean rtb_VariantMergeForOutportb_LTPP2_FA_Cnf;

#endif

#if Rte_SysCon_Variant_THDR_11

    TeTAIR_e_AGS_Calibration_Sts rtb_TmpSignalConversionAtVeTAIR_e_AGS2_C;

#endif

#if Rte_SysCon_Variant_THDR_10

    TeTAIR_e_AGS_Calibration_Sts rtb_TmpSignalConversionAtVeTAIR_e_AGS_Ca;

#endif

#if Rte_SysCon_Variant_THDR_11

    TeFSCR_e_AGS_PosRq rtb_TmpSignalConversionAtVeFSCR_e_AGS2_P;

#endif

#if Rte_SysCon_Variant_THDR_10

    TeFSCR_e_AGS_PosRq rtb_TmpSignalConversionAtVeFSCR_e_AGS_Po;

#endif

#if Rte_SysCon_Variant_THDR_1 || Rte_SysCon_Variant_THDR_10 || Rte_SysCon_Variant_THDR_11 || Rte_SysCon_Variant_THDR_13 || Rte_SysCon_Variant_THDR_19 || Rte_SysCon_Variant_THDR_2 || Rte_SysCon_Variant_THDR_9

    sint32 i;

#endif

#if Rte_SysCon_Variant_THDR_10 || Rte_SysCon_Variant_THDR_11

    boolean tmp[3];

#endif

#if Rte_SysCon_Variant_THDR_11

    boolean rtb_LogicalOperator7_lw_tmp;

#endif

#if Rte_SysCon_Variant_THDR_10 || Rte_SysCon_Variant_THDR_11

    TeFSCR_e_AGS_PosRq rtb_RelationalOperator1_kcc_tmp;

#endif

#if Rte_SysCon_Variant_THDR_1 || Rte_SysCon_Variant_THDR_13 || Rte_SysCon_Variant_THDR_19 || Rte_SysCon_Variant_THDR_2 || Rte_SysCon_Variant_THDR_9

    sint32 VariantMerge_For_Variant_Source_Variant_;

#endif

#if Rte_SysCon_Variant_THDR_1 || Rte_SysCon_Variant_THDR_13 || Rte_SysCon_Variant_THDR_19 || Rte_SysCon_Variant_THDR_2 || Rte_SysCon_Variant_THDR_9

    uint32 VariantMerge_For_Variant_Source_Varian_0;

#endif

#if Rte_SysCon_Variant_THDR_1 || Rte_SysCon_Variant_THDR_2 || Rte_SysCon_Variant_THDR_9

    sint32 VariantMerge_For_Variant_Source_Varian_1;

#endif

#if Rte_SysCon_Variant_THDR_1 || Rte_SysCon_Variant_THDR_13 || Rte_SysCon_Variant_THDR_2 || Rte_SysCon_Variant_THDR_9

    uint32 VariantMerge_For_Variant_Source_Varian_2;

#endif

#if Rte_SysCon_Variant_THDR_1 || Rte_SysCon_Variant_THDR_2 || Rte_SysCon_Variant_THDR_9

    sint32 VariantMerge_For_Variant_Source_Varian_3;

#endif

#if Rte_SysCon_Variant_THDR_1 || Rte_SysCon_Variant_THDR_2 || Rte_SysCon_Variant_THDR_9

    uint32 VariantMerge_For_Variant_Source_Varian_4;

#endif

#if Rte_SysCon_Variant_THDR_1 || Rte_SysCon_Variant_THDR_2 || Rte_SysCon_Variant_THDR_9

    sint32 VariantMerge_For_Variant_Source_Varian_5;

#endif

#if Rte_SysCon_Variant_THDR_1 || Rte_SysCon_Variant_THDR_2 || Rte_SysCon_Variant_THDR_9

    uint32 VariantMerge_For_Variant_Source_Varian_6;

#endif

#if Rte_SysCon_Variant_THDR_1 || Rte_SysCon_Variant_THDR_2 || Rte_SysCon_Variant_THDR_9

    sint32 VariantMerge_For_Variant_Source_Varian_7;

#endif

#if Rte_SysCon_Variant_THDR_1 || Rte_SysCon_Variant_THDR_2 || Rte_SysCon_Variant_THDR_9

    uint32 VariantMerge_For_Variant_Source_Varian_8;

#endif

#if Rte_SysCon_Variant_THDR_1 || Rte_SysCon_Variant_THDR_2 || Rte_SysCon_Variant_THDR_9

    sint32 VariantMerge_For_Variant_Source_Varian_9;

#endif

#if Rte_SysCon_Variant_THDR_1 || Rte_SysCon_Variant_THDR_2 || Rte_SysCon_Variant_THDR_9

    uint32 VariantMerge_For_Variant_Source_Varian_a;

#endif

#if Rte_SysCon_Variant_THDR_1 || Rte_SysCon_Variant_THDR_2 || Rte_SysCon_Variant_THDR_9

    sint32 VariantMerge_For_Variant_Source_Varian_b;

#endif

#if Rte_SysCon_Variant_THDR_1 || Rte_SysCon_Variant_THDR_2 || Rte_SysCon_Variant_THDR_9

    uint32 VariantMerge_For_Variant_Source_Varian_c;

#endif

#if Rte_SysCon_Variant_THDR_1 || Rte_SysCon_Variant_THDR_2 || Rte_SysCon_Variant_THDR_9

    sint32 VariantMerge_For_Variant_Source_Varian_d;

#endif

#if Rte_SysCon_Variant_THDR_1 || Rte_SysCon_Variant_THDR_2 || Rte_SysCon_Variant_THDR_9

    uint32 VariantMerge_For_Variant_Source_Varian_e;

#endif

#if Rte_SysCon_Variant_THDR_1 || Rte_SysCon_Variant_THDR_2 || Rte_SysCon_Variant_THDR_9

    sint32 VariantMerge_For_Variant_Source_Varian_f;

#endif

#if Rte_SysCon_Variant_THDR_1 || Rte_SysCon_Variant_THDR_2 || Rte_SysCon_Variant_THDR_9

    uint32 VariantMerge_For_Variant_Source_Varian_g;

#endif

#if Rte_SysCon_Variant_THDR_1

    sint32 VariantMerge_For_Variant_Source_Varian_h;

#endif

#if Rte_SysCon_Variant_THDR_1

    uint32 VariantMerge_For_Variant_Source_Varian_i;

#endif

#if Rte_SysCon_Variant_THDR_1

    sint32 VariantMerge_For_Variant_Source_Varian_j;

#endif

#if Rte_SysCon_Variant_THDR_1

    uint32 VariantMerge_For_Variant_Source_Varian_k;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/THDR_MedTEH'
     */
    /* DataStoreWrite: '<S1>/Data Store Write17' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HybPropSysCoolCntrlVal_E_Perf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HybPropSysCoolCntrlVal_E_Perf_Value
        (&THDR_ac_DW.StatusByte_HybPropSysCoolCntrlVal_E_Perf);

    /* DataStoreWrite: '<S1>/Data Store Write16' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostComm_HybPropSysCoolCntrlVal_E'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostComm_HybPropSysCoolCntrlVal_E_Value
        (&THDR_ac_DW.StatusByte_LostComm_HybPropSysCoolCntrlV);

    /* DataStoreWrite: '<S1>/Data Store Write15' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AGS_B_Perf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AGS_B_Perf_Value
        (&THDR_ac_DW.StatusByte_AGS_B_Perf);

    /* DataStoreWrite: '<S1>/Data Store Write14' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AGS_A_Perf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AGS_A_Perf_Value
        (&THDR_ac_DW.StatusByte_AGS_A_Perf);

    /* DataStoreWrite: '<S1>/Data Store Write13' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_ClntTempTooHigh'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_ClntTempTooHigh_Value
        (&THDR_ac_DW.StatusByte_ClntTempTooHigh);

    /* DataStoreWrite: '<S1>/Data Store Write12' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigTempSnsrCPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigTempSnsrCPerf_Value
        (&THDR_ac_DW.StatusByte_AC_RefrigTempSnsrCPerf);

    /* DataStoreWrite: '<S1>/Data Store Write11' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigTempSnsr5CktPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigTempSnsr5CktPerf_Value
        (&THDR_ac_DW.StatusByte_AC_RefrigTempSnsr5CktPerf);

    /* DataStoreWrite: '<S1>/Data Store Write10' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigTempSnsr4CktPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigTempSnsr4CktPerf_Value
        (&THDR_ac_DW.StatusByte_AC_RefrigTempSnsr4CktPerf);

    /* DataStoreWrite: '<S1>/Data Store Write9' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommACRefrigExpVlvActD'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommACRefrigExpVlvActD_Value
        (&THDR_ac_DW.StatusByte_LostCommACRefrigExpVlvActD);

    /* DataStoreWrite: '<S1>/Data Store Write8' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigTempSnsrDCkt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigTempSnsrDCkt_Value
        (&THDR_ac_DW.StatusByte_AC_RefrigTempSnsrDCkt);

    /* DataStoreWrite: '<S1>/Data Store Write7' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigExpVlvActD_CntrlCktPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigExpVlvActD_CntrlCktPerf_Value
        (&THDR_ac_DW.StatusByte_AC_RefrigExpVlvActD_CntrlCktP);

    /* DataStoreWrite: '<S1>/Data Store Write6' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigTempSnsr5CktShotoGro'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigTempSnsr5CktShotoGro_Value
        (&THDR_ac_DW.StatusByte_AC_RefrigTempSnsr5CktShotoGro);

    /* DataStoreWrite: '<S1>/Data Store Write5' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigTempSnsr5CktShotoBat'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigTempSnsr5CktShotoBat_Value
        (&THDR_ac_DW.StatusByte_AC_RefrigTempSnsr5CktShotoBat);

    /* DataStoreWrite: '<S1>/Data Store Write4' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommACRefrigExpVlvActC'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommACRefrigExpVlvActC_Value
        (&THDR_ac_DW.StatusByte_LostCommACRefrigExpVlvActC);

    /* DataStoreWrite: '<S1>/Data Store Write3' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigTempSnsrCCkt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigTempSnsrCCkt_Value
        (&THDR_ac_DW.StatusByte_AC_RefrigTempSnsrCCkt);

    /* DataStoreWrite: '<S1>/Data Store Write2' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigExpVlvAct_C_CntrlCktPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigExpVlvAct_C_CntrlCktPerf_Value
        (&THDR_ac_DW.StatusByte_AC_RefrigExpVlvAct_C_CntrlCkt);

    /* DataStoreWrite: '<S1>/Data Store Write1' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommEAC'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommEAC_Value
        (&THDR_ac_DW.StatusByte_LostCommEAC);

    /* DataStoreWrite: '<S1>/Data Store Write' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_EACPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_EACPerf_Value
        (&THDR_ac_DW.StatusByte_EACPerf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommHB_PSCCooCtrlVlvB' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommHB_PSCCooCtrlVlvB'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommHB_PSCCooCtrlVlvB_Value
        (&THDR_ac_DW.StatusByte_LostCommHB_PSCCooCtrlVlvB);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_HB_PSC_CtrlValBCktPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HB_PSC_CtrlValBCktPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HB_PSC_CtrlValBCktPerf_Value
        (&THDR_ac_DW.StatusByte_HB_PSC_CtrlValBCktPerf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_MtrElect_CT_SnsrBPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_MtrElect_CT_SnsrBPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_MtrElect_CT_SnsrBPerf_Value
        (&THDR_ac_DW.StatusByte_MtrElect_CT_SnsrBPerf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommMtrElectCoolPmpB' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommMtrElectCoolPmpB'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommMtrElectCoolPmpB_Value
        (&THDR_ac_DW.StatusByte_LostCommMtrElectCoolPmpB);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommMtrElectCoolPmpA' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommMtrElectCoolPmpA'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommMtrElectCoolPmpA_Value
        (&THDR_ac_DW.StatusByte_LostCommMtrElectCoolPmpA);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_ECT_Snsr4CktPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_ECT_Snsr4CktPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_ECT_Snsr4CktPerf_Value
        (&THDR_ac_DW.StatusByte_ECT_Snsr4CktPerf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CoolantVlvA_Perf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolantVlvA_Perf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolantVlvA_Perf_Value
        (&THDR_ac_DW.StatusByte_CoolantVlvA_Perf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_MtrElect_CT_SnsrCktLo' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_MtrElect_CT_SnsrCktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_MtrElect_CT_SnsrCktLo_Value
        (&THDR_ac_DW.StatusByte_MtrElect_CT_SnsrCktLo);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_MtrElect_CT_SnsrCktHi' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_MtrElect_CT_SnsrCktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_MtrElect_CT_SnsrCktHi_Value
        (&THDR_ac_DW.StatusByte_MtrElect_CT_SnsrCktHi);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_MtrElect_CT2_SnsrBCktLo' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_MtrElect_CT2_SnsrBCktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_MtrElect_CT2_SnsrBCktLo_Value
        (&THDR_ac_DW.StatusByte_MtrElect_CT2_SnsrBCktLo);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_MtrElect_CT2_SnsrBCktHi' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_MtrElect_CT2_SnsrBCktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_MtrElect_CT2_SnsrBCktHi_Value
        (&THDR_ac_DW.StatusByte_MtrElect_CT2_SnsrBCktHi);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CT_SnsrCktLo' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CT_SnsrCktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CT_SnsrCktLo_Value
        (&THDR_ac_DW.StatusByte_CT_SnsrCktLo);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CT_SnsrCktHi' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CT_SnsrCktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CT_SnsrCktHi_Value
        (&THDR_ac_DW.StatusByte_CT_SnsrCktHi);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CT3_SnsrCktLo' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CT3_SnsrCktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CT3_SnsrCktLo_Value
        (&THDR_ac_DW.StatusByte_CT3_SnsrCktLo);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CT3_SnsrCktHi' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CT3_SnsrCktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CT3_SnsrCktHi_Value
        (&THDR_ac_DW.StatusByte_CT3_SnsrCktHi);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_MtrElect_CT_SnsrPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_MtrElect_CT_SnsrPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_MtrElect_CT_SnsrPerf_Value
        (&THDR_ac_DW.StatusByte_MtrElect_CT_SnsrPerf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LosCommBECM_A' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LosCommBECM_A'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LosCommBECM_A_Value
        (&THDR_ac_DW.StatusByte_LosCommBECM_A);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CommBusOff' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CommBusOff'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CommBusOff_Value
        (&THDR_ac_DW.StatusByte_CommBusOff);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_PwrElecPmpPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_PwrElecPmpPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_PwrElecPmpPerf_Value
        (&THDR_ac_DW.StatusByte_PwrElecPmpPerf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_MtrElect_CoolPumBCtrlPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_MtrElect_CoolPumBCtrlPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_MtrElect_CoolPumBCtrlPerf_Value
        (&THDR_ac_DW.StatusByte_MtrElect_CoolPumBCtrlPerf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_MtrElect_CoolPumAOvrSpd' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_MtrElect_CoolPumAOvrSpd'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_MtrElect_CoolPumAOvrSpd_Value
        (&THDR_ac_DW.StatusByte_MtrElect_CoolPumAOvrSpd);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_MtrElect_CoolPmpBTempSnsrPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_MtrElect_CoolPmpBTempSnsrPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_MtrElect_CoolPmpBTempSnsrPerf_Value
        (&THDR_ac_DW.StatusByte_MtrElect_CoolPmpBTempSnsrPerf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_MtrElect_CoolPmpATempSnsrPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_MtrElect_CoolPmpATempSnsrPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_MtrElect_CoolPmpATempSnsrPerf_Value
        (&THDR_ac_DW.StatusByte_MtrElect_CoolPmpATempSnsrPerf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_MtrElect_CooPumBOvrSpd' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_MtrElect_CooPumBOvrSpd'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_MtrElect_CooPumBOvrSpd_Value
        (&THDR_ac_DW.StatusByte_MtrElect_CooPumBOvrSpd);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CT_SnsrPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CT_SnsrPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CT_SnsrPerf_Value
        (&THDR_ac_DW.StatusByte_CT_SnsrPerf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommCoolPmpA' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommCoolPmpA'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommCoolPmpA_Value
        (&THDR_ac_DW.StatusByte_LostCommCoolPmpA);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CT3_SnsrPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CT3_SnsrPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CT3_SnsrPerf_Value
        (&THDR_ac_DW.StatusByte_CT3_SnsrPerf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommCoolHtrA' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommCoolHtrA'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommCoolHtrA_Value
        (&THDR_ac_DW.StatusByte_LostCommCoolHtrA);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CT2_SnsrPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CT2_SnsrPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CT2_SnsrPerf_Value
        (&THDR_ac_DW.StatusByte_CT2_SnsrPerf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CT2_SnsrCktLo' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CT2_SnsrCktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CT2_SnsrCktLo_Value
        (&THDR_ac_DW.StatusByte_CT2_SnsrCktLo);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CT2_SnsrCktHi' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CT2_SnsrCktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CT2_SnsrCktHi_Value
        (&THDR_ac_DW.StatusByte_CT2_SnsrCktHi);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LIN1_BusOff' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LIN1_BusOff'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LIN1_BusOff_Value
        (&THDR_ac_DW.StatusByte_LIN1_BusOff);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_ECH_TempOut' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_ECH_TempOut'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_ECH_TempOut_Value
        (&THDR_ac_DW.StatusByte_ECH_TempOut);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_ECH_TempIn' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_ECH_TempIn'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_ECH_TempIn_Value
        (&THDR_ac_DW.StatusByte_ECH_TempIn);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CoolPmpATempSnsrPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolPmpATempSnsrPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolPmpATempSnsrPerf_Value
        (&THDR_ac_DW.StatusByte_CoolPmpATempSnsrPerf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CoolPmpACtrlCktPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolPmpACtrlCktPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolPmpACtrlCktPerf_Value
        (&THDR_ac_DW.StatusByte_CoolPmpACtrlCktPerf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_ThrmlRlyCtrlCkt' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_ThrmlRlyCtrlCkt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_ThrmlRlyCtrlCkt_Value
        (&THDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostComm_AGS_A' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostComm_AGS_A'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostComm_AGS_A_Value
        (&THDR_ac_DW.StatusByte_LostComm_AGS_A);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LIN3_BusOff' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LIN3_BusOff'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LIN3_BusOff_Value
        (&THDR_ac_DW.StatusByte_LIN3_BusOff);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostComm_AGS_B' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostComm_AGS_B'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostComm_AGS_B_Value
        (&THDR_ac_DW.StatusByte_LostComm_AGS_B);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LIN2_BusOff' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LIN2_BusOff'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LIN2_BusOff_Value
        (&THDR_ac_DW.StatusByte_LIN2_BusOff);

    /* SignalConversion generated from: '<S1>/VePMTR_b_ThrmlSystRly_EnblCmnd' */
#if (!Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_13) || (!Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_9) || Rte_SysCon_Variant_THDR_19

    /* SignalConversion generated from: '<S1>/VePMTR_b_ThrmlSystRly_EnblCmnd' incorporates:
     *  Inport: '<Root>/VePMTR_b_ThrmlSystRly_EnblCmnd'
     */
    (void)Rte_Read_VePMTR_b_ThrmlSystRly_EnblCmnd_Value
        (&rtb_TmpSignalConversionAtVePMTR_b_ThrmlS);

#endif

    /* End of SignalConversion generated from: '<S1>/VePMTR_b_ThrmlSystRly_EnblCmnd' */

    /* SignalConversion generated from: '<S1>/VeHTIR_b_HVC_Htr_LIN_ResErr' */
#if Rte_SysCon_Variant_THDR_13

    /* SignalConversion generated from: '<S1>/VeHTIR_b_HVC_Htr_LIN_ResErr' incorporates:
     *  Inport: '<Root>/VeHTIR_b_HVC_Htr_LIN_ResErr'
     */
    (void)Rte_Read_VeHTIR_b_HVC_Htr_LIN_ResErr_Value
        (&rtb_TmpSignalConversionAtVeHTIR_b_HVC_Ht);

#endif

    /* End of SignalConversion generated from: '<S1>/VeHTIR_b_HVC_Htr_LIN_ResErr' */

    /* SignalConversion generated from: '<S1>/VeTMIR_b_ElecClntHtr_TmpIn_FA' */
#if (!Rte_SysCon_Variant_THDR_14 && Rte_SysCon_Variant_THDR_13) || (!Rte_SysCon_Variant_THDR_4 && Rte_SysCon_Variant_THDR_13)

    /* SignalConversion generated from: '<S1>/VeTMIR_b_ElecClntHtr_TmpIn_FA' incorporates:
     *  Inport: '<Root>/VeTMIR_b_ElecClntHtr_TmpIn_FA'
     */
    (void)Rte_Read_VeTMIR_b_ElecClntHtr_TmpIn_FA_Value
        (&rtb_TmpSignalConversionAtVeTMIR_b_ElecCl);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTMIR_b_ElecClntHtr_TmpIn_FA' */

    /* SignalConversion generated from: '<S1>/VeTRIR_b_HtrCorClnt_TmpIn_FA' */
#if Rte_SysCon_Variant_THDR_13

    /* SignalConversion generated from: '<S1>/VeTRIR_b_HtrCorClnt_TmpIn_FA' incorporates:
     *  Inport: '<Root>/VeTRIR_b_HtrCorClnt_TmpIn_FA'
     */
    (void)Rte_Read_VeTRIR_b_HtrCorClnt_TmpIn_FA_Value
        (&rtb_TmpSignalConversionAtVeTRIR_b_HtrCor);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTRIR_b_HtrCorClnt_TmpIn_FA' */

    /* SignalConversion generated from: '<S1>/VeTMIR_T_PsvPmpClnt_TmpIn' incorporates:
     *  Inport: '<Root>/VeTMIR_T_PsvPmpClnt_TmpIn'
     *  SignalConversion generated from: '<S1>/VeCPDR_b_LTPP_FunPer_ChkEnbl'
     *  SignalConversion generated from: '<S1>/VeTMIR_b_PsvPmpClnt_TmpIn_FA'
     */
#if Rte_SysCon_Variant_THDR_9

    (void)Rte_Read_VeTMIR_T_PsvPmpClnt_TmpIn_Value
        (&THDR_ac_B.TmpSignalConversionAtVeTMIR_T_PsvPmpClnt);

    /* SignalConversion generated from: '<S1>/VeTMIR_b_PsvPmpClnt_TmpIn_FA' incorporates:
     *  Inport: '<Root>/VeTMIR_T_PsvPmpClnt_TmpIn'
     *  Inport: '<Root>/VeTMIR_b_PsvPmpClnt_TmpIn_FA'
     */
    (void)Rte_Read_VeTMIR_b_PsvPmpClnt_TmpIn_FA_Value
        (&rtb_TmpSignalConversionAtVeTMIR_b_PsvPmp);

    /* SignalConversion generated from: '<S1>/VeCPDR_b_LTPP_FunPer_ChkEnbl' incorporates:
     *  Inport: '<Root>/VeCPDR_b_LTPP_FunPer_ChkEnbl'
     */
    (void)Rte_Read_VeCPDR_b_LTPP_FunPer_ChkEnbl_Value
        (&rtb_TmpSignalConversionAtVeCPDR_b_LTPP_F);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTMIR_T_PsvPmpClnt_TmpIn' */

    /* SignalConversion generated from: '<S1>/VePMIR_b_HTAuxPumpTemp_FA' */
#if Rte_SysCon_Variant_THDR_13

    /* SignalConversion generated from: '<S1>/VePMIR_b_HTAuxPumpTemp_FA' incorporates:
     *  Inport: '<Root>/VePMIR_b_HTAuxPumpTemp_FA'
     */
    (void)Rte_Read_VePMIR_b_HTAuxPumpTemp_FA_Value
        (&rtb_TmpSignalConversionAtVePMIR_b_HTAuxP);

#endif

    /* End of SignalConversion generated from: '<S1>/VePMIR_b_HTAuxPumpTemp_FA' */

    /* SignalConversion generated from: '<S1>/VeTRIR_b_HtrCorClnt_TmpOut_FA' */
#if (Rte_SysCon_Variant_THDR_13 && Rte_SysCon_Variant_THDR_14) || (Rte_SysCon_Variant_THDR_13 && Rte_SysCon_Variant_THDR_4)

    /* SignalConversion generated from: '<S1>/VeTRIR_b_HtrCorClnt_TmpOut_FA' incorporates:
     *  Inport: '<Root>/VeTRIR_b_HtrCorClnt_TmpOut_FA'
     */
    (void)Rte_Read_VeTRIR_b_HtrCorClnt_TmpOut_FA_Value
        (&rtb_TmpSignalConversionAtVeTRIR_b_HtrC_n);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTRIR_b_HtrCorClnt_TmpOut_FA' */

    /* SignalConversion generated from: '<S1>/VeTAIR_Pct_LTR_BypsVlv_ActlPstn' */
#if Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_9

    /* SignalConversion generated from: '<S1>/VeTAIR_Pct_LTR_BypsVlv_ActlPstn' incorporates:
     *  Inport: '<Root>/VeTAIR_Pct_LTR_BypsVlv_ActlPstn'
     */
    (void)Rte_Read_VeTAIR_Pct_LTR_BypsVlv_ActlPstn_Value
        (&rtb_TmpSignalConversionAtVeTAIR_Pct_LTR_);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTAIR_Pct_LTR_BypsVlv_ActlPstn' */

    /* SignalConversion generated from: '<S1>/VeAATR_T_EstAmbAirTemp' */
#if Rte_SysCon_Variant_THDR_10 || Rte_SysCon_Variant_THDR_11 || Rte_SysCon_Variant_THDR_9

    /* SignalConversion generated from: '<S1>/VeAATR_T_EstAmbAirTemp' incorporates:
     *  Inport: '<Root>/VeAATR_T_EstAmbAirTemp'
     */
    (void)Rte_Read_VeAATR_T_EstAmbAirTemp_Value
        (&rtb_TmpSignalConversionAtVeAATR_T_EstAmb);

#endif

    /* End of SignalConversion generated from: '<S1>/VeAATR_T_EstAmbAirTemp' */

    /* SignalConversion generated from: '<S1>/VeTMIR_b_MainRly_CmdReq' */
#if (Rte_SysCon_Variant_THDR_13 && Rte_SysCon_Variant_THDR_3) || (Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_9)

    /* SignalConversion generated from: '<S1>/VeTMIR_b_MainRly_CmdReq' incorporates:
     *  Inport: '<Root>/VeTMIR_b_MainRly_CmdReq'
     */
    (void)Rte_Read_VeTMIR_b_MainRly_CmdReq_Value
        (&rtb_TmpSignalConversionAtVeTMIR_b_MainRl);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTMIR_b_MainRly_CmdReq' */

    /* SignalConversion generated from: '<S1>/VeTAIR_Pct_FrWyVlv_PstnAct' */
#if (Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_9) || (Rte_SysCon_Variant_THDR_6 && Rte_SysCon_Variant_THDR_9)

    /* SignalConversion generated from: '<S1>/VeTAIR_Pct_FrWyVlv_PstnAct' incorporates:
     *  Inport: '<Root>/VeTAIR_Pct_FrWyVlv_PstnAct'
     */
    (void)Rte_Read_VeTAIR_Pct_FrWyVlv_PstnAct_Value
        (&rtb_TmpSignalConversionAtVeTAIR_Pct_FrWy);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTAIR_Pct_FrWyVlv_PstnAct' */

    /* SignalConversion generated from: '<S1>/VeTAIR_Pct_HTL_BypsVlv_ActlPstn' */
#if (Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_9) || (Rte_SysCon_Variant_THDR_5 && Rte_SysCon_Variant_THDR_9)

    /* SignalConversion generated from: '<S1>/VeTAIR_Pct_HTL_BypsVlv_ActlPstn' incorporates:
     *  Inport: '<Root>/VeTAIR_Pct_HTL_BypsVlv_ActlPstn'
     */
    (void)Rte_Read_VeTAIR_Pct_HTL_BypsVlv_ActlPstn_Value
        (&rtb_TmpSignalConversionAtVeTAIR_Pct_HTL_);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTAIR_Pct_HTL_BypsVlv_ActlPstn' */

    /* SignalConversion generated from: '<S1>/VeTAIR_e_AGS_CalibrationSts' incorporates:
     *  SignalConversion generated from: '<S1>/VeFSCR_b_AGS_CalAtmptThrshold'
     *  SignalConversion generated from: '<S1>/VeFSCR_e_AGS_PosReq'
     */
#if Rte_SysCon_Variant_THDR_10

    /* SignalConversion generated from: '<S1>/VeTAIR_e_AGS_CalibrationSts' incorporates:
     *  Inport: '<Root>/VeTAIR_e_AGS_CalibrationSts'
     */
    (void)Rte_Read_VeTAIR_e_AGS_CalibrationSts_Value
        (&rtb_TmpSignalConversionAtVeTAIR_e_AGS_Ca);

    /* SignalConversion generated from: '<S1>/VeFSCR_b_AGS_CalAtmptThrshold' incorporates:
     *  Inport: '<Root>/VeFSCR_b_AGS_CalAtmptThrshold'
     */
    (void)Rte_Read_VeFSCR_b_AGS_CalAtmptThrshold_Value
        (&rtb_TmpSignalConversionAtVeFSCR_b_AGS_Ca);

    /* SignalConversion generated from: '<S1>/VeFSCR_e_AGS_PosReq' incorporates:
     *  Inport: '<Root>/VeFSCR_e_AGS_PosReq'
     */
    (void)Rte_Read_VeFSCR_e_AGS_PosReq_Value
        (&rtb_TmpSignalConversionAtVeFSCR_e_AGS_Po);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTAIR_e_AGS_CalibrationSts' */

    /* SignalConversion generated from: '<S1>/VeTAIR_e_AGS2_CalibrationSts' incorporates:
     *  SignalConversion generated from: '<S1>/VeFSCR_b_AGS2_CalAtmptThrshold'
     *  SignalConversion generated from: '<S1>/VeFSCR_e_AGS2_PosReq'
     */
#if Rte_SysCon_Variant_THDR_11

    /* SignalConversion generated from: '<S1>/VeTAIR_e_AGS2_CalibrationSts' incorporates:
     *  Inport: '<Root>/VeTAIR_e_AGS2_CalibrationSts'
     */
    (void)Rte_Read_VeTAIR_e_AGS2_CalibrationSts_Value
        (&rtb_TmpSignalConversionAtVeTAIR_e_AGS2_C);

    /* SignalConversion generated from: '<S1>/VeFSCR_b_AGS2_CalAtmptThrshold' incorporates:
     *  Inport: '<Root>/VeFSCR_b_AGS2_CalAtmptThrshold'
     */
    (void)Rte_Read_VeFSCR_b_AGS2_CalAtmptThrshold_Value
        (&rtb_TmpSignalConversionAtVeFSCR_b_AGS2_C);

    /* SignalConversion generated from: '<S1>/VeFSCR_e_AGS2_PosReq' incorporates:
     *  Inport: '<Root>/VeFSCR_e_AGS2_PosReq'
     */
    (void)Rte_Read_VeFSCR_e_AGS2_PosReq_Value
        (&rtb_TmpSignalConversionAtVeFSCR_e_AGS2_P);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTAIR_e_AGS2_CalibrationSts' */

    /* SignalConversion generated from: '<S1>/VeTAIR_b_OEXV_RefTemp_FA' incorporates:
     *  SignalConversion generated from: '<S1>/VeTAIR_T_EEXV_RefTemp'
     *  SignalConversion generated from: '<S1>/VeTAIR_T_OEXV_InTempSens'
     *  SignalConversion generated from: '<S1>/VeTAIR_T_OEXV_RefTemp'
     *  SignalConversion generated from: '<S1>/VeTAIR_b_EEXV_RefTemp_FA'
     *  SignalConversion generated from: '<S1>/VeTAIR_n_CompSpdFdb'
     */
#if Rte_SysCon_Variant_THDR_19

    /* SignalConversion generated from: '<S1>/VeTAIR_b_OEXV_RefTemp_FA' incorporates:
     *  Inport: '<Root>/VeTAIR_b_OEXV_RefTemp_FA'
     */
    (void)Rte_Read_VeTAIR_b_OEXV_RefTemp_FA_Value
        (&rtb_TmpSignalConversionAtVeTAIR_b_OEXV_R);

    /* SignalConversion generated from: '<S1>/VeTAIR_b_EEXV_RefTemp_FA' incorporates:
     *  Inport: '<Root>/VeTAIR_b_EEXV_RefTemp_FA'
     */
    (void)Rte_Read_VeTAIR_b_EEXV_RefTemp_FA_Value
        (&rtb_TmpSignalConversionAtVeTAIR_b_EEXV_R);

    /* SignalConversion generated from: '<S1>/VeTAIR_T_OEXV_RefTemp' incorporates:
     *  Inport: '<Root>/VeTAIR_T_OEXV_RefTemp'
     */
    (void)Rte_Read_VeTAIR_T_OEXV_RefTemp_Value
        (&rtb_TmpSignalConversionAtVeTAIR_T_OEXV_R);

    /* SignalConversion generated from: '<S1>/VeTAIR_T_OEXV_InTempSens' incorporates:
     *  Inport: '<Root>/VeTAIR_T_OEXV_InTempSens'
     */
    (void)Rte_Read_VeTAIR_T_OEXV_InTempSens_Value
        (&rtb_TmpSignalConversionAtVeTAIR_T_OEXV_I);

    /* SignalConversion generated from: '<S1>/VeTAIR_T_EEXV_RefTemp' incorporates:
     *  Inport: '<Root>/VeTAIR_T_EEXV_RefTemp'
     */
    (void)Rte_Read_VeTAIR_T_EEXV_RefTemp_Value
        (&rtb_TmpSignalConversionAtVeTAIR_T_EEXV_R);

    /* SignalConversion generated from: '<S1>/VeTAIR_n_CompSpdFdb' incorporates:
     *  Inport: '<Root>/VeTAIR_n_CompSpdFdb'
     */
    (void)Rte_Read_VeTAIR_n_CompSpdFdb_Value
        (&rtb_TmpSignalConversionAtVeTAIR_n_CompSp);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTAIR_b_OEXV_RefTemp_FA' */
#if (Rte_SysCon_Variant_THDR_10 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_11 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_13) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_19) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_9)

    /* S-Function (fcgen): '<S1>/FcnCallGen' */
    /* Inport: '<Root>/VeDFIR_b_IsDiagGlobalConditionsValid' */
    (void)Rte_Read_VeDFIR_b_IsDiagGlobalConditionsValid_Value
        ((&(VeTHDR_b_DiagGlblCndtnsValid_OvrdVal_Dial)));

    /* Inport: '<Root>/VeCPDR_b_HTAP_FunPer_FltDtct' */
    (void)Rte_Read_VeCPDR_b_HTAP_FunPer_FltDtct_Value
        ((&(VeTHDR_b_HTAPFunPer_FltDtct_AD)));

    /* Inport: '<Root>/VeCPDR_b_LTPP2_FunPer_FltDtct' */
    (void)Rte_Read_VeCPDR_b_LTPP2_FunPer_FltDtct_Value
        ((&(VeTHDR_b_LTPP2_FunPer_FltDtct_AD)));

    /* Inport: '<Root>/VeCPDR_b_LTPP_FunPer_FltDtct' */
    (void)Rte_Read_VeCPDR_b_LTPP_FunPer_FltDtct_Value
        ((&(VeTHDR_b_LTPP_FunPer_FltDtct_AD)));

    /* Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl' */
    (void)Rte_Read_VeDFIR_b_PostCodeClrDiagDsbl_Value
        ((&(VeTHDR_b_PostCodeClrDiagDsbl_OvrdVal_Dial)));

    /* Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe' */
    (void)Rte_Read_VeDFIR_b_DsblDiagFailSafe_Value
        ((&(VeTHDR_b_DsblDiagFailSafe_Dial)));

    /* Inport: '<Root>/VeHWIO_b_OCDiagFA_HighTempCabinVlv' */
    (void)Rte_Read_VeHWIO_b_OCDiagFA_HighTempCabinVlv_Value
        ((&(VeTHDR_b_OCDiagFA_HTCV_AD)));

    /* Inport: '<Root>/VeHWIO_b_STBDiagFA_HighTempCabinVlv' */
    (void)Rte_Read_VeHWIO_b_STBDiagFA_HighTempCabinVlv_Value
        ((&(VeTHDR_b_STBDiagFA_HTCV_AD)));

    /* Inport: '<Root>/VeHWIO_b_STGDiagFA_HighTempCabinVlv' */
    (void)Rte_Read_VeHWIO_b_STGDiagFA_HighTempCabinVlv_Value
        ((&(VeTHDR_b_STGDiagFA_HTCV_AD)));

    /* Inport: '<Root>/VeRCVR_Pct_HT_CabVlvSts' */
    (void)Rte_Read_VeRCVR_Pct_HT_CabVlvSts_Value((&(VeTHDR_Pct_HT_CabVlvSts_AD)));

    /* Inport: '<Root>/VeTISR_n_InputSpeed' */
    (void)Rte_Read_VeTISR_n_InputSpeed_Value((&(VeTHDR_n_InputSpeed)));

    /* Outputs for Function Call SubSystem: '<S1>/Input' */
    /* Switch: '<S1219>/Switch' incorporates:
     *  Constant: '<S1229>/Calib'
     */
    if (KeTHDR_b_STGDiagFA_HTCV_SD)
    {
        /* Switch: '<S1219>/Switch' incorporates:
         *  Constant: '<S1228>/Calib'
         *  Inport: '<Root>/VeHWIO_b_STGDiagFA_HighTempCabinVlv'
         */
        VeTHDR_b_STGDiagFA_HTCV_AD = KeTHDR_b_STGDiagFA_HTCV_D;
    }

    /* End of Switch: '<S1219>/Switch' */

    /* Switch: '<S1220>/Switch' incorporates:
     *  Constant: '<S1231>/Calib'
     */
    if (KeTHDR_b_STBDiagFA_HTCV_SD)
    {
        /* Switch: '<S1220>/Switch' incorporates:
         *  Constant: '<S1230>/Calib'
         *  Inport: '<Root>/VeHWIO_b_STBDiagFA_HighTempCabinVlv'
         */
        VeTHDR_b_STBDiagFA_HTCV_AD = KeTHDR_b_STBDiagFA_HTCV_D;
    }

    /* End of Switch: '<S1220>/Switch' */

    /* Switch: '<S1221>/Switch' incorporates:
     *  Constant: '<S1233>/Calib'
     */
    if (KeTHDR_b_OCDiagFA_HTCV_SD)
    {
        /* Switch: '<S1221>/Switch' incorporates:
         *  Constant: '<S1232>/Calib'
         *  Inport: '<Root>/VeHWIO_b_OCDiagFA_HighTempCabinVlv'
         */
        VeTHDR_b_OCDiagFA_HTCV_AD = KeTHDR_b_OCDiagFA_HTCV_D;
    }

    /* End of Switch: '<S1221>/Switch' */

    /* Switch: '<S1222>/Switch5' incorporates:
     *  Constant: '<S1236>/Calib'
     */
    if (KeTHDR_b_DsblDigFailSfe_OvdEnbl)
    {
        /* Switch: '<S1222>/Switch5' incorporates:
         *  Constant: '<S1237>/Calib'
         *  Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe'
         */
        VeTHDR_b_DsblDiagFailSafe_Dial = KeTHDR_b_DsblDigFailSfe_OvrdVal;
    }

    /* End of Switch: '<S1222>/Switch5' */

    /* Switch: '<S1222>/Switch6' incorporates:
     *  Constant: '<S1238>/Calib'
     */
    if (KeTHDR_b_PostClrDiagDsbl_OvrdEnbl)
    {
        /* Switch: '<S1222>/Switch6' incorporates:
         *  Constant: '<S1239>/Calib'
         *  Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl'
         */
        VeTHDR_b_PostCodeClrDiagDsbl_OvrdVal_Dial =
            KeTHDR_b_PostClrDiagDsbl_OvrdVal;
    }

    /* End of Switch: '<S1222>/Switch6' */

    /* Switch: '<S1222>/Switch1' incorporates:
     *  Constant: '<S1234>/Calib'
     */
    if (KeTHDR_b_DiagGlblCndtnsValid_OvrdEnbl)
    {
        /* Switch: '<S1222>/Switch1' incorporates:
         *  Constant: '<S1235>/Calib'
         *  Inport: '<Root>/VeDFIR_b_IsDiagGlobalConditionsValid'
         */
        VeTHDR_b_DiagGlblCndtnsValid_OvrdVal_Dial =
            KeTHDR_b_DiagGlblCndtnsValid_OvrdVal;
    }

    /* End of Switch: '<S1222>/Switch1' */

    /* Switch: '<S1223>/Switch' incorporates:
     *  Constant: '<S1240>/Calib'
     */
    if (KeTHDR_b_EngSpd_SelDial)
    {
        /* Switch: '<S1223>/Switch' incorporates:
         *  Constant: '<S1241>/Calib'
         *  Inport: '<Root>/VeTISR_n_InputSpeed'
         */
        VeTHDR_n_InputSpeed = KeTHDR_n_EngSpd_Dial;
    }

    /* End of Switch: '<S1223>/Switch' */

    /* Switch: '<S1224>/Switch' incorporates:
     *  Constant: '<S1243>/Calib'
     */
    if (KeTHDR_b_HT_CabVlvSts_RCVR_Pct_SelDial)
    {
        /* Switch: '<S1224>/Switch' incorporates:
         *  Constant: '<S1242>/Calib'
         *  Inport: '<Root>/VeRCVR_Pct_HT_CabVlvSts'
         */
        VeTHDR_Pct_HT_CabVlvSts_AD = KeTHDR_Pct_HT_CabVlvSts_RCVR_Dial;
    }

    /* End of Switch: '<S1224>/Switch' */

    /* Switch: '<S1225>/Switch' incorporates:
     *  Constant: '<S1245>/Calib'
     */
    if (KeTHDR_b_LTPP_FunPer_FltDtct_SD)
    {
        /* Switch: '<S1225>/Switch' incorporates:
         *  Constant: '<S1244>/Calib'
         *  Inport: '<Root>/VeCPDR_b_LTPP_FunPer_FltDtct'
         */
        VeTHDR_b_LTPP_FunPer_FltDtct_AD = KeTHDR_b_LTPP_FunPer_FltDtct_D;
    }

    /* End of Switch: '<S1225>/Switch' */

    /* Switch: '<S1226>/Switch' incorporates:
     *  Constant: '<S1247>/Calib'
     */
    if (KeTHDR_b_LTPP2_FunPer_FltDtct_SD)
    {
        /* Switch: '<S1226>/Switch' incorporates:
         *  Constant: '<S1246>/Calib'
         *  Inport: '<Root>/VeCPDR_b_LTPP2_FunPer_FltDtct'
         */
        VeTHDR_b_LTPP2_FunPer_FltDtct_AD = KeTHDR_b_LTPP2_FunPer_FltDtct_D;
    }

    /* End of Switch: '<S1226>/Switch' */

    /* Switch: '<S1227>/Switch' incorporates:
     *  Constant: '<S1249>/Calib'
     */
    if (KeTHDR_b_HTAPFunPer_FltDtct_SD)
    {
        /* Switch: '<S1227>/Switch' incorporates:
         *  Constant: '<S1248>/Calib'
         *  Inport: '<Root>/VeCPDR_b_HTAP_FunPer_FltDtct'
         */
        VeTHDR_b_HTAPFunPer_FltDtct_AD = KeTHDR_b_HTAPFunPer_FltDtct_D;
    }

    /* End of Switch: '<S1227>/Switch' */
    /* End of Outputs for SubSystem: '<S1>/Input' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
#endif

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Diagnostic'
     */

    /* SignalConversion generated from: '<S4>/DiagGlblCndtnsValid' incorporates:
     *  SignalConversion generated from: '<S4>/VeDFIR_b_DsblDiagFailSafe'
     */
#if (Rte_SysCon_Variant_THDR_10 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_11 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_13) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_19) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_9)

    /* VariantMerge generated from: '<S4>/DiagGlblCndtnsValid' */
    rtb_VeTHDR_b_DiagGlblCndtnsValid_OvrdVal =
        VeTHDR_b_DiagGlblCndtnsValid_OvrdVal_Dial;

    /* VariantMerge generated from: '<S18>/Variant Source1' */
    rtb_VariantMerge_For_Variant_Source_Va_e = VeTHDR_b_DsblDiagFailSafe_Dial;

#elif !Rte_SysCon_Variant_THDR_12 || (!Rte_SysCon_Variant_THDR_10 && !Rte_SysCon_Variant_THDR_11 && !Rte_SysCon_Variant_THDR_13 && !Rte_SysCon_Variant_THDR_19 && !Rte_SysCon_Variant_THDR_9)

    /* VariantMerge generated from: '<S4>/DiagGlblCndtnsValid' incorporates:
     *  SignalConversion generated from: '<S4>/DiagGlblCndtnsValid'
     */
    rtb_VeTHDR_b_DiagGlblCndtnsValid_OvrdVal = false;

#endif

    /* End of SignalConversion generated from: '<S4>/DiagGlblCndtnsValid' */

    /* SignalConversion generated from: '<S4>/VeDFIR_b_PostCodeClrDiagDsbl' incorporates:
     *  SignalConversion generated from: '<S4>/VeDFIR_b_DsblDiagFailSafe'
     */
#if (Rte_SysCon_Variant_THDR_10 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_11 && Rte_SysCon_Variant_THDR_12) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_13) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_19) || (Rte_SysCon_Variant_THDR_12 && Rte_SysCon_Variant_THDR_9)

    /* VariantMerge generated from: '<S18>/Variant Source' */
    rtb_VariantMerge_For_Variant_Source_Va_d =
        VeTHDR_b_PostCodeClrDiagDsbl_OvrdVal_Dial;

#elif !Rte_SysCon_Variant_THDR_12 || (!Rte_SysCon_Variant_THDR_10 && !Rte_SysCon_Variant_THDR_11 && !Rte_SysCon_Variant_THDR_13 && !Rte_SysCon_Variant_THDR_19 && !Rte_SysCon_Variant_THDR_9)

    /* VariantMerge generated from: '<S18>/Variant Source1' incorporates:
     *  SignalConversion generated from: '<S4>/VeDFIR_b_DsblDiagFailSafe'
     */
    rtb_VariantMerge_For_Variant_Source_Va_e = false;

    /* VariantMerge generated from: '<S18>/Variant Source' incorporates:
     *  SignalConversion generated from: '<S4>/VeDFIR_b_PostCodeClrDiagDsbl'
     */
    rtb_VariantMerge_For_Variant_Source_Va_d = false;

#endif

    /* End of SignalConversion generated from: '<S4>/VeDFIR_b_PostCodeClrDiagDsbl' */

    /* Logic: '<S10>/NOT4' incorporates:
     *  Gain: '<S16>/Gain'
     *  Gain: '<S17>/Gain'
     */
#if Rte_SysCon_Variant_THDR_10 || Rte_SysCon_Variant_THDR_11 || Rte_SysCon_Variant_THDR_13 || Rte_SysCon_Variant_THDR_19 || Rte_SysCon_Variant_THDR_9

    /* Gain: '<S17>/Gain' */
    VeTHDR_b_ResetCnts = (rtb_VariantMerge_For_Variant_Source_Va_e ||
                          rtb_VariantMerge_For_Variant_Source_Va_d);

    /* Gain: '<S16>/Gain' */
    VeTHDR_b_ResetFOMs = rtb_VariantMerge_For_Variant_Source_Va_d;

#endif

    /* End of Logic: '<S10>/NOT4' */

    /* Outputs for Atomic SubSystem: '<S4>/AGS2_Perf_Diag' */
#if Rte_SysCon_Variant_THDR_11

    /* Outputs for Atomic SubSystem: '<S8>/If_AGS2_Perf_Diag' */
    /* Logic: '<S24>/Logical Operator8' incorporates:
     *  Constant: '<S48>/Constant1'
     *  Constant: '<S48>/Constant2'
     *  Constant: '<S49>/Constant1'
     *  Constant: '<S49>/Constant2'
     *  Constant: '<S51>/Calib'
     *  DataStoreRead: '<S48>/StatusByte_LIN2_BusOff'
     *  DataStoreRead: '<S49>/StatusByte_LostComm_AGS_B'
     *  Logic: '<S24>/Logical Operator10'
     *  Logic: '<S24>/Logical Operator11'
     *  Logic: '<S24>/Logical Operator12'
     *  Logic: '<S24>/Logical Operator9'
     *  Logic: '<S48>/Logical Operator'
     *  Logic: '<S49>/Logical Operator'
     *  RelationalOperator: '<S48>/Relational Operator1'
     *  RelationalOperator: '<S48>/Relational Operator2'
     *  RelationalOperator: '<S49>/Relational Operator1'
     *  RelationalOperator: '<S49>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S48>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S48>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S49>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S49>/Bitwise Operator2'
     *  UnitDelay: '<S24>/Unit Delay'
     */
    VeTHDR_b_AGS2_Perf_SysCond_Enbl = (((((((sint32)
        THDR_ac_DW.StatusByte_LIN2_BusOff) & 1) <= 0) || ((((uint32)
        THDR_ac_DW.StatusByte_LIN2_BusOff) & 64U) != 0U)) && (((((sint32)
        THDR_ac_DW.StatusByte_LostComm_AGS_B) & 1) <= 0) || ((((uint32)
        THDR_ac_DW.StatusByte_LostComm_AGS_B) & 64U) != 0U))) &&
        ((!THDR_ac_DW.UnitDelay_DSTATE_h4) || (KeTHDR_b_AGS2_Perf_NotDTC_OV)));

    /* RelationalOperator: '<S24>/Relational Operator' incorporates:
     *  Constant: '<S50>/Calib'
     *  UnitDelay: '<S24>/Unit Delay'
     */
    THDR_ac_DW.UnitDelay_DSTATE_h4 = (rtb_TmpSignalConversionAtVeAATR_T_EstAmb >
        KeTHDR_T_AGS2_Perf_AmbAirTempMin_Enbl);

    /* Logic: '<S24>/Logical Operator3' incorporates:
     *  Constant: '<S46>/Constant'
     *  Logic: '<S24>/Logical Operator14'
     *  Logic: '<S24>/Logical Operator2'
     *  RelationalOperator: '<S24>/Relational Operator5'
     *  UnitDelay: '<S24>/Unit Delay'
     */
    VeTHDR_b_AGS2_Perf_PhysCond_Enbl = (((((uint32)
        rtb_TmpSignalConversionAtVeTAIR_e_AGS2_C) == CeTAIR_e_AGS_Calibrated) &&
        (THDR_ac_DW.UnitDelay_DSTATE_h4)) ||
        (rtb_TmpSignalConversionAtVeFSCR_b_AGS2_C &&
         (THDR_ac_DW.UnitDelay_DSTATE_h4)));

    /* RelationalOperator: '<S24>/Relational Operator1' incorporates:
     *  RelationalOperator: '<S24>/Relational Operator3'
     *  UnitDelay: '<S24>/Unit Delay3'
     */
    rtb_RelationalOperator1_kcc_tmp = THDR_ac_DW.UnitDelay3_DSTATE_e;

    /* RelationalOperator: '<S24>/Relational Operator1' */
    rtb_RelationalOperator1_ls = (rtb_TmpSignalConversionAtVeFSCR_e_AGS2_P ==
        rtb_RelationalOperator1_kcc_tmp);

    /* Outputs for Atomic SubSystem: '<S24>/Turn On Delay Time with Resetable delay' */
    /* Logic: '<S24>/Logical Operator7' incorporates:
     *  Logic: '<S56>/OR1'
     */
    rtb_LogicalOperator7_lw_tmp = !rtb_RelationalOperator1_ls;

    /* Outputs for Atomic SubSystem: '<S56>/EdgeRising with resetable delay' */
    /* Switch: '<S59>/Switch1' incorporates:
     *  Logic: '<S24>/Logical Operator7'
     */
    if (rtb_LogicalOperator7_lw_tmp)
    {
        /* RelationalOperator: '<S32>/Less Than  or Equal' incorporates:
         *  Constant: '<S57>/Constant1'
         */
        rtb_LessThanorEqual_lu = true;
    }
    else
    {
        /* RelationalOperator: '<S32>/Less Than  or Equal' incorporates:
         *  UnitDelay: '<S59>/Unit Delay'
         */
        rtb_LessThanorEqual_lu = THDR_ac_DW.UnitDelay_DSTATE_h43;
    }

    /* End of Switch: '<S59>/Switch1' */

    /* Switch: '<S59>/Switch3' incorporates:
     *  Logic: '<S24>/Logical Operator7'
     *  UnitDelay: '<S59>/Unit Delay'
     */
    THDR_ac_DW.UnitDelay_DSTATE_h43 = (rtb_LogicalOperator7_lw_tmp ||
        rtb_RelationalOperator1_ls);

    /* Switch: '<S56>/Switch1' incorporates:
     *  Logic: '<S24>/Logical Operator7'
     *  Logic: '<S56>/OR'
     *  Logic: '<S57>/AND'
     *  Logic: '<S57>/OR1'
     *  Switch: '<S58>/Switch1'
     */
    if (rtb_LogicalOperator7_lw_tmp || (rtb_RelationalOperator1_ls &&
            (!rtb_LessThanorEqual_lu)))
    {
        /* Switch: '<S56>/Switch1' incorporates:
         *  Constant: '<S56>/Constant Value1'
         */
        rtb_Switch1_cr = 0.0F;
    }
    else
    {
        if (rtb_LogicalOperator7_lw_tmp)
        {
            /* Switch: '<S58>/Switch1' incorporates:
             *  Constant: '<S56>/Constant1'
             */
            THDR_ac_DW.UnitDelay_DSTATE_i5 = 0.0F;
        }

        /* Switch: '<S56>/Switch1' incorporates:
         *  Constant: '<S24>/Constant Value'
         *  Constant: '<S53>/Calib'
         *  MinMax: '<S56>/Minimum'
         *  Sum: '<S56>/Summation'
         */
        rtb_Switch1_cr = fminf(KeTHDR_t_AGS2_Perf_PosReqNoChgTime_Enbl,
                               THDR_ac_DW.UnitDelay_DSTATE_i5 + 0.1F);
    }

    /* End of Switch: '<S56>/Switch1' */
    /* End of Outputs for SubSystem: '<S56>/EdgeRising with resetable delay' */

    /* Switch: '<S58>/Switch3' incorporates:
     *  Logic: '<S24>/Logical Operator7'
     */
    if (rtb_LogicalOperator7_lw_tmp)
    {
        /* Switch: '<S58>/Switch1' incorporates:
         *  Constant: '<S56>/Constant1'
         *  UnitDelay: '<S58>/Unit Delay'
         */
        THDR_ac_DW.UnitDelay_DSTATE_i5 = 0.0F;
    }
    else
    {
        /* Switch: '<S58>/Switch1' incorporates:
         *  UnitDelay: '<S58>/Unit Delay'
         */
        THDR_ac_DW.UnitDelay_DSTATE_i5 = rtb_Switch1_cr;
    }

    /* End of Switch: '<S58>/Switch3' */

    /* Logic: '<S24>/Logical Operator13' incorporates:
     *  Constant: '<S53>/Calib'
     *  Constant: '<S54>/Calib'
     *  Logic: '<S56>/AND'
     *  RelationalOperator: '<S56>/Greater  Than'
     */
    VeTHDR_b_AGS2_Perf_PosReqNoChgTime_Enbl = ((rtb_RelationalOperator1_ls &&
        (rtb_Switch1_cr >= KeTHDR_t_AGS2_Perf_PosReqNoChgTime_Enbl)) ||
        (KeTHDR_t_AGS2_Perf_PosReqNoChgTime_OV));

    /* End of Outputs for SubSystem: '<S24>/Turn On Delay Time with Resetable delay' */

    /* Logic: '<S24>/Logical Operator1' incorporates:
     *  Constant: '<S47>/Constant'
     *  RelationalOperator: '<S24>/Relational Operator3'
     *  RelationalOperator: '<S24>/Relational Operator4'
     *  UnitDelay: '<S24>/Unit Delay'
     */
    THDR_ac_DW.UnitDelay_DSTATE_h4 = ((((uint32)
        rtb_TmpSignalConversionAtVeTAIR_e_AGS2_C) == CeTAIR_e_AGS_Calibrated) &&
        (rtb_TmpSignalConversionAtVeFSCR_e_AGS2_P !=
         rtb_RelationalOperator1_kcc_tmp));

    /* CombinatorialLogic: '<S55>/Logic' incorporates:
     *  Constant: '<S24>/Constant Value1'
     *  Memory: '<S55>/Memory'
     *  UnitDelay: '<S24>/Unit Delay'
     */
    rowIdx = 0U;
    tmp[0] = THDR_ac_DW.UnitDelay_DSTATE_h4;
    tmp[1] = false;
    tmp[2] = THDR_ac_DW.Memory_PreviousInput_f;
    for (i = 0; i < 3; i++)
    {
        rowIdx = (rowIdx << 1U) + (tmp[(uint32)i] ? 1U : 0U);
    }

    for (i = 0; i < 2; i++)
    {
        rtb_Logic_n[(uint32)i] = THDR_ac_ConstP.pooled16[(((uint32)i) << 3U) +
            rowIdx];
    }

    /* End of CombinatorialLogic: '<S55>/Logic' */

    /* Inport: '<Root>/VeTAIR_b_AGS2_CurrPosFA' */
    (void)Rte_Read_VeTAIR_b_AGS2_CurrPosFA_Value(&rtb_AND_nb);

    /* Inport: '<Root>/VeTAIR_e_AGS2_CurrPos' */
    (void)Rte_Read_VeTAIR_e_AGS2_CurrPos_Value(&tmpRead_e);

    /* Logic: '<S24>/Logical Operator' incorporates:
     *  Constant: '<S52>/Calib'
     */
    VeTHDR_b_AGS2_Perf_WaitFirstMvmt_Enbl = (((rtb_Logic_n[0]) ||
        rtb_TmpSignalConversionAtVeFSCR_b_AGS2_C) ||
        (KeTHDR_b_AGS2_Perf_WaitFirstMvmt_OV));

    /* Logic: '<S24>/Logical Operator4' */
    VeTHDR_b_AGS2_Perf_Enbl = ((((rtb_VeTHDR_b_DiagGlblCndtnsValid_OvrdVal &&
        (VeTHDR_b_AGS2_Perf_SysCond_Enbl)) && (VeTHDR_b_AGS2_Perf_PhysCond_Enbl))
        && (VeTHDR_b_AGS2_Perf_PosReqNoChgTime_Enbl)) &&
        (VeTHDR_b_AGS2_Perf_WaitFirstMvmt_Enbl));

    /* Logic: '<S25>/Logical Operator2' incorporates:
     *  Constant: '<S60>/Calib'
     */
    rtb_TmpSignalConversionAtVeFSCR_b_AGS2_C =
        (((KeTHDR_b_AGS2_Perf_CurrPosFA_FaultSymp_Enbl) &&
          (VeTHDR_b_AGS2_Perf_Enbl)) && rtb_AND_nb);

    /* Outputs for Atomic SubSystem: '<S25>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S62>/EdgeRising' */
    /* Logic: '<S63>/AND' incorporates:
     *  Logic: '<S63>/OR1'
     *  UnitDelay: '<S63>/Unit Delay'
     */
    rtb_AND_nb = (rtb_TmpSignalConversionAtVeFSCR_b_AGS2_C &&
                  (!THDR_ac_DW.UnitDelay_DSTATE_mg));

    /* Update for UnitDelay: '<S63>/Unit Delay' */
    THDR_ac_DW.UnitDelay_DSTATE_mg = rtb_TmpSignalConversionAtVeFSCR_b_AGS2_C;

    /* End of Outputs for SubSystem: '<S62>/EdgeRising' */

    /* Switch: '<S62>/Switch1' incorporates:
     *  Constant: '<S12>/Calib'
     *  Constant: '<S61>/Calib'
     *  Constant: '<S62>/Constant Value1'
     *  Logic: '<S62>/OR'
     *  Logic: '<S62>/OR1'
     *  MinMax: '<S62>/Minimum'
     *  Sum: '<S62>/Summation'
     *  UnitDelay: '<S62>/Unit Delay'
     */
    if ((!rtb_TmpSignalConversionAtVeFSCR_b_AGS2_C) || rtb_AND_nb)
    {
        THDR_ac_DW.UnitDelay_DSTATE_bg = 0.0F;
    }
    else
    {
        THDR_ac_DW.UnitDelay_DSTATE_bg = fminf
            (KeTHDR_t_AGS2_Perf_CurrPosFA_DbncTime, HeTHDR_t_MedTEH +
             THDR_ac_DW.UnitDelay_DSTATE_bg);
    }

    /* End of Switch: '<S62>/Switch1' */

    /* Logic: '<S25>/Logical Operator' incorporates:
     *  Constant: '<S61>/Calib'
     *  Inport: '<Root>/VeTAIR_e_AGS2_CurrPos'
     *  Logic: '<S62>/AND'
     *  RelationalOperator: '<S25>/Relational Operator'
     *  RelationalOperator: '<S62>/Greater  Than'
     *  UnitDelay: '<S62>/Unit Delay'
     */
    VeTHDR_b_AGS2_Perf_FaultSymp = ((rtb_TmpSignalConversionAtVeFSCR_e_AGS2_P !=
        tmpRead_e) || (rtb_TmpSignalConversionAtVeFSCR_b_AGS2_C &&
                       (THDR_ac_DW.UnitDelay_DSTATE_bg >=
                        KeTHDR_t_AGS2_Perf_CurrPosFA_DbncTime)));

    /* End of Outputs for SubSystem: '<S25>/Turn On Delay Time' */

    /* Outputs for Atomic SubSystem: '<S21>/AGS2_Perf_Check' */
    /* RelationalOperator: '<S30>/Relational Operator3' incorporates:
     *  Constant: '<S30>/Constant3'
     *  DataStoreRead: '<S31>/StatusByte_AGS_B_Perf'
     *  S-Function (sfix_bitop): '<S30>/Bitwise Operator2'
     */
    rtb_AND_nb = ((((uint32)THDR_ac_DW.StatusByte_AGS_B_Perf) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S30>/EdgeFalling1' */
    /* Logic: '<S30>/Logical Operator' incorporates:
     *  Logic: '<S33>/OR1'
     */
    rtb_RelationalOperator1_ls = !rtb_AND_nb;

    /* End of Outputs for SubSystem: '<S30>/EdgeFalling1' */

    /* Logic: '<S30>/Logical1' incorporates:
     *  Constant: '<S28>/Calib'
     *  Constant: '<S29>/Calib'
     *  Constant: '<S30>/Constant1'
     *  DataStoreRead: '<S31>/StatusByte_AGS_B_Perf'
     *  Logic: '<S23>/AND1'
     *  Logic: '<S30>/Logical Operator'
     *  Logic: '<S30>/Logical10'
     *  Logic: '<S30>/Logical12'
     *  RelationalOperator: '<S30>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S30>/Bitwise Operator3'
     */
    rtb_TmpSignalConversionAtVeFSCR_b_AGS2_C = (((VeTHDR_b_AGS2_Perf_Enbl) &&
        (KeTHDR_b_AGS2_Perf_XYEnbl)) && ((!KeTHDR_b_AGS_B_Perf_LtchEnbl) ||
        (((((uint32)THDR_ac_DW.StatusByte_AGS_B_Perf) & 1U) == 0U) ||
         rtb_RelationalOperator1_ls)));

    /* Outputs for Atomic SubSystem: '<S30>/EdgeFalling1' */
    /* Logic: '<S33>/AND' incorporates:
     *  UnitDelay: '<S33>/Unit Delay'
     */
    rtb_RelationalOperator1_ls = (rtb_RelationalOperator1_ls &&
        (THDR_ac_DW.UnitDelay_DSTATE_cv));

    /* Update for UnitDelay: '<S33>/Unit Delay' */
    THDR_ac_DW.UnitDelay_DSTATE_cv = rtb_AND_nb;

    /* End of Outputs for SubSystem: '<S30>/EdgeFalling1' */

    /* Logic: '<S30>/Logical5' */
    rtb_AND_nb = ((VeTHDR_b_ResetCnts) || rtb_RelationalOperator1_ls);

    /* UnitDelay: '<S32>/Unit Delay1' incorporates:
     *  UnitDelay: '<S24>/Unit Delay'
     */
    THDR_ac_DW.UnitDelay_DSTATE_h4 = THDR_ac_DW.UnitDelay1_DSTATE_pf;

    /* Outputs for Atomic SubSystem: '<S32>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S32>/Counter Reset  Enabled ' */
    /* Switch: '<S39>/Switch1' incorporates:
     *  Logic: '<S32>/Fail Counter Reset'
     *  Logic: '<S32>/NOT6'
     *  Switch: '<S39>/Switch2'
     *  Switch: '<S40>/Switch1'
     *  UnitDelay: '<S24>/Unit Delay'
     *  UnitDelay: '<S32>/Unit Delay'
     */
    if ((rtb_AND_nb || (THDR_ac_DW.UnitDelay_DSTATE_oc2)) ||
            (THDR_ac_DW.UnitDelay_DSTATE_h4))
    {
        /* Switch: '<S39>/Switch1' incorporates:
         *  Constant: '<S39>/Constant Value2'
         */
        VeTHDR_Cnt_AGS2_Perf_FailCnt = 0U;

        /* Switch: '<S40>/Switch1' incorporates:
         *  Constant: '<S40>/Constant Value2'
         */
        VeTHDR_Cnt_AGS2_Perf_SmpCnt = 0U;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeFSCR_b_AGS2_C &&
                (VeTHDR_b_AGS2_Perf_FaultSymp))
        {
            /* Switch: '<S39>/Switch1' incorporates:
             *  Constant: '<S39>/Constant Value1'
             *  Sum: '<S39>/Subtraction'
             *  Switch: '<S39>/Switch2'
             *  UnitDelay: '<S39>/Unit Delay'
             */
            VeTHDR_Cnt_AGS2_Perf_FailCnt = (uint16)(((uint32)
                VeTHDR_Cnt_AGS2_Perf_FailCnt) + 1U);
        }

        /* Switch: '<S40>/Switch2' */
        if (rtb_TmpSignalConversionAtVeFSCR_b_AGS2_C)
        {
            /* Switch: '<S40>/Switch1' incorporates:
             *  Constant: '<S40>/Constant Value1'
             *  Sum: '<S40>/Subtraction'
             *  Switch: '<S40>/Switch2'
             *  UnitDelay: '<S40>/Unit Delay'
             */
            VeTHDR_Cnt_AGS2_Perf_SmpCnt = (uint16)(((uint32)
                VeTHDR_Cnt_AGS2_Perf_SmpCnt) + 1U);
        }

        /* End of Switch: '<S40>/Switch2' */
    }

    /* End of Switch: '<S39>/Switch1' */
    /* End of Outputs for SubSystem: '<S32>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S32>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S32>/Greater Than or Equal ' incorporates:
     *  Constant: '<S26>/Calib'
     */
    THDR_ac_DW.UnitDelay1_DSTATE_pf = (((float32)VeTHDR_Cnt_AGS2_Perf_FailCnt) >=
        KeTHDR_Cnt_AGS2_Perf_FailCnt);

    /* Logic: '<S32>/NOT5' incorporates:
     *  Constant: '<S27>/Calib'
     *  Logic: '<S32>/NOT3'
     *  RelationalOperator: '<S32>/Less Than  or Equal'
     */
    THDR_ac_DW.UnitDelay_DSTATE_oc2 = ((((float32)VeTHDR_Cnt_AGS2_Perf_SmpCnt) >=
        KeTHDR_Cnt_AGS2_Perf_SmpCnt) && (!THDR_ac_DW.UnitDelay1_DSTATE_pf));

    /* Switch: '<S45>/Switch1' incorporates:
     *  Constant: '<S38>/Constant Value'
     *  DataStoreWrite: '<S23>/Data Store Write3'
     *  Switch: '<S44>/Switch1'
     */
    if (VeTHDR_b_ResetFOMs)
    {
        THDR_ac_DW.NeTHDR_Cnt_AGS2_Perf_MFOP = 0U;
    }
    else
    {
        if (THDR_ac_DW.UnitDelay_DSTATE_oc2)
        {
            /* MinMax: '<S38>/Minimum2' incorporates:
             *  DataStoreRead: '<S23>/Data Store Read1'
             *  Switch: '<S44>/Switch1'
             */
            if (VeTHDR_Cnt_AGS2_Perf_FailCnt >
                    THDR_ac_DW.NeTHDR_Cnt_AGS2_Perf_MFOP)
            {
                /* DataStoreWrite: '<S23>/Data Store Write3' incorporates:
                 *  Switch: '<S44>/Switch1'
                 */
                THDR_ac_DW.NeTHDR_Cnt_AGS2_Perf_MFOP =
                    VeTHDR_Cnt_AGS2_Perf_FailCnt;
            }

            /* End of MinMax: '<S38>/Minimum2' */
        }
    }

    /* End of Switch: '<S45>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S30>/Fail' */
    THDR_ac_Fail(THDR_ac_DW.UnitDelay1_DSTATE_pf,
                 &THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultSt_c);

    /* End of Outputs for SubSystem: '<S30>/Fail' */

    /* Outputs for Enabled SubSystem: '<S30>/Init' */
    THDR_ac_Init_l(rtb_AND_nb,
                   &THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultSt_c);

    /* End of Outputs for SubSystem: '<S30>/Init' */

    /* Outputs for Enabled SubSystem: '<S30>/Pass' */
    THDR_ac_Pass(THDR_ac_DW.UnitDelay_DSTATE_oc2,
                 &THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultSt_c);

    /* End of Outputs for SubSystem: '<S30>/Pass' */

    /* VariantMerge generated from: '<S8>/b_AGS2_Perf_DTC' incorporates:
     *  Constant: '<S34>/Constant'
     *  RelationalOperator: '<S30>/Relational Operator'
     *  VariantMerge generated from: '<S8>/VeTHDR_e_FaultSts_AGS_B_Perf'
     */
    THDR_ac_B.VariantMergeForOutportb_AGS2_Perf_DTC = (((uint32)
        THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultSt_c) == CeDFIB_e_Fail);

    /* End of Outputs for SubSystem: '<S21>/AGS2_Perf_Check' */

    /* Update for UnitDelay: '<S24>/Unit Delay' */
    THDR_ac_DW.UnitDelay_DSTATE_h4 =
        THDR_ac_B.VariantMergeForOutportb_AGS2_Perf_DTC;

    /* Update for UnitDelay: '<S24>/Unit Delay3' incorporates:
     *  SignalConversion generated from: '<S1>/VeFSCR_e_AGS2_PosReq'
     */
    THDR_ac_DW.UnitDelay3_DSTATE_e = rtb_TmpSignalConversionAtVeFSCR_e_AGS2_P;

    /* Update for Memory: '<S55>/Memory' */
    THDR_ac_DW.Memory_PreviousInput_f = rtb_Logic_n[0];

    /* End of Outputs for SubSystem: '<S8>/If_AGS2_Perf_Diag' */
#else

    /* Outputs for Atomic SubSystem: '<S8>/Else_AGS2_Perf_Diag' */
    /* VariantMerge generated from: '<S8>/VeTHDR_e_FaultSts_AGS_B_Perf' incorporates:
     *  Constant: '<S22>/Constant'
     */
    THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultSt_c = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S8>/b_AGS2_Perf_DTC' incorporates:
     *  Constant: '<S20>/FALSE Constant'
     */
    THDR_ac_B.VariantMergeForOutportb_AGS2_Perf_DTC = false;

    /* End of Outputs for SubSystem: '<S8>/Else_AGS2_Perf_Diag' */
#endif

    /* End of Outputs for SubSystem: '<S4>/AGS2_Perf_Diag' */

    /* Outputs for Atomic SubSystem: '<S4>/AGS_Perf_Diag' */
#if Rte_SysCon_Variant_THDR_10

    /* Outputs for Atomic SubSystem: '<S9>/If_AGS_Perf_Diag' */
    /* Logic: '<S68>/Logical Operator8' incorporates:
     *  Constant: '<S92>/Constant1'
     *  Constant: '<S92>/Constant2'
     *  Constant: '<S93>/Constant1'
     *  Constant: '<S93>/Constant2'
     *  Constant: '<S95>/Calib'
     *  DataStoreRead: '<S92>/StatusByte_LIN3_BusOff'
     *  DataStoreRead: '<S93>/StatusByte_LostComm_AGS_A'
     *  Logic: '<S68>/Logical Operator10'
     *  Logic: '<S68>/Logical Operator11'
     *  Logic: '<S68>/Logical Operator12'
     *  Logic: '<S68>/Logical Operator9'
     *  Logic: '<S92>/Logical Operator'
     *  Logic: '<S93>/Logical Operator'
     *  RelationalOperator: '<S92>/Relational Operator1'
     *  RelationalOperator: '<S92>/Relational Operator2'
     *  RelationalOperator: '<S93>/Relational Operator1'
     *  RelationalOperator: '<S93>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S92>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S92>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S93>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S93>/Bitwise Operator2'
     *  UnitDelay: '<S68>/Unit Delay'
     */
    VeTHDR_b_AGS_Perf_SysCond_Enbl = (((((((sint32)
        THDR_ac_DW.StatusByte_LIN3_BusOff) & 1) <= 0) || ((((uint32)
        THDR_ac_DW.StatusByte_LIN3_BusOff) & 64U) != 0U)) && (((((sint32)
        THDR_ac_DW.StatusByte_LostComm_AGS_A) & 1) <= 0) || ((((uint32)
        THDR_ac_DW.StatusByte_LostComm_AGS_A) & 64U) != 0U))) &&
        ((!THDR_ac_DW.UnitDelay_DSTATE_ie) || (KeTHDR_b_AGS_Perf_NotDTC_OV)));

    /* RelationalOperator: '<S68>/Relational Operator' incorporates:
     *  Constant: '<S94>/Calib'
     *  UnitDelay: '<S68>/Unit Delay'
     */
    THDR_ac_DW.UnitDelay_DSTATE_ie = (rtb_TmpSignalConversionAtVeAATR_T_EstAmb >
        KeTHDR_T_AGS_Perf_AmbAirTempMin_Enbl);

    /* Logic: '<S68>/Logical Operator5' incorporates:
     *  Constant: '<S90>/Constant'
     *  Logic: '<S68>/Logical Operator2'
     *  Logic: '<S68>/Logical Operator6'
     *  RelationalOperator: '<S68>/Relational Operator2'
     *  SignalConversion generated from: '<S1>/VeTAIR_e_AGS_CalibrationSts'
     *  UnitDelay: '<S68>/Unit Delay'
     */
    VeTHDR_b_AGS_Perf_PhysCond_Enbl = (((((uint32)
        rtb_TmpSignalConversionAtVeTAIR_e_AGS_Ca) == CeTAIR_e_AGS_Calibrated) &&
        (THDR_ac_DW.UnitDelay_DSTATE_ie)) ||
        (rtb_TmpSignalConversionAtVeFSCR_b_AGS_Ca &&
         (THDR_ac_DW.UnitDelay_DSTATE_ie)));

    /* RelationalOperator: '<S68>/Relational Operator1' incorporates:
     *  RelationalOperator: '<S68>/Relational Operator3'
     *  UnitDelay: '<S68>/Unit Delay2'
     */
    rtb_RelationalOperator1_kcc_tmp = THDR_ac_DW.UnitDelay2_DSTATE_l;

    /* RelationalOperator: '<S68>/Relational Operator1' incorporates:
     *  SignalConversion generated from: '<S1>/VeFSCR_e_AGS_PosReq'
     */
    rtb_TmpSignalConversionAtVeFSCR_b_AGS2_C =
        (rtb_TmpSignalConversionAtVeFSCR_e_AGS_Po ==
         rtb_RelationalOperator1_kcc_tmp);

    /* Outputs for Atomic SubSystem: '<S68>/Turn On Delay Time with Resetable delay' */
    /* Logic: '<S68>/Logical Operator7' incorporates:
     *  Logic: '<S100>/OR1'
     */
    rtb_AND_nb = !rtb_TmpSignalConversionAtVeFSCR_b_AGS2_C;

    /* Outputs for Atomic SubSystem: '<S100>/EdgeRising with resetable delay' */
    /* Switch: '<S103>/Switch1' incorporates:
     *  Logic: '<S68>/Logical Operator7'
     */
    if (rtb_AND_nb)
    {
        /* RelationalOperator: '<S76>/Less Than  or Equal' incorporates:
         *  Constant: '<S101>/Constant1'
         */
        rtb_RelationalOperator1_ls = true;
    }
    else
    {
        /* RelationalOperator: '<S76>/Less Than  or Equal' incorporates:
         *  UnitDelay: '<S103>/Unit Delay'
         */
        rtb_RelationalOperator1_ls = THDR_ac_DW.UnitDelay_DSTATE_fe;
    }

    /* End of Switch: '<S103>/Switch1' */

    /* Switch: '<S103>/Switch3' incorporates:
     *  Logic: '<S68>/Logical Operator7'
     *  UnitDelay: '<S103>/Unit Delay'
     */
    THDR_ac_DW.UnitDelay_DSTATE_fe = (rtb_AND_nb ||
        rtb_TmpSignalConversionAtVeFSCR_b_AGS2_C);

    /* Switch: '<S100>/Switch1' incorporates:
     *  Logic: '<S100>/OR'
     *  Logic: '<S101>/AND'
     *  Logic: '<S101>/OR1'
     *  Logic: '<S68>/Logical Operator7'
     *  Switch: '<S102>/Switch1'
     */
    if (rtb_AND_nb || (rtb_TmpSignalConversionAtVeFSCR_b_AGS2_C &&
                       (!rtb_RelationalOperator1_ls)))
    {
        /* Switch: '<S100>/Switch1' incorporates:
         *  Constant: '<S100>/Constant Value1'
         */
        rtb_Switch1_cr = 0.0F;
    }
    else
    {
        if (rtb_AND_nb)
        {
            /* Switch: '<S102>/Switch1' incorporates:
             *  Constant: '<S100>/Constant1'
             */
            THDR_ac_DW.UnitDelay_DSTATE_nh = 0.0F;
        }

        /* Switch: '<S100>/Switch1' incorporates:
         *  Constant: '<S68>/Constant Value'
         *  Constant: '<S97>/Calib'
         *  MinMax: '<S100>/Minimum'
         *  Sum: '<S100>/Summation'
         */
        rtb_Switch1_cr = fminf(KeTHDR_t_AGS_Perf_PosReqNoChgTime_Enbl,
                               THDR_ac_DW.UnitDelay_DSTATE_nh + 0.1F);
    }

    /* End of Switch: '<S100>/Switch1' */
    /* End of Outputs for SubSystem: '<S100>/EdgeRising with resetable delay' */

    /* Switch: '<S102>/Switch3' incorporates:
     *  Logic: '<S68>/Logical Operator7'
     */
    if (rtb_AND_nb)
    {
        /* Switch: '<S102>/Switch1' incorporates:
         *  Constant: '<S100>/Constant1'
         *  UnitDelay: '<S102>/Unit Delay'
         */
        THDR_ac_DW.UnitDelay_DSTATE_nh = 0.0F;
    }
    else
    {
        /* Switch: '<S102>/Switch1' incorporates:
         *  UnitDelay: '<S102>/Unit Delay'
         */
        THDR_ac_DW.UnitDelay_DSTATE_nh = rtb_Switch1_cr;
    }

    /* End of Switch: '<S102>/Switch3' */

    /* Logic: '<S68>/Logical Operator13' incorporates:
     *  Constant: '<S97>/Calib'
     *  Constant: '<S98>/Calib'
     *  Logic: '<S100>/AND'
     *  RelationalOperator: '<S100>/Greater  Than'
     */
    VeTHDR_b_AGS_Perf_PosReqNoChgTime_Enbl =
        ((rtb_TmpSignalConversionAtVeFSCR_b_AGS2_C && (rtb_Switch1_cr >=
           KeTHDR_t_AGS_Perf_PosReqNoChgTime_Enbl)) ||
         (KeTHDR_t_AGS_Perf_PosReqNoChgTime_OV));

    /* End of Outputs for SubSystem: '<S68>/Turn On Delay Time with Resetable delay' */

    /* Logic: '<S68>/Logical Operator1' incorporates:
     *  Constant: '<S91>/Constant'
     *  RelationalOperator: '<S68>/Relational Operator1'
     *  RelationalOperator: '<S68>/Relational Operator2'
     *  RelationalOperator: '<S68>/Relational Operator3'
     *  RelationalOperator: '<S68>/Relational Operator4'
     *  SignalConversion generated from: '<S1>/VeFSCR_e_AGS_PosReq'
     *  SignalConversion generated from: '<S1>/VeTAIR_e_AGS_CalibrationSts'
     *  UnitDelay: '<S68>/Unit Delay'
     */
    THDR_ac_DW.UnitDelay_DSTATE_ie = ((((uint32)
        rtb_TmpSignalConversionAtVeTAIR_e_AGS_Ca) == CeTAIR_e_AGS_Calibrated) &&
        (rtb_TmpSignalConversionAtVeFSCR_e_AGS_Po !=
         rtb_RelationalOperator1_kcc_tmp));

    /* CombinatorialLogic: '<S99>/Logic' incorporates:
     *  Constant: '<S68>/Constant Value1'
     *  Memory: '<S99>/Memory'
     *  UnitDelay: '<S68>/Unit Delay'
     */
    rowIdx = 0U;
    tmp[0] = THDR_ac_DW.UnitDelay_DSTATE_ie;
    tmp[1] = false;
    tmp[2] = THDR_ac_DW.Memory_PreviousInput;
    for (i = 0; i < 3; i++)
    {
        rowIdx = (rowIdx << 1U) + (tmp[(uint32)i] ? 1U : 0U);
    }

    for (i = 0; i < 2; i++)
    {
        rtb_Logic[(uint32)i] = THDR_ac_ConstP.pooled16[(((uint32)i) << 3U) +
            rowIdx];
    }

    /* End of CombinatorialLogic: '<S99>/Logic' */

    /* Inport: '<Root>/VeTAIR_b_AGS_CurrPosFA' */
    (void)Rte_Read_VeTAIR_b_AGS_CurrPosFA_Value(&rtb_AND_jj);

    /* Inport: '<Root>/VeTAIR_e_AGS_CurrPos' */
    (void)Rte_Read_VeTAIR_e_AGS_CurrPos_Value(&tmpRead_d);

    /* Logic: '<S68>/Logical Operator' incorporates:
     *  Constant: '<S96>/Calib'
     */
    VeTHDR_b_AGS_Perf_WaitFirstMvmt_Enbl = (((rtb_Logic[0]) ||
        rtb_TmpSignalConversionAtVeFSCR_b_AGS_Ca) ||
        (KeTHDR_b_AGS_Perf_WaitFirstMvmt_OV));

    /* Logic: '<S68>/Logical Operator4' */
    VeTHDR_b_AGS_Perf_Enbl = ((((rtb_VeTHDR_b_DiagGlblCndtnsValid_OvrdVal &&
        (VeTHDR_b_AGS_Perf_SysCond_Enbl)) && (VeTHDR_b_AGS_Perf_PhysCond_Enbl)) &&
        (VeTHDR_b_AGS_Perf_PosReqNoChgTime_Enbl)) &&
        (VeTHDR_b_AGS_Perf_WaitFirstMvmt_Enbl));

    /* Logic: '<S69>/Logical Operator2' incorporates:
     *  Constant: '<S104>/Calib'
     */
    rtb_TmpSignalConversionAtVeFSCR_b_AGS_Ca =
        (((KeTHDR_b_AGS_Perf_CurrPosFA_FaultSymp_Enbl) &&
          (VeTHDR_b_AGS_Perf_Enbl)) && rtb_AND_jj);

    /* Outputs for Atomic SubSystem: '<S69>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S106>/EdgeRising' */
    /* Logic: '<S107>/AND' incorporates:
     *  Logic: '<S107>/OR1'
     *  UnitDelay: '<S107>/Unit Delay'
     */
    rtb_AND_jj = (rtb_TmpSignalConversionAtVeFSCR_b_AGS_Ca &&
                  (!THDR_ac_DW.UnitDelay_DSTATE_ip));

    /* Update for UnitDelay: '<S107>/Unit Delay' */
    THDR_ac_DW.UnitDelay_DSTATE_ip = rtb_TmpSignalConversionAtVeFSCR_b_AGS_Ca;

    /* End of Outputs for SubSystem: '<S106>/EdgeRising' */

    /* Switch: '<S106>/Switch1' incorporates:
     *  Constant: '<S105>/Calib'
     *  Constant: '<S106>/Constant Value1'
     *  Constant: '<S12>/Calib'
     *  Logic: '<S106>/OR'
     *  Logic: '<S106>/OR1'
     *  MinMax: '<S106>/Minimum'
     *  Sum: '<S106>/Summation'
     *  UnitDelay: '<S106>/Unit Delay'
     */
    if ((!rtb_TmpSignalConversionAtVeFSCR_b_AGS_Ca) || rtb_AND_jj)
    {
        THDR_ac_DW.UnitDelay_DSTATE_g = 0.0F;
    }
    else
    {
        THDR_ac_DW.UnitDelay_DSTATE_g = fminf
            (KeTHDR_t_AGS_Perf_CurrPosFA_DbncTime, HeTHDR_t_MedTEH +
             THDR_ac_DW.UnitDelay_DSTATE_g);
    }

    /* End of Switch: '<S106>/Switch1' */

    /* Logic: '<S69>/Logical Operator' incorporates:
     *  Constant: '<S105>/Calib'
     *  Inport: '<Root>/VeTAIR_e_AGS_CurrPos'
     *  Logic: '<S106>/AND'
     *  RelationalOperator: '<S106>/Greater  Than'
     *  RelationalOperator: '<S68>/Relational Operator1'
     *  RelationalOperator: '<S69>/Relational Operator'
     *  SignalConversion generated from: '<S1>/VeFSCR_e_AGS_PosReq'
     *  UnitDelay: '<S106>/Unit Delay'
     */
    VeTHDR_b_AGS_Perf_FaultSymp = ((rtb_TmpSignalConversionAtVeFSCR_e_AGS_Po !=
        tmpRead_d) || (rtb_TmpSignalConversionAtVeFSCR_b_AGS_Ca &&
                       (THDR_ac_DW.UnitDelay_DSTATE_g >=
                        KeTHDR_t_AGS_Perf_CurrPosFA_DbncTime)));

    /* End of Outputs for SubSystem: '<S69>/Turn On Delay Time' */

    /* Outputs for Atomic SubSystem: '<S65>/AGS_Perf_Check' */
    /* RelationalOperator: '<S74>/Relational Operator3' incorporates:
     *  Constant: '<S74>/Constant3'
     *  DataStoreRead: '<S75>/StatusByte_AGS_A_Perf'
     *  S-Function (sfix_bitop): '<S74>/Bitwise Operator2'
     */
    rtb_AND_jj = ((((uint32)THDR_ac_DW.StatusByte_AGS_A_Perf) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S74>/EdgeFalling1' */
    /* Logic: '<S74>/Logical Operator' incorporates:
     *  Logic: '<S77>/OR1'
     */
    rtb_TmpSignalConversionAtVeFSCR_b_AGS2_C = !rtb_AND_jj;

    /* End of Outputs for SubSystem: '<S74>/EdgeFalling1' */

    /* Logic: '<S74>/Logical1' incorporates:
     *  Constant: '<S72>/Calib'
     *  Constant: '<S73>/Calib'
     *  Constant: '<S74>/Constant1'
     *  DataStoreRead: '<S75>/StatusByte_AGS_A_Perf'
     *  Logic: '<S67>/AND1'
     *  Logic: '<S74>/Logical Operator'
     *  Logic: '<S74>/Logical10'
     *  Logic: '<S74>/Logical12'
     *  RelationalOperator: '<S74>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S74>/Bitwise Operator3'
     */
    rtb_TmpSignalConversionAtVeFSCR_b_AGS_Ca = (((VeTHDR_b_AGS_Perf_Enbl) &&
        (KeTHDR_b_AGS_Perf_XYEnbl)) && ((!KeTHDR_b_AGS_A_Perf_LtchEnbl) ||
        (((((uint32)THDR_ac_DW.StatusByte_AGS_A_Perf) & 1U) == 0U) ||
         rtb_TmpSignalConversionAtVeFSCR_b_AGS2_C)));

    /* Outputs for Atomic SubSystem: '<S74>/EdgeFalling1' */
    /* Logic: '<S77>/AND' incorporates:
     *  UnitDelay: '<S77>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeFSCR_b_AGS2_C =
        (rtb_TmpSignalConversionAtVeFSCR_b_AGS2_C &&
         (THDR_ac_DW.UnitDelay_DSTATE_cj));

    /* Update for UnitDelay: '<S77>/Unit Delay' */
    THDR_ac_DW.UnitDelay_DSTATE_cj = rtb_AND_jj;

    /* End of Outputs for SubSystem: '<S74>/EdgeFalling1' */

    /* Logic: '<S74>/Logical5' */
    rtb_AND_jj = ((VeTHDR_b_ResetCnts) ||
                  rtb_TmpSignalConversionAtVeFSCR_b_AGS2_C);

    /* UnitDelay: '<S76>/Unit Delay1' incorporates:
     *  UnitDelay: '<S68>/Unit Delay'
     */
    THDR_ac_DW.UnitDelay_DSTATE_ie = THDR_ac_DW.UnitDelay1_DSTATE_ou;

    /* Outputs for Atomic SubSystem: '<S76>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S76>/Counter Reset  Enabled ' */
    /* Switch: '<S83>/Switch1' incorporates:
     *  Logic: '<S76>/Fail Counter Reset'
     *  Logic: '<S76>/NOT6'
     *  Switch: '<S83>/Switch2'
     *  Switch: '<S84>/Switch1'
     *  UnitDelay: '<S68>/Unit Delay'
     *  UnitDelay: '<S76>/Unit Delay'
     */
    if ((rtb_AND_jj || (THDR_ac_DW.UnitDelay_DSTATE_o2)) ||
            (THDR_ac_DW.UnitDelay_DSTATE_ie))
    {
        /* Switch: '<S83>/Switch1' incorporates:
         *  Constant: '<S83>/Constant Value2'
         */
        VeTHDR_Cnt_AGS_Perf_FailCnt = 0U;

        /* Switch: '<S84>/Switch1' incorporates:
         *  Constant: '<S84>/Constant Value2'
         */
        VeTHDR_Cnt_AGS_Perf_SmpCnt = 0U;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeFSCR_b_AGS_Ca &&
                (VeTHDR_b_AGS_Perf_FaultSymp))
        {
            /* Switch: '<S83>/Switch1' incorporates:
             *  Constant: '<S83>/Constant Value1'
             *  Sum: '<S83>/Subtraction'
             *  Switch: '<S83>/Switch2'
             *  UnitDelay: '<S83>/Unit Delay'
             */
            VeTHDR_Cnt_AGS_Perf_FailCnt = (uint16)(((uint32)
                VeTHDR_Cnt_AGS_Perf_FailCnt) + 1U);
        }

        /* Switch: '<S84>/Switch2' */
        if (rtb_TmpSignalConversionAtVeFSCR_b_AGS_Ca)
        {
            /* Switch: '<S84>/Switch1' incorporates:
             *  Constant: '<S84>/Constant Value1'
             *  Sum: '<S84>/Subtraction'
             *  Switch: '<S84>/Switch2'
             *  UnitDelay: '<S84>/Unit Delay'
             */
            VeTHDR_Cnt_AGS_Perf_SmpCnt = (uint16)(((uint32)
                VeTHDR_Cnt_AGS_Perf_SmpCnt) + 1U);
        }

        /* End of Switch: '<S84>/Switch2' */
    }

    /* End of Switch: '<S83>/Switch1' */
    /* End of Outputs for SubSystem: '<S76>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S76>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S76>/Greater Than or Equal ' incorporates:
     *  Constant: '<S70>/Calib'
     */
    THDR_ac_DW.UnitDelay1_DSTATE_ou = (((float32)VeTHDR_Cnt_AGS_Perf_FailCnt) >=
        KeTHDR_Cnt_AGS_Perf_FailCnt);

    /* Logic: '<S76>/NOT5' incorporates:
     *  Constant: '<S71>/Calib'
     *  Logic: '<S76>/NOT3'
     *  RelationalOperator: '<S76>/Less Than  or Equal'
     */
    THDR_ac_DW.UnitDelay_DSTATE_o2 = ((((float32)VeTHDR_Cnt_AGS_Perf_SmpCnt) >=
        KeTHDR_Cnt_AGS_Perf_SmpCnt) && (!THDR_ac_DW.UnitDelay1_DSTATE_ou));

    /* Switch: '<S89>/Switch1' incorporates:
     *  Constant: '<S82>/Constant Value'
     *  DataStoreWrite: '<S67>/Data Store Write3'
     *  Switch: '<S88>/Switch1'
     */
    if (VeTHDR_b_ResetFOMs)
    {
        THDR_ac_DW.NeTHDR_Cnt_AGS_Perf_MFOP = 0U;
    }
    else
    {
        if (THDR_ac_DW.UnitDelay_DSTATE_o2)
        {
            /* MinMax: '<S82>/Minimum2' incorporates:
             *  DataStoreRead: '<S67>/Data Store Read1'
             *  Switch: '<S88>/Switch1'
             */
            if (VeTHDR_Cnt_AGS_Perf_FailCnt >
                    THDR_ac_DW.NeTHDR_Cnt_AGS_Perf_MFOP)
            {
                /* DataStoreWrite: '<S67>/Data Store Write3' incorporates:
                 *  Switch: '<S88>/Switch1'
                 */
                THDR_ac_DW.NeTHDR_Cnt_AGS_Perf_MFOP =
                    VeTHDR_Cnt_AGS_Perf_FailCnt;
            }

            /* End of MinMax: '<S82>/Minimum2' */
        }
    }

    /* End of Switch: '<S89>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S74>/Fail' */
    THDR_ac_Fail(THDR_ac_DW.UnitDelay1_DSTATE_ou,
                 &THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultS_np);

    /* End of Outputs for SubSystem: '<S74>/Fail' */

    /* Outputs for Enabled SubSystem: '<S74>/Init' */
    THDR_ac_Init_l(rtb_AND_jj,
                   &THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultS_np);

    /* End of Outputs for SubSystem: '<S74>/Init' */

    /* Outputs for Enabled SubSystem: '<S74>/Pass' */
    THDR_ac_Pass(THDR_ac_DW.UnitDelay_DSTATE_o2,
                 &THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultS_np);

    /* End of Outputs for SubSystem: '<S74>/Pass' */

    /* VariantMerge generated from: '<S9>/b_AGS_Perf_DTC' incorporates:
     *  Constant: '<S78>/Constant'
     *  RelationalOperator: '<S74>/Relational Operator'
     *  VariantMerge generated from: '<S9>/VeTHDR_e_FaultSts_AGS_A_Perf'
     */
    THDR_ac_B.VariantMergeForOutportb_AGS_Perf_DTC = (((uint32)
        THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultS_np) == CeDFIB_e_Fail);

    /* End of Outputs for SubSystem: '<S65>/AGS_Perf_Check' */

    /* Update for UnitDelay: '<S68>/Unit Delay' */
    THDR_ac_DW.UnitDelay_DSTATE_ie =
        THDR_ac_B.VariantMergeForOutportb_AGS_Perf_DTC;

    /* Update for UnitDelay: '<S68>/Unit Delay2' incorporates:
     *  SignalConversion generated from: '<S1>/VeFSCR_e_AGS_PosReq'
     */
    THDR_ac_DW.UnitDelay2_DSTATE_l = rtb_TmpSignalConversionAtVeFSCR_e_AGS_Po;

    /* Update for Memory: '<S99>/Memory' */
    THDR_ac_DW.Memory_PreviousInput = rtb_Logic[0];

    /* End of Outputs for SubSystem: '<S9>/If_AGS_Perf_Diag' */
#else

    /* Outputs for Atomic SubSystem: '<S9>/Else_AGS_Perf_Diag' */
    /* VariantMerge generated from: '<S9>/VeTHDR_e_FaultSts_AGS_A_Perf' incorporates:
     *  Constant: '<S66>/Constant'
     */
    THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultS_np = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S9>/b_AGS_Perf_DTC' incorporates:
     *  Constant: '<S64>/FALSE Constant'
     */
    THDR_ac_B.VariantMergeForOutportb_AGS_Perf_DTC = false;

    /* End of Outputs for SubSystem: '<S9>/Else_AGS_Perf_Diag' */
#endif

    /* End of Outputs for SubSystem: '<S4>/AGS_Perf_Diag' */

    /* S-Function (sfix_bitop): '<S11>/Bitwise Operator1' incorporates:
     *  Logic: '<S11>/Logical Operator'
     *  RelationalOperator: '<S11>/Relational Operator1'
     *  RelationalOperator: '<S11>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S11>/Bitwise Operator2'
     */
#if (!Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_13) || (!Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_9) || Rte_SysCon_Variant_THDR_19

    /* Logic: '<S11>/Logical Operator' incorporates:
     *  Constant: '<S11>/Constant1'
     *  Constant: '<S11>/Constant2'
     *  DataStoreRead: '<S11>/StatusByte_ThrmlRlyCtrlCkt'
     */
    rtb_LogicalOperator = (((((sint32)THDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 1)
                            > 0) && ((((uint32)
        THDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 64U) == 0U));

#endif

    /* End of S-Function (sfix_bitop): '<S11>/Bitwise Operator1' */

    /* S-Function (sfix_bitop): '<S147>/Bitwise Operator2' incorporates:
     *  Logic: '<S112>/Logical Operator1'
     *  Logic: '<S112>/Logical Operator6'
     *  Logic: '<S112>/Logical Operator7'
     *  Logic: '<S112>/Logical Operator8'
     *  Logic: '<S117>/Logical Operator'
     *  Logic: '<S118>/Logical Operator'
     *  Logic: '<S119>/Logical Operator'
     *  Logic: '<S120>/Logical Operator'
     *  Logic: '<S121>/Logical Operator'
     *  Logic: '<S122>/Logical Operator'
     *  Logic: '<S123>/Logical Operator'
     *  Logic: '<S140>/Logical Operator10'
     *  Logic: '<S140>/Logical Operator11'
     *  Logic: '<S140>/Logical Operator14'
     *  Logic: '<S140>/Logical Operator5'
     *  Logic: '<S145>/Logical Operator'
     *  Logic: '<S146>/Logical Operator'
     *  Logic: '<S147>/Logical Operator'
     *  RelationalOperator: '<S117>/Relational Operator1'
     *  RelationalOperator: '<S117>/Relational Operator2'
     *  RelationalOperator: '<S118>/Relational Operator1'
     *  RelationalOperator: '<S118>/Relational Operator2'
     *  RelationalOperator: '<S119>/Relational Operator1'
     *  RelationalOperator: '<S119>/Relational Operator2'
     *  RelationalOperator: '<S120>/Relational Operator1'
     *  RelationalOperator: '<S120>/Relational Operator2'
     *  RelationalOperator: '<S121>/Relational Operator1'
     *  RelationalOperator: '<S121>/Relational Operator2'
     *  RelationalOperator: '<S122>/Relational Operator1'
     *  RelationalOperator: '<S122>/Relational Operator2'
     *  RelationalOperator: '<S123>/Relational Operator1'
     *  RelationalOperator: '<S123>/Relational Operator2'
     *  RelationalOperator: '<S145>/Relational Operator1'
     *  RelationalOperator: '<S145>/Relational Operator2'
     *  RelationalOperator: '<S146>/Relational Operator1'
     *  RelationalOperator: '<S146>/Relational Operator2'
     *  RelationalOperator: '<S147>/Relational Operator1'
     *  RelationalOperator: '<S147>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S117>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S117>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S118>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S118>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S119>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S119>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S120>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S120>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S121>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S121>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S122>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S122>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S123>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S123>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S145>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S145>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S146>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S146>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S147>/Bitwise Operator1'
     *  Sum: '<S112>/Add'
     *  Switch: '<S141>/Switch1'
     *  Switch: '<S142>/Switch1'
     *  Switch: '<S143>/Switch1'
     *  Switch: '<S144>/Switch1'
     */
#if Rte_SysCon_Variant_THDR_1

    /* Switch: '<S291>/Switch1' incorporates:
     *  Constant: '<S118>/Constant1'
     *  Constant: '<S118>/Constant2'
     *  Constant: '<S119>/Constant1'
     *  Constant: '<S119>/Constant2'
     *  Constant: '<S120>/Constant1'
     *  Constant: '<S120>/Constant2'
     *  Constant: '<S125>/Calib'
     *  Constant: '<S126>/Calib'
     *  Constant: '<S131>/Calib'
     *  Constant: '<S145>/Constant1'
     *  Constant: '<S145>/Constant2'
     *  Constant: '<S146>/Constant1'
     *  Constant: '<S146>/Constant2'
     *  Constant: '<S147>/Constant1'
     *  Constant: '<S147>/Constant2'
     *  Constant: '<S148>/Calib'
     *  Constant: '<S149>/Calib'
     *  Constant: '<S150>/Calib'
     *  DataStoreRead: '<S118>/StatusByte_CoolPmpATempSnsrPerf'
     *  DataStoreRead: '<S119>/StatusByte_ECH_TempIn'
     *  DataStoreRead: '<S120>/StatusByte_ECH_TempOut'
     *  DataStoreRead: '<S145>/StatusByte_CT2_SnsrCktHi'
     *  DataStoreRead: '<S146>/StatusByte_CT2_SnsrCktLo'
     *  DataStoreRead: '<S147>/StatusByte_CT2_SnsrPerf'
     */
    rtb_Switch1_hy = (sint16)(((((sint32)(((((((((sint32)
        THDR_ac_DW.StatusByte_CT2_SnsrPerf) & 1) > 0) && ((((uint32)
        THDR_ac_DW.StatusByte_CT2_SnsrPerf) & 64U) == 0U)) &&
        (KeTHDR_b_IUMPR_HCCTISPerf_ECHTISPerf_Enbl)) || ((((((sint32)
        THDR_ac_DW.StatusByte_CT2_SnsrCktLo) & 1) > 0) && ((((uint32)
        THDR_ac_DW.StatusByte_CT2_SnsrCktLo) & 64U) == 0U)) &&
        (KeTHDR_b_IUMPR_HCCTISPerf_ECHTISShrtLo_Enbl))) || ((((((sint32)
        THDR_ac_DW.StatusByte_CT2_SnsrCktHi) & 1) > 0) && ((((uint32)
        THDR_ac_DW.StatusByte_CT2_SnsrCktHi) & 64U) == 0U)) &&
        (KeTHDR_b_IUMPR_HCCTISPerf_ECHTISShrtHi_Enbl))) ? 1 : 0)) + ((sint32)
        (((((((sint32)THDR_ac_DW.StatusByte_ECH_TempOut) & 1) > 0) && ((((uint32)
        THDR_ac_DW.StatusByte_ECH_TempOut) & 64U) == 0U)) &&
          (KeTHDR_b_IUMPR_HCCTISPerf_ECHoutPerf_Enbl)) ? 1 : 0))) + ((sint32)
        (((((((sint32)THDR_ac_DW.StatusByte_ECH_TempIn) & 1) > 0) && ((((uint32)
        THDR_ac_DW.StatusByte_ECH_TempIn) & 64U) == 0U)) &&
          (KeTHDR_b_IUMPR_HCCTISPerf_ECHTinPerf_Enbl)) ? 1 : 0))) + ((sint32)
        (((((((sint32)THDR_ac_DW.StatusByte_CoolPmpATempSnsrPerf) & 1) > 0) &&
           ((((uint32)THDR_ac_DW.StatusByte_CoolPmpATempSnsrPerf) & 64U) == 0U))
          && (KeTHDR_b_IUMPR_HCCTISPerf_HTAPTempPerf_Enbl)) ? 1 : 0)));

    /* Logic: '<S117>/Logical Operator' incorporates:
     *  Constant: '<S117>/Constant1'
     *  Constant: '<S117>/Constant2'
     *  DataStoreRead: '<S117>/StatusByte_CoolPmpACtrlCktPerf'
     */
    rtb_LogicalOperator_nyo = (((((sint32)
        THDR_ac_DW.StatusByte_CoolPmpACtrlCktPerf) & 1) > 0) && ((((uint32)
        THDR_ac_DW.StatusByte_CoolPmpACtrlCktPerf) & 64U) == 0U));

    /* Logic: '<S122>/Logical Operator' incorporates:
     *  Constant: '<S122>/Constant1'
     *  Constant: '<S122>/Constant2'
     *  DataStoreRead: '<S122>/StatusByte_LIN2_BusOff'
     */
    rtb_LogicalOperator_hrx = (((((sint32)THDR_ac_DW.StatusByte_LIN2_BusOff) & 1)
        > 0) && ((((uint32)THDR_ac_DW.StatusByte_LIN2_BusOff) & 64U) == 0U));

    /* Logic: '<S123>/Logical Operator' incorporates:
     *  Constant: '<S123>/Constant1'
     *  Constant: '<S123>/Constant2'
     *  DataStoreRead: '<S123>/StatusByte_ThrmlRlyCtrlCkt'
     */
    rtb_LogicalOperator_gn1 = (((((sint32)THDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt)
        & 1) > 0) && ((((uint32)THDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 64U) ==
                      0U));

    /* Logic: '<S112>/Logical Operator1' incorporates:
     *  Constant: '<S121>/Constant1'
     *  Constant: '<S121>/Constant2'
     *  Constant: '<S132>/Calib'
     *  DataStoreRead: '<S121>/StatusByte_LIN1_BusOff'
     */
    rtb_LogicalOperator1 = ((((((sint32)THDR_ac_DW.StatusByte_LIN1_BusOff) & 1) >
        0) && ((((uint32)THDR_ac_DW.StatusByte_LIN1_BusOff) & 64U) == 0U)) &&
                            (KeTHDR_b_IUMPR_HCCTISPerf_LIN1Off_Enbl));

#endif

    /* End of S-Function (sfix_bitop): '<S147>/Bitwise Operator2' */

    /* SignalConversion generated from: '<S18>/Variant Source' incorporates:
     *  Logic: '<S441>/Logical Operator'
     *  RelationalOperator: '<S441>/Relational Operator1'
     *  RelationalOperator: '<S441>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S441>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S441>/Bitwise Operator2'
     */
#if Rte_SysCon_Variant_THDR_1 && Rte_SysCon_Variant_THDR_3

    /* VariantMerge generated from: '<S18>/Variant Source' incorporates:
     *  Inport: '<Root>/VeBSWR_b_CT3_SnsrCktLo'
     */
    (void)Rte_Read_VeBSWR_b_CT3_SnsrCktLo_Value
        (&rtb_VariantMerge_For_Variant_Source_Va_d);

#elif !Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_1

    /* VariantMerge generated from: '<S18>/Variant Source' incorporates:
     *  Constant: '<S441>/Constant1'
     *  Constant: '<S441>/Constant2'
     *  DataStoreRead: '<S441>/StatusByte_CT3_SnsrCktLo'
     *  Logic: '<S441>/Logical Operator'
     *  RelationalOperator: '<S441>/Relational Operator1'
     *  RelationalOperator: '<S441>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S441>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S441>/Bitwise Operator2'
     */
    rtb_VariantMerge_For_Variant_Source_Va_d = (((((sint32)
        THDR_ac_DW.StatusByte_CT3_SnsrCktLo) & 1) > 0) && ((((uint32)
        THDR_ac_DW.StatusByte_CT3_SnsrCktLo) & 64U) == 0U));

#endif

    /* End of SignalConversion generated from: '<S18>/Variant Source' */

    /* Logic: '<S112>/Logical Operator12' */
#if Rte_SysCon_Variant_THDR_1

    /* Logic: '<S112>/Logical Operator12' incorporates:
     *  Constant: '<S129>/Calib'
     */
    rtb_LogicalOperator12_op = (rtb_VariantMerge_For_Variant_Source_Va_d &&
        (KeTHDR_b_IUMPR_HCCTISPerf_HCCTISShrtLo_Enbl));

#endif

    /* End of Logic: '<S112>/Logical Operator12' */

    /* SignalConversion generated from: '<S18>/Variant Source1' incorporates:
     *  Logic: '<S440>/Logical Operator'
     *  RelationalOperator: '<S440>/Relational Operator1'
     *  RelationalOperator: '<S440>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S440>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S440>/Bitwise Operator2'
     */
#if Rte_SysCon_Variant_THDR_1 && Rte_SysCon_Variant_THDR_3

    /* VariantMerge generated from: '<S18>/Variant Source1' incorporates:
     *  Inport: '<Root>/VeBSWR_b_CT3_SnsrCktHi'
     */
    (void)Rte_Read_VeBSWR_b_CT3_SnsrCktHi_Value
        (&rtb_VariantMerge_For_Variant_Source_Va_e);

#elif !Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_1

    /* VariantMerge generated from: '<S18>/Variant Source1' incorporates:
     *  Constant: '<S440>/Constant1'
     *  Constant: '<S440>/Constant2'
     *  DataStoreRead: '<S440>/StatusByte_CT3_SnsrCktHi'
     *  Logic: '<S440>/Logical Operator'
     *  RelationalOperator: '<S440>/Relational Operator1'
     *  RelationalOperator: '<S440>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S440>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S440>/Bitwise Operator2'
     */
    rtb_VariantMerge_For_Variant_Source_Va_e = (((((sint32)
        THDR_ac_DW.StatusByte_CT3_SnsrCktHi) & 1) > 0) && ((((uint32)
        THDR_ac_DW.StatusByte_CT3_SnsrCktHi) & 64U) == 0U));

#endif

    /* End of SignalConversion generated from: '<S18>/Variant Source1' */

    /* Logic: '<S112>/Logical Operator13' incorporates:
     *  Constant: '<S124>/Calib'
     *  Constant: '<S127>/Calib'
     *  Constant: '<S128>/Calib'
     *  Constant: '<S130>/Calib'
     *  Constant: '<S133>/Calib'
     *  Constant: '<S134>/Calib'
     *  Constant: '<S135>/Calib'
     *  Constant: '<S151>/Constant1'
     *  Constant: '<S151>/Constant2'
     *  Constant: '<S152>/Constant1'
     *  Constant: '<S152>/Constant2'
     *  Constant: '<S153>/Constant1'
     *  Constant: '<S153>/Constant2'
     *  Constant: '<S154>/Constant1'
     *  Constant: '<S154>/Constant2'
     *  Constant: '<S155>/Constant1'
     *  Constant: '<S155>/Constant2'
     *  Constant: '<S156>/Constant1'
     *  Constant: '<S156>/Constant2'
     *  Constant: '<S157>/Constant1'
     *  Constant: '<S157>/Constant2'
     *  Constant: '<S158>/Calib'
     *  Constant: '<S159>/Calib'
     *  Constant: '<S160>/Calib'
     *  Constant: '<S161>/Calib'
     *  Constant: '<S162>/Calib'
     *  Constant: '<S163>/Calib'
     *  Constant: '<S164>/Calib'
     *  Constant: '<S165>/Calib'
     *  Constant: '<S166>/Calib'
     *  Constant: '<S177>/Constant1'
     *  Constant: '<S177>/Constant2'
     *  Constant: '<S178>/Constant1'
     *  Constant: '<S178>/Constant2'
     *  Constant: '<S179>/Constant1'
     *  Constant: '<S179>/Constant2'
     *  Constant: '<S180>/Calib'
     *  Constant: '<S181>/Calib'
     *  Constant: '<S182>/Calib'
     *  Constant: '<S183>/Constant1'
     *  Constant: '<S183>/Constant2'
     *  Constant: '<S184>/Calib'
     *  Constant: '<S185>/Calib'
     *  Constant: '<S186>/Calib'
     *  Constant: '<S187>/Constant1'
     *  Constant: '<S187>/Constant2'
     *  Constant: '<S188>/Constant1'
     *  Constant: '<S188>/Constant2'
     *  Constant: '<S189>/Constant1'
     *  Constant: '<S189>/Constant2'
     *  Constant: '<S190>/Constant1'
     *  Constant: '<S190>/Constant2'
     *  Constant: '<S191>/Constant1'
     *  Constant: '<S191>/Constant2'
     *  Constant: '<S192>/Constant1'
     *  Constant: '<S192>/Constant2'
     *  Constant: '<S193>/Constant1'
     *  Constant: '<S193>/Constant2'
     *  Constant: '<S194>/Calib'
     *  Constant: '<S195>/Calib'
     *  Constant: '<S196>/Calib'
     *  Constant: '<S197>/Calib'
     *  Constant: '<S198>/Calib'
     *  Constant: '<S199>/Calib'
     *  Constant: '<S200>/Calib'
     *  Constant: '<S201>/Calib'
     *  Constant: '<S202>/Calib'
     *  Constant: '<S213>/Constant1'
     *  Constant: '<S213>/Constant2'
     *  Constant: '<S214>/Constant1'
     *  Constant: '<S214>/Constant2'
     *  Constant: '<S215>/Constant1'
     *  Constant: '<S215>/Constant2'
     *  Constant: '<S216>/Calib'
     *  Constant: '<S217>/Calib'
     *  Constant: '<S218>/Calib'
     *  Constant: '<S219>/Constant1'
     *  Constant: '<S219>/Constant2'
     *  Constant: '<S220>/Calib'
     *  Constant: '<S221>/Calib'
     *  Constant: '<S222>/Calib'
     *  Constant: '<S223>/Constant1'
     *  Constant: '<S223>/Constant2'
     *  Constant: '<S224>/Constant1'
     *  Constant: '<S224>/Constant2'
     *  Constant: '<S225>/Constant1'
     *  Constant: '<S225>/Constant2'
     *  Constant: '<S226>/Constant1'
     *  Constant: '<S226>/Constant2'
     *  Constant: '<S227>/Constant1'
     *  Constant: '<S227>/Constant2'
     *  Constant: '<S228>/Constant1'
     *  Constant: '<S228>/Constant2'
     *  Constant: '<S229>/Constant1'
     *  Constant: '<S229>/Constant2'
     *  Constant: '<S230>/Calib'
     *  Constant: '<S231>/Calib'
     *  Constant: '<S232>/Calib'
     *  Constant: '<S233>/Calib'
     *  Constant: '<S234>/Calib'
     *  Constant: '<S235>/Calib'
     *  Constant: '<S236>/Calib'
     *  Constant: '<S237>/Calib'
     *  Constant: '<S238>/Calib'
     *  Constant: '<S239>/Calib'
     *  Constant: '<S250>/Constant1'
     *  Constant: '<S250>/Constant2'
     *  Constant: '<S251>/Constant1'
     *  Constant: '<S251>/Constant2'
     *  Constant: '<S252>/Constant1'
     *  Constant: '<S252>/Constant2'
     *  Constant: '<S253>/Calib'
     *  Constant: '<S254>/Calib'
     *  Constant: '<S255>/Calib'
     *  Constant: '<S256>/Constant1'
     *  Constant: '<S256>/Constant2'
     *  Constant: '<S257>/Calib'
     *  Constant: '<S258>/Calib'
     *  Constant: '<S259>/Calib'
     *  Constant: '<S260>/Constant1'
     *  Constant: '<S260>/Constant2'
     *  Constant: '<S261>/Constant1'
     *  Constant: '<S261>/Constant2'
     *  Constant: '<S262>/Constant1'
     *  Constant: '<S262>/Constant2'
     *  Constant: '<S263>/Constant1'
     *  Constant: '<S263>/Constant2'
     *  Constant: '<S264>/Constant1'
     *  Constant: '<S264>/Constant2'
     *  Constant: '<S265>/Constant1'
     *  Constant: '<S265>/Constant2'
     *  Constant: '<S266>/Constant1'
     *  Constant: '<S266>/Constant2'
     *  Constant: '<S267>/Constant1'
     *  Constant: '<S267>/Constant2'
     *  Constant: '<S268>/Constant1'
     *  Constant: '<S268>/Constant2'
     *  Constant: '<S269>/Constant1'
     *  Constant: '<S269>/Constant2'
     *  Constant: '<S270>/Calib'
     *  Constant: '<S271>/Calib'
     *  Constant: '<S272>/Calib'
     *  Constant: '<S273>/Calib'
     *  Constant: '<S274>/Calib'
     *  Constant: '<S275>/Calib'
     *  Constant: '<S276>/Calib'
     *  Constant: '<S277>/Calib'
     *  Constant: '<S278>/Calib'
     *  Constant: '<S279>/Calib'
     *  Constant: '<S280>/Calib'
     *  Constant: '<S281>/Calib'
     *  Constant: '<S282>/Calib'
     *  Constant: '<S292>/Constant1'
     *  Constant: '<S292>/Constant2'
     *  Constant: '<S293>/Calib'
     *  Constant: '<S294>/Calib'
     *  Constant: '<S295>/Calib'
     *  DataStoreRead: '<S151>/StatusByte_CoolPmpACtrlCktPerf'
     *  DataStoreRead: '<S152>/StatusByte_CoolPmpATempSnsrPerf'
     *  DataStoreRead: '<S153>/StatusByte_ECH_TempIn'
     *  DataStoreRead: '<S154>/StatusByte_LIN1_BusOff'
     *  DataStoreRead: '<S155>/StatusByte_LIN2_BusOff'
     *  DataStoreRead: '<S156>/StatusByte_LostCommCoolHtrA'
     *  DataStoreRead: '<S157>/StatusByte_ThrmlRlyCtrlCkt'
     *  DataStoreRead: '<S177>/StatusByte_CT2_SnsrCktHi'
     *  DataStoreRead: '<S178>/StatusByte_CT2_SnsrCktLo'
     *  DataStoreRead: '<S179>/StatusByte_CT2_SnsrPerf'
     *  DataStoreRead: '<S183>/StatusByte_CT3_SnsrPerf'
     *  DataStoreRead: '<S189>/StatusByte_ECH_TempOut'
     *  DataStoreRead: '<S228>/StatusByte_LostCommCoolPmpA'
     *  Logic: '<S112>/Logical Operator15'
     *  Logic: '<S112>/Logical Operator2'
     *  Logic: '<S112>/Logical Operator3'
     *  Logic: '<S112>/Logical Operator4'
     *  Logic: '<S112>/Logical Operator5'
     *  Logic: '<S113>/Logical Operator1'
     *  Logic: '<S113>/Logical Operator15'
     *  Logic: '<S113>/Logical Operator2'
     *  Logic: '<S113>/Logical Operator3'
     *  Logic: '<S113>/Logical Operator4'
     *  Logic: '<S113>/Logical Operator6'
     *  Logic: '<S113>/Logical Operator8'
     *  Logic: '<S113>/Logical Operator9'
     *  Logic: '<S114>/Logical Operator1'
     *  Logic: '<S114>/Logical Operator15'
     *  Logic: '<S114>/Logical Operator2'
     *  Logic: '<S114>/Logical Operator3'
     *  Logic: '<S114>/Logical Operator4'
     *  Logic: '<S114>/Logical Operator6'
     *  Logic: '<S114>/Logical Operator8'
     *  Logic: '<S114>/Logical Operator9'
     *  Logic: '<S115>/Logical Operator1'
     *  Logic: '<S115>/Logical Operator15'
     *  Logic: '<S115>/Logical Operator2'
     *  Logic: '<S115>/Logical Operator3'
     *  Logic: '<S115>/Logical Operator4'
     *  Logic: '<S115>/Logical Operator5'
     *  Logic: '<S115>/Logical Operator6'
     *  Logic: '<S115>/Logical Operator7'
     *  Logic: '<S115>/Logical Operator9'
     *  Logic: '<S116>/Logical Operator1'
     *  Logic: '<S116>/Logical Operator10'
     *  Logic: '<S116>/Logical Operator11'
     *  Logic: '<S116>/Logical Operator15'
     *  Logic: '<S116>/Logical Operator2'
     *  Logic: '<S116>/Logical Operator3'
     *  Logic: '<S116>/Logical Operator4'
     *  Logic: '<S116>/Logical Operator5'
     *  Logic: '<S116>/Logical Operator6'
     *  Logic: '<S116>/Logical Operator7'
     *  Logic: '<S116>/Logical Operator8'
     *  Logic: '<S116>/Logical Operator9'
     *  Logic: '<S151>/Logical Operator'
     *  Logic: '<S152>/Logical Operator'
     *  Logic: '<S153>/Logical Operator'
     *  Logic: '<S154>/Logical Operator'
     *  Logic: '<S155>/Logical Operator'
     *  Logic: '<S156>/Logical Operator'
     *  Logic: '<S157>/Logical Operator'
     *  Logic: '<S171>/Logical Operator10'
     *  Logic: '<S171>/Logical Operator11'
     *  Logic: '<S171>/Logical Operator16'
     *  Logic: '<S171>/Logical Operator5'
     *  Logic: '<S172>/Logical Operator12'
     *  Logic: '<S172>/Logical Operator13'
     *  Logic: '<S172>/Logical Operator16'
     *  Logic: '<S172>/Logical Operator7'
     *  Logic: '<S177>/Logical Operator'
     *  Logic: '<S178>/Logical Operator'
     *  Logic: '<S179>/Logical Operator'
     *  Logic: '<S183>/Logical Operator'
     *  Logic: '<S187>/Logical Operator'
     *  Logic: '<S188>/Logical Operator'
     *  Logic: '<S189>/Logical Operator'
     *  Logic: '<S190>/Logical Operator'
     *  Logic: '<S191>/Logical Operator'
     *  Logic: '<S192>/Logical Operator'
     *  Logic: '<S193>/Logical Operator'
     *  Logic: '<S207>/Logical Operator10'
     *  Logic: '<S207>/Logical Operator11'
     *  Logic: '<S207>/Logical Operator14'
     *  Logic: '<S207>/Logical Operator5'
     *  Logic: '<S208>/Logical Operator12'
     *  Logic: '<S208>/Logical Operator13'
     *  Logic: '<S208>/Logical Operator14'
     *  Logic: '<S208>/Logical Operator7'
     *  Logic: '<S213>/Logical Operator'
     *  Logic: '<S214>/Logical Operator'
     *  Logic: '<S215>/Logical Operator'
     *  Logic: '<S219>/Logical Operator'
     *  Logic: '<S223>/Logical Operator'
     *  Logic: '<S224>/Logical Operator'
     *  Logic: '<S225>/Logical Operator'
     *  Logic: '<S226>/Logical Operator'
     *  Logic: '<S227>/Logical Operator'
     *  Logic: '<S228>/Logical Operator'
     *  Logic: '<S229>/Logical Operator'
     *  Logic: '<S244>/Logical Operator10'
     *  Logic: '<S244>/Logical Operator11'
     *  Logic: '<S244>/Logical Operator14'
     *  Logic: '<S244>/Logical Operator5'
     *  Logic: '<S245>/Logical Operator12'
     *  Logic: '<S245>/Logical Operator13'
     *  Logic: '<S245>/Logical Operator14'
     *  Logic: '<S245>/Logical Operator8'
     *  Logic: '<S250>/Logical Operator'
     *  Logic: '<S251>/Logical Operator'
     *  Logic: '<S252>/Logical Operator'
     *  Logic: '<S256>/Logical Operator'
     *  Logic: '<S260>/Logical Operator'
     *  Logic: '<S261>/Logical Operator'
     *  Logic: '<S262>/Logical Operator'
     *  Logic: '<S263>/Logical Operator'
     *  Logic: '<S264>/Logical Operator'
     *  Logic: '<S265>/Logical Operator'
     *  Logic: '<S266>/Logical Operator'
     *  Logic: '<S267>/Logical Operator'
     *  Logic: '<S268>/Logical Operator'
     *  Logic: '<S269>/Logical Operator'
     *  Logic: '<S287>/Logical Operator12'
     *  Logic: '<S287>/Logical Operator13'
     *  Logic: '<S287>/Logical Operator14'
     *  Logic: '<S287>/Logical Operator7'
     *  Logic: '<S292>/Logical Operator'
     *  RelationalOperator: '<S112>/Relational Operator'
     *  RelationalOperator: '<S113>/Relational Operator'
     *  RelationalOperator: '<S114>/Relational Operator'
     *  RelationalOperator: '<S115>/Relational Operator'
     *  RelationalOperator: '<S116>/Relational Operator'
     *  RelationalOperator: '<S151>/Relational Operator1'
     *  RelationalOperator: '<S151>/Relational Operator2'
     *  RelationalOperator: '<S152>/Relational Operator1'
     *  RelationalOperator: '<S152>/Relational Operator2'
     *  RelationalOperator: '<S153>/Relational Operator1'
     *  RelationalOperator: '<S153>/Relational Operator2'
     *  RelationalOperator: '<S154>/Relational Operator1'
     *  RelationalOperator: '<S154>/Relational Operator2'
     *  RelationalOperator: '<S155>/Relational Operator1'
     *  RelationalOperator: '<S155>/Relational Operator2'
     *  RelationalOperator: '<S156>/Relational Operator1'
     *  RelationalOperator: '<S156>/Relational Operator2'
     *  RelationalOperator: '<S157>/Relational Operator1'
     *  RelationalOperator: '<S157>/Relational Operator2'
     *  RelationalOperator: '<S177>/Relational Operator1'
     *  RelationalOperator: '<S177>/Relational Operator2'
     *  RelationalOperator: '<S178>/Relational Operator1'
     *  RelationalOperator: '<S178>/Relational Operator2'
     *  RelationalOperator: '<S179>/Relational Operator1'
     *  RelationalOperator: '<S179>/Relational Operator2'
     *  RelationalOperator: '<S183>/Relational Operator1'
     *  RelationalOperator: '<S183>/Relational Operator2'
     *  RelationalOperator: '<S187>/Relational Operator1'
     *  RelationalOperator: '<S187>/Relational Operator2'
     *  RelationalOperator: '<S188>/Relational Operator1'
     *  RelationalOperator: '<S188>/Relational Operator2'
     *  RelationalOperator: '<S189>/Relational Operator1'
     *  RelationalOperator: '<S189>/Relational Operator2'
     *  RelationalOperator: '<S190>/Relational Operator1'
     *  RelationalOperator: '<S190>/Relational Operator2'
     *  RelationalOperator: '<S191>/Relational Operator1'
     *  RelationalOperator: '<S191>/Relational Operator2'
     *  RelationalOperator: '<S192>/Relational Operator1'
     *  RelationalOperator: '<S192>/Relational Operator2'
     *  RelationalOperator: '<S193>/Relational Operator1'
     *  RelationalOperator: '<S193>/Relational Operator2'
     *  RelationalOperator: '<S213>/Relational Operator1'
     *  RelationalOperator: '<S213>/Relational Operator2'
     *  RelationalOperator: '<S214>/Relational Operator1'
     *  RelationalOperator: '<S214>/Relational Operator2'
     *  RelationalOperator: '<S215>/Relational Operator1'
     *  RelationalOperator: '<S215>/Relational Operator2'
     *  RelationalOperator: '<S219>/Relational Operator1'
     *  RelationalOperator: '<S219>/Relational Operator2'
     *  RelationalOperator: '<S223>/Relational Operator1'
     *  RelationalOperator: '<S223>/Relational Operator2'
     *  RelationalOperator: '<S224>/Relational Operator1'
     *  RelationalOperator: '<S224>/Relational Operator2'
     *  RelationalOperator: '<S225>/Relational Operator1'
     *  RelationalOperator: '<S225>/Relational Operator2'
     *  RelationalOperator: '<S226>/Relational Operator1'
     *  RelationalOperator: '<S226>/Relational Operator2'
     *  RelationalOperator: '<S227>/Relational Operator1'
     *  RelationalOperator: '<S227>/Relational Operator2'
     *  RelationalOperator: '<S228>/Relational Operator1'
     *  RelationalOperator: '<S228>/Relational Operator2'
     *  RelationalOperator: '<S229>/Relational Operator1'
     *  RelationalOperator: '<S229>/Relational Operator2'
     *  RelationalOperator: '<S250>/Relational Operator1'
     *  RelationalOperator: '<S250>/Relational Operator2'
     *  RelationalOperator: '<S251>/Relational Operator1'
     *  RelationalOperator: '<S251>/Relational Operator2'
     *  RelationalOperator: '<S252>/Relational Operator1'
     *  RelationalOperator: '<S252>/Relational Operator2'
     *  RelationalOperator: '<S256>/Relational Operator1'
     *  RelationalOperator: '<S256>/Relational Operator2'
     *  RelationalOperator: '<S260>/Relational Operator1'
     *  RelationalOperator: '<S260>/Relational Operator2'
     *  RelationalOperator: '<S261>/Relational Operator1'
     *  RelationalOperator: '<S261>/Relational Operator2'
     *  RelationalOperator: '<S262>/Relational Operator1'
     *  RelationalOperator: '<S262>/Relational Operator2'
     *  RelationalOperator: '<S263>/Relational Operator1'
     *  RelationalOperator: '<S263>/Relational Operator2'
     *  RelationalOperator: '<S264>/Relational Operator1'
     *  RelationalOperator: '<S264>/Relational Operator2'
     *  RelationalOperator: '<S265>/Relational Operator1'
     *  RelationalOperator: '<S265>/Relational Operator2'
     *  RelationalOperator: '<S266>/Relational Operator1'
     *  RelationalOperator: '<S266>/Relational Operator2'
     *  RelationalOperator: '<S267>/Relational Operator1'
     *  RelationalOperator: '<S267>/Relational Operator2'
     *  RelationalOperator: '<S268>/Relational Operator1'
     *  RelationalOperator: '<S268>/Relational Operator2'
     *  RelationalOperator: '<S269>/Relational Operator1'
     *  RelationalOperator: '<S269>/Relational Operator2'
     *  RelationalOperator: '<S292>/Relational Operator1'
     *  RelationalOperator: '<S292>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S151>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S151>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S152>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S152>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S153>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S153>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S154>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S154>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S155>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S155>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S156>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S156>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S157>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S157>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S177>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S177>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S178>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S178>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S179>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S179>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S183>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S183>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S187>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S187>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S188>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S188>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S189>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S189>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S190>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S190>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S191>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S191>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S192>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S192>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S193>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S193>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S213>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S213>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S214>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S214>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S215>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S215>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S219>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S219>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S223>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S223>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S224>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S224>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S225>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S225>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S226>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S226>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S227>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S227>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S228>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S228>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S229>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S229>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S250>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S250>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S251>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S251>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S252>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S252>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S256>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S256>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S260>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S260>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S261>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S261>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S262>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S262>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S263>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S263>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S264>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S264>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S265>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S265>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S266>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S266>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S267>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S267>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S268>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S268>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S269>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S269>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S292>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S292>/Bitwise Operator2'
     *  SignalConversion generated from: '<S13>/Variant Source'
     *  Sum: '<S113>/Add'
     *  Sum: '<S114>/Add'
     *  Sum: '<S115>/Add'
     *  Sum: '<S116>/Add'
     *  Switch: '<S173>/Switch1'
     *  Switch: '<S174>/Switch1'
     *  Switch: '<S175>/Switch1'
     *  Switch: '<S176>/Switch1'
     *  Switch: '<S209>/Switch1'
     *  Switch: '<S210>/Switch1'
     *  Switch: '<S211>/Switch1'
     *  Switch: '<S212>/Switch1'
     *  Switch: '<S246>/Switch1'
     *  Switch: '<S247>/Switch1'
     *  Switch: '<S248>/Switch1'
     *  Switch: '<S249>/Switch1'
     *  Switch: '<S288>/Switch1'
     *  Switch: '<S289>/Switch1'
     *  Switch: '<S290>/Switch1'
     *  Switch: '<S291>/Switch1'
     */
#if Rte_SysCon_Variant_THDR_1

    THDR_ac_B.VariantMerge_For_Variant_Source_Variant_[3] =
        (((((((((rtb_LogicalOperator_gn1 &&
                 (KeTHDR_b_IUMPR_HCCTISPerf_Relay_Enbl)) || rtb_LogicalOperator1)
               || (rtb_LogicalOperator_hrx &&
                   (KeTHDR_b_IUMPR_HCCTISPerf_LIN2Off_Enbl))) ||
              (rtb_LogicalOperator_nyo &&
               (KeTHDR_b_IUMPR_HCCTISPerf_HTAPPerf_Enbl))) || (((sint32)
               rtb_Switch1_hy) >= ((sint32)KeTHDR_Cnt_IUMPR_HTCL_MaxDTCSet))) ||
            rtb_LogicalOperator12_op) ||
           (rtb_VariantMerge_For_Variant_Source_Va_e &&
            (KeTHDR_b_IUMPR_HCCTISPerf_HCCTISShrtHi_Enbl))) ||
          (KeTHDR_b_IUMPR_HCCTISPerf_Ovrrd)) && (KeTHDR_b_IUMPR_HCCTISPerf_Enbl));
    i = ((sint32)THDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 1;
    rowIdx = ((uint32)THDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 64U;
    VariantMerge_For_Variant_Source_Variant_ = ((sint32)
        THDR_ac_DW.StatusByte_LIN1_BusOff) & 1;
    VariantMerge_For_Variant_Source_Varian_0 = ((uint32)
        THDR_ac_DW.StatusByte_LIN1_BusOff) & 64U;
    VariantMerge_For_Variant_Source_Varian_1 = ((sint32)
        THDR_ac_DW.StatusByte_LIN2_BusOff) & 1;
    VariantMerge_For_Variant_Source_Varian_2 = ((uint32)
        THDR_ac_DW.StatusByte_LIN2_BusOff) & 64U;
    VariantMerge_For_Variant_Source_Varian_3 = ((sint32)
        THDR_ac_DW.StatusByte_CoolPmpACtrlCktPerf) & 1;
    VariantMerge_For_Variant_Source_Varian_4 = ((uint32)
        THDR_ac_DW.StatusByte_CoolPmpACtrlCktPerf) & 64U;
    VariantMerge_For_Variant_Source_Varian_5 = ((sint32)
        THDR_ac_DW.StatusByte_CT2_SnsrCktHi) & 1;
    VariantMerge_For_Variant_Source_Varian_6 = ((uint32)
        THDR_ac_DW.StatusByte_CT2_SnsrCktHi) & 64U;
    VariantMerge_For_Variant_Source_Varian_7 = ((sint32)
        THDR_ac_DW.StatusByte_CT2_SnsrCktLo) & 1;
    VariantMerge_For_Variant_Source_Varian_8 = ((uint32)
        THDR_ac_DW.StatusByte_CT2_SnsrCktLo) & 64U;
    VariantMerge_For_Variant_Source_Varian_9 = ((sint32)
        THDR_ac_DW.StatusByte_CT2_SnsrPerf) & 1;
    VariantMerge_For_Variant_Source_Varian_a = ((uint32)
        THDR_ac_DW.StatusByte_CT2_SnsrPerf) & 64U;
    VariantMerge_For_Variant_Source_Varian_b = ((sint32)
        THDR_ac_DW.StatusByte_CT3_SnsrPerf) & 1;
    VariantMerge_For_Variant_Source_Varian_c = ((uint32)
        THDR_ac_DW.StatusByte_CT3_SnsrPerf) & 64U;
    VariantMerge_For_Variant_Source_Varian_d = ((sint32)
        THDR_ac_DW.StatusByte_CoolPmpATempSnsrPerf) & 1;
    VariantMerge_For_Variant_Source_Varian_e = ((uint32)
        THDR_ac_DW.StatusByte_CoolPmpATempSnsrPerf) & 64U;
    VariantMerge_For_Variant_Source_Varian_f = ((sint32)
        THDR_ac_DW.StatusByte_LostCommCoolHtrA) & 1;
    VariantMerge_For_Variant_Source_Varian_g = ((uint32)
        THDR_ac_DW.StatusByte_LostCommCoolHtrA) & 64U;
    VariantMerge_For_Variant_Source_Varian_j = ((sint32)
        THDR_ac_DW.StatusByte_ECH_TempIn) & 1;
    VariantMerge_For_Variant_Source_Varian_k = ((uint32)
        THDR_ac_DW.StatusByte_ECH_TempIn) & 64U;
    THDR_ac_B.VariantMerge_For_Variant_Source_Variant_[0] = (((((((((i > 0) &&
        (rowIdx == 0U)) || (((VariantMerge_For_Variant_Source_Variant_ > 0) &&
        (VariantMerge_For_Variant_Source_Varian_0 == 0U)) &&
                            (KeTHDR_b_IUMPR_ECHoutPerf_LIN1Off_Enbl))) ||
        (((VariantMerge_For_Variant_Source_Varian_1 > 0) &&
          (VariantMerge_For_Variant_Source_Varian_2 == 0U)) &&
         (KeTHDR_b_IUMPR_ECHoutPerf_LIN2Off_Enbl))) ||
        (((VariantMerge_For_Variant_Source_Varian_3 > 0) &&
          (VariantMerge_For_Variant_Source_Varian_4 == 0U)) &&
         (KeTHDR_b_IUMPR_ECHoutPerf_HTAPPerf_Enbl))) || ((((((sint32)
        ((((((VariantMerge_For_Variant_Source_Varian_5 > 0) &&
             (VariantMerge_For_Variant_Source_Varian_6 == 0U)) &&
            (KeTHDR_b_IUMPR_ECHoutPerf_ECHTISShrtHi_Enbl)) ||
           (((VariantMerge_For_Variant_Source_Varian_7 > 0) &&
             (VariantMerge_For_Variant_Source_Varian_8 == 0U)) &&
            (KeTHDR_b_IUMPR_ECHoutPerf_ECHTISShrtLo_Enbl))) ||
          (((VariantMerge_For_Variant_Source_Varian_9 > 0) &&
            (VariantMerge_For_Variant_Source_Varian_a == 0U)) &&
           (KeTHDR_b_IUMPR_ECHoutPerf_ECHTISPerf_Enbl))) ? 1 : 0)) + ((sint32)
        ((((VariantMerge_For_Variant_Source_Varian_j > 0) &&
           (VariantMerge_For_Variant_Source_Varian_k == 0U)) &&
          (KeTHDR_b_IUMPR_ECHoutPerf_ECHinPerf_Enbl)) ? 1 : 0))) + ((sint32)
        ((((((VariantMerge_For_Variant_Source_Varian_b > 0) &&
             (VariantMerge_For_Variant_Source_Varian_c == 0U)) &&
            (KeTHDR_b_IUMPR_ECHoutPerf_HCCTISPerf_Enbl)) ||
           (rtb_VariantMerge_For_Variant_Source_Va_d &&
            (KeTHDR_b_IUMPR_ECHoutPerf_HCCTISShrtLo_Enbl))) ||
          (rtb_VariantMerge_For_Variant_Source_Va_e &&
           (KeTHDR_b_IUMPR_ECHoutPerf_HCCTISShrtHi_Enbl))) ? 1 : 0))) + ((sint32)
        ((((VariantMerge_For_Variant_Source_Varian_d > 0) &&
           (VariantMerge_For_Variant_Source_Varian_e == 0U)) &&
          (KeTHDR_b_IUMPR_ECHoutPerf_HTAPTempPerf_Enbl)) ? 1 : 0))) >= ((sint32)
        KeTHDR_Cnt_IUMPR_HTCL_MaxDTCSet))) ||
        (((VariantMerge_For_Variant_Source_Varian_f > 0) &&
          (VariantMerge_For_Variant_Source_Varian_g == 0U)) &&
         (KeTHDR_b_IUMPR_ECHoutPerf_LOCwECH_Enbl))) ||
        (KeTHDR_b_IUMPR_ECHoutPerf_Ovrrd)) && (KeTHDR_b_IUMPR_ECHoutPerf_Enbl));
    VariantMerge_For_Variant_Source_Varian_h = ((sint32)
        THDR_ac_DW.StatusByte_ECH_TempOut) & 1;
    VariantMerge_For_Variant_Source_Varian_i = ((uint32)
        THDR_ac_DW.StatusByte_ECH_TempOut) & 64U;
    THDR_ac_B.VariantMerge_For_Variant_Source_Variant_[1] = (((((((((i > 0) &&
        (rowIdx == 0U)) || (((VariantMerge_For_Variant_Source_Variant_ > 0) &&
        (VariantMerge_For_Variant_Source_Varian_0 == 0U)) &&
                            (KeTHDR_b_IUMPR_ECHinPerf_LIN1Off_Enbl))) ||
        (((VariantMerge_For_Variant_Source_Varian_1 > 0) &&
          (VariantMerge_For_Variant_Source_Varian_2 == 0U)) &&
         (KeTHDR_b_IUMPR_ECHinPerf_LIN2Off_Enbl))) ||
        (((VariantMerge_For_Variant_Source_Varian_3 > 0) &&
          (VariantMerge_For_Variant_Source_Varian_4 == 0U)) &&
         (KeTHDR_b_IUMPR_ECHinPerf_HTAPPerf_Enbl))) || ((((((sint32)
        ((((((VariantMerge_For_Variant_Source_Varian_5 > 0) &&
             (VariantMerge_For_Variant_Source_Varian_6 == 0U)) &&
            (KeTHDR_b_IUMPR_ECHinPerf_ECHTISShrtHi_Enbl)) ||
           (((VariantMerge_For_Variant_Source_Varian_7 > 0) &&
             (VariantMerge_For_Variant_Source_Varian_8 == 0U)) &&
            (KeTHDR_b_IUMPR_ECHinPerf_ECHTISShrtLo_Enbl))) ||
          (((VariantMerge_For_Variant_Source_Varian_9 > 0) &&
            (VariantMerge_For_Variant_Source_Varian_a == 0U)) &&
           (KeTHDR_b_IUMPR_ECHinPerf_ECHTISPerf_Enbl))) ? 1 : 0)) + ((sint32)
        ((((VariantMerge_For_Variant_Source_Varian_h > 0) &&
           (VariantMerge_For_Variant_Source_Varian_i == 0U)) &&
          (KeTHDR_b_IUMPR_ECHinPerf_ECHoutPerf_Enbl)) ? 1 : 0))) + ((sint32)
        ((((((VariantMerge_For_Variant_Source_Varian_b > 0) &&
             (VariantMerge_For_Variant_Source_Varian_c == 0U)) &&
            (KeTHDR_b_IUMPR_ECHinPerf_HCCTISPerf_Enbl)) ||
           (rtb_VariantMerge_For_Variant_Source_Va_d &&
            (KeTHDR_b_IUMPR_ECHinPerf_HCCTISShrtLo_Enbl))) ||
          (rtb_VariantMerge_For_Variant_Source_Va_e &&
           (KeTHDR_b_IUMPR_ECHinPerf_HCCTISShrtHi_Enbl))) ? 1 : 0))) + ((sint32)
        ((((VariantMerge_For_Variant_Source_Varian_d > 0) &&
           (VariantMerge_For_Variant_Source_Varian_e == 0U)) &&
          (KeTHDR_b_IUMPR_ECHinPerf_HTAPTempPerf_Enbl)) ? 1 : 0))) >= ((sint32)
        KeTHDR_Cnt_IUMPR_HTCL_MaxDTCSet))) ||
        (((VariantMerge_For_Variant_Source_Varian_f > 0) &&
          (VariantMerge_For_Variant_Source_Varian_g == 0U)) &&
         (KeTHDR_b_IUMPR_ECHinPerf_LOCwECH_Enbl))) ||
        (KeTHDR_b_IUMPR_ECHinPerf_Ovrrd)) && (KeTHDR_b_IUMPR_ECHinPerf_Enbl));
    THDR_ac_B.VariantMerge_For_Variant_Source_Variant_[4] = ((((((((((i > 0) &&
        (rowIdx == 0U)) && (KeTHDR_b_IUMPR_HTAPTempPerf_Relay_Enbl)) ||
        (((VariantMerge_For_Variant_Source_Variant_ > 0) &&
          (VariantMerge_For_Variant_Source_Varian_0 == 0U)) &&
         (KeTHDR_b_IUMPR_HTAPTempPerf_LIN1Off_Enbl))) ||
        (((VariantMerge_For_Variant_Source_Varian_1 > 0) &&
          (VariantMerge_For_Variant_Source_Varian_2 == 0U)) &&
         (KeTHDR_b_IUMPR_HTAPTempPerf_LIN2Off_Enbl))) ||
        (((VariantMerge_For_Variant_Source_Varian_3 > 0) &&
          (VariantMerge_For_Variant_Source_Varian_4 == 0U)) &&
         (KeTHDR_b_IUMPR_HTAPTempPerf_HTAPPerf_Enbl))) || ((((((sint32)
        ((((((VariantMerge_For_Variant_Source_Varian_7 > 0) &&
             (VariantMerge_For_Variant_Source_Varian_8 == 0U)) &&
            (KeTHDR_b_IUMPR_HTAPTempPerf_ECHTISShrtLo_Enbl)) ||
           (((VariantMerge_For_Variant_Source_Varian_5 > 0) &&
             (VariantMerge_For_Variant_Source_Varian_6 == 0U)) &&
            (KeTHDR_b_IUMPR_HTAPTempPerf_ECHTISShrtHi_Enbl))) ||
          (((VariantMerge_For_Variant_Source_Varian_9 > 0) &&
            (VariantMerge_For_Variant_Source_Varian_a == 0U)) &&
           (KeTHDR_b_IUMPR_HTAPTempPerf_ECHTISPerf_Enbl))) ? 1 : 0)) + ((sint32)
        ((((VariantMerge_For_Variant_Source_Varian_h > 0) &&
           (VariantMerge_For_Variant_Source_Varian_i == 0U)) &&
          (KeTHDR_b_IUMPR_HTAPTempPerf_ECHoutPerf_Enbl)) ? 1 : 0))) + ((sint32)
        ((((VariantMerge_For_Variant_Source_Varian_j > 0) &&
           (VariantMerge_For_Variant_Source_Varian_k == 0U)) &&
          (KeTHDR_b_IUMPR_HTAPTempPerf_ECHTinPerf_Enbl)) ? 1 : 0))) + ((sint32)
        ((((((VariantMerge_For_Variant_Source_Varian_b > 0) &&
             (VariantMerge_For_Variant_Source_Varian_c == 0U)) &&
            (KeTHDR_b_IUMPR_HTAPTempPerf_HCCTISPerf_Enbl)) ||
           (rtb_VariantMerge_For_Variant_Source_Va_d &&
            (KeTHDR_b_IUMPR_HTAPTempPerf_HCCTISShrtLo_Enbl))) ||
          (rtb_VariantMerge_For_Variant_Source_Va_e &&
           (KeTHDR_b_IUMPR_HTAPTempPerf_HCCTISShrtHi_Enbl))) ? 1 : 0))) >=
        ((sint32)KeTHDR_Cnt_IUMPR_HTCL_MaxDTCSet))) || ((((((sint32)
        THDR_ac_DW.StatusByte_LostCommCoolPmpA) & 1) > 0) && ((((uint32)
        THDR_ac_DW.StatusByte_LostCommCoolPmpA) & 64U) == 0U)) &&
        (KeTHDR_b_IUMPR_HTAPTempPerf_LOCwECH_Enbl))) ||
        (KeTHDR_b_IUMPR_HTAPTempPerf_Ovrrd)) &&
        (KeTHDR_b_IUMPR_HTAPTempPerf_Enbl));
    THDR_ac_B.VariantMerge_For_Variant_Source_Variant_[2] = ((((((((((((i > 0) &&
        (rowIdx == 0U)) && (KeTHDR_b_IUMPR_ECHTISPerf_Relay_Enbl)) ||
        (((VariantMerge_For_Variant_Source_Variant_ > 0) &&
          (VariantMerge_For_Variant_Source_Varian_0 == 0U)) &&
         (KeTHDR_b_IUMPR_ECHTISPerf_LIN1Off_Enbl))) ||
        (((VariantMerge_For_Variant_Source_Varian_1 > 0) &&
          (VariantMerge_For_Variant_Source_Varian_2 == 0U)) &&
         (KeTHDR_b_IUMPR_ECHTISPerf_LIN2Off_Enbl))) ||
        (((VariantMerge_For_Variant_Source_Varian_3 > 0) &&
          (VariantMerge_For_Variant_Source_Varian_4 == 0U)) &&
         (KeTHDR_b_IUMPR_ECHTISPerf_HTAPPerf_Enbl))) || ((((((sint32)
        ((((((VariantMerge_For_Variant_Source_Varian_b > 0) &&
             (VariantMerge_For_Variant_Source_Varian_c == 0U)) &&
            (KeTHDR_b_IUMPR_ECHTISPerf_HCCTISPerf_Enbl)) ||
           (rtb_VariantMerge_For_Variant_Source_Va_d &&
            (KeTHDR_b_IUMPR_ECHTISPerf_HCCTISShrtLo_Enbl))) ||
          (rtb_VariantMerge_For_Variant_Source_Va_e &&
           (KeTHDR_b_IUMPR_ECHTISPerf_HCCTISShrtHi_Enbl))) ? 1 : 0)) + ((sint32)
        ((((VariantMerge_For_Variant_Source_Varian_j > 0) &&
           (VariantMerge_For_Variant_Source_Varian_k == 0U)) &&
          (KeTHDR_b_IUMPR_ECHTISPerf_ECHTinPerf_Enbl)) ? 1 : 0))) + ((sint32)
        ((((VariantMerge_For_Variant_Source_Varian_h > 0) &&
           (VariantMerge_For_Variant_Source_Varian_i == 0U)) &&
          (KeTHDR_b_IUMPR_ECHTISPerf_ECHoutPerf_Enbl)) ? 1 : 0))) + ((sint32)
        ((((VariantMerge_For_Variant_Source_Varian_d > 0) &&
           (VariantMerge_For_Variant_Source_Varian_e == 0U)) &&
          (KeTHDR_b_IUMPR_ECHTISPerf_HTAPTempPerf_Enbl)) ? 1 : 0))) >= ((sint32)
        KeTHDR_Cnt_IUMPR_HTCL_MaxDTCSet))) ||
        (((VariantMerge_For_Variant_Source_Varian_f > 0) &&
          (VariantMerge_For_Variant_Source_Varian_g == 0U)) &&
         (KeTHDR_b_IUMPR_ECHTISPerf_LOCwECH_Enbl))) ||
        (((VariantMerge_For_Variant_Source_Varian_7 > 0) &&
          (VariantMerge_For_Variant_Source_Varian_8 == 0U)) &&
         (KeTHDR_b_IUMPR_ECHTISPerf_ECHTISShrtLo_Enbl))) ||
        (((VariantMerge_For_Variant_Source_Varian_5 > 0) &&
          (VariantMerge_For_Variant_Source_Varian_6 == 0U)) &&
         (KeTHDR_b_IUMPR_ECHTISPerf_ECHTISShrtHi_Enbl))) ||
        (KeTHDR_b_IUMPR_ECHTISPerf_Ovrrd)) && (KeTHDR_b_IUMPR_ECHTISPerf_Enbl));

#else

    /* VariantMerge generated from: '<S13>/Variant Source' incorporates:
     *  Constant: '<S109>/FALSE Constant'
     *  SignalConversion generated from: '<S13>/Variant Source'
     */
    THDR_ac_B.VariantMerge_For_Variant_Source_Variant_[0] = false;
    THDR_ac_B.VariantMerge_For_Variant_Source_Variant_[1] = false;
    THDR_ac_B.VariantMerge_For_Variant_Source_Variant_[2] = false;
    THDR_ac_B.VariantMerge_For_Variant_Source_Variant_[3] = false;
    THDR_ac_B.VariantMerge_For_Variant_Source_Variant_[4] = false;

#endif

    /* End of Logic: '<S112>/Logical Operator13' */

    /* S-Function (sfix_bitop): '<S300>/Bitwise Operator1' incorporates:
     *  Logic: '<S296>/Logical1'
     *  Logic: '<S300>/Logical Operator'
     *  Logic: '<S301>/Logical Operator'
     *  Logic: '<S302>/Logical Operator'
     *  Logic: '<S303>/Logical Operator'
     *  Logic: '<S304>/Logical Operator'
     *  Logic: '<S305>/Logical Operator'
     *  Logic: '<S306>/Logical Operator'
     *  Logic: '<S307>/Logical Operator'
     *  RelationalOperator: '<S300>/Relational Operator1'
     *  RelationalOperator: '<S300>/Relational Operator2'
     *  RelationalOperator: '<S301>/Relational Operator1'
     *  RelationalOperator: '<S301>/Relational Operator2'
     *  RelationalOperator: '<S302>/Relational Operator1'
     *  RelationalOperator: '<S302>/Relational Operator2'
     *  RelationalOperator: '<S303>/Relational Operator1'
     *  RelationalOperator: '<S303>/Relational Operator2'
     *  RelationalOperator: '<S304>/Relational Operator1'
     *  RelationalOperator: '<S304>/Relational Operator2'
     *  RelationalOperator: '<S305>/Relational Operator1'
     *  RelationalOperator: '<S305>/Relational Operator2'
     *  RelationalOperator: '<S306>/Relational Operator1'
     *  RelationalOperator: '<S306>/Relational Operator2'
     *  RelationalOperator: '<S307>/Relational Operator1'
     *  RelationalOperator: '<S307>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S300>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S301>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S301>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S302>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S302>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S303>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S303>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S304>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S304>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S305>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S305>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S306>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S306>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S307>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S307>/Bitwise Operator2'
     */
#if Rte_SysCon_Variant_THDR_2

    /* Logic: '<S300>/Logical Operator' incorporates:
     *  Constant: '<S300>/Constant1'
     *  Constant: '<S300>/Constant2'
     *  DataStoreRead: '<S300>/StatusByte_CT_SnsrPerf'
     */
    rtb_LogicalOperator_mxy = (((((sint32)THDR_ac_DW.StatusByte_CT_SnsrPerf) & 1)
        > 0) && ((((uint32)THDR_ac_DW.StatusByte_CT_SnsrPerf) & 64U) == 0U));

    /* Logic: '<S301>/Logical Operator' incorporates:
     *  Constant: '<S301>/Constant1'
     *  Constant: '<S301>/Constant2'
     *  DataStoreRead: '<S301>/StatusByte_MtrElect_CooPumBOvrSpd'
     */
    rtb_LogicalOperator_hi = (((((sint32)
        THDR_ac_DW.StatusByte_MtrElect_CooPumBOvrSpd) & 1) > 0) && ((((uint32)
        THDR_ac_DW.StatusByte_MtrElect_CooPumBOvrSpd) & 64U) == 0U));

    /* Logic: '<S302>/Logical Operator' incorporates:
     *  Constant: '<S302>/Constant1'
     *  Constant: '<S302>/Constant2'
     *  DataStoreRead: '<S302>/StatusByte_MtrElect_CoolPmpATempSnsrPerf'
     */
    rtb_LogicalOperator_h1 = (((((sint32)
        THDR_ac_DW.StatusByte_MtrElect_CoolPmpATempSnsrPerf) & 1) > 0) &&
        ((((uint32)THDR_ac_DW.StatusByte_MtrElect_CoolPmpATempSnsrPerf) & 64U) ==
         0U));

    /* Logic: '<S303>/Logical Operator' incorporates:
     *  Constant: '<S303>/Constant1'
     *  Constant: '<S303>/Constant2'
     *  DataStoreRead: '<S303>/StatusByte_MtrElect_CoolPmpBTempSnsrPerf'
     */
    rtb_LogicalOperator_ia = (((((sint32)
        THDR_ac_DW.StatusByte_MtrElect_CoolPmpBTempSnsrPerf) & 1) > 0) &&
        ((((uint32)THDR_ac_DW.StatusByte_MtrElect_CoolPmpBTempSnsrPerf) & 64U) ==
         0U));

    /* Logic: '<S305>/Logical Operator' incorporates:
     *  Constant: '<S305>/Constant1'
     *  Constant: '<S305>/Constant2'
     *  DataStoreRead: '<S305>/StatusByte_MtrElect_CoolPumBCtrlPerf'
     */
    rtb_LogicalOperator_n1h = (((((sint32)
        THDR_ac_DW.StatusByte_MtrElect_CoolPumBCtrlPerf) & 1) > 0) && ((((uint32)
        THDR_ac_DW.StatusByte_MtrElect_CoolPumBCtrlPerf) & 64U) == 0U));

    /* Logic: '<S306>/Logical Operator' incorporates:
     *  Constant: '<S306>/Constant1'
     *  Constant: '<S306>/Constant2'
     *  DataStoreRead: '<S306>/StatusByte_PwrElecPmpPerf'
     */
    rtb_LogicalOperator_hx = (((((sint32)THDR_ac_DW.StatusByte_PwrElecPmpPerf) &
        1) > 0) && ((((uint32)THDR_ac_DW.StatusByte_PwrElecPmpPerf) & 64U) == 0U));

    /* Logic: '<S307>/Logical Operator' incorporates:
     *  Constant: '<S307>/Constant1'
     *  Constant: '<S307>/Constant2'
     *  DataStoreRead: '<S307>/StatusByte_ThrmlRlyCtrlCkt'
     */
    rtb_LogicalOperator_of3 = (((((sint32)THDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt)
        & 1) > 0) && ((((uint32)THDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 64U) ==
                      0U));

    /* Logic: '<S296>/Logical1' incorporates:
     *  Constant: '<S304>/Constant1'
     *  Constant: '<S304>/Constant2'
     *  Constant: '<S315>/Calib'
     *  DataStoreRead: '<S304>/StatusByte_MtrElect_CoolPumAOvrSpd'
     */
    rtb_Logical1 = ((((((sint32)THDR_ac_DW.StatusByte_MtrElect_CoolPumAOvrSpd) &
                       1) > 0) && ((((uint32)
                        THDR_ac_DW.StatusByte_MtrElect_CoolPumAOvrSpd) & 64U) ==
                      0U)) && (KeTHDR_b_IUMPR_PPCTISPerf_PECP_DryRnChk_Enbl));

#endif

    /* End of S-Function (sfix_bitop): '<S300>/Bitwise Operator1' */

    /* SignalConversion generated from: '<S18>/Variant Source5' incorporates:
     *  Logic: '<S446>/Logical Operator'
     *  RelationalOperator: '<S446>/Relational Operator1'
     *  RelationalOperator: '<S446>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S446>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S446>/Bitwise Operator2'
     */
#if (Rte_SysCon_Variant_THDR_2 && Rte_SysCon_Variant_THDR_3) || (Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_9)

    /* VariantMerge generated from: '<S18>/Variant Source5' incorporates:
     *  Inport: '<Root>/VeBSWR_b_MtrElect_CT_SnsrCktHi'
     */
    (void)Rte_Read_VeBSWR_b_MtrElect_CT_SnsrCktHi_Value
        (&rtb_VariantMerge_For_Variant_Source_Va_m);

#elif (!Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_2) || (!Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_9)

    /* VariantMerge generated from: '<S18>/Variant Source5' incorporates:
     *  Constant: '<S446>/Constant1'
     *  Constant: '<S446>/Constant2'
     *  DataStoreRead: '<S446>/StatusByte_MtrElect_CT_SnsrCktHi'
     *  Logic: '<S446>/Logical Operator'
     *  RelationalOperator: '<S446>/Relational Operator1'
     *  RelationalOperator: '<S446>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S446>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S446>/Bitwise Operator2'
     */
    rtb_VariantMerge_For_Variant_Source_Va_m = (((((sint32)
        THDR_ac_DW.StatusByte_MtrElect_CT_SnsrCktHi) & 1) > 0) && ((((uint32)
        THDR_ac_DW.StatusByte_MtrElect_CT_SnsrCktHi) & 64U) == 0U));

#endif

    /* End of SignalConversion generated from: '<S18>/Variant Source5' */

    /* Logic: '<S296>/Logical10' incorporates:
     *  Logic: '<S296>/Logical2'
     *  Logic: '<S296>/Logical3'
     *  Logic: '<S296>/Logical4'
     *  Logic: '<S296>/Logical5'
     *  Logic: '<S296>/Logical6'
     *  Logic: '<S296>/Logical7'
     *  Logic: '<S296>/Logical8'
     */
#if Rte_SysCon_Variant_THDR_2

    /* Logic: '<S296>/Logical10' incorporates:
     *  Constant: '<S317>/Calib'
     */
    rtb_Logical10 = (rtb_VariantMerge_For_Variant_Source_Va_m &&
                     (KeTHDR_b_IUMPR_PPCTISPerf_PPCTISShrtHi_Enbl));

    /* Logic: '<S296>/Logical2' incorporates:
     *  Constant: '<S314>/Calib'
     */
    rtb_Logical2 = (rtb_LogicalOperator_hx &&
                    (KeTHDR_b_IUMPR_PPCTISPerf_PECPPerf_Enbl));

    /* Logic: '<S296>/Logical3' incorporates:
     *  Constant: '<S319>/Calib'
     */
    rtb_Logical3 = (rtb_LogicalOperator_of3 &&
                    (KeTHDR_b_IUMPR_PPCTISPerf_Relay_Enbl));

    /* Logic: '<S296>/Logical4' incorporates:
     *  Constant: '<S312>/Calib'
     */
    rtb_Logical4 = (rtb_LogicalOperator_n1h &&
                    (KeTHDR_b_IUMPR_PPCTISPerf_PECP2Perf_Enbl));

    /* Logic: '<S296>/Logical5' incorporates:
     *  Constant: '<S313>/Calib'
     */
    rtb_Logical5 = (rtb_LogicalOperator_hi &&
                    (KeTHDR_b_IUMPR_PPCTISPerf_PECP2_DryRnChk_Enbl));

    /* Logic: '<S296>/Logical6' incorporates:
     *  Constant: '<S309>/Calib'
     */
    rtb_Logical6 = (rtb_LogicalOperator_h1 &&
                    (KeTHDR_b_IUMPR_PPCTISPerf_LTPPTempPerf_Enbl));

    /* Logic: '<S296>/Logical7' incorporates:
     *  Constant: '<S316>/Calib'
     */
    rtb_Logical7 = (rtb_LogicalOperator_mxy &&
                    (KeTHDR_b_IUMPR_PPCTISPerf_PECTOSPerf_Enbl));

    /* Logic: '<S296>/Logical8' incorporates:
     *  Constant: '<S308>/Calib'
     */
    rtb_Logical8 = (rtb_LogicalOperator_ia &&
                    (KeTHDR_b_IUMPR_PPCTISPerf_LTPP2TempPerf_Enbl));

#endif

    /* End of Logic: '<S296>/Logical10' */

    /* SignalConversion generated from: '<S18>/Variant Source4' incorporates:
     *  Logic: '<S447>/Logical Operator'
     *  RelationalOperator: '<S447>/Relational Operator1'
     *  RelationalOperator: '<S447>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S447>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S447>/Bitwise Operator2'
     */
#if (Rte_SysCon_Variant_THDR_2 && Rte_SysCon_Variant_THDR_3) || (Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_9)

    /* VariantMerge generated from: '<S18>/Variant Source4' incorporates:
     *  Inport: '<Root>/VeBSWR_b_MtrElect_CT_SnsrCktLo'
     */
    (void)Rte_Read_VeBSWR_b_MtrElect_CT_SnsrCktLo_Value
        (&rtb_VariantMerge_For_Variant_Source_Va_f);

#elif (!Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_2) || (!Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_9)

    /* VariantMerge generated from: '<S18>/Variant Source4' incorporates:
     *  Constant: '<S447>/Constant1'
     *  Constant: '<S447>/Constant2'
     *  DataStoreRead: '<S447>/StatusByte_MtrElect_CT_SnsrCktLo'
     *  Logic: '<S447>/Logical Operator'
     *  RelationalOperator: '<S447>/Relational Operator1'
     *  RelationalOperator: '<S447>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S447>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S447>/Bitwise Operator2'
     */
    rtb_VariantMerge_For_Variant_Source_Va_f = (((((sint32)
        THDR_ac_DW.StatusByte_MtrElect_CT_SnsrCktLo) & 1) > 0) && ((((uint32)
        THDR_ac_DW.StatusByte_MtrElect_CT_SnsrCktLo) & 64U) == 0U));

#endif

    /* End of SignalConversion generated from: '<S18>/Variant Source4' */

    /* Logic: '<S296>/Logical9' */
#if Rte_SysCon_Variant_THDR_2

    /* Logic: '<S296>/Logical9' incorporates:
     *  Constant: '<S318>/Calib'
     */
    rtb_Logical9 = (rtb_VariantMerge_For_Variant_Source_Va_f &&
                    (KeTHDR_b_IUMPR_PPCTISPerf_PPCTISShrtLo_Enbl));

#endif

    /* End of Logic: '<S296>/Logical9' */

    /* SignalConversion generated from: '<S18>/Variant Source2' incorporates:
     *  Logic: '<S443>/Logical Operator'
     *  RelationalOperator: '<S443>/Relational Operator1'
     *  RelationalOperator: '<S443>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S443>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S443>/Bitwise Operator2'
     */
#if (Rte_SysCon_Variant_THDR_2 && Rte_SysCon_Variant_THDR_3) || (Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_9)

    /* VariantMerge generated from: '<S18>/Variant Source2' incorporates:
     *  Inport: '<Root>/VeBSWR_b_CT_SnsrCktLo'
     */
    (void)Rte_Read_VeBSWR_b_CT_SnsrCktLo_Value
        (&rtb_VariantMerge_For_Variant_Source_V_cm);

#elif (!Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_2) || (!Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_9)

    /* VariantMerge generated from: '<S18>/Variant Source2' incorporates:
     *  Constant: '<S443>/Constant1'
     *  Constant: '<S443>/Constant2'
     *  DataStoreRead: '<S443>/StatusByte_CT_SnsrCktLo'
     *  Logic: '<S443>/Logical Operator'
     *  RelationalOperator: '<S443>/Relational Operator1'
     *  RelationalOperator: '<S443>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S443>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S443>/Bitwise Operator2'
     */
    rtb_VariantMerge_For_Variant_Source_V_cm = (((((sint32)
        THDR_ac_DW.StatusByte_CT_SnsrCktLo) & 1) > 0) && ((((uint32)
        THDR_ac_DW.StatusByte_CT_SnsrCktLo) & 64U) == 0U));

#endif

    /* End of SignalConversion generated from: '<S18>/Variant Source2' */

    /* Logic: '<S296>/Logical12' */
#if Rte_SysCon_Variant_THDR_2

    /* Logic: '<S296>/Logical12' incorporates:
     *  Constant: '<S311>/Calib'
     */
    rtb_Logical12 = (rtb_VariantMerge_For_Variant_Source_V_cm &&
                     (KeTHDR_b_IUMPR_PPCTISPerf_OCCTOSShrtLo_Enbl));

#endif

    /* End of Logic: '<S296>/Logical12' */

    /* SignalConversion generated from: '<S18>/Variant Source3' incorporates:
     *  Logic: '<S442>/Logical Operator'
     *  RelationalOperator: '<S442>/Relational Operator1'
     *  RelationalOperator: '<S442>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S442>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S442>/Bitwise Operator2'
     */
#if (Rte_SysCon_Variant_THDR_2 && Rte_SysCon_Variant_THDR_3) || (Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_9)

    /* VariantMerge generated from: '<S18>/Variant Source3' incorporates:
     *  Inport: '<Root>/VeBSWR_b_CT_SnsrCktHi'
     */
    (void)Rte_Read_VeBSWR_b_CT_SnsrCktHi_Value
        (&rtb_VariantMerge_For_Variant_Source_Va_g);

#elif (!Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_2) || (!Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_9)

    /* VariantMerge generated from: '<S18>/Variant Source3' incorporates:
     *  Constant: '<S442>/Constant1'
     *  Constant: '<S442>/Constant2'
     *  DataStoreRead: '<S442>/StatusByte_CT_SnsrCktHi'
     *  Logic: '<S442>/Logical Operator'
     *  RelationalOperator: '<S442>/Relational Operator1'
     *  RelationalOperator: '<S442>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S442>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S442>/Bitwise Operator2'
     */
    rtb_VariantMerge_For_Variant_Source_Va_g = (((((sint32)
        THDR_ac_DW.StatusByte_CT_SnsrCktHi) & 1) > 0) && ((((uint32)
        THDR_ac_DW.StatusByte_CT_SnsrCktHi) & 64U) == 0U));

#endif

    /* End of SignalConversion generated from: '<S18>/Variant Source3' */

    /* Logic: '<S296>/Logical13' incorporates:
     *  Constant: '<S310>/Calib'
     *  Constant: '<S320>/Constant1'
     *  Constant: '<S320>/Constant2'
     *  Constant: '<S321>/Constant1'
     *  Constant: '<S321>/Constant2'
     *  Constant: '<S322>/Constant1'
     *  Constant: '<S322>/Constant2'
     *  Constant: '<S323>/Constant1'
     *  Constant: '<S323>/Constant2'
     *  Constant: '<S324>/Constant1'
     *  Constant: '<S324>/Constant2'
     *  Constant: '<S325>/Constant1'
     *  Constant: '<S325>/Constant2'
     *  Constant: '<S326>/Constant1'
     *  Constant: '<S326>/Constant2'
     *  Constant: '<S327>/Constant1'
     *  Constant: '<S327>/Constant2'
     *  Constant: '<S328>/Constant1'
     *  Constant: '<S328>/Constant2'
     *  Constant: '<S329>/Constant1'
     *  Constant: '<S329>/Constant2'
     *  Constant: '<S330>/Calib'
     *  Constant: '<S331>/Calib'
     *  Constant: '<S332>/Calib'
     *  Constant: '<S333>/Calib'
     *  Constant: '<S334>/Calib'
     *  Constant: '<S335>/Calib'
     *  Constant: '<S336>/Calib'
     *  Constant: '<S337>/Calib'
     *  Constant: '<S338>/Calib'
     *  Constant: '<S339>/Calib'
     *  Constant: '<S340>/Calib'
     *  Constant: '<S341>/Calib'
     *  Constant: '<S342>/Calib'
     *  Constant: '<S343>/Calib'
     *  Constant: '<S344>/Constant1'
     *  Constant: '<S344>/Constant2'
     *  Constant: '<S345>/Constant1'
     *  Constant: '<S345>/Constant2'
     *  Constant: '<S346>/Constant1'
     *  Constant: '<S346>/Constant2'
     *  Constant: '<S347>/Constant1'
     *  Constant: '<S347>/Constant2'
     *  Constant: '<S348>/Constant1'
     *  Constant: '<S348>/Constant2'
     *  Constant: '<S349>/Constant1'
     *  Constant: '<S349>/Constant2'
     *  Constant: '<S350>/Constant1'
     *  Constant: '<S350>/Constant2'
     *  Constant: '<S351>/Constant1'
     *  Constant: '<S351>/Constant2'
     *  Constant: '<S352>/Constant1'
     *  Constant: '<S352>/Constant2'
     *  Constant: '<S353>/Constant1'
     *  Constant: '<S353>/Constant2'
     *  Constant: '<S354>/Calib'
     *  Constant: '<S355>/Calib'
     *  Constant: '<S356>/Calib'
     *  Constant: '<S357>/Calib'
     *  Constant: '<S358>/Calib'
     *  Constant: '<S359>/Calib'
     *  Constant: '<S360>/Calib'
     *  Constant: '<S361>/Calib'
     *  Constant: '<S362>/Calib'
     *  Constant: '<S363>/Calib'
     *  Constant: '<S364>/Calib'
     *  Constant: '<S365>/Calib'
     *  Constant: '<S366>/Calib'
     *  Constant: '<S367>/Calib'
     *  Constant: '<S368>/Constant1'
     *  Constant: '<S368>/Constant2'
     *  Constant: '<S369>/Constant1'
     *  Constant: '<S369>/Constant2'
     *  Constant: '<S370>/Constant1'
     *  Constant: '<S370>/Constant2'
     *  Constant: '<S371>/Constant1'
     *  Constant: '<S371>/Constant2'
     *  Constant: '<S372>/Constant1'
     *  Constant: '<S372>/Constant2'
     *  Constant: '<S373>/Constant1'
     *  Constant: '<S373>/Constant2'
     *  Constant: '<S374>/Constant1'
     *  Constant: '<S374>/Constant2'
     *  Constant: '<S375>/Constant1'
     *  Constant: '<S375>/Constant2'
     *  Constant: '<S376>/Constant1'
     *  Constant: '<S376>/Constant2'
     *  Constant: '<S377>/Calib'
     *  Constant: '<S378>/Calib'
     *  Constant: '<S379>/Calib'
     *  Constant: '<S380>/Calib'
     *  Constant: '<S381>/Calib'
     *  Constant: '<S382>/Calib'
     *  Constant: '<S383>/Calib'
     *  Constant: '<S384>/Calib'
     *  Constant: '<S385>/Calib'
     *  Constant: '<S386>/Calib'
     *  Constant: '<S387>/Calib'
     *  Constant: '<S388>/Calib'
     *  Constant: '<S389>/Calib'
     *  DataStoreRead: '<S320>/StatusByte_CommBusOff'
     *  DataStoreRead: '<S321>/StatusByte_LosCommBECM_A'
     *  DataStoreRead: '<S322>/StatusByte_MtrElect_CT_SnsrPerf'
     *  DataStoreRead: '<S323>/StatusByte_MtrElect_CooPumBOvrSpd'
     *  DataStoreRead: '<S324>/StatusByte_MtrElect_CoolPmpATempSnsrPerf'
     *  DataStoreRead: '<S325>/StatusByte_MtrElect_CoolPmpBTempSnsrPerf'
     *  DataStoreRead: '<S326>/StatusByte_MtrElect_CoolPumAOvrSpd'
     *  DataStoreRead: '<S327>/StatusByte_MtrElect_CoolPumBCtrlPerf'
     *  DataStoreRead: '<S328>/StatusByte_PwrElecPmpPerf'
     *  DataStoreRead: '<S329>/StatusByte_ThrmlRlyCtrlCkt'
     *  DataStoreRead: '<S344>/StatusByte_CT_SnsrPerf'
     *  DataStoreRead: '<S345>/StatusByte_LIN1_BusOff'
     *  DataStoreRead: '<S346>/StatusByte_LIN2_BusOff'
     *  Logic: '<S296>/Logical11'
     *  Logic: '<S297>/Logical1'
     *  Logic: '<S297>/Logical10'
     *  Logic: '<S297>/Logical11'
     *  Logic: '<S297>/Logical12'
     *  Logic: '<S297>/Logical13'
     *  Logic: '<S297>/Logical14'
     *  Logic: '<S297>/Logical15'
     *  Logic: '<S297>/Logical2'
     *  Logic: '<S297>/Logical3'
     *  Logic: '<S297>/Logical4'
     *  Logic: '<S297>/Logical5'
     *  Logic: '<S297>/Logical6'
     *  Logic: '<S297>/Logical7'
     *  Logic: '<S297>/Logical8'
     *  Logic: '<S297>/Logical9'
     *  Logic: '<S298>/Logical1'
     *  Logic: '<S298>/Logical10'
     *  Logic: '<S298>/Logical11'
     *  Logic: '<S298>/Logical12'
     *  Logic: '<S298>/Logical13'
     *  Logic: '<S298>/Logical14'
     *  Logic: '<S298>/Logical15'
     *  Logic: '<S298>/Logical2'
     *  Logic: '<S298>/Logical3'
     *  Logic: '<S298>/Logical4'
     *  Logic: '<S298>/Logical5'
     *  Logic: '<S298>/Logical6'
     *  Logic: '<S298>/Logical7'
     *  Logic: '<S298>/Logical8'
     *  Logic: '<S298>/Logical9'
     *  Logic: '<S299>/Logical1'
     *  Logic: '<S299>/Logical10'
     *  Logic: '<S299>/Logical11'
     *  Logic: '<S299>/Logical12'
     *  Logic: '<S299>/Logical13'
     *  Logic: '<S299>/Logical14'
     *  Logic: '<S299>/Logical2'
     *  Logic: '<S299>/Logical3'
     *  Logic: '<S299>/Logical4'
     *  Logic: '<S299>/Logical5'
     *  Logic: '<S299>/Logical6'
     *  Logic: '<S299>/Logical7'
     *  Logic: '<S299>/Logical8'
     *  Logic: '<S299>/Logical9'
     *  Logic: '<S320>/Logical Operator'
     *  Logic: '<S321>/Logical Operator'
     *  Logic: '<S322>/Logical Operator'
     *  Logic: '<S323>/Logical Operator'
     *  Logic: '<S324>/Logical Operator'
     *  Logic: '<S325>/Logical Operator'
     *  Logic: '<S326>/Logical Operator'
     *  Logic: '<S327>/Logical Operator'
     *  Logic: '<S328>/Logical Operator'
     *  Logic: '<S329>/Logical Operator'
     *  Logic: '<S344>/Logical Operator'
     *  Logic: '<S345>/Logical Operator'
     *  Logic: '<S346>/Logical Operator'
     *  Logic: '<S347>/Logical Operator'
     *  Logic: '<S348>/Logical Operator'
     *  Logic: '<S349>/Logical Operator'
     *  Logic: '<S350>/Logical Operator'
     *  Logic: '<S351>/Logical Operator'
     *  Logic: '<S352>/Logical Operator'
     *  Logic: '<S353>/Logical Operator'
     *  Logic: '<S368>/Logical Operator'
     *  Logic: '<S369>/Logical Operator'
     *  Logic: '<S370>/Logical Operator'
     *  Logic: '<S371>/Logical Operator'
     *  Logic: '<S372>/Logical Operator'
     *  Logic: '<S373>/Logical Operator'
     *  Logic: '<S374>/Logical Operator'
     *  Logic: '<S375>/Logical Operator'
     *  Logic: '<S376>/Logical Operator'
     *  RelationalOperator: '<S320>/Relational Operator1'
     *  RelationalOperator: '<S320>/Relational Operator2'
     *  RelationalOperator: '<S321>/Relational Operator1'
     *  RelationalOperator: '<S321>/Relational Operator2'
     *  RelationalOperator: '<S322>/Relational Operator1'
     *  RelationalOperator: '<S322>/Relational Operator2'
     *  RelationalOperator: '<S323>/Relational Operator1'
     *  RelationalOperator: '<S323>/Relational Operator2'
     *  RelationalOperator: '<S324>/Relational Operator1'
     *  RelationalOperator: '<S324>/Relational Operator2'
     *  RelationalOperator: '<S325>/Relational Operator1'
     *  RelationalOperator: '<S325>/Relational Operator2'
     *  RelationalOperator: '<S326>/Relational Operator1'
     *  RelationalOperator: '<S326>/Relational Operator2'
     *  RelationalOperator: '<S327>/Relational Operator1'
     *  RelationalOperator: '<S327>/Relational Operator2'
     *  RelationalOperator: '<S328>/Relational Operator1'
     *  RelationalOperator: '<S328>/Relational Operator2'
     *  RelationalOperator: '<S329>/Relational Operator1'
     *  RelationalOperator: '<S329>/Relational Operator2'
     *  RelationalOperator: '<S344>/Relational Operator1'
     *  RelationalOperator: '<S344>/Relational Operator2'
     *  RelationalOperator: '<S345>/Relational Operator1'
     *  RelationalOperator: '<S345>/Relational Operator2'
     *  RelationalOperator: '<S346>/Relational Operator1'
     *  RelationalOperator: '<S346>/Relational Operator2'
     *  RelationalOperator: '<S347>/Relational Operator1'
     *  RelationalOperator: '<S347>/Relational Operator2'
     *  RelationalOperator: '<S348>/Relational Operator1'
     *  RelationalOperator: '<S348>/Relational Operator2'
     *  RelationalOperator: '<S349>/Relational Operator1'
     *  RelationalOperator: '<S349>/Relational Operator2'
     *  RelationalOperator: '<S350>/Relational Operator1'
     *  RelationalOperator: '<S350>/Relational Operator2'
     *  RelationalOperator: '<S351>/Relational Operator1'
     *  RelationalOperator: '<S351>/Relational Operator2'
     *  RelationalOperator: '<S352>/Relational Operator1'
     *  RelationalOperator: '<S352>/Relational Operator2'
     *  RelationalOperator: '<S353>/Relational Operator1'
     *  RelationalOperator: '<S353>/Relational Operator2'
     *  RelationalOperator: '<S368>/Relational Operator1'
     *  RelationalOperator: '<S368>/Relational Operator2'
     *  RelationalOperator: '<S369>/Relational Operator1'
     *  RelationalOperator: '<S369>/Relational Operator2'
     *  RelationalOperator: '<S370>/Relational Operator1'
     *  RelationalOperator: '<S370>/Relational Operator2'
     *  RelationalOperator: '<S371>/Relational Operator1'
     *  RelationalOperator: '<S371>/Relational Operator2'
     *  RelationalOperator: '<S372>/Relational Operator1'
     *  RelationalOperator: '<S372>/Relational Operator2'
     *  RelationalOperator: '<S373>/Relational Operator1'
     *  RelationalOperator: '<S373>/Relational Operator2'
     *  RelationalOperator: '<S374>/Relational Operator1'
     *  RelationalOperator: '<S374>/Relational Operator2'
     *  RelationalOperator: '<S375>/Relational Operator1'
     *  RelationalOperator: '<S375>/Relational Operator2'
     *  RelationalOperator: '<S376>/Relational Operator1'
     *  RelationalOperator: '<S376>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S320>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S320>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S321>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S321>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S322>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S322>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S323>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S323>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S324>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S324>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S325>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S325>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S326>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S326>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S327>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S327>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S328>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S328>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S329>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S329>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S344>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S344>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S345>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S345>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S346>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S346>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S347>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S347>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S348>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S348>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S349>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S349>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S350>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S350>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S351>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S351>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S352>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S352>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S353>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S353>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S368>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S368>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S369>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S369>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S370>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S370>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S371>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S371>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S372>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S372>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S373>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S373>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S374>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S374>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S375>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S375>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S376>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S376>/Bitwise Operator2'
     *  SignalConversion generated from: '<S13>/Variant Source1'
     */
#if Rte_SysCon_Variant_THDR_2

    THDR_ac_B.VariantMerge_For_Variant_Source_Varian_g[0] =
        (((((((((((rtb_Logical1 || rtb_Logical2) || rtb_Logical3) ||
                 rtb_Logical4) || rtb_Logical5) || rtb_Logical6) || rtb_Logical7)
             || rtb_Logical8) || rtb_Logical9) || rtb_Logical10) ||
          rtb_Logical12) || (rtb_VariantMerge_For_Variant_Source_Va_g &&
          (KeTHDR_b_IUMPR_PPCTISPerf_OCCTOSShrtHi_Enbl)));
    i = ((sint32)THDR_ac_DW.StatusByte_MtrElect_CoolPumAOvrSpd) & 1;
    rowIdx = ((uint32)THDR_ac_DW.StatusByte_MtrElect_CoolPumAOvrSpd) & 64U;
    VariantMerge_For_Variant_Source_Variant_ = ((sint32)
        THDR_ac_DW.StatusByte_PwrElecPmpPerf) & 1;
    VariantMerge_For_Variant_Source_Varian_0 = ((uint32)
        THDR_ac_DW.StatusByte_PwrElecPmpPerf) & 64U;
    VariantMerge_For_Variant_Source_Varian_1 = ((sint32)
        THDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 1;
    VariantMerge_For_Variant_Source_Varian_2 = ((uint32)
        THDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 64U;
    VariantMerge_For_Variant_Source_Varian_3 = ((sint32)
        THDR_ac_DW.StatusByte_MtrElect_CoolPumBCtrlPerf) & 1;
    VariantMerge_For_Variant_Source_Varian_4 = ((uint32)
        THDR_ac_DW.StatusByte_MtrElect_CoolPumBCtrlPerf) & 64U;
    VariantMerge_For_Variant_Source_Varian_5 = ((sint32)
        THDR_ac_DW.StatusByte_MtrElect_CooPumBOvrSpd) & 1;
    VariantMerge_For_Variant_Source_Varian_6 = ((uint32)
        THDR_ac_DW.StatusByte_MtrElect_CooPumBOvrSpd) & 64U;
    VariantMerge_For_Variant_Source_Varian_7 = ((sint32)
        THDR_ac_DW.StatusByte_MtrElect_CT_SnsrPerf) & 1;
    VariantMerge_For_Variant_Source_Varian_8 = ((uint32)
        THDR_ac_DW.StatusByte_MtrElect_CT_SnsrPerf) & 64U;
    VariantMerge_For_Variant_Source_Varian_9 = ((sint32)
        THDR_ac_DW.StatusByte_MtrElect_CoolPmpBTempSnsrPerf) & 1;
    VariantMerge_For_Variant_Source_Varian_a = ((uint32)
        THDR_ac_DW.StatusByte_MtrElect_CoolPmpBTempSnsrPerf) & 64U;
    VariantMerge_For_Variant_Source_Varian_b = ((sint32)
        THDR_ac_DW.StatusByte_MtrElect_CoolPmpATempSnsrPerf) & 1;
    VariantMerge_For_Variant_Source_Varian_c = ((uint32)
        THDR_ac_DW.StatusByte_MtrElect_CoolPmpATempSnsrPerf) & 64U;
    THDR_ac_B.VariantMerge_For_Variant_Source_Varian_g[1] = ((((((((((((((((i >
        0) && (rowIdx == 0U)) && (KeTHDR_b_IUMPR_PECTOSPerf_PECP_DryRnChk_Enbl))
        || (((VariantMerge_For_Variant_Source_Variant_ > 0) &&
             (VariantMerge_For_Variant_Source_Varian_0 == 0U)) &&
            (KeTHDR_b_IUMPR_PECTOSPerf_PECPPerf_Enbl))) ||
        (((VariantMerge_For_Variant_Source_Varian_1 > 0) &&
          (VariantMerge_For_Variant_Source_Varian_2 == 0U)) &&
         (KeTHDR_b_IUMPR_PECTOSPerf_Relay_Enbl))) ||
        (((VariantMerge_For_Variant_Source_Varian_3 > 0) &&
          (VariantMerge_For_Variant_Source_Varian_4 == 0U)) &&
         (KeTHDR_b_IUMPR_PECTOSPerf_PECP2Perf_Enbl))) ||
        (((VariantMerge_For_Variant_Source_Varian_5 > 0) &&
          (VariantMerge_For_Variant_Source_Varian_6 == 0U)) &&
         (KeTHDR_b_IUMPR_PECTOSPerf_PECP2_DryRnChk_Enbl))) ||
        (((VariantMerge_For_Variant_Source_Varian_b > 0) &&
          (VariantMerge_For_Variant_Source_Varian_c == 0U)) &&
         (KeTHDR_b_IUMPR_PECTOSPerf_LTPPTempPerf_Enbl))) ||
        (((VariantMerge_For_Variant_Source_Varian_7 > 0) &&
          (VariantMerge_For_Variant_Source_Varian_8 == 0U)) &&
         (KeTHDR_b_IUMPR_PECTOSPerf_PPCTISPerf_Enbl))) ||
        (((VariantMerge_For_Variant_Source_Varian_9 > 0) &&
          (VariantMerge_For_Variant_Source_Varian_a == 0U)) &&
         (KeTHDR_b_IUMPR_PECTOSPerf_LTPP2TempPerf_Enbl))) ||
        (rtb_VariantMerge_For_Variant_Source_Va_f &&
         (KeTHDR_b_IUMPR_PECTOSPerf_PPCTISShrtLo_Enbl))) ||
        (rtb_VariantMerge_For_Variant_Source_Va_m &&
         (KeTHDR_b_IUMPR_PECTOSPerf_PPCTISShrtHi_Enbl))) ||
        (rtb_VariantMerge_For_Variant_Source_V_cm &&
         (KeTHDR_b_IUMPR_PECTOSPerf_OCCTOSShrtLo_Enbl))) ||
        (rtb_VariantMerge_For_Variant_Source_Va_g &&
         (KeTHDR_b_IUMPR_PECTOSPerf_OCCTOSShrtHi_Enbl))) || ((((((sint32)
        THDR_ac_DW.StatusByte_LosCommBECM_A) & 1) > 0) && ((((uint32)
        THDR_ac_DW.StatusByte_LosCommBECM_A) & 64U) == 0U)) &&
        (KeTHDR_b_IUMPR_PECTOSPerf_LOCBPCM_Enbl))) || ((((((sint32)
        THDR_ac_DW.StatusByte_CommBusOff) & 1) > 0) && ((((uint32)
        THDR_ac_DW.StatusByte_CommBusOff) & 64U) == 0U)) &&
        (KeTHDR_b_IUMPR_PECTOSPerf_ePTBusOff_Enbl)));
    VariantMerge_For_Variant_Source_Varian_d = ((sint32)
        THDR_ac_DW.StatusByte_CT_SnsrPerf) & 1;
    VariantMerge_For_Variant_Source_Varian_e = ((uint32)
        THDR_ac_DW.StatusByte_CT_SnsrPerf) & 64U;
    VariantMerge_For_Variant_Source_Varian_f = ((sint32)
        THDR_ac_DW.StatusByte_LIN2_BusOff) & 1;
    VariantMerge_For_Variant_Source_Varian_g = ((uint32)
        THDR_ac_DW.StatusByte_LIN2_BusOff) & 64U;
    THDR_ac_B.VariantMerge_For_Variant_Source_Varian_g[2] = ((((((((((((((((i >
        0) && (rowIdx == 0U)) && (KeTHDR_b_IUMPR_LTPPPerf_PECP_DryRnChk_Enbl)) ||
        (((VariantMerge_For_Variant_Source_Variant_ > 0) &&
          (VariantMerge_For_Variant_Source_Varian_0 == 0U)) &&
         (KeTHDR_b_IUMPR_LTPPPerf_PECPPerf_Enbl))) ||
        (((VariantMerge_For_Variant_Source_Varian_1 > 0) &&
          (VariantMerge_For_Variant_Source_Varian_2 == 0U)) &&
         (KeTHDR_b_IUMPR_LTPPPerf_Relay_Enbl))) ||
        (((VariantMerge_For_Variant_Source_Varian_3 > 0) &&
          (VariantMerge_For_Variant_Source_Varian_4 == 0U)) &&
         (KeTHDR_b_IUMPR_LTPPPerf_PECP2Perf_Enbl))) ||
        (((VariantMerge_For_Variant_Source_Varian_5 > 0) &&
          (VariantMerge_For_Variant_Source_Varian_6 == 0U)) &&
         (KeTHDR_b_IUMPR_LTPPPerf_PECP2_DryRnChk_Enbl))) ||
        (((VariantMerge_For_Variant_Source_Varian_d > 0) &&
          (VariantMerge_For_Variant_Source_Varian_e == 0U)) &&
         (KeTHDR_b_IUMPR_LTPPPerf_PECTOSPerf_Enbl))) ||
        (((VariantMerge_For_Variant_Source_Varian_7 > 0) &&
          (VariantMerge_For_Variant_Source_Varian_8 == 0U)) &&
         (KeTHDR_b_IUMPR_LTPPPerf_PPCTISPerf_Enbl))) ||
        (((VariantMerge_For_Variant_Source_Varian_9 > 0) &&
          (VariantMerge_For_Variant_Source_Varian_a == 0U)) &&
         (KeTHDR_b_IUMPR_LTPPPerf_LTPP2TempPerf_Enbl))) ||
        (rtb_VariantMerge_For_Variant_Source_Va_f &&
         (KeTHDR_b_IUMPR_LTPPPerf_PPCTISShrtLo_Enbl))) ||
        (rtb_VariantMerge_For_Variant_Source_Va_m &&
         (KeTHDR_b_IUMPR_LTPPPerf_PPCTISShrtHi_Enbl))) ||
        (rtb_VariantMerge_For_Variant_Source_V_cm &&
         (KeTHDR_b_IUMPR_LTPPPerf_OCCTOSShrtLo_Enbl))) ||
        (rtb_VariantMerge_For_Variant_Source_Va_g &&
         (KeTHDR_b_IUMPR_LTPPPerf_OCCTOSShrtHi_Enbl))) || ((((((sint32)
        THDR_ac_DW.StatusByte_LIN1_BusOff) & 1) > 0) && ((((uint32)
        THDR_ac_DW.StatusByte_LIN1_BusOff) & 64U) == 0U)) &&
        (KeTHDR_b_IUMPR_LTPPPerf_LINBus1_Enbl))) ||
        (((VariantMerge_For_Variant_Source_Varian_f > 0) &&
          (VariantMerge_For_Variant_Source_Varian_g == 0U)) &&
         (KeTHDR_b_IUMPR_LTPPPerf_LINBus2_Enbl)));
    THDR_ac_B.VariantMerge_For_Variant_Source_Varian_g[3] = (((((((((((((((i > 0)
        && (rowIdx == 0U)) && (KeTHDR_b_IUMPR_LTPP2Perf_PECP_DryRnChk_Enbl)) ||
        (((VariantMerge_For_Variant_Source_Variant_ > 0) &&
          (VariantMerge_For_Variant_Source_Varian_0 == 0U)) &&
         (KeTHDR_b_IUMPR_LTPP2Perf_PECPPerf_Enbl))) ||
        (((VariantMerge_For_Variant_Source_Varian_1 > 0) &&
          (VariantMerge_For_Variant_Source_Varian_2 == 0U)) &&
         (KeTHDR_b_IUMPR_LTPP2Perf_Relay_Enbl))) ||
        (((VariantMerge_For_Variant_Source_Varian_3 > 0) &&
          (VariantMerge_For_Variant_Source_Varian_4 == 0U)) &&
         (KeTHDR_b_IUMPR_LTPP2Perf_PECP2Perf_Enbl))) ||
        (((VariantMerge_For_Variant_Source_Varian_5 > 0) &&
          (VariantMerge_For_Variant_Source_Varian_6 == 0U)) &&
         (KeTHDR_b_IUMPR_LTPP2Perf_PECP2_DryRnChk_Enbl))) ||
        (((VariantMerge_For_Variant_Source_Varian_b > 0) &&
          (VariantMerge_For_Variant_Source_Varian_c == 0U)) &&
         (KeTHDR_b_IUMPR_LTPP2Perf_LTPPTempPerf_Enbl))) ||
        (((VariantMerge_For_Variant_Source_Varian_d > 0) &&
          (VariantMerge_For_Variant_Source_Varian_e == 0U)) &&
         (KeTHDR_b_IUMPR_LTPP2Perf_PECTOSPerf_Enbl))) ||
        (((VariantMerge_For_Variant_Source_Varian_7 > 0) &&
          (VariantMerge_For_Variant_Source_Varian_8 == 0U)) &&
         (KeTHDR_b_IUMPR_LTPP2Perf_PPCTISPerf_Enbl))) ||
        (rtb_VariantMerge_For_Variant_Source_Va_f &&
         (KeTHDR_b_IUMPR_LTPP2Perf_PPCTISShrtLo_Enbl))) ||
        (rtb_VariantMerge_For_Variant_Source_Va_m &&
         (KeTHDR_b_IUMPR_LTPP2Perf_PPCTISShrtHi_Enbl))) ||
        (rtb_VariantMerge_For_Variant_Source_V_cm &&
         (KeTHDR_b_IUMPR_LTPP2Perf_OCCTOSShrtLo_Enbl))) ||
        (rtb_VariantMerge_For_Variant_Source_Va_g &&
         (KeTHDR_b_IUMPR_LTPP2Perf_OCCTOSShrtHi_Enbl))) ||
        (((VariantMerge_For_Variant_Source_Varian_f > 0) &&
          (VariantMerge_For_Variant_Source_Varian_g == 0U)) &&
         (KeTHDR_b_IUMPR_LTPP2Perf_LINBus2_Enbl)));

#else

    /* VariantMerge generated from: '<S13>/Variant Source1' incorporates:
     *  Constant: '<S111>/FALSE Constant'
     *  SignalConversion generated from: '<S13>/Variant Source1'
     */
    THDR_ac_B.VariantMerge_For_Variant_Source_Varian_g[0] = false;
    THDR_ac_B.VariantMerge_For_Variant_Source_Varian_g[1] = false;
    THDR_ac_B.VariantMerge_For_Variant_Source_Varian_g[2] = false;
    THDR_ac_B.VariantMerge_For_Variant_Source_Varian_g[3] = false;

#endif

    /* End of Logic: '<S296>/Logical13' */

    /* Logic: '<S4>/Logical2' incorporates:
     *  Logic: '<S4>/Logical1'
     */
#if (!Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_13) || (!Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_9) || Rte_SysCon_Variant_THDR_19

    /* Logic: '<S4>/Logical1' incorporates:
     *  Constant: '<S14>/Calib'
     */
    rtb_Logical1_fp = ((!rtb_LogicalOperator) || (KeTHDR_b_ThrmlRlyCtrlCkt_D));

#endif

    /* End of Logic: '<S4>/Logical2' */

    /* Logic: '<S4>/Logical3' incorporates:
     *  Inport: '<Root>/VeBSWR_b_VehDynaCMPwrRlyCktHi'
     *  Inport: '<Root>/VeBSWR_b_VehDynaCMPwrRlyCktLo'
     *  Inport: '<Root>/VeBSWR_b_VehDynaCMPwrRlyCktShotoBatt'
     *  Inport: '<Root>/VeBSWR_b_VehDynaCMPwrRlyCktShotoGnd'
     */
#if Rte_SysCon_Variant_THDR_13 && Rte_SysCon_Variant_THDR_3

    (void)Rte_Read_VeBSWR_b_VehDynaCMPwrRlyCktShotoBatt_Value(&rtb_Logical3_bd);
    (void)Rte_Read_VeBSWR_b_VehDynaCMPwrRlyCktShotoGnd_Value(&tmpRead_c);
    (void)Rte_Read_VeBSWR_b_VehDynaCMPwrRlyCktLo_Value(&tmpRead_b);
    (void)Rte_Read_VeBSWR_b_VehDynaCMPwrRlyCktHi_Value(&tmpRead_a);

    /* Logic: '<S4>/Logical3' incorporates:
     *  Inport: '<Root>/VeBSWR_b_VehDynaCMPwrRlyCktHi'
     *  Inport: '<Root>/VeBSWR_b_VehDynaCMPwrRlyCktLo'
     *  Inport: '<Root>/VeBSWR_b_VehDynaCMPwrRlyCktShotoBatt'
     *  Inport: '<Root>/VeBSWR_b_VehDynaCMPwrRlyCktShotoGnd'
     */
    rtb_Logical3_bd = (((tmpRead_a || tmpRead_b) || tmpRead_c) ||
                       rtb_Logical3_bd);

#endif

    /* End of Logic: '<S4>/Logical3' */

    /* SignalConversion generated from: '<S4>/IUMPR_ECHTIS_Perf' */
    rtb_VariantMerge_For_Variant_Source_Va_e =
        THDR_ac_B.VariantMerge_For_Variant_Source_Variant_[2];

    /* SignalConversion generated from: '<S4>/IUMPR_ECH_TempInPerf' */
    rtb_VariantMerge_For_Variant_Source_Va_d =
        THDR_ac_B.VariantMerge_For_Variant_Source_Variant_[1];

    /* SignalConversion generated from: '<S4>/IUMPR_ECTSnsr_Perf' */
    rtb_LogicalOperator = THDR_ac_B.VariantMerge_For_Variant_Source_Variant_[3];

    /* SignalConversion generated from: '<S4>/IUMPR_HTAPTemp_Perf' */
    rtb_LogicalOperator_nyo =
        THDR_ac_B.VariantMerge_For_Variant_Source_Variant_[4];

    /* SignalConversion generated from: '<S4>/IUMPR_LTPP' */
    rtb_LogicalOperator_hrx =
        THDR_ac_B.VariantMerge_For_Variant_Source_Varian_g[2];

    /* SignalConversion generated from: '<S4>/IUMPR_LTPP2' */
    rtb_LogicalOperator_gn1 =
        THDR_ac_B.VariantMerge_For_Variant_Source_Varian_g[3];

    /* SignalConversion generated from: '<S4>/IUMPR_PECTOS' */
    rtb_LogicalOperator1 = THDR_ac_B.VariantMerge_For_Variant_Source_Varian_g[1];

    /* Outputs for Atomic SubSystem: '<S4>/PPCTIS_OT_Diag' */
#if Rte_SysCon_Variant_THDR_9

    /* Outputs for Atomic SubSystem: '<S15>/PPCTIS_OT_Diag' */
    /* SignalConversion generated from: '<S392>/Variant Source' incorporates:
     *  Logic: '<S401>/Logical2'
     *  Logic: '<S401>/Logical3'
     *  Logic: '<S401>/Logical4'
     */
#if Rte_SysCon_Variant_THDR_3

    /* UnitDelay: '<S425>/Unit Delay' incorporates:
     *  Constant: '<S392>/M182'
     */
    rtb_UnitDelay_kj = true;

#else

    /* UnitDelay: '<S425>/Unit Delay' incorporates:
     *  Constant: '<S415>/Calib'
     *  Constant: '<S416>/Calib'
     *  Logic: '<S401>/Logical2'
     *  Logic: '<S401>/Logical3'
     *  Logic: '<S401>/Logical4'
     */
    rtb_UnitDelay_kj = ((rtb_TmpSignalConversionAtVePMTR_b_ThrmlS ||
                         (KeTHDR_b_PPCTISOT_ThrmlRly_OV)) && (rtb_Logical1_fp ||
                         (KeTHDR_b_PPCTISOT_ThrmlRlyCkt_OV)));

#endif

    /* End of SignalConversion generated from: '<S392>/Variant Source' */

    /* Inport: '<Root>/VePMDR_e_PMM_PowerMode' */
    (void)Rte_Read_VePMDR_e_PMM_PowerMode_Value(&tmpRead_9);

    /* Logic: '<S392>/Logical7' incorporates:
     *  Constant: '<S400>/Calib'
     *  Constant: '<S402>/Constant'
     *  Constant: '<S403>/Constant1'
     *  Constant: '<S403>/Constant2'
     *  Constant: '<S404>/Constant1'
     *  Constant: '<S404>/Constant2'
     *  Constant: '<S405>/Constant1'
     *  Constant: '<S405>/Constant2'
     *  Constant: '<S406>/Constant1'
     *  Constant: '<S406>/Constant2'
     *  Constant: '<S407>/Calib'
     *  Constant: '<S408>/Calib'
     *  Constant: '<S409>/Calib'
     *  Constant: '<S410>/Calib'
     *  Constant: '<S411>/Calib'
     *  Constant: '<S412>/Calib'
     *  Constant: '<S413>/Calib'
     *  Constant: '<S414>/Calib'
     *  DataStoreRead: '<S403>/StatusByte_MtrElect_CT_SnsrPerf'
     *  DataStoreRead: '<S404>/StatusByte_MtrElect_CooPumBOvrSpd'
     *  DataStoreRead: '<S405>/StatusByte_MtrElect_CoolPumAOvrSpd'
     *  DataStoreRead: '<S406>/StatusByte_PwrElecPmpPerf'
     *  Inport: '<Root>/VePMDR_e_PMM_PowerMode'
     *  Logic: '<S392>/Logical1'
     *  Logic: '<S399>/Logical1'
     *  Logic: '<S399>/Logical11'
     *  Logic: '<S399>/Logical12'
     *  Logic: '<S399>/Logical13'
     *  Logic: '<S399>/Logical14'
     *  Logic: '<S399>/Logical15'
     *  Logic: '<S399>/Logical17'
     *  Logic: '<S399>/Logical19'
     *  Logic: '<S399>/Logical2'
     *  Logic: '<S399>/Logical3'
     *  Logic: '<S399>/Logical4'
     *  Logic: '<S399>/Logical5'
     *  Logic: '<S399>/Logical6'
     *  Logic: '<S399>/Logical9'
     *  Logic: '<S403>/Logical Operator'
     *  Logic: '<S404>/Logical Operator'
     *  Logic: '<S405>/Logical Operator'
     *  Logic: '<S406>/Logical Operator'
     *  RelationalOperator: '<S399>/Comparison1'
     *  RelationalOperator: '<S399>/Comparison2'
     *  RelationalOperator: '<S403>/Relational Operator1'
     *  RelationalOperator: '<S403>/Relational Operator2'
     *  RelationalOperator: '<S404>/Relational Operator1'
     *  RelationalOperator: '<S404>/Relational Operator2'
     *  RelationalOperator: '<S405>/Relational Operator1'
     *  RelationalOperator: '<S405>/Relational Operator2'
     *  RelationalOperator: '<S406>/Relational Operator1'
     *  RelationalOperator: '<S406>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S403>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S403>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S404>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S404>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S405>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S405>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S406>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S406>/Bitwise Operator2'
     */
    VeTHDR_b_PPCTIS_OT_DiagEn = (((rtb_VeTHDR_b_DiagGlblCndtnsValid_OvrdVal &&
        rtb_UnitDelay_kj) && ((((((((!rtb_TmpSignalConversionAtVeTMIR_b_PsvPmp) ||
        (KeTHDR_b_PPCTISOT_PPCTISFA_OV)) && ((((((sint32)
        THDR_ac_DW.StatusByte_MtrElect_CT_SnsrPerf) & 1) <= 0) || ((((uint32)
        THDR_ac_DW.StatusByte_MtrElect_CT_SnsrPerf) & 64U) != 0U)) ||
        (KeTHDR_b_PPCTISOT_P0A01_OV))) && ((((((sint32)
        THDR_ac_DW.StatusByte_MtrElect_CoolPumAOvrSpd) & 1) <= 0) || ((((uint32)
        THDR_ac_DW.StatusByte_MtrElect_CoolPumAOvrSpd) & 64U) != 0U)) ||
        (KeTHDR_b_PPCTISOT_DryRunDTC_OV))) &&
        ((rtb_TmpSignalConversionAtVeCPDR_b_LTPP_F && (((((sint32)
        THDR_ac_DW.StatusByte_PwrElecPmpPerf) & 1) <= 0) || ((((uint32)
        THDR_ac_DW.StatusByte_PwrElecPmpPerf) & 64U) != 0U))) ||
         (KeTHDR_b_PPCTISOT_LTPP_Perf_OV))) && ((((((sint32)
        THDR_ac_DW.StatusByte_MtrElect_CooPumBOvrSpd) & 1) <= 0) || ((((uint32)
        THDR_ac_DW.StatusByte_MtrElect_CooPumBOvrSpd) & 64U) != 0U)) ||
        (KeTHDR_b_PPCTISOT_LTPP2_DryRun_OV))) &&
        ((rtb_TmpSignalConversionAtVeAATR_T_EstAmb <
          KeTHDR_T_PPCTISOT_AmbTempMax) || (KeTHDR_b_PPCTISOT_AmbTempChck_OV))) &&
        ((((uint32)tmpRead_9) == CePMDR_e_PowerMode_Run) ||
         (KeTHDR_b_PPCTISOT_KeyRun_OV)))) && (KeTHDR_b_PPCTIS_OT_Diag_Enable));

    /* RelationalOperator: '<S397>/Relational Operator3' incorporates:
     *  Constant: '<S397>/Constant3'
     *  DataStoreRead: '<S398>/StatusByte_ClntTempTooHigh'
     *  S-Function (sfix_bitop): '<S397>/Bitwise Operator2'
     */
    rtb_LogicalOperator12_op = ((((uint32)THDR_ac_DW.StatusByte_ClntTempTooHigh)
        & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S397>/EdgeFalling1' */
    /* Logic: '<S397>/Logical Operator' incorporates:
     *  Logic: '<S426>/OR1'
     */
    rtb_LogicalOperator_mxy = !rtb_LogicalOperator12_op;

    /* End of Outputs for SubSystem: '<S397>/EdgeFalling1' */

    /* Logic: '<S397>/Logical1' incorporates:
     *  Constant: '<S396>/Calib'
     *  Constant: '<S397>/Constant1'
     *  DataStoreRead: '<S398>/StatusByte_ClntTempTooHigh'
     *  Logic: '<S397>/Logical Operator'
     *  Logic: '<S397>/Logical10'
     *  Logic: '<S397>/Logical12'
     *  RelationalOperator: '<S397>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S397>/Bitwise Operator3'
     */
    rtb_UnitDelay_kj = ((VeTHDR_b_PPCTIS_OT_DiagEn) &&
                        ((!KeTHDR_b_ClntTempTooHigh_LtchEnbl) || (((((uint32)
        THDR_ac_DW.StatusByte_ClntTempTooHigh) & 1U) == 0U) ||
                          rtb_LogicalOperator_mxy)));

    /* Outputs for Atomic SubSystem: '<S393>/Hysteresis2' */
    /* Switch: '<S417>/Switch1' incorporates:
     *  Constant: '<S417>/Constant Value'
     *  Constant: '<S418>/Calib'
     *  Constant: '<S419>/Calib'
     *  RelationalOperator: '<S417>/Greater  Than'
     *  RelationalOperator: '<S417>/Greater  Than1'
     *  UnitDelay: '<S417>/Unit Delay'
     */
    if (THDR_ac_B.TmpSignalConversionAtVeTMIR_T_PsvPmpClnt >
            KeTHDR_T_PPCTIS_OT_DiagThrshHi)
    {
        THDR_ac_DW.UnitDelay_DSTATE_hd = true;
    }
    else
    {
        THDR_ac_DW.UnitDelay_DSTATE_hd =
            ((THDR_ac_B.TmpSignalConversionAtVeTMIR_T_PsvPmpClnt >=
              KeTHDR_T_PPCTIS_OT_DiagThrshLo) && (THDR_ac_DW.UnitDelay_DSTATE_hd));
    }

    /* End of Switch: '<S417>/Switch1' */
    /* End of Outputs for SubSystem: '<S393>/Hysteresis2' */

    /* Outputs for Atomic SubSystem: '<S393>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S423>/EdgeFalling1' */
    /* Logic: '<S424>/AND' incorporates:
     *  Logic: '<S424>/OR1'
     *  UnitDelay: '<S417>/Unit Delay'
     *  UnitDelay: '<S424>/Unit Delay'
     */
    rtb_LogicalOperator_hi = ((!THDR_ac_DW.UnitDelay_DSTATE_hd) &&
        (THDR_ac_DW.UnitDelay_DSTATE_fs));

    /* Update for UnitDelay: '<S424>/Unit Delay' incorporates:
     *  UnitDelay: '<S417>/Unit Delay'
     */
    THDR_ac_DW.UnitDelay_DSTATE_fs = THDR_ac_DW.UnitDelay_DSTATE_hd;

    /* End of Outputs for SubSystem: '<S423>/EdgeFalling1' */

    /* Switch: '<S423>/Switch' incorporates:
     *  Constant: '<S421>/Calib'
     *  Constant: '<S422>/Calib'
     *  Constant: '<S423>/Constant Value1'
     *  MinMax: '<S423>/Minimum'
     *  Sum: '<S423>/Summation'
     *  UnitDelay: '<S423>/Unit Delay'
     */
    if (rtb_LogicalOperator_hi)
    {
        THDR_ac_DW.UnitDelay_DSTATE_bw = KeTHDR_t_PPCTISOT_TurnOffDelay;
    }
    else
    {
        THDR_ac_DW.UnitDelay_DSTATE_bw = fmaxf(THDR_ac_DW.UnitDelay_DSTATE_bw -
            KeTHDR_t_PPCTISOT_Diag, 0.0F);
    }

    /* End of Switch: '<S423>/Switch' */

    /* Logic: '<S393>/Logical7' incorporates:
     *  Constant: '<S420>/Calib'
     *  Constant: '<S423>/Constant Value2'
     *  Logic: '<S423>/AND'
     *  RelationalOperator: '<S423>/Greater  Than'
     *  UnitDelay: '<S417>/Unit Delay'
     *  UnitDelay: '<S423>/Unit Delay'
     */
    VeTHDR_b_PPCTIS_OT_Flt = (((THDR_ac_DW.UnitDelay_DSTATE_hd) ||
        (THDR_ac_DW.UnitDelay_DSTATE_bw > 0.0F)) && (KeTHDR_b_PPCTISOT_Flt_En));

    /* End of Outputs for SubSystem: '<S393>/Turn Off Delay Time' */

    /* Outputs for Atomic SubSystem: '<S397>/EdgeFalling1' */
    /* Logic: '<S426>/AND' incorporates:
     *  UnitDelay: '<S426>/Unit Delay'
     */
    rtb_LogicalOperator_mxy = (rtb_LogicalOperator_mxy &&
        (THDR_ac_DW.UnitDelay_DSTATE_ca));

    /* Update for UnitDelay: '<S426>/Unit Delay' */
    THDR_ac_DW.UnitDelay_DSTATE_ca = rtb_LogicalOperator12_op;

    /* End of Outputs for SubSystem: '<S397>/EdgeFalling1' */

    /* Logic: '<S397>/Logical5' */
    rtb_LogicalOperator12_op = ((VeTHDR_b_ResetCnts) || rtb_LogicalOperator_mxy);

    /* Outputs for Atomic SubSystem: '<S425>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S425>/Counter Reset  Enabled ' */
    /* Switch: '<S432>/Switch1' incorporates:
     *  Constant: '<S432>/Constant Value2'
     *  Constant: '<S433>/Constant Value2'
     *  Logic: '<S425>/Fail Counter Reset'
     *  Logic: '<S425>/NOT6'
     *  Switch: '<S432>/Switch2'
     *  Switch: '<S433>/Switch1'
     *  UnitDelay: '<S425>/Unit Delay'
     *  UnitDelay: '<S425>/Unit Delay1'
     *  UnitDelay: '<S432>/Unit Delay'
     *  UnitDelay: '<S433>/Unit Delay'
     */
    if ((rtb_LogicalOperator12_op || (THDR_ac_DW.UnitDelay_DSTATE_p1a)) ||
            (THDR_ac_DW.UnitDelay1_DSTATE_o))
    {
        THDR_ac_DW.UnitDelay_DSTATE_et = 0U;
        THDR_ac_DW.UnitDelay_DSTATE_en = 0U;
    }
    else
    {
        if (rtb_UnitDelay_kj && (VeTHDR_b_PPCTIS_OT_Flt))
        {
            /* UnitDelay: '<S432>/Unit Delay' incorporates:
             *  Constant: '<S432>/Constant Value1'
             *  Sum: '<S432>/Subtraction'
             *  Switch: '<S432>/Switch2'
             */
            THDR_ac_DW.UnitDelay_DSTATE_et = (uint16)(((uint32)
                THDR_ac_DW.UnitDelay_DSTATE_et) + 1U);
        }

        /* Switch: '<S433>/Switch2' */
        if (rtb_UnitDelay_kj)
        {
            /* UnitDelay: '<S433>/Unit Delay' incorporates:
             *  Constant: '<S433>/Constant Value1'
             *  Sum: '<S433>/Subtraction'
             *  Switch: '<S433>/Switch2'
             */
            THDR_ac_DW.UnitDelay_DSTATE_en = (uint16)(((uint32)
                THDR_ac_DW.UnitDelay_DSTATE_en) + 1U);
        }

        /* End of Switch: '<S433>/Switch2' */
    }

    /* End of Switch: '<S432>/Switch1' */
    /* End of Outputs for SubSystem: '<S425>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S425>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S425>/Greater Than or Equal ' incorporates:
     *  Constant: '<S394>/Calib'
     *  UnitDelay: '<S432>/Unit Delay'
     */
    THDR_ac_DW.UnitDelay1_DSTATE_o = (THDR_ac_DW.UnitDelay_DSTATE_et >=
        KeTHDR_Cnt_PPCTIS_OT_FailCnt);

    /* Logic: '<S425>/NOT5' incorporates:
     *  Constant: '<S395>/Calib'
     *  Logic: '<S425>/NOT3'
     *  RelationalOperator: '<S425>/Less Than  or Equal'
     *  UnitDelay: '<S433>/Unit Delay'
     */
    THDR_ac_DW.UnitDelay_DSTATE_p1a = ((THDR_ac_DW.UnitDelay_DSTATE_en >=
        KeTHDR_Cnt_PPCTIS_OT_SmpCnt) && (!THDR_ac_DW.UnitDelay1_DSTATE_o));

    /* Switch: '<S438>/Switch1' incorporates:
     *  Constant: '<S431>/Constant Value'
     *  DataStoreWrite: '<S390>/Data Store Write3'
     *  Switch: '<S437>/Switch1'
     */
    if (VeTHDR_b_ResetFOMs)
    {
        THDR_ac_DW.NeTHDR_Cnt_PPCTIS_OT_MSOP = 0U;
    }
    else
    {
        if (THDR_ac_DW.UnitDelay_DSTATE_p1a)
        {
            /* MinMax: '<S431>/Minimum2' incorporates:
             *  DataStoreRead: '<S390>/Data Store Read1'
             *  Switch: '<S437>/Switch1'
             *  UnitDelay: '<S432>/Unit Delay'
             */
            if (THDR_ac_DW.UnitDelay_DSTATE_et >
                    THDR_ac_DW.NeTHDR_Cnt_PPCTIS_OT_MSOP)
            {
                /* DataStoreWrite: '<S390>/Data Store Write3' incorporates:
                 *  Switch: '<S437>/Switch1'
                 */
                THDR_ac_DW.NeTHDR_Cnt_PPCTIS_OT_MSOP =
                    THDR_ac_DW.UnitDelay_DSTATE_et;
            }

            /* End of MinMax: '<S431>/Minimum2' */
        }
    }

    /* End of Switch: '<S438>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S397>/Fail' */
    THDR_ac_Fail(THDR_ac_DW.UnitDelay1_DSTATE_o,
                 &THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultSt_f);

    /* End of Outputs for SubSystem: '<S397>/Fail' */

    /* Outputs for Enabled SubSystem: '<S397>/Init' */
    THDR_ac_Init_l(rtb_LogicalOperator12_op,
                   &THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultSt_f);

    /* End of Outputs for SubSystem: '<S397>/Init' */

    /* Outputs for Enabled SubSystem: '<S397>/Pass' */
    THDR_ac_Pass(THDR_ac_DW.UnitDelay_DSTATE_p1a,
                 &THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultSt_f);

    /* End of Outputs for SubSystem: '<S397>/Pass' */

    /* VariantMerge generated from: '<S15>/VeTHDR_b_PPCTIS_OT_FltDtct_B4D' incorporates:
     *  Constant: '<S427>/Constant'
     *  RelationalOperator: '<S397>/Relational Operator'
     *  VariantMerge generated from: '<S15>/VeTHDR_e_FaultSts_ClntTempTooHigh'
     */
    VeTHDR_b_PPCTIS_OT_FltDtct_B4D = (((uint32)
        THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultSt_f) == CeDFIB_e_Fail);

    /* End of Outputs for SubSystem: '<S15>/PPCTIS_OT_Diag' */
    /* End of Outputs for SubSystem: '<S4>/PPCTIS_OT_Diag' */
#else

    /* Outputs for Atomic SubSystem: '<S15>/PPCTIS_OT_Stub' */
    /* VariantMerge generated from: '<S15>/VeTHDR_e_FaultSts_ClntTempTooHigh' incorporates:
     *  Constant: '<S439>/Constant'
     */
    THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultSt_f = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S15>/VeTHDR_b_PPCTIS_OT_FltDtct_B4D' incorporates:
     *  Constant: '<S391>/FALSE Constant'
     */
    VeTHDR_b_PPCTIS_OT_FltDtct_B4D = false;

    /* End of Outputs for SubSystem: '<S15>/PPCTIS_OT_Stub' */
#endif

    /* S-Function (sfix_bitop): '<S444>/Bitwise Operator1' incorporates:
     *  Logic: '<S444>/Logical Operator'
     *  Logic: '<S445>/Logical Operator'
     *  RelationalOperator: '<S444>/Relational Operator1'
     *  RelationalOperator: '<S444>/Relational Operator2'
     *  RelationalOperator: '<S445>/Relational Operator1'
     *  RelationalOperator: '<S445>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S444>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S445>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S445>/Bitwise Operator2'
     *  SignalConversion generated from: '<S18>/Variant Source6'
     *  SignalConversion generated from: '<S18>/Variant Source7'
     */
#if !Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_7 && Rte_SysCon_Variant_THDR_9

    /* VariantMerge generated from: '<S18>/Variant Source6' incorporates:
     *  Constant: '<S444>/Constant1'
     *  Constant: '<S444>/Constant2'
     *  DataStoreRead: '<S444>/StatusByte_MtrElect_CT2_SnsrBCktHi'
     */
    rtb_VariantMerge_For_Variant_Source_V_hq = (((((sint32)
        THDR_ac_DW.StatusByte_MtrElect_CT2_SnsrBCktHi) & 1) > 0) && ((((uint32)
        THDR_ac_DW.StatusByte_MtrElect_CT2_SnsrBCktHi) & 64U) == 0U));

    /* VariantMerge generated from: '<S18>/Variant Source7' incorporates:
     *  Constant: '<S445>/Constant1'
     *  Constant: '<S445>/Constant2'
     *  DataStoreRead: '<S445>/StatusByte_MtrElect_CT2_SnsrBCktLo'
     */
    rtb_VariantMerge_For_Variant_Source_V_j2 = (((((sint32)
        THDR_ac_DW.StatusByte_MtrElect_CT2_SnsrBCktLo) & 1) > 0) && ((((uint32)
        THDR_ac_DW.StatusByte_MtrElect_CT2_SnsrBCktLo) & 64U) == 0U));

#elif Rte_SysCon_Variant_THDR_3 && Rte_SysCon_Variant_THDR_9

    /* VariantMerge generated from: '<S18>/Variant Source6' incorporates:
     *  Inport: '<Root>/VeBSWR_b_MtrElect_CT2_SnsrBCktHi'
     */
    (void)Rte_Read_VeBSWR_b_MtrElect_CT2_SnsrBCktHi_Value
        (&rtb_VariantMerge_For_Variant_Source_V_hq);

    /* VariantMerge generated from: '<S18>/Variant Source7' incorporates:
     *  Inport: '<Root>/VeBSWR_b_MtrElect_CT2_SnsrBCktLo'
     */
    (void)Rte_Read_VeBSWR_b_MtrElect_CT2_SnsrBCktLo_Value
        (&rtb_VariantMerge_For_Variant_Source_V_j2);

#endif

    /* End of S-Function (sfix_bitop): '<S444>/Bitwise Operator1' */
#if Rte_SysCon_Variant_THDR_19

    /* Outputs for Atomic SubSystem: '<S19>/AcLoopDiagnostics' */
    /* Outputs for Atomic SubSystem: '<S448>/If_AcLoopDiagnostics' */
    /* Logic: '<S525>/Logical Operator' */
    VeTHDR_b_ACL_CommonEnbl = ((rtb_VeTHDR_b_DiagGlblCndtnsValid_OvrdVal &&
        rtb_Logical1_fp) && rtb_TmpSignalConversionAtVePMTR_b_ThrmlS);

    /* UnitDelay: '<S484>/Unit Delay1' incorporates:
     *  Constant: '<S561>/Constant1'
     *  Constant: '<S561>/Constant2'
     *  Constant: '<S562>/Constant1'
     *  Constant: '<S562>/Constant2'
     *  DataStoreRead: '<S561>/StatusByte_LIN1_BusOff'
     *  DataStoreRead: '<S562>/StatusByte_LostCommACRefrigExpVlvActC'
     *  Logic: '<S526>/Logical Operator5'
     *  Logic: '<S526>/Logical Operator6'
     *  Logic: '<S526>/Logical Operator7'
     *  Logic: '<S561>/Logical Operator'
     *  Logic: '<S562>/Logical Operator'
     *  RelationalOperator: '<S561>/Relational Operator1'
     *  RelationalOperator: '<S561>/Relational Operator2'
     *  RelationalOperator: '<S562>/Relational Operator1'
     *  RelationalOperator: '<S562>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S561>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S561>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S562>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S562>/Bitwise Operator2'
     */
    rtb_LogicalOperator12_op = (((((((sint32)THDR_ac_DW.StatusByte_LIN1_BusOff)
        & 1) <= 0) || ((((uint32)THDR_ac_DW.StatusByte_LIN1_BusOff) & 64U) != 0U))
        && (((((sint32)THDR_ac_DW.StatusByte_LostCommACRefrigExpVlvActC) & 1) <=
             0) || ((((uint32)THDR_ac_DW.StatusByte_LostCommACRefrigExpVlvActC)
                     & 64U) != 0U))) && (VeTHDR_b_ACL_CommonEnbl));

    /* Logic: '<S526>/Logical Operator3' */
    rtb_UnitDelay_kj = (rtb_TmpSignalConversionAtVeTAIR_b_EEXV_R &&
                        rtb_LogicalOperator12_op);

    /* Outputs for Atomic SubSystem: '<S526>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S563>/EdgeRising' */
    /* Logic: '<S564>/AND' incorporates:
     *  Logic: '<S564>/OR1'
     *  UnitDelay: '<S564>/Unit Delay'
     */
    rtb_LogicalOperator_mxy = (rtb_UnitDelay_kj &&
        (!THDR_ac_DW.UnitDelay_DSTATE_co));

    /* Update for UnitDelay: '<S564>/Unit Delay' */
    THDR_ac_DW.UnitDelay_DSTATE_co = rtb_UnitDelay_kj;

    /* End of Outputs for SubSystem: '<S563>/EdgeRising' */

    /* Switch: '<S563>/Switch1' incorporates:
     *  Constant: '<S12>/Calib'
     *  Constant: '<S560>/Calib'
     *  Constant: '<S563>/Constant Value1'
     *  Logic: '<S563>/OR'
     *  Logic: '<S563>/OR1'
     *  MinMax: '<S563>/Minimum'
     *  Sum: '<S563>/Summation'
     *  UnitDelay: '<S563>/Unit Delay'
     */
    if ((!rtb_UnitDelay_kj) || rtb_LogicalOperator_mxy)
    {
        THDR_ac_DW.UnitDelay_DSTATE_m = 0.0F;
    }
    else
    {
        THDR_ac_DW.UnitDelay_DSTATE_m = fminf(KeTHDR_t_EEXV_OutTemp_FA_DbncTime,
            HeTHDR_t_MedTEH + THDR_ac_DW.UnitDelay_DSTATE_m);
    }

    /* End of Switch: '<S563>/Switch1' */
    /* End of Outputs for SubSystem: '<S526>/Turn On Delay Time' */
    /* End of Outputs for SubSystem: '<S448>/If_AcLoopDiagnostics' */

    /* Inport: '<Root>/VeTAIR_e_CompStat' */
    (void)Rte_Read_VeTAIR_e_CompStat_Value(&tmpRead_h);

    /* Outputs for Atomic SubSystem: '<S448>/If_AcLoopDiagnostics' */
    /* Outputs for Atomic SubSystem: '<S526>/Turn On Delay Time' */
    /* Logic: '<S563>/AND' incorporates:
     *  Constant: '<S560>/Calib'
     *  RelationalOperator: '<S563>/Greater  Than'
     *  UnitDelay: '<S563>/Unit Delay'
     */
    VeTHDR_b_EEXV_OutTemp_FA_Cnfrm = (rtb_UnitDelay_kj &&
        (THDR_ac_DW.UnitDelay_DSTATE_m >= KeTHDR_t_EEXV_OutTemp_FA_DbncTime));

    /* End of Outputs for SubSystem: '<S526>/Turn On Delay Time' */

    /* S-Function (sfix_bitop): '<S571>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S571>/StatusByte_LIN2_BusOff'
     *  S-Function (sfix_bitop): '<S546>/Bitwise Operator2'
     */
    i = ((sint32)THDR_ac_DW.StatusByte_LIN2_BusOff) & 1;

    /* S-Function (sfix_bitop): '<S571>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S571>/StatusByte_LIN2_BusOff'
     *  S-Function (sfix_bitop): '<S546>/Bitwise Operator1'
     */
    rowIdx = ((uint32)THDR_ac_DW.StatusByte_LIN2_BusOff) & 64U;

    /* UnitDelay: '<S504>/Unit Delay1' incorporates:
     *  Constant: '<S571>/Constant1'
     *  Constant: '<S571>/Constant2'
     *  Constant: '<S572>/Constant1'
     *  Constant: '<S572>/Constant2'
     *  DataStoreRead: '<S572>/StatusByte_LostCommACRefrigExpVlvActD'
     *  Logic: '<S528>/Logical Operator5'
     *  Logic: '<S528>/Logical Operator6'
     *  Logic: '<S528>/Logical Operator7'
     *  Logic: '<S571>/Logical Operator'
     *  Logic: '<S572>/Logical Operator'
     *  RelationalOperator: '<S571>/Relational Operator1'
     *  RelationalOperator: '<S571>/Relational Operator2'
     *  RelationalOperator: '<S572>/Relational Operator1'
     *  RelationalOperator: '<S572>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S571>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S571>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S572>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S572>/Bitwise Operator2'
     */
    rtb_UnitDelay_kj = ((((i <= 0) || (rowIdx != 0U)) && (((((sint32)
        THDR_ac_DW.StatusByte_LostCommACRefrigExpVlvActD) & 1) <= 0) ||
                          ((((uint32)
        THDR_ac_DW.StatusByte_LostCommACRefrigExpVlvActD) & 64U) != 0U))) &&
                        (VeTHDR_b_ACL_CommonEnbl));

    /* Outputs for Atomic SubSystem: '<S529>/Hysteresis' */
    /* Switch: '<S535>/Switch1' incorporates:
     *  Constant: '<S535>/Constant Value'
     *  Constant: '<S539>/Calib'
     *  Constant: '<S540>/Calib'
     *  RelationalOperator: '<S535>/Greater  Than'
     *  RelationalOperator: '<S535>/Greater  Than1'
     *  UnitDelay: '<S535>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeTAIR_n_CompSp >
            KeTHDR_n_EAC_SpdThrshld_RSP_Diag)
    {
        THDR_ac_DW.UnitDelay_DSTATE_p4 = true;
    }
    else
    {
        THDR_ac_DW.UnitDelay_DSTATE_p4 =
            ((rtb_TmpSignalConversionAtVeTAIR_n_CompSp >=
              KeTHDR_n_EAC_SpdThrshld_LSP_Diag) &&
             (THDR_ac_DW.UnitDelay_DSTATE_p4));
    }

    /* End of Switch: '<S535>/Switch1' */
    /* End of Outputs for SubSystem: '<S529>/Hysteresis' */

    /* Switch: '<S529>/Switch1' incorporates:
     *  Constant: '<S12>/Calib'
     *  Constant: '<S529>/Constant Value1'
     *  Constant: '<S541>/Calib'
     *  RelationalOperator: '<S529>/GreaterThanOrEqual'
     *  Sum: '<S529>/Add'
     *  UnitDelay: '<S529>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeTAIR_n_CompSp >= KeTHDR_n_EAC_SpdThrshld_Run)
    {
        THDR_ac_DW.UnitDelay_DSTATE_k = 0.0F;
    }
    else
    {
        THDR_ac_DW.UnitDelay_DSTATE_k += HeTHDR_t_MedTEH;
    }

    /* End of Switch: '<S529>/Switch1' */

    /* Logic: '<S529>/Logical Operator6' incorporates:
     *  Constant: '<S545>/Calib'
     *  RelationalOperator: '<S529>/GreaterThan'
     *  UnitDelay: '<S529>/Unit Delay'
     */
    VeTHDR_b_EAC_MinOnTimeEnbl = (THDR_ac_DW.UnitDelay_DSTATE_k <=
        KeTHDR_t_EAC_OffTimeCnt);

    /* Outputs for Atomic SubSystem: '<S529>/Digital Lowpass Reset Enabled' */
    /* Switch: '<S532>/Switch1' incorporates:
     *  Constant: '<S529>/LPF_InitValue'
     */
    VeTHDR_dn_EAC_AccelFiltered = 0.0F;

    /* End of Outputs for SubSystem: '<S529>/Digital Lowpass Reset Enabled' */

    /* RelationalOperator: '<S529>/GreaterThanOrEqual1' incorporates:
     *  Constant: '<S537>/Calib'
     */
    rtb_LogicalOperator_mxy = (VeTHDR_dn_EAC_AccelFiltered >=
        KeTHDR_dn_EAC_CompAccelThr);

    /* Outputs for Atomic SubSystem: '<S529>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S548>/EdgeFalling' */
    /* Logic: '<S549>/AND' incorporates:
     *  Logic: '<S549>/OR1'
     *  UnitDelay: '<S549>/Unit Delay'
     */
    rtb_LogicalOperator_hi = ((!rtb_LogicalOperator_mxy) &&
        (THDR_ac_DW.UnitDelay_DSTATE_ih));

    /* Update for UnitDelay: '<S549>/Unit Delay' */
    THDR_ac_DW.UnitDelay_DSTATE_ih = rtb_LogicalOperator_mxy;

    /* End of Outputs for SubSystem: '<S548>/EdgeFalling' */

    /* Switch: '<S548>/Switch' incorporates:
     *  Constant: '<S12>/Calib'
     *  Constant: '<S542>/Calib'
     *  Constant: '<S548>/Constant Value1'
     *  MinMax: '<S548>/Minimum'
     *  Sum: '<S548>/Summation'
     *  UnitDelay: '<S548>/Unit Delay'
     */
    if (rtb_LogicalOperator_hi)
    {
        THDR_ac_DW.UnitDelay_DSTATE_kw = KeTHDR_t_EAC_CompAC_Time;
    }
    else
    {
        THDR_ac_DW.UnitDelay_DSTATE_kw = fmaxf(THDR_ac_DW.UnitDelay_DSTATE_kw -
            HeTHDR_t_MedTEH, 0.0F);
    }

    /* End of Switch: '<S548>/Switch' */
    /* End of Outputs for SubSystem: '<S529>/Turn Off Delay Time' */
    /* End of Outputs for SubSystem: '<S448>/If_AcLoopDiagnostics' */

    /* Inport: '<Root>/VePLTR_b_HCPOffTimeFA' */
    (void)Rte_Read_VePLTR_b_HCPOffTimeFA_Value(&tmpRead_j);

    /* Inport: '<Root>/VePLTR_t_HCPOffTime' */
    (void)Rte_Read_VePLTR_t_HCPOffTime_Value(&tmpRead_i);

    /* Inport: '<Root>/VeTAIR_b_WinshldDfrst' */
    (void)Rte_Read_VeTAIR_b_WinshldDfrst_Value(&rtb_AND_c0);

    /* Outputs for Atomic SubSystem: '<S448>/If_AcLoopDiagnostics' */
    /* Logic: '<S530>/Logical Operator3' incorporates:
     *  Constant: '<S554>/Calib'
     *  Logic: '<S530>/Logical Operator4'
     *  RelationalOperator: '<S530>/GreaterThan'
     */
    rtb_LogicalOperator_h1 = ((tmpRead_i > KeTHDR_t_VehicleSoakTime) &&
        (!tmpRead_j));

    /* Outputs for Atomic SubSystem: '<S530>/EdgeRising' */
    /* Logic: '<S550>/AND' incorporates:
     *  Logic: '<S550>/OR1'
     *  UnitDelay: '<S550>/Unit Delay'
     */
    rtb_LogicalOperator_hi = (rtb_LogicalOperator_h1 &&
        (!THDR_ac_DW.UnitDelay_DSTATE_lu));

    /* Update for UnitDelay: '<S550>/Unit Delay' */
    THDR_ac_DW.UnitDelay_DSTATE_lu = rtb_LogicalOperator_h1;

    /* End of Outputs for SubSystem: '<S530>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S530>/Turn Off Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S555>/EdgeFalling' */
    /* Logic: '<S556>/AND' incorporates:
     *  Logic: '<S556>/OR1'
     *  UnitDelay: '<S556>/Unit Delay'
     */
    rtb_LogicalOperator_h1 = ((!rtb_LogicalOperator_hi) &&
        (THDR_ac_DW.UnitDelay_DSTATE_gm));

    /* Update for UnitDelay: '<S556>/Unit Delay' */
    THDR_ac_DW.UnitDelay_DSTATE_gm = rtb_LogicalOperator_hi;

    /* End of Outputs for SubSystem: '<S555>/EdgeFalling' */

    /* Switch: '<S555>/Switch' incorporates:
     *  Constant: '<S551>/Calib'
     *  Sum: '<S555>/Summation'
     *  UnitDelay: '<S555>/Unit Delay'
     */
    if (rtb_LogicalOperator_h1)
    {
        THDR_ac_DW.UnitDelay_DSTATE_i1 = KeTHDR_Cnt_HoldVehicle_Soak;
    }
    else
    {
        /* Sum: '<S555>/Summation' incorporates:
         *  Constant: '<S555>/Constant Value'
         *  UnitDelay: '<S555>/Unit Delay'
         */
        VariantMerge_For_Variant_Source_Variant_ = ((sint32)
            THDR_ac_DW.UnitDelay_DSTATE_i1) - 1;
        if ((((sint32)THDR_ac_DW.UnitDelay_DSTATE_i1) - 1) < 0)
        {
            VariantMerge_For_Variant_Source_Variant_ = 0;
        }

        THDR_ac_DW.UnitDelay_DSTATE_i1 = (uint16)
            VariantMerge_For_Variant_Source_Variant_;
    }

    /* End of Switch: '<S555>/Switch' */
    /* End of Outputs for SubSystem: '<S530>/Turn Off Delay Sample' */
    /* End of Outputs for SubSystem: '<S448>/If_AcLoopDiagnostics' */

    /* Inport: '<Root>/VeTAIR_b_OEXV_InTempSens_FA' */
    (void)Rte_Read_VeTAIR_b_OEXV_InTempSens_FA_Value(&tmpRead_g);

    /* Outputs for Atomic SubSystem: '<S448>/If_AcLoopDiagnostics' */
    /* Outputs for Atomic SubSystem: '<S529>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S530>/Turn Off Delay Sample' */
    /* Logic: '<S525>/Logical Operator1' incorporates:
     *  Abs: '<S529>/Abs'
     *  Constant: '<S533>/Constant1'
     *  Constant: '<S533>/Constant2'
     *  Constant: '<S534>/Constant'
     *  Constant: '<S536>/Calib'
     *  Constant: '<S538>/Calib'
     *  Constant: '<S546>/Constant1'
     *  Constant: '<S546>/Constant2'
     *  Constant: '<S547>/Constant1'
     *  Constant: '<S547>/Constant2'
     *  Constant: '<S548>/Constant Value2'
     *  Constant: '<S552>/Calib'
     *  Constant: '<S553>/Calib'
     *  Constant: '<S555>/Constant Value2'
     *  DataStoreRead: '<S533>/StatusByte_EACPerf'
     *  DataStoreRead: '<S547>/StatusByte_LostCommEAC'
     *  Inport: '<Root>/VeTAIR_e_CompStat'
     *  Logic: '<S529>/Logical Operator'
     *  Logic: '<S529>/Logical Operator1'
     *  Logic: '<S529>/Logical Operator2'
     *  Logic: '<S529>/Logical Operator3'
     *  Logic: '<S529>/Logical Operator4'
     *  Logic: '<S529>/Logical Operator5'
     *  Logic: '<S530>/Logical Operator'
     *  Logic: '<S530>/Logical Operator1'
     *  Logic: '<S530>/Logical Operator2'
     *  Logic: '<S533>/Logical Operator'
     *  Logic: '<S546>/Logical Operator'
     *  Logic: '<S547>/Logical Operator'
     *  Logic: '<S548>/AND'
     *  Logic: '<S555>/AND'
     *  RelationalOperator: '<S529>/Equal'
     *  RelationalOperator: '<S529>/GreaterThanOrEqual2'
     *  RelationalOperator: '<S533>/Relational Operator1'
     *  RelationalOperator: '<S533>/Relational Operator2'
     *  RelationalOperator: '<S546>/Relational Operator1'
     *  RelationalOperator: '<S546>/Relational Operator2'
     *  RelationalOperator: '<S547>/Relational Operator1'
     *  RelationalOperator: '<S547>/Relational Operator2'
     *  RelationalOperator: '<S548>/Greater  Than'
     *  RelationalOperator: '<S555>/Greater  Than'
     *  S-Function (sfix_bitop): '<S533>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S533>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S547>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S547>/Bitwise Operator2'
     *  UnitDelay: '<S535>/Unit Delay'
     *  UnitDelay: '<S548>/Unit Delay'
     *  UnitDelay: '<S555>/Unit Delay'
     */
    VeTHDR_b_ACL_CommonPerfEnbl = (((((((((((((((sint32)
        THDR_ac_DW.StatusByte_LostCommEAC) & 1) <= 0) || ((((uint32)
        THDR_ac_DW.StatusByte_LostCommEAC) & 64U) != 0U)) && ((i <= 0) ||
        (rowIdx != 0U))) && (((uint32)tmpRead_h) != CeTAIR_e_Degraded)) &&
        (((((sint32)THDR_ac_DW.StatusByte_EACPerf) & 1) <= 0) || ((((uint32)
        THDR_ac_DW.StatusByte_EACPerf) & 64U) != 0U))) &&
        (THDR_ac_DW.UnitDelay_DSTATE_p4)) && (VeTHDR_b_EAC_MinOnTimeEnbl)) &&
        (rtb_LogicalOperator_mxy || (THDR_ac_DW.UnitDelay_DSTATE_kw > 0.0F))) &&
        (fabsf(VeTHDR_dn_EAC_AccelFiltered) >= KeTHDR_dn_EAC_CompMinAccel)) ||
        (KeTHDR_b_ACL_EAC_Ovrd)) && ((!rtb_AND_c0) || (KeTHDR_b_ACL_Dfrst_Ovrd)))
        && ((rtb_LogicalOperator_hi || (((sint32)THDR_ac_DW.UnitDelay_DSTATE_i1)
        > 0)) || (KeTHDR_b_ACL_VehicleSoakTime_Ovrd)));

    /* End of Outputs for SubSystem: '<S530>/Turn Off Delay Sample' */
    /* End of Outputs for SubSystem: '<S529>/Turn Off Delay Time' */

    /* Logic: '<S528>/Logical Operator' incorporates:
     *  Constant: '<S567>/Constant1'
     *  Constant: '<S567>/Constant2'
     *  Constant: '<S568>/Constant1'
     *  Constant: '<S568>/Constant2'
     *  DataStoreRead: '<S567>/StatusByte_AC_RefrigExpVlvActD_CntrlCktPerf'
     *  DataStoreRead: '<S568>/StatusByte_AC_RefrigTempSnsrDCkt'
     *  Logic: '<S528>/Logical Operator8'
     *  Logic: '<S528>/Logical Operator9'
     *  Logic: '<S567>/Logical Operator'
     *  Logic: '<S568>/Logical Operator'
     *  RelationalOperator: '<S567>/Relational Operator1'
     *  RelationalOperator: '<S567>/Relational Operator2'
     *  RelationalOperator: '<S568>/Relational Operator1'
     *  RelationalOperator: '<S568>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S567>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S567>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S568>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S568>/Bitwise Operator2'
     */
    VeTHDR_b_OEXV_OutTempRatEnbl = (((rtb_UnitDelay_kj &&
        (VeTHDR_b_ACL_CommonPerfEnbl)) && (((((sint32)
        THDR_ac_DW.StatusByte_AC_RefrigExpVlvActD_CntrlCktP) & 1) <= 0) ||
        ((((uint32)THDR_ac_DW.StatusByte_AC_RefrigExpVlvActD_CntrlCktP) & 64U)
         != 0U))) && (((((sint32)THDR_ac_DW.StatusByte_AC_RefrigTempSnsrDCkt) &
                        1) <= 0) || ((((uint32)
        THDR_ac_DW.StatusByte_AC_RefrigTempSnsrDCkt) & 64U) != 0U)));

    /* S-Function (sfix_bitop): '<S579>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S579>/StatusByte_AC_RefrigTempSnsr4CktPerf'
     *  S-Function (sfix_bitop): '<S502>/Bitwise Operator2'
     */
    tmpRead_i = ((uint32)THDR_ac_DW.StatusByte_AC_RefrigTempSnsr4CktPerf) & 64U;

    /* Logic: '<S524>/Logical Operator3' incorporates:
     *  Constant: '<S579>/Constant1'
     *  Constant: '<S579>/Constant2'
     *  DataStoreRead: '<S579>/StatusByte_AC_RefrigTempSnsr4CktPerf'
     *  Logic: '<S524>/Logical Operator12'
     *  Logic: '<S579>/Logical Operator'
     *  RelationalOperator: '<S579>/Relational Operator1'
     *  RelationalOperator: '<S579>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S579>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S579>/Bitwise Operator2'
     */
    VeTHDR_b_OEXV_OutTempRatDsbl = (((!VeTHDR_b_OEXV_OutTempRatEnbl) ||
        (((((sint32)THDR_ac_DW.StatusByte_AC_RefrigTempSnsr4CktPerf) & 1) > 0) &&
         (tmpRead_i == 0U))) || rtb_TmpSignalConversionAtVeTAIR_b_OEXV_R);

    /* Logic: '<S526>/Logical Operator' incorporates:
     *  Constant: '<S557>/Constant1'
     *  Constant: '<S557>/Constant2'
     *  Constant: '<S558>/Constant1'
     *  Constant: '<S558>/Constant2'
     *  DataStoreRead: '<S557>/StatusByte_AC_RefrigExpVlvAct_C_CntrlCktPerf'
     *  DataStoreRead: '<S558>/StatusByte_AC_RefrigTempSnsrCCkt'
     *  Logic: '<S526>/Logical Operator8'
     *  Logic: '<S526>/Logical Operator9'
     *  Logic: '<S557>/Logical Operator'
     *  Logic: '<S558>/Logical Operator'
     *  RelationalOperator: '<S557>/Relational Operator1'
     *  RelationalOperator: '<S557>/Relational Operator2'
     *  RelationalOperator: '<S558>/Relational Operator1'
     *  RelationalOperator: '<S558>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S557>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S557>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S558>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S558>/Bitwise Operator2'
     */
    VeTHDR_b_EEXV_OutTempRatEnbl = (((rtb_LogicalOperator12_op &&
        (VeTHDR_b_ACL_CommonPerfEnbl)) && (((((sint32)
        THDR_ac_DW.StatusByte_AC_RefrigExpVlvAct_C_CntrlCkt) & 1) <= 0) ||
        ((((uint32)THDR_ac_DW.StatusByte_AC_RefrigExpVlvAct_C_CntrlCkt) & 64U)
         != 0U))) && (((((sint32)THDR_ac_DW.StatusByte_AC_RefrigTempSnsrCCkt) &
                        1) <= 0) || ((((uint32)
        THDR_ac_DW.StatusByte_AC_RefrigTempSnsrCCkt) & 64U) != 0U)));

    /* S-Function (sfix_bitop): '<S580>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S580>/StatusByte_AC_RefrigTempSnsr5CktPerf'
     *  S-Function (sfix_bitop): '<S482>/Bitwise Operator2'
     */
    rowIdx = ((uint32)THDR_ac_DW.StatusByte_AC_RefrigTempSnsr5CktPerf) & 64U;

    /* Logic: '<S524>/Logical Operator2' incorporates:
     *  Constant: '<S580>/Constant1'
     *  Constant: '<S580>/Constant2'
     *  DataStoreRead: '<S580>/StatusByte_AC_RefrigTempSnsr5CktPerf'
     *  Logic: '<S524>/Logical Operator7'
     *  Logic: '<S580>/Logical Operator'
     *  RelationalOperator: '<S580>/Relational Operator1'
     *  RelationalOperator: '<S580>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S580>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S580>/Bitwise Operator2'
     */
    VeTHDR_b_OEXV_InTempRatDsbl = (((!VeTHDR_b_EEXV_OutTempRatEnbl) ||
        (((((sint32)THDR_ac_DW.StatusByte_AC_RefrigTempSnsr5CktPerf) & 1) > 0) &&
         (rowIdx == 0U))) || tmpRead_g);

    /* RelationalOperator: '<S523>/Relational Operator13' incorporates:
     *  Constant: '<S523>/Constant Value1'
     *  DataTypeConversion: '<S523>/Data Type Conversion20'
     *  DataTypeConversion: '<S523>/Data Type Conversion21'
     *  Sum: '<S523>/Subtract5'
     */
    VeTHDR_b_EEXV_OutTempNoDcsFlg = (((sint32)((uint32)(((uint32)
        (VeTHDR_b_OEXV_OutTempRatDsbl ? 1U : 0U)) + (VeTHDR_b_OEXV_InTempRatDsbl
        ? 1U : 0U)))) > 0);

    /* Logic: '<S526>/Logical Operator2' incorporates:
     *  Constant: '<S559>/Calib'
     *  Logic: '<S526>/Logical Operator1'
     *  Logic: '<S526>/Logical Operator10'
     *  Logic: '<S526>/Logical Operator4'
     */
    VeTHDR_b_EEXV_OutTempDiagEnbl = (((VeTHDR_b_EEXV_OutTemp_FA_Cnfrm) &&
        (KeTHDR_b_ACL_EEXV_OutTemp_FA_EnblCnds)) ||
        ((!VeTHDR_b_EEXV_OutTempNoDcsFlg) && (VeTHDR_b_EEXV_OutTempRatEnbl)));

    /* S-Function (sfix_bitop): '<S462>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S463>/StatusByte_AC_RefrigTempSnsrCPerf'
     *  S-Function (sfix_bitop): '<S581>/Bitwise Operator1'
     */
    VariantMerge_For_Variant_Source_Varian_0 = ((uint32)
        THDR_ac_DW.StatusByte_AC_RefrigTempSnsrCPerf) & 64U;

    /* RelationalOperator: '<S462>/Relational Operator3' incorporates:
     *  Constant: '<S462>/Constant3'
     *  S-Function (sfix_bitop): '<S462>/Bitwise Operator2'
     */
    rtb_LogicalOperator_mxy = (VariantMerge_For_Variant_Source_Varian_0 == 0U);

    /* Outputs for Atomic SubSystem: '<S462>/EdgeFalling1' */
    /* Logic: '<S462>/Logical Operator' incorporates:
     *  Logic: '<S465>/OR1'
     */
    rtb_LogicalOperator_hi = !rtb_LogicalOperator_mxy;

    /* End of Outputs for SubSystem: '<S462>/EdgeFalling1' */

    /* Logic: '<S462>/Logical1' incorporates:
     *  Constant: '<S460>/Calib'
     *  Constant: '<S461>/Calib'
     *  Constant: '<S462>/Constant1'
     *  DataStoreRead: '<S463>/StatusByte_AC_RefrigTempSnsrCPerf'
     *  Logic: '<S454>/Logical Operator'
     *  Logic: '<S462>/Logical Operator'
     *  Logic: '<S462>/Logical10'
     *  Logic: '<S462>/Logical12'
     *  RelationalOperator: '<S462>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S462>/Bitwise Operator3'
     */
    rtb_LogicalOperator12_op = (((KeTHDR_b_EEXV_Out_XYEnbl) &&
        (VeTHDR_b_EEXV_OutTempDiagEnbl)) &&
        ((!KeTHDR_b_AC_RefrigTempSnsrCPerf_LtchEnbl) || (((((uint32)
        THDR_ac_DW.StatusByte_AC_RefrigTempSnsrCPerf) & 1U) == 0U) ||
        rtb_LogicalOperator_hi)));

    /* Logic: '<S523>/Logical Operator18' incorporates:
     *  Logic: '<S523>/Logical Operator12'
     */
    rtb_AND_c0 = !VeTHDR_b_OEXV_OutTempRatDsbl;

    /* Logic: '<S523>/Logical Operator19' incorporates:
     *  Logic: '<S523>/Logical Operator4'
     */
    tmpRead_g = !VeTHDR_b_OEXV_InTempRatDsbl;

    /* RelationalOperator: '<S523>/Relational Operator12' incorporates:
     *  Abs: '<S523>/Abs8'
     *  Abs: '<S523>/Abs9'
     *  Constant: '<S520>/Calib'
     *  Constant: '<S521>/Calib'
     *  Constant: '<S523>/Constant Value'
     *  Logic: '<S523>/Logical Operator18'
     *  Logic: '<S523>/Logical Operator19'
     *  Logic: '<S523>/Logical Operator22'
     *  Logic: '<S523>/Logical Operator23'
     *  RelationalOperator: '<S523>/Relational Operator14'
     *  RelationalOperator: '<S523>/Relational Operator15'
     *  Sum: '<S523>/Subtract4'
     *  Sum: '<S523>/Sum8'
     *  Sum: '<S523>/Sum9'
     */
    VeTHDR_b_EEXV_OutTempRatFlt = (((sint32)((uint32)(((uint32)(((fabsf
        (rtb_TmpSignalConversionAtVeTAIR_T_EEXV_R -
         rtb_TmpSignalConversionAtVeTAIR_T_OEXV_R) >= ((float32)
        KeTHDR_T_OEXV_Out_EEXV_Out_TmpThrshld)) && rtb_AND_c0) ? 1 : 0)) +
        ((uint32)(((fabsf(rtb_TmpSignalConversionAtVeTAIR_T_EEXV_R -
                          rtb_TmpSignalConversionAtVeTAIR_T_OEXV_I) >= ((float32)
        KeTHDR_T_OEXV_In_EEXV_Out_TmpThrshld)) && tmpRead_g) ? 1 : 0))))) >= 2);

    /* Outputs for Atomic SubSystem: '<S462>/EdgeFalling1' */
    /* Logic: '<S465>/AND' incorporates:
     *  UnitDelay: '<S465>/Unit Delay'
     */
    rtb_LogicalOperator_hi = (rtb_LogicalOperator_hi &&
        (THDR_ac_DW.UnitDelay_DSTATE_ds));

    /* Update for UnitDelay: '<S465>/Unit Delay' */
    THDR_ac_DW.UnitDelay_DSTATE_ds = rtb_LogicalOperator_mxy;

    /* End of Outputs for SubSystem: '<S462>/EdgeFalling1' */

    /* Logic: '<S462>/Logical5' */
    rtb_LogicalOperator_mxy = ((VeTHDR_b_ResetCnts) || rtb_LogicalOperator_hi);

    /* Outputs for Atomic SubSystem: '<S464>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S464>/Counter Reset  Enabled ' */
    /* Switch: '<S471>/Switch1' incorporates:
     *  Constant: '<S577>/Calib'
     *  Logic: '<S464>/Fail Counter Reset'
     *  Logic: '<S464>/NOT6'
     *  Logic: '<S575>/Logical Operator'
     *  Logic: '<S575>/Logical Operator1'
     *  Switch: '<S471>/Switch2'
     *  Switch: '<S472>/Switch1'
     *  UnitDelay: '<S464>/Unit Delay'
     *  UnitDelay: '<S464>/Unit Delay1'
     */
    if ((rtb_LogicalOperator_mxy || (THDR_ac_DW.UnitDelay_DSTATE_cq)) ||
            (THDR_ac_DW.UnitDelay1_DSTATE_jw))
    {
        /* Switch: '<S471>/Switch1' incorporates:
         *  Constant: '<S471>/Constant Value2'
         */
        VeTHDR_Cnt_EEXV_OutFailCnt = 0U;

        /* Switch: '<S472>/Switch1' incorporates:
         *  Constant: '<S472>/Constant Value2'
         */
        VeTHDR_Cnt_EEXV_OutSampleCnt = 0U;
    }
    else
    {
        if (rtb_LogicalOperator12_op && ((VeTHDR_b_EEXV_OutTempRatFlt) ||
                ((KeTHDR_b_ACL_EEXV_OutTemp_FA_FltCndsEnbl) &&
                 (VeTHDR_b_EEXV_OutTemp_FA_Cnfrm))))
        {
            /* Switch: '<S471>/Switch1' incorporates:
             *  Constant: '<S471>/Constant Value1'
             *  Sum: '<S471>/Subtraction'
             *  Switch: '<S471>/Switch2'
             *  UnitDelay: '<S471>/Unit Delay'
             */
            VeTHDR_Cnt_EEXV_OutFailCnt = (uint16)(((uint32)
                VeTHDR_Cnt_EEXV_OutFailCnt) + 1U);
        }

        /* Switch: '<S472>/Switch2' */
        if (rtb_LogicalOperator12_op)
        {
            /* Switch: '<S472>/Switch1' incorporates:
             *  Constant: '<S472>/Constant Value1'
             *  Sum: '<S472>/Subtraction'
             *  Switch: '<S472>/Switch2'
             *  UnitDelay: '<S472>/Unit Delay'
             */
            VeTHDR_Cnt_EEXV_OutSampleCnt = (uint16)(((uint32)
                VeTHDR_Cnt_EEXV_OutSampleCnt) + 1U);
        }

        /* End of Switch: '<S472>/Switch2' */
    }

    /* End of Switch: '<S471>/Switch1' */
    /* End of Outputs for SubSystem: '<S464>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S464>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S464>/Greater Than or Equal ' incorporates:
     *  Constant: '<S458>/Calib'
     */
    THDR_ac_DW.UnitDelay1_DSTATE_jw = (((float32)VeTHDR_Cnt_EEXV_OutFailCnt) >=
        KeTHDR_Cnt_EEXV_Out_FailCnt);

    /* Logic: '<S464>/NOT5' incorporates:
     *  Constant: '<S459>/Calib'
     *  Logic: '<S464>/NOT3'
     *  RelationalOperator: '<S464>/Less Than  or Equal'
     */
    THDR_ac_DW.UnitDelay_DSTATE_cq = ((((float32)VeTHDR_Cnt_EEXV_OutSampleCnt) >=
        KeTHDR_Cnt_EEXV_Out_SmpCnt) && (!THDR_ac_DW.UnitDelay1_DSTATE_jw));

    /* Switch: '<S477>/Switch1' incorporates:
     *  Constant: '<S470>/Constant Value'
     *  DataStoreWrite: '<S454>/Data Store Write1'
     *  Switch: '<S476>/Switch1'
     */
    if (VeTHDR_b_ResetFOMs)
    {
        THDR_ac_DW.NeTHDR_Cnt_EEXV_Out_MFOP = 0U;
    }
    else
    {
        if (THDR_ac_DW.UnitDelay_DSTATE_cq)
        {
            /* MinMax: '<S470>/Minimum2' incorporates:
             *  DataStoreRead: '<S454>/Data Store Read1'
             *  Switch: '<S476>/Switch1'
             */
            if (VeTHDR_Cnt_EEXV_OutFailCnt > THDR_ac_DW.NeTHDR_Cnt_EEXV_Out_MFOP)
            {
                /* DataStoreWrite: '<S454>/Data Store Write1' incorporates:
                 *  Switch: '<S476>/Switch1'
                 */
                THDR_ac_DW.NeTHDR_Cnt_EEXV_Out_MFOP = VeTHDR_Cnt_EEXV_OutFailCnt;
            }

            /* End of MinMax: '<S470>/Minimum2' */
        }
    }

    /* End of Switch: '<S477>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S462>/Fail' */
    THDR_ac_Fail(THDR_ac_DW.UnitDelay1_DSTATE_jw, &THDR_ac_B.Merge);

    /* End of Outputs for SubSystem: '<S462>/Fail' */

    /* Outputs for Enabled SubSystem: '<S462>/Init' */
    THDR_ac_Init_l(rtb_LogicalOperator_mxy, &THDR_ac_B.Merge);

    /* End of Outputs for SubSystem: '<S462>/Init' */

    /* Outputs for Enabled SubSystem: '<S462>/Pass' */
    THDR_ac_Pass(THDR_ac_DW.UnitDelay_DSTATE_cq, &THDR_ac_B.Merge);

    /* End of Outputs for SubSystem: '<S462>/Pass' */

    /* RelationalOperator: '<S462>/Relational Operator' incorporates:
     *  Constant: '<S466>/Constant'
     *  Merge: '<S462>/Merge'
     */
    VeTHDR_b_EEXV_OutTempFltDtct = (((uint32)THDR_ac_B.Merge) == CeDFIB_e_Fail);

    /* Logic: '<S527>/Logical Operator' incorporates:
     *  Constant: '<S565>/Constant1'
     *  Constant: '<S565>/Constant2'
     *  Constant: '<S566>/Constant1'
     *  Constant: '<S566>/Constant2'
     *  DataStoreRead: '<S565>/StatusByte_AC_RefrigTempSnsr5CktShotoBat'
     *  DataStoreRead: '<S566>/StatusByte_AC_RefrigTempSnsr5CktShotoGro'
     *  Logic: '<S527>/Logical Operator2'
     *  Logic: '<S527>/Logical Operator3'
     *  Logic: '<S565>/Logical Operator'
     *  Logic: '<S566>/Logical Operator'
     *  RelationalOperator: '<S565>/Relational Operator1'
     *  RelationalOperator: '<S565>/Relational Operator2'
     *  RelationalOperator: '<S566>/Relational Operator1'
     *  RelationalOperator: '<S566>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S565>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S565>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S566>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S566>/Bitwise Operator2'
     */
    VeTHDR_b_OEXV_InTempRatEnbl = ((((VeTHDR_b_ACL_CommonEnbl) &&
        (VeTHDR_b_ACL_CommonPerfEnbl)) && (((((sint32)
        THDR_ac_DW.StatusByte_AC_RefrigTempSnsr5CktShotoGro) & 1) <= 0) ||
        ((((uint32)THDR_ac_DW.StatusByte_AC_RefrigTempSnsr5CktShotoGro) & 64U)
         != 0U))) && (((((sint32)
                         THDR_ac_DW.StatusByte_AC_RefrigTempSnsr5CktShotoBat) &
                        1) <= 0) || ((((uint32)
        THDR_ac_DW.StatusByte_AC_RefrigTempSnsr5CktShotoBat) & 64U) != 0U)));

    /* Logic: '<S524>/Logical Operator1' incorporates:
     *  Constant: '<S581>/Constant1'
     *  Constant: '<S581>/Constant2'
     *  DataStoreRead: '<S581>/StatusByte_AC_RefrigTempSnsrCPerf'
     *  Logic: '<S524>/Logical Operator6'
     *  Logic: '<S581>/Logical Operator'
     *  RelationalOperator: '<S581>/Relational Operator1'
     *  RelationalOperator: '<S581>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S581>/Bitwise Operator2'
     */
    VeTHDR_b_EEXV_OutTempRatDsbl = (((!VeTHDR_b_OEXV_InTempRatEnbl) ||
        (((((sint32)THDR_ac_DW.StatusByte_AC_RefrigTempSnsrCPerf) & 1) > 0) &&
         (VariantMerge_For_Variant_Source_Varian_0 == 0U))) ||
        rtb_TmpSignalConversionAtVeTAIR_b_EEXV_R);

    /* RelationalOperator: '<S523>/Relational Operator11' incorporates:
     *  Constant: '<S523>/Constant Value1'
     *  DataTypeConversion: '<S523>/Data Type Conversion28'
     *  DataTypeConversion: '<S523>/Data Type Conversion29'
     *  Sum: '<S523>/Subtract3'
     */
    VeTHDR_b_OEXV_InTempNoDcsFlg = (((sint32)((uint32)(((uint32)
        (VeTHDR_b_OEXV_OutTempRatDsbl ? 1U : 0U)) +
        (VeTHDR_b_EEXV_OutTempRatDsbl ? 1U : 0U)))) > 0);

    /* Logic: '<S527>/Logical Operator1' incorporates:
     *  Logic: '<S527>/Logical Operator4'
     */
    VeTHDR_b_OEXV_InTempDiagEnbl = ((!VeTHDR_b_OEXV_InTempNoDcsFlg) &&
        (VeTHDR_b_OEXV_InTempRatEnbl));

    /* RelationalOperator: '<S482>/Relational Operator3' incorporates:
     *  Constant: '<S482>/Constant3'
     */
    rtb_LogicalOperator_mxy = (rowIdx == 0U);

    /* Outputs for Atomic SubSystem: '<S482>/EdgeFalling1' */
    /* Logic: '<S482>/Logical Operator' incorporates:
     *  Logic: '<S485>/OR1'
     */
    rtb_LogicalOperator_hi = !rtb_LogicalOperator_mxy;

    /* End of Outputs for SubSystem: '<S482>/EdgeFalling1' */

    /* Logic: '<S482>/Logical1' incorporates:
     *  Constant: '<S480>/Calib'
     *  Constant: '<S481>/Calib'
     *  Constant: '<S482>/Constant1'
     *  DataStoreRead: '<S483>/StatusByte_AC_RefrigTempSnsr5CktPerf'
     *  Logic: '<S455>/Logical Operator'
     *  Logic: '<S482>/Logical Operator'
     *  Logic: '<S482>/Logical10'
     *  Logic: '<S482>/Logical12'
     *  RelationalOperator: '<S482>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S482>/Bitwise Operator3'
     */
    rtb_LogicalOperator12_op = (((KeTHDR_b_OEXV_In_XYEnbl) &&
        (VeTHDR_b_OEXV_InTempDiagEnbl)) &&
        ((!KeTHDR_b_AC_RefrigTempSnsr5CktPerf_LtchEnbl) || (((((uint32)
        THDR_ac_DW.StatusByte_AC_RefrigTempSnsr5CktPerf) & 1U) == 0U) ||
        rtb_LogicalOperator_hi)));

    /* Logic: '<S523>/Logical Operator13' incorporates:
     *  Logic: '<S523>/Logical Operator5'
     */
    rtb_TmpSignalConversionAtVeTAIR_b_EEXV_R = !VeTHDR_b_EEXV_OutTempRatDsbl;

    /* RelationalOperator: '<S523>/Relational Operator10' incorporates:
     *  Abs: '<S523>/Abs4'
     *  Abs: '<S523>/Abs5'
     *  Constant: '<S520>/Calib'
     *  Constant: '<S522>/Calib'
     *  Constant: '<S523>/Constant Value'
     *  Logic: '<S523>/Logical Operator13'
     *  Logic: '<S523>/Logical Operator8'
     *  Logic: '<S523>/Logical Operator9'
     *  RelationalOperator: '<S523>/Relational Operator6'
     *  RelationalOperator: '<S523>/Relational Operator7'
     *  Sum: '<S523>/Subtract2'
     *  Sum: '<S523>/Sum4'
     *  Sum: '<S523>/Sum5'
     */
    VeTHDR_b_OEXV_InTempRatFlt = (((sint32)((uint32)(((uint32)(((fabsf
        (rtb_TmpSignalConversionAtVeTAIR_T_OEXV_I -
         rtb_TmpSignalConversionAtVeTAIR_T_OEXV_R) >= ((float32)
        KeTHDR_T_OEXV_Out_OEXV_In_TmpThrshld)) && rtb_AND_c0) ? 1 : 0)) +
        ((uint32)(((fabsf(rtb_TmpSignalConversionAtVeTAIR_T_OEXV_I -
                          rtb_TmpSignalConversionAtVeTAIR_T_EEXV_R) >= ((float32)
        KeTHDR_T_OEXV_In_EEXV_Out_TmpThrshld)) &&
                   rtb_TmpSignalConversionAtVeTAIR_b_EEXV_R) ? 1 : 0))))) >= 2);

    /* Outputs for Atomic SubSystem: '<S482>/EdgeFalling1' */
    /* Logic: '<S485>/AND' incorporates:
     *  UnitDelay: '<S485>/Unit Delay'
     */
    rtb_AND_c0 = (rtb_LogicalOperator_hi && (THDR_ac_DW.UnitDelay_DSTATE_hb));

    /* Update for UnitDelay: '<S485>/Unit Delay' */
    THDR_ac_DW.UnitDelay_DSTATE_hb = rtb_LogicalOperator_mxy;

    /* End of Outputs for SubSystem: '<S482>/EdgeFalling1' */

    /* Logic: '<S482>/Logical5' */
    rtb_AND_c0 = ((VeTHDR_b_ResetCnts) || rtb_AND_c0);

    /* Outputs for Atomic SubSystem: '<S484>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S484>/Counter Reset  Enabled ' */
    /* Switch: '<S491>/Switch1' incorporates:
     *  Logic: '<S484>/Fail Counter Reset'
     *  Logic: '<S484>/NOT6'
     *  Switch: '<S491>/Switch2'
     *  Switch: '<S492>/Switch1'
     *  UnitDelay: '<S484>/Unit Delay'
     *  UnitDelay: '<S484>/Unit Delay1'
     */
    if ((rtb_AND_c0 || (THDR_ac_DW.UnitDelay_DSTATE_ln)) ||
            (THDR_ac_DW.UnitDelay1_DSTATE_ig))
    {
        /* Switch: '<S491>/Switch1' incorporates:
         *  Constant: '<S491>/Constant Value2'
         */
        VeTHDR_Cnt_OEXV_InFailCnt = 0U;

        /* Switch: '<S492>/Switch1' incorporates:
         *  Constant: '<S492>/Constant Value2'
         */
        VeTHDR_Cnt_OEXV_InSampleCnt = 0U;
    }
    else
    {
        if (rtb_LogicalOperator12_op && (VeTHDR_b_OEXV_InTempRatFlt))
        {
            /* Switch: '<S491>/Switch1' incorporates:
             *  Constant: '<S491>/Constant Value1'
             *  Sum: '<S491>/Subtraction'
             *  Switch: '<S491>/Switch2'
             *  UnitDelay: '<S491>/Unit Delay'
             */
            VeTHDR_Cnt_OEXV_InFailCnt = (uint16)(((uint32)
                VeTHDR_Cnt_OEXV_InFailCnt) + 1U);
        }

        /* Switch: '<S492>/Switch2' */
        if (rtb_LogicalOperator12_op)
        {
            /* Switch: '<S492>/Switch1' incorporates:
             *  Constant: '<S492>/Constant Value1'
             *  Sum: '<S492>/Subtraction'
             *  Switch: '<S492>/Switch2'
             *  UnitDelay: '<S492>/Unit Delay'
             */
            VeTHDR_Cnt_OEXV_InSampleCnt = (uint16)(((uint32)
                VeTHDR_Cnt_OEXV_InSampleCnt) + 1U);
        }

        /* End of Switch: '<S492>/Switch2' */
    }

    /* End of Switch: '<S491>/Switch1' */
    /* End of Outputs for SubSystem: '<S484>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S484>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S484>/Greater Than or Equal ' incorporates:
     *  Constant: '<S478>/Calib'
     */
    THDR_ac_DW.UnitDelay1_DSTATE_ig = (((float32)VeTHDR_Cnt_OEXV_InFailCnt) >=
        KeTHDR_Cnt_OEXV_In_FailCnt);

    /* Logic: '<S484>/NOT5' incorporates:
     *  Constant: '<S479>/Calib'
     *  Logic: '<S484>/NOT3'
     *  RelationalOperator: '<S484>/Less Than  or Equal'
     */
    THDR_ac_DW.UnitDelay_DSTATE_ln = ((((float32)VeTHDR_Cnt_OEXV_InSampleCnt) >=
        KeTHDR_Cnt_OEXV_In_SmpCnt) && (!THDR_ac_DW.UnitDelay1_DSTATE_ig));

    /* Switch: '<S497>/Switch1' incorporates:
     *  Constant: '<S490>/Constant Value'
     *  DataStoreWrite: '<S455>/Data Store Write1'
     *  Switch: '<S496>/Switch1'
     */
    if (VeTHDR_b_ResetFOMs)
    {
        THDR_ac_DW.NeTHDR_Cnt_OEXV_In_MFOP = 0U;
    }
    else
    {
        if (THDR_ac_DW.UnitDelay_DSTATE_ln)
        {
            /* MinMax: '<S490>/Minimum2' incorporates:
             *  DataStoreRead: '<S455>/Data Store Read1'
             *  Switch: '<S496>/Switch1'
             */
            if (VeTHDR_Cnt_OEXV_InFailCnt > THDR_ac_DW.NeTHDR_Cnt_OEXV_In_MFOP)
            {
                /* DataStoreWrite: '<S455>/Data Store Write1' incorporates:
                 *  Switch: '<S496>/Switch1'
                 */
                THDR_ac_DW.NeTHDR_Cnt_OEXV_In_MFOP = VeTHDR_Cnt_OEXV_InFailCnt;
            }

            /* End of MinMax: '<S490>/Minimum2' */
        }
    }

    /* End of Switch: '<S497>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S482>/Fail' */
    THDR_ac_Fail(THDR_ac_DW.UnitDelay1_DSTATE_ig, &THDR_ac_B.Merge_h);

    /* End of Outputs for SubSystem: '<S482>/Fail' */

    /* Outputs for Enabled SubSystem: '<S482>/Init' */
    THDR_ac_Init_l(rtb_AND_c0, &THDR_ac_B.Merge_h);

    /* End of Outputs for SubSystem: '<S482>/Init' */

    /* Outputs for Enabled SubSystem: '<S482>/Pass' */
    THDR_ac_Pass(THDR_ac_DW.UnitDelay_DSTATE_ln, &THDR_ac_B.Merge_h);

    /* End of Outputs for SubSystem: '<S482>/Pass' */

    /* RelationalOperator: '<S482>/Relational Operator' incorporates:
     *  Constant: '<S486>/Constant'
     *  Merge: '<S482>/Merge'
     */
    VeTHDR_b_OEXV_InTempFltDtct = (((uint32)THDR_ac_B.Merge_h) == CeDFIB_e_Fail);

    /* Logic: '<S528>/Logical Operator3' */
    rtb_TmpSignalConversionAtVeTAIR_b_OEXV_R =
        (rtb_TmpSignalConversionAtVeTAIR_b_OEXV_R && rtb_UnitDelay_kj);

    /* Outputs for Atomic SubSystem: '<S528>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S573>/EdgeRising' */
    /* Logic: '<S574>/AND' incorporates:
     *  Logic: '<S574>/OR1'
     *  UnitDelay: '<S574>/Unit Delay'
     */
    rtb_UnitDelay_kj = (rtb_TmpSignalConversionAtVeTAIR_b_OEXV_R &&
                        (!THDR_ac_DW.UnitDelay_DSTATE_ne));

    /* Update for UnitDelay: '<S574>/Unit Delay' */
    THDR_ac_DW.UnitDelay_DSTATE_ne = rtb_TmpSignalConversionAtVeTAIR_b_OEXV_R;

    /* End of Outputs for SubSystem: '<S573>/EdgeRising' */

    /* Switch: '<S573>/Switch1' incorporates:
     *  Constant: '<S12>/Calib'
     *  Constant: '<S570>/Calib'
     *  Constant: '<S573>/Constant Value1'
     *  Logic: '<S573>/OR'
     *  Logic: '<S573>/OR1'
     *  MinMax: '<S573>/Minimum'
     *  Sum: '<S573>/Summation'
     *  UnitDelay: '<S573>/Unit Delay'
     */
    if ((!rtb_TmpSignalConversionAtVeTAIR_b_OEXV_R) || rtb_UnitDelay_kj)
    {
        THDR_ac_DW.UnitDelay_DSTATE_kr = 0.0F;
    }
    else
    {
        THDR_ac_DW.UnitDelay_DSTATE_kr = fminf(KeTHDR_t_OEXV_OutTemp_FA_DbncTime,
            HeTHDR_t_MedTEH + THDR_ac_DW.UnitDelay_DSTATE_kr);
    }

    /* End of Switch: '<S573>/Switch1' */

    /* Logic: '<S573>/AND' incorporates:
     *  Constant: '<S570>/Calib'
     *  RelationalOperator: '<S573>/Greater  Than'
     *  UnitDelay: '<S573>/Unit Delay'
     */
    VeTHDR_b_OEXV_OutTemp_FA_Cnfrm = (rtb_TmpSignalConversionAtVeTAIR_b_OEXV_R &&
        (THDR_ac_DW.UnitDelay_DSTATE_kr >= KeTHDR_t_OEXV_OutTemp_FA_DbncTime));

    /* End of Outputs for SubSystem: '<S528>/Turn On Delay Time' */

    /* RelationalOperator: '<S523>/Relational Operator5' incorporates:
     *  Constant: '<S523>/Constant Value1'
     *  DataTypeConversion: '<S523>/Data Type Conversion36'
     *  DataTypeConversion: '<S523>/Data Type Conversion37'
     *  Sum: '<S523>/Subtract1'
     */
    VeTHDR_b_OEXV_OutTempNoDcsFlg = (((sint32)((uint32)(((uint32)
        (VeTHDR_b_OEXV_InTempRatDsbl ? 1U : 0U)) + (VeTHDR_b_EEXV_OutTempRatDsbl
        ? 1U : 0U)))) > 0);

    /* Logic: '<S528>/Logical Operator2' incorporates:
     *  Constant: '<S569>/Calib'
     *  Logic: '<S528>/Logical Operator1'
     *  Logic: '<S528>/Logical Operator10'
     *  Logic: '<S528>/Logical Operator4'
     */
    VeTHDR_b_OEXV_OutTempDiagEnbl = (((VeTHDR_b_OEXV_OutTemp_FA_Cnfrm) &&
        (KeTHDR_b_ACL_OEXV_OutTemp_FA_EnblCnds)) ||
        ((!VeTHDR_b_OEXV_OutTempNoDcsFlg) && (VeTHDR_b_OEXV_OutTempRatEnbl)));

    /* RelationalOperator: '<S502>/Relational Operator3' incorporates:
     *  Constant: '<S502>/Constant3'
     */
    rtb_UnitDelay_kj = (tmpRead_i == 0U);

    /* Outputs for Atomic SubSystem: '<S502>/EdgeFalling1' */
    /* Logic: '<S502>/Logical Operator' incorporates:
     *  Logic: '<S505>/OR1'
     */
    rtb_AND_c0 = !rtb_UnitDelay_kj;

    /* End of Outputs for SubSystem: '<S502>/EdgeFalling1' */

    /* Logic: '<S502>/Logical1' incorporates:
     *  Constant: '<S500>/Calib'
     *  Constant: '<S501>/Calib'
     *  Constant: '<S502>/Constant1'
     *  DataStoreRead: '<S503>/StatusByte_AC_RefrigTempSnsr4CktPerf'
     *  Logic: '<S456>/Logical Operator'
     *  Logic: '<S502>/Logical Operator'
     *  Logic: '<S502>/Logical10'
     *  Logic: '<S502>/Logical12'
     *  RelationalOperator: '<S502>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S502>/Bitwise Operator3'
     */
    rtb_TmpSignalConversionAtVeTAIR_b_OEXV_R = (((KeTHDR_b_OEXV_Out_XYEnbl) &&
        (VeTHDR_b_OEXV_OutTempDiagEnbl)) &&
        ((!KeTHDR_b_AC_RefrigTempSnsr4CktPerf_LtchEnbl) || (((((uint32)
        THDR_ac_DW.StatusByte_AC_RefrigTempSnsr4CktPerf) & 1U) == 0U) ||
        rtb_AND_c0)));

    /* RelationalOperator: '<S523>/Relational Operator4' incorporates:
     *  Abs: '<S523>/Abs'
     *  Abs: '<S523>/Abs1'
     *  Constant: '<S521>/Calib'
     *  Constant: '<S522>/Calib'
     *  Constant: '<S523>/Constant Value'
     *  Logic: '<S523>/Logical Operator'
     *  Logic: '<S523>/Logical Operator1'
     *  RelationalOperator: '<S523>/Relational Operator'
     *  RelationalOperator: '<S523>/Relational Operator1'
     *  Sum: '<S523>/Subtract'
     *  Sum: '<S523>/Sum'
     *  Sum: '<S523>/Sum1'
     */
    VeTHDR_b_OEXV_OutTempRatFlt = (((sint32)((uint32)(((uint32)(((fabsf
        (rtb_TmpSignalConversionAtVeTAIR_T_OEXV_R -
         rtb_TmpSignalConversionAtVeTAIR_T_OEXV_I) >= ((float32)
        KeTHDR_T_OEXV_Out_OEXV_In_TmpThrshld)) && tmpRead_g) ? 1 : 0)) +
        ((uint32)(((fabsf(rtb_TmpSignalConversionAtVeTAIR_T_OEXV_R -
                          rtb_TmpSignalConversionAtVeTAIR_T_EEXV_R) >= ((float32)
        KeTHDR_T_OEXV_Out_EEXV_Out_TmpThrshld)) &&
                   rtb_TmpSignalConversionAtVeTAIR_b_EEXV_R) ? 1 : 0))))) >= 2);

    /* Outputs for Atomic SubSystem: '<S502>/EdgeFalling1' */
    /* Logic: '<S505>/AND' incorporates:
     *  UnitDelay: '<S505>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeTAIR_b_EEXV_R = (rtb_AND_c0 &&
        (THDR_ac_DW.UnitDelay_DSTATE_pe));

    /* Update for UnitDelay: '<S505>/Unit Delay' */
    THDR_ac_DW.UnitDelay_DSTATE_pe = rtb_UnitDelay_kj;

    /* End of Outputs for SubSystem: '<S502>/EdgeFalling1' */

    /* Logic: '<S502>/Logical5' */
    rtb_TmpSignalConversionAtVeTAIR_b_EEXV_R = ((VeTHDR_b_ResetCnts) ||
        rtb_TmpSignalConversionAtVeTAIR_b_EEXV_R);

    /* Outputs for Atomic SubSystem: '<S504>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S504>/Counter Reset  Enabled ' */
    /* Switch: '<S511>/Switch1' incorporates:
     *  Constant: '<S578>/Calib'
     *  Logic: '<S504>/Fail Counter Reset'
     *  Logic: '<S504>/NOT6'
     *  Logic: '<S576>/Logical Operator'
     *  Logic: '<S576>/Logical Operator1'
     *  Switch: '<S511>/Switch2'
     *  Switch: '<S512>/Switch1'
     *  UnitDelay: '<S504>/Unit Delay'
     *  UnitDelay: '<S504>/Unit Delay1'
     */
    if ((rtb_TmpSignalConversionAtVeTAIR_b_EEXV_R ||
            (THDR_ac_DW.UnitDelay_DSTATE_gf)) ||
            (THDR_ac_DW.UnitDelay1_DSTATE_pm))
    {
        /* Switch: '<S511>/Switch1' incorporates:
         *  Constant: '<S511>/Constant Value2'
         */
        VeTHDR_Cnt_OEXV_OutFailCnt = 0U;

        /* Switch: '<S512>/Switch1' incorporates:
         *  Constant: '<S512>/Constant Value2'
         */
        VeTHDR_Cnt_OEXV_OutSampleCnt = 0U;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeTAIR_b_OEXV_R &&
                ((VeTHDR_b_OEXV_OutTempRatFlt) ||
                 ((KeTHDR_b_ACL_OEXV_OutTemp_FA_FltCndsEnbl) &&
                  (VeTHDR_b_OEXV_OutTemp_FA_Cnfrm))))
        {
            /* Switch: '<S511>/Switch1' incorporates:
             *  Constant: '<S511>/Constant Value1'
             *  Sum: '<S511>/Subtraction'
             *  Switch: '<S511>/Switch2'
             *  UnitDelay: '<S511>/Unit Delay'
             */
            VeTHDR_Cnt_OEXV_OutFailCnt = (uint16)(((uint32)
                VeTHDR_Cnt_OEXV_OutFailCnt) + 1U);
        }

        /* Switch: '<S512>/Switch2' */
        if (rtb_TmpSignalConversionAtVeTAIR_b_OEXV_R)
        {
            /* Switch: '<S512>/Switch1' incorporates:
             *  Constant: '<S512>/Constant Value1'
             *  Sum: '<S512>/Subtraction'
             *  Switch: '<S512>/Switch2'
             *  UnitDelay: '<S512>/Unit Delay'
             */
            VeTHDR_Cnt_OEXV_OutSampleCnt = (uint16)(((uint32)
                VeTHDR_Cnt_OEXV_OutSampleCnt) + 1U);
        }

        /* End of Switch: '<S512>/Switch2' */
    }

    /* End of Switch: '<S511>/Switch1' */
    /* End of Outputs for SubSystem: '<S504>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S504>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S504>/Greater Than or Equal ' incorporates:
     *  Constant: '<S498>/Calib'
     */
    THDR_ac_DW.UnitDelay1_DSTATE_pm = (((float32)VeTHDR_Cnt_OEXV_OutFailCnt) >=
        KeTHDR_Cnt_OEXV_Out_FailCnt);

    /* Logic: '<S504>/NOT5' incorporates:
     *  Constant: '<S499>/Calib'
     *  Logic: '<S504>/NOT3'
     *  RelationalOperator: '<S504>/Less Than  or Equal'
     */
    THDR_ac_DW.UnitDelay_DSTATE_gf = ((((float32)VeTHDR_Cnt_OEXV_OutSampleCnt) >=
        KeTHDR_Cnt_OEXV_Out_SmpCnt) && (!THDR_ac_DW.UnitDelay1_DSTATE_pm));

    /* Switch: '<S517>/Switch1' incorporates:
     *  Constant: '<S510>/Constant Value'
     *  DataStoreWrite: '<S456>/Data Store Write1'
     *  Switch: '<S516>/Switch1'
     */
    if (VeTHDR_b_ResetFOMs)
    {
        THDR_ac_DW.NeTHDR_Cnt_OEXV_Out_MFOP = 0U;
    }
    else
    {
        if (THDR_ac_DW.UnitDelay_DSTATE_gf)
        {
            /* MinMax: '<S510>/Minimum2' incorporates:
             *  DataStoreRead: '<S456>/Data Store Read1'
             *  Switch: '<S516>/Switch1'
             */
            if (VeTHDR_Cnt_OEXV_OutFailCnt > THDR_ac_DW.NeTHDR_Cnt_OEXV_Out_MFOP)
            {
                /* DataStoreWrite: '<S456>/Data Store Write1' incorporates:
                 *  Switch: '<S516>/Switch1'
                 */
                THDR_ac_DW.NeTHDR_Cnt_OEXV_Out_MFOP = VeTHDR_Cnt_OEXV_OutFailCnt;
            }

            /* End of MinMax: '<S510>/Minimum2' */
        }
    }

    /* End of Switch: '<S517>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S502>/Fail' */
    THDR_ac_Fail(THDR_ac_DW.UnitDelay1_DSTATE_pm, &THDR_ac_B.Merge_hr);

    /* End of Outputs for SubSystem: '<S502>/Fail' */

    /* Outputs for Enabled SubSystem: '<S502>/Init' */
    THDR_ac_Init_l(rtb_TmpSignalConversionAtVeTAIR_b_EEXV_R, &THDR_ac_B.Merge_hr);

    /* End of Outputs for SubSystem: '<S502>/Init' */

    /* Outputs for Enabled SubSystem: '<S502>/Pass' */
    THDR_ac_Pass(THDR_ac_DW.UnitDelay_DSTATE_gf, &THDR_ac_B.Merge_hr);

    /* End of Outputs for SubSystem: '<S502>/Pass' */

    /* RelationalOperator: '<S502>/Relational Operator' incorporates:
     *  Constant: '<S506>/Constant'
     *  Merge: '<S502>/Merge'
     */
    VeTHDR_b_OEXV_OutTempFltDtct = (((uint32)THDR_ac_B.Merge_hr) ==
        CeDFIB_e_Fail);

    /* Product: '<S531>/Multiplication3' incorporates:
     *  Constant: '<S12>/Calib'
     *  Constant: '<S531>/Constant Value1'
     */
    rtb_TmpSignalConversionAtVeAATR_T_EstAmb = HeTHDR_t_MedTEH / 2.0F;

    /* Product: '<S531>/Multiplication2' incorporates:
     *  Constant: '<S543>/Calib'
     *  Product: '<S531>/Multiplication4'
     *  Sum: '<S531>/Summation'
     *  Sum: '<S531>/Summation1'
     *  Sum: '<S531>/Summation2'
     *  UnitDelay: '<S531>/Unit Delay'
     *  UnitDelay: '<S531>/Unit Delay1'
     */
    VeTHDR_dn_EAC_Accel = ((rtb_TmpSignalConversionAtVeTAIR_n_CompSp -
                            ((rtb_TmpSignalConversionAtVeAATR_T_EstAmb -
        KeTHDR_t_EAC_FilterDeriv_CutOff) * THDR_ac_DW.UnitDelay1_DSTATE)) -
                           THDR_ac_DW.UnitDelay_DSTATE_p) /
        (rtb_TmpSignalConversionAtVeAATR_T_EstAmb +
         KeTHDR_t_EAC_FilterDeriv_CutOff);

    /* Update for UnitDelay: '<S531>/Unit Delay1' */
    THDR_ac_DW.UnitDelay1_DSTATE = VeTHDR_dn_EAC_Accel;

    /* Update for UnitDelay: '<S531>/Unit Delay' */
    THDR_ac_DW.UnitDelay_DSTATE_p = rtb_TmpSignalConversionAtVeTAIR_n_CompSp;

    /* End of Outputs for SubSystem: '<S448>/If_AcLoopDiagnostics' */
    /* End of Outputs for SubSystem: '<S19>/AcLoopDiagnostics' */
#endif

    /* Outputs for Atomic SubSystem: '<S19>/HighTempLoopDiagnostics' */
    /* RelationalOperator: '<S449>/Comparison1' incorporates:
     *  Inport: '<Root>/VeCPDR_b_HTAP_FunPer_ChkEnbl'
     *  Inport: '<Root>/VeHTIR_T_HVC_HtrClntIn_Temp'
     *  Inport: '<Root>/VeHTIR_T_HVC_HtrClntOut_Temp'
     *  Inport: '<Root>/VeHTIR_e_HVC_HtrClntIn_TempSensFlt'
     *  Inport: '<Root>/VeHTIR_e_HVC_HtrClntOut_TempSensFlt'
     *  Inport: '<Root>/VePMIR_I_HTAuxPumpCurrent'
     *  Inport: '<Root>/VePMIR_T_HTAuxPumpTemp'
     *  Inport: '<Root>/VePMIR_e_HTAuxPumpDryRun'
     *  Inport: '<Root>/VePMIR_n_HTAuxPumpRPMAct'
     *  Inport: '<Root>/VeRCVR_b_HT_Shtoff_VlvCmd'
     *  Inport: '<Root>/VeTRIR_T_HtrCorClnt_TmpIn'
     *  Logic: '<S19>/Logical1'
     *  Logic: '<S741>/Logical1'
     *  RelationalOperator: '<S450>/Comparison1'
     *  UnitDelay: '<S741>/Unit Delay'
     */
#if Rte_SysCon_Variant_THDR_13

    /* Outputs for Atomic SubSystem: '<S451>/HighTempLoop' */
    (void)Rte_Read_VeHTIR_e_HVC_HtrClntIn_TempSensFlt_Value(&tmpRead_0);

    /* RelationalOperator: '<S449>/Comparison1' incorporates:
     *  Constant: '<S582>/Constant'
     *  Inport: '<Root>/VeHTIR_e_HVC_HtrClntIn_TempSensFlt'
     */
    rtb_TmpSignalConversionAtVeTAIR_b_EEXV_R = (((uint32)tmpRead_0) ==
        CeHTIR_e_Warning_True);
    (void)Rte_Read_VeHTIR_e_HVC_HtrClntOut_TempSensFlt_Value(&tmpRead_1);

    /* RelationalOperator: '<S450>/Comparison1' incorporates:
     *  Constant: '<S583>/Constant'
     *  Inport: '<Root>/VeHTIR_e_HVC_HtrClntOut_TempSensFlt'
     */
    rtb_TmpSignalConversionAtVeTAIR_b_OEXV_R = (((uint32)tmpRead_1) ==
        CeHTIR_e_Warning_True);

    /* Outputs for Atomic SubSystem: '<S774>/Variant Subsystem' */
#if Rte_SysCon_Variant_THDR_3

    /* Outputs for Atomic SubSystem: '<S792>/M182' */
    /* VariantMerge generated from: '<S792>/MainRly' incorporates:
     *  Inport: '<S801>/VeTMIR_b_MainRly_CmdReq'
     */
    rtb_VariantMergeForOutportMainRly = rtb_TmpSignalConversionAtVeTMIR_b_MainRl;

    /* End of Outputs for SubSystem: '<S792>/M182' */
#else

    /* Outputs for Atomic SubSystem: '<S792>/OtherPrograms' */
    /* VariantMerge generated from: '<S792>/MainRly' incorporates:
     *  Logic: '<S802>/Logical4'
     */
    rtb_VariantMergeForOutportMainRly =
        (rtb_TmpSignalConversionAtVePMTR_b_ThrmlS && rtb_Logical1_fp);

    /* End of Outputs for SubSystem: '<S792>/OtherPrograms' */
#endif

    /* End of Outputs for SubSystem: '<S774>/Variant Subsystem' */

    /* S-Function (sfix_bitop): '<S750>/Bitwise Operator2' incorporates:
     *  Logic: '<S750>/Logical Operator'
     *  RelationalOperator: '<S750>/Relational Operator1'
     *  RelationalOperator: '<S750>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S750>/Bitwise Operator1'
     */
#if Rte_SysCon_Variant_THDR_14 || (!Rte_SysCon_Variant_THDR_21 && !Rte_SysCon_Variant_THDR_22)

    /* Logic: '<S754>/Logical10' incorporates:
     *  Constant: '<S750>/Constant1'
     *  Constant: '<S750>/Constant2'
     *  DataStoreRead: '<S750>/StatusByte_LIN1_BusOff'
     */
    rtb_Logical10_ly = (((((sint32)THDR_ac_DW.StatusByte_LIN1_BusOff) & 1) > 0) &&
                        ((((uint32)THDR_ac_DW.StatusByte_LIN1_BusOff) & 64U) ==
                         0U));

#endif

    /* End of S-Function (sfix_bitop): '<S750>/Bitwise Operator2' */

    /* SignalConversion generated from: '<S729>/Variant Source1' */
#if !Rte_SysCon_Variant_THDR_21 && !Rte_SysCon_Variant_THDR_22

    /* Logic: '<S730>/Logical5' */
    rtb_Logical5_f = rtb_Logical10_ly;

#endif

    /* End of SignalConversion generated from: '<S729>/Variant Source1' */

    /* S-Function (sfix_bitop): '<S751>/Bitwise Operator2' incorporates:
     *  Logic: '<S751>/Logical Operator'
     *  RelationalOperator: '<S751>/Relational Operator1'
     *  RelationalOperator: '<S751>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S751>/Bitwise Operator1'
     */
#if !Rte_SysCon_Variant_THDR_14 || Rte_SysCon_Variant_THDR_21

    /* Logic: '<S759>/Logical12' incorporates:
     *  Constant: '<S751>/Constant1'
     *  Constant: '<S751>/Constant2'
     *  DataStoreRead: '<S751>/StatusByte_LIN2_BusOff'
     */
    rtb_Logical12_iq = (((((sint32)THDR_ac_DW.StatusByte_LIN2_BusOff) & 1) > 0) &&
                        ((((uint32)THDR_ac_DW.StatusByte_LIN2_BusOff) & 64U) ==
                         0U));

#endif

    /* End of S-Function (sfix_bitop): '<S751>/Bitwise Operator2' */

    /* SignalConversion generated from: '<S729>/Variant Source1' */
#if Rte_SysCon_Variant_THDR_21

    /* Logic: '<S730>/Logical5' */
    rtb_Logical5_f = rtb_Logical12_iq;

#endif

    /* End of SignalConversion generated from: '<S729>/Variant Source1' */

    /* S-Function (sfix_bitop): '<S752>/Bitwise Operator2' incorporates:
     *  Logic: '<S752>/Logical Operator'
     *  RelationalOperator: '<S752>/Relational Operator1'
     *  RelationalOperator: '<S752>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S752>/Bitwise Operator1'
     */
#if Rte_SysCon_Variant_THDR_22

    /* Logic: '<S730>/Logical5' incorporates:
     *  Constant: '<S752>/Constant1'
     *  Constant: '<S752>/Constant2'
     *  DataStoreRead: '<S752>/StatusByte_LIN3_BusOff'
     */
    rtb_Logical5_f = (((((sint32)THDR_ac_DW.StatusByte_LIN3_BusOff) & 1) > 0) &&
                      ((((uint32)THDR_ac_DW.StatusByte_LIN3_BusOff) & 64U) == 0U));

#endif

    /* End of S-Function (sfix_bitop): '<S752>/Bitwise Operator2' */

    /* SignalConversion generated from: '<S729>/Variant Source' */
#if Rte_SysCon_Variant_THDR_14

    /* VariantMerge generated from: '<S729>/Variant Source' */
    rtb_VariantMerge_For_Variant_Source_Va_b = rtb_Logical10_ly;

#else

    /* VariantMerge generated from: '<S729>/Variant Source' incorporates:
     *  SignalConversion generated from: '<S729>/Variant Source'
     */
    rtb_VariantMerge_For_Variant_Source_Va_b = rtb_Logical12_iq;

#endif

    /* End of SignalConversion generated from: '<S729>/Variant Source' */

    /* S-Function (sfix_bitop): '<S795>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S795>/StatusByte_LostCommCoolHtrA'
     *  S-Function (sfix_bitop): '<S755>/Bitwise Operator2'
     */
    i = ((sint32)THDR_ac_DW.StatusByte_LostCommCoolHtrA) & 1;

    /* S-Function (sfix_bitop): '<S795>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S795>/StatusByte_LostCommCoolHtrA'
     *  S-Function (sfix_bitop): '<S755>/Bitwise Operator1'
     */
    rowIdx = ((uint32)THDR_ac_DW.StatusByte_LostCommCoolHtrA) & 64U;

    /* Logic: '<S791>/Logical1' incorporates:
     *  Logic: '<S730>/Logical2'
     */
    rtb_Logical5_f = !rtb_Logical5_f;

    /* Logic: '<S791>/Logical26' incorporates:
     *  Logic: '<S730>/Logical3'
     */
    tmpRead_g = !rtb_TmpSignalConversionAtVeHTIR_b_HVC_Ht;

    /* S-Function (sfix_bitop): '<S796>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S796>/StatusByte_LostCommCoolPmpA'
     *  S-Function (sfix_bitop): '<S807>/Bitwise Operator2'
     */
    VariantMerge_For_Variant_Source_Variant_ = ((sint32)
        THDR_ac_DW.StatusByte_LostCommCoolPmpA) & 1;

    /* S-Function (sfix_bitop): '<S796>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S796>/StatusByte_LostCommCoolPmpA'
     *  S-Function (sfix_bitop): '<S807>/Bitwise Operator1'
     */
    tmpRead_i = ((uint32)THDR_ac_DW.StatusByte_LostCommCoolPmpA) & 64U;

    /* Logic: '<S791>/Logical3' incorporates:
     *  Logic: '<S759>/Logical1'
     */
    rtb_VariantMerge_For_Variant_Source_Va_b =
        !rtb_VariantMerge_For_Variant_Source_Va_b;

    /* Logic: '<S759>/Logical12' incorporates:
     *  Constant: '<S793>/Constant1'
     *  Constant: '<S793>/Constant2'
     *  Constant: '<S794>/Constant1'
     *  Constant: '<S794>/Constant2'
     *  Constant: '<S795>/Constant1'
     *  Constant: '<S795>/Constant2'
     *  Constant: '<S796>/Constant1'
     *  Constant: '<S796>/Constant2'
     *  Constant: '<S797>/Calib'
     *  Constant: '<S798>/Calib'
     *  Constant: '<S799>/Calib'
     *  Constant: '<S800>/Calib'
     *  DataStoreRead: '<S793>/StatusByte_LIN1_BusOff'
     *  DataStoreRead: '<S794>/StatusByte_LIN2_BusOff'
     *  Logic: '<S774>/Logical20'
     *  Logic: '<S791>/Logical1'
     *  Logic: '<S791>/Logical16'
     *  Logic: '<S791>/Logical17'
     *  Logic: '<S791>/Logical2'
     *  Logic: '<S791>/Logical25'
     *  Logic: '<S791>/Logical26'
     *  Logic: '<S791>/Logical27'
     *  Logic: '<S791>/Logical28'
     *  Logic: '<S791>/Logical3'
     *  Logic: '<S791>/Logical4'
     *  Logic: '<S791>/Logical5'
     *  Logic: '<S791>/Logical6'
     *  Logic: '<S791>/Logical7'
     *  Logic: '<S793>/Logical Operator'
     *  Logic: '<S794>/Logical Operator'
     *  Logic: '<S795>/Logical Operator'
     *  Logic: '<S796>/Logical Operator'
     *  RelationalOperator: '<S793>/Relational Operator1'
     *  RelationalOperator: '<S793>/Relational Operator2'
     *  RelationalOperator: '<S794>/Relational Operator1'
     *  RelationalOperator: '<S794>/Relational Operator2'
     *  RelationalOperator: '<S795>/Relational Operator1'
     *  RelationalOperator: '<S795>/Relational Operator2'
     *  RelationalOperator: '<S796>/Relational Operator1'
     *  RelationalOperator: '<S796>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S793>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S793>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S794>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S794>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S795>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S795>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S796>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S796>/Bitwise Operator2'
     */
    rtb_Logical12_iq = ((rtb_VeTHDR_b_DiagGlblCndtnsValid_OvrdVal &&
                         rtb_VariantMergeForOutportMainRly) && (((((((((sint32)
        THDR_ac_DW.StatusByte_LIN1_BusOff) & 1) <= 0) || ((((uint32)
        THDR_ac_DW.StatusByte_LIN1_BusOff) & 64U) != 0U)) ||
                            (KeTHDR_b_LIN1_BusOff_Ovrrd_D)) && ((((((sint32)
        THDR_ac_DW.StatusByte_LIN2_BusOff) & 1) <= 0) || ((((uint32)
        THDR_ac_DW.StatusByte_LIN2_BusOff) & 64U) != 0U)) ||
                            (KeTHDR_b_LIN2_BusOff_Ovrrd_D))) && (tmpRead_g ||
                           (KeTHDR_b_ECH_LIN_Valid_Ovrrd_D))) &&
                         ((KeTHDR_b_M182_HTL_LINBusOff_LOC_Ovrrd_D) ||
                          ((rtb_Logical5_f && ((i <= 0) || (rowIdx != 0U))) ||
                           (rtb_VariantMerge_For_Variant_Source_Va_b &&
                            ((VariantMerge_For_Variant_Source_Variant_ <= 0) ||
        (tmpRead_i != 0U)))))));

    /* Logic: '<S754>/Logical10' incorporates:
     *  Constant: '<S755>/Constant1'
     *  Constant: '<S755>/Constant2'
     *  Logic: '<S730>/Logical1'
     *  Logic: '<S755>/Logical Operator'
     *  RelationalOperator: '<S755>/Relational Operator1'
     *  RelationalOperator: '<S755>/Relational Operator2'
     */
    rtb_Logical10_ly = ((i <= 0) || (rowIdx != 0U));

    /* Logic: '<S730>/Logical5' incorporates:
     *  Constant: '<S760>/Calib'
     */
    rtb_Logical5_f = ((KeTHDR_b_ECH_LINBusOff_Ovrrd_D) || rtb_Logical5_f);

    /* SignalConversion generated from: '<S730>/Variant Source' */
#if Rte_SysCon_Variant_THDR_3

    /* Logic: '<S730>/Logical7' */
    rtb_Logical7_kh = rtb_Logical3_bd;

#else

    /* Logic: '<S730>/Logical7' incorporates:
     *  Constant: '<S730>/FALSE Constant'
     *  SignalConversion generated from: '<S730>/Variant Source'
     */
    rtb_Logical7_kh = false;

#endif

    /* End of SignalConversion generated from: '<S730>/Variant Source' */
    (void)Rte_Read_VePMIR_n_HTAuxPumpRPMAct_Value(&tmpRead);

    /* Logic: '<S730>/Logical7' incorporates:
     *  Inport: '<Root>/VePMIR_n_HTAuxPumpRPMAct'
     */
    rtb_Logical7_kh = !rtb_Logical7_kh;

    /* Logic: '<S753>/Logical9' */
    rtb_VariantMergeForOutportMainRly = (((rtb_Logical12_iq && rtb_Logical10_ly)
        && rtb_Logical5_f) && rtb_Logical7_kh);

    /* RelationalOperator: '<S773>/Comparison2' incorporates:
     *  Constant: '<S786>/Calib'
     */
    rtb_Logical3_bd = (tmpRead > KeTHDR_n_MinDiag_HTAP_RPM);

    /* Outputs for Atomic SubSystem: '<S773>/EdgeRising' */
    /* Logic: '<S775>/OR1' incorporates:
     *  UnitDelay: '<S775>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HVC_Ht = !THDR_ac_DW.UnitDelay_DSTATE_ntv;

    /* Update for UnitDelay: '<S775>/Unit Delay' */
    THDR_ac_DW.UnitDelay_DSTATE_ntv = rtb_Logical3_bd;

    /* Outputs for Atomic SubSystem: '<S773>/Timer Retrigger Reset Enabled' */
    /* Switch: '<S790>/Switch1' incorporates:
     *  Constant: '<S787>/Calib'
     *  Logic: '<S775>/AND'
     *  Switch: '<S790>/Switch2'
     *  UnitDelay: '<S790>/Unit Delay'
     */
    if (rtb_Logical3_bd && rtb_TmpSignalConversionAtVeHTIR_b_HVC_Ht)
    {
        THDR_ac_DW.UnitDelay_DSTATE_c = KeTHDR_t_MinDiag_HTAPOnTime;
    }
    else
    {
        if (rtb_Logical3_bd)
        {
            /* UnitDelay: '<S790>/Unit Delay' incorporates:
             *  Constant: '<S777>/Calib'
             *  Constant: '<S790>/Constant Value4'
             *  MinMax: '<S790>/Maximum'
             *  Sum: '<S790>/Subtraction'
             *  Switch: '<S790>/Switch2'
             */
            THDR_ac_DW.UnitDelay_DSTATE_c = fmaxf(THDR_ac_DW.UnitDelay_DSTATE_c
                - HeTHDR_t_MedTEH, 0.0F);
        }
    }

    /* End of Switch: '<S790>/Switch1' */
    /* End of Outputs for SubSystem: '<S773>/Timer Retrigger Reset Enabled' */
    /* End of Outputs for SubSystem: '<S773>/EdgeRising' */
    (void)Rte_Read_VeRCVR_b_HT_Shtoff_VlvCmd_Value(&rtb_UnitDelay_io);

    /* RelationalOperator: '<S728>/Comparison7' incorporates:
     *  Constant: '<S742>/Calib'
     *  Inport: '<Root>/VeRCVR_b_HT_Shtoff_VlvCmd'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HVC_Ht = (VeTHDR_Pct_HT_CabVlvSts_AD <
        KeTHDR_Pct_CabVlvSts_MaxPos);

    /* Outputs for Atomic SubSystem: '<S741>/Counter Reset  Enabled ' */
    /* Switch: '<S745>/Switch2' incorporates:
     *  Constant: '<S745>/Constant Value2'
     *  Logic: '<S741>/Logical2'
     *  RelationalOperator: '<S741>/Comparison4'
     *  Switch: '<S745>/Switch1'
     *  UnitDelay: '<S741>/Unit Delay'
     *  UnitDelay: '<S745>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeHTIR_b_HVC_Ht !=
            THDR_ac_DW.UnitDelay_DSTATE_im)
    {
        THDR_ac_DW.UnitDelay_DSTATE_l = 0U;
    }
    else
    {
        /* UnitDelay: '<S745>/Unit Delay' incorporates:
         *  Constant: '<S745>/Constant Value1'
         *  Sum: '<S745>/Subtraction'
         *  Switch: '<S745>/Switch2'
         */
        THDR_ac_DW.UnitDelay_DSTATE_l = (uint16)(((uint32)
            THDR_ac_DW.UnitDelay_DSTATE_l) + 1U);
    }

    /* End of Switch: '<S745>/Switch2' */
    /* End of Outputs for SubSystem: '<S741>/Counter Reset  Enabled ' */

    /* RelationalOperator: '<S741>/Comparison1' incorporates:
     *  Constant: '<S741>/Constant Value'
     *  Constant: '<S744>/Calib'
     *  Product: '<S741>/Product'
     *  UnitDelay: '<S745>/Unit Delay'
     */
    rtb_AND_c0 = (((float32)THDR_ac_DW.UnitDelay_DSTATE_l) >=
                  (KeTHDR_t_CabVlvSts_Chk_DebTime * 10.0F));

    /* Outputs for Atomic SubSystem: '<S741>/EdgeRising2' */
    /* Logic: '<S746>/AND' incorporates:
     *  Logic: '<S746>/OR1'
     *  UnitDelay: '<S746>/Unit Delay'
     */
    rtb_UnitDelay_kj = (rtb_AND_c0 && (!THDR_ac_DW.UnitDelay_DSTATE_mx4));

    /* Update for UnitDelay: '<S746>/Unit Delay' */
    THDR_ac_DW.UnitDelay_DSTATE_mx4 = rtb_AND_c0;

    /* End of Outputs for SubSystem: '<S741>/EdgeRising2' */

    /* UnitDelay: '<S741>/Unit Delay2' incorporates:
     *  UnitDelay: '<S741>/Unit Delay'
     */
    THDR_ac_DW.UnitDelay_DSTATE_im = THDR_ac_DW.UnitDelay2_DSTATE_e;

    /* Switch: '<S747>/Switch1' incorporates:
     *  Constant: '<S743>/Calib'
     *  UnitDelay: '<S741>/Unit Delay'
     */
    THDR_ac_DW.UnitDelay_DSTATE_im = ((!KeTHDR_b_CabVlv_DisbDbnc_RST) &&
        (THDR_ac_DW.UnitDelay_DSTATE_im));

    /* Outputs for Enabled SubSystem: '<S741>/Subsystem2' incorporates:
     *  EnablePort: '<S748>/Enable'
     */
    if (rtb_UnitDelay_kj || (THDR_ac_DW.UnitDelay_DSTATE_im))
    {
        /* SignalConversion generated from: '<S748>/Out1' incorporates:
         *  Constant: '<S748>/Constant Value1'
         */
        THDR_ac_B.OutportBufferForOut1 = false;

        /* Gain: '<S749>/Gain' */
        VeTHDR_b_CabVlvSts_Chk_Deb_NewApp =
            rtb_TmpSignalConversionAtVeHTIR_b_HVC_Ht;
    }

    /* End of Outputs for SubSystem: '<S741>/Subsystem2' */
    (void)Rte_Read_VeCPDR_b_HTAP_FunPer_ChkEnbl_Value(&tmpRead_8);
    (void)Rte_Read_VePMIR_e_HTAuxPumpDryRun_Value(&tmpRead_7);

    /* Logic: '<S728>/Logical1' incorporates:
     *  Inport: '<Root>/VeCPDR_b_HTAP_FunPer_ChkEnbl'
     *  Inport: '<Root>/VePMIR_e_HTAuxPumpDryRun'
     *  Logic: '<S741>/Logical1'
     *  UnitDelay: '<S741>/Unit Delay'
     */
    THDR_ac_DW.UnitDelay_DSTATE_im = (rtb_TmpSignalConversionAtVeHTIR_b_HVC_Ht &&
        (VeTHDR_b_CabVlvSts_Chk_Deb_NewApp));

    /* Switch: '<S773>/Switch1' incorporates:
     *  Constant: '<S780>/Calib'
     *  Inport: '<Root>/VeTAIR_b_CPV2_PstnAct_FA'
     */
    if (KeTHDR_b_DT_BEV_Slct)
    {
        (void)Rte_Read_VeTAIR_b_CPV2_PstnAct_FA_Value(&tmpRead_l);

        /* Switch: '<S773>/Switch1' incorporates:
         *  Constant: '<S778>/Constant1'
         *  Constant: '<S778>/Constant2'
         *  Constant: '<S788>/Constant1'
         *  Constant: '<S788>/Constant2'
         *  Constant: '<S789>/Constant1'
         *  Constant: '<S789>/Constant2'
         *  DataStoreRead: '<S778>/StatusByte_HybPropSysCoolCntrlVal_E_Perf'
         *  DataStoreRead: '<S788>/StatusByte_LIN3_BusOff'
         *  DataStoreRead: '<S789>/StatusByte_LostComm_HybPropSysCoolCntrlVal_E'
         *  Inport: '<Root>/VeTAIR_b_CPV2_PstnAct_FA'
         *  Logic: '<S773>/Logical1'
         *  Logic: '<S773>/Logical2'
         *  Logic: '<S773>/Logical6'
         *  Logic: '<S773>/Logical7'
         *  Logic: '<S773>/Logical8'
         *  Logic: '<S778>/Logical Operator'
         *  Logic: '<S788>/Logical Operator'
         *  Logic: '<S789>/Logical Operator'
         *  RelationalOperator: '<S778>/Relational Operator1'
         *  RelationalOperator: '<S778>/Relational Operator2'
         *  RelationalOperator: '<S788>/Relational Operator1'
         *  RelationalOperator: '<S788>/Relational Operator2'
         *  RelationalOperator: '<S789>/Relational Operator1'
         *  RelationalOperator: '<S789>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S778>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S778>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S788>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S788>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S789>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S789>/Bitwise Operator2'
         */
        VeTHDR_b_HTL_CPV2_Enbl = ((((((((uint32)
            THDR_ac_DW.StatusByte_LIN3_BusOff) & 1U) == 0U) || ((((uint32)
            THDR_ac_DW.StatusByte_LIN3_BusOff) & 64U) != 0U)) && (((((uint32)
            THDR_ac_DW.StatusByte_LostComm_HybPropSysCoolCntrlV) & 1U) == 0U) ||
            ((((uint32)THDR_ac_DW.StatusByte_LostComm_HybPropSysCoolCntrlV) &
              64U) != 0U))) && (((((uint32)
            THDR_ac_DW.StatusByte_HybPropSysCoolCntrlVal_E_Perf) & 1U) == 0U) ||
                                ((((uint32)
            THDR_ac_DW.StatusByte_HybPropSysCoolCntrlVal_E_Perf) & 64U) != 0U)))
            && (!tmpRead_l));
    }
    else
    {
        /* Switch: '<S773>/Switch1' incorporates:
         *  Constant: '<S773>/TRUE Constant'
         */
        VeTHDR_b_HTL_CPV2_Enbl = true;
    }

    /* End of Switch: '<S773>/Switch1' */

    /* Switch: '<S773>/Switch' incorporates:
     *  Constant: '<S783>/Calib'
     *  Constant: '<S784>/Calib'
     */
    if (KeTHDR_b_HTShtOffVlv_Cmd_Diag_SD)
    {
        rtb_UnitDelay_io = KeTHDR_b_HTShtOffVlv_Cmd_Diag_D;
    }

    /* End of Switch: '<S773>/Switch' */

    /* Outputs for Atomic SubSystem: '<S773>/Timer Retrigger Reset Enabled' */
    /* Logic: '<S773>/Logical' incorporates:
     *  Constant: '<S776>/Constant'
     *  Constant: '<S779>/Calib'
     *  Constant: '<S781>/Calib'
     *  Constant: '<S782>/Calib'
     *  Constant: '<S785>/Calib'
     *  Constant: '<S790>/Constant Value2'
     *  Inport: '<Root>/VePMIR_e_HTAuxPumpDryRun'
     *  Logic: '<S773>/Logical18'
     *  Logic: '<S773>/Logical19'
     *  Logic: '<S773>/Logical21'
     *  Logic: '<S773>/Logical3'
     *  Logic: '<S773>/Logical4'
     *  Logic: '<S773>/Logical5'
     *  RelationalOperator: '<S773>/Comparison4'
     *  RelationalOperator: '<S773>/Comparison5'
     *  RelationalOperator: '<S790>/Greater  Than1'
     *  UnitDelay: '<S741>/Unit Delay'
     *  UnitDelay: '<S790>/Unit Delay'
     */
    VeTHDR_b_HTL_GlobalEnbl_2 = (((((((rtb_Logical3_bd &&
        (THDR_ac_DW.UnitDelay_DSTATE_c <= 0.0F)) && (VeTHDR_n_InputSpeed >=
        KeTHDR_n_Eng_RPM_Min)) && rtb_UnitDelay_io) &&
        ((KeTHDR_b_CabVlvSts_Chk_Deb_D) || (THDR_ac_DW.UnitDelay_DSTATE_im))) &&
        ((KeTHDR_b_HTAP_DryRunOvrrd_D) || (((uint32)tmpRead_7) ==
        CePMPR_e_FTSNA_False))) && ((KeTHDR_b_HTAP_FunPerf_PassOvrrd_D) ||
        (tmpRead_8 && (!VeTHDR_b_HTAPFunPer_FltDtct_AD)))) &&
        (VeTHDR_b_HTL_CPV2_Enbl));

    /* End of Outputs for SubSystem: '<S773>/Timer Retrigger Reset Enabled' */

    /* Logic: '<S754>/Logical1' incorporates:
     *  Constant: '<S761>/Calib'
     *  Logic: '<S730>/Logical4'
     */
    rtb_Logical3_bd = ((KeTHDR_b_ECH_RspnsErr_Ovrrd_D) || tmpRead_g);

    /* UnitDelay: '<S622>/Unit Delay' incorporates:
     *  Logic: '<S753>/Logical1'
     */
    rtb_UnitDelay_io = ((rtb_VariantMergeForOutportMainRly &&
                         (VeTHDR_b_HTL_GlobalEnbl_2)) && rtb_Logical3_bd);

    /* SignalConversion generated from: '<S593>/Variant Source' */
#if Rte_SysCon_Variant_THDR_4

    /* VariantMerge generated from: '<S593>/Variant Source' incorporates:
     *  Inport: '<Root>/VeTRIR_T_HtrCorClnt_TmpOut'
     */
    (void)Rte_Read_VeTRIR_T_HtrCorClnt_TmpOut_Value((&(VeTHDR_T_HTCL_Temp1)));

#else

    /* VariantMerge generated from: '<S593>/Variant Source' incorporates:
     *  Inport: '<Root>/VeTMIR_T_ElecClntHtr_TmpIn'
     */
    (void)Rte_Read_VeTMIR_T_ElecClntHtr_TmpIn_Value((&(VeTHDR_T_HTCL_Temp1)));

#endif

    /* End of SignalConversion generated from: '<S593>/Variant Source' */
    (void)Rte_Read_VePMIR_T_HTAuxPumpTemp_Value((&(VeTHDR_T_HTCL_Temp5)));
    (void)Rte_Read_VeTRIR_T_HtrCorClnt_TmpIn_Value((&(VeTHDR_T_HTCL_Temp4)));
    (void)Rte_Read_VeHTIR_T_HVC_HtrClntIn_Temp_Value((&(VeTHDR_T_HTCL_Temp2)));
    (void)Rte_Read_VeHTIR_T_HVC_HtrClntOut_Temp_Value((&(VeTHDR_T_HTCL_Temp3)));

    /* Switch: '<S847>/Switch2' incorporates:
     *  Constant: '<S852>/Calib'
     *  Constant: '<S853>/Calib'
     *  Inport: '<Root>/VeHTIR_T_HVC_HtrClntIn_Temp'
     *  Inport: '<Root>/VeHTIR_T_HVC_HtrClntOut_Temp'
     *  Inport: '<Root>/VePMIR_T_HTAuxPumpTemp'
     *  Inport: '<Root>/VeTRIR_T_HtrCorClnt_TmpIn'
     */
    if (!KeTHDR_b_HTCL_EnblSnsr1)
    {
        VeTHDR_T_HTCL_Temp1 = KeTHDR_T_HTCL_DfltTmp_SnsrDisabled;
    }

    /* End of Switch: '<S847>/Switch2' */

    /* Switch: '<S848>/Switch2' incorporates:
     *  Constant: '<S852>/Calib'
     *  Constant: '<S854>/Calib'
     *  Inport: '<Root>/VeHTIR_T_HVC_HtrClntIn_Temp'
     */
    if (!KeTHDR_b_HTCL_EnblSnsr2)
    {
        VeTHDR_T_HTCL_Temp2 = KeTHDR_T_HTCL_DfltTmp_SnsrDisabled;
    }

    /* End of Switch: '<S848>/Switch2' */

    /* Switch: '<S849>/Switch2' incorporates:
     *  Constant: '<S852>/Calib'
     *  Constant: '<S855>/Calib'
     *  Inport: '<Root>/VeHTIR_T_HVC_HtrClntOut_Temp'
     */
    if (!KeTHDR_b_HTCL_EnblSnsr3)
    {
        VeTHDR_T_HTCL_Temp3 = KeTHDR_T_HTCL_DfltTmp_SnsrDisabled;
    }

    /* End of Switch: '<S849>/Switch2' */

    /* Switch: '<S850>/Switch2' incorporates:
     *  Constant: '<S852>/Calib'
     *  Constant: '<S856>/Calib'
     *  Inport: '<Root>/VeTRIR_T_HtrCorClnt_TmpIn'
     */
    if (!KeTHDR_b_HTCL_EnblSnsr4)
    {
        VeTHDR_T_HTCL_Temp4 = KeTHDR_T_HTCL_DfltTmp_SnsrDisabled;
    }

    /* End of Switch: '<S850>/Switch2' */

    /* Switch: '<S851>/Switch2' incorporates:
     *  Constant: '<S852>/Calib'
     *  Constant: '<S857>/Calib'
     *  Inport: '<Root>/VePMIR_T_HTAuxPumpTemp'
     */
    if (!KeTHDR_b_HTCL_EnblSnsr5)
    {
        VeTHDR_T_HTCL_Temp5 = KeTHDR_T_HTCL_DfltTmp_SnsrDisabled;
    }

    /* End of Switch: '<S851>/Switch2' */

    /* SignalConversion generated from: '<S730>/Variant Source1' */
#if Rte_SysCon_Variant_THDR_14

    /* UnitDelay: '<S667>/Unit Delay1' */
    rtb_UnitDelay1_f = rtb_TmpSignalConversionAtVeTRIR_b_HtrC_n;

#else

    /* UnitDelay: '<S667>/Unit Delay1' incorporates:
     *  SignalConversion generated from: '<S730>/Variant Source1'
     */
    rtb_UnitDelay1_f = rtb_TmpSignalConversionAtVeTMIR_b_ElecCl;

#endif

    /* End of SignalConversion generated from: '<S730>/Variant Source1' */

    /* Logic: '<S758>/Logical5' incorporates:
     *  Logic: '<S757>/Logical17'
     */
    tmpRead_8 = (rtb_Logical12_iq && (VeTHDR_b_HTL_GlobalEnbl_2));

    /* UnitDelay: '<S667>/Unit Delay1' incorporates:
     *  Logic: '<S758>/Logical5'
     *  Logic: '<S758>/Logical6'
     */
    rtb_UnitDelay1_f = (tmpRead_8 && (!rtb_UnitDelay1_f));

    /* S-Function (sfix_bitop): '<S863>/Bitwise Operator2' incorporates:
     *  Logic: '<S858>/Logical Operator'
     *  Logic: '<S863>/Logical Operator'
     *  RelationalOperator: '<S858>/Relational Operator1'
     *  RelationalOperator: '<S858>/Relational Operator2'
     *  RelationalOperator: '<S863>/Relational Operator1'
     *  RelationalOperator: '<S863>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S858>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S858>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S863>/Bitwise Operator1'
     *  SignalConversion generated from: '<S593>/Variant Source1'
     * */
#if Rte_SysCon_Variant_THDR_4

    /* UnitDelay: '<S712>/Unit Delay1' incorporates:
     *  Constant: '<S863>/Constant1'
     *  Constant: '<S863>/Constant2'
     *  DataStoreRead: '<S863>/StatusByte_ECT_Snsr4CktPerf'
     */
    rtb_UnitDelay1_d3 = (((((sint32)THDR_ac_DW.StatusByte_ECT_Snsr4CktPerf) & 1)
                          > 0) && ((((uint32)
                            THDR_ac_DW.StatusByte_ECT_Snsr4CktPerf) & 64U) == 0U));

    /* UnitDelay: '<S712>/Unit Delay' */
    rtb_UnitDelay_im = rtb_TmpSignalConversionAtVeTRIR_b_HtrC_n;

#else

    /* UnitDelay: '<S712>/Unit Delay1' incorporates:
     *  Constant: '<S858>/Constant1'
     *  Constant: '<S858>/Constant2'
     *  DataStoreRead: '<S858>/StatusByte_CT2_SnsrPerf'
     *  Logic: '<S858>/Logical Operator'
     *  RelationalOperator: '<S858>/Relational Operator1'
     *  RelationalOperator: '<S858>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S858>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S858>/Bitwise Operator2'
     */
    rtb_UnitDelay1_d3 = (((((sint32)THDR_ac_DW.StatusByte_CT2_SnsrPerf) & 1) > 0)
                         && ((((uint32)THDR_ac_DW.StatusByte_CT2_SnsrPerf) & 64U)
                          == 0U));

    /* UnitDelay: '<S712>/Unit Delay' incorporates:
     *  SignalConversion generated from: '<S593>/Variant Source1'
     */
    rtb_UnitDelay_im = rtb_TmpSignalConversionAtVeTMIR_b_ElecCl;

#endif

    /* End of S-Function (sfix_bitop): '<S863>/Bitwise Operator2' */
    (void)Rte_Read_VePMIR_I_HTAuxPumpCurrent_Value(&tmpRead_f);

    /* UnitDelay: '<S712>/Unit Delay' incorporates:
     *  Constant: '<S853>/Calib'
     *  Inport: '<Root>/VePMIR_I_HTAuxPumpCurrent'
     *  Switch: '<S847>/Switch1'
     */
    rtb_UnitDelay_im = ((!KeTHDR_b_HTCL_EnblSnsr1) || rtb_UnitDelay_im);

    /* Gain: '<S864>/Gain' incorporates:
     *  Logic: '<S740>/Logical Operator3'
     *  Logic: '<S740>/Logical Operator7'
     */
    VeTHDR_b_HTCL_Disbl1 = (((!rtb_UnitDelay1_f) || rtb_UnitDelay1_d3) ||
                            rtb_UnitDelay_im);

    /* Outputs for Atomic SubSystem: '<S584>/Check_ECHIn_Diag' */
    /* S-Function (sfix_bitop): '<S861>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S861>/StatusByte_ECH_TempIn'
     *  S-Function (sfix_bitop): '<S599>/Bitwise Operator2'
     */
    rowIdx = ((uint32)THDR_ac_DW.StatusByte_ECH_TempIn) & 64U;

    /* End of Outputs for SubSystem: '<S584>/Check_ECHIn_Diag' */

    /* Gain: '<S865>/Gain' incorporates:
     *  Constant: '<S854>/Calib'
     *  Constant: '<S861>/Constant1'
     *  Constant: '<S861>/Constant2'
     *  DataStoreRead: '<S861>/StatusByte_ECH_TempIn'
     *  Logic: '<S740>/Logical Operator1'
     *  Logic: '<S740>/Logical Operator9'
     *  Logic: '<S861>/Logical Operator'
     *  RelationalOperator: '<S861>/Relational Operator1'
     *  RelationalOperator: '<S861>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S861>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S861>/Bitwise Operator2'
     *  Switch: '<S848>/Switch1'
     */
    VeTHDR_b_HTCL_Disbl2 = (((!rtb_UnitDelay_io) || (((((sint32)
        THDR_ac_DW.StatusByte_ECH_TempIn) & 1) > 0) && (rowIdx == 0U))) ||
                            ((!KeTHDR_b_HTCL_EnblSnsr2) ||
        rtb_TmpSignalConversionAtVeTAIR_b_EEXV_R));

    /* Logic: '<S754>/Logical10' */
    rtb_Logical10_ly = (((rtb_Logical10_ly && rtb_Logical12_iq) &&
                         rtb_Logical7_kh) && rtb_Logical5_f);

    /* Logic: '<S754>/Logical1' incorporates:
     *  Constant: '<S770>/Constant1'
     *  Constant: '<S770>/Constant2'
     *  Constant: '<S771>/Calib'
     *  DataStoreRead: '<S770>/StatusByte_CoolantVlvA_Perf'
     *  Logic: '<S768>/Logical11'
     *  Logic: '<S768>/Logical13'
     *  Logic: '<S770>/Logical Operator'
     *  RelationalOperator: '<S770>/Relational Operator1'
     *  RelationalOperator: '<S770>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S770>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S770>/Bitwise Operator2'
     */
    rtb_Logical3_bd = (((rtb_Logical10_ly && (VeTHDR_b_HTL_GlobalEnbl_2)) &&
                        rtb_Logical3_bd) && ((((((sint32)
                            THDR_ac_DW.StatusByte_CoolantVlvA_Perf) & 1) <= 0) ||
                         ((((uint32)THDR_ac_DW.StatusByte_CoolantVlvA_Perf) &
                           64U) != 0U)) || (KeTHDR_b_HTCV_Enbl4oldRU_Ovrrd_D)));

    /* Outputs for Atomic SubSystem: '<S584>/Check_ECHOut_Diag' */
    /* S-Function (sfix_bitop): '<S862>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S862>/StatusByte_ECH_TempOut'
     *  S-Function (sfix_bitop): '<S620>/Bitwise Operator2'
     */
    VariantMerge_For_Variant_Source_Varian_0 = ((uint32)
        THDR_ac_DW.StatusByte_ECH_TempOut) & 64U;

    /* End of Outputs for SubSystem: '<S584>/Check_ECHOut_Diag' */

    /* Gain: '<S866>/Gain' incorporates:
     *  Constant: '<S855>/Calib'
     *  Constant: '<S862>/Constant1'
     *  Constant: '<S862>/Constant2'
     *  DataStoreRead: '<S862>/StatusByte_ECH_TempOut'
     *  Logic: '<S740>/Logical Operator11'
     *  Logic: '<S740>/Logical Operator2'
     *  Logic: '<S862>/Logical Operator'
     *  RelationalOperator: '<S862>/Relational Operator1'
     *  RelationalOperator: '<S862>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S862>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S862>/Bitwise Operator2'
     *  Switch: '<S849>/Switch1'
     */
    VeTHDR_b_HTCL_Disbl3 = (((!rtb_Logical3_bd) || (((((sint32)
        THDR_ac_DW.StatusByte_ECH_TempOut) & 1) > 0) &&
        (VariantMerge_For_Variant_Source_Varian_0 == 0U))) ||
                            ((!KeTHDR_b_HTCL_EnblSnsr3) ||
        rtb_TmpSignalConversionAtVeTAIR_b_OEXV_R));

    /* Logic: '<S757>/Logical17' incorporates:
     *  Logic: '<S757>/Logical15'
     */
    VeTHDR_b_HCCTIS_Enbl_P1P2_NewApp = (tmpRead_8 &&
        (!rtb_TmpSignalConversionAtVeTRIR_b_HtrCor));

    /* Logic: '<S757>/Logical8' incorporates:
     *  Constant: '<S803>/Calib'
     *  Constant: '<S804>/Calib'
     *  Constant: '<S805>/Calib'
     *  Constant: '<S806>/Calib'
     *  Logic: '<S757>/Logical14'
     *  Logic: '<S757>/Logical16'
     *  Logic: '<S757>/Logical20'
     *  Logic: '<S757>/Logical22'
     *  RelationalOperator: '<S757>/Comparison4'
     *  RelationalOperator: '<S757>/Comparison6'
     *  UnitDelay: '<S741>/Unit Delay'
     */
    VeTHDR_b_HCCTIS_Enbl_RU_NewApp = (((((VeTHDR_Pct_HT_CabVlvSts_AD <
        KeTHDR_Pct_HTCV_Open_Pos) && (VeTHDR_Pct_HT_CabVlvSts_AD >=
        KeTHDR_Pct_HTCV_Close_Pos)) && (((!VeTHDR_b_STGDiagFA_HTCV_AD) &&
        (!VeTHDR_b_STBDiagFA_HTCV_AD)) && (!VeTHDR_b_OCDiagFA_HTCV_AD))) &&
        ((THDR_ac_DW.UnitDelay_DSTATE_im) || (KeTHDR_b_HCCTISCabVlvSts_Chk_Deb_D)))
        || (KeTHDR_b_HCCTISEnbl4oldRU_Ovrrd_D));

    /* UnitDelay: '<S712>/Unit Delay' incorporates:
     *  Logic: '<S757>/Logical6'
     */
    rtb_UnitDelay_im = ((VeTHDR_b_HCCTIS_Enbl_P1P2_NewApp) &&
                        (VeTHDR_b_HCCTIS_Enbl_RU_NewApp));

    /* Outputs for Atomic SubSystem: '<S584>/Check_HCCTIS_Diag' */
    /* S-Function (sfix_bitop): '<S859>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S859>/StatusByte_CT3_SnsrPerf'
     *  S-Function (sfix_bitop): '<S665>/Bitwise Operator2'
     */
    VariantMerge_For_Variant_Source_Varian_2 = ((uint32)
        THDR_ac_DW.StatusByte_CT3_SnsrPerf) & 64U;

    /* End of Outputs for SubSystem: '<S584>/Check_HCCTIS_Diag' */

    /* Gain: '<S867>/Gain' incorporates:
     *  Constant: '<S856>/Calib'
     *  Constant: '<S859>/Constant1'
     *  Constant: '<S859>/Constant2'
     *  DataStoreRead: '<S859>/StatusByte_CT3_SnsrPerf'
     *  Logic: '<S740>/Logical Operator13'
     *  Logic: '<S740>/Logical Operator4'
     *  Logic: '<S859>/Logical Operator'
     *  RelationalOperator: '<S859>/Relational Operator1'
     *  RelationalOperator: '<S859>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S859>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S859>/Bitwise Operator2'
     *  Switch: '<S850>/Switch1'
     */
    VeTHDR_b_HTCL_Disbl4 = (((!rtb_UnitDelay_im) || (((((sint32)
        THDR_ac_DW.StatusByte_CT3_SnsrPerf) & 1) > 0) &&
        (VariantMerge_For_Variant_Source_Varian_2 == 0U))) ||
                            ((!KeTHDR_b_HTCL_EnblSnsr4) ||
        rtb_TmpSignalConversionAtVeTRIR_b_HtrCor));

    /* Logic: '<S759>/Logical12' incorporates:
     *  Constant: '<S807>/Constant1'
     *  Constant: '<S807>/Constant2'
     *  Logic: '<S759>/Logical2'
     *  Logic: '<S807>/Logical Operator'
     *  RelationalOperator: '<S807>/Relational Operator1'
     *  RelationalOperator: '<S807>/Relational Operator2'
     */
    rtb_Logical12_iq = ((((VariantMerge_For_Variant_Source_Variant_ <= 0) ||
                          (tmpRead_i != 0U)) && rtb_Logical12_iq) &&
                        rtb_VariantMerge_For_Variant_Source_Va_b);

    /* UnitDelay: '<S712>/Unit Delay1' incorporates:
     *  Constant: '<S808>/Calib'
     *  Logic: '<S759>/Logical3'
     *  RelationalOperator: '<S759>/Relational Operator'
     */
    rtb_UnitDelay1_d3 = ((rtb_Logical12_iq && (VeTHDR_b_HTL_GlobalEnbl_2)) &&
                         (tmpRead_f <= KeTHDR_I_AHP_Curr_Cons));

    /* Switch: '<S851>/Switch1' incorporates:
     *  Constant: '<S857>/Calib'
     *  UnitDelay: '<S741>/Unit Delay'
     */
    THDR_ac_DW.UnitDelay_DSTATE_im = ((!KeTHDR_b_HTCL_EnblSnsr5) ||
        rtb_TmpSignalConversionAtVePMIR_b_HTAuxP);

    /* Outputs for Atomic SubSystem: '<S584>/Check_HTAP_Diag' */
    /* S-Function (sfix_bitop): '<S860>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S860>/StatusByte_CoolPmpATempSnsrPerf'
     *  S-Function (sfix_bitop): '<S710>/Bitwise Operator2'
     */
    tmpRead_i = ((uint32)THDR_ac_DW.StatusByte_CoolPmpATempSnsrPerf) & 64U;

    /* End of Outputs for SubSystem: '<S584>/Check_HTAP_Diag' */

    /* Gain: '<S868>/Gain' incorporates:
     *  Constant: '<S860>/Constant1'
     *  Constant: '<S860>/Constant2'
     *  DataStoreRead: '<S860>/StatusByte_CoolPmpATempSnsrPerf'
     *  Logic: '<S740>/Logical Operator15'
     *  Logic: '<S740>/Logical Operator5'
     *  Logic: '<S860>/Logical Operator'
     *  RelationalOperator: '<S860>/Relational Operator1'
     *  RelationalOperator: '<S860>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S860>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S860>/Bitwise Operator2'
     *  UnitDelay: '<S741>/Unit Delay'
     */
    VeTHDR_b_HTCL_Disbl5 = (((!rtb_UnitDelay1_d3) || (((((sint32)
        THDR_ac_DW.StatusByte_CoolPmpATempSnsrPerf) & 1) > 0) && (tmpRead_i ==
        0U))) || (THDR_ac_DW.UnitDelay_DSTATE_im));

    /* If: '<S816>/If' incorporates:
     *  Constant: '<S822>/Calib'
     *  Inport: '<Root>/VeTAIR_Pct_CPV2_PstnAct'
     *  Logic: '<S816>/Logical Operator'
     *  RelationalOperator: '<S816>/Comparison7'
     *  SignalConversion generated from: '<S732>/Variant Source'
     * */
#if Rte_SysCon_Variant_THDR_5

    (void)Rte_Read_VeTAIR_Pct_CPV2_PstnAct_Value(&tmpRead_k);

    /* RelationalOperator: '<S816>/Comparison7' incorporates:
     *  Constant: '<S821>/Calib'
     *  Inport: '<Root>/VeTAIR_Pct_CPV2_PstnAct'
     */
    VeTHDR_b_CPV2_ByPassHTR = (tmpRead_k <= KeTHDR_Pct_HTRVlv_ByPassPos);
    if ((VeTHDR_b_CPV2_ByPassHTR) && (KeTHDR_b_DT_BEV_Slct))
    {
        /* Outputs for IfAction SubSystem: '<S816>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S820>/Action Port'
         */
        /* VariantMerge generated from: '<S732>/Variant Source' incorporates:
         *  Constant: '<S833>/Calib'
         *  Constant: '<S834>/Calib'
         *  Constant: '<S835>/Calib'
         *  Constant: '<S836>/Calib'
         *  Merge: '<S816>/Merge'
         *  Merge: '<S816>/Merge1'
         *  Merge: '<S816>/Merge2'
         *  Merge: '<S816>/Merge3'
         *  SignalConversion generated from: '<S820>/VeTHDR_dT_HTCL_Thrshl_s1s4_HTRVlvBypass'
         *  SignalConversion generated from: '<S820>/VeTHDR_dT_HTCL_Thrshl_s2s4_HTRVlvBypass'
         *  SignalConversion generated from: '<S820>/VeTHDR_dT_HTCL_Thrshl_s3s4_HTRVlvBypass'
         *  SignalConversion generated from: '<S820>/VeTHDR_dT_HTCL_Thrshl_s4s5_HTRVlvBypass'
         */
        rtb_VariantMerge_For_Variant_Source_V_nb[2] =
            KeTHDR_i_HTCL_TmpSnsrRat_Level_s1s4_HTRVlvBypass;
        rtb_VariantMerge_For_Variant_Source_V_nb[5] =
            KeTHDR_i_HTCL_TmpSnsrRat_Level_s2s4_HTRVlvBypass;
        rtb_VariantMerge_For_Variant_Source_V_nb[7] =
            KeTHDR_i_HTCL_TmpSnsrRat_Level_s3s4_HTRVlvBypass;
        rtb_VariantMerge_For_Variant_Source_V_nb[9] =
            KeTHDR_i_HTCL_TmpSnsrRat_Level_s4s5_HTRVlvBypass;

        /* End of Outputs for SubSystem: '<S816>/If Action Subsystem1' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S816>/If Action Subsystem' incorporates:
         *  ActionPort: '<S819>/Action Port'
         */
        /* VariantMerge generated from: '<S732>/Variant Source' incorporates:
         *  Constant: '<S829>/Calib'
         *  Constant: '<S830>/Calib'
         *  Constant: '<S831>/Calib'
         *  Constant: '<S832>/Calib'
         *  Merge: '<S816>/Merge'
         *  Merge: '<S816>/Merge1'
         *  Merge: '<S816>/Merge2'
         *  Merge: '<S816>/Merge3'
         *  SignalConversion generated from: '<S819>/VeTHDR_dT_HTCL_Thrshl_s1s4'
         *  SignalConversion generated from: '<S819>/VeTHDR_dT_HTCL_Thrshl_s2s4'
         *  SignalConversion generated from: '<S819>/VeTHDR_dT_HTCL_Thrshl_s3s4'
         *  SignalConversion generated from: '<S819>/VeTHDR_dT_HTCL_Thrshl_s4s5'
         */
        rtb_VariantMerge_For_Variant_Source_V_nb[2] =
            KeTHDR_i_HTCL_TmpSnsrRat_Level_s1s4;
        rtb_VariantMerge_For_Variant_Source_V_nb[5] =
            KeTHDR_i_HTCL_TmpSnsrRat_Level_s2s4;
        rtb_VariantMerge_For_Variant_Source_V_nb[7] =
            KeTHDR_i_HTCL_TmpSnsrRat_Level_s3s4;
        rtb_VariantMerge_For_Variant_Source_V_nb[9] =
            KeTHDR_i_HTCL_TmpSnsrRat_Level_s4s5;

        /* End of Outputs for SubSystem: '<S816>/If Action Subsystem' */
    }

    /* VariantMerge generated from: '<S732>/Variant Source' incorporates:
     *  Constant: '<S822>/Calib'
     *  Constant: '<S823>/Calib'
     *  Constant: '<S824>/Calib'
     *  Constant: '<S825>/Calib'
     *  Constant: '<S826>/Calib'
     *  Constant: '<S827>/Calib'
     *  Constant: '<S828>/Calib'
     */
    rtb_VariantMerge_For_Variant_Source_V_nb[0] =
        KeTHDR_i_HTCL_TmpSnsrRat_Level_s1s2;
    rtb_VariantMerge_For_Variant_Source_V_nb[1] =
        KeTHDR_i_HTCL_TmpSnsrRat_Level_s1s3;
    rtb_VariantMerge_For_Variant_Source_V_nb[3] =
        KeTHDR_i_HTCL_TmpSnsrRat_Level_s1s5;
    rtb_VariantMerge_For_Variant_Source_V_nb[4] =
        KeTHDR_i_HTCL_TmpSnsrRat_Level_s2s3;
    rtb_VariantMerge_For_Variant_Source_V_nb[6] =
        KeTHDR_i_HTCL_TmpSnsrRat_Level_s2s5;
    rtb_VariantMerge_For_Variant_Source_V_nb[8] =
        KeTHDR_i_HTCL_TmpSnsrRat_Level_s3s5;

#else

    /* VariantMerge generated from: '<S732>/Variant Source' incorporates:
     *  Constant: '<S837>/Calib'
     *  Constant: '<S838>/Calib'
     *  Constant: '<S839>/Calib'
     *  Constant: '<S840>/Calib'
     *  Constant: '<S841>/Calib'
     *  Constant: '<S842>/Calib'
     *  Constant: '<S843>/Calib'
     *  Constant: '<S844>/Calib'
     *  Constant: '<S845>/Calib'
     *  Constant: '<S846>/Calib'
     *  SignalConversion generated from: '<S732>/Variant Source'
     */
    rtb_VariantMerge_For_Variant_Source_V_nb[0] =
        KeTHDR_i_HTCL_TmpSnsrRat_Level_s1s2;
    rtb_VariantMerge_For_Variant_Source_V_nb[1] =
        KeTHDR_i_HTCL_TmpSnsrRat_Level_s1s3;
    rtb_VariantMerge_For_Variant_Source_V_nb[2] =
        KeTHDR_i_HTCL_TmpSnsrRat_Level_s1s4;
    rtb_VariantMerge_For_Variant_Source_V_nb[3] =
        KeTHDR_i_HTCL_TmpSnsrRat_Level_s1s5;
    rtb_VariantMerge_For_Variant_Source_V_nb[4] =
        KeTHDR_i_HTCL_TmpSnsrRat_Level_s2s3;
    rtb_VariantMerge_For_Variant_Source_V_nb[5] =
        KeTHDR_i_HTCL_TmpSnsrRat_Level_s2s4;
    rtb_VariantMerge_For_Variant_Source_V_nb[6] =
        KeTHDR_i_HTCL_TmpSnsrRat_Level_s2s5;
    rtb_VariantMerge_For_Variant_Source_V_nb[7] =
        KeTHDR_i_HTCL_TmpSnsrRat_Level_s3s4;
    rtb_VariantMerge_For_Variant_Source_V_nb[8] =
        KeTHDR_i_HTCL_TmpSnsrRat_Level_s3s5;
    rtb_VariantMerge_For_Variant_Source_V_nb[9] =
        KeTHDR_i_HTCL_TmpSnsrRat_Level_s4s5;

#endif

    /* End of If: '<S816>/If' */

    /* Selector: '<S732>/TempSelector' incorporates:
     *  Constant: '<S817>/Calib'
     */
    for (i = 0; i < 10; i++)
    {
        THDR_ac_B.TempSelector[i] =
            KaTHDR_T_HTCL_TempSnsRat_Thrshld_Array[rtb_VariantMerge_For_Variant_Source_V_nb
            [i] - 1];
    }

    /* End of Selector: '<S732>/TempSelector' */

    /* Outputs for Atomic SubSystem: '<S593>/SnsrRat_V02' */
    THDR_ac_SnsrRat_V02();

    /* End of Outputs for SubSystem: '<S593>/SnsrRat_V02' */

    /* Logic: '<S753>/Logical5' */
    rtb_TmpSignalConversionAtVeTMIR_b_ElecCl =
        (rtb_VariantMergeForOutportMainRly &&
         rtb_TmpSignalConversionAtVeTAIR_b_EEXV_R);

    /* Outputs for Atomic SubSystem: '<S753>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S764>/EdgeRising' */
    /* Logic: '<S765>/AND' incorporates:
     *  Logic: '<S765>/OR1'
     *  UnitDelay: '<S765>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeTRIR_b_HtrCor =
        (rtb_TmpSignalConversionAtVeTMIR_b_ElecCl &&
         (!THDR_ac_DW.UnitDelay_DSTATE_eds));

    /* Update for UnitDelay: '<S765>/Unit Delay' */
    THDR_ac_DW.UnitDelay_DSTATE_eds = rtb_TmpSignalConversionAtVeTMIR_b_ElecCl;

    /* End of Outputs for SubSystem: '<S764>/EdgeRising' */

    /* Switch: '<S764>/Switch1' incorporates:
     *  Constant: '<S12>/Calib'
     *  Constant: '<S763>/Calib'
     *  Constant: '<S764>/Constant Value1'
     *  Logic: '<S764>/OR'
     *  Logic: '<S764>/OR1'
     *  MinMax: '<S764>/Minimum'
     *  Sum: '<S764>/Summation'
     *  UnitDelay: '<S764>/Unit Delay'
     */
    if ((!rtb_TmpSignalConversionAtVeTMIR_b_ElecCl) ||
            rtb_TmpSignalConversionAtVeTRIR_b_HtrCor)
    {
        THDR_ac_DW.UnitDelay_DSTATE_i = 0.0F;
    }
    else
    {
        THDR_ac_DW.UnitDelay_DSTATE_i = fminf
            (KeTHDR_t_HTCL_BSWFlt_Snsr2_DbncTime, HeTHDR_t_MedTEH +
             THDR_ac_DW.UnitDelay_DSTATE_i);
    }

    /* End of Switch: '<S764>/Switch1' */

    /* Logic: '<S764>/AND' incorporates:
     *  Constant: '<S763>/Calib'
     *  RelationalOperator: '<S764>/Greater  Than'
     *  UnitDelay: '<S764>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeTMIR_b_ElecCl =
        (rtb_TmpSignalConversionAtVeTMIR_b_ElecCl &&
         (THDR_ac_DW.UnitDelay_DSTATE_i >= KeTHDR_t_HTCL_BSWFlt_Snsr2_DbncTime));

    /* End of Outputs for SubSystem: '<S753>/Turn On Delay Time' */

    /* Logic: '<S753>/Logical6' incorporates:
     *  Constant: '<S762>/Calib'
     *  Logic: '<S753>/Logical2'
     *  Logic: '<S753>/Logical3'
     *  Logic: '<S753>/Logical4'
     */
    VeTHDR_b_ECH_In_Enbl_NewApp = ((rtb_UnitDelay_io &&
        (!VeTHDR_b_HTCL_S2_NoDecision)) || ((KeTHDR_b_HTCL_Snsr2_FA_EnblCnds) &&
        rtb_TmpSignalConversionAtVeTMIR_b_ElecCl));

    /* Logic: '<S731>/Logical8' incorporates:
     *  Constant: '<S813>/Calib'
     *  Logic: '<S731>/Logical9'
     */
    VeTHDR_b_HTCL_TempSnsrRat_FltSymptm_Snsr2 = ((VeTHDR_b_HTCL_FA_Rat_S2_Pred) ||
        (rtb_TmpSignalConversionAtVeTMIR_b_ElecCl &&
         (KeTHDR_b_HTCL_Snsr2_FA_FltCndsEnbl)));

    /* Outputs for Atomic SubSystem: '<S584>/Check_ECHIn_Diag' */
    /* RelationalOperator: '<S599>/Relational Operator3' incorporates:
     *  Constant: '<S599>/Constant3'
     */
    rtb_TmpSignalConversionAtVeTRIR_b_HtrCor = (rowIdx == 0U);

    /* Outputs for Atomic SubSystem: '<S599>/EdgeFalling1' */
    /* Logic: '<S599>/Logical Operator' incorporates:
     *  Logic: '<S602>/OR1'
     */
    rtb_TmpSignalConversionAtVeTRIR_b_HtrC_n =
        !rtb_TmpSignalConversionAtVeTRIR_b_HtrCor;

    /* End of Outputs for SubSystem: '<S599>/EdgeFalling1' */

    /* Logic: '<S599>/Logical1' incorporates:
     *  Constant: '<S597>/Calib'
     *  Constant: '<S598>/Calib'
     *  Constant: '<S599>/Constant1'
     *  DataStoreRead: '<S600>/StatusByte_ECH_TempIn'
     *  Logic: '<S586>/AND1'
     *  Logic: '<S599>/Logical Operator'
     *  Logic: '<S599>/Logical10'
     *  Logic: '<S599>/Logical12'
     *  RelationalOperator: '<S599>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S599>/Bitwise Operator3'
     */
    rtb_TmpSignalConversionAtVeTMIR_b_ElecCl = (((VeTHDR_b_ECH_In_Enbl_NewApp) &&
        (KeTHDR_b_ECH_In_XYEnbl)) && ((!KeTHDR_b_ECH_TempIn_LtchEnbl) ||
        (((((uint32)THDR_ac_DW.StatusByte_ECH_TempIn) & 1U) == 0U) ||
         rtb_TmpSignalConversionAtVeTRIR_b_HtrC_n)));

    /* Outputs for Atomic SubSystem: '<S599>/EdgeFalling1' */
    /* Logic: '<S602>/AND' incorporates:
     *  UnitDelay: '<S602>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeTRIR_b_HtrC_n =
        (rtb_TmpSignalConversionAtVeTRIR_b_HtrC_n &&
         (THDR_ac_DW.UnitDelay_DSTATE_bgq));

    /* Update for UnitDelay: '<S602>/Unit Delay' */
    THDR_ac_DW.UnitDelay_DSTATE_bgq = rtb_TmpSignalConversionAtVeTRIR_b_HtrCor;

    /* End of Outputs for SubSystem: '<S599>/EdgeFalling1' */

    /* Logic: '<S599>/Logical5' */
    rtb_TmpSignalConversionAtVeTRIR_b_HtrCor = ((VeTHDR_b_ResetCnts) ||
        rtb_TmpSignalConversionAtVeTRIR_b_HtrC_n);

    /* UnitDelay: '<S601>/Unit Delay1' incorporates:
     *  UnitDelay: '<S741>/Unit Delay'
     */
    THDR_ac_DW.UnitDelay_DSTATE_im = THDR_ac_DW.UnitDelay1_DSTATE_e;

    /* Outputs for Atomic SubSystem: '<S601>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S601>/Counter Reset  Enabled ' */
    /* Switch: '<S608>/Switch1' incorporates:
     *  Constant: '<S596>/Calib'
     *  Logic: '<S586>/AND3'
     *  Logic: '<S601>/Fail Counter Reset'
     *  Logic: '<S601>/NOT6'
     *  Switch: '<S608>/Switch2'
     *  Switch: '<S609>/Switch1'
     *  UnitDelay: '<S601>/Unit Delay'
     *  UnitDelay: '<S741>/Unit Delay'
     */
    if ((rtb_TmpSignalConversionAtVeTRIR_b_HtrCor ||
            (THDR_ac_DW.UnitDelay_DSTATE_lk)) || (THDR_ac_DW.UnitDelay_DSTATE_im))
    {
        /* Switch: '<S608>/Switch1' incorporates:
         *  Constant: '<S608>/Constant Value2'
         */
        VeTHDR_Cnt_ECH_In_FailCnt = 0U;

        /* Switch: '<S609>/Switch1' incorporates:
         *  Constant: '<S609>/Constant Value2'
         */
        VeTHDR_Cnt_ECH_In_SmpCnt = 0U;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeTMIR_b_ElecCl &&
                ((VeTHDR_b_HTCL_TempSnsrRat_FltSymptm_Snsr2) &&
                 (KeTHDR_b_ECH_In_Flt)))
        {
            /* Switch: '<S608>/Switch1' incorporates:
             *  Constant: '<S608>/Constant Value1'
             *  Sum: '<S608>/Subtraction'
             *  Switch: '<S608>/Switch2'
             *  UnitDelay: '<S608>/Unit Delay'
             */
            VeTHDR_Cnt_ECH_In_FailCnt = (uint16)(((uint32)
                VeTHDR_Cnt_ECH_In_FailCnt) + 1U);
        }

        /* Switch: '<S609>/Switch2' */
        if (rtb_TmpSignalConversionAtVeTMIR_b_ElecCl)
        {
            /* Switch: '<S609>/Switch1' incorporates:
             *  Constant: '<S609>/Constant Value1'
             *  Sum: '<S609>/Subtraction'
             *  Switch: '<S609>/Switch2'
             *  UnitDelay: '<S609>/Unit Delay'
             */
            VeTHDR_Cnt_ECH_In_SmpCnt = (uint16)(((uint32)
                VeTHDR_Cnt_ECH_In_SmpCnt) + 1U);
        }

        /* End of Switch: '<S609>/Switch2' */
    }

    /* End of Switch: '<S608>/Switch1' */
    /* End of Outputs for SubSystem: '<S601>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S601>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S601>/Greater Than or Equal ' incorporates:
     *  Constant: '<S594>/Calib'
     */
    THDR_ac_DW.UnitDelay1_DSTATE_e = (VeTHDR_Cnt_ECH_In_FailCnt >=
        KeTHDR_Cnt_ECH_Inlet_FailCnt);

    /* Logic: '<S601>/NOT5' incorporates:
     *  Constant: '<S595>/Calib'
     *  Logic: '<S601>/NOT3'
     *  RelationalOperator: '<S601>/Less Than  or Equal'
     */
    THDR_ac_DW.UnitDelay_DSTATE_lk = ((VeTHDR_Cnt_ECH_In_SmpCnt >=
        KeTHDR_Cnt_ECH_Inlet_SmpCnt) && (!THDR_ac_DW.UnitDelay1_DSTATE_e));

    /* Switch: '<S614>/Switch1' incorporates:
     *  Constant: '<S607>/Constant Value'
     *  DataStoreWrite: '<S586>/Data Store Write3'
     *  Switch: '<S613>/Switch1'
     */
    if (VeTHDR_b_ResetFOMs)
    {
        THDR_ac_DW.NeTHDR_Cnt_InTmpSns_MFOP = 0U;
    }
    else
    {
        if (THDR_ac_DW.UnitDelay_DSTATE_lk)
        {
            /* MinMax: '<S607>/Minimum2' incorporates:
             *  DataStoreRead: '<S586>/Data Store Read1'
             *  Switch: '<S613>/Switch1'
             */
            if (VeTHDR_Cnt_ECH_In_FailCnt > THDR_ac_DW.NeTHDR_Cnt_InTmpSns_MFOP)
            {
                /* DataStoreWrite: '<S586>/Data Store Write3' incorporates:
                 *  Switch: '<S613>/Switch1'
                 */
                THDR_ac_DW.NeTHDR_Cnt_InTmpSns_MFOP = VeTHDR_Cnt_ECH_In_FailCnt;
            }

            /* End of MinMax: '<S607>/Minimum2' */
        }
    }

    /* End of Switch: '<S614>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S599>/Fail' */
    THDR_ac_Fail(THDR_ac_DW.UnitDelay1_DSTATE_e,
                 &THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultSt_d);

    /* End of Outputs for SubSystem: '<S599>/Fail' */

    /* Outputs for Enabled SubSystem: '<S599>/Init' */
    THDR_ac_Init_l(rtb_TmpSignalConversionAtVeTRIR_b_HtrCor,
                   &THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultSt_d);

    /* End of Outputs for SubSystem: '<S599>/Init' */

    /* Outputs for Enabled SubSystem: '<S599>/Pass' */
    THDR_ac_Pass(THDR_ac_DW.UnitDelay_DSTATE_lk,
                 &THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultSt_d);

    /* End of Outputs for SubSystem: '<S599>/Pass' */

    /* VariantMerge generated from: '<S451>/ECH_InletTempSens_DTC' incorporates:
     *  Constant: '<S603>/Constant'
     *  RelationalOperator: '<S599>/Relational Operator'
     *  VariantMerge generated from: '<S451>/VeTHDR_e_FaultSts_ECH_TempIn'
     */
    VeTHDR_b_ECH_In_FltDtct_B4D = (((uint32)
        THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultSt_d) == CeDFIB_e_Fail);

    /* End of Outputs for SubSystem: '<S584>/Check_ECHIn_Diag' */

    /* Logic: '<S754>/Logical5' */
    rtb_TmpSignalConversionAtVeTMIR_b_ElecCl = (rtb_Logical10_ly &&
        rtb_TmpSignalConversionAtVeTAIR_b_OEXV_R);

    /* Outputs for Atomic SubSystem: '<S754>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S769>/EdgeRising' */
    /* Logic: '<S772>/AND' incorporates:
     *  Logic: '<S772>/OR1'
     *  UnitDelay: '<S772>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeTRIR_b_HtrCor =
        (rtb_TmpSignalConversionAtVeTMIR_b_ElecCl &&
         (!THDR_ac_DW.UnitDelay_DSTATE_pz));

    /* Update for UnitDelay: '<S772>/Unit Delay' */
    THDR_ac_DW.UnitDelay_DSTATE_pz = rtb_TmpSignalConversionAtVeTMIR_b_ElecCl;

    /* End of Outputs for SubSystem: '<S769>/EdgeRising' */

    /* Switch: '<S769>/Switch1' incorporates:
     *  Constant: '<S12>/Calib'
     *  Constant: '<S767>/Calib'
     *  Constant: '<S769>/Constant Value1'
     *  Logic: '<S769>/OR'
     *  Logic: '<S769>/OR1'
     *  MinMax: '<S769>/Minimum'
     *  Sum: '<S769>/Summation'
     *  UnitDelay: '<S769>/Unit Delay'
     */
    if ((!rtb_TmpSignalConversionAtVeTMIR_b_ElecCl) ||
            rtb_TmpSignalConversionAtVeTRIR_b_HtrCor)
    {
        THDR_ac_DW.UnitDelay_DSTATE_a = 0.0F;
    }
    else
    {
        THDR_ac_DW.UnitDelay_DSTATE_a = fminf
            (KeTHDR_t_HTCL_BSWFlt_Snsr2_DbncTime, HeTHDR_t_MedTEH +
             THDR_ac_DW.UnitDelay_DSTATE_a);
    }

    /* End of Switch: '<S769>/Switch1' */

    /* Logic: '<S769>/AND' incorporates:
     *  Constant: '<S767>/Calib'
     *  RelationalOperator: '<S769>/Greater  Than'
     *  UnitDelay: '<S769>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeTMIR_b_ElecCl =
        (rtb_TmpSignalConversionAtVeTMIR_b_ElecCl &&
         (THDR_ac_DW.UnitDelay_DSTATE_a >= KeTHDR_t_HTCL_BSWFlt_Snsr2_DbncTime));

    /* End of Outputs for SubSystem: '<S754>/Turn On Delay Time' */

    /* Logic: '<S754>/Logical6' incorporates:
     *  Constant: '<S766>/Calib'
     *  Logic: '<S754>/Logical2'
     *  Logic: '<S754>/Logical3'
     *  Logic: '<S754>/Logical4'
     */
    VeTHDR_b_ECH_Out_Enbl_NewApp = ((rtb_Logical3_bd &&
        (!VeTHDR_b_HTCL_S3_NoDecision)) || ((KeTHDR_b_HTCL_Snsr3_FA_EnblCnds) &&
        rtb_TmpSignalConversionAtVeTMIR_b_ElecCl));

    /* Logic: '<S731>/Logical10' incorporates:
     *  Constant: '<S814>/Calib'
     *  Logic: '<S731>/Logical11'
     */
    VeTHDR_b_HTCL_TempSnsrRat_FltSymptm_Snsr3 = ((VeTHDR_b_HTCL_FA_Rat_S3_Pred) ||
        (rtb_TmpSignalConversionAtVeTMIR_b_ElecCl &&
         (KeTHDR_b_HTCL_Snsr3_FA_FltCndsEnbl)));

    /* Outputs for Atomic SubSystem: '<S584>/Check_ECHOut_Diag' */
    /* RelationalOperator: '<S620>/Relational Operator3' incorporates:
     *  Constant: '<S620>/Constant3'
     */
    rtb_TmpSignalConversionAtVeTRIR_b_HtrCor =
        (VariantMerge_For_Variant_Source_Varian_0 == 0U);

    /* Outputs for Atomic SubSystem: '<S620>/EdgeFalling1' */
    /* Logic: '<S620>/Logical Operator' incorporates:
     *  Logic: '<S623>/OR1'
     */
    rtb_TmpSignalConversionAtVeTRIR_b_HtrC_n =
        !rtb_TmpSignalConversionAtVeTRIR_b_HtrCor;

    /* End of Outputs for SubSystem: '<S620>/EdgeFalling1' */

    /* Logic: '<S620>/Logical1' incorporates:
     *  Constant: '<S618>/Calib'
     *  Constant: '<S619>/Calib'
     *  Constant: '<S620>/Constant1'
     *  DataStoreRead: '<S621>/StatusByte_ECH_TempOut'
     *  Logic: '<S587>/AND1'
     *  Logic: '<S620>/Logical Operator'
     *  Logic: '<S620>/Logical10'
     *  Logic: '<S620>/Logical12'
     *  RelationalOperator: '<S620>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S620>/Bitwise Operator3'
     */
    rtb_TmpSignalConversionAtVeTMIR_b_ElecCl = (((VeTHDR_b_ECH_Out_Enbl_NewApp) &&
        (KeTHDR_b_ECH_Out_XYEnbl)) && ((!KeTHDR_b_ECH_TempOut_LtchEnbl) ||
        (((((uint32)THDR_ac_DW.StatusByte_ECH_TempOut) & 1U) == 0U) ||
         rtb_TmpSignalConversionAtVeTRIR_b_HtrC_n)));

    /* Outputs for Atomic SubSystem: '<S620>/EdgeFalling1' */
    /* Logic: '<S623>/AND' incorporates:
     *  UnitDelay: '<S623>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeTRIR_b_HtrC_n =
        (rtb_TmpSignalConversionAtVeTRIR_b_HtrC_n &&
         (THDR_ac_DW.UnitDelay_DSTATE_bm));

    /* Update for UnitDelay: '<S623>/Unit Delay' */
    THDR_ac_DW.UnitDelay_DSTATE_bm = rtb_TmpSignalConversionAtVeTRIR_b_HtrCor;

    /* End of Outputs for SubSystem: '<S620>/EdgeFalling1' */

    /* Logic: '<S620>/Logical5' */
    rtb_TmpSignalConversionAtVeTRIR_b_HtrCor = ((VeTHDR_b_ResetCnts) ||
        rtb_TmpSignalConversionAtVeTRIR_b_HtrC_n);

    /* UnitDelay: '<S622>/Unit Delay1' incorporates:
     *  UnitDelay: '<S741>/Unit Delay'
     */
    THDR_ac_DW.UnitDelay_DSTATE_im = THDR_ac_DW.UnitDelay1_DSTATE_p;

    /* Outputs for Atomic SubSystem: '<S622>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S622>/Counter Reset  Enabled ' */
    /* Switch: '<S629>/Switch1' incorporates:
     *  Constant: '<S617>/Calib'
     *  Logic: '<S587>/AND3'
     *  Logic: '<S622>/Fail Counter Reset'
     *  Logic: '<S622>/NOT6'
     *  Switch: '<S629>/Switch2'
     *  Switch: '<S630>/Switch1'
     *  UnitDelay: '<S622>/Unit Delay'
     *  UnitDelay: '<S741>/Unit Delay'
     */
    if ((rtb_TmpSignalConversionAtVeTRIR_b_HtrCor ||
            (THDR_ac_DW.UnitDelay_DSTATE_ea)) || (THDR_ac_DW.UnitDelay_DSTATE_im))
    {
        /* Switch: '<S629>/Switch1' incorporates:
         *  Constant: '<S629>/Constant Value2'
         */
        VeTHDR_Cnt_ECH_Out_FailCnt = 0U;

        /* Switch: '<S630>/Switch1' incorporates:
         *  Constant: '<S630>/Constant Value2'
         */
        VeTHDR_Cnt_ECH_Out_SmpCnt = 0U;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeTMIR_b_ElecCl &&
                ((VeTHDR_b_HTCL_TempSnsrRat_FltSymptm_Snsr3) &&
                 (KeTHDR_b_ECH_Out_Flt)))
        {
            /* Switch: '<S629>/Switch1' incorporates:
             *  Constant: '<S629>/Constant Value1'
             *  Sum: '<S629>/Subtraction'
             *  Switch: '<S629>/Switch2'
             *  UnitDelay: '<S629>/Unit Delay'
             */
            VeTHDR_Cnt_ECH_Out_FailCnt = (uint16)(((uint32)
                VeTHDR_Cnt_ECH_Out_FailCnt) + 1U);
        }

        /* Switch: '<S630>/Switch2' */
        if (rtb_TmpSignalConversionAtVeTMIR_b_ElecCl)
        {
            /* Switch: '<S630>/Switch1' incorporates:
             *  Constant: '<S630>/Constant Value1'
             *  Sum: '<S630>/Subtraction'
             *  Switch: '<S630>/Switch2'
             *  UnitDelay: '<S630>/Unit Delay'
             */
            VeTHDR_Cnt_ECH_Out_SmpCnt = (uint16)(((uint32)
                VeTHDR_Cnt_ECH_Out_SmpCnt) + 1U);
        }

        /* End of Switch: '<S630>/Switch2' */
    }

    /* End of Switch: '<S629>/Switch1' */
    /* End of Outputs for SubSystem: '<S622>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S622>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S622>/Greater Than or Equal ' incorporates:
     *  Constant: '<S615>/Calib'
     */
    THDR_ac_DW.UnitDelay1_DSTATE_p = (VeTHDR_Cnt_ECH_Out_FailCnt >=
        KeTHDR_Cnt_ECH_Outlet_FailCnt);

    /* Logic: '<S622>/NOT5' incorporates:
     *  Constant: '<S616>/Calib'
     *  Logic: '<S622>/NOT3'
     *  RelationalOperator: '<S622>/Less Than  or Equal'
     */
    THDR_ac_DW.UnitDelay_DSTATE_ea = ((VeTHDR_Cnt_ECH_Out_SmpCnt >=
        KeTHDR_Cnt_ECH_Outlet_SmpCnt) && (!THDR_ac_DW.UnitDelay1_DSTATE_p));

    /* Switch: '<S635>/Switch1' incorporates:
     *  Constant: '<S628>/Constant Value'
     *  DataStoreWrite: '<S587>/Data Store Write3'
     *  Switch: '<S634>/Switch1'
     */
    if (VeTHDR_b_ResetFOMs)
    {
        THDR_ac_DW.NeTHDR_Cnt_ECH_outTmpSns_MFOP = 0U;
    }
    else
    {
        if (THDR_ac_DW.UnitDelay_DSTATE_ea)
        {
            /* MinMax: '<S628>/Minimum2' incorporates:
             *  DataStoreRead: '<S587>/Data Store Read1'
             *  Switch: '<S634>/Switch1'
             */
            if (VeTHDR_Cnt_ECH_Out_FailCnt >
                    THDR_ac_DW.NeTHDR_Cnt_ECH_outTmpSns_MFOP)
            {
                /* DataStoreWrite: '<S587>/Data Store Write3' incorporates:
                 *  Switch: '<S634>/Switch1'
                 */
                THDR_ac_DW.NeTHDR_Cnt_ECH_outTmpSns_MFOP =
                    VeTHDR_Cnt_ECH_Out_FailCnt;
            }

            /* End of MinMax: '<S628>/Minimum2' */
        }
    }

    /* End of Switch: '<S635>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S620>/Fail' */
    THDR_ac_Fail(THDR_ac_DW.UnitDelay1_DSTATE_p,
                 &THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultSt_n);

    /* End of Outputs for SubSystem: '<S620>/Fail' */

    /* Outputs for Enabled SubSystem: '<S620>/Init' */
    THDR_ac_Init_l(rtb_TmpSignalConversionAtVeTRIR_b_HtrCor,
                   &THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultSt_n);

    /* End of Outputs for SubSystem: '<S620>/Init' */

    /* Outputs for Enabled SubSystem: '<S620>/Pass' */
    THDR_ac_Pass(THDR_ac_DW.UnitDelay_DSTATE_ea,
                 &THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultSt_n);

    /* End of Outputs for SubSystem: '<S620>/Pass' */

    /* RelationalOperator: '<S620>/Relational Operator' incorporates:
     *  Constant: '<S624>/Constant'
     *  VariantMerge generated from: '<S451>/VeTHDR_e_FaultSts_ECH_TempOut'
     */
    VeTHDR_b_ECH_Out_FltDtct = (((uint32)
        THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultSt_n) == CeDFIB_e_Fail);

    /* End of Outputs for SubSystem: '<S584>/Check_ECHOut_Diag' */

    /* Logic: '<S758>/Logical2' incorporates:
     *  Logic: '<S758>/Logical1'
     */
    VeTHDR_b_HCCTOS_Enbl_NewApp = (rtb_UnitDelay1_f &&
        (!VeTHDR_b_HTCL_S1_NoDecision));

    /* Outputs for Atomic SubSystem: '<S584>/Check_ECHTIS_Diag' */
#if Rte_SysCon_Variant_THDR_4

    /* Outputs for Atomic SubSystem: '<S588>/Else_ECHTIS_Diag' */
    /* Outputs for Atomic SubSystem: '<S584>/ECHTIS_HCCTOS_FltSymptm' */
    /* Outputs for Atomic SubSystem: '<S592>/HCCTOS_FltSymptm' */
    /* VariantMerge generated from: '<S592>/HCCTOS_FltSymptm_NewApp' incorporates:
     *  Inport: '<S727>/ECHTIS_HCCTOS_FltSymptm_NewApp'
     */
    rtb_VariantMergeForOutportHCCTOS_FltSymp = VeTHDR_b_HTCL_FA_Rat_S1_Pred;

    /* VariantMerge generated from: '<S451>/VeTHDR_e_FaultSts_CT2_SnsrPerf' incorporates:
     *  Constant: '<S638>/Constant'
     */
    THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultSt_e = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S451>/ECHTIS_DTC' incorporates:
     *  Constant: '<S636>/FALSE Constant'
     */
    VeTHDR_b_ECHTIS_FltDtct_B4D = false;

    /* End of Outputs for SubSystem: '<S588>/Else_ECHTIS_Diag' */
#else

    /* Outputs for Atomic SubSystem: '<S588>/If_ECHTIS_Diag' */
    /* Outputs for Atomic SubSystem: '<S592>/ECHTIS_FltSymptm' */
    /* VariantMerge generated from: '<S592>/HCCTOS_FltSymptm_NewApp' incorporates:
     *  Constant: '<S726>/FALSE Constant'
     */
    rtb_VariantMergeForOutportHCCTOS_FltSymp = false;

    /* RelationalOperator: '<S644>/Relational Operator3' incorporates:
     *  Constant: '<S644>/Constant3'
     *  DataStoreRead: '<S645>/StatusByte_CT2_SnsrPerf'
     *  S-Function (sfix_bitop): '<S644>/Bitwise Operator2'
     */
    rtb_TmpSignalConversionAtVeTMIR_b_ElecCl = ((((uint32)
        THDR_ac_DW.StatusByte_CT2_SnsrPerf) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S644>/EdgeFalling1' */
    /* Logic: '<S644>/Logical Operator' incorporates:
     *  Logic: '<S647>/OR1'
     */
    rtb_TmpSignalConversionAtVeTRIR_b_HtrCor =
        !rtb_TmpSignalConversionAtVeTMIR_b_ElecCl;

    /* End of Outputs for SubSystem: '<S644>/EdgeFalling1' */

    /* Logic: '<S644>/Logical1' incorporates:
     *  Constant: '<S641>/Calib'
     *  Constant: '<S643>/Calib'
     *  Constant: '<S644>/Constant1'
     *  DataStoreRead: '<S645>/StatusByte_CT2_SnsrPerf'
     *  Logic: '<S637>/AND1'
     *  Logic: '<S644>/Logical Operator'
     *  Logic: '<S644>/Logical10'
     *  Logic: '<S644>/Logical12'
     *  RelationalOperator: '<S644>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S644>/Bitwise Operator3'
     */
    rtb_UnitDelay1_f = (((VeTHDR_b_HCCTOS_Enbl_NewApp) &&
                         (KeTHDR_b_ECHTIS_XYEnbl)) &&
                        ((!KeTHDR_b_CT2_SnsrPerf_LtchEnbl) || (((((uint32)
        THDR_ac_DW.StatusByte_CT2_SnsrPerf) & 1U) == 0U) ||
                          rtb_TmpSignalConversionAtVeTRIR_b_HtrCor)));

    /* Outputs for Atomic SubSystem: '<S644>/EdgeFalling1' */
    /* Logic: '<S647>/AND' incorporates:
     *  UnitDelay: '<S647>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeTRIR_b_HtrCor =
        (rtb_TmpSignalConversionAtVeTRIR_b_HtrCor &&
         (THDR_ac_DW.UnitDelay_DSTATE_ci));

    /* Update for UnitDelay: '<S647>/Unit Delay' */
    THDR_ac_DW.UnitDelay_DSTATE_ci = rtb_TmpSignalConversionAtVeTMIR_b_ElecCl;

    /* End of Outputs for SubSystem: '<S644>/EdgeFalling1' */

    /* Logic: '<S644>/Logical5' */
    rtb_TmpSignalConversionAtVeTMIR_b_ElecCl = ((VeTHDR_b_ResetCnts) ||
        rtb_TmpSignalConversionAtVeTRIR_b_HtrCor);

    /* Outputs for Atomic SubSystem: '<S646>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S646>/Counter Reset  Enabled ' */
    /* Switch: '<S653>/Switch1' incorporates:
     *  Constant: '<S642>/Calib'
     *  Inport: '<S726>/ECHTIS_HCCTOS_FltSymptm_NewApp'
     *  Logic: '<S637>/AND2'
     *  Logic: '<S646>/Fail Counter Reset'
     *  Logic: '<S646>/NOT6'
     *  Switch: '<S653>/Switch2'
     *  Switch: '<S654>/Switch1'
     *  UnitDelay: '<S646>/Unit Delay'
     *  UnitDelay: '<S646>/Unit Delay1'
     */
    if ((rtb_TmpSignalConversionAtVeTMIR_b_ElecCl ||
            (THDR_ac_DW.UnitDelay_DSTATE_b1)) ||
            (THDR_ac_DW.UnitDelay1_DSTATE_fu))
    {
        /* Switch: '<S653>/Switch1' incorporates:
         *  Constant: '<S653>/Constant Value2'
         */
        VeTHDR_Cnt_ECHTIS_FailCnt = 0U;

        /* Switch: '<S654>/Switch1' incorporates:
         *  Constant: '<S654>/Constant Value2'
         */
        VeTHDR_Cnt_ECHTIS_SmpCnt = 0U;
    }
    else
    {
        if (rtb_UnitDelay1_f && ((VeTHDR_b_HTCL_FA_Rat_S1_Pred) &&
                                 (KeTHDR_b_ECHTIS_Flt)))
        {
            /* Switch: '<S653>/Switch1' incorporates:
             *  Constant: '<S653>/Constant Value1'
             *  Sum: '<S653>/Subtraction'
             *  Switch: '<S653>/Switch2'
             *  UnitDelay: '<S653>/Unit Delay'
             */
            VeTHDR_Cnt_ECHTIS_FailCnt = (uint16)(((uint32)
                VeTHDR_Cnt_ECHTIS_FailCnt) + 1U);
        }

        /* Switch: '<S654>/Switch2' */
        if (rtb_UnitDelay1_f)
        {
            /* Switch: '<S654>/Switch1' incorporates:
             *  Constant: '<S654>/Constant Value1'
             *  Sum: '<S654>/Subtraction'
             *  Switch: '<S654>/Switch2'
             *  UnitDelay: '<S654>/Unit Delay'
             */
            VeTHDR_Cnt_ECHTIS_SmpCnt = (uint16)(((uint32)
                VeTHDR_Cnt_ECHTIS_SmpCnt) + 1U);
        }

        /* End of Switch: '<S654>/Switch2' */
    }

    /* End of Switch: '<S653>/Switch1' */
    /* End of Outputs for SubSystem: '<S646>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S646>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S646>/Greater Than or Equal ' incorporates:
     *  Constant: '<S639>/Calib'
     */
    THDR_ac_DW.UnitDelay1_DSTATE_fu = (VeTHDR_Cnt_ECHTIS_FailCnt >=
        KeTHDR_Cnt_ECHTIS_FailCnt);

    /* Logic: '<S646>/NOT5' incorporates:
     *  Constant: '<S640>/Calib'
     *  Logic: '<S646>/NOT3'
     *  RelationalOperator: '<S646>/Less Than  or Equal'
     */
    THDR_ac_DW.UnitDelay_DSTATE_b1 = ((VeTHDR_Cnt_ECHTIS_SmpCnt >=
        KeTHDR_Cnt_ECHTIS_SmpCnt) && (!THDR_ac_DW.UnitDelay1_DSTATE_fu));

    /* Switch: '<S659>/Switch1' incorporates:
     *  Constant: '<S652>/Constant Value'
     *  DataStoreWrite: '<S637>/Data Store Write3'
     *  Switch: '<S658>/Switch1'
     */
    if (VeTHDR_b_ResetFOMs)
    {
        THDR_ac_DW.NeTHDR_Cnt_ECHTIS_MFOP = 0U;
    }
    else
    {
        if (THDR_ac_DW.UnitDelay_DSTATE_b1)
        {
            /* MinMax: '<S652>/Minimum2' incorporates:
             *  DataStoreRead: '<S637>/Data Store Read1'
             *  Switch: '<S658>/Switch1'
             */
            if (VeTHDR_Cnt_ECHTIS_FailCnt > THDR_ac_DW.NeTHDR_Cnt_ECHTIS_MFOP)
            {
                /* DataStoreWrite: '<S637>/Data Store Write3' incorporates:
                 *  Switch: '<S658>/Switch1'
                 */
                THDR_ac_DW.NeTHDR_Cnt_ECHTIS_MFOP = VeTHDR_Cnt_ECHTIS_FailCnt;
            }

            /* End of MinMax: '<S652>/Minimum2' */
        }
    }

    /* End of Switch: '<S659>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S644>/Fail' */
    THDR_ac_Fail(THDR_ac_DW.UnitDelay1_DSTATE_fu,
                 &THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultSt_e);

    /* End of Outputs for SubSystem: '<S644>/Fail' */

    /* Outputs for Enabled SubSystem: '<S644>/Init' */
    THDR_ac_Init_l(rtb_TmpSignalConversionAtVeTMIR_b_ElecCl,
                   &THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultSt_e);

    /* End of Outputs for SubSystem: '<S644>/Init' */

    /* Outputs for Enabled SubSystem: '<S644>/Pass' */
    THDR_ac_Pass(THDR_ac_DW.UnitDelay_DSTATE_b1,
                 &THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultSt_e);

    /* End of Outputs for SubSystem: '<S644>/Pass' */

    /* VariantMerge generated from: '<S451>/ECHTIS_DTC' incorporates:
     *  Constant: '<S648>/Constant'
     *  RelationalOperator: '<S644>/Relational Operator'
     *  VariantMerge generated from: '<S451>/VeTHDR_e_FaultSts_CT2_SnsrPerf'
     */
    VeTHDR_b_ECHTIS_FltDtct_B4D = (((uint32)
        THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultSt_e) == CeDFIB_e_Fail);

    /* End of Outputs for SubSystem: '<S588>/If_ECHTIS_Diag' */
#endif

    /* End of Outputs for SubSystem: '<S592>/HCCTOS_FltSymptm' */
    /* End of Outputs for SubSystem: '<S584>/ECHTIS_HCCTOS_FltSymptm' */
    /* End of Outputs for SubSystem: '<S584>/Check_ECHTIS_Diag' */

    /* Logic: '<S757>/Logical7' incorporates:
     *  Logic: '<S757>/Logical1'
     */
    VeTHDR_b_HCCTIS_Enbl_NewApp = (rtb_UnitDelay_im &&
        (!VeTHDR_b_HTCL_S4_NoDecision));

    /* Outputs for Atomic SubSystem: '<S584>/Check_HCCTIS_Diag' */
    /* RelationalOperator: '<S665>/Relational Operator3' incorporates:
     *  Constant: '<S665>/Constant3'
     */
    rtb_TmpSignalConversionAtVeTRIR_b_HtrC_n =
        (VariantMerge_For_Variant_Source_Varian_2 == 0U);

    /* Outputs for Atomic SubSystem: '<S665>/EdgeFalling1' */
    /* Logic: '<S665>/Logical Operator' incorporates:
     *  Logic: '<S668>/OR1'
     */
    rtb_UnitDelay1_f = !rtb_TmpSignalConversionAtVeTRIR_b_HtrC_n;

    /* End of Outputs for SubSystem: '<S665>/EdgeFalling1' */

    /* Logic: '<S665>/Logical1' incorporates:
     *  Constant: '<S662>/Calib'
     *  Constant: '<S664>/Calib'
     *  Constant: '<S665>/Constant1'
     *  DataStoreRead: '<S666>/StatusByte_CT3_SnsrPerf'
     *  Logic: '<S589>/AND1'
     *  Logic: '<S665>/Logical Operator'
     *  Logic: '<S665>/Logical10'
     *  Logic: '<S665>/Logical12'
     *  RelationalOperator: '<S665>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S665>/Bitwise Operator3'
     */
    rtb_UnitDelay_im = (((VeTHDR_b_HCCTIS_Enbl_NewApp) &&
                         (KeTHDR_b_HCCTIS_XYEnbl)) &&
                        ((!KeTHDR_b_CT3_SnsrPerf_LtchEnbl) || (((((uint32)
        THDR_ac_DW.StatusByte_CT3_SnsrPerf) & 1U) == 0U) || rtb_UnitDelay1_f)));

    /* Outputs for Atomic SubSystem: '<S665>/EdgeFalling1' */
    /* Logic: '<S668>/AND' incorporates:
     *  UnitDelay: '<S668>/Unit Delay'
     */
    rtb_UnitDelay1_f = (rtb_UnitDelay1_f && (THDR_ac_DW.UnitDelay_DSTATE_gb));

    /* Update for UnitDelay: '<S668>/Unit Delay' */
    THDR_ac_DW.UnitDelay_DSTATE_gb = rtb_TmpSignalConversionAtVeTRIR_b_HtrC_n;

    /* End of Outputs for SubSystem: '<S665>/EdgeFalling1' */

    /* Logic: '<S665>/Logical5' */
    rtb_TmpSignalConversionAtVeTRIR_b_HtrC_n = ((VeTHDR_b_ResetCnts) ||
        rtb_UnitDelay1_f);

    /* Outputs for Atomic SubSystem: '<S667>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S667>/Counter Reset  Enabled ' */
    /* Switch: '<S674>/Switch1' incorporates:
     *  Constant: '<S663>/Calib'
     *  Logic: '<S589>/AND3'
     *  Logic: '<S667>/Fail Counter Reset'
     *  Logic: '<S667>/NOT6'
     *  Switch: '<S674>/Switch2'
     *  Switch: '<S675>/Switch1'
     *  UnitDelay: '<S667>/Unit Delay'
     *  UnitDelay: '<S667>/Unit Delay1'
     */
    if ((rtb_TmpSignalConversionAtVeTRIR_b_HtrC_n ||
            (THDR_ac_DW.UnitDelay_DSTATE_lzc)) ||
            (THDR_ac_DW.UnitDelay1_DSTATE_do))
    {
        /* Switch: '<S674>/Switch1' incorporates:
         *  Constant: '<S674>/Constant Value2'
         */
        VeTHDR_Cnt_HCCTIS_FailCnt = 0U;

        /* Switch: '<S675>/Switch1' incorporates:
         *  Constant: '<S675>/Constant Value2'
         */
        VeTHDR_Cnt_HCCTIS_SmpCnt = 0U;
    }
    else
    {
        if (rtb_UnitDelay_im && ((VeTHDR_b_HTCL_FA_Rat_S4_Pred) &&
                                 (KeTHDR_b_HCCTIS_Flt)))
        {
            /* Switch: '<S674>/Switch1' incorporates:
             *  Constant: '<S674>/Constant Value1'
             *  Sum: '<S674>/Subtraction'
             *  Switch: '<S674>/Switch2'
             *  UnitDelay: '<S674>/Unit Delay'
             */
            VeTHDR_Cnt_HCCTIS_FailCnt = (uint16)(((uint32)
                VeTHDR_Cnt_HCCTIS_FailCnt) + 1U);
        }

        /* Switch: '<S675>/Switch2' */
        if (rtb_UnitDelay_im)
        {
            /* Switch: '<S675>/Switch1' incorporates:
             *  Constant: '<S675>/Constant Value1'
             *  Sum: '<S675>/Subtraction'
             *  Switch: '<S675>/Switch2'
             *  UnitDelay: '<S675>/Unit Delay'
             */
            VeTHDR_Cnt_HCCTIS_SmpCnt = (uint16)(((uint32)
                VeTHDR_Cnt_HCCTIS_SmpCnt) + 1U);
        }

        /* End of Switch: '<S675>/Switch2' */
    }

    /* End of Switch: '<S674>/Switch1' */
    /* End of Outputs for SubSystem: '<S667>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S667>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S667>/Greater Than or Equal ' incorporates:
     *  Constant: '<S660>/Calib'
     */
    THDR_ac_DW.UnitDelay1_DSTATE_do = (VeTHDR_Cnt_HCCTIS_FailCnt >=
        KeTHDR_Cnt_HCCTIS_FailCnt);

    /* Logic: '<S667>/NOT5' incorporates:
     *  Constant: '<S661>/Calib'
     *  Logic: '<S667>/NOT3'
     *  RelationalOperator: '<S667>/Less Than  or Equal'
     */
    THDR_ac_DW.UnitDelay_DSTATE_lzc = ((VeTHDR_Cnt_HCCTIS_SmpCnt >=
        KeTHDR_Cnt_HCCTIS_SmpCnt) && (!THDR_ac_DW.UnitDelay1_DSTATE_do));

    /* Switch: '<S680>/Switch1' incorporates:
     *  Constant: '<S673>/Constant Value'
     *  DataStoreWrite: '<S589>/Data Store Write3'
     *  Switch: '<S679>/Switch1'
     */
    if (VeTHDR_b_ResetFOMs)
    {
        THDR_ac_DW.NeTHDR_Cnt_HCCTIS_MFOP = 0U;
    }
    else
    {
        if (THDR_ac_DW.UnitDelay_DSTATE_lzc)
        {
            /* MinMax: '<S673>/Minimum2' incorporates:
             *  DataStoreRead: '<S589>/Data Store Read1'
             *  Switch: '<S679>/Switch1'
             */
            if (VeTHDR_Cnt_HCCTIS_FailCnt > THDR_ac_DW.NeTHDR_Cnt_HCCTIS_MFOP)
            {
                /* DataStoreWrite: '<S589>/Data Store Write3' incorporates:
                 *  Switch: '<S679>/Switch1'
                 */
                THDR_ac_DW.NeTHDR_Cnt_HCCTIS_MFOP = VeTHDR_Cnt_HCCTIS_FailCnt;
            }

            /* End of MinMax: '<S673>/Minimum2' */
        }
    }

    /* End of Switch: '<S680>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S665>/Fail' */
    THDR_ac_Fail(THDR_ac_DW.UnitDelay1_DSTATE_do,
                 &THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultSt_a);

    /* End of Outputs for SubSystem: '<S665>/Fail' */

    /* Outputs for Enabled SubSystem: '<S665>/Init' */
    THDR_ac_Init_l(rtb_TmpSignalConversionAtVeTRIR_b_HtrC_n,
                   &THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultSt_a);

    /* End of Outputs for SubSystem: '<S665>/Init' */

    /* Outputs for Enabled SubSystem: '<S665>/Pass' */
    THDR_ac_Pass(THDR_ac_DW.UnitDelay_DSTATE_lzc,
                 &THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultSt_a);

    /* End of Outputs for SubSystem: '<S665>/Pass' */

    /* RelationalOperator: '<S665>/Relational Operator' incorporates:
     *  Constant: '<S669>/Constant'
     *  VariantMerge generated from: '<S451>/VeTHDR_e_FaultSts_CT3_SnsrPerf'
     */
    VeTHDR_b_HCCTIS_FltDtct = (((uint32)
        THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultSt_a) == CeDFIB_e_Fail);

    /* End of Outputs for SubSystem: '<S584>/Check_HCCTIS_Diag' */

    /* Outputs for Atomic SubSystem: '<S584>/Check_HCCTOS_Diag' */
#if Rte_SysCon_Variant_THDR_4

    /* Outputs for Atomic SubSystem: '<S590>/If_HCCTOS_Diag' */
    /* RelationalOperator: '<S689>/Relational Operator3' incorporates:
     *  Constant: '<S689>/Constant3'
     *  DataStoreRead: '<S690>/StatusByte_ECT_Snsr4CktPerf'
     *  S-Function (sfix_bitop): '<S689>/Bitwise Operator2'
     */
    rtb_TmpSignalConversionAtVeTRIR_b_HtrC_n = ((((uint32)
        THDR_ac_DW.StatusByte_ECT_Snsr4CktPerf) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S689>/EdgeFalling1' */
    /* Logic: '<S689>/Logical Operator' incorporates:
     *  Logic: '<S692>/OR1'
     */
    rtb_UnitDelay1_f = !rtb_TmpSignalConversionAtVeTRIR_b_HtrC_n;

    /* End of Outputs for SubSystem: '<S689>/EdgeFalling1' */

    /* Logic: '<S689>/Logical1' incorporates:
     *  Constant: '<S686>/Calib'
     *  Constant: '<S688>/Calib'
     *  Constant: '<S689>/Constant1'
     *  DataStoreRead: '<S690>/StatusByte_ECT_Snsr4CktPerf'
     *  Logic: '<S682>/AND1'
     *  Logic: '<S689>/Logical Operator'
     *  Logic: '<S689>/Logical10'
     *  Logic: '<S689>/Logical12'
     *  RelationalOperator: '<S689>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S689>/Bitwise Operator3'
     */
    rtb_UnitDelay_im = (((VeTHDR_b_HCCTOS_Enbl_NewApp) &&
                         (KeTHDR_b_HCCTOS_XYEnbl)) &&
                        ((!KeTHDR_b_ECT_Snsr4CktPerf_LtchEnbl) || (((((uint32)
        THDR_ac_DW.StatusByte_ECT_Snsr4CktPerf) & 1U) == 0U) || rtb_UnitDelay1_f)));

    /* Outputs for Atomic SubSystem: '<S689>/EdgeFalling1' */
    /* Logic: '<S692>/AND' incorporates:
     *  UnitDelay: '<S692>/Unit Delay'
     */
    rtb_UnitDelay1_f = (rtb_UnitDelay1_f && (THDR_ac_DW.UnitDelay_DSTATE_oi));

    /* Update for UnitDelay: '<S692>/Unit Delay' */
    THDR_ac_DW.UnitDelay_DSTATE_oi = rtb_TmpSignalConversionAtVeTRIR_b_HtrC_n;

    /* End of Outputs for SubSystem: '<S689>/EdgeFalling1' */

    /* Logic: '<S689>/Logical5' */
    rtb_TmpSignalConversionAtVeTRIR_b_HtrC_n = ((VeTHDR_b_ResetCnts) ||
        rtb_UnitDelay1_f);

    /* Outputs for Atomic SubSystem: '<S691>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S691>/Counter Reset  Enabled ' */
    /* Switch: '<S698>/Switch1' incorporates:
     *  Constant: '<S687>/Calib'
     *  Logic: '<S682>/AND2'
     *  Logic: '<S691>/Fail Counter Reset'
     *  Logic: '<S691>/NOT6'
     *  Switch: '<S698>/Switch2'
     *  Switch: '<S699>/Switch1'
     *  UnitDelay: '<S691>/Unit Delay'
     *  UnitDelay: '<S691>/Unit Delay1'
     */
    if ((rtb_TmpSignalConversionAtVeTRIR_b_HtrC_n ||
            (THDR_ac_DW.UnitDelay_DSTATE_a0)) || (THDR_ac_DW.UnitDelay1_DSTATE_j))
    {
        /* Switch: '<S698>/Switch1' incorporates:
         *  Constant: '<S698>/Constant Value2'
         */
        VeTHDR_Cnt_HCCTOS_FailCnt = 0U;

        /* Switch: '<S699>/Switch1' incorporates:
         *  Constant: '<S699>/Constant Value2'
         */
        VeTHDR_Cnt_HCCTOS_SmpCnt = 0U;
    }
    else
    {
        if (rtb_UnitDelay_im && (rtb_VariantMergeForOutportHCCTOS_FltSymp &&
                                 (KeTHDR_b_HCCTOS_Flt)))
        {
            /* Switch: '<S698>/Switch1' incorporates:
             *  Constant: '<S698>/Constant Value1'
             *  Sum: '<S698>/Subtraction'
             *  Switch: '<S698>/Switch2'
             *  UnitDelay: '<S698>/Unit Delay'
             */
            VeTHDR_Cnt_HCCTOS_FailCnt = (uint16)(((uint32)
                VeTHDR_Cnt_HCCTOS_FailCnt) + 1U);
        }

        /* Switch: '<S699>/Switch2' */
        if (rtb_UnitDelay_im)
        {
            /* Switch: '<S699>/Switch1' incorporates:
             *  Constant: '<S699>/Constant Value1'
             *  Sum: '<S699>/Subtraction'
             *  Switch: '<S699>/Switch2'
             *  UnitDelay: '<S699>/Unit Delay'
             */
            VeTHDR_Cnt_HCCTOS_SmpCnt = (uint16)(((uint32)
                VeTHDR_Cnt_HCCTOS_SmpCnt) + 1U);
        }

        /* End of Switch: '<S699>/Switch2' */
    }

    /* End of Switch: '<S698>/Switch1' */
    /* End of Outputs for SubSystem: '<S691>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S691>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S691>/Greater Than or Equal ' incorporates:
     *  Constant: '<S684>/Calib'
     */
    THDR_ac_DW.UnitDelay1_DSTATE_j = (VeTHDR_Cnt_HCCTOS_FailCnt >=
        KeTHDR_Cnt_HCCTOS_FailCnt);

    /* Logic: '<S691>/NOT5' incorporates:
     *  Constant: '<S685>/Calib'
     *  Logic: '<S691>/NOT3'
     *  RelationalOperator: '<S691>/Less Than  or Equal'
     */
    THDR_ac_DW.UnitDelay_DSTATE_a0 = ((VeTHDR_Cnt_HCCTOS_SmpCnt >=
        KeTHDR_Cnt_HCCTOS_SmpCnt) && (!THDR_ac_DW.UnitDelay1_DSTATE_j));

    /* Switch: '<S704>/Switch1' incorporates:
     *  Constant: '<S697>/Constant Value'
     *  DataStoreWrite: '<S682>/Data Store Write3'
     *  Switch: '<S703>/Switch1'
     */
    if (VeTHDR_b_ResetFOMs)
    {
        THDR_ac_DW.NeTHDR_Cnt_HCCTOS_MFOP = 0U;
    }
    else
    {
        if (THDR_ac_DW.UnitDelay_DSTATE_a0)
        {
            /* MinMax: '<S697>/Minimum2' incorporates:
             *  DataStoreRead: '<S682>/Data Store Read1'
             *  Switch: '<S703>/Switch1'
             */
            if (VeTHDR_Cnt_HCCTOS_FailCnt > THDR_ac_DW.NeTHDR_Cnt_HCCTOS_MFOP)
            {
                /* DataStoreWrite: '<S682>/Data Store Write3' incorporates:
                 *  Switch: '<S703>/Switch1'
                 */
                THDR_ac_DW.NeTHDR_Cnt_HCCTOS_MFOP = VeTHDR_Cnt_HCCTOS_FailCnt;
            }

            /* End of MinMax: '<S697>/Minimum2' */
        }
    }

    /* End of Switch: '<S704>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S689>/Fail' */
    THDR_ac_Fail(THDR_ac_DW.UnitDelay1_DSTATE_j,
                 &THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultS_ke);

    /* End of Outputs for SubSystem: '<S689>/Fail' */

    /* Outputs for Enabled SubSystem: '<S689>/Init' */
    THDR_ac_Init_l(rtb_TmpSignalConversionAtVeTRIR_b_HtrC_n,
                   &THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultS_ke);

    /* End of Outputs for SubSystem: '<S689>/Init' */

    /* Outputs for Enabled SubSystem: '<S689>/Pass' */
    THDR_ac_Pass(THDR_ac_DW.UnitDelay_DSTATE_a0,
                 &THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultS_ke);

    /* End of Outputs for SubSystem: '<S689>/Pass' */

    /* RelationalOperator: '<S689>/Relational Operator' incorporates:
     *  Constant: '<S693>/Constant'
     *  VariantMerge generated from: '<S451>/VeTHDR_e_FaultSts_ECT_Snsr4CktPerf'
     */
    VeTHDR_b_HCCTOS_FltDtct_B4D = (((uint32)
        THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultS_ke) == CeDFIB_e_Fail);

    /* End of Outputs for SubSystem: '<S590>/If_HCCTOS_Diag' */
#else

    /* Outputs for Atomic SubSystem: '<S590>/Else_HCCTOS_Diag' */
    /* VariantMerge generated from: '<S451>/VeTHDR_e_FaultSts_ECT_Snsr4CktPerf' incorporates:
     *  Constant: '<S683>/Constant'
     */
    THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultS_ke = CeDFIB_e_Init;

    /* End of Outputs for SubSystem: '<S590>/Else_HCCTOS_Diag' */
#endif

    /* End of Outputs for SubSystem: '<S584>/Check_HCCTOS_Diag' */

    /* Logic: '<S759>/Logical6' */
    rtb_TmpSignalConversionAtVePMIR_b_HTAuxP = (rtb_Logical12_iq &&
        rtb_TmpSignalConversionAtVePMIR_b_HTAuxP);

    /* Outputs for Atomic SubSystem: '<S759>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S811>/EdgeRising' */
    /* Logic: '<S812>/AND' incorporates:
     *  Logic: '<S812>/OR1'
     *  UnitDelay: '<S812>/Unit Delay'
     */
    rtb_Logical12_iq = (rtb_TmpSignalConversionAtVePMIR_b_HTAuxP &&
                        (!THDR_ac_DW.UnitDelay_DSTATE_f3));

    /* Update for UnitDelay: '<S812>/Unit Delay' */
    THDR_ac_DW.UnitDelay_DSTATE_f3 = rtb_TmpSignalConversionAtVePMIR_b_HTAuxP;

    /* End of Outputs for SubSystem: '<S811>/EdgeRising' */

    /* Switch: '<S811>/Switch1' incorporates:
     *  Constant: '<S12>/Calib'
     *  Constant: '<S810>/Calib'
     *  Constant: '<S811>/Constant Value1'
     *  Logic: '<S811>/OR'
     *  Logic: '<S811>/OR1'
     *  MinMax: '<S811>/Minimum'
     *  Sum: '<S811>/Summation'
     *  UnitDelay: '<S811>/Unit Delay'
     */
    if ((!rtb_TmpSignalConversionAtVePMIR_b_HTAuxP) || rtb_Logical12_iq)
    {
        THDR_ac_DW.UnitDelay_DSTATE_h = 0.0F;
    }
    else
    {
        THDR_ac_DW.UnitDelay_DSTATE_h = fminf
            (KeTHDR_t_HTCL_BSWFlt_Snsr5_DbncTime, HeTHDR_t_MedTEH +
             THDR_ac_DW.UnitDelay_DSTATE_h);
    }

    /* End of Switch: '<S811>/Switch1' */

    /* Logic: '<S811>/AND' incorporates:
     *  Constant: '<S810>/Calib'
     *  RelationalOperator: '<S811>/Greater  Than'
     *  UnitDelay: '<S811>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVePMIR_b_HTAuxP =
        (rtb_TmpSignalConversionAtVePMIR_b_HTAuxP &&
         (THDR_ac_DW.UnitDelay_DSTATE_h >= KeTHDR_t_HTCL_BSWFlt_Snsr5_DbncTime));

    /* End of Outputs for SubSystem: '<S759>/Turn On Delay Time' */

    /* Logic: '<S759>/Logical5' incorporates:
     *  Constant: '<S809>/Calib'
     *  Logic: '<S759>/Logical4'
     *  Logic: '<S759>/Logical7'
     *  Logic: '<S759>/Logical8'
     */
    VeTHDR_b_HTAP_Enbl_NewApp = ((rtb_UnitDelay1_d3 &&
        (!VeTHDR_b_HTCL_S5_NoDecision)) || ((KeTHDR_b_HTCL_Snsr5_FA_EnblCnds) &&
        rtb_TmpSignalConversionAtVePMIR_b_HTAuxP));

    /* Logic: '<S731>/Logical14' incorporates:
     *  Constant: '<S815>/Calib'
     *  Logic: '<S731>/Logical15'
     */
    VeTHDR_b_HTCL_TempSnsrRat_FltSymptm_Snsr5 = ((VeTHDR_b_HTCL_FA_Rat_S5_Pred) ||
        (rtb_TmpSignalConversionAtVePMIR_b_HTAuxP &&
         (KeTHDR_b_HTCL_Snsr5_FA_FltCndsEnbl)));

    /* Outputs for Atomic SubSystem: '<S584>/Check_HTAP_Diag' */
    /* RelationalOperator: '<S710>/Relational Operator3' incorporates:
     *  Constant: '<S710>/Constant3'
     */
    rtb_UnitDelay1_d3 = (tmpRead_i == 0U);

    /* Outputs for Atomic SubSystem: '<S710>/EdgeFalling1' */
    /* Logic: '<S710>/Logical Operator' incorporates:
     *  Logic: '<S713>/OR1'
     */
    rtb_Logical12_iq = !rtb_UnitDelay1_d3;

    /* End of Outputs for SubSystem: '<S710>/EdgeFalling1' */

    /* Logic: '<S710>/Logical1' incorporates:
     *  Constant: '<S707>/Calib'
     *  Constant: '<S709>/Calib'
     *  Constant: '<S710>/Constant1'
     *  DataStoreRead: '<S711>/StatusByte_CoolPmpATempSnsrPerf'
     *  Logic: '<S591>/AND1'
     *  Logic: '<S710>/Logical Operator'
     *  Logic: '<S710>/Logical10'
     *  Logic: '<S710>/Logical12'
     *  RelationalOperator: '<S710>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S710>/Bitwise Operator3'
     */
    rtb_TmpSignalConversionAtVePMIR_b_HTAuxP = (((VeTHDR_b_HTAP_Enbl_NewApp) &&
        (KeTHDR_b_HTAP_XYEnbl)) && ((!KeTHDR_b_CoolPmpATempSnsrPerf_LtchEnbl) ||
        (((((uint32)THDR_ac_DW.StatusByte_CoolPmpATempSnsrPerf) & 1U) == 0U) ||
         rtb_Logical12_iq)));

    /* Outputs for Atomic SubSystem: '<S710>/EdgeFalling1' */
    /* Logic: '<S713>/AND' incorporates:
     *  UnitDelay: '<S713>/Unit Delay'
     */
    rtb_Logical12_iq = (rtb_Logical12_iq && (THDR_ac_DW.UnitDelay_DSTATE_e3));

    /* Update for UnitDelay: '<S713>/Unit Delay' */
    THDR_ac_DW.UnitDelay_DSTATE_e3 = rtb_UnitDelay1_d3;

    /* End of Outputs for SubSystem: '<S710>/EdgeFalling1' */

    /* Logic: '<S710>/Logical5' */
    rtb_UnitDelay1_d3 = ((VeTHDR_b_ResetCnts) || rtb_Logical12_iq);

    /* Outputs for Atomic SubSystem: '<S712>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S712>/Counter Reset  Enabled ' */
    /* Switch: '<S719>/Switch1' incorporates:
     *  Constant: '<S708>/Calib'
     *  Logic: '<S591>/AND3'
     *  Logic: '<S712>/Fail Counter Reset'
     *  Logic: '<S712>/NOT6'
     *  Switch: '<S719>/Switch2'
     *  Switch: '<S720>/Switch1'
     *  UnitDelay: '<S712>/Unit Delay'
     *  UnitDelay: '<S712>/Unit Delay1'
     */
    if ((rtb_UnitDelay1_d3 || (THDR_ac_DW.UnitDelay_DSTATE_ja)) ||
            (THDR_ac_DW.UnitDelay1_DSTATE_m))
    {
        /* Switch: '<S719>/Switch1' incorporates:
         *  Constant: '<S719>/Constant Value2'
         */
        VeTHDR_Cnt_HTAP_FailCnt = 0U;

        /* Switch: '<S720>/Switch1' incorporates:
         *  Constant: '<S720>/Constant Value2'
         */
        VeTHDR_Cnt_HTAP_SmpCnt = 0U;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVePMIR_b_HTAuxP &&
                ((VeTHDR_b_HTCL_TempSnsrRat_FltSymptm_Snsr5) &&
                 (KeTHDR_b_HTAP_Flt)))
        {
            /* Switch: '<S719>/Switch1' incorporates:
             *  Constant: '<S719>/Constant Value1'
             *  Sum: '<S719>/Subtraction'
             *  Switch: '<S719>/Switch2'
             *  UnitDelay: '<S719>/Unit Delay'
             */
            VeTHDR_Cnt_HTAP_FailCnt = (uint16)(((uint32)VeTHDR_Cnt_HTAP_FailCnt)
                + 1U);
        }

        /* Switch: '<S720>/Switch2' */
        if (rtb_TmpSignalConversionAtVePMIR_b_HTAuxP)
        {
            /* Switch: '<S720>/Switch1' incorporates:
             *  Constant: '<S720>/Constant Value1'
             *  Sum: '<S720>/Subtraction'
             *  Switch: '<S720>/Switch2'
             *  UnitDelay: '<S720>/Unit Delay'
             */
            VeTHDR_Cnt_HTAP_SmpCnt = (uint16)(((uint32)VeTHDR_Cnt_HTAP_SmpCnt) +
                1U);
        }

        /* End of Switch: '<S720>/Switch2' */
    }

    /* End of Switch: '<S719>/Switch1' */
    /* End of Outputs for SubSystem: '<S712>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S712>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S712>/Greater Than or Equal ' incorporates:
     *  Constant: '<S705>/Calib'
     */
    THDR_ac_DW.UnitDelay1_DSTATE_m = (VeTHDR_Cnt_HTAP_FailCnt >=
        KeTHDR_Cnt_HTAP_FailCnt);

    /* Logic: '<S712>/NOT5' incorporates:
     *  Constant: '<S706>/Calib'
     *  Logic: '<S712>/NOT3'
     *  RelationalOperator: '<S712>/Less Than  or Equal'
     */
    THDR_ac_DW.UnitDelay_DSTATE_ja = ((VeTHDR_Cnt_HTAP_SmpCnt >=
        KeTHDR_Cnt_HTAP_SmpCnt) && (!THDR_ac_DW.UnitDelay1_DSTATE_m));

    /* Switch: '<S725>/Switch1' incorporates:
     *  Constant: '<S718>/Constant Value'
     *  DataStoreWrite: '<S591>/Data Store Write3'
     *  Switch: '<S724>/Switch1'
     */
    if (VeTHDR_b_ResetFOMs)
    {
        THDR_ac_DW.NeTHDR_Cnt_HTAP_MFOP = 0U;
    }
    else
    {
        if (THDR_ac_DW.UnitDelay_DSTATE_ja)
        {
            /* MinMax: '<S718>/Minimum2' incorporates:
             *  DataStoreRead: '<S591>/Data Store Read1'
             *  Switch: '<S724>/Switch1'
             */
            if (VeTHDR_Cnt_HTAP_FailCnt > THDR_ac_DW.NeTHDR_Cnt_HTAP_MFOP)
            {
                /* DataStoreWrite: '<S591>/Data Store Write3' incorporates:
                 *  Switch: '<S724>/Switch1'
                 */
                THDR_ac_DW.NeTHDR_Cnt_HTAP_MFOP = VeTHDR_Cnt_HTAP_FailCnt;
            }

            /* End of MinMax: '<S718>/Minimum2' */
        }
    }

    /* End of Switch: '<S725>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S710>/Fail' */
    THDR_ac_Fail(THDR_ac_DW.UnitDelay1_DSTATE_m,
                 &THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultS_ax);

    /* End of Outputs for SubSystem: '<S710>/Fail' */

    /* Outputs for Enabled SubSystem: '<S710>/Init' */
    THDR_ac_Init_l(rtb_UnitDelay1_d3,
                   &THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultS_ax);

    /* End of Outputs for SubSystem: '<S710>/Init' */

    /* Outputs for Enabled SubSystem: '<S710>/Pass' */
    THDR_ac_Pass(THDR_ac_DW.UnitDelay_DSTATE_ja,
                 &THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultS_ax);

    /* End of Outputs for SubSystem: '<S710>/Pass' */

    /* RelationalOperator: '<S710>/Relational Operator' incorporates:
     *  Constant: '<S714>/Constant'
     *  VariantMerge generated from: '<S451>/VeTHDR_e_FaultSts_CoolPmpATempSnsrPerf'
     */
    VeTHDR_b_HTAP_TmpSnsr_FltDtct = (((uint32)
        THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultS_ax) == CeDFIB_e_Fail);

    /* End of Outputs for SubSystem: '<S584>/Check_HTAP_Diag' */

    /* Update for UnitDelay: '<S741>/Unit Delay' */
    THDR_ac_DW.UnitDelay_DSTATE_im = rtb_TmpSignalConversionAtVeHTIR_b_HVC_Ht;

    /* Update for UnitDelay: '<S741>/Unit Delay2' */
    THDR_ac_DW.UnitDelay2_DSTATE_e = THDR_ac_B.OutportBufferForOut1;

    /* End of Outputs for SubSystem: '<S451>/HighTempLoop' */
#else

    /* Outputs for Atomic SubSystem: '<S451>/HighTemp_Stub' */
    /* VariantMerge generated from: '<S451>/VeTHDR_e_FaultSts_CT2_SnsrPerf' incorporates:
     *  Constant: '<S870>/Constant'
     */
    THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultSt_e = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S451>/ECHTIS_DTC' incorporates:
     *  Constant: '<S585>/FALSE Constant'
     */
    VeTHDR_b_ECHTIS_FltDtct_B4D = false;

    /* VariantMerge generated from: '<S451>/VeTHDR_e_FaultSts_ECH_TempIn' incorporates:
     *  Constant: '<S869>/Constant'
     */
    THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultSt_d = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S451>/ECH_InletTempSens_DTC' incorporates:
     *  Constant: '<S585>/FALSE Constant1'
     */
    VeTHDR_b_ECH_In_FltDtct_B4D = false;

    /* VariantMerge generated from: '<S451>/VeTHDR_e_FaultSts_ECH_TempOut' incorporates:
     *  Constant: '<S871>/Constant'
     */
    THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultSt_n = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S451>/VeTHDR_e_FaultSts_CT3_SnsrPerf' incorporates:
     *  Constant: '<S872>/Constant'
     */
    THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultSt_a = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S451>/VeTHDR_e_FaultSts_CoolPmpATempSnsrPerf' incorporates:
     *  Constant: '<S873>/Constant'
     */
    THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultS_ax = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S451>/VeTHDR_e_FaultSts_ECT_Snsr4CktPerf' incorporates:
     *  Constant: '<S874>/Constant'
     */
    THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultS_ke = CeDFIB_e_Init;

    /* End of Outputs for SubSystem: '<S451>/HighTemp_Stub' */
#endif

    /* End of RelationalOperator: '<S449>/Comparison1' */
    /* End of Outputs for SubSystem: '<S19>/HighTempLoopDiagnostics' */

    /* Outputs for Atomic SubSystem: '<S19>/LowTempLoopDiagnostics' */
#if Rte_SysCon_Variant_THDR_9

    /* Outputs for Atomic SubSystem: '<S452>/LowTempLoop' */
    /* SignalConversion generated from: '<S1008>/Variant Source' incorporates:
     *  Logic: '<S1012>/Logical2'
     *  Logic: '<S1012>/Logical3'
     *  Logic: '<S1012>/Logical4'
     */
#if Rte_SysCon_Variant_THDR_3

    /* RelationalOperator: '<S1129>/Comparison7' incorporates:
     *  Constant: '<S1008>/M182'
     */
    rtb_Comparison7_p = true;

#else

    /* RelationalOperator: '<S1129>/Comparison7' incorporates:
     *  Constant: '<S1022>/Calib'
     *  Constant: '<S1023>/Calib'
     *  Logic: '<S1012>/Logical2'
     *  Logic: '<S1012>/Logical3'
     *  Logic: '<S1012>/Logical4'
     */
    rtb_Comparison7_p = ((rtb_TmpSignalConversionAtVePMTR_b_ThrmlS ||
                          (KeTHDR_b_LTCL_TempSnsrRtnlty_ThrmlSysEnbl_Ovrd)) &&
                         (rtb_Logical1_fp ||
                          (KeTHDR_b_LTCL_TempSnsrRtnlty_ThrmlRlyCrkt_Ovrd)));

#endif

    /* End of SignalConversion generated from: '<S1008>/Variant Source' */

    /* Inport: '<Root>/VePMIR_n_LTPsvPump_RPMAct' */
    (void)Rte_Read_VePMIR_n_LTPsvPump_RPMAct_Value(&tmpRead_2);

    /* Outputs for Atomic SubSystem: '<S994>/LTPP2_DiagEnbl' */
    /* Outputs for Atomic SubSystem: '<S1004>/LTPP2_Enbl' */
    /* S-Function (sfix_bitop): '<S1014>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S1014>/StatusByte_LIN1_BusOff'
     *  S-Function (sfix_bitop): '<S1058>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1074>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1124>/Bitwise Operator2'
     */
    VariantMerge_For_Variant_Source_Variant_ = ((sint32)
        THDR_ac_DW.StatusByte_LIN1_BusOff) & 1;

    /* S-Function (sfix_bitop): '<S1014>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S1014>/StatusByte_LIN1_BusOff'
     *  S-Function (sfix_bitop): '<S1058>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1074>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1124>/Bitwise Operator1'
     */
    tmpRead_i = ((uint32)THDR_ac_DW.StatusByte_LIN1_BusOff) & 64U;

    /* End of Outputs for SubSystem: '<S1004>/LTPP2_Enbl' */
    /* End of Outputs for SubSystem: '<S994>/LTPP2_DiagEnbl' */

    /* S-Function (sfix_bitop): '<S1015>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S1015>/StatusByte_LIN2_BusOff'
     *  S-Function (sfix_bitop): '<S1075>/Bitwise Operator2'
     */
    VariantMerge_For_Variant_Source_Varian_1 = ((sint32)
        THDR_ac_DW.StatusByte_LIN2_BusOff) & 1;

    /* S-Function (sfix_bitop): '<S1015>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S1015>/StatusByte_LIN2_BusOff'
     *  S-Function (sfix_bitop): '<S1075>/Bitwise Operator1'
     */
    rowIdx = ((uint32)THDR_ac_DW.StatusByte_LIN2_BusOff) & 64U;

    /* S-Function (sfix_bitop): '<S1017>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S1017>/StatusByte_LostCommMtrElectCoolPmpA'
     *  S-Function (sfix_bitop): '<S1076>/Bitwise Operator2'
     */
    VariantMerge_For_Variant_Source_Varian_3 = ((sint32)
        THDR_ac_DW.StatusByte_LostCommMtrElectCoolPmpA) & 1;

    /* S-Function (sfix_bitop): '<S1017>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S1017>/StatusByte_LostCommMtrElectCoolPmpA'
     *  S-Function (sfix_bitop): '<S1076>/Bitwise Operator1'
     */
    VariantMerge_For_Variant_Source_Varian_0 = ((uint32)
        THDR_ac_DW.StatusByte_LostCommMtrElectCoolPmpA) & 64U;

    /* Outputs for Atomic SubSystem: '<S994>/LTPP2_DiagEnbl' */
    /* Outputs for Atomic SubSystem: '<S1004>/LTPP2_Enbl' */
    /* S-Function (sfix_bitop): '<S1018>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S1018>/StatusByte_LostCommMtrElectCoolPmpB'
     *  S-Function (sfix_bitop): '<S1060>/Bitwise Operator2'
     */
    VariantMerge_For_Variant_Source_Varian_5 = ((sint32)
        THDR_ac_DW.StatusByte_LostCommMtrElectCoolPmpB) & 1;

    /* S-Function (sfix_bitop): '<S1018>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S1018>/StatusByte_LostCommMtrElectCoolPmpB'
     *  S-Function (sfix_bitop): '<S1060>/Bitwise Operator1'
     */
    VariantMerge_For_Variant_Source_Varian_2 = ((uint32)
        THDR_ac_DW.StatusByte_LostCommMtrElectCoolPmpB) & 64U;

    /* End of Outputs for SubSystem: '<S1004>/LTPP2_Enbl' */
    /* End of Outputs for SubSystem: '<S994>/LTPP2_DiagEnbl' */

    /* Logic: '<S1011>/Logical4' incorporates:
     *  Constant: '<S1014>/Constant1'
     *  Constant: '<S1014>/Constant2'
     *  Logic: '<S1011>/Logical15'
     *  Logic: '<S1011>/Logical8'
     *  Logic: '<S1014>/Logical Operator'
     *  RelationalOperator: '<S1014>/Relational Operator1'
     *  RelationalOperator: '<S1014>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S1014>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1014>/Bitwise Operator2'
     */
    rtb_TmpSignalConversionAtVePMTR_b_ThrmlS =
        ((VariantMerge_For_Variant_Source_Variant_ <= 0) || (tmpRead_i != 0U));

    /* Logic: '<S1011>/Logical5' incorporates:
     *  Constant: '<S1017>/Constant1'
     *  Constant: '<S1017>/Constant2'
     *  Logic: '<S1011>/Logical15'
     *  Logic: '<S1011>/Logical8'
     *  Logic: '<S1017>/Logical Operator'
     *  RelationalOperator: '<S1017>/Relational Operator1'
     *  RelationalOperator: '<S1017>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S1017>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1017>/Bitwise Operator2'
     */
    rtb_Logical1_fp = ((VariantMerge_For_Variant_Source_Varian_3 <= 0) ||
                       (VariantMerge_For_Variant_Source_Varian_0 != 0U));

    /* Logic: '<S1011>/Logical4' incorporates:
     *  Constant: '<S1015>/Constant1'
     *  Constant: '<S1015>/Constant2'
     *  Logic: '<S1011>/Logical9'
     *  Logic: '<S1015>/Logical Operator'
     *  RelationalOperator: '<S1015>/Relational Operator1'
     *  RelationalOperator: '<S1015>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S1015>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1015>/Bitwise Operator2'
     */
    rtb_TmpSignalConversionAtVePMIR_b_HTAuxP =
        ((VariantMerge_For_Variant_Source_Varian_1 <= 0) || (rowIdx != 0U));

    /* Logic: '<S1011>/Logical5' incorporates:
     *  Constant: '<S1018>/Constant1'
     *  Constant: '<S1018>/Constant2'
     *  Logic: '<S1011>/Logical9'
     *  Logic: '<S1018>/Logical Operator'
     *  RelationalOperator: '<S1018>/Relational Operator1'
     *  RelationalOperator: '<S1018>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S1018>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1018>/Bitwise Operator2'
     */
    rtb_UnitDelay1_d3 = ((VariantMerge_For_Variant_Source_Varian_5 <= 0) ||
                         (VariantMerge_For_Variant_Source_Varian_2 != 0U));

    /* S-Function (sfix_bitop): '<S1016>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S1016>/StatusByte_LosCommBECM_A'
     *  S-Function (sfix_bitop): '<S1091>/Bitwise Operator2'
     */
    VariantMerge_For_Variant_Source_Varian_7 = ((sint32)
        THDR_ac_DW.StatusByte_LosCommBECM_A) & 1;

    /* S-Function (sfix_bitop): '<S1016>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S1016>/StatusByte_LosCommBECM_A'
     *  S-Function (sfix_bitop): '<S1091>/Bitwise Operator1'
     */
    VariantMerge_For_Variant_Source_Varian_4 = ((uint32)
        THDR_ac_DW.StatusByte_LosCommBECM_A) & 64U;

    /* S-Function (sfix_bitop): '<S1013>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S1013>/StatusByte_CommBusOff'
     *  S-Function (sfix_bitop): '<S1090>/Bitwise Operator2'
     */
    VariantMerge_For_Variant_Source_Varian_9 = ((sint32)
        THDR_ac_DW.StatusByte_CommBusOff) & 1;

    /* S-Function (sfix_bitop): '<S1013>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S1013>/StatusByte_CommBusOff'
     *  S-Function (sfix_bitop): '<S1090>/Bitwise Operator1'
     */
    VariantMerge_For_Variant_Source_Varian_6 = ((uint32)
        THDR_ac_DW.StatusByte_CommBusOff) & 64U;

    /* Logic: '<S1008>/Logical17' incorporates:
     *  Constant: '<S1010>/Calib'
     *  Constant: '<S1013>/Constant1'
     *  Constant: '<S1013>/Constant2'
     *  Constant: '<S1016>/Constant1'
     *  Constant: '<S1016>/Constant2'
     *  Constant: '<S1019>/Calib'
     *  Constant: '<S1020>/Calib'
     *  Constant: '<S1021>/Calib'
     *  Logic: '<S1008>/Logical1'
     *  Logic: '<S1011>/Logical1'
     *  Logic: '<S1011>/Logical10'
     *  Logic: '<S1011>/Logical11'
     *  Logic: '<S1011>/Logical12'
     *  Logic: '<S1011>/Logical13'
     *  Logic: '<S1011>/Logical14'
     *  Logic: '<S1011>/Logical15'
     *  Logic: '<S1011>/Logical16'
     *  Logic: '<S1011>/Logical18'
     *  Logic: '<S1011>/Logical4'
     *  Logic: '<S1011>/Logical5'
     *  Logic: '<S1011>/Logical6'
     *  Logic: '<S1011>/Logical7'
     *  Logic: '<S1011>/Logical8'
     *  Logic: '<S1011>/Logical9'
     *  Logic: '<S1013>/Logical Operator'
     *  Logic: '<S1016>/Logical Operator'
     *  RelationalOperator: '<S1013>/Relational Operator1'
     *  RelationalOperator: '<S1013>/Relational Operator2'
     *  RelationalOperator: '<S1016>/Relational Operator1'
     *  RelationalOperator: '<S1016>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S1013>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1013>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1016>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1016>/Bitwise Operator2'
     */
    VeTHDR_b_LTCL_GlblRtnlztnEnbl1 = ((rtb_Comparison7_p &&
        (((((((rtb_TmpSignalConversionAtVePMTR_b_ThrmlS ||
               rtb_TmpSignalConversionAtVePMIR_b_HTAuxP) && (rtb_Logical1_fp ||
        rtb_UnitDelay1_d3)) && (rtb_TmpSignalConversionAtVePMTR_b_ThrmlS ||
        rtb_Logical1_fp)) && (rtb_TmpSignalConversionAtVePMIR_b_HTAuxP ||
        rtb_UnitDelay1_d3)) || (KeTHDR_b_LTCL_TempSnsrRtnlty_GEN2_Comm_Ovrd)) &&
          ((((rtb_TmpSignalConversionAtVePMTR_b_ThrmlS && rtb_Logical1_fp) &&
             ((VariantMerge_For_Variant_Source_Varian_7 <= 0) ||
              (VariantMerge_For_Variant_Source_Varian_4 != 0U))) &&
            ((VariantMerge_For_Variant_Source_Varian_9 <= 0) ||
             (VariantMerge_For_Variant_Source_Varian_6 != 0U))) ||
           (KeTHDR_b_LTCL_TempSnsrRtnlty_GEN1_Comm_Ovrd))) &&
         (rtb_VeTHDR_b_DiagGlblCndtnsValid_OvrdVal ||
          (KeTHDR_b_LTCL_SysVoltChck_Ovrd)))) ||
        (KeTHDR_b_LTCL_TempSnsrRtnlty_Enbl_1_Ovrd));

    /* RelationalOperator: '<S1027>/Comparison' incorporates:
     *  Constant: '<S1047>/Calib'
     */
    rtb_VeTHDR_b_DiagGlblCndtnsValid_OvrdVal = (tmpRead_2 >=
        KeTHDR_n_LTPP_Min_RPM_Enbl);

    /* Outputs for Atomic SubSystem: '<S1027>/EdgeRising' */
    /* Logic: '<S1039>/OR1' incorporates:
     *  UnitDelay: '<S1039>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVePMTR_b_ThrmlS = !THDR_ac_DW.UnitDelay_DSTATE_i0;

    /* Update for UnitDelay: '<S1039>/Unit Delay' */
    THDR_ac_DW.UnitDelay_DSTATE_i0 = rtb_VeTHDR_b_DiagGlblCndtnsValid_OvrdVal;

    /* Outputs for Atomic SubSystem: '<S1027>/Timer Retrigger Reset Enabled' */
    /* Switch: '<S1049>/Switch1' incorporates:
     *  Constant: '<S1048>/Calib'
     *  Logic: '<S1039>/AND'
     *  Switch: '<S1049>/Switch2'
     *  UnitDelay: '<S1049>/Unit Delay'
     */
    if (rtb_VeTHDR_b_DiagGlblCndtnsValid_OvrdVal &&
            rtb_TmpSignalConversionAtVePMTR_b_ThrmlS)
    {
        THDR_ac_DW.UnitDelay_DSTATE_e = KeTHDR_t_LTPP_Min_Time_Enbl;
    }
    else
    {
        if (rtb_VeTHDR_b_DiagGlblCndtnsValid_OvrdVal)
        {
            /* UnitDelay: '<S1049>/Unit Delay' incorporates:
             *  Constant: '<S1040>/Calib'
             *  Constant: '<S1049>/Constant Value4'
             *  MinMax: '<S1049>/Maximum'
             *  Sum: '<S1049>/Subtraction'
             *  Switch: '<S1049>/Switch2'
             */
            THDR_ac_DW.UnitDelay_DSTATE_e = fmaxf(THDR_ac_DW.UnitDelay_DSTATE_e
                - HeTHDR_t_MedTEH, 0.0F);
        }
    }

    /* End of Switch: '<S1049>/Switch1' */
    /* End of Outputs for SubSystem: '<S1027>/Timer Retrigger Reset Enabled' */
    /* End of Outputs for SubSystem: '<S1027>/EdgeRising' */

    /* Inport: '<Root>/VePMIR_e_LTPsvPumpDryRun' */
    (void)Rte_Read_VePMIR_e_LTPsvPumpDryRun_Value(&tmpRead_4);

    /* Inport: '<Root>/VePMIR_n_LTPsvPump2RPMAct' */
    (void)Rte_Read_VePMIR_n_LTPsvPump2RPMAct_Value(&tmpRead_3);

    /* RelationalOperator: '<S1026>/Comparison' incorporates:
     *  Constant: '<S1036>/Calib'
     */
    rtb_TmpSignalConversionAtVePMTR_b_ThrmlS = (tmpRead_3 >=
        KeTHDR_n_LTPP2_Min_RPM_Enbl);

    /* Outputs for Atomic SubSystem: '<S1026>/EdgeRising1' */
    /* Logic: '<S1028>/OR1' incorporates:
     *  UnitDelay: '<S1028>/Unit Delay'
     */
    rtb_Logical1_fp = !THDR_ac_DW.UnitDelay_DSTATE_g1;

    /* Update for UnitDelay: '<S1028>/Unit Delay' */
    THDR_ac_DW.UnitDelay_DSTATE_g1 = rtb_TmpSignalConversionAtVePMTR_b_ThrmlS;

    /* Outputs for Atomic SubSystem: '<S1026>/Timer Retrigger Reset Enabled1' */
    /* Switch: '<S1038>/Switch1' incorporates:
     *  Constant: '<S1037>/Calib'
     *  Logic: '<S1028>/AND'
     *  Switch: '<S1038>/Switch2'
     *  UnitDelay: '<S1038>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVePMTR_b_ThrmlS && rtb_Logical1_fp)
    {
        THDR_ac_DW.UnitDelay_DSTATE_b = KeTHDR_t_LTPP2_Min_Time_Enbl;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVePMTR_b_ThrmlS)
        {
            /* UnitDelay: '<S1038>/Unit Delay' incorporates:
             *  Constant: '<S1029>/Calib'
             *  Constant: '<S1038>/Constant Value4'
             *  MinMax: '<S1038>/Maximum'
             *  Sum: '<S1038>/Subtraction'
             *  Switch: '<S1038>/Switch2'
             */
            THDR_ac_DW.UnitDelay_DSTATE_b = fmaxf(THDR_ac_DW.UnitDelay_DSTATE_b
                - HeTHDR_t_MedTEH, 0.0F);
        }
    }

    /* End of Switch: '<S1038>/Switch1' */
    /* End of Outputs for SubSystem: '<S1026>/Timer Retrigger Reset Enabled1' */
    /* End of Outputs for SubSystem: '<S1026>/EdgeRising1' */

    /* Inport: '<Root>/VeTMIR_b_LTR_ClntTmpOut_FA' */
    (void)Rte_Read_VeTMIR_b_LTR_ClntTmpOut_FA_Value(&rtb_Switch_h);

    /* Inport: '<Root>/VeCPDR_b_LTPP2_FunPer_ChkEnbl' */
    (void)Rte_Read_VeCPDR_b_LTPP2_FunPer_ChkEnbl_Value(&tmpRead_6);

    /* Inport: '<Root>/VePMIR_e_LTPsvPump2DryRun' */
    (void)Rte_Read_VePMIR_e_LTPsvPump2DryRun_Value(&tmpRead_5);

    /* Inport: '<Root>/VePMIR_b_LTPsvPump2Temp_FA' */
    (void)Rte_Read_VePMIR_b_LTPsvPump2Temp_FA_Value(&rtb_Switch_m);

    /* Inport: '<Root>/VeTMIR_b_OnBrdChrg_ClntTmpIn_FA' */
    (void)Rte_Read_VeTMIR_b_OnBrdChrg_ClntTmpIn_FA_Value(&rtb_UnitDelay1_k2);

    /* Inport: '<Root>/VePMIR_b_LTPsvPumpTemp_FA' */
    (void)Rte_Read_VePMIR_b_LTPsvPumpTemp_FA_Value(&rtb_UnitDelay_hn);

    /* Outputs for Atomic SubSystem: '<S1027>/Timer Retrigger Reset Enabled' */
    /* Outputs for Atomic SubSystem: '<S1026>/Timer Retrigger Reset Enabled1' */
    /* Logic: '<S1009>/Logical1' incorporates:
     *  Constant: '<S1024>/Calib'
     *  Constant: '<S1025>/Calib'
     *  Constant: '<S1030>/Calib'
     *  Constant: '<S1031>/Calib'
     *  Constant: '<S1032>/Calib'
     *  Constant: '<S1033>/Calib'
     *  Constant: '<S1034>/Calib'
     *  Constant: '<S1035>/Calib'
     *  Constant: '<S1038>/Constant Value2'
     *  Constant: '<S1041>/Calib'
     *  Constant: '<S1042>/Calib'
     *  Constant: '<S1043>/Calib'
     *  Constant: '<S1044>/Calib'
     *  Constant: '<S1045>/Calib'
     *  Constant: '<S1046>/Calib'
     *  Constant: '<S1049>/Constant Value2'
     *  Inport: '<Root>/VePMIR_e_LTPsvPump2DryRun'
     *  Inport: '<Root>/VePMIR_e_LTPsvPumpDryRun'
     *  Logic: '<S1009>/Logical10'
     *  Logic: '<S1009>/Logical2'
     *  Logic: '<S1026>/Logical10'
     *  Logic: '<S1026>/Logical11'
     *  Logic: '<S1026>/Logical12'
     *  Logic: '<S1026>/Logical13'
     *  Logic: '<S1026>/Logical14'
     *  Logic: '<S1026>/Logical15'
     *  Logic: '<S1026>/Logical3'
     *  Logic: '<S1026>/Logical9'
     *  Logic: '<S1027>/Logical'
     *  Logic: '<S1027>/Logical1'
     *  Logic: '<S1027>/Logical2'
     *  Logic: '<S1027>/Logical5'
     *  Logic: '<S1027>/Logical6'
     *  Logic: '<S1027>/Logical7'
     *  Logic: '<S1027>/Logical8'
     *  Logic: '<S1027>/Logical9'
     *  RelationalOperator: '<S1026>/Comparison2'
     *  RelationalOperator: '<S1027>/Comparison4'
     *  RelationalOperator: '<S1038>/Greater  Than1'
     *  RelationalOperator: '<S1049>/Greater  Than1'
     *  UnitDelay: '<S1038>/Unit Delay'
     *  UnitDelay: '<S1049>/Unit Delay'
     */
    VeTHDR_b_LTCL_GlblRtnlztnEnbl2 =
        (((((((rtb_VeTHDR_b_DiagGlblCndtnsValid_OvrdVal ||
               (KeTHDR_b_LTCL_TempSnsrRtnlty_LTPP_RPM_Ovrd)) &&
              ((THDR_ac_DW.UnitDelay_DSTATE_e <= 0.0F) ||
               (KeTHDR_b_LTCL_TempSnsrRtnlty_LTPP_MinTime_Ovrd))) && ((tmpRead_4
               == KeTHDR_e_LTPP_NoDryRun) ||
              (KeTHDR_b_LTCL_TempSnsrRtnlty_LTPP_DryRn_Ovrd))) &&
            ((!VeTHDR_b_LTPP_FunPer_FltDtct_AD) ||
             (KeTHDR_b_LTCL_TempSnsrRtnlty_LTPP_Prfmnc_Ovrd))) &&
           (rtb_TmpSignalConversionAtVeCPDR_b_LTPP_F ||
            (KeTHDR_b_LTCL_TempSnsrRtnlty_LTPP_PrfmncEnbl_Ovrd))) ||
          ((((((rtb_TmpSignalConversionAtVePMTR_b_ThrmlS ||
                (KeTHDR_b_LTCL_TempSnsrRtnlty_LTPP2_RPM_Ovrd)) &&
               ((THDR_ac_DW.UnitDelay_DSTATE_b <= 0.0F) ||
                (KeTHDR_b_LTCL_TempSnsrRtnlty_LTPP2_MinTime_Ovrd))) &&
              ((tmpRead_5 == KeTHDR_e_LTPP2_NoDryRun) ||
               (KeTHDR_b_LTCL_TempSnsrRtnlty_LTPP2_DryRn_Ovrd))) &&
             ((!VeTHDR_b_LTPP2_FunPer_FltDtct_AD) ||
              (KeTHDR_b_LTCL_TempSnsrRtnlty_LTPP2_Prfmnc_Ovrd))) && (tmpRead_6 ||
             (KeTHDR_b_LTCL_TempSnsrRtnlty_LTPP2_PrfmncEnbl_Ovrd))) &&
           (KeTHDR_b_LTCL_TempSnsrRtnlty_LTPP2_Chk_Enbl))) ||
         (KeTHDR_b_LTCL_GlblEnbl_Ovrd));

    /* End of Outputs for SubSystem: '<S1026>/Timer Retrigger Reset Enabled1' */
    /* End of Outputs for SubSystem: '<S1027>/Timer Retrigger Reset Enabled' */

    /* Switch: '<S1196>/Switch' incorporates:
     *  Constant: '<S1204>/Calib'
     */
    if (KeTHDR_b_LTPP_Temp_FA_SD)
    {
        /* UnitDelay: '<S980>/Unit Delay' incorporates:
         *  Constant: '<S1203>/Calib'
         */
        rtb_UnitDelay_hn = KeTHDR_b_LTPP_Temp_FA_D;
    }

    /* End of Switch: '<S1196>/Switch' */

    /* Outputs for Atomic SubSystem: '<S875>/Check_LTPP_Diag' */
    /* S-Function (sfix_bitop): '<S1212>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S1212>/StatusByte_MtrElect_CoolPmpATempSnsrPerf'
     *  S-Function (sfix_bitop): '<S936>/Bitwise Operator2'
     */
    VariantMerge_For_Variant_Source_Varian_8 = ((uint32)
        THDR_ac_DW.StatusByte_MtrElect_CoolPmpATempSnsrPerf) & 64U;

    /* End of Outputs for SubSystem: '<S875>/Check_LTPP_Diag' */

    /* Logic: '<S1000>/Logical Operator3' incorporates:
     *  Constant: '<S1212>/Constant1'
     *  Constant: '<S1212>/Constant2'
     *  DataStoreRead: '<S1212>/StatusByte_MtrElect_CoolPmpATempSnsrPerf'
     *  Logic: '<S1000>/Logical Operator12'
     *  Logic: '<S1212>/Logical Operator'
     *  RelationalOperator: '<S1212>/Relational Operator1'
     *  RelationalOperator: '<S1212>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S1212>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1212>/Bitwise Operator2'
     *  UnitDelay: '<S882>/Unit Delay'
     */
    THDR_ac_B.LogicalOperator3 = (((!THDR_ac_DW.UnitDelay_DSTATE_ii) ||
        (((((sint32)THDR_ac_DW.StatusByte_MtrElect_CoolPmpATempSnsrPerf) & 1) >
          0) && (VariantMerge_For_Variant_Source_Varian_8 == 0U))) ||
        rtb_UnitDelay_hn);

    /* Switch: '<S1195>/Switch' incorporates:
     *  Constant: '<S1202>/Calib'
     */
    if (KeTHDR_b_LTPP2_Temp_FA_SD)
    {
        /* Switch: '<S1195>/Switch' incorporates:
         *  Constant: '<S1201>/Calib'
         */
        rtb_Switch_m = KeTHDR_b_LTPP2_Temp_FA_D;
    }

    /* End of Switch: '<S1195>/Switch' */

    /* Outputs for Atomic SubSystem: '<S875>/Check_LTPP2_Diag' */
    /* Outputs for Atomic SubSystem: '<S878>/If_LTPP2_Diag' */
    /* S-Function (sfix_bitop): '<S1213>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S1213>/StatusByte_MtrElect_CoolPmpBTempSnsrPerf'
     *  S-Function (sfix_bitop): '<S915>/Bitwise Operator2'
     */
    VariantMerge_For_Variant_Source_Varian_a = ((uint32)
        THDR_ac_DW.StatusByte_MtrElect_CoolPmpBTempSnsrPerf) & 64U;

    /* End of Outputs for SubSystem: '<S878>/If_LTPP2_Diag' */
    /* End of Outputs for SubSystem: '<S875>/Check_LTPP2_Diag' */

    /* Logic: '<S1000>/Logical Operator1' incorporates:
     *  Constant: '<S1213>/Constant1'
     *  Constant: '<S1213>/Constant2'
     *  DataStoreRead: '<S1213>/StatusByte_MtrElect_CoolPmpBTempSnsrPerf'
     *  Logic: '<S1000>/Logical Operator6'
     *  Logic: '<S1213>/Logical Operator'
     *  RelationalOperator: '<S1213>/Relational Operator1'
     *  RelationalOperator: '<S1213>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S1213>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1213>/Bitwise Operator2'
     *  UnitDelay: '<S882>/Unit Delay1'
     */
    THDR_ac_B.LogicalOperator1 = (((!THDR_ac_DW.UnitDelay1_DSTATE_f) ||
        (((((sint32)THDR_ac_DW.StatusByte_MtrElect_CoolPmpBTempSnsrPerf) & 1) >
          0) && (VariantMerge_For_Variant_Source_Varian_a == 0U))) ||
        rtb_Switch_m);

    /* Switch: '<S1198>/Switch' incorporates:
     *  Constant: '<S1208>/Calib'
     */
    if (KeTHDR_b_PPCTIS_Temp_FA_SD)
    {
        /* UnitDelay: '<S980>/Unit Delay1' incorporates:
         *  Constant: '<S1207>/Calib'
         */
        rtb_TmpSignalConversionAtVeTMIR_b_PsvPmp = KeTHDR_b_PPCTIS_Temp_FA_D;
    }

    /* End of Switch: '<S1198>/Switch' */

    /* Outputs for Atomic SubSystem: '<S1006>/OtherPrograms' */
    /* Outputs for Atomic SubSystem: '<S1006>/M182' */
    /* Outputs for Atomic SubSystem: '<S1005>/OtherPrograms' */
    /* Outputs for Atomic SubSystem: '<S1005>/M182' */
    /* Outputs for Atomic SubSystem: '<S994>/LTPP2_DiagEnbl' */
    /* Outputs for Atomic SubSystem: '<S1004>/LTPP2_Enbl' */
    /* Outputs for Atomic SubSystem: '<S1056>/OtherPrograms' */
    /* Outputs for Atomic SubSystem: '<S1056>/M182' */
    /* Outputs for Atomic SubSystem: '<S994>/LRCTOS_DiagEnbl' */
    /* Outputs for Atomic SubSystem: '<S1003>/LRCTOS_Enbl' */
    /* Outputs for Atomic SubSystem: '<S1050>/M182' */
    /* S-Function (sfix_bitop): '<S1211>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S1211>/StatusByte_MtrElect_CT_SnsrPerf'
     *  S-Function (sfix_bitop): '<S1055>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1071>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1073>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1087>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1089>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1101>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1102>/Bitwise Operator2'
     */
    VariantMerge_For_Variant_Source_Varian_b = ((sint32)
        THDR_ac_DW.StatusByte_MtrElect_CT_SnsrPerf) & 1;

    /* Outputs for Atomic SubSystem: '<S875>/Check_PPCTIS_Diag' */
    /* S-Function (sfix_bitop): '<S1211>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S1211>/StatusByte_MtrElect_CT_SnsrPerf'
     *  S-Function (sfix_bitop): '<S1055>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1071>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1073>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1087>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1089>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1101>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1102>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S978>/Bitwise Operator2'
     */
    VariantMerge_For_Variant_Source_Varian_c = ((uint32)
        THDR_ac_DW.StatusByte_MtrElect_CT_SnsrPerf) & 64U;

    /* End of Outputs for SubSystem: '<S875>/Check_PPCTIS_Diag' */
    /* End of Outputs for SubSystem: '<S1050>/M182' */
    /* End of Outputs for SubSystem: '<S1003>/LRCTOS_Enbl' */
    /* End of Outputs for SubSystem: '<S994>/LRCTOS_DiagEnbl' */
    /* End of Outputs for SubSystem: '<S1056>/M182' */
    /* End of Outputs for SubSystem: '<S1056>/OtherPrograms' */
    /* End of Outputs for SubSystem: '<S1004>/LTPP2_Enbl' */
    /* End of Outputs for SubSystem: '<S994>/LTPP2_DiagEnbl' */
    /* End of Outputs for SubSystem: '<S1005>/M182' */
    /* End of Outputs for SubSystem: '<S1005>/OtherPrograms' */
    /* End of Outputs for SubSystem: '<S1006>/M182' */
    /* End of Outputs for SubSystem: '<S1006>/OtherPrograms' */

    /* Logic: '<S1000>/Logical Operator2' incorporates:
     *  Constant: '<S1211>/Constant1'
     *  Constant: '<S1211>/Constant2'
     *  Logic: '<S1000>/Logical Operator7'
     *  Logic: '<S1211>/Logical Operator'
     *  RelationalOperator: '<S1211>/Relational Operator1'
     *  RelationalOperator: '<S1211>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S1211>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1211>/Bitwise Operator2'
     *  UnitDelay: '<S882>/Unit Delay2'
     */
    THDR_ac_B.LogicalOperator2 = (((!THDR_ac_DW.UnitDelay2_DSTATE) ||
        ((VariantMerge_For_Variant_Source_Varian_b > 0) &&
         (VariantMerge_For_Variant_Source_Varian_c == 0U))) ||
        rtb_TmpSignalConversionAtVeTMIR_b_PsvPmp);

    /* Switch: '<S1197>/Switch' incorporates:
     *  Constant: '<S1206>/Calib'
     */
    if (KeTHDR_b_PECTOS_Temp_FA_SD)
    {
        /* UnitDelay: '<S959>/Unit Delay1' incorporates:
         *  Constant: '<S1205>/Calib'
         */
        rtb_UnitDelay1_k2 = KeTHDR_b_PECTOS_Temp_FA_D;
    }

    /* End of Switch: '<S1197>/Switch' */

    /* Outputs for Atomic SubSystem: '<S1007>/OtherPrograms' */
    /* Outputs for Atomic SubSystem: '<S1007>/M182' */
    /* Outputs for Atomic SubSystem: '<S1005>/OtherPrograms' */
    /* Outputs for Atomic SubSystem: '<S1005>/M182' */
    /* Outputs for Atomic SubSystem: '<S994>/LTPP2_DiagEnbl' */
    /* Outputs for Atomic SubSystem: '<S1004>/LTPP2_Enbl' */
    /* Outputs for Atomic SubSystem: '<S1056>/OtherPrograms' */
    /* Outputs for Atomic SubSystem: '<S1056>/M182' */
    /* Outputs for Atomic SubSystem: '<S994>/LRCTOS_DiagEnbl' */
    /* Outputs for Atomic SubSystem: '<S1003>/LRCTOS_Enbl' */
    /* Outputs for Atomic SubSystem: '<S1050>/M182' */
    /* S-Function (sfix_bitop): '<S1209>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S1209>/StatusByte_CT_SnsrPerf'
     *  S-Function (sfix_bitop): '<S1054>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1069>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1072>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1085>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1088>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1106>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1108>/Bitwise Operator2'
     */
    VariantMerge_For_Variant_Source_Varian_d = ((sint32)
        THDR_ac_DW.StatusByte_CT_SnsrPerf) & 1;

    /* Outputs for Atomic SubSystem: '<S875>/Check_OCCTOS_Diag' */
    /* S-Function (sfix_bitop): '<S1209>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S1209>/StatusByte_CT_SnsrPerf'
     *  S-Function (sfix_bitop): '<S1054>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1069>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1072>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1085>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1088>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1106>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1108>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S957>/Bitwise Operator2'
     */
    VariantMerge_For_Variant_Source_Varian_e = ((uint32)
        THDR_ac_DW.StatusByte_CT_SnsrPerf) & 64U;

    /* End of Outputs for SubSystem: '<S875>/Check_OCCTOS_Diag' */
    /* End of Outputs for SubSystem: '<S1050>/M182' */
    /* End of Outputs for SubSystem: '<S1003>/LRCTOS_Enbl' */
    /* End of Outputs for SubSystem: '<S994>/LRCTOS_DiagEnbl' */
    /* End of Outputs for SubSystem: '<S1056>/M182' */
    /* End of Outputs for SubSystem: '<S1056>/OtherPrograms' */
    /* End of Outputs for SubSystem: '<S1004>/LTPP2_Enbl' */
    /* End of Outputs for SubSystem: '<S994>/LTPP2_DiagEnbl' */
    /* End of Outputs for SubSystem: '<S1005>/M182' */
    /* End of Outputs for SubSystem: '<S1005>/OtherPrograms' */
    /* End of Outputs for SubSystem: '<S1007>/M182' */
    /* End of Outputs for SubSystem: '<S1007>/OtherPrograms' */

    /* Logic: '<S1000>/Logical Operator4' incorporates:
     *  Constant: '<S1209>/Constant1'
     *  Constant: '<S1209>/Constant2'
     *  Logic: '<S1000>/Logical Operator10'
     *  Logic: '<S1209>/Logical Operator'
     *  RelationalOperator: '<S1209>/Relational Operator1'
     *  RelationalOperator: '<S1209>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S1209>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1209>/Bitwise Operator2'
     *  UnitDelay: '<S882>/Unit Delay3'
     */
    THDR_ac_B.LogicalOperator4 = (((!THDR_ac_DW.UnitDelay3_DSTATE) ||
        ((VariantMerge_For_Variant_Source_Varian_d > 0) &&
         (VariantMerge_For_Variant_Source_Varian_e == 0U))) || rtb_UnitDelay1_k2);

    /* Switch: '<S1194>/Switch' incorporates:
     *  Constant: '<S1200>/Calib'
     */
    if (KeTHDR_b_LRCTOS_Temp_FA_SD)
    {
        /* Switch: '<S1194>/Switch' incorporates:
         *  Constant: '<S1199>/Calib'
         */
        rtb_Switch_h = KeTHDR_b_LRCTOS_Temp_FA_D;
    }

    /* End of Switch: '<S1194>/Switch' */

    /* RelationalOperator: '<S996>/Comparison7' incorporates:
     *  Inport: '<Root>/VeTAIR_b_LTR_BypsVlv_ActlPstn_FA'
     *  Logic: '<S1123>/Logical Operator'
     *  Logic: '<S1124>/Logical Operator'
     *  Logic: '<S1125>/Logical Operator'
     *  Logic: '<S996>/Logical1'
     *  Logic: '<S996>/Logical4'
     *  Logic: '<S996>/Logical5'
     *  Logic: '<S996>/Logical6'
     *  Logic: '<S996>/Logical7'
     *  RelationalOperator: '<S1123>/Relational Operator1'
     *  RelationalOperator: '<S1123>/Relational Operator2'
     *  RelationalOperator: '<S1124>/Relational Operator1'
     *  RelationalOperator: '<S1124>/Relational Operator2'
     *  RelationalOperator: '<S1125>/Relational Operator1'
     *  RelationalOperator: '<S1125>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S1123>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1123>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1124>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1124>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1125>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1125>/Bitwise Operator2'
     *  SignalConversion generated from: '<S882>/Variant Source'
     */
#if Rte_SysCon_Variant_THDR_3

    (void)Rte_Read_VeTAIR_b_LTR_BypsVlv_ActlPstn_FA_Value
        (&rtb_VariantMerge_For_Variant_Source_Va_l);

    /* VariantMerge generated from: '<S882>/Variant Source' incorporates:
     *  Constant: '<S1123>/Constant1'
     *  Constant: '<S1123>/Constant2'
     *  Constant: '<S1124>/Constant1'
     *  Constant: '<S1124>/Constant2'
     *  Constant: '<S1125>/Constant1'
     *  Constant: '<S1125>/Constant2'
     *  Constant: '<S1126>/Calib'
     *  DataStoreRead: '<S1123>/StatusByte_HB_PSC_CtrlValBCktPerf'
     *  DataStoreRead: '<S1125>/StatusByte_LostCommHB_PSCCooCtrlVlvB'
     *  Inport: '<Root>/VeTAIR_b_LTR_BypsVlv_ActlPstn_FA'
     */
    rtb_VariantMerge_For_Variant_Source_Va_l =
        (((((rtb_TmpSignalConversionAtVeTAIR_Pct_LTR_ <
             KeTHDR_Pct_LTRVlvSts_MaxPos) && (((((sint32)
                THDR_ac_DW.StatusByte_HB_PSC_CtrlValBCktPerf) & 1) <= 0) ||
             ((((uint32)THDR_ac_DW.StatusByte_HB_PSC_CtrlValBCktPerf) & 64U) !=
              0U))) && (((((sint32)
                           THDR_ac_DW.StatusByte_LostCommHB_PSCCooCtrlVlvB) & 1)
                         <= 0) || ((((uint32)
               THDR_ac_DW.StatusByte_LostCommHB_PSCCooCtrlVlvB) & 64U) != 0U))) &&
          ((VariantMerge_For_Variant_Source_Variant_ <= 0) || (tmpRead_i != 0U)))
         && (!rtb_VariantMerge_For_Variant_Source_Va_l));

#else

    /* VariantMerge generated from: '<S882>/Variant Source' incorporates:
     *  Constant: '<S882>/OtherProg'
     *  SignalConversion generated from: '<S882>/Variant Source'
     */
    rtb_VariantMerge_For_Variant_Source_Va_l = true;

#endif

    /* End of RelationalOperator: '<S996>/Comparison7' */

    /* Outputs for Atomic SubSystem: '<S1007>/M182' */
    /* Outputs for Atomic SubSystem: '<S1006>/M182' */
    /* Outputs for Atomic SubSystem: '<S1005>/M182' */
    /* Outputs for Atomic SubSystem: '<S994>/LTPP2_DiagEnbl' */
    /* Outputs for Atomic SubSystem: '<S1004>/LTPP2_Enbl' */
    /* Outputs for Atomic SubSystem: '<S1056>/M182' */
    /* Outputs for Atomic SubSystem: '<S875>/Check_LRCTOS_Diag' */
    /* Outputs for Atomic SubSystem: '<S877>/If_LRCTOS_Diag' */
    /* S-Function (sfix_bitop): '<S1210>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S1210>/StatusByte_MtrElect_CT_SnsrBPerf'
     *  S-Function (sfix_bitop): '<S1070>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1086>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1100>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1107>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S891>/Bitwise Operator2'
     */
    VariantMerge_For_Variant_Source_Varian_g = ((uint32)
        THDR_ac_DW.StatusByte_MtrElect_CT_SnsrBPerf) & 64U;

    /* End of Outputs for SubSystem: '<S877>/If_LRCTOS_Diag' */
    /* End of Outputs for SubSystem: '<S875>/Check_LRCTOS_Diag' */

    /* S-Function (sfix_bitop): '<S1210>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S1210>/StatusByte_MtrElect_CT_SnsrBPerf'
     *  S-Function (sfix_bitop): '<S1070>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1086>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1100>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1107>/Bitwise Operator2'
     */
    VariantMerge_For_Variant_Source_Varian_f = ((sint32)
        THDR_ac_DW.StatusByte_MtrElect_CT_SnsrBPerf) & 1;

    /* Logic: '<S882>/Logical5' incorporates:
     *  Logic: '<S1064>/Logical4'
     *  Logic: '<S1080>/Logical4'
     *  Logic: '<S1095>/Logical4'
     *  Logic: '<S1103>/Logical4'
     */
    rtb_TmpSignalConversionAtVeCPDR_b_LTPP_F =
        !rtb_VariantMerge_For_Variant_Source_Va_l;

    /* End of Outputs for SubSystem: '<S1056>/M182' */
    /* End of Outputs for SubSystem: '<S1004>/LTPP2_Enbl' */
    /* End of Outputs for SubSystem: '<S994>/LTPP2_DiagEnbl' */
    /* End of Outputs for SubSystem: '<S1005>/M182' */
    /* End of Outputs for SubSystem: '<S1006>/M182' */
    /* End of Outputs for SubSystem: '<S1007>/M182' */

    /* Logic: '<S1000>/Logical Operator5' incorporates:
     *  Constant: '<S1210>/Constant1'
     *  Constant: '<S1210>/Constant2'
     *  Logic: '<S1000>/Logical Operator14'
     *  Logic: '<S1210>/Logical Operator'
     *  Logic: '<S882>/Logical10'
     *  Logic: '<S882>/Logical5'
     *  RelationalOperator: '<S1210>/Relational Operator1'
     *  RelationalOperator: '<S1210>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S1210>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1210>/Bitwise Operator2'
     *  UnitDelay: '<S882>/Unit Delay4'
     */
    THDR_ac_B.LogicalOperator5 = (((!THDR_ac_DW.UnitDelay4_DSTATE) ||
        ((VariantMerge_For_Variant_Source_Varian_f > 0) &&
         (VariantMerge_For_Variant_Source_Varian_g == 0U))) || (rtb_Switch_h ||
        rtb_TmpSignalConversionAtVeCPDR_b_LTPP_F));

    /* If: '<S1129>/If' incorporates:
     *  Constant: '<S1145>/Calib'
     *  Constant: '<S1148>/Calib'
     *  Constant: '<S1149>/Calib'
     *  Constant: '<S1150>/Calib'
     *  If: '<S1129>/If1'
     *  Logic: '<S1129>/Logical1'
     *  Logic: '<S1129>/Logical2'
     *  Logic: '<S1129>/Logical3'
     *  RelationalOperator: '<S1129>/Comparison1'
     *  RelationalOperator: '<S1129>/Comparison3'
     *  RelationalOperator: '<S1129>/Comparison7'
     */
#if Rte_SysCon_Variant_THDR_3

    /* UnitDelay: '<S938>/Unit Delay1' incorporates:
     *  Constant: '<S1146>/Calib'
     */
    THDR_ac_DW.UnitDelay4_DSTATE = (rtb_TmpSignalConversionAtVeTAIR_Pct_HTL_ >=
        KeTHDR_Pct_HTLVlv_CombHTL);
    if (THDR_ac_DW.UnitDelay4_DSTATE)
    {
        /* Outputs for IfAction SubSystem: '<S1129>/HTLComb' incorporates:
         *  ActionPort: '<S1143>/Action Port'
         */
        /* SignalConversion generated from: '<S1143>/LTPP_LTPP2_Thrshld_CombHTL' incorporates:
         *  Constant: '<S1154>/Calib'
         */
        rtb_VariantMerge_For_Variant_Source_Va_n[0] =
            KeTHDR_i_LTPP_LTPP2_DiffLvl_CombHTL;

        /* SignalConversion generated from: '<S1143>/LTPP2_PPCTIS_Thrshld_CombHTL' incorporates:
         *  Constant: '<S1156>/Calib'
         */
        rtb_VariantMerge_For_Variant_Source_Va_n[4] =
            KeTHDR_i_PPCTIS_LTPP2_DiffLvl_CombHTL;

        /* SignalConversion generated from: '<S1143>/LTPP2_PECTOS_Thrshld_CombHTL' incorporates:
         *  Constant: '<S1155>/Calib'
         */
        rtb_VariantMerge_For_Variant_Source_Va_n[5] =
            KeTHDR_i_PECTOS_LTPP2_DiffLvl_CombHTL;

        /* End of Outputs for SubSystem: '<S1129>/HTLComb' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S1129>/HTLVlv_Default' incorporates:
         *  ActionPort: '<S1144>/Action Port'
         */
        /* SignalConversion generated from: '<S1144>/LTPP_LTPP2_Thrshld' incorporates:
         *  Constant: '<S1159>/Calib'
         */
        rtb_VariantMerge_For_Variant_Source_Va_n[0] =
            KeTHDR_i_LTPP_LTPP2_DiffLvl;

        /* SignalConversion generated from: '<S1144>/LTPP2_PPCTIS_Thrshld' incorporates:
         *  Constant: '<S1158>/Calib'
         */
        rtb_VariantMerge_For_Variant_Source_Va_n[4] =
            KeTHDR_i_LTPP2_PPCTIS_DiffLvl;

        /* SignalConversion generated from: '<S1144>/LTPP2_PECTOS_Thrshld' incorporates:
         *  Constant: '<S1157>/Calib'
         */
        rtb_VariantMerge_For_Variant_Source_Va_n[5] =
            KeTHDR_i_LTPP2_PECTOS_DiffLvl;

        /* End of Outputs for SubSystem: '<S1129>/HTLVlv_Default' */
    }

    rtb_VariantMerge_For_Variant_Source_Va_n[1] = KeTHDR_i_LTPP_PPCTIS_DiffLvl;
    rtb_VariantMerge_For_Variant_Source_Va_n[2] = KeTHDR_i_LTPP_PECTOS_DiffLvl;

    /* RelationalOperator: '<S1129>/Comparison7' incorporates:
     *  Constant: '<S1147>/Calib'
     */
    rtb_Comparison7_p = (rtb_TmpSignalConversionAtVeTAIR_Pct_LTR_ <=
                         KeTHDR_Pct_LTRVlv_ClosePos);
    if (rtb_Comparison7_p && (rtb_TmpSignalConversionAtVeTAIR_Pct_FrWy >=
                              KeTHDR_Pct_CPV_CombBTL))
    {
        /* Outputs for IfAction SubSystem: '<S1129>/LTRCls_BTLComb' incorporates:
         *  ActionPort: '<S1152>/Action Port'
         */
        /* SignalConversion generated from: '<S1152>/LTPP_LRCTOS_Thrshld_CombBTL' incorporates:
         *  Constant: '<S1164>/Calib'
         */
        rtb_VariantMerge_For_Variant_Source_Va_n[3] =
            KeTHDR_i_LRCTOS_LTPP_DiffLvl_CombBTL;

        /* SignalConversion generated from: '<S1152>/LTPP2_LRCTOS_Thrshld_CombBTL' incorporates:
         *  Constant: '<S1166>/Calib'
         */
        rtb_VariantMerge_For_Variant_Source_Va_n[6] =
            KeTHDR_i_LTPP2_LRCTOS_DiffLvl;

        /* SignalConversion generated from: '<S1152>/PPCTIS_LRCTOS_Thrshld_CombBTL' incorporates:
         *  Constant: '<S1165>/Calib'
         */
        rtb_VariantMerge_For_Variant_Source_Va_n[8] =
            KeTHDR_i_LRCTOS_PPCTIS_DiffLvl_CombBTL;

        /* SignalConversion generated from: '<S1152>/PECTOS_LRCTOS_Thrshld_CombBTL' incorporates:
         *  Constant: '<S1167>/Calib'
         */
        rtb_VariantMerge_For_Variant_Source_Va_n[9] =
            KeTHDR_i_PECTOS_LRCTOS_DiffLvl;

        /* End of Outputs for SubSystem: '<S1129>/LTRCls_BTLComb' */
    }
    else if ((!rtb_Comparison7_p) && (THDR_ac_DW.UnitDelay4_DSTATE))
    {
        /* Outputs for IfAction SubSystem: '<S1129>/LTROpen_HTLComb' incorporates:
         *  ActionPort: '<S1153>/Action Port'
         */
        /* SignalConversion generated from: '<S1153>/LTPP_LRCTOS_Thrshld_CombHTL' incorporates:
         *  Constant: '<S1169>/Calib'
         */
        rtb_VariantMerge_For_Variant_Source_Va_n[3] =
            KeTHDR_i_LRCTOS_LTPP_DiffLvl_CombHTL;

        /* SignalConversion generated from: '<S1153>/LTPP2_LRCTOS_Thrshld_CombHTL' incorporates:
         *  Constant: '<S1168>/Calib'
         */
        rtb_VariantMerge_For_Variant_Source_Va_n[6] =
            KeTHDR_i_LRCTOS_LTPP2_DiffLvl_CombHTL;

        /* SignalConversion generated from: '<S1153>/PPCTIS_LRCTOS_Thrshld_CombHTL' incorporates:
         *  Constant: '<S1171>/Calib'
         */
        rtb_VariantMerge_For_Variant_Source_Va_n[8] =
            KeTHDR_i_LRCTOS_PPCTIS_DiffLvl_CombHTL;

        /* SignalConversion generated from: '<S1153>/PECTOS_LRCTOS_Thrshld_CombHTL' incorporates:
         *  Constant: '<S1170>/Calib'
         */
        rtb_VariantMerge_For_Variant_Source_Va_n[9] =
            KeTHDR_i_LRCTOS_PECTOS_DiffLvl_CombHTL;

        /* End of Outputs for SubSystem: '<S1129>/LTROpen_HTLComb' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S1129>/LRCTOS_Default' incorporates:
         *  ActionPort: '<S1151>/Action Port'
         */
        /* SignalConversion generated from: '<S1151>/LTPP_LRCTOS_Thrshld' incorporates:
         *  Constant: '<S1161>/Calib'
         */
        rtb_VariantMerge_For_Variant_Source_Va_n[3] =
            KeTHDR_i_LTPP_LRCTOS_DiffLvl;

        /* SignalConversion generated from: '<S1151>/LTPP2_LRCTOS_Thrshld' incorporates:
         *  Constant: '<S1160>/Calib'
         */
        rtb_VariantMerge_For_Variant_Source_Va_n[6] =
            KeTHDR_i_LTPP2_LRCTOS_DiffLvl;

        /* SignalConversion generated from: '<S1151>/PPCTIS_LRCTOS_Thrshld' incorporates:
         *  Constant: '<S1163>/Calib'
         */
        rtb_VariantMerge_For_Variant_Source_Va_n[8] =
            KeTHDR_i_PPCTIS_LRCTOS_DiffLvl;

        /* SignalConversion generated from: '<S1151>/PECTOS_LRCTOS_Thrshld' incorporates:
         *  Constant: '<S1162>/Calib'
         */
        rtb_VariantMerge_For_Variant_Source_Va_n[9] =
            KeTHDR_i_PECTOS_LRCTOS_DiffLvl;

        /* End of Outputs for SubSystem: '<S1129>/LRCTOS_Default' */
    }

    rtb_VariantMerge_For_Variant_Source_Va_n[7] = KeTHDR_i_PPCTIS_PECTOS_DiffLvl;

#endif

    /* End of If: '<S1129>/If' */

    /* If: '<S1127>/If1' incorporates:
     *  Constant: '<S1134>/Calib'
     *  RelationalOperator: '<S1127>/Comparison3'
     *  SignalConversion generated from: '<S997>/Variant Source'
     */
#if Rte_SysCon_Variant_THDR_5

    if (rtb_TmpSignalConversionAtVeTAIR_Pct_HTL_ >= KeTHDR_Pct_HTLVlv_CombHTL)
    {
        /* Outputs for IfAction SubSystem: '<S1127>/HTLComb' incorporates:
         *  ActionPort: '<S1132>/Action Port'
         */
        /* VariantMerge generated from: '<S997>/Variant Source' incorporates:
         *  Constant: '<S1139>/Calib'
         *  Constant: '<S1140>/Calib'
         *  DataTypeConversion: '<S1103>/Data Type Conversion1'
         *  DataTypeConversion: '<S1103>/Data Type Conversion2'
         *  SignalConversion generated from: '<S1132>/LTPP2_PECTOS_Thrshld_CombHTL'
         *  SignalConversion generated from: '<S1132>/LTPP2_PPCTIS_Thrshld_CombHTL'
         */
        rtb_VariantMerge_For_Variant_Source_Va_n[4] =
            KeTHDR_i_PPCTIS_LTPP2_DiffLvl_CombHTL;
        rtb_VariantMerge_For_Variant_Source_Va_n[5] =
            KeTHDR_i_PECTOS_LTPP2_DiffLvl_CombHTL;

        /* End of Outputs for SubSystem: '<S1127>/HTLComb' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S1127>/HTLVlv_Default' incorporates:
         *  ActionPort: '<S1133>/Action Port'
         */
        /* VariantMerge generated from: '<S997>/Variant Source' incorporates:
         *  Constant: '<S1141>/Calib'
         *  Constant: '<S1142>/Calib'
         *  DataTypeConversion: '<S1103>/Data Type Conversion1'
         *  DataTypeConversion: '<S1103>/Data Type Conversion2'
         *  SignalConversion generated from: '<S1133>/LTPP2_PECTOS_Thrshld'
         *  SignalConversion generated from: '<S1133>/LTPP2_PPCTIS_Thrshld'
         */
        rtb_VariantMerge_For_Variant_Source_Va_n[4] =
            KeTHDR_i_LTPP2_PPCTIS_DiffLvl;
        rtb_VariantMerge_For_Variant_Source_Va_n[5] =
            KeTHDR_i_LTPP2_PECTOS_DiffLvl;

        /* End of Outputs for SubSystem: '<S1127>/HTLVlv_Default' */
    }

    /* VariantMerge generated from: '<S997>/Variant Source' incorporates:
     *  Constant: '<S1127>/Constant Value1'
     *  Constant: '<S1127>/Constant Value2'
     *  Constant: '<S1127>/Constant Value3'
     *  Constant: '<S1127>/Constant Value4'
     *  Constant: '<S1134>/Calib'
     *  Constant: '<S1135>/Calib'
     *  Constant: '<S1136>/Calib'
     *  Constant: '<S1137>/Calib'
     *  Constant: '<S1138>/Calib'
     */
    rtb_VariantMerge_For_Variant_Source_Va_n[0] = KeTHDR_i_LTPP_LTPP2_DiffLvl;
    rtb_VariantMerge_For_Variant_Source_Va_n[1] = KeTHDR_i_LTPP_PPCTIS_DiffLvl;
    rtb_VariantMerge_For_Variant_Source_Va_n[2] = KeTHDR_i_LTPP_PECTOS_DiffLvl;
    rtb_VariantMerge_For_Variant_Source_Va_n[3] = 1U;
    rtb_VariantMerge_For_Variant_Source_Va_n[6] = 1U;
    rtb_VariantMerge_For_Variant_Source_Va_n[7] = KeTHDR_i_PPCTIS_PECTOS_DiffLvl;
    rtb_VariantMerge_For_Variant_Source_Va_n[8] = 1U;
    rtb_VariantMerge_For_Variant_Source_Va_n[9] = 1U;

#endif

    /* End of If: '<S1127>/If1' */

    /* If: '<S1131>/If' incorporates:
     *  Constant: '<S1184>/Calib'
     *  RelationalOperator: '<S1131>/Comparison1'
     *  SignalConversion generated from: '<S997>/Variant Source'
     * */
#if Rte_SysCon_Variant_THDR_6

    if (rtb_TmpSignalConversionAtVeTAIR_Pct_FrWy >= KeTHDR_Pct_CPV_CombBTL)
    {
        /* Outputs for IfAction SubSystem: '<S1131>/BTLComb' incorporates:
         *  ActionPort: '<S1182>/Action Port'
         */
        /* VariantMerge generated from: '<S997>/Variant Source' incorporates:
         *  Constant: '<S1188>/Calib'
         *  Constant: '<S1189>/Calib'
         *  Constant: '<S1190>/Calib'
         *  DataTypeConversion: '<S1103>/Data Type Conversion'
         *  DataTypeConversion: '<S1103>/Data Type Conversion1'
         *  DataTypeConversion: '<S1103>/Data Type Conversion2'
         *  SignalConversion generated from: '<S1182>/LTPP2_PECTOS_Thrshld_CombBTL'
         *  SignalConversion generated from: '<S1182>/LTPP_PECTOS_Thrshld_CombBTL'
         *  SignalConversion generated from: '<S1182>/PPCTIS_PECTOS_Thrshld_CombBTL'
         */
        rtb_VariantMerge_For_Variant_Source_Va_n[7] =
            KeTHDR_i_PPCTIS_PECTOS_DiffLvl_CombBTL;
        rtb_VariantMerge_For_Variant_Source_Va_n[2] =
            KeTHDR_i_LTPP_PECTOS_DiffLvl_CombBTL;
        rtb_VariantMerge_For_Variant_Source_Va_n[5] =
            KeTHDR_i_LTPP2_PECTOS_DiffLvl_CombBTL;

        /* End of Outputs for SubSystem: '<S1131>/BTLComb' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S1131>/Default' incorporates:
         *  ActionPort: '<S1183>/Action Port'
         */
        /* VariantMerge generated from: '<S997>/Variant Source' incorporates:
         *  Constant: '<S1191>/Calib'
         *  Constant: '<S1192>/Calib'
         *  Constant: '<S1193>/Calib'
         *  DataTypeConversion: '<S1103>/Data Type Conversion'
         *  DataTypeConversion: '<S1103>/Data Type Conversion1'
         *  DataTypeConversion: '<S1103>/Data Type Conversion2'
         *  SignalConversion generated from: '<S1183>/LTPP2_PECTOS_Thrshld'
         *  SignalConversion generated from: '<S1183>/LTPP_PECTOS_Thrshld'
         *  SignalConversion generated from: '<S1183>/PPCTIS_PECTOS_Thrshld'
         */
        rtb_VariantMerge_For_Variant_Source_Va_n[7] =
            KeTHDR_i_PPCTIS_PECTOS_DiffLvl;
        rtb_VariantMerge_For_Variant_Source_Va_n[2] =
            KeTHDR_i_LTPP_PECTOS_DiffLvl;
        rtb_VariantMerge_For_Variant_Source_Va_n[5] =
            KeTHDR_i_LTPP2_PECTOS_DiffLvl;

        /* End of Outputs for SubSystem: '<S1131>/Default' */
    }

    /* VariantMerge generated from: '<S997>/Variant Source' incorporates:
     *  Constant: '<S1131>/Constant Value'
     *  Constant: '<S1131>/Constant Value1'
     *  Constant: '<S1131>/Constant Value2'
     *  Constant: '<S1131>/Constant Value3'
     *  Constant: '<S1184>/Calib'
     *  Constant: '<S1185>/Calib'
     *  Constant: '<S1186>/Calib'
     *  Constant: '<S1187>/Calib'
     */
    rtb_VariantMerge_For_Variant_Source_Va_n[0] = KeTHDR_i_LTPP_LTPP2_DiffLvl;
    rtb_VariantMerge_For_Variant_Source_Va_n[1] = KeTHDR_i_LTPP_PPCTIS_DiffLvl;
    rtb_VariantMerge_For_Variant_Source_Va_n[3] = 1U;
    rtb_VariantMerge_For_Variant_Source_Va_n[4] = KeTHDR_i_LTPP2_PPCTIS_DiffLvl;
    rtb_VariantMerge_For_Variant_Source_Va_n[6] = 1U;
    rtb_VariantMerge_For_Variant_Source_Va_n[8] = 1U;
    rtb_VariantMerge_For_Variant_Source_Va_n[9] = 1U;

#elif !Rte_SysCon_Variant_THDR_3 && !Rte_SysCon_Variant_THDR_5 && !Rte_SysCon_Variant_THDR_6

    /* VariantMerge generated from: '<S997>/Variant Source' incorporates:
     *  Constant: '<S1172>/Calib'
     *  Constant: '<S1173>/Calib'
     *  Constant: '<S1174>/Calib'
     *  Constant: '<S1175>/Calib'
     *  Constant: '<S1176>/Calib'
     *  Constant: '<S1177>/Calib'
     *  Constant: '<S1178>/Calib'
     *  Constant: '<S1179>/Calib'
     *  Constant: '<S1180>/Calib'
     *  Constant: '<S1181>/Calib'
     *  SignalConversion generated from: '<S997>/Variant Source'
     */
    rtb_VariantMerge_For_Variant_Source_Va_n[0] = KeTHDR_i_LTPP_LTPP2_DiffLvl;
    rtb_VariantMerge_For_Variant_Source_Va_n[1] = KeTHDR_i_LTPP_PPCTIS_DiffLvl;
    rtb_VariantMerge_For_Variant_Source_Va_n[2] = KeTHDR_i_LTPP_PECTOS_DiffLvl;
    rtb_VariantMerge_For_Variant_Source_Va_n[3] = KeTHDR_i_LTPP_LRCTOS_DiffLvl;
    rtb_VariantMerge_For_Variant_Source_Va_n[4] = KeTHDR_i_LTPP2_PPCTIS_DiffLvl;
    rtb_VariantMerge_For_Variant_Source_Va_n[5] = KeTHDR_i_LTPP2_PECTOS_DiffLvl;
    rtb_VariantMerge_For_Variant_Source_Va_n[6] = KeTHDR_i_LTPP2_LRCTOS_DiffLvl;
    rtb_VariantMerge_For_Variant_Source_Va_n[7] = KeTHDR_i_PPCTIS_PECTOS_DiffLvl;
    rtb_VariantMerge_For_Variant_Source_Va_n[8] = KeTHDR_i_PPCTIS_LRCTOS_DiffLvl;
    rtb_VariantMerge_For_Variant_Source_Va_n[9] = KeTHDR_i_PECTOS_LRCTOS_DiffLvl;

#endif

    /* End of If: '<S1131>/If' */

    /* Selector: '<S997>/Selector' incorporates:
     *  Constant: '<S1128>/Calib'
     */
    for (i = 0; i < 10; i++)
    {
        THDR_ac_B.Selector[i] = KaTHDR_T_LTCL_SnsrThrshlds[((sint32)
            rtb_VariantMerge_For_Variant_Source_Va_n[i]) - 1];
    }

    /* End of Selector: '<S997>/Selector' */

    /* Outputs for Atomic SubSystem: '<S882>/SnsrRat_V02' */
    THDR_ac_SnsrRat_V02_n();

    /* End of Outputs for SubSystem: '<S882>/SnsrRat_V02' */

    /* Outputs for Atomic SubSystem: '<S994>/LRCTOS_DiagEnbl' */
#if Rte_SysCon_Variant_THDR_7

    /* Outputs for Atomic SubSystem: '<S1003>/LRCTOS_Enbl' */
    /* Outputs for Atomic SubSystem: '<S1050>/M182' */
    /* VariantMerge generated from: '<S1003>/b_LRCTOS_Enbl_SnsrRatAlgo' incorporates:
     *  Constant: '<S1052>/Calib'
     *  Constant: '<S1053>/Constant'
     *  Constant: '<S1054>/Constant1'
     *  Constant: '<S1054>/Constant2'
     *  Constant: '<S1055>/Constant1'
     *  Constant: '<S1055>/Constant2'
     *  Constant: '<S1200>/Calib'
     *  Logic: '<S1050>/Logical'
     *  Logic: '<S1050>/Logical1'
     *  Logic: '<S1050>/Logical2'
     *  Logic: '<S1050>/Logical3'
     *  Logic: '<S1053>/Logical'
     *  Logic: '<S1053>/Logical1'
     *  Logic: '<S1053>/Logical2'
     *  Logic: '<S1054>/Logical Operator'
     *  Logic: '<S1055>/Logical Operator'
     *  RelationalOperator: '<S1053>/Comparison'
     *  RelationalOperator: '<S1054>/Relational Operator1'
     *  RelationalOperator: '<S1054>/Relational Operator2'
     *  RelationalOperator: '<S1055>/Relational Operator1'
     *  RelationalOperator: '<S1055>/Relational Operator2'
     *  Sum: '<S1053>/Add'
     */
    rtb_VariantMergeForOutportb_LRCTOS_Enbl_ =
        ((((((VeTHDR_b_LTCL_GlblRtnlztnEnbl1) && (VeTHDR_b_LTCL_GlblRtnlztnEnbl2))
            && (!rtb_Switch_h)) && (!KeTHDR_b_LRCTOS_Temp_FA_SD)) &&
          (rtb_VariantMerge_For_Variant_Source_Va_l ||
           (KeTHDR_b_LTRVlv_Chck_Ovrd))) && (((sint32)((uint32)((((uint32)
               (((((VariantMerge_For_Variant_Source_Varian_b > 0) &&
                   (VariantMerge_For_Variant_Source_Varian_c == 0U)) ||
                  rtb_VariantMerge_For_Variant_Source_Va_f) ||
                 rtb_VariantMerge_For_Variant_Source_Va_m) ? 1 : 0)) + ((uint32)
               (((((VariantMerge_For_Variant_Source_Varian_d > 0) &&
                   (VariantMerge_For_Variant_Source_Varian_e == 0U)) ||
                  rtb_VariantMerge_For_Variant_Source_V_cm) ||
                 rtb_VariantMerge_For_Variant_Source_Va_g) ? 1 : 0))) + ((uint32)
              ((rtb_VariantMerge_For_Variant_Source_V_j2 ||
                rtb_VariantMerge_For_Variant_Source_V_hq) ? 1 : 0))))) < 2));

    /* End of Outputs for SubSystem: '<S1050>/M182' */

    /* VariantMerge generated from: '<S1003>/b_LRCTOS_Enbl' incorporates:
     *  Logic: '<S1050>/Logical4'
     *  Logic: '<S1050>/Logical5'
     */
    VeTHDR_b_LRCTOS_RtnlztnEnbl = (rtb_VariantMergeForOutportb_LRCTOS_Enbl_ && (
        !VeTHDR_b_LRCTOS_NoDecision_SF));

    /* End of Outputs for SubSystem: '<S1003>/LRCTOS_Enbl' */
#else

    /* Outputs for Atomic SubSystem: '<S1003>/LRCTOS_Enbl_Stub' */
    /* VariantMerge generated from: '<S1003>/b_LRCTOS_Enbl' incorporates:
     *  Constant: '<S1051>/Constant'
     */
    VeTHDR_b_LRCTOS_RtnlztnEnbl = false;

    /* VariantMerge generated from: '<S1003>/b_LRCTOS_Enbl_SnsrRatAlgo' incorporates:
     *  Constant: '<S1051>/Constant1'
     */
    rtb_VariantMergeForOutportb_LRCTOS_Enbl_ = false;

    /* End of Outputs for SubSystem: '<S1003>/LRCTOS_Enbl_Stub' */
#endif

    /* End of Outputs for SubSystem: '<S994>/LRCTOS_DiagEnbl' */

    /* Switch: '<S1110>/Switch' incorporates:
     *  Constant: '<S1200>/Calib'
     */
    if (KeTHDR_b_LRCTOS_Temp_FA_SD)
    {
        /* Switch: '<S1110>/Switch' incorporates:
         *  Constant: '<S1115>/Calib'
         */
        VeTHDR_b_LRCTOS_FltSymFnl = KeTHDR_b_LRCTOS_NtPrsnt;
    }
    else
    {
        /* Switch: '<S1110>/Switch' */
        VeTHDR_b_LRCTOS_FltSymFnl = VeTHDR_b_LRCTOS_FltSymRaw_SF;
    }

    /* End of Switch: '<S1110>/Switch' */

    /* Outputs for Atomic SubSystem: '<S875>/Check_LRCTOS_Diag' */
#if Rte_SysCon_Variant_THDR_7

    /* Outputs for Atomic SubSystem: '<S877>/If_LRCTOS_Diag' */
    /* RelationalOperator: '<S891>/Relational Operator3' incorporates:
     *  Constant: '<S891>/Constant3'
     */
    rtb_TmpSignalConversionAtVePMTR_b_ThrmlS =
        (VariantMerge_For_Variant_Source_Varian_g == 0U);

    /* Outputs for Atomic SubSystem: '<S891>/EdgeFalling1' */
    /* Logic: '<S891>/Logical Operator' incorporates:
     *  Logic: '<S894>/OR1'
     */
    rtb_Logical1_fp = !rtb_TmpSignalConversionAtVePMTR_b_ThrmlS;

    /* End of Outputs for SubSystem: '<S891>/EdgeFalling1' */

    /* Logic: '<S891>/Logical1' incorporates:
     *  Constant: '<S888>/Calib'
     *  Constant: '<S890>/Calib'
     *  Constant: '<S891>/Constant1'
     *  DataStoreRead: '<S892>/StatusByte_MtrElect_CT_SnsrBPerf'
     *  Logic: '<S884>/Logical2'
     *  Logic: '<S891>/Logical Operator'
     *  Logic: '<S891>/Logical10'
     *  Logic: '<S891>/Logical12'
     *  RelationalOperator: '<S891>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S891>/Bitwise Operator3'
     */
    rtb_VeTHDR_b_DiagGlblCndtnsValid_OvrdVal = (((VeTHDR_b_LRCTOS_RtnlztnEnbl) &&
        (KeTHDR_b_LRCTOS_XYEnbl)) && ((!KeTHDR_b_MtrElect_CT_SnsrBPerf_LtchEnbl)
        || (((((uint32)THDR_ac_DW.StatusByte_MtrElect_CT_SnsrBPerf) & 1U) == 0U)
            || rtb_Logical1_fp)));

    /* Outputs for Atomic SubSystem: '<S891>/EdgeFalling1' */
    /* Logic: '<S894>/AND' incorporates:
     *  UnitDelay: '<S894>/Unit Delay'
     */
    rtb_Logical1_fp = (rtb_Logical1_fp && (THDR_ac_DW.UnitDelay_DSTATE_dw));

    /* Update for UnitDelay: '<S894>/Unit Delay' */
    THDR_ac_DW.UnitDelay_DSTATE_dw = rtb_TmpSignalConversionAtVePMTR_b_ThrmlS;

    /* End of Outputs for SubSystem: '<S891>/EdgeFalling1' */

    /* Logic: '<S891>/Logical5' */
    rtb_TmpSignalConversionAtVePMTR_b_ThrmlS = ((VeTHDR_b_ResetCnts) ||
        rtb_Logical1_fp);

    /* Outputs for Atomic SubSystem: '<S893>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S893>/Counter Reset  Enabled ' */
    /* Switch: '<S900>/Switch1' incorporates:
     *  Constant: '<S889>/Calib'
     *  Logic: '<S884>/Logical1'
     *  Logic: '<S893>/Fail Counter Reset'
     *  Logic: '<S893>/NOT6'
     *  Switch: '<S900>/Switch2'
     *  Switch: '<S901>/Switch1'
     *  UnitDelay: '<S893>/Unit Delay'
     *  UnitDelay: '<S893>/Unit Delay1'
     */
    if ((rtb_TmpSignalConversionAtVePMTR_b_ThrmlS ||
            (THDR_ac_DW.UnitDelay_DSTATE_lz)) || (THDR_ac_DW.UnitDelay1_DSTATE_i))
    {
        /* Switch: '<S900>/Switch1' incorporates:
         *  Constant: '<S900>/Constant Value2'
         */
        VeTHDR_Cnt_LRCTOS_FailCnt = 0U;

        /* Switch: '<S901>/Switch1' incorporates:
         *  Constant: '<S901>/Constant Value2'
         */
        VeTHDR_Cnt_LRCTOS_SmpCnt = 0U;
    }
    else
    {
        if (rtb_VeTHDR_b_DiagGlblCndtnsValid_OvrdVal &&
                ((VeTHDR_b_LRCTOS_FltSymFnl) && (KeTHDR_b_LRCTOS_XYFlt)))
        {
            /* Switch: '<S900>/Switch1' incorporates:
             *  Constant: '<S900>/Constant Value1'
             *  Sum: '<S900>/Subtraction'
             *  Switch: '<S900>/Switch2'
             *  UnitDelay: '<S900>/Unit Delay'
             */
            VeTHDR_Cnt_LRCTOS_FailCnt = (uint16)(((uint32)
                VeTHDR_Cnt_LRCTOS_FailCnt) + 1U);
        }

        /* Switch: '<S901>/Switch2' */
        if (rtb_VeTHDR_b_DiagGlblCndtnsValid_OvrdVal)
        {
            /* Switch: '<S901>/Switch1' incorporates:
             *  Constant: '<S901>/Constant Value1'
             *  Sum: '<S901>/Subtraction'
             *  Switch: '<S901>/Switch2'
             *  UnitDelay: '<S901>/Unit Delay'
             */
            VeTHDR_Cnt_LRCTOS_SmpCnt = (uint16)(((uint32)
                VeTHDR_Cnt_LRCTOS_SmpCnt) + 1U);
        }

        /* End of Switch: '<S901>/Switch2' */
    }

    /* End of Switch: '<S900>/Switch1' */
    /* End of Outputs for SubSystem: '<S893>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S893>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S893>/Greater Than or Equal ' incorporates:
     *  Constant: '<S886>/Calib'
     */
    THDR_ac_DW.UnitDelay1_DSTATE_i = (VeTHDR_Cnt_LRCTOS_FailCnt >=
        KeTHDR_Cnt_LRCTOS_FailCnt);

    /* Logic: '<S893>/NOT5' incorporates:
     *  Constant: '<S887>/Calib'
     *  Logic: '<S893>/NOT3'
     *  RelationalOperator: '<S893>/Less Than  or Equal'
     */
    THDR_ac_DW.UnitDelay_DSTATE_lz = ((VeTHDR_Cnt_LRCTOS_SmpCnt >=
        KeTHDR_Cnt_LRCTOS_SmpCnt) && (!THDR_ac_DW.UnitDelay1_DSTATE_i));

    /* Switch: '<S906>/Switch1' incorporates:
     *  Constant: '<S899>/Constant Value'
     *  DataStoreWrite: '<S884>/Data Store Write1'
     *  Switch: '<S905>/Switch1'
     */
    if (VeTHDR_b_ResetFOMs)
    {
        THDR_ac_DW.NeTHDR_Cnt_LRCTOS_MFOP = 0U;
    }
    else
    {
        if (THDR_ac_DW.UnitDelay_DSTATE_lz)
        {
            /* MinMax: '<S899>/Minimum2' incorporates:
             *  DataStoreRead: '<S884>/Data Store Read1'
             *  Switch: '<S905>/Switch1'
             */
            if (VeTHDR_Cnt_LRCTOS_FailCnt > THDR_ac_DW.NeTHDR_Cnt_LRCTOS_MFOP)
            {
                /* DataStoreWrite: '<S884>/Data Store Write1' incorporates:
                 *  Switch: '<S905>/Switch1'
                 */
                THDR_ac_DW.NeTHDR_Cnt_LRCTOS_MFOP = VeTHDR_Cnt_LRCTOS_FailCnt;
            }

            /* End of MinMax: '<S899>/Minimum2' */
        }
    }

    /* End of Switch: '<S906>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S891>/Fail' */
    THDR_ac_Fail(THDR_ac_DW.UnitDelay1_DSTATE_i,
                 &THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultSt_k);

    /* End of Outputs for SubSystem: '<S891>/Fail' */

    /* Outputs for Enabled SubSystem: '<S891>/Init' */
    THDR_ac_Init_l(rtb_TmpSignalConversionAtVePMTR_b_ThrmlS,
                   &THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultSt_k);

    /* End of Outputs for SubSystem: '<S891>/Init' */

    /* Outputs for Enabled SubSystem: '<S891>/Pass' */
    THDR_ac_Pass(THDR_ac_DW.UnitDelay_DSTATE_lz,
                 &THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultSt_k);

    /* End of Outputs for SubSystem: '<S891>/Pass' */

    /* RelationalOperator: '<S891>/Relational Operator' incorporates:
     *  Constant: '<S895>/Constant'
     *  VariantMerge generated from: '<S452>/VeTHDR_e_FaultSts_MtrElect_CT_SnsrBPerf'
     */
    VeTHDR_b_LRCTOS_FltDtct = (((uint32)
        THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultSt_k) == CeDFIB_e_Fail);

    /* End of Outputs for SubSystem: '<S877>/If_LRCTOS_Diag' */
#else

    /* Outputs for Atomic SubSystem: '<S877>/Else_LRCTOS_Diag' */
    /* VariantMerge generated from: '<S452>/VeTHDR_e_FaultSts_MtrElect_CT_SnsrBPerf' incorporates:
     *  Constant: '<S885>/Constant'
     */
    THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultSt_k = CeDFIB_e_Init;

    /* End of Outputs for SubSystem: '<S877>/Else_LRCTOS_Diag' */
#endif

    /* End of Outputs for SubSystem: '<S875>/Check_LRCTOS_Diag' */

    /* Outputs for Atomic SubSystem: '<S994>/LTPP2_DiagEnbl' */
#if Rte_SysCon_Variant_THDR_8

    /* Outputs for Atomic SubSystem: '<S1004>/LTPP2_Enbl' */
    /* S-Function (sfix_bitop): '<S1058>/Bitwise Operator1' incorporates:
     *  Logic: '<S1058>/Logical Operator'
     *  Logic: '<S1059>/Logical Operator'
     *  RelationalOperator: '<S1058>/Relational Operator1'
     *  RelationalOperator: '<S1058>/Relational Operator2'
     *  RelationalOperator: '<S1059>/Relational Operator1'
     *  RelationalOperator: '<S1059>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S1058>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1059>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1059>/Bitwise Operator2'
     */
#if Rte_SysCon_Variant_THDR_20

    /* Logic: '<S1056>/Logical' incorporates:
     *  Constant: '<S1058>/Constant1'
     *  Constant: '<S1058>/Constant2'
     */
    rtb_Logical_lv = ((VariantMerge_For_Variant_Source_Variant_ > 0) &&
                      (tmpRead_i == 0U));

#else

    /* Logic: '<S1056>/Logical' incorporates:
     *  Constant: '<S1059>/Constant1'
     *  Constant: '<S1059>/Constant2'
     *  DataStoreRead: '<S1059>/StatusByte_LIN3_BusOff'
     *  Logic: '<S1059>/Logical Operator'
     *  RelationalOperator: '<S1059>/Relational Operator1'
     *  RelationalOperator: '<S1059>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S1059>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1059>/Bitwise Operator2'
     */
    rtb_Logical_lv = (((((sint32)THDR_ac_DW.StatusByte_LIN3_BusOff) & 1) > 0) &&
                      ((((uint32)THDR_ac_DW.StatusByte_LIN3_BusOff) & 64U) == 0U));

#endif

    /* Logic: '<S1056>/Logical1' */
    rtb_VeTHDR_b_DiagGlblCndtnsValid_OvrdVal = !rtb_Logical_lv;

    /* SignalConversion generated from: '<S1056>/Variant Source' */
#if Rte_SysCon_Variant_THDR_3

    /* Outputs for Atomic SubSystem: '<S1056>/M182' */
    /* Logic: '<S1056>/Logical' incorporates:
     *  Constant: '<S1064>/Constant'
     *  Constant: '<S1069>/Constant1'
     *  Constant: '<S1069>/Constant2'
     *  Constant: '<S1070>/Constant1'
     *  Constant: '<S1070>/Constant2'
     *  Constant: '<S1071>/Constant1'
     *  Constant: '<S1071>/Constant2'
     *  Logic: '<S1064>/Logical'
     *  Logic: '<S1064>/Logical1'
     *  Logic: '<S1064>/Logical2'
     *  Logic: '<S1064>/Logical3'
     *  Logic: '<S1069>/Logical Operator'
     *  Logic: '<S1070>/Logical Operator'
     *  Logic: '<S1071>/Logical Operator'
     *  RelationalOperator: '<S1064>/Comparison'
     *  RelationalOperator: '<S1069>/Relational Operator1'
     *  RelationalOperator: '<S1069>/Relational Operator2'
     *  RelationalOperator: '<S1070>/Relational Operator1'
     *  RelationalOperator: '<S1070>/Relational Operator2'
     *  RelationalOperator: '<S1071>/Relational Operator1'
     *  RelationalOperator: '<S1071>/Relational Operator2'
     *  Sum: '<S1064>/Add'
     */
    rtb_Logical_lv = ((((sint32)((uint32)((((uint32)
                            (((((VariantMerge_For_Variant_Source_Varian_b > 0) &&
        (VariantMerge_For_Variant_Source_Varian_c == 0U)) ||
        rtb_VariantMerge_For_Variant_Source_Va_f) ||
        rtb_VariantMerge_For_Variant_Source_Va_m) ? 1 : 0)) + ((uint32)
                            (((((VariantMerge_For_Variant_Source_Varian_d > 0) &&
        (VariantMerge_For_Variant_Source_Varian_e == 0U)) ||
        rtb_VariantMerge_For_Variant_Source_V_cm) ||
        rtb_VariantMerge_For_Variant_Source_Va_g) ? 1 : 0))) + ((uint32)
                           ((((rtb_TmpSignalConversionAtVeCPDR_b_LTPP_F ||
        ((VariantMerge_For_Variant_Source_Varian_f > 0) &&
         (VariantMerge_For_Variant_Source_Varian_g == 0U))) ||
        rtb_VariantMerge_For_Variant_Source_V_j2) ||
        rtb_VariantMerge_For_Variant_Source_V_hq) ? 1 : 0))))) < 2) &&
                      rtb_TmpSignalConversionAtVeTMIR_b_MainRl);

    /* End of Outputs for SubSystem: '<S1056>/M182' */
#else

    /* Outputs for Atomic SubSystem: '<S1056>/OtherPrograms' */
    /* Logic: '<S1056>/Logical' incorporates:
     *  Constant: '<S1072>/Constant1'
     *  Constant: '<S1072>/Constant2'
     *  Constant: '<S1073>/Constant1'
     *  Constant: '<S1073>/Constant2'
     *  Logic: '<S1065>/Logical'
     *  Logic: '<S1065>/Logical4'
     *  Logic: '<S1072>/Logical Operator'
     *  Logic: '<S1073>/Logical Operator'
     *  RelationalOperator: '<S1072>/Relational Operator1'
     *  RelationalOperator: '<S1072>/Relational Operator2'
     *  RelationalOperator: '<S1073>/Relational Operator1'
     *  RelationalOperator: '<S1073>/Relational Operator2'
     *  SignalConversion generated from: '<S1056>/Variant Source'
     */
    rtb_Logical_lv = (((((((VariantMerge_For_Variant_Source_Varian_b <= 0) ||
                           (VariantMerge_For_Variant_Source_Varian_c != 0U)) &&
                          (!rtb_VariantMerge_For_Variant_Source_Va_f)) &&
                         (!rtb_VariantMerge_For_Variant_Source_Va_m)) &&
                        ((VariantMerge_For_Variant_Source_Varian_d <= 0) ||
                         (VariantMerge_For_Variant_Source_Varian_e != 0U))) && (
                        !rtb_VariantMerge_For_Variant_Source_V_cm)) &&
                      (!rtb_VariantMerge_For_Variant_Source_Va_g));

    /* End of Outputs for SubSystem: '<S1056>/OtherPrograms' */
#endif

    /* End of SignalConversion generated from: '<S1056>/Variant Source' */

    /* Logic: '<S1056>/Logical' incorporates:
     *  Constant: '<S1060>/Constant1'
     *  Constant: '<S1060>/Constant2'
     *  Constant: '<S1063>/Calib'
     *  Constant: '<S1202>/Calib'
     *  Logic: '<S1056>/Logical11'
     *  Logic: '<S1056>/Logical2'
     *  Logic: '<S1056>/Logical3'
     *  Logic: '<S1056>/Logical6'
     *  Logic: '<S1060>/Logical Operator'
     *  RelationalOperator: '<S1060>/Relational Operator1'
     *  RelationalOperator: '<S1060>/Relational Operator2'
     */
    rtb_Logical_lv = ((((((VeTHDR_b_LTCL_GlblRtnlztnEnbl1) &&
                          ((VariantMerge_For_Variant_Source_Varian_5 <= 0) ||
                           (VariantMerge_For_Variant_Source_Varian_2 != 0U))) &&
                         rtb_VeTHDR_b_DiagGlblCndtnsValid_OvrdVal) &&
                        (!KeTHDR_b_LTPP2_Temp_FA_SD)) && ((!rtb_Switch_m) ||
                        (!KeTHDR_b_LTCL_TempSnsrRtnlty_LTPP2_TempFA_Enbl))) &&
                      rtb_Logical_lv);

    /* Logic: '<S1056>/Logical7' */
    rtb_Switch_m = (rtb_Logical_lv && rtb_Switch_m);

    /* Outputs for Atomic SubSystem: '<S1061>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S1067>/EdgeRising' */
    /* Logic: '<S1068>/AND' incorporates:
     *  Logic: '<S1068>/OR1'
     *  UnitDelay: '<S1068>/Unit Delay'
     */
    rtb_VeTHDR_b_DiagGlblCndtnsValid_OvrdVal = (rtb_Switch_m &&
        (!THDR_ac_DW.UnitDelay_DSTATE_ht));

    /* Update for UnitDelay: '<S1068>/Unit Delay' */
    THDR_ac_DW.UnitDelay_DSTATE_ht = rtb_Switch_m;

    /* End of Outputs for SubSystem: '<S1067>/EdgeRising' */

    /* Switch: '<S1067>/Switch1' incorporates:
     *  Constant: '<S1066>/Calib'
     *  Constant: '<S1067>/Constant Value1'
     *  Constant: '<S12>/Calib'
     *  Logic: '<S1067>/OR'
     *  Logic: '<S1067>/OR1'
     *  MinMax: '<S1067>/Minimum'
     *  Sum: '<S1067>/Summation'
     *  UnitDelay: '<S1067>/Unit Delay'
     */
    if ((!rtb_Switch_m) || rtb_VeTHDR_b_DiagGlblCndtnsValid_OvrdVal)
    {
        THDR_ac_DW.UnitDelay_DSTATE_n = 0.0F;
    }
    else
    {
        THDR_ac_DW.UnitDelay_DSTATE_n = fminf(KeTHDR_t_LTPP2_FA_DbncTime,
            HeTHDR_t_MedTEH + THDR_ac_DW.UnitDelay_DSTATE_n);
    }

    /* End of Switch: '<S1067>/Switch1' */

    /* VariantMerge generated from: '<S1004>/b_LTPP2_FA_Cnfrm' incorporates:
     *  Constant: '<S1066>/Calib'
     *  Logic: '<S1067>/AND'
     *  RelationalOperator: '<S1067>/Greater  Than'
     *  UnitDelay: '<S1067>/Unit Delay'
     */
    rtb_VariantMergeForOutportb_LTPP2_FA_Cnf = (rtb_Switch_m &&
        (THDR_ac_DW.UnitDelay_DSTATE_n >= KeTHDR_t_LTPP2_FA_DbncTime));

    /* End of Outputs for SubSystem: '<S1061>/Turn On Delay Time' */

    /* VariantMerge generated from: '<S1004>/b_LTPP2_Enbl_SnsrRatAlgo' incorporates:
     *  Logic: '<S1056>/Logical5'
     */
    THDR_ac_DW.UnitDelay1_DSTATE_f = (rtb_Logical_lv &&
        (VeTHDR_b_LTCL_GlblRtnlztnEnbl2));

    /* VariantMerge generated from: '<S1004>/b_LTPP2_Enbl' incorporates:
     *  Constant: '<S1062>/Calib'
     *  Logic: '<S1056>/Logical10'
     *  Logic: '<S1056>/Logical4'
     *  Logic: '<S1056>/Logical8'
     *  Logic: '<S1056>/Logical9'
     */
    VeTHDR_b_LTPP2_RtnlztnEnbl = (((THDR_ac_DW.UnitDelay1_DSTATE_f) &&
        (!VeTHDR_b_LTPP2_NoDecision_SF)) || ((KeTHDR_b_LTCL_LTPP2_FA_EnblCnds) &&
        rtb_VariantMergeForOutportb_LTPP2_FA_Cnf));

    /* End of Outputs for SubSystem: '<S1004>/LTPP2_Enbl' */
#else

    /* Outputs for Atomic SubSystem: '<S1004>/LTPP2_Enbl_Stub' */
    /* VariantMerge generated from: '<S1004>/b_LTPP2_Enbl' incorporates:
     *  Constant: '<S1057>/Constant'
     */
    VeTHDR_b_LTPP2_RtnlztnEnbl = false;

    /* VariantMerge generated from: '<S1004>/b_LTPP2_Enbl_SnsrRatAlgo' incorporates:
     *  Constant: '<S1057>/Constant1'
     */
    THDR_ac_DW.UnitDelay1_DSTATE_f = false;

    /* VariantMerge generated from: '<S1004>/b_LTPP2_FA_Cnfrm' incorporates:
     *  Constant: '<S1057>/Constant2'
     */
    rtb_VariantMergeForOutportb_LTPP2_FA_Cnf = false;

    /* End of Outputs for SubSystem: '<S1004>/LTPP2_Enbl_Stub' */
#endif

    /* End of Outputs for SubSystem: '<S994>/LTPP2_DiagEnbl' */

    /* Switch: '<S1111>/Switch' incorporates:
     *  Constant: '<S1202>/Calib'
     */
    if (KeTHDR_b_LTPP2_Temp_FA_SD)
    {
        /* Switch: '<S1111>/Switch' incorporates:
         *  Constant: '<S1117>/Calib'
         */
        VeTHDR_b_LTPP2_FltSymFnl = KeTHDR_b_LTPP2_NtPrsnt;
    }
    else
    {
        /* Switch: '<S1111>/Switch' incorporates:
         *  Constant: '<S1116>/Calib'
         *  Logic: '<S1111>/Logical'
         *  Logic: '<S1111>/Logical2'
         */
        VeTHDR_b_LTPP2_FltSymFnl = (((KeTHDR_b_LTCL_LTPP2_FA_FltCndsEnbl) &&
            rtb_VariantMergeForOutportb_LTPP2_FA_Cnf) ||
            (VeTHDR_b_LTPP2_FltSymRaw_SF));
    }

    /* End of Switch: '<S1111>/Switch' */

    /* Outputs for Atomic SubSystem: '<S875>/Check_LTPP2_Diag' */
#if Rte_SysCon_Variant_THDR_8

    /* Outputs for Atomic SubSystem: '<S878>/If_LTPP2_Diag' */
    /* RelationalOperator: '<S915>/Relational Operator3' incorporates:
     *  Constant: '<S915>/Constant3'
     */
    rtb_VeTHDR_b_DiagGlblCndtnsValid_OvrdVal =
        (VariantMerge_For_Variant_Source_Varian_a == 0U);

    /* Outputs for Atomic SubSystem: '<S915>/EdgeFalling1' */
    /* Logic: '<S915>/Logical Operator' incorporates:
     *  Logic: '<S918>/OR1'
     */
    rtb_Logical_lv = !rtb_VeTHDR_b_DiagGlblCndtnsValid_OvrdVal;

    /* End of Outputs for SubSystem: '<S915>/EdgeFalling1' */

    /* Logic: '<S915>/Logical1' incorporates:
     *  Constant: '<S912>/Calib'
     *  Constant: '<S914>/Calib'
     *  Constant: '<S915>/Constant1'
     *  DataStoreRead: '<S916>/StatusByte_MtrElect_CoolPmpBTempSnsrPerf'
     *  Logic: '<S908>/Logical2'
     *  Logic: '<S915>/Logical Operator'
     *  Logic: '<S915>/Logical10'
     *  Logic: '<S915>/Logical12'
     *  RelationalOperator: '<S915>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S915>/Bitwise Operator3'
     */
    rtb_Switch_m = (((VeTHDR_b_LTPP2_RtnlztnEnbl) && (KeTHDR_b_LTPP2_XYEnbl)) &&
                    ((!KeTHDR_b_MtrElect_CoolPmpBTempSnsrPerf_LtchEnbl) ||
                     (((((uint32)
                         THDR_ac_DW.StatusByte_MtrElect_CoolPmpBTempSnsrPerf) &
                        1U) == 0U) || rtb_Logical_lv)));

    /* Outputs for Atomic SubSystem: '<S915>/EdgeFalling1' */
    /* Logic: '<S918>/AND' incorporates:
     *  UnitDelay: '<S918>/Unit Delay'
     */
    rtb_Logical_lv = (rtb_Logical_lv && (THDR_ac_DW.UnitDelay_DSTATE_nc));

    /* Update for UnitDelay: '<S918>/Unit Delay' */
    THDR_ac_DW.UnitDelay_DSTATE_nc = rtb_VeTHDR_b_DiagGlblCndtnsValid_OvrdVal;

    /* End of Outputs for SubSystem: '<S915>/EdgeFalling1' */

    /* Logic: '<S915>/Logical5' */
    rtb_VeTHDR_b_DiagGlblCndtnsValid_OvrdVal = ((VeTHDR_b_ResetCnts) ||
        rtb_Logical_lv);

    /* Outputs for Atomic SubSystem: '<S917>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S917>/Counter Reset  Enabled ' */
    /* Switch: '<S924>/Switch1' incorporates:
     *  Constant: '<S913>/Calib'
     *  Logic: '<S908>/Logical1'
     *  Logic: '<S917>/Fail Counter Reset'
     *  Logic: '<S917>/NOT6'
     *  Switch: '<S924>/Switch2'
     *  Switch: '<S925>/Switch1'
     *  UnitDelay: '<S917>/Unit Delay'
     *  UnitDelay: '<S917>/Unit Delay1'
     */
    if ((rtb_VeTHDR_b_DiagGlblCndtnsValid_OvrdVal ||
            (THDR_ac_DW.UnitDelay_DSTATE_i0e)) ||
            (THDR_ac_DW.UnitDelay1_DSTATE_k))
    {
        /* Switch: '<S924>/Switch1' incorporates:
         *  Constant: '<S924>/Constant Value2'
         */
        VeTHDR_Cnt_LTPP2_FailCnt = 0U;

        /* Switch: '<S925>/Switch1' incorporates:
         *  Constant: '<S925>/Constant Value2'
         */
        VeTHDR_Cnt_LTPP2_SmpCnt = 0U;
    }
    else
    {
        if (rtb_Switch_m && ((VeTHDR_b_LTPP2_FltSymFnl) && (KeTHDR_b_LTPP2_XYFlt)))
        {
            /* Switch: '<S924>/Switch1' incorporates:
             *  Constant: '<S924>/Constant Value1'
             *  Sum: '<S924>/Subtraction'
             *  Switch: '<S924>/Switch2'
             *  UnitDelay: '<S924>/Unit Delay'
             */
            VeTHDR_Cnt_LTPP2_FailCnt = (uint16)(((uint32)
                VeTHDR_Cnt_LTPP2_FailCnt) + 1U);
        }

        /* Switch: '<S925>/Switch2' */
        if (rtb_Switch_m)
        {
            /* Switch: '<S925>/Switch1' incorporates:
             *  Constant: '<S925>/Constant Value1'
             *  Sum: '<S925>/Subtraction'
             *  Switch: '<S925>/Switch2'
             *  UnitDelay: '<S925>/Unit Delay'
             */
            VeTHDR_Cnt_LTPP2_SmpCnt = (uint16)(((uint32)VeTHDR_Cnt_LTPP2_SmpCnt)
                + 1U);
        }

        /* End of Switch: '<S925>/Switch2' */
    }

    /* End of Switch: '<S924>/Switch1' */
    /* End of Outputs for SubSystem: '<S917>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S917>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S917>/Greater Than or Equal ' incorporates:
     *  Constant: '<S910>/Calib'
     */
    THDR_ac_DW.UnitDelay1_DSTATE_k = (VeTHDR_Cnt_LTPP2_FailCnt >=
        KeTHDR_Cnt_LTPP2_FailCnt);

    /* Logic: '<S917>/NOT5' incorporates:
     *  Constant: '<S911>/Calib'
     *  Logic: '<S917>/NOT3'
     *  RelationalOperator: '<S917>/Less Than  or Equal'
     */
    THDR_ac_DW.UnitDelay_DSTATE_i0e = ((VeTHDR_Cnt_LTPP2_SmpCnt >=
        KeTHDR_Cnt_LTPP2_SmpCnt) && (!THDR_ac_DW.UnitDelay1_DSTATE_k));

    /* Switch: '<S930>/Switch1' incorporates:
     *  Constant: '<S923>/Constant Value'
     *  DataStoreWrite: '<S908>/Data Store Write1'
     *  Switch: '<S929>/Switch1'
     */
    if (VeTHDR_b_ResetFOMs)
    {
        THDR_ac_DW.NeTHDR_Cnt_LTPP2_MFOP = 0U;
    }
    else
    {
        if (THDR_ac_DW.UnitDelay_DSTATE_i0e)
        {
            /* MinMax: '<S923>/Minimum2' incorporates:
             *  DataStoreRead: '<S908>/Data Store Read1'
             *  Switch: '<S929>/Switch1'
             */
            if (VeTHDR_Cnt_LTPP2_FailCnt > THDR_ac_DW.NeTHDR_Cnt_LTPP2_MFOP)
            {
                /* DataStoreWrite: '<S908>/Data Store Write1' incorporates:
                 *  Switch: '<S929>/Switch1'
                 */
                THDR_ac_DW.NeTHDR_Cnt_LTPP2_MFOP = VeTHDR_Cnt_LTPP2_FailCnt;
            }

            /* End of MinMax: '<S923>/Minimum2' */
        }
    }

    /* End of Switch: '<S930>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S915>/Fail' */
    THDR_ac_Fail(THDR_ac_DW.UnitDelay1_DSTATE_k,
                 &THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultS_bp);

    /* End of Outputs for SubSystem: '<S915>/Fail' */

    /* Outputs for Enabled SubSystem: '<S915>/Init' */
    THDR_ac_Init_l(rtb_VeTHDR_b_DiagGlblCndtnsValid_OvrdVal,
                   &THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultS_bp);

    /* End of Outputs for SubSystem: '<S915>/Init' */

    /* Outputs for Enabled SubSystem: '<S915>/Pass' */
    THDR_ac_Pass(THDR_ac_DW.UnitDelay_DSTATE_i0e,
                 &THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultS_bp);

    /* End of Outputs for SubSystem: '<S915>/Pass' */

    /* RelationalOperator: '<S915>/Relational Operator' incorporates:
     *  Constant: '<S919>/Constant'
     *  VariantMerge generated from: '<S452>/VeTHDR_e_FaultSts_MtrElect_CoolPmpBTempSnsrPerf'
     */
    VeTHDR_b_LTPP2_FltDtct = (((uint32)
        THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultS_bp) == CeDFIB_e_Fail);

    /* End of Outputs for SubSystem: '<S878>/If_LTPP2_Diag' */
#else

    /* Outputs for Atomic SubSystem: '<S878>/Else_LTPP2_Diag' */
    /* VariantMerge generated from: '<S452>/VeTHDR_e_FaultSts_MtrElect_CoolPmpBTempSnsrPerf' incorporates:
     *  Constant: '<S909>/Constant'
     */
    THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultS_bp = CeDFIB_e_Init;

    /* End of Outputs for SubSystem: '<S878>/Else_LTPP2_Diag' */
#endif

    /* End of Outputs for SubSystem: '<S875>/Check_LTPP2_Diag' */

    /* S-Function (sfix_bitop): '<S1074>/Bitwise Operator2' incorporates:
     *  Logic: '<S1074>/Logical Operator'
     *  Logic: '<S1075>/Logical Operator'
     *  RelationalOperator: '<S1074>/Relational Operator1'
     *  RelationalOperator: '<S1074>/Relational Operator2'
     *  RelationalOperator: '<S1075>/Relational Operator1'
     *  RelationalOperator: '<S1075>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S1074>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1075>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1075>/Bitwise Operator2'
     */
#if Rte_SysCon_Variant_THDR_23

    /* UnitDelay: '<S938>/Unit Delay1' incorporates:
     *  Constant: '<S1074>/Constant1'
     *  Constant: '<S1074>/Constant2'
     */
    THDR_ac_DW.UnitDelay4_DSTATE = ((VariantMerge_For_Variant_Source_Variant_ >
        0) && (tmpRead_i == 0U));

#else

    /* UnitDelay: '<S938>/Unit Delay1' incorporates:
     *  Constant: '<S1075>/Constant1'
     *  Constant: '<S1075>/Constant2'
     *  Logic: '<S1075>/Logical Operator'
     *  RelationalOperator: '<S1075>/Relational Operator1'
     *  RelationalOperator: '<S1075>/Relational Operator2'
     */
    THDR_ac_DW.UnitDelay4_DSTATE = ((VariantMerge_For_Variant_Source_Varian_1 >
        0) && (rowIdx == 0U));

#endif

    /* Logic: '<S1005>/Logical3' */
    rtb_Switch_m = !THDR_ac_DW.UnitDelay4_DSTATE;

    /* SignalConversion generated from: '<S1005>/Variant Source' */
#if Rte_SysCon_Variant_THDR_3

    /* Outputs for Atomic SubSystem: '<S1005>/M182' */
    /* UnitDelay: '<S938>/Unit Delay1' incorporates:
     *  Constant: '<S1080>/Constant'
     *  Constant: '<S1085>/Constant1'
     *  Constant: '<S1085>/Constant2'
     *  Constant: '<S1086>/Constant1'
     *  Constant: '<S1086>/Constant2'
     *  Constant: '<S1087>/Constant1'
     *  Constant: '<S1087>/Constant2'
     *  Logic: '<S1080>/Logical'
     *  Logic: '<S1080>/Logical1'
     *  Logic: '<S1080>/Logical2'
     *  Logic: '<S1080>/Logical3'
     *  Logic: '<S1085>/Logical Operator'
     *  Logic: '<S1086>/Logical Operator'
     *  Logic: '<S1087>/Logical Operator'
     *  RelationalOperator: '<S1080>/Comparison'
     *  RelationalOperator: '<S1085>/Relational Operator1'
     *  RelationalOperator: '<S1085>/Relational Operator2'
     *  RelationalOperator: '<S1086>/Relational Operator1'
     *  RelationalOperator: '<S1086>/Relational Operator2'
     *  RelationalOperator: '<S1087>/Relational Operator1'
     *  RelationalOperator: '<S1087>/Relational Operator2'
     *  Sum: '<S1080>/Add'
     */
    THDR_ac_DW.UnitDelay4_DSTATE = ((((sint32)((uint32)((((uint32)
        (((((VariantMerge_For_Variant_Source_Varian_b > 0) &&
            (VariantMerge_For_Variant_Source_Varian_c == 0U)) ||
           rtb_VariantMerge_For_Variant_Source_Va_f) ||
          rtb_VariantMerge_For_Variant_Source_Va_m) ? 1 : 0)) + ((uint32)
        (((((VariantMerge_For_Variant_Source_Varian_d > 0) &&
            (VariantMerge_For_Variant_Source_Varian_e == 0U)) ||
           rtb_VariantMerge_For_Variant_Source_V_cm) ||
          rtb_VariantMerge_For_Variant_Source_Va_g) ? 1 : 0))) + ((uint32)
        ((((rtb_TmpSignalConversionAtVeCPDR_b_LTPP_F ||
            ((VariantMerge_For_Variant_Source_Varian_f > 0) &&
             (VariantMerge_For_Variant_Source_Varian_g == 0U))) ||
           rtb_VariantMerge_For_Variant_Source_V_j2) ||
          rtb_VariantMerge_For_Variant_Source_V_hq) ? 1 : 0))))) < 2) &&
        rtb_TmpSignalConversionAtVeTMIR_b_MainRl);

    /* End of Outputs for SubSystem: '<S1005>/M182' */
#else

    /* Outputs for Atomic SubSystem: '<S1005>/OtherPrograms' */
    /* UnitDelay: '<S938>/Unit Delay1' incorporates:
     *  Constant: '<S1088>/Constant1'
     *  Constant: '<S1088>/Constant2'
     *  Constant: '<S1089>/Constant1'
     *  Constant: '<S1089>/Constant2'
     *  Logic: '<S1081>/Logical'
     *  Logic: '<S1081>/Logical4'
     *  Logic: '<S1088>/Logical Operator'
     *  Logic: '<S1089>/Logical Operator'
     *  RelationalOperator: '<S1088>/Relational Operator1'
     *  RelationalOperator: '<S1088>/Relational Operator2'
     *  RelationalOperator: '<S1089>/Relational Operator1'
     *  RelationalOperator: '<S1089>/Relational Operator2'
     *  SignalConversion generated from: '<S1005>/Variant Source'
     */
    THDR_ac_DW.UnitDelay4_DSTATE =
        (((((((VariantMerge_For_Variant_Source_Varian_b <= 0) ||
              (VariantMerge_For_Variant_Source_Varian_c != 0U)) &&
             (!rtb_VariantMerge_For_Variant_Source_Va_f)) &&
            (!rtb_VariantMerge_For_Variant_Source_Va_m)) &&
           ((VariantMerge_For_Variant_Source_Varian_d <= 0) ||
            (VariantMerge_For_Variant_Source_Varian_e != 0U))) &&
          (!rtb_VariantMerge_For_Variant_Source_V_cm)) &&
         (!rtb_VariantMerge_For_Variant_Source_Va_g));

    /* End of Outputs for SubSystem: '<S1005>/OtherPrograms' */
#endif

    /* End of SignalConversion generated from: '<S1005>/Variant Source' */

    /* UnitDelay: '<S938>/Unit Delay1' incorporates:
     *  Constant: '<S1076>/Constant1'
     *  Constant: '<S1076>/Constant2'
     *  Constant: '<S1079>/Calib'
     *  Constant: '<S1204>/Calib'
     *  Logic: '<S1005>/Logical'
     *  Logic: '<S1005>/Logical1'
     *  Logic: '<S1005>/Logical2'
     *  Logic: '<S1005>/Logical6'
     *  Logic: '<S1005>/Logical7'
     *  Logic: '<S1076>/Logical Operator'
     *  RelationalOperator: '<S1076>/Relational Operator1'
     *  RelationalOperator: '<S1076>/Relational Operator2'
     */
    THDR_ac_DW.UnitDelay4_DSTATE = ((((((VeTHDR_b_LTCL_GlblRtnlztnEnbl1) &&
        ((VariantMerge_For_Variant_Source_Varian_3 <= 0) ||
         (VariantMerge_For_Variant_Source_Varian_0 != 0U))) && rtb_Switch_m) &&
        (!KeTHDR_b_LTPP_Temp_FA_SD)) && ((!rtb_UnitDelay_hn) ||
        (!KeTHDR_b_LTCL_TempSnsrRtnlty_LTPP_TempFA_Enbl))) &&
        (THDR_ac_DW.UnitDelay4_DSTATE));

    /* Logic: '<S1005>/Logical5' incorporates:
     *  UnitDelay: '<S882>/Unit Delay'
     */
    THDR_ac_DW.UnitDelay_DSTATE_ii = ((THDR_ac_DW.UnitDelay4_DSTATE) &&
        (VeTHDR_b_LTCL_GlblRtnlztnEnbl2));

    /* Logic: '<S1005>/Logical8' */
    rtb_UnitDelay_hn = ((THDR_ac_DW.UnitDelay4_DSTATE) && rtb_UnitDelay_hn);

    /* Outputs for Atomic SubSystem: '<S1077>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S1083>/EdgeRising' */
    /* Logic: '<S1084>/AND' incorporates:
     *  Logic: '<S1084>/OR1'
     *  UnitDelay: '<S1084>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeTMIR_b_MainRl = (rtb_UnitDelay_hn &&
        (!THDR_ac_DW.UnitDelay_DSTATE_jt));

    /* Update for UnitDelay: '<S1084>/Unit Delay' */
    THDR_ac_DW.UnitDelay_DSTATE_jt = rtb_UnitDelay_hn;

    /* End of Outputs for SubSystem: '<S1083>/EdgeRising' */

    /* Switch: '<S1083>/Switch1' incorporates:
     *  Constant: '<S1082>/Calib'
     *  Constant: '<S1083>/Constant Value1'
     *  Constant: '<S12>/Calib'
     *  Logic: '<S1083>/OR'
     *  Logic: '<S1083>/OR1'
     *  MinMax: '<S1083>/Minimum'
     *  Sum: '<S1083>/Summation'
     *  UnitDelay: '<S1083>/Unit Delay'
     */
    if ((!rtb_UnitDelay_hn) || rtb_TmpSignalConversionAtVeTMIR_b_MainRl)
    {
        THDR_ac_DW.UnitDelay_DSTATE_d = 0.0F;
    }
    else
    {
        THDR_ac_DW.UnitDelay_DSTATE_d = fminf(KeTHDR_t_LTPP_FA_DbncTime,
            HeTHDR_t_MedTEH + THDR_ac_DW.UnitDelay_DSTATE_d);
    }

    /* End of Switch: '<S1083>/Switch1' */

    /* Logic: '<S1083>/AND' incorporates:
     *  Constant: '<S1082>/Calib'
     *  RelationalOperator: '<S1083>/Greater  Than'
     *  UnitDelay: '<S1083>/Unit Delay'
     */
    rtb_UnitDelay_hn = (rtb_UnitDelay_hn && (THDR_ac_DW.UnitDelay_DSTATE_d >=
                         KeTHDR_t_LTPP_FA_DbncTime));

    /* End of Outputs for SubSystem: '<S1077>/Turn On Delay Time' */

    /* Logic: '<S1005>/Logical4' incorporates:
     *  Constant: '<S1078>/Calib'
     *  Logic: '<S1005>/Logical10'
     *  Logic: '<S1005>/Logical11'
     *  Logic: '<S1005>/Logical9'
     *  UnitDelay: '<S882>/Unit Delay'
     */
    VeTHDR_b_LTPP_RtnlztnEnbl = (((THDR_ac_DW.UnitDelay_DSTATE_ii) &&
        (!VeTHDR_b_LTPP_NoDecision_SF)) || ((KeTHDR_b_LTCL_LTPP_FA_EnblCnds) &&
        rtb_UnitDelay_hn));

    /* Switch: '<S1112>/Switch' incorporates:
     *  Constant: '<S1204>/Calib'
     */
    if (KeTHDR_b_LTPP_Temp_FA_SD)
    {
        /* Switch: '<S1112>/Switch' incorporates:
         *  Constant: '<S1119>/Calib'
         */
        VeTHDR_b_LTPP_FltSympFnl = KeTHDR_b_LTPP_NtPrsnt;
    }
    else
    {
        /* Switch: '<S1112>/Switch' incorporates:
         *  Constant: '<S1118>/Calib'
         *  Logic: '<S1112>/Logical'
         *  Logic: '<S1112>/Logical2'
         */
        VeTHDR_b_LTPP_FltSympFnl = (((KeTHDR_b_LTCL_LTPP_FA_FltCndsEnbl) &&
            rtb_UnitDelay_hn) || (VeTHDR_b_LTPP_FltSymRaw_SF));
    }

    /* End of Switch: '<S1112>/Switch' */

    /* Outputs for Atomic SubSystem: '<S875>/Check_LTPP_Diag' */
    /* RelationalOperator: '<S936>/Relational Operator3' incorporates:
     *  Constant: '<S936>/Constant3'
     */
    rtb_UnitDelay_hn = (VariantMerge_For_Variant_Source_Varian_8 == 0U);

    /* Outputs for Atomic SubSystem: '<S936>/EdgeFalling1' */
    /* Logic: '<S936>/Logical Operator' incorporates:
     *  Logic: '<S939>/OR1'
     */
    rtb_Switch_m = !rtb_UnitDelay_hn;

    /* End of Outputs for SubSystem: '<S936>/EdgeFalling1' */

    /* Logic: '<S936>/Logical1' incorporates:
     *  Constant: '<S934>/Calib'
     *  Constant: '<S935>/Calib'
     *  Constant: '<S936>/Constant1'
     *  DataStoreRead: '<S937>/StatusByte_MtrElect_CoolPmpATempSnsrPerf'
     *  Logic: '<S879>/AND1'
     *  Logic: '<S936>/Logical Operator'
     *  Logic: '<S936>/Logical10'
     *  Logic: '<S936>/Logical12'
     *  RelationalOperator: '<S936>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S936>/Bitwise Operator3'
     */
    rtb_TmpSignalConversionAtVeTMIR_b_MainRl = (((VeTHDR_b_LTPP_RtnlztnEnbl) &&
        (KeTHDR_b_LTPP_XYEnbl)) &&
        ((!KeTHDR_b_MtrElect_CoolPmpATempSnsrPerf_LtchEnbl) || (((((uint32)
        THDR_ac_DW.StatusByte_MtrElect_CoolPmpATempSnsrPerf) & 1U) == 0U) ||
        rtb_Switch_m)));

    /* Outputs for Atomic SubSystem: '<S936>/EdgeFalling1' */
    /* Logic: '<S939>/AND' incorporates:
     *  UnitDelay: '<S939>/Unit Delay'
     */
    rtb_Switch_m = (rtb_Switch_m && (THDR_ac_DW.UnitDelay_DSTATE_nv));

    /* Update for UnitDelay: '<S939>/Unit Delay' */
    THDR_ac_DW.UnitDelay_DSTATE_nv = rtb_UnitDelay_hn;

    /* End of Outputs for SubSystem: '<S936>/EdgeFalling1' */

    /* Logic: '<S936>/Logical5' */
    rtb_Switch_m = ((VeTHDR_b_ResetCnts) || rtb_Switch_m);

    /* UnitDelay: '<S980>/Unit Delay' incorporates:
     *  UnitDelay: '<S938>/Unit Delay'
     */
    rtb_UnitDelay_hn = THDR_ac_DW.UnitDelay_DSTATE_e2;

    /* Outputs for Atomic SubSystem: '<S938>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S938>/Counter Reset  Enabled ' */
    /* Switch: '<S945>/Switch1' incorporates:
     *  Constant: '<S933>/Calib'
     *  Logic: '<S879>/AND2'
     *  Logic: '<S938>/Fail Counter Reset'
     *  Logic: '<S938>/NOT6'
     *  Switch: '<S945>/Switch2'
     *  Switch: '<S946>/Switch1'
     *  UnitDelay: '<S938>/Unit Delay'
     *  UnitDelay: '<S938>/Unit Delay1'
     */
    if ((rtb_Switch_m || (THDR_ac_DW.UnitDelay_DSTATE_e2)) ||
            (THDR_ac_DW.UnitDelay1_DSTATE_l))
    {
        /* Switch: '<S945>/Switch1' incorporates:
         *  Constant: '<S945>/Constant Value2'
         */
        VeTHDR_Cnt_LTPP_FailCnt = 0U;

        /* Switch: '<S946>/Switch1' incorporates:
         *  Constant: '<S946>/Constant Value2'
         */
        VeTHDR_Cnt_LTPP_SmpCnt = 0U;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeTMIR_b_MainRl &&
                ((VeTHDR_b_LTPP_FltSympFnl) && (KeTHDR_b_LTPP_Flt)))
        {
            /* Switch: '<S945>/Switch1' incorporates:
             *  Constant: '<S945>/Constant Value1'
             *  Sum: '<S945>/Subtraction'
             *  Switch: '<S945>/Switch2'
             *  UnitDelay: '<S945>/Unit Delay'
             */
            VeTHDR_Cnt_LTPP_FailCnt = (uint16)(((uint32)VeTHDR_Cnt_LTPP_FailCnt)
                + 1U);
        }

        /* Switch: '<S946>/Switch2' */
        if (rtb_TmpSignalConversionAtVeTMIR_b_MainRl)
        {
            /* Switch: '<S946>/Switch1' incorporates:
             *  Constant: '<S946>/Constant Value1'
             *  Sum: '<S946>/Subtraction'
             *  Switch: '<S946>/Switch2'
             *  UnitDelay: '<S946>/Unit Delay'
             */
            VeTHDR_Cnt_LTPP_SmpCnt = (uint16)(((uint32)VeTHDR_Cnt_LTPP_SmpCnt) +
                1U);
        }

        /* End of Switch: '<S946>/Switch2' */
    }

    /* End of Switch: '<S945>/Switch1' */
    /* End of Outputs for SubSystem: '<S938>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S938>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S938>/Greater Than or Equal ' incorporates:
     *  Constant: '<S931>/Calib'
     */
    THDR_ac_DW.UnitDelay1_DSTATE_l = (VeTHDR_Cnt_LTPP_FailCnt >=
        KeTHDR_Cnt_LTPP_FailCnt);

    /* Logic: '<S938>/NOT5' incorporates:
     *  Constant: '<S932>/Calib'
     *  Logic: '<S938>/NOT3'
     *  RelationalOperator: '<S938>/Less Than  or Equal'
     */
    THDR_ac_DW.UnitDelay_DSTATE_e2 = ((VeTHDR_Cnt_LTPP_SmpCnt >=
        KeTHDR_Cnt_LTPP_SmpCnt) && (!THDR_ac_DW.UnitDelay1_DSTATE_l));

    /* Switch: '<S951>/Switch1' incorporates:
     *  Constant: '<S944>/Constant Value'
     *  DataStoreWrite: '<S879>/Data Store Write3'
     *  Switch: '<S950>/Switch1'
     */
    if (VeTHDR_b_ResetFOMs)
    {
        THDR_ac_DW.NeTHDR_Cnt_LTPP_MFOP = 0U;
    }
    else
    {
        if (THDR_ac_DW.UnitDelay_DSTATE_e2)
        {
            /* MinMax: '<S944>/Minimum2' incorporates:
             *  DataStoreRead: '<S879>/Data Store Read1'
             *  Switch: '<S950>/Switch1'
             */
            if (VeTHDR_Cnt_LTPP_FailCnt > THDR_ac_DW.NeTHDR_Cnt_LTPP_MFOP)
            {
                /* DataStoreWrite: '<S879>/Data Store Write3' incorporates:
                 *  Switch: '<S950>/Switch1'
                 */
                THDR_ac_DW.NeTHDR_Cnt_LTPP_MFOP = VeTHDR_Cnt_LTPP_FailCnt;
            }

            /* End of MinMax: '<S944>/Minimum2' */
        }
    }

    /* End of Switch: '<S951>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S936>/Fail' */
    THDR_ac_Fail(THDR_ac_DW.UnitDelay1_DSTATE_l,
                 &THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultSt_b);

    /* End of Outputs for SubSystem: '<S936>/Fail' */

    /* Outputs for Enabled SubSystem: '<S936>/Init' */
    THDR_ac_Init_l(rtb_Switch_m,
                   &THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultSt_b);

    /* End of Outputs for SubSystem: '<S936>/Init' */

    /* Outputs for Enabled SubSystem: '<S936>/Pass' */
    THDR_ac_Pass(THDR_ac_DW.UnitDelay_DSTATE_e2,
                 &THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultSt_b);

    /* End of Outputs for SubSystem: '<S936>/Pass' */

    /* RelationalOperator: '<S936>/Relational Operator' incorporates:
     *  Constant: '<S940>/Constant'
     *  VariantMerge generated from: '<S452>/VeTHDR_e_FaultSts_MtrElect_CoolPmpATempSnsrPerf'
     */
    VeTHDR_b_LTPP_FltDtct = (((uint32)
        THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultSt_b) == CeDFIB_e_Fail);

    /* End of Outputs for SubSystem: '<S875>/Check_LTPP_Diag' */

    /* SignalConversion generated from: '<S1006>/Variant Source' */
#if Rte_SysCon_Variant_THDR_3

    /* Outputs for Atomic SubSystem: '<S1006>/M182' */
    /* UnitDelay: '<S980>/Unit Delay' incorporates:
     *  Constant: '<S1095>/Constant'
     *  Constant: '<S1100>/Constant1'
     *  Constant: '<S1100>/Constant2'
     *  Constant: '<S1101>/Constant1'
     *  Constant: '<S1101>/Constant2'
     *  Logic: '<S1095>/Logical'
     *  Logic: '<S1095>/Logical1'
     *  Logic: '<S1095>/Logical2'
     *  Logic: '<S1100>/Logical Operator'
     *  Logic: '<S1101>/Logical Operator'
     *  RelationalOperator: '<S1095>/Comparison'
     *  RelationalOperator: '<S1100>/Relational Operator1'
     *  RelationalOperator: '<S1100>/Relational Operator2'
     *  RelationalOperator: '<S1101>/Relational Operator1'
     *  RelationalOperator: '<S1101>/Relational Operator2'
     *  Sum: '<S1095>/Add'
     */
    rtb_UnitDelay_hn = (((sint32)((uint32)((((uint32)
        (((((VariantMerge_For_Variant_Source_Varian_b > 0) &&
            (VariantMerge_For_Variant_Source_Varian_c == 0U)) ||
           rtb_VariantMerge_For_Variant_Source_Va_f) ||
          rtb_VariantMerge_For_Variant_Source_Va_m) ? 1 : 0)) + ((uint32)
        ((rtb_VariantMerge_For_Variant_Source_V_cm ||
          rtb_VariantMerge_For_Variant_Source_Va_g) ? 1 : 0))) + ((uint32)
                            ((((rtb_TmpSignalConversionAtVeCPDR_b_LTPP_F ||
        ((VariantMerge_For_Variant_Source_Varian_f > 0) &&
         (VariantMerge_For_Variant_Source_Varian_g == 0U))) ||
        rtb_VariantMerge_For_Variant_Source_V_j2) ||
        rtb_VariantMerge_For_Variant_Source_V_hq) ? 1 : 0))))) < 2);

    /* End of Outputs for SubSystem: '<S1006>/M182' */
#else

    /* Outputs for Atomic SubSystem: '<S1006>/OtherPrograms' */
    /* UnitDelay: '<S980>/Unit Delay' incorporates:
     *  Constant: '<S1102>/Constant1'
     *  Constant: '<S1102>/Constant2'
     *  Logic: '<S1096>/Logical'
     *  Logic: '<S1096>/Logical4'
     *  Logic: '<S1102>/Logical Operator'
     *  RelationalOperator: '<S1102>/Relational Operator1'
     *  RelationalOperator: '<S1102>/Relational Operator2'
     *  SignalConversion generated from: '<S1006>/Variant Source'
     */
    rtb_UnitDelay_hn = ((((((VariantMerge_For_Variant_Source_Varian_b <= 0) ||
                            (VariantMerge_For_Variant_Source_Varian_c != 0U)) &&
                           (!rtb_VariantMerge_For_Variant_Source_Va_f)) &&
                          (!rtb_VariantMerge_For_Variant_Source_Va_m)) &&
                         (!rtb_VariantMerge_For_Variant_Source_V_cm)) &&
                        (!rtb_VariantMerge_For_Variant_Source_Va_g));

    /* End of Outputs for SubSystem: '<S1006>/OtherPrograms' */
#endif

    /* End of SignalConversion generated from: '<S1006>/Variant Source' */

    /* Logic: '<S1006>/Logical1' incorporates:
     *  Constant: '<S1002>/Calib'
     *  Logic: '<S1006>/Logical3'
     */
    rtb_TmpSignalConversionAtVeTMIR_b_MainRl = !HeTHDR_b_PIM_FrstGnrtn;

    /* UnitDelay: '<S980>/Unit Delay' incorporates:
     *  Constant: '<S1090>/Constant1'
     *  Constant: '<S1090>/Constant2'
     *  Constant: '<S1091>/Constant1'
     *  Constant: '<S1091>/Constant2'
     *  Constant: '<S1094>/Calib'
     *  Constant: '<S1206>/Calib'
     *  Logic: '<S1006>/Logical'
     *  Logic: '<S1006>/Logical1'
     *  Logic: '<S1006>/Logical13'
     *  Logic: '<S1006>/Logical2'
     *  Logic: '<S1006>/Logical3'
     *  Logic: '<S1006>/Logical4'
     *  Logic: '<S1006>/Logical5'
     *  Logic: '<S1006>/Logical8'
     *  Logic: '<S1090>/Logical Operator'
     *  Logic: '<S1091>/Logical Operator'
     *  RelationalOperator: '<S1090>/Relational Operator1'
     *  RelationalOperator: '<S1090>/Relational Operator2'
     *  RelationalOperator: '<S1091>/Relational Operator1'
     *  RelationalOperator: '<S1091>/Relational Operator2'
     */
    rtb_UnitDelay_hn = ((((((VeTHDR_b_LTCL_GlblRtnlztnEnbl1) &&
                            (!KeTHDR_b_PECTOS_Temp_FA_SD)) &&
                           (((VariantMerge_For_Variant_Source_Varian_7 <= 0) ||
        (VariantMerge_For_Variant_Source_Varian_4 != 0U)) ||
                            rtb_TmpSignalConversionAtVeTMIR_b_MainRl)) &&
                          (((VariantMerge_For_Variant_Source_Varian_9 <= 0) ||
                            (VariantMerge_For_Variant_Source_Varian_6 != 0U)) ||
                           rtb_TmpSignalConversionAtVeTMIR_b_MainRl)) &&
                         ((!rtb_UnitDelay1_k2) ||
                          (!KeTHDR_b_LTCL_TempSnsrRtnlty_PECTOS_TempFA_Enbl))) &&
                        rtb_UnitDelay_hn);

    /* Logic: '<S1006>/Logical7' incorporates:
     *  UnitDelay: '<S882>/Unit Delay3'
     */
    THDR_ac_DW.UnitDelay3_DSTATE = (rtb_UnitDelay_hn &&
        (VeTHDR_b_LTCL_GlblRtnlztnEnbl2));

    /* Logic: '<S1006>/Logical11' */
    rtb_UnitDelay1_k2 = (rtb_UnitDelay_hn && rtb_UnitDelay1_k2);

    /* Outputs for Atomic SubSystem: '<S1092>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S1098>/EdgeRising' */
    /* Logic: '<S1099>/AND' incorporates:
     *  Logic: '<S1099>/OR1'
     *  UnitDelay: '<S1099>/Unit Delay'
     */
    rtb_UnitDelay_hn = (rtb_UnitDelay1_k2 && (!THDR_ac_DW.UnitDelay_DSTATE_mu));

    /* Update for UnitDelay: '<S1099>/Unit Delay' */
    THDR_ac_DW.UnitDelay_DSTATE_mu = rtb_UnitDelay1_k2;

    /* End of Outputs for SubSystem: '<S1098>/EdgeRising' */

    /* Switch: '<S1098>/Switch1' incorporates:
     *  Constant: '<S1097>/Calib'
     *  Constant: '<S1098>/Constant Value1'
     *  Constant: '<S12>/Calib'
     *  Logic: '<S1098>/OR'
     *  Logic: '<S1098>/OR1'
     *  MinMax: '<S1098>/Minimum'
     *  Sum: '<S1098>/Summation'
     *  UnitDelay: '<S1098>/Unit Delay'
     */
    if ((!rtb_UnitDelay1_k2) || rtb_UnitDelay_hn)
    {
        THDR_ac_DW.UnitDelay_DSTATE = 0.0F;
    }
    else
    {
        THDR_ac_DW.UnitDelay_DSTATE = fminf(KeTHDR_t_PECTOS_FA_DbncTime,
            HeTHDR_t_MedTEH + THDR_ac_DW.UnitDelay_DSTATE);
    }

    /* End of Switch: '<S1098>/Switch1' */

    /* Logic: '<S1098>/AND' incorporates:
     *  Constant: '<S1097>/Calib'
     *  RelationalOperator: '<S1098>/Greater  Than'
     *  UnitDelay: '<S1098>/Unit Delay'
     */
    rtb_UnitDelay1_k2 = (rtb_UnitDelay1_k2 && (THDR_ac_DW.UnitDelay_DSTATE >=
                          KeTHDR_t_PECTOS_FA_DbncTime));

    /* End of Outputs for SubSystem: '<S1092>/Turn On Delay Time' */

    /* Logic: '<S1006>/Logical6' incorporates:
     *  Constant: '<S1093>/Calib'
     *  Logic: '<S1006>/Logical10'
     *  Logic: '<S1006>/Logical12'
     *  Logic: '<S1006>/Logical9'
     *  UnitDelay: '<S882>/Unit Delay3'
     */
    VeTHDR_b_PECTOS_RtnlztnEnbl = (((THDR_ac_DW.UnitDelay3_DSTATE) &&
        (!VeTHDR_b_PECTOS_NoDecision_SF)) || ((KeTHDR_b_LTCL_PECTOS_FA_EnblCnds)
        && rtb_UnitDelay1_k2));

    /* Switch: '<S1113>/Switch' incorporates:
     *  Constant: '<S1206>/Calib'
     */
    if (KeTHDR_b_PECTOS_Temp_FA_SD)
    {
        /* Switch: '<S1113>/Switch' incorporates:
         *  Constant: '<S1121>/Calib'
         */
        VeTHDR_b_PECTOS_FltSymFnl = KeTHDR_b_PECTOS_NtPrsnt;
    }
    else
    {
        /* Switch: '<S1113>/Switch' incorporates:
         *  Constant: '<S1120>/Calib'
         *  Logic: '<S1113>/Logical1'
         *  Logic: '<S1113>/Logical3'
         */
        VeTHDR_b_PECTOS_FltSymFnl = (((KeTHDR_b_LTCL_PECTOS_FA_FltCndsEnbl) &&
            rtb_UnitDelay1_k2) || (VeTHDR_b_PECTOS_FltSymRaw_SF));
    }

    /* End of Switch: '<S1113>/Switch' */

    /* Outputs for Atomic SubSystem: '<S875>/Check_OCCTOS_Diag' */
    /* RelationalOperator: '<S957>/Relational Operator3' incorporates:
     *  Constant: '<S957>/Constant3'
     */
    rtb_UnitDelay_hn = (VariantMerge_For_Variant_Source_Varian_e == 0U);

    /* Outputs for Atomic SubSystem: '<S957>/EdgeFalling1' */
    /* Logic: '<S957>/Logical Operator' incorporates:
     *  Logic: '<S960>/OR1'
     */
    rtb_TmpSignalConversionAtVeTMIR_b_MainRl = !rtb_UnitDelay_hn;

    /* End of Outputs for SubSystem: '<S957>/EdgeFalling1' */

    /* Logic: '<S957>/Logical1' incorporates:
     *  Constant: '<S954>/Calib'
     *  Constant: '<S956>/Calib'
     *  Constant: '<S957>/Constant1'
     *  DataStoreRead: '<S958>/StatusByte_CT_SnsrPerf'
     *  Logic: '<S880>/AND1'
     *  Logic: '<S957>/Logical Operator'
     *  Logic: '<S957>/Logical10'
     *  Logic: '<S957>/Logical12'
     *  RelationalOperator: '<S957>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S957>/Bitwise Operator3'
     */
    rtb_UnitDelay1_k2 = (((VeTHDR_b_PECTOS_RtnlztnEnbl) &&
                          (KeTHDR_b_OOCTOS_XYEnbl)) &&
                         ((!KeTHDR_b_CT_SnsrPerf_LtchEnbl) || (((((uint32)
        THDR_ac_DW.StatusByte_CT_SnsrPerf) & 1U) == 0U) ||
                           rtb_TmpSignalConversionAtVeTMIR_b_MainRl)));

    /* Outputs for Atomic SubSystem: '<S957>/EdgeFalling1' */
    /* Logic: '<S960>/AND' incorporates:
     *  UnitDelay: '<S960>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeTMIR_b_MainRl =
        (rtb_TmpSignalConversionAtVeTMIR_b_MainRl &&
         (THDR_ac_DW.UnitDelay_DSTATE_lt));

    /* Update for UnitDelay: '<S960>/Unit Delay' */
    THDR_ac_DW.UnitDelay_DSTATE_lt = rtb_UnitDelay_hn;

    /* End of Outputs for SubSystem: '<S957>/EdgeFalling1' */

    /* Logic: '<S957>/Logical5' */
    rtb_TmpSignalConversionAtVeTMIR_b_MainRl = ((VeTHDR_b_ResetCnts) ||
        rtb_TmpSignalConversionAtVeTMIR_b_MainRl);

    /* UnitDelay: '<S980>/Unit Delay' incorporates:
     *  UnitDelay: '<S959>/Unit Delay'
     */
    rtb_UnitDelay_hn = THDR_ac_DW.UnitDelay_DSTATE_is;

    /* Outputs for Atomic SubSystem: '<S959>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S959>/Counter Reset  Enabled ' */
    /* Switch: '<S966>/Switch1' incorporates:
     *  Constant: '<S955>/Calib'
     *  Logic: '<S880>/AND2'
     *  Logic: '<S959>/Fail Counter Reset'
     *  Logic: '<S959>/NOT6'
     *  Switch: '<S966>/Switch2'
     *  Switch: '<S967>/Switch1'
     *  UnitDelay: '<S959>/Unit Delay'
     *  UnitDelay: '<S959>/Unit Delay1'
     */
    if ((rtb_TmpSignalConversionAtVeTMIR_b_MainRl ||
            (THDR_ac_DW.UnitDelay_DSTATE_is)) || (THDR_ac_DW.UnitDelay1_DSTATE_c))
    {
        /* Switch: '<S966>/Switch1' incorporates:
         *  Constant: '<S966>/Constant Value2'
         */
        VeTHDR_Cnt_OCCTOS_FailCnt = 0U;

        /* Switch: '<S967>/Switch1' incorporates:
         *  Constant: '<S967>/Constant Value2'
         */
        VeTHDR_Cnt_OCCTOS_SmpCnt = 0U;
    }
    else
    {
        if (rtb_UnitDelay1_k2 && ((VeTHDR_b_PECTOS_FltSymFnl) &&
                                  (KeTHDR_b_OOCTOS_Flt)))
        {
            /* Switch: '<S966>/Switch1' incorporates:
             *  Constant: '<S966>/Constant Value1'
             *  Sum: '<S966>/Subtraction'
             *  Switch: '<S966>/Switch2'
             *  UnitDelay: '<S966>/Unit Delay'
             */
            VeTHDR_Cnt_OCCTOS_FailCnt = (uint16)(((uint32)
                VeTHDR_Cnt_OCCTOS_FailCnt) + 1U);
        }

        /* Switch: '<S967>/Switch2' */
        if (rtb_UnitDelay1_k2)
        {
            /* Switch: '<S967>/Switch1' incorporates:
             *  Constant: '<S967>/Constant Value1'
             *  Sum: '<S967>/Subtraction'
             *  Switch: '<S967>/Switch2'
             *  UnitDelay: '<S967>/Unit Delay'
             */
            VeTHDR_Cnt_OCCTOS_SmpCnt = (uint16)(((uint32)
                VeTHDR_Cnt_OCCTOS_SmpCnt) + 1U);
        }

        /* End of Switch: '<S967>/Switch2' */
    }

    /* End of Switch: '<S966>/Switch1' */
    /* End of Outputs for SubSystem: '<S959>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S959>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S959>/Greater Than or Equal ' incorporates:
     *  Constant: '<S952>/Calib'
     */
    THDR_ac_DW.UnitDelay1_DSTATE_c = (VeTHDR_Cnt_OCCTOS_FailCnt >=
        KeTHDR_Cnt_OOCTOS_FailCnt);

    /* Logic: '<S959>/NOT5' incorporates:
     *  Constant: '<S953>/Calib'
     *  Logic: '<S959>/NOT3'
     *  RelationalOperator: '<S959>/Less Than  or Equal'
     */
    THDR_ac_DW.UnitDelay_DSTATE_is = ((VeTHDR_Cnt_OCCTOS_SmpCnt >=
        KeTHDR_Cnt_OOCTOS_SmpCnt) && (!THDR_ac_DW.UnitDelay1_DSTATE_c));

    /* Switch: '<S972>/Switch1' incorporates:
     *  Constant: '<S965>/Constant Value'
     *  DataStoreWrite: '<S880>/Data Store Write3'
     *  Switch: '<S971>/Switch1'
     */
    if (VeTHDR_b_ResetFOMs)
    {
        THDR_ac_DW.NeTHDR_Cnt_OOCTOS_MFOP = 0U;
    }
    else
    {
        if (THDR_ac_DW.UnitDelay_DSTATE_is)
        {
            /* MinMax: '<S965>/Minimum2' incorporates:
             *  DataStoreRead: '<S880>/Data Store Read1'
             *  Switch: '<S971>/Switch1'
             */
            if (VeTHDR_Cnt_OCCTOS_FailCnt > THDR_ac_DW.NeTHDR_Cnt_OOCTOS_MFOP)
            {
                /* DataStoreWrite: '<S880>/Data Store Write3' incorporates:
                 *  Switch: '<S971>/Switch1'
                 */
                THDR_ac_DW.NeTHDR_Cnt_OOCTOS_MFOP = VeTHDR_Cnt_OCCTOS_FailCnt;
            }

            /* End of MinMax: '<S965>/Minimum2' */
        }
    }

    /* End of Switch: '<S972>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S957>/Fail' */
    THDR_ac_Fail(THDR_ac_DW.UnitDelay1_DSTATE_c,
                 &THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultSts_);

    /* End of Outputs for SubSystem: '<S957>/Fail' */

    /* Outputs for Enabled SubSystem: '<S957>/Init' */
    THDR_ac_Init_l(rtb_TmpSignalConversionAtVeTMIR_b_MainRl,
                   &THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultSts_);

    /* End of Outputs for SubSystem: '<S957>/Init' */

    /* Outputs for Enabled SubSystem: '<S957>/Pass' */
    THDR_ac_Pass(THDR_ac_DW.UnitDelay_DSTATE_is,
                 &THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultSts_);

    /* End of Outputs for SubSystem: '<S957>/Pass' */

    /* RelationalOperator: '<S957>/Relational Operator' incorporates:
     *  Constant: '<S961>/Constant'
     *  VariantMerge generated from: '<S452>/VeTHDR_e_FaultSts_CT_SnsrPerf'
     */
    VeTHDR_b_OCCTOS_FltDtct = (((uint32)
        THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultSts_) == CeDFIB_e_Fail);

    /* End of Outputs for SubSystem: '<S875>/Check_OCCTOS_Diag' */

    /* SignalConversion generated from: '<S1007>/Variant Source' */
#if Rte_SysCon_Variant_THDR_3

    /* Outputs for Atomic SubSystem: '<S1007>/M182' */
    /* UnitDelay: '<S980>/Unit Delay' incorporates:
     *  Constant: '<S1103>/Constant'
     *  Constant: '<S1106>/Constant1'
     *  Constant: '<S1106>/Constant2'
     *  Constant: '<S1107>/Constant1'
     *  Constant: '<S1107>/Constant2'
     *  Logic: '<S1103>/Logical'
     *  Logic: '<S1103>/Logical1'
     *  Logic: '<S1103>/Logical2'
     *  Logic: '<S1106>/Logical Operator'
     *  Logic: '<S1107>/Logical Operator'
     *  RelationalOperator: '<S1103>/Comparison'
     *  RelationalOperator: '<S1106>/Relational Operator1'
     *  RelationalOperator: '<S1106>/Relational Operator2'
     *  RelationalOperator: '<S1107>/Relational Operator1'
     *  RelationalOperator: '<S1107>/Relational Operator2'
     *  Sum: '<S1103>/Add'
     */
    rtb_UnitDelay_hn = (((sint32)((uint32)((((uint32)
        (((((VariantMerge_For_Variant_Source_Varian_d > 0) &&
            (VariantMerge_For_Variant_Source_Varian_e == 0U)) ||
           rtb_VariantMerge_For_Variant_Source_V_cm) ||
          rtb_VariantMerge_For_Variant_Source_Va_g) ? 1 : 0)) + ((uint32)
        ((rtb_VariantMerge_For_Variant_Source_Va_f ||
          rtb_VariantMerge_For_Variant_Source_Va_m) ? 1 : 0))) + ((uint32)
                            ((((rtb_TmpSignalConversionAtVeCPDR_b_LTPP_F ||
        ((VariantMerge_For_Variant_Source_Varian_f > 0) &&
         (VariantMerge_For_Variant_Source_Varian_g == 0U))) ||
        rtb_VariantMerge_For_Variant_Source_V_j2) ||
        rtb_VariantMerge_For_Variant_Source_V_hq) ? 1 : 0))))) < 2);

    /* End of Outputs for SubSystem: '<S1007>/M182' */
#else

    /* Outputs for Atomic SubSystem: '<S1007>/OtherPrograms' */
    /* UnitDelay: '<S980>/Unit Delay' incorporates:
     *  Constant: '<S1108>/Constant1'
     *  Constant: '<S1108>/Constant2'
     *  Logic: '<S1104>/Logical'
     *  Logic: '<S1104>/Logical4'
     *  Logic: '<S1108>/Logical Operator'
     *  RelationalOperator: '<S1108>/Relational Operator1'
     *  RelationalOperator: '<S1108>/Relational Operator2'
     *  SignalConversion generated from: '<S1007>/Variant Source'
     */
    rtb_UnitDelay_hn = (((((!rtb_VariantMerge_For_Variant_Source_Va_f) &&
                           (!rtb_VariantMerge_For_Variant_Source_Va_m)) &&
                          ((VariantMerge_For_Variant_Source_Varian_d <= 0) ||
                           (VariantMerge_For_Variant_Source_Varian_e != 0U))) &&
                         (!rtb_VariantMerge_For_Variant_Source_V_cm)) &&
                        (!rtb_VariantMerge_For_Variant_Source_Va_g));

    /* End of Outputs for SubSystem: '<S1007>/OtherPrograms' */
#endif

    /* End of SignalConversion generated from: '<S1007>/Variant Source' */

    /* Logic: '<S1007>/Logical' incorporates:
     *  Constant: '<S1109>/Calib'
     *  Constant: '<S1208>/Calib'
     *  Logic: '<S1007>/Logical2'
     *  Logic: '<S1105>/Logical2'
     *  Logic: '<S1105>/Logical5'
     *  UnitDelay: '<S882>/Unit Delay2'
     */
    THDR_ac_DW.UnitDelay2_DSTATE = (((((VeTHDR_b_LTCL_GlblRtnlztnEnbl1) &&
        (VeTHDR_b_LTCL_GlblRtnlztnEnbl2)) && (!KeTHDR_b_PPCTIS_Temp_FA_SD)) &&
        ((!rtb_TmpSignalConversionAtVeTMIR_b_PsvPmp) ||
         (!KeTHDR_b_LTCL_TempSnsrRtnlty_PPCTIS_TempFA_Enbl))) &&
        rtb_UnitDelay_hn);

    /* VariantMerge generated from: '<S452>/PPCTIS_RtnltyEnbl' incorporates:
     *  Logic: '<S1007>/Logical1'
     *  Logic: '<S1007>/Logical4'
     *  UnitDelay: '<S882>/Unit Delay2'
     */
    VeTHDR_b_PPCTIS_RtnlztnEnbl = ((THDR_ac_DW.UnitDelay2_DSTATE) &&
        (!VeTHDR_b_PPCTIS_NoDecision_SF));

    /* Switch: '<S1114>/Switch' incorporates:
     *  Constant: '<S1208>/Calib'
     */
    if (KeTHDR_b_PPCTIS_Temp_FA_SD)
    {
        /* Switch: '<S1114>/Switch' incorporates:
         *  Constant: '<S1122>/Calib'
         */
        VeTHDR_b_PPCTIS_FltSymFnl = KeTHDR_b_PPCTIS_NtPrsnt;
    }
    else
    {
        /* Switch: '<S1114>/Switch' */
        VeTHDR_b_PPCTIS_FltSymFnl = VeTHDR_b_PPCTIS_FltSymRaw_SF;
    }

    /* End of Switch: '<S1114>/Switch' */

    /* Outputs for Atomic SubSystem: '<S875>/Check_PPCTIS_Diag' */
    /* RelationalOperator: '<S978>/Relational Operator3' incorporates:
     *  Constant: '<S978>/Constant3'
     */
    rtb_VariantMerge_For_Variant_Source_Va_m =
        (VariantMerge_For_Variant_Source_Varian_c == 0U);

    /* Outputs for Atomic SubSystem: '<S978>/EdgeFalling1' */
    /* Logic: '<S978>/Logical Operator' incorporates:
     *  Logic: '<S981>/OR1'
     */
    rtb_VariantMerge_For_Variant_Source_Va_f =
        !rtb_VariantMerge_For_Variant_Source_Va_m;

    /* End of Outputs for SubSystem: '<S978>/EdgeFalling1' */

    /* Logic: '<S978>/Logical1' incorporates:
     *  Constant: '<S975>/Calib'
     *  Constant: '<S977>/Calib'
     *  Constant: '<S978>/Constant1'
     *  DataStoreRead: '<S979>/StatusByte_MtrElect_CT_SnsrPerf'
     *  Logic: '<S881>/AND1'
     *  Logic: '<S978>/Logical Operator'
     *  Logic: '<S978>/Logical10'
     *  Logic: '<S978>/Logical12'
     *  RelationalOperator: '<S978>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S978>/Bitwise Operator3'
     */
    rtb_TmpSignalConversionAtVeTMIR_b_PsvPmp = (((VeTHDR_b_PPCTIS_RtnlztnEnbl) &&
        (KeTHDR_b_PPCTIS_XYEnbl)) && ((!KeTHDR_b_MtrElect_CT_SnsrPerf_LtchEnbl) ||
        (((((uint32)THDR_ac_DW.StatusByte_MtrElect_CT_SnsrPerf) & 1U) == 0U) ||
         rtb_VariantMerge_For_Variant_Source_Va_f)));

    /* Outputs for Atomic SubSystem: '<S978>/EdgeFalling1' */
    /* Logic: '<S981>/AND' incorporates:
     *  UnitDelay: '<S981>/Unit Delay'
     */
    rtb_VariantMerge_For_Variant_Source_Va_f =
        (rtb_VariantMerge_For_Variant_Source_Va_f &&
         (THDR_ac_DW.UnitDelay_DSTATE_oo));

    /* Update for UnitDelay: '<S981>/Unit Delay' */
    THDR_ac_DW.UnitDelay_DSTATE_oo = rtb_VariantMerge_For_Variant_Source_Va_m;

    /* End of Outputs for SubSystem: '<S978>/EdgeFalling1' */

    /* Logic: '<S978>/Logical5' */
    rtb_VariantMerge_For_Variant_Source_Va_m = ((VeTHDR_b_ResetCnts) ||
        rtb_VariantMerge_For_Variant_Source_Va_f);

    /* Outputs for Atomic SubSystem: '<S980>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S980>/Counter Reset  Enabled ' */
    /* Switch: '<S987>/Switch1' incorporates:
     *  Constant: '<S976>/Calib'
     *  Logic: '<S881>/AND2'
     *  Logic: '<S980>/Fail Counter Reset'
     *  Logic: '<S980>/NOT6'
     *  Switch: '<S987>/Switch2'
     *  Switch: '<S988>/Switch1'
     *  UnitDelay: '<S980>/Unit Delay'
     *  UnitDelay: '<S980>/Unit Delay1'
     */
    if ((rtb_VariantMerge_For_Variant_Source_Va_m ||
            (THDR_ac_DW.UnitDelay_DSTATE_oc)) || (THDR_ac_DW.UnitDelay1_DSTATE_d))
    {
        /* Switch: '<S987>/Switch1' incorporates:
         *  Constant: '<S987>/Constant Value2'
         */
        VeTHDR_Cnt_PPCTIS_FailCnt = 0U;

        /* Switch: '<S988>/Switch1' incorporates:
         *  Constant: '<S988>/Constant Value2'
         */
        VeTHDR_Cnt_PPCTIS_SmpCnt = 0U;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeTMIR_b_PsvPmp &&
                ((VeTHDR_b_PPCTIS_FltSymFnl) && (KeTHDR_b_PPCTIS_Flt)))
        {
            /* Switch: '<S987>/Switch1' incorporates:
             *  Constant: '<S987>/Constant Value1'
             *  Sum: '<S987>/Subtraction'
             *  Switch: '<S987>/Switch2'
             *  UnitDelay: '<S987>/Unit Delay'
             */
            VeTHDR_Cnt_PPCTIS_FailCnt = (uint16)(((uint32)
                VeTHDR_Cnt_PPCTIS_FailCnt) + 1U);
        }

        /* Switch: '<S988>/Switch2' */
        if (rtb_TmpSignalConversionAtVeTMIR_b_PsvPmp)
        {
            /* Switch: '<S988>/Switch1' incorporates:
             *  Constant: '<S988>/Constant Value1'
             *  Sum: '<S988>/Subtraction'
             *  Switch: '<S988>/Switch2'
             *  UnitDelay: '<S988>/Unit Delay'
             */
            VeTHDR_Cnt_PPCTIS_SmpCnt = (uint16)(((uint32)
                VeTHDR_Cnt_PPCTIS_SmpCnt) + 1U);
        }

        /* End of Switch: '<S988>/Switch2' */
    }

    /* End of Switch: '<S987>/Switch1' */
    /* End of Outputs for SubSystem: '<S980>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S980>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S980>/Greater Than or Equal ' incorporates:
     *  Constant: '<S973>/Calib'
     */
    THDR_ac_DW.UnitDelay1_DSTATE_d = (VeTHDR_Cnt_PPCTIS_FailCnt >=
        KeTHDR_Cnt_PPCTIS_FailCnt);

    /* Logic: '<S980>/NOT5' incorporates:
     *  Constant: '<S974>/Calib'
     *  Logic: '<S980>/NOT3'
     *  RelationalOperator: '<S980>/Less Than  or Equal'
     */
    THDR_ac_DW.UnitDelay_DSTATE_oc = ((VeTHDR_Cnt_PPCTIS_SmpCnt >=
        KeTHDR_Cnt_PPCTIS_SmpCnt) && (!THDR_ac_DW.UnitDelay1_DSTATE_d));

    /* Switch: '<S993>/Switch1' incorporates:
     *  Constant: '<S986>/Constant Value'
     *  DataStoreWrite: '<S881>/Data Store Write3'
     *  Switch: '<S992>/Switch1'
     */
    if (VeTHDR_b_ResetFOMs)
    {
        THDR_ac_DW.NeTHDR_Cnt_PPCTIS_MFOP = 0U;
    }
    else
    {
        if (THDR_ac_DW.UnitDelay_DSTATE_oc)
        {
            /* MinMax: '<S986>/Minimum2' incorporates:
             *  DataStoreRead: '<S881>/Data Store Read1'
             *  Switch: '<S992>/Switch1'
             */
            if (VeTHDR_Cnt_PPCTIS_FailCnt > THDR_ac_DW.NeTHDR_Cnt_PPCTIS_MFOP)
            {
                /* DataStoreWrite: '<S881>/Data Store Write3' incorporates:
                 *  Switch: '<S992>/Switch1'
                 */
                THDR_ac_DW.NeTHDR_Cnt_PPCTIS_MFOP = VeTHDR_Cnt_PPCTIS_FailCnt;
            }

            /* End of MinMax: '<S986>/Minimum2' */
        }
    }

    /* End of Switch: '<S993>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S978>/Fail' */
    THDR_ac_Fail(THDR_ac_DW.UnitDelay1_DSTATE_d,
                 &THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultS_kk);

    /* End of Outputs for SubSystem: '<S978>/Fail' */

    /* Outputs for Enabled SubSystem: '<S978>/Init' */
    THDR_ac_Init_l(rtb_VariantMerge_For_Variant_Source_Va_m,
                   &THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultS_kk);

    /* End of Outputs for SubSystem: '<S978>/Init' */

    /* Outputs for Enabled SubSystem: '<S978>/Pass' */
    THDR_ac_Pass(THDR_ac_DW.UnitDelay_DSTATE_oc,
                 &THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultS_kk);

    /* End of Outputs for SubSystem: '<S978>/Pass' */

    /* VariantMerge generated from: '<S452>/PPCTIS_DTC' incorporates:
     *  Constant: '<S982>/Constant'
     *  RelationalOperator: '<S978>/Relational Operator'
     *  VariantMerge generated from: '<S452>/VeTHDR_e_FaultSts_MtrElect_CT_SnsrPerf'
     */
    VeTHDR_b_PPCTIS_FltDtct_B4D = (((uint32)
        THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultS_kk) == CeDFIB_e_Fail);

    /* End of Outputs for SubSystem: '<S875>/Check_PPCTIS_Diag' */

    /* Update for UnitDelay: '<S882>/Unit Delay4' */
    THDR_ac_DW.UnitDelay4_DSTATE = rtb_VariantMergeForOutportb_LRCTOS_Enbl_;

    /* End of Outputs for SubSystem: '<S452>/LowTempLoop' */
#else

    /* Outputs for Atomic SubSystem: '<S452>/LowTemp_Stub' */
    /* VariantMerge generated from: '<S452>/PPCTIS_DTC' incorporates:
     *  Constant: '<S876>/FALSE Constant'
     */
    VeTHDR_b_PPCTIS_FltDtct_B4D = false;

    /* VariantMerge generated from: '<S452>/PPCTIS_RtnltyEnbl' incorporates:
     *  Constant: '<S876>/FALSE Constant1'
     */
    VeTHDR_b_PPCTIS_RtnlztnEnbl = false;

    /* VariantMerge generated from: '<S452>/VeTHDR_e_FaultSts_MtrElect_CoolPmpATempSnsrPerf' incorporates:
     *  Constant: '<S1215>/Constant'
     */
    THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultSt_b = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S452>/VeTHDR_e_FaultSts_MtrElect_CoolPmpBTempSnsrPerf' incorporates:
     *  Constant: '<S1214>/Constant'
     */
    THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultS_bp = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S452>/VeTHDR_e_FaultSts_MtrElect_CT_SnsrPerf' incorporates:
     *  Constant: '<S1216>/Constant'
     */
    THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultS_kk = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S452>/VeTHDR_e_FaultSts_CT_SnsrPerf' incorporates:
     *  Constant: '<S1217>/Constant'
     */
    THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultSts_ = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S452>/VeTHDR_e_FaultSts_MtrElect_CT_SnsrBPerf' incorporates:
     *  Constant: '<S1218>/Constant'
     */
    THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultSt_k = CeDFIB_e_Init;

    /* End of Outputs for SubSystem: '<S452>/LowTemp_Stub' */
#endif

    /* End of Outputs for SubSystem: '<S19>/LowTempLoopDiagnostics' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Miscellaneous_Outputs'
     */
    /* Switch: '<S1253>/Switch1' incorporates:
     *  Constant: '<S1265>/Calib'
     */
    if (KeTHDR_b_AGS2_Perf_FltDtct_SD)
    {
        /* Outport: '<Root>/VeTHDR_b_AGS2_Perf_FltDtct' incorporates:
         *  Constant: '<S1264>/Calib'
         *  SignalConversion generated from: '<S1>/VeTHDR_b_AGS2_Perf_FltDtct'
         */
        (void)Rte_Write_VeTHDR_b_AGS2_Perf_FltDtct_Value
            (KeTHDR_b_AGS2_Perf_FltDtct_D);
    }
    else
    {
        /* Outport: '<Root>/VeTHDR_b_AGS2_Perf_FltDtct' incorporates:
         *  SignalConversion generated from: '<S1>/VeTHDR_b_AGS2_Perf_FltDtct'
         */
        (void)Rte_Write_VeTHDR_b_AGS2_Perf_FltDtct_Value
            (THDR_ac_B.VariantMergeForOutportb_AGS2_Perf_DTC);
    }

    /* End of Switch: '<S1253>/Switch1' */

    /* Switch: '<S1253>/Switch' incorporates:
     *  Constant: '<S1267>/Calib'
     */
    if (KeTHDR_b_AGS_Perf_FltDtct_SD)
    {
        /* Outport: '<Root>/VeTHDR_b_AGS_Perf_FltDtct' incorporates:
         *  Constant: '<S1266>/Calib'
         *  SignalConversion generated from: '<S1>/VeTHDR_b_AGS_Perf_FltDtct'
         */
        (void)Rte_Write_VeTHDR_b_AGS_Perf_FltDtct_Value
            (KeTHDR_b_AGS_Perf_FltDtct_D);
    }
    else
    {
        /* Outport: '<Root>/VeTHDR_b_AGS_Perf_FltDtct' incorporates:
         *  SignalConversion generated from: '<S1>/VeTHDR_b_AGS_Perf_FltDtct'
         */
        (void)Rte_Write_VeTHDR_b_AGS_Perf_FltDtct_Value
            (THDR_ac_B.VariantMergeForOutportb_AGS_Perf_DTC);
    }

    /* End of Switch: '<S1253>/Switch' */

    /* Switch: '<S1251>/Switch2' incorporates:
     *  Constant: '<S1257>/Calib'
     */
    if (KeTHDR_b_ECHTIS_FltDtct_SD)
    {
        /* Outport: '<Root>/VeTHDR_b_ECHTIS_FltDtct' incorporates:
         *  Constant: '<S1256>/Calib'
         *  SignalConversion generated from: '<S1>/VeTHDR_b_ECHTIS_FltDtct'
         */
        (void)Rte_Write_VeTHDR_b_ECHTIS_FltDtct_Value
            (KeTHDR_b_ECHTIS_FltDtct_Dial);
    }
    else
    {
        /* Outport: '<Root>/VeTHDR_b_ECHTIS_FltDtct' incorporates:
         *  SignalConversion generated from: '<S1>/VeTHDR_b_ECHTIS_FltDtct'
         */
        (void)Rte_Write_VeTHDR_b_ECHTIS_FltDtct_Value
            (VeTHDR_b_ECHTIS_FltDtct_B4D);
    }

    /* End of Switch: '<S1251>/Switch2' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/New_THDR_Op'
     */
    /* Outport: '<Root>/VeTHDR_b_IUMPR_ECHTIS_Perf' incorporates:
     *  Gain: '<S1269>/Gain'
     *  SignalConversion generated from: '<S1>/VeTHDR_b_IUMPR_ECHTIS_Perf'
     */
    (void)Rte_Write_VeTHDR_b_IUMPR_ECHTIS_Perf_Value
        (rtb_VariantMerge_For_Variant_Source_Va_e);

    /* Outport: '<Root>/VeTHDR_b_IUMPR_ECH_TempInPerf' incorporates:
     *  Gain: '<S1268>/Gain'
     *  SignalConversion generated from: '<S1>/VeTHDR_b_IUMPR_ECH_TempInPerf'
     */
    (void)Rte_Write_VeTHDR_b_IUMPR_ECH_TempInPerf_Value
        (rtb_VariantMerge_For_Variant_Source_Va_d);

    /* Outport: '<Root>/VeTHDR_b_IUMPR_ECH_TempOutPerf' incorporates:
     *  Gain: '<S1272>/Gain'
     *  SignalConversion generated from: '<S1>/VeTHDR_b_IUMPR_ECH_TempOutPerf'
     */
    (void)Rte_Write_VeTHDR_b_IUMPR_ECH_TempOutPerf_Value
        (THDR_ac_B.VariantMerge_For_Variant_Source_Variant_[0]);

    /* Outport: '<Root>/VeTHDR_b_IUMPR_ECTSnsr_Perf' incorporates:
     *  Gain: '<S1270>/Gain'
     *  SignalConversion generated from: '<S1>/VeTHDR_b_IUMPR_ECTSnsr_Perf'
     */
    (void)Rte_Write_VeTHDR_b_IUMPR_ECTSnsr_Perf_Value(rtb_LogicalOperator);

    /* Outport: '<Root>/VeTHDR_b_IUMPR_HTAPTemp_Perf' incorporates:
     *  Gain: '<S1271>/Gain'
     *  SignalConversion generated from: '<S1>/VeTHDR_b_IUMPR_HTAPTemp_Perf'
     */
    (void)Rte_Write_VeTHDR_b_IUMPR_HTAPTemp_Perf_Value(rtb_LogicalOperator_nyo);

    /* Switch: '<S1276>/Switch' incorporates:
     *  Constant: '<S1284>/Calib'
     */
    if (KeTHDR_b_IUMPR_LTPP2Perf_SD)
    {
        /* Outport: '<Root>/VeTHDR_b_IUMPR_LTPP2Temp_Perf' incorporates:
         *  Constant: '<S1283>/Calib'
         *  SignalConversion generated from: '<S1>/VeTHDR_b_IUMPR_LTPP2Temp_Perf'
         */
        (void)Rte_Write_VeTHDR_b_IUMPR_LTPP2Temp_Perf_Value
            (KeTHDR_b_IUMPR_LTPP2Perf_D);
    }
    else
    {
        /* Outport: '<Root>/VeTHDR_b_IUMPR_LTPP2Temp_Perf' incorporates:
         *  SignalConversion generated from: '<S1>/VeTHDR_b_IUMPR_LTPP2Temp_Perf'
         */
        (void)Rte_Write_VeTHDR_b_IUMPR_LTPP2Temp_Perf_Value
            (rtb_LogicalOperator_gn1);
    }

    /* End of Switch: '<S1276>/Switch' */

    /* Switch: '<S1275>/Switch' incorporates:
     *  Constant: '<S1282>/Calib'
     */
    if (KeTHDR_b_IUMPR_LTPPPerf_SD)
    {
        /* Outport: '<Root>/VeTHDR_b_IUMPR_LTPPTemp_Perf' incorporates:
         *  Constant: '<S1281>/Calib'
         *  SignalConversion generated from: '<S1>/VeTHDR_b_IUMPR_LTPPTemp_Perf'
         */
        (void)Rte_Write_VeTHDR_b_IUMPR_LTPPTemp_Perf_Value
            (KeTHDR_b_IUMPR_LTPPPerf_D);
    }
    else
    {
        /* Outport: '<Root>/VeTHDR_b_IUMPR_LTPPTemp_Perf' incorporates:
         *  SignalConversion generated from: '<S1>/VeTHDR_b_IUMPR_LTPPTemp_Perf'
         */
        (void)Rte_Write_VeTHDR_b_IUMPR_LTPPTemp_Perf_Value
            (rtb_LogicalOperator_hrx);
    }

    /* End of Switch: '<S1275>/Switch' */

    /* Switch: '<S1274>/Switch' incorporates:
     *  Constant: '<S1280>/Calib'
     */
    if (KeTHDR_b_IUMPR_PECTOSPerf_SD)
    {
        /* Outport: '<Root>/VeTHDR_b_IUMPR_OCCTOS_Perf' incorporates:
         *  Constant: '<S1279>/Calib'
         *  SignalConversion generated from: '<S1>/VeTHDR_b_IUMPR_OCCTOS_Perf'
         */
        (void)Rte_Write_VeTHDR_b_IUMPR_OCCTOS_Perf_Value
            (KeTHDR_b_IUMPR_PECTOSPerf_D);
    }
    else
    {
        /* Outport: '<Root>/VeTHDR_b_IUMPR_OCCTOS_Perf' incorporates:
         *  SignalConversion generated from: '<S1>/VeTHDR_b_IUMPR_OCCTOS_Perf'
         */
        (void)Rte_Write_VeTHDR_b_IUMPR_OCCTOS_Perf_Value(rtb_LogicalOperator1);
    }

    /* End of Switch: '<S1274>/Switch' */

    /* Switch: '<S1273>/Switch' incorporates:
     *  Constant: '<S1278>/Calib'
     */
    if (KeTHDR_b_IUMPR_PPCTISPerf_SD)
    {
        /* Outport: '<Root>/VeTHDR_b_IUMPR_PPCTIS_Perf' incorporates:
         *  Constant: '<S1277>/Calib'
         *  SignalConversion generated from: '<S1>/VeTHDR_b_IUMPR_PPCTIS_Perf'
         */
        (void)Rte_Write_VeTHDR_b_IUMPR_PPCTIS_Perf_Value
            (KeTHDR_b_IUMPR_PPCTISPerf_D);
    }
    else
    {
        /* Outport: '<Root>/VeTHDR_b_IUMPR_PPCTIS_Perf' incorporates:
         *  SignalConversion generated from: '<S1>/VeTHDR_b_IUMPR_PPCTIS_Perf'
         */
        (void)Rte_Write_VeTHDR_b_IUMPR_PPCTIS_Perf_Value
            (THDR_ac_B.VariantMerge_For_Variant_Source_Varian_g[0]);
    }

    /* End of Switch: '<S1273>/Switch' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Miscellaneous_Outputs'
     */
    /* Switch: '<S1251>/Switch3' incorporates:
     *  Constant: '<S1259>/Calib'
     */
    if (KeTHDR_b_InTmpSns_FltDtct_SD)
    {
        /* Outport: '<Root>/VeTHDR_b_InTmpSns_FltDtct' incorporates:
         *  Constant: '<S1258>/Calib'
         *  SignalConversion generated from: '<S1>/VeTHDR_b_InTmpSns_FltDtct'
         */
        (void)Rte_Write_VeTHDR_b_InTmpSns_FltDtct_Value
            (KeTHDR_b_InTmpSns_FltDtct_Dial);
    }
    else
    {
        /* Outport: '<Root>/VeTHDR_b_InTmpSns_FltDtct' incorporates:
         *  SignalConversion generated from: '<S1>/VeTHDR_b_InTmpSns_FltDtct'
         */
        (void)Rte_Write_VeTHDR_b_InTmpSns_FltDtct_Value
            (VeTHDR_b_ECH_In_FltDtct_B4D);
    }

    /* End of Switch: '<S1251>/Switch3' */

    /* Switch: '<S1251>/Switch8' incorporates:
     *  Constant: '<S1261>/Calib'
     */
    if (KeTHDR_b_PPCTIS_FltDtct_SD)
    {
        /* Outport: '<Root>/VeTHDR_b_PPCTIS_FltDtct' incorporates:
         *  Constant: '<S1260>/Calib'
         *  SignalConversion generated from: '<S1>/VeTHDR_b_PPCTIS_FltDtct'
         */
        (void)Rte_Write_VeTHDR_b_PPCTIS_FltDtct_Value
            (KeTHDR_b_PPCTIS_FltDtct_Dial);
    }
    else
    {
        /* Outport: '<Root>/VeTHDR_b_PPCTIS_FltDtct' incorporates:
         *  SignalConversion generated from: '<S1>/VeTHDR_b_PPCTIS_FltDtct'
         */
        (void)Rte_Write_VeTHDR_b_PPCTIS_FltDtct_Value
            (VeTHDR_b_PPCTIS_FltDtct_B4D);
    }

    /* End of Switch: '<S1251>/Switch8' */

    /* Switch: '<S1250>/Switch8' incorporates:
     *  Constant: '<S1255>/Calib'
     */
    if (KeTHDR_b_PPCTIS_OT_FltDtct_SD)
    {
        /* Outport: '<Root>/VeTHDR_b_PPCTIS_OT_FltDtct' incorporates:
         *  Constant: '<S1254>/Calib'
         *  SignalConversion generated from: '<S1>/VeTHDR_b_PPCTIS_OT_FltDtct'
         */
        (void)Rte_Write_VeTHDR_b_PPCTIS_OT_FltDtct_Value
            (KeTHDR_b_PPCTIS_OT_FltDtct_Dial);
    }
    else
    {
        /* Outport: '<Root>/VeTHDR_b_PPCTIS_OT_FltDtct' incorporates:
         *  SignalConversion generated from: '<S1>/VeTHDR_b_PPCTIS_OT_FltDtct'
         */
        (void)Rte_Write_VeTHDR_b_PPCTIS_OT_FltDtct_Value
            (VeTHDR_b_PPCTIS_OT_FltDtct_B4D);
    }

    /* End of Switch: '<S1250>/Switch8' */

    /* Switch: '<S1252>/Switch' incorporates:
     *  Constant: '<S1263>/Calib'
     */
    if (KeTHDR_b_PPCTIS_RtnltyEnbl_SD)
    {
        /* Outport: '<Root>/VeTHDR_b_PPCTIS_RtnltyEnbl' incorporates:
         *  Constant: '<S1262>/Calib'
         *  SignalConversion generated from: '<S1>/VeTHDR_b_PPCTIS_RtnltyEnbl'
         */
        (void)Rte_Write_VeTHDR_b_PPCTIS_RtnltyEnbl_Value
            (KeTHDR_b_PPCTIS_RtnltyEnbl_D);
    }
    else
    {
        /* Outport: '<Root>/VeTHDR_b_PPCTIS_RtnltyEnbl' incorporates:
         *  SignalConversion generated from: '<S1>/VeTHDR_b_PPCTIS_RtnltyEnbl'
         */
        (void)Rte_Write_VeTHDR_b_PPCTIS_RtnltyEnbl_Value
            (VeTHDR_b_PPCTIS_RtnlztnEnbl);
    }

    /* End of Switch: '<S1252>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* SignalConversion generated from: '<S1>/VeTHDR_e_FaultSts_AC_RefrigTempSnsr4CktPerf' incorporates:
     *  SignalConversion generated from: '<S1>/VeTHDR_e_FaultSts_AC_RefrigTempSnsr5CktPerf'
     *  SignalConversion generated from: '<S1>/VeTHDR_e_FaultSts_AC_RefrigTempSnsrCPerf'
     */
#if Rte_SysCon_Variant_THDR_19

    /* Outport: '<Root>/VeTHDR_e_FaultSts_AC_RefrigTempSnsr4CktPerf' incorporates:
     *  Merge: '<S502>/Merge'
     */
    (void)Rte_Write_VeTHDR_e_FaultSts_AC_RefrigTempSnsr4CktPerf_Value
        (THDR_ac_B.Merge_hr);

    /* Outport: '<Root>/VeTHDR_e_FaultSts_AC_RefrigTempSnsr5CktPerf' incorporates:
     *  Merge: '<S482>/Merge'
     */
    (void)Rte_Write_VeTHDR_e_FaultSts_AC_RefrigTempSnsr5CktPerf_Value
        (THDR_ac_B.Merge_h);

    /* Outport: '<Root>/VeTHDR_e_FaultSts_AC_RefrigTempSnsrCPerf' incorporates:
     *  Merge: '<S462>/Merge'
     */
    (void)Rte_Write_VeTHDR_e_FaultSts_AC_RefrigTempSnsrCPerf_Value
        (THDR_ac_B.Merge);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTHDR_e_FaultSts_AC_RefrigTempSnsr4CktPerf' */

    /* Outport: '<Root>/VeTHDR_e_FaultSts_AGS_A_Perf' incorporates:
     *  SignalConversion generated from: '<S1>/VeTHDR_e_FaultSts_AGS_A_Perf'
     *  VariantMerge generated from: '<S9>/VeTHDR_e_FaultSts_AGS_A_Perf'
     */
    (void)Rte_Write_VeTHDR_e_FaultSts_AGS_A_Perf_Value
        (THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultS_np);

    /* Outport: '<Root>/VeTHDR_e_FaultSts_AGS_B_Perf' incorporates:
     *  SignalConversion generated from: '<S1>/VeTHDR_e_FaultSts_AGS_B_Perf'
     *  VariantMerge generated from: '<S8>/VeTHDR_e_FaultSts_AGS_B_Perf'
     */
    (void)Rte_Write_VeTHDR_e_FaultSts_AGS_B_Perf_Value
        (THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultSt_c);

    /* Outport: '<Root>/VeTHDR_e_FaultSts_CT2_SnsrPerf' incorporates:
     *  SignalConversion generated from: '<S1>/VeTHDR_e_FaultSts_CT2_SnsrPerf'
     *  VariantMerge generated from: '<S451>/VeTHDR_e_FaultSts_CT2_SnsrPerf'
     */
    (void)Rte_Write_VeTHDR_e_FaultSts_CT2_SnsrPerf_Value
        (THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultSt_e);

    /* Outport: '<Root>/VeTHDR_e_FaultSts_CT3_SnsrPerf' incorporates:
     *  SignalConversion generated from: '<S1>/VeTHDR_e_FaultSts_CT3_SnsrPerf'
     *  VariantMerge generated from: '<S451>/VeTHDR_e_FaultSts_CT3_SnsrPerf'
     */
    (void)Rte_Write_VeTHDR_e_FaultSts_CT3_SnsrPerf_Value
        (THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultSt_a);

    /* Outport: '<Root>/VeTHDR_e_FaultSts_CT_SnsrPerf' incorporates:
     *  SignalConversion generated from: '<S1>/VeTHDR_e_FaultSts_CT_SnsrPerf'
     *  VariantMerge generated from: '<S452>/VeTHDR_e_FaultSts_CT_SnsrPerf'
     */
    (void)Rte_Write_VeTHDR_e_FaultSts_CT_SnsrPerf_Value
        (THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultSts_);

    /* Outport: '<Root>/VeTHDR_e_FaultSts_ClntTempTooHigh' incorporates:
     *  SignalConversion generated from: '<S1>/VeTHDR_e_FaultSts_ClntTempTooHigh'
     *  VariantMerge generated from: '<S15>/VeTHDR_e_FaultSts_ClntTempTooHigh'
     */
    (void)Rte_Write_VeTHDR_e_FaultSts_ClntTempTooHigh_Value
        (THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultSt_f);

    /* Outport: '<Root>/VeTHDR_e_FaultSts_CoolPmpATempSnsrPerf' incorporates:
     *  SignalConversion generated from: '<S1>/VeTHDR_e_FaultSts_CoolPmpATempSnsrPerf'
     *  VariantMerge generated from: '<S451>/VeTHDR_e_FaultSts_CoolPmpATempSnsrPerf'
     */
    (void)Rte_Write_VeTHDR_e_FaultSts_CoolPmpATempSnsrPerf_Value
        (THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultS_ax);

    /* Outport: '<Root>/VeTHDR_e_FaultSts_ECH_TempIn' incorporates:
     *  SignalConversion generated from: '<S1>/VeTHDR_e_FaultSts_ECH_TempIn'
     *  VariantMerge generated from: '<S451>/VeTHDR_e_FaultSts_ECH_TempIn'
     */
    (void)Rte_Write_VeTHDR_e_FaultSts_ECH_TempIn_Value
        (THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultSt_d);

    /* Outport: '<Root>/VeTHDR_e_FaultSts_ECH_TempOut' incorporates:
     *  SignalConversion generated from: '<S1>/VeTHDR_e_FaultSts_ECH_TempOut'
     *  VariantMerge generated from: '<S451>/VeTHDR_e_FaultSts_ECH_TempOut'
     */
    (void)Rte_Write_VeTHDR_e_FaultSts_ECH_TempOut_Value
        (THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultSt_n);

    /* Outport: '<Root>/VeTHDR_e_FaultSts_ECT_Snsr4CktPerf' incorporates:
     *  SignalConversion generated from: '<S1>/VeTHDR_e_FaultSts_ECT_Snsr4CktPerf'
     *  VariantMerge generated from: '<S451>/VeTHDR_e_FaultSts_ECT_Snsr4CktPerf'
     */
    (void)Rte_Write_VeTHDR_e_FaultSts_ECT_Snsr4CktPerf_Value
        (THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultS_ke);

    /* Outport: '<Root>/VeTHDR_e_FaultSts_MtrElect_CT_SnsrBPerf' incorporates:
     *  SignalConversion generated from: '<S1>/VeTHDR_e_FaultSts_MtrElect_CT_SnsrBPerf'
     *  VariantMerge generated from: '<S452>/VeTHDR_e_FaultSts_MtrElect_CT_SnsrBPerf'
     */
    (void)Rte_Write_VeTHDR_e_FaultSts_MtrElect_CT_SnsrBPerf_Value
        (THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultSt_k);

    /* Outport: '<Root>/VeTHDR_e_FaultSts_MtrElect_CT_SnsrPerf' incorporates:
     *  SignalConversion generated from: '<S1>/VeTHDR_e_FaultSts_MtrElect_CT_SnsrPerf'
     *  VariantMerge generated from: '<S452>/VeTHDR_e_FaultSts_MtrElect_CT_SnsrPerf'
     */
    (void)Rte_Write_VeTHDR_e_FaultSts_MtrElect_CT_SnsrPerf_Value
        (THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultS_kk);

    /* Outport: '<Root>/VeTHDR_e_FaultSts_MtrElect_CoolPmpATempSnsrPerf' incorporates:
     *  SignalConversion generated from: '<S1>/VeTHDR_e_FaultSts_MtrElect_CoolPmpATempSnsrPerf'
     *  VariantMerge generated from: '<S452>/VeTHDR_e_FaultSts_MtrElect_CoolPmpATempSnsrPerf'
     */
    (void)Rte_Write_VeTHDR_e_FaultSts_MtrElect_CoolPmpATempSnsrPerf_Value
        (THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultSt_b);

    /* Outport: '<Root>/VeTHDR_e_FaultSts_MtrElect_CoolPmpBTempSnsrPerf' incorporates:
     *  SignalConversion generated from: '<S1>/VeTHDR_e_FaultSts_MtrElect_CoolPmpBTempSnsrPerf'
     *  VariantMerge generated from: '<S452>/VeTHDR_e_FaultSts_MtrElect_CoolPmpBTempSnsrPerf'
     */
    (void)Rte_Write_VeTHDR_e_FaultSts_MtrElect_CoolPmpBTempSnsrPerf_Value
        (THDR_ac_B.VariantMergeForOutportVeTHDR_e_FaultS_bp);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
}

/* Output function */
FUNC(void, THDR_CODE) THDR_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/THDR_PwrOff'
     */
    /* Outport: '<Root>/NeTHDR_Cnt_AGS2_Perf_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeTHDR_Cnt_AGS2_Perf_MFOP'
     */
    (void)Rte_Write_NeTHDR_Cnt_AGS2_Perf_MFOP_NeTHDR_Cnt_AGS2_Perf_MFOP
        (THDR_ac_DW.NeTHDR_Cnt_AGS2_Perf_MFOP);

    /* Outport: '<Root>/NeTHDR_Cnt_AGS_Perf_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeTHDR_Cnt_AGS_Perf_MFOP'
     */
    (void)Rte_Write_NeTHDR_Cnt_AGS_Perf_MFOP_NeTHDR_Cnt_AGS_Perf_MFOP
        (THDR_ac_DW.NeTHDR_Cnt_AGS_Perf_MFOP);

    /* Outport: '<Root>/NeTHDR_Cnt_ECHTIS_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeTHDR_Cnt_ECHTIS_MFOP'
     */
    (void)Rte_Write_NeTHDR_Cnt_ECHTIS_MFOP_NeTHDR_Cnt_ECHTIS_MFOP
        (THDR_ac_DW.NeTHDR_Cnt_ECHTIS_MFOP);

    /* Outport: '<Root>/NeTHDR_Cnt_ECH_outTmpSns_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeTHDR_Cnt_ECH_outTmpSns_MFOP'
     */
    (void)Rte_Write_NeTHDR_Cnt_ECH_outTmpSns_MFOP_NeTHDR_Cnt_ECH_outTmpSns_MFOP
        (THDR_ac_DW.NeTHDR_Cnt_ECH_outTmpSns_MFOP);

    /* Outport: '<Root>/NeTHDR_Cnt_HCCTIS_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeTHDR_Cnt_HCCTIS_MFOP'
     */
    (void)Rte_Write_NeTHDR_Cnt_HCCTIS_MFOP_NeTHDR_Cnt_HCCTIS_MFOP
        (THDR_ac_DW.NeTHDR_Cnt_HCCTIS_MFOP);

    /* Outport: '<Root>/NeTHDR_Cnt_HCCTOS_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeTHDR_Cnt_HCCTOS_MFOP'
     */
    (void)Rte_Write_NeTHDR_Cnt_HCCTOS_MFOP_NeTHDR_Cnt_HCCTOS_MFOP
        (THDR_ac_DW.NeTHDR_Cnt_HCCTOS_MFOP);

    /* Outport: '<Root>/NeTHDR_Cnt_HTAP_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeTHDR_Cnt_HTAP_MFOP'
     */
    (void)Rte_Write_NeTHDR_Cnt_HTAP_MFOP_NeTHDR_Cnt_HTAP_MFOP
        (THDR_ac_DW.NeTHDR_Cnt_HTAP_MFOP);

    /* Outport: '<Root>/NeTHDR_Cnt_InTmpSns_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeTHDR_Cnt_InTmpSns_MFOP'
     */
    (void)Rte_Write_NeTHDR_Cnt_InTmpSns_MFOP_NeTHDR_Cnt_InTmpSns_MFOP
        (THDR_ac_DW.NeTHDR_Cnt_InTmpSns_MFOP);

    /* Outport: '<Root>/NeTHDR_Cnt_LRCTOS_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeTHDR_Cnt_LRCTOS_MFOP'
     */
    (void)Rte_Write_NeTHDR_Cnt_LRCTOS_MFOP_NeTHDR_Cnt_LRCTOS_MFOP
        (THDR_ac_DW.NeTHDR_Cnt_LRCTOS_MFOP);

    /* Outport: '<Root>/NeTHDR_Cnt_LTPP2_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeTHDR_Cnt_LTPP2_MFOP'
     */
    (void)Rte_Write_NeTHDR_Cnt_LTPP2_MFOP_NeTHDR_Cnt_LTPP2_MFOP
        (THDR_ac_DW.NeTHDR_Cnt_LTPP2_MFOP);

    /* Outport: '<Root>/NeTHDR_Cnt_LTPP_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeTHDR_Cnt_LTPP_MFOP'
     */
    (void)Rte_Write_NeTHDR_Cnt_LTPP_MFOP_NeTHDR_Cnt_LTPP_MFOP
        (THDR_ac_DW.NeTHDR_Cnt_LTPP_MFOP);

    /* Outport: '<Root>/NeTHDR_Cnt_OOCTOS_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeTHDR_Cnt_OOCTOS_MFOP'
     */
    (void)Rte_Write_NeTHDR_Cnt_OOCTOS_MFOP_NeTHDR_Cnt_OOCTOS_MFOP
        (THDR_ac_DW.NeTHDR_Cnt_OOCTOS_MFOP);

    /* Outport: '<Root>/NeTHDR_Cnt_PPCTIS_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeTHDR_Cnt_PPCTIS_MFOP'
     */
    (void)Rte_Write_NeTHDR_Cnt_PPCTIS_MFOP_NeTHDR_Cnt_PPCTIS_MFOP
        (THDR_ac_DW.NeTHDR_Cnt_PPCTIS_MFOP);

    /* Outport: '<Root>/NeTHDR_Cnt_PPCTIS_OT_MSOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeTHDR_Cnt_PPCTIS_OT_MSOP'
     */
    (void)Rte_Write_NeTHDR_Cnt_PPCTIS_OT_MSOP_NeTHDR_Cnt_PPCTIS_OT_MSOP
        (THDR_ac_DW.NeTHDR_Cnt_PPCTIS_OT_MSOP);

    /* Outport: '<Root>/NeTHDR_Cnt_OEXV_Out_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/Data Store Read'
     */
    (void)Rte_Write_NeTHDR_Cnt_OEXV_Out_MFOP_NeTHDR_Cnt_OEXV_Out_MFOP
        (THDR_ac_DW.NeTHDR_Cnt_OEXV_Out_MFOP);

    /* Outport: '<Root>/NeTHDR_Cnt_OEXV_In_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/Data Store Read1'
     */
    (void)Rte_Write_NeTHDR_Cnt_OEXV_In_MFOP_NeTHDR_Cnt_OEXV_In_MFOP
        (THDR_ac_DW.NeTHDR_Cnt_OEXV_In_MFOP);

    /* Outport: '<Root>/NeTHDR_Cnt_EEXV_Out_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/Data Store Read2'
     */
    (void)Rte_Write_NeTHDR_Cnt_EEXV_Out_MFOP_NeTHDR_Cnt_EEXV_Out_MFOP
        (THDR_ac_DW.NeTHDR_Cnt_EEXV_Out_MFOP);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Output function */
FUNC(void, THDR_CODE) THDR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/THDR_PwrOn'
     */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/DSM_Init'
     */
    /* DataStoreWrite: '<S1285>/Data Store Write2' incorporates:
     *  Inport: '<Root>/NeTHDR_Cnt_EEXV_Out_MFOP_PM_In'
     */
    (void)Rte_Read_NeTHDR_Cnt_EEXV_Out_MFOP_Rx_NeTHDR_Cnt_EEXV_Out_MFOP
        (&THDR_ac_DW.NeTHDR_Cnt_EEXV_Out_MFOP);

    /* DataStoreWrite: '<S1285>/Data Store Write1' incorporates:
     *  Inport: '<Root>/NeTHDR_Cnt_OEXV_In_MFOP_PM_In'
     */
    (void)Rte_Read_NeTHDR_Cnt_OEXV_In_MFOP_Rx_NeTHDR_Cnt_OEXV_In_MFOP
        (&THDR_ac_DW.NeTHDR_Cnt_OEXV_In_MFOP);

    /* DataStoreWrite: '<S1285>/Data Store Write' incorporates:
     *  Inport: '<Root>/NeTHDR_Cnt_OEXV_Out_MFOP_PM_In'
     */
    (void)Rte_Read_NeTHDR_Cnt_OEXV_Out_MFOP_Rx_NeTHDR_Cnt_OEXV_Out_MFOP
        (&THDR_ac_DW.NeTHDR_Cnt_OEXV_Out_MFOP);

    /* DataStoreWrite: '<S1285>/NeTHDR_Cnt_PPCTIS_OT_MSOP' incorporates:
     *  Inport: '<Root>/NeTHDR_Cnt_PPCTIS_OT_MSOP_PM_In'
     */
    (void)Rte_Read_NeTHDR_Cnt_PPCTIS_OT_MSOP_Rx_NeTHDR_Cnt_PPCTIS_OT_MSOP
        (&THDR_ac_DW.NeTHDR_Cnt_PPCTIS_OT_MSOP);

    /* DataStoreWrite: '<S1285>/NeTHDR_Cnt_PPCTIS_MFOP' incorporates:
     *  Inport: '<Root>/NeTHDR_Cnt_PPCTIS_MFOP_PM_In'
     */
    (void)Rte_Read_NeTHDR_Cnt_PPCTIS_MFOP_Rx_NeTHDR_Cnt_PPCTIS_MFOP
        (&THDR_ac_DW.NeTHDR_Cnt_PPCTIS_MFOP);

    /* DataStoreWrite: '<S1285>/NeTHDR_Cnt_OOCTOS_MFOP' incorporates:
     *  Inport: '<Root>/NeTHDR_Cnt_OOCTOS_MFOP_PM_In'
     */
    (void)Rte_Read_NeTHDR_Cnt_OOCTOS_MFOP_Rx_NeTHDR_Cnt_OOCTOS_MFOP
        (&THDR_ac_DW.NeTHDR_Cnt_OOCTOS_MFOP);

    /* DataStoreWrite: '<S1285>/NeTHDR_Cnt_LTPP_MFOP' incorporates:
     *  Inport: '<Root>/NeTHDR_Cnt_LTPP_MFOP_PM_In'
     */
    (void)Rte_Read_NeTHDR_Cnt_LTPP_MFOP_Rx_NeTHDR_Cnt_LTPP_MFOP
        (&THDR_ac_DW.NeTHDR_Cnt_LTPP_MFOP);

    /* DataStoreWrite: '<S1285>/NeTHDR_Cnt_LTPP2_MFOP' incorporates:
     *  Inport: '<Root>/NeTHDR_Cnt_LTPP2_MFOP_PM_In'
     */
    (void)Rte_Read_NeTHDR_Cnt_LTPP2_MFOP_Rx_NeTHDR_Cnt_LTPP2_MFOP
        (&THDR_ac_DW.NeTHDR_Cnt_LTPP2_MFOP);

    /* DataStoreWrite: '<S1285>/NeTHDR_Cnt_LRCTOS_MFOP' incorporates:
     *  Inport: '<Root>/NeTHDR_Cnt_LRCTOS_MFOP_PM_In'
     */
    (void)Rte_Read_NeTHDR_Cnt_LRCTOS_MFOP_Rx_NeTHDR_Cnt_LRCTOS_MFOP
        (&THDR_ac_DW.NeTHDR_Cnt_LRCTOS_MFOP);

    /* DataStoreWrite: '<S1285>/NeTHDR_Cnt_InTmpSns_MFOP' incorporates:
     *  Inport: '<Root>/NeTHDR_Cnt_InTmpSns_MFOP_PM_In'
     */
    (void)Rte_Read_NeTHDR_Cnt_InTmpSns_MFOP_Rx_NeTHDR_Cnt_InTmpSns_MFOP
        (&THDR_ac_DW.NeTHDR_Cnt_InTmpSns_MFOP);

    /* DataStoreWrite: '<S1285>/NeTHDR_Cnt_HTAP_MFOP' incorporates:
     *  Inport: '<Root>/NeTHDR_Cnt_HTAP_MFOP_PM_In'
     */
    (void)Rte_Read_NeTHDR_Cnt_HTAP_MFOP_Rx_NeTHDR_Cnt_HTAP_MFOP
        (&THDR_ac_DW.NeTHDR_Cnt_HTAP_MFOP);

    /* DataStoreWrite: '<S1285>/NeTHDR_Cnt_HCCTOS_MFOP' incorporates:
     *  Inport: '<Root>/NeTHDR_Cnt_HCCTOS_MFOP_PM_In'
     */
    (void)Rte_Read_NeTHDR_Cnt_HCCTOS_MFOP_Rx_NeTHDR_Cnt_HCCTOS_MFOP
        (&THDR_ac_DW.NeTHDR_Cnt_HCCTOS_MFOP);

    /* DataStoreWrite: '<S1285>/NeTHDR_Cnt_HCCTIS_MFOP' incorporates:
     *  Inport: '<Root>/NeTHDR_Cnt_HCCTIS_MFOP_PM_In'
     */
    (void)Rte_Read_NeTHDR_Cnt_HCCTIS_MFOP_Rx_NeTHDR_Cnt_HCCTIS_MFOP
        (&THDR_ac_DW.NeTHDR_Cnt_HCCTIS_MFOP);

    /* DataStoreWrite: '<S1285>/NeTHDR_Cnt_ECH_outTmpSns_MFOP' incorporates:
     *  Inport: '<Root>/NeTHDR_Cnt_ECH_outTmpSns_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeTHDR_Cnt_ECH_outTmpSns_MFOP_Rx_NeTHDR_Cnt_ECH_outTmpSns_MFOP(
        &THDR_ac_DW.NeTHDR_Cnt_ECH_outTmpSns_MFOP);

    /* DataStoreWrite: '<S1285>/NeTHDR_Cnt_ECHTIS_MFOP' incorporates:
     *  Inport: '<Root>/NeTHDR_Cnt_ECHTIS_MFOP_PM_In'
     */
    (void)Rte_Read_NeTHDR_Cnt_ECHTIS_MFOP_Rx_NeTHDR_Cnt_ECHTIS_MFOP
        (&THDR_ac_DW.NeTHDR_Cnt_ECHTIS_MFOP);

    /* DataStoreWrite: '<S1285>/NeTHDR_Cnt_AGS_Perf_MFOP' incorporates:
     *  Inport: '<Root>/NeTHDR_Cnt_AGS_Perf_MFOP_PM_In'
     */
    (void)Rte_Read_NeTHDR_Cnt_AGS_Perf_MFOP_Rx_NeTHDR_Cnt_AGS_Perf_MFOP
        (&THDR_ac_DW.NeTHDR_Cnt_AGS_Perf_MFOP);

    /* DataStoreWrite: '<S1285>/NeTHDR_Cnt_AGS2_Perf_MFOP' incorporates:
     *  Inport: '<Root>/NeTHDR_Cnt_AGS2_Perf_MFOP_PM_In'
     */
    (void)Rte_Read_NeTHDR_Cnt_AGS2_Perf_MFOP_Rx_NeTHDR_Cnt_AGS2_Perf_MFOP
        (&THDR_ac_DW.NeTHDR_Cnt_AGS2_Perf_MFOP);

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S1286>/VeTHDR_b_ECHTIS_FltDtct_Out_Init' */
    THDR_ac_B.OutportBufferForVeTHDR_b_ECHTIS_FltDtct_ = false;

    /* SignalConversion generated from: '<S1286>/VeTHDR_b_InTmpSns_FltDtct_Out_Init' */
    THDR_ac_B.OutportBufferForVeTHDR_b_InTmpSns_FltDtc = false;

    /* SignalConversion generated from: '<S1286>/VeTHDR_b_PPCTIS_FltDtct_Out_Init' */
    THDR_ac_B.OutportBufferForVeTHDR_b_PPCTIS_FltDtct_ = false;

    /* SignalConversion generated from: '<S1286>/VeTHDR_b_PPCTIS_OT_FltDtct_Out_Init' */
    THDR_ac_B.OutportBufferForVeTHDR_b_PPCTIS_OT_FltDt = false;

    /* SignalConversion generated from: '<S1286>/VeTHDR_b_PPCTIS_RtnltyEnbl_Out_Init' */
    THDR_ac_B.OutportBufferForVeTHDR_b_PPCTIS_RtnltyEn = false;

    /* SignalConversion generated from: '<S1286>/VeTHDR_b_IUMPR_ECH_TempOutPerf_Out_Init' */
    THDR_ac_B.OutportBufferForVeTHDR_b_IUMPR_ECH_TempO = false;

    /* SignalConversion generated from: '<S1286>/VeTHDR_b_IUMPR_ECH_TempInPerf_Out_Init' */
    THDR_ac_B.OutportBufferForVeTHDR_b_IUMPR_ECH_TempI = false;

    /* SignalConversion generated from: '<S1286>/VeTHDR_b_IUMPR_ECHTIS_Perf_Out_Init' */
    THDR_ac_B.OutportBufferForVeTHDR_b_IUMPR_ECHTIS_Pe = false;

    /* SignalConversion generated from: '<S1286>/VeTHDR_b_IUMPR_ECTSnsr_Perf_Out_Init' */
    THDR_ac_B.OutportBufferForVeTHDR_b_IUMPR_ECTSnsr_P = false;

    /* SignalConversion generated from: '<S1286>/VeTHDR_b_IUMPR_HTAPTemp_Perf_Out_Init' */
    THDR_ac_B.OutportBufferForVeTHDR_b_IUMPR_HTAPTemp_ = false;

    /* SignalConversion generated from: '<S1286>/VeTHDR_b_IUMPR_PPCTIS_Perf_Out_Init' */
    THDR_ac_B.OutportBufferForVeTHDR_b_IUMPR_PPCTIS_Pe = false;

    /* SignalConversion generated from: '<S1286>/VeTHDR_b_IUMPR_OCCTOS_Perf_Out_Init' */
    THDR_ac_B.OutportBufferForVeTHDR_b_IUMPR_OCCTOS_Pe = false;

    /* SignalConversion generated from: '<S1286>/VeTHDR_b_IUMPR_LTPPTemp_Perf_Out_Init' */
    THDR_ac_B.OutportBufferForVeTHDR_b_IUMPR_LTPPTemp_ = false;

    /* SignalConversion generated from: '<S1286>/VeTHDR_b_IUMPR_LTPP2Temp_Perf_Out_Init' */
    THDR_ac_B.OutportBufferForVeTHDR_b_IUMPR_LTPP2Temp = false;

    /* SignalConversion generated from: '<S1286>/VeTHDR_b_AGS_Perf_FltDtct_Out_Init' */
    THDR_ac_B.OutportBufferForVeTHDR_b_AGS_Perf_FltDtc = false;

    /* SignalConversion generated from: '<S1286>/VeTHDR_b_AGS2_Perf_FltDtct_Out_Init' */
    THDR_ac_B.OutportBufferForVeTHDR_b_AGS2_Perf_FltDt = false;

    /* SignalConversion generated from: '<S1286>/VeTHDR_e_FaultSts_AGS_B_Perf' incorporates:
     *  Constant: '<S1287>/Constant'
     */
    THDR_ac_B.OutportBufferForVeTHDR_e_FaultSts_AGS_B_ = THDR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S1286>/VeTHDR_e_FaultSts_AGS_A_Perf' incorporates:
     *  Constant: '<S1288>/Constant'
     */
    THDR_ac_B.OutportBufferForVeTHDR_e_FaultSts_AGS_A_ =
        THDR_ac_ConstB.Constant_j;

    /* SignalConversion generated from: '<S1286>/VeTHDR_e_FaultSts_ClntTempTooHigh' incorporates:
     *  Constant: '<S1289>/Constant'
     */
    THDR_ac_B.OutportBufferForVeTHDR_e_FaultSts_ClntTe =
        THDR_ac_ConstB.Constant_k;

    /* SignalConversion generated from: '<S1286>/VeTHDR_e_FaultSts_ECH_TempIn' incorporates:
     *  Constant: '<S1290>/Constant'
     */
    THDR_ac_B.OutportBufferForVeTHDR_e_FaultSts_ECH_Te =
        THDR_ac_ConstB.Constant_h;

    /* SignalConversion generated from: '<S1286>/VeTHDR_e_FaultSts_ECH_TempOut' incorporates:
     *  Constant: '<S1291>/Constant'
     */
    THDR_ac_B.OutportBufferForVeTHDR_e_FaultSts_ECH__a =
        THDR_ac_ConstB.Constant_a;

    /* SignalConversion generated from: '<S1286>/VeTHDR_e_FaultSts_CT2_SnsrPerf' incorporates:
     *  Constant: '<S1292>/Constant'
     */
    THDR_ac_B.OutportBufferForVeTHDR_e_FaultSts_CT2_Sn =
        THDR_ac_ConstB.Constant_g;

    /* SignalConversion generated from: '<S1286>/VeTHDR_e_FaultSts_CT3_SnsrPerf' incorporates:
     *  Constant: '<S1293>/Constant'
     */
    THDR_ac_B.OutportBufferForVeTHDR_e_FaultSts_CT3_Sn =
        THDR_ac_ConstB.Constant_kl;

    /* SignalConversion generated from: '<S1286>/VeTHDR_e_FaultSts_ECT_Snsr4CktPerf' incorporates:
     *  Constant: '<S1294>/Constant'
     */
    THDR_ac_B.OutportBufferForVeTHDR_e_FaultSts_ECT_Sn =
        THDR_ac_ConstB.Constant_o;

    /* SignalConversion generated from: '<S1286>/VeTHDR_e_FaultSts_CoolPmpATempSnsrPerf' incorporates:
     *  Constant: '<S1295>/Constant'
     */
    THDR_ac_B.OutportBufferForVeTHDR_e_FaultSts_CoolPm =
        THDR_ac_ConstB.Constant_n;

    /* SignalConversion generated from: '<S1286>/VeTHDR_e_FaultSts_MtrElect_CT_SnsrBPerf' incorporates:
     *  Constant: '<S1296>/Constant'
     */
    THDR_ac_B.OutportBufferForVeTHDR_e_FaultSts_MtrEle =
        THDR_ac_ConstB.Constant_p;

    /* SignalConversion generated from: '<S1286>/VeTHDR_e_FaultSts_MtrElect_CoolPmpBTempSnsrPerf' incorporates:
     *  Constant: '<S1297>/Constant'
     */
    THDR_ac_B.OutportBufferForVeTHDR_e_FaultSts_MtrE_j =
        THDR_ac_ConstB.Constant_e;

    /* SignalConversion generated from: '<S1286>/VeTHDR_e_FaultSts_MtrElect_CoolPmpATempSnsrPerf' incorporates:
     *  Constant: '<S1298>/Constant'
     */
    THDR_ac_B.OutportBufferForVeTHDR_e_FaultSts_MtrE_p =
        THDR_ac_ConstB.Constant_ob;

    /* SignalConversion generated from: '<S1286>/VeTHDR_e_FaultSts_CT_SnsrPerf' incorporates:
     *  Constant: '<S1299>/Constant'
     */
    THDR_ac_B.OutportBufferForVeTHDR_e_FaultSts_CT_Sns =
        THDR_ac_ConstB.Constant_f;

    /* SignalConversion generated from: '<S1286>/VeTHDR_e_FaultSts_MtrElect_CT_SnsrPerf' incorporates:
     *  Constant: '<S1300>/Constant'
     */
    THDR_ac_B.OutportBufferForVeTHDR_e_FaultSts_MtrE_n =
        THDR_ac_ConstB.Constant_ak;

    /* SignalConversion generated from: '<S1286>/VeTHDR_e_FaultSts_AC_RefrigTempSnsr4CktPerf' incorporates:
     *  Constant: '<S1301>/Constant'
     */
    THDR_ac_B.OutportBufferForVeTHDR_e_FaultSts_AC_Ref =
        THDR_ac_ConstB.Constant_av;

    /* SignalConversion generated from: '<S1286>/VeTHDR_e_FaultSts_AC_RefrigTempSnsr5CktPerf' incorporates:
     *  Constant: '<S1302>/Constant'
     */
    THDR_ac_B.OutportBufferForVeTHDR_e_FaultSts_AC_R_g =
        THDR_ac_ConstB.Constant_d;

    /* SignalConversion generated from: '<S1286>/VeTHDR_e_FaultSts_AC_RefrigTempSnsrCPerf' incorporates:
     *  Constant: '<S1303>/Constant'
     */
    THDR_ac_B.OutportBufferForVeTHDR_e_FaultSts_AC_R_l =
        THDR_ac_ConstB.Constant_o4;

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */

    /* Outport: '<Root>/VeTHDR_e_FaultSts_AGS_A_Perf' incorporates:
     *  SignalConversion generated from: '<S1286>/VeTHDR_e_FaultSts_AGS_A_Perf'
     *  SignalConversion generated from: '<S3>/R_VeTHDR_e_FaultSts_AGS_A_Perf'
     */
    (void)Rte_Write_VeTHDR_e_FaultSts_AGS_A_Perf_Value
        (THDR_ac_B.OutportBufferForVeTHDR_e_FaultSts_AGS_A_);

    /* Outport: '<Root>/VeTHDR_e_FaultSts_AGS_B_Perf' incorporates:
     *  SignalConversion generated from: '<S1286>/VeTHDR_e_FaultSts_AGS_B_Perf'
     *  SignalConversion generated from: '<S3>/R_VeTHDR_e_FaultSts_AGS_B_Perf'
     */
    (void)Rte_Write_VeTHDR_e_FaultSts_AGS_B_Perf_Value
        (THDR_ac_B.OutportBufferForVeTHDR_e_FaultSts_AGS_B_);

    /* Outport: '<Root>/VeTHDR_e_FaultSts_CT2_SnsrPerf' incorporates:
     *  SignalConversion generated from: '<S1286>/VeTHDR_e_FaultSts_CT2_SnsrPerf'
     *  SignalConversion generated from: '<S3>/R_VeTHDR_e_FaultSts_CT2_SnsrPerf'
     */
    (void)Rte_Write_VeTHDR_e_FaultSts_CT2_SnsrPerf_Value
        (THDR_ac_B.OutportBufferForVeTHDR_e_FaultSts_CT2_Sn);

    /* Outport: '<Root>/VeTHDR_e_FaultSts_CT3_SnsrPerf' incorporates:
     *  SignalConversion generated from: '<S1286>/VeTHDR_e_FaultSts_CT3_SnsrPerf'
     *  SignalConversion generated from: '<S3>/R_VeTHDR_e_FaultSts_CT3_SnsrPerf'
     */
    (void)Rte_Write_VeTHDR_e_FaultSts_CT3_SnsrPerf_Value
        (THDR_ac_B.OutportBufferForVeTHDR_e_FaultSts_CT3_Sn);

    /* Outport: '<Root>/VeTHDR_e_FaultSts_CT_SnsrPerf' incorporates:
     *  SignalConversion generated from: '<S1286>/VeTHDR_e_FaultSts_CT_SnsrPerf'
     *  SignalConversion generated from: '<S3>/R_VeTHDR_e_FaultSts_CT_SnsrPerf'
     */
    (void)Rte_Write_VeTHDR_e_FaultSts_CT_SnsrPerf_Value
        (THDR_ac_B.OutportBufferForVeTHDR_e_FaultSts_CT_Sns);

    /* Outport: '<Root>/VeTHDR_e_FaultSts_ClntTempTooHigh' incorporates:
     *  SignalConversion generated from: '<S1286>/VeTHDR_e_FaultSts_ClntTempTooHigh'
     *  SignalConversion generated from: '<S3>/R_VeTHDR_e_FaultSts_ClntTempTooHigh'
     */
    (void)Rte_Write_VeTHDR_e_FaultSts_ClntTempTooHigh_Value
        (THDR_ac_B.OutportBufferForVeTHDR_e_FaultSts_ClntTe);

    /* Outport: '<Root>/VeTHDR_e_FaultSts_CoolPmpATempSnsrPerf' incorporates:
     *  SignalConversion generated from: '<S1286>/VeTHDR_e_FaultSts_CoolPmpATempSnsrPerf'
     *  SignalConversion generated from: '<S3>/R_VeTHDR_e_FaultSts_CoolPmpATempSnsrPerf'
     */
    (void)Rte_Write_VeTHDR_e_FaultSts_CoolPmpATempSnsrPerf_Value
        (THDR_ac_B.OutportBufferForVeTHDR_e_FaultSts_CoolPm);

    /* Outport: '<Root>/VeTHDR_e_FaultSts_ECH_TempIn' incorporates:
     *  SignalConversion generated from: '<S1286>/VeTHDR_e_FaultSts_ECH_TempIn'
     *  SignalConversion generated from: '<S3>/R_VeTHDR_e_FaultSts_ECH_TempIn'
     */
    (void)Rte_Write_VeTHDR_e_FaultSts_ECH_TempIn_Value
        (THDR_ac_B.OutportBufferForVeTHDR_e_FaultSts_ECH_Te);

    /* Outport: '<Root>/VeTHDR_e_FaultSts_ECH_TempOut' incorporates:
     *  SignalConversion generated from: '<S1286>/VeTHDR_e_FaultSts_ECH_TempOut'
     *  SignalConversion generated from: '<S3>/R_VeTHDR_e_FaultSts_ECH_TempOut'
     */
    (void)Rte_Write_VeTHDR_e_FaultSts_ECH_TempOut_Value
        (THDR_ac_B.OutportBufferForVeTHDR_e_FaultSts_ECH__a);

    /* Outport: '<Root>/VeTHDR_e_FaultSts_ECT_Snsr4CktPerf' incorporates:
     *  SignalConversion generated from: '<S1286>/VeTHDR_e_FaultSts_ECT_Snsr4CktPerf'
     *  SignalConversion generated from: '<S3>/R_VeTHDR_e_FaultSts_ECT_Snsr4CktPerf'
     */
    (void)Rte_Write_VeTHDR_e_FaultSts_ECT_Snsr4CktPerf_Value
        (THDR_ac_B.OutportBufferForVeTHDR_e_FaultSts_ECT_Sn);

    /* Outport: '<Root>/VeTHDR_e_FaultSts_MtrElect_CT_SnsrBPerf' incorporates:
     *  SignalConversion generated from: '<S1286>/VeTHDR_e_FaultSts_MtrElect_CT_SnsrBPerf'
     *  SignalConversion generated from: '<S3>/R_VeTHDR_e_FaultSts_MtrElect_CT_SnsrBPerf'
     */
    (void)Rte_Write_VeTHDR_e_FaultSts_MtrElect_CT_SnsrBPerf_Value
        (THDR_ac_B.OutportBufferForVeTHDR_e_FaultSts_MtrEle);

    /* Outport: '<Root>/VeTHDR_e_FaultSts_MtrElect_CT_SnsrPerf' incorporates:
     *  SignalConversion generated from: '<S1286>/VeTHDR_e_FaultSts_MtrElect_CT_SnsrPerf'
     *  SignalConversion generated from: '<S3>/R_VeTHDR_e_FaultSts_MtrElect_CT_SnsrPerf'
     */
    (void)Rte_Write_VeTHDR_e_FaultSts_MtrElect_CT_SnsrPerf_Value
        (THDR_ac_B.OutportBufferForVeTHDR_e_FaultSts_MtrE_n);

    /* Outport: '<Root>/VeTHDR_e_FaultSts_MtrElect_CoolPmpATempSnsrPerf' incorporates:
     *  SignalConversion generated from: '<S1286>/VeTHDR_e_FaultSts_MtrElect_CoolPmpATempSnsrPerf'
     *  SignalConversion generated from: '<S3>/R_VeTHDR_e_FaultSts_MtrElect_CoolPmpATempSnsrPerf'
     */
    (void)Rte_Write_VeTHDR_e_FaultSts_MtrElect_CoolPmpATempSnsrPerf_Value
        (THDR_ac_B.OutportBufferForVeTHDR_e_FaultSts_MtrE_p);

    /* Outport: '<Root>/VeTHDR_e_FaultSts_MtrElect_CoolPmpBTempSnsrPerf' incorporates:
     *  SignalConversion generated from: '<S1286>/VeTHDR_e_FaultSts_MtrElect_CoolPmpBTempSnsrPerf'
     *  SignalConversion generated from: '<S3>/R_VeTHDR_e_FaultSts_MtrElect_CoolPmpBTempSnsrPerf'
     */
    (void)Rte_Write_VeTHDR_e_FaultSts_MtrElect_CoolPmpBTempSnsrPerf_Value
        (THDR_ac_B.OutportBufferForVeTHDR_e_FaultSts_MtrE_j);

    /* Outport: '<Root>/VeTHDR_b_AGS2_Perf_FltDtct' incorporates:
     *  SignalConversion generated from: '<S3>/VeTHDR_b_AGS2_Perf_FltDtct_Out_Init'
     */
    (void)Rte_Write_VeTHDR_b_AGS2_Perf_FltDtct_Value
        (THDR_ac_B.OutportBufferForVeTHDR_b_AGS2_Perf_FltDt);

    /* Outport: '<Root>/VeTHDR_b_AGS_Perf_FltDtct' incorporates:
     *  SignalConversion generated from: '<S3>/VeTHDR_b_AGS_Perf_FltDtct_Out_Init'
     */
    (void)Rte_Write_VeTHDR_b_AGS_Perf_FltDtct_Value
        (THDR_ac_B.OutportBufferForVeTHDR_b_AGS_Perf_FltDtc);

    /* Outport: '<Root>/VeTHDR_b_ECHTIS_FltDtct' incorporates:
     *  SignalConversion generated from: '<S3>/VeTHDR_b_ECHTIS_FltDtct_Out_Init'
     */
    (void)Rte_Write_VeTHDR_b_ECHTIS_FltDtct_Value
        (THDR_ac_B.OutportBufferForVeTHDR_b_ECHTIS_FltDtct_);

    /* Outport: '<Root>/VeTHDR_b_IUMPR_ECHTIS_Perf' incorporates:
     *  SignalConversion generated from: '<S3>/VeTHDR_b_IUMPR_ECHTIS_Perf_Out_Init'
     */
    (void)Rte_Write_VeTHDR_b_IUMPR_ECHTIS_Perf_Value
        (THDR_ac_B.OutportBufferForVeTHDR_b_IUMPR_ECHTIS_Pe);

    /* Outport: '<Root>/VeTHDR_b_IUMPR_ECH_TempInPerf' incorporates:
     *  SignalConversion generated from: '<S3>/VeTHDR_b_IUMPR_ECH_TempInPerf_Out_Init'
     */
    (void)Rte_Write_VeTHDR_b_IUMPR_ECH_TempInPerf_Value
        (THDR_ac_B.OutportBufferForVeTHDR_b_IUMPR_ECH_TempI);

    /* Outport: '<Root>/VeTHDR_b_IUMPR_ECH_TempOutPerf' incorporates:
     *  SignalConversion generated from: '<S3>/VeTHDR_b_IUMPR_ECH_TempOutPerf_Out_Init'
     */
    (void)Rte_Write_VeTHDR_b_IUMPR_ECH_TempOutPerf_Value
        (THDR_ac_B.OutportBufferForVeTHDR_b_IUMPR_ECH_TempO);

    /* Outport: '<Root>/VeTHDR_b_IUMPR_ECTSnsr_Perf' incorporates:
     *  SignalConversion generated from: '<S3>/VeTHDR_b_IUMPR_ECTSnsr_Perf_Out_Init'
     */
    (void)Rte_Write_VeTHDR_b_IUMPR_ECTSnsr_Perf_Value
        (THDR_ac_B.OutportBufferForVeTHDR_b_IUMPR_ECTSnsr_P);

    /* Outport: '<Root>/VeTHDR_b_IUMPR_HTAPTemp_Perf' incorporates:
     *  SignalConversion generated from: '<S3>/VeTHDR_b_IUMPR_HTAPTemp_Perf_Out_Init'
     */
    (void)Rte_Write_VeTHDR_b_IUMPR_HTAPTemp_Perf_Value
        (THDR_ac_B.OutportBufferForVeTHDR_b_IUMPR_HTAPTemp_);

    /* Outport: '<Root>/VeTHDR_b_IUMPR_LTPP2Temp_Perf' incorporates:
     *  SignalConversion generated from: '<S3>/VeTHDR_b_IUMPR_LTPP2Temp_Perf_Out_Init'
     */
    (void)Rte_Write_VeTHDR_b_IUMPR_LTPP2Temp_Perf_Value
        (THDR_ac_B.OutportBufferForVeTHDR_b_IUMPR_LTPP2Temp);

    /* Outport: '<Root>/VeTHDR_b_IUMPR_LTPPTemp_Perf' incorporates:
     *  SignalConversion generated from: '<S3>/VeTHDR_b_IUMPR_LTPPTemp_Perf_Out_Init'
     */
    (void)Rte_Write_VeTHDR_b_IUMPR_LTPPTemp_Perf_Value
        (THDR_ac_B.OutportBufferForVeTHDR_b_IUMPR_LTPPTemp_);

    /* Outport: '<Root>/VeTHDR_b_IUMPR_OCCTOS_Perf' incorporates:
     *  SignalConversion generated from: '<S3>/VeTHDR_b_IUMPR_OCCTOS_Perf_Out_Init'
     */
    (void)Rte_Write_VeTHDR_b_IUMPR_OCCTOS_Perf_Value
        (THDR_ac_B.OutportBufferForVeTHDR_b_IUMPR_OCCTOS_Pe);

    /* Outport: '<Root>/VeTHDR_b_IUMPR_PPCTIS_Perf' incorporates:
     *  SignalConversion generated from: '<S3>/VeTHDR_b_IUMPR_PPCTIS_Perf_Out_Init'
     */
    (void)Rte_Write_VeTHDR_b_IUMPR_PPCTIS_Perf_Value
        (THDR_ac_B.OutportBufferForVeTHDR_b_IUMPR_PPCTIS_Pe);

    /* Outport: '<Root>/VeTHDR_b_InTmpSns_FltDtct' incorporates:
     *  SignalConversion generated from: '<S3>/VeTHDR_b_InTmpSns_FltDtct_Out_Init'
     */
    (void)Rte_Write_VeTHDR_b_InTmpSns_FltDtct_Value
        (THDR_ac_B.OutportBufferForVeTHDR_b_InTmpSns_FltDtc);

    /* Outport: '<Root>/VeTHDR_b_PPCTIS_FltDtct' incorporates:
     *  SignalConversion generated from: '<S3>/VeTHDR_b_PPCTIS_FltDtct_Out_Init'
     */
    (void)Rte_Write_VeTHDR_b_PPCTIS_FltDtct_Value
        (THDR_ac_B.OutportBufferForVeTHDR_b_PPCTIS_FltDtct_);

    /* Outport: '<Root>/VeTHDR_b_PPCTIS_OT_FltDtct' incorporates:
     *  SignalConversion generated from: '<S3>/VeTHDR_b_PPCTIS_OT_FltDtct_Out_Init'
     */
    (void)Rte_Write_VeTHDR_b_PPCTIS_OT_FltDtct_Value
        (THDR_ac_B.OutportBufferForVeTHDR_b_PPCTIS_OT_FltDt);

    /* Outport: '<Root>/VeTHDR_b_PPCTIS_RtnltyEnbl' incorporates:
     *  SignalConversion generated from: '<S3>/VeTHDR_b_PPCTIS_RtnltyEnbl_Out_Init'
     */
    (void)Rte_Write_VeTHDR_b_PPCTIS_RtnltyEnbl_Value
        (THDR_ac_B.OutportBufferForVeTHDR_b_PPCTIS_RtnltyEn);

    /* Outport: '<Root>/VeTHDR_e_FaultSts_AC_RefrigTempSnsr4CktPerf' incorporates:
     *  SignalConversion generated from: '<S1286>/VeTHDR_e_FaultSts_AC_RefrigTempSnsr4CktPerf'
     *  SignalConversion generated from: '<S3>/VeTHDR_e_FaultSts_AC_RefrigTempSnsr4CktPerf'
     */
    (void)Rte_Write_VeTHDR_e_FaultSts_AC_RefrigTempSnsr4CktPerf_Value
        (THDR_ac_B.OutportBufferForVeTHDR_e_FaultSts_AC_Ref);

    /* Outport: '<Root>/VeTHDR_e_FaultSts_AC_RefrigTempSnsr5CktPerf' incorporates:
     *  SignalConversion generated from: '<S1286>/VeTHDR_e_FaultSts_AC_RefrigTempSnsr5CktPerf'
     *  SignalConversion generated from: '<S3>/VeTHDR_e_FaultSts_AC_RefrigTempSnsr5CktPerf'
     */
    (void)Rte_Write_VeTHDR_e_FaultSts_AC_RefrigTempSnsr5CktPerf_Value
        (THDR_ac_B.OutportBufferForVeTHDR_e_FaultSts_AC_R_g);

    /* Outport: '<Root>/VeTHDR_e_FaultSts_AC_RefrigTempSnsrCPerf' incorporates:
     *  SignalConversion generated from: '<S1286>/VeTHDR_e_FaultSts_AC_RefrigTempSnsrCPerf'
     *  SignalConversion generated from: '<S3>/VeTHDR_e_FaultSts_AC_RefrigTempSnsrCPerf'
     */
    (void)Rte_Write_VeTHDR_e_FaultSts_AC_RefrigTempSnsrCPerf_Value
        (THDR_ac_B.OutportBufferForVeTHDR_e_FaultSts_AC_R_l);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, THDR_CODE) THDR_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/THDR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S1286>/VeTHDR_e_FaultSts_AGS_B_Perf' incorporates:
     *  Constant: '<S1287>/Constant'
     */
    THDR_ac_B.OutportBufferForVeTHDR_e_FaultSts_AGS_B_ = THDR_ac_ConstB.Constant;

    /* SystemInitialize for SignalConversion generated from: '<S1286>/VeTHDR_e_FaultSts_AGS_A_Perf' incorporates:
     *  Constant: '<S1288>/Constant'
     */
    THDR_ac_B.OutportBufferForVeTHDR_e_FaultSts_AGS_A_ =
        THDR_ac_ConstB.Constant_j;

    /* SystemInitialize for SignalConversion generated from: '<S1286>/VeTHDR_e_FaultSts_ClntTempTooHigh' incorporates:
     *  Constant: '<S1289>/Constant'
     */
    THDR_ac_B.OutportBufferForVeTHDR_e_FaultSts_ClntTe =
        THDR_ac_ConstB.Constant_k;

    /* SystemInitialize for SignalConversion generated from: '<S1286>/VeTHDR_e_FaultSts_ECH_TempIn' incorporates:
     *  Constant: '<S1290>/Constant'
     */
    THDR_ac_B.OutportBufferForVeTHDR_e_FaultSts_ECH_Te =
        THDR_ac_ConstB.Constant_h;

    /* SystemInitialize for SignalConversion generated from: '<S1286>/VeTHDR_e_FaultSts_ECH_TempOut' incorporates:
     *  Constant: '<S1291>/Constant'
     */
    THDR_ac_B.OutportBufferForVeTHDR_e_FaultSts_ECH__a =
        THDR_ac_ConstB.Constant_a;

    /* SystemInitialize for SignalConversion generated from: '<S1286>/VeTHDR_e_FaultSts_CT2_SnsrPerf' incorporates:
     *  Constant: '<S1292>/Constant'
     */
    THDR_ac_B.OutportBufferForVeTHDR_e_FaultSts_CT2_Sn =
        THDR_ac_ConstB.Constant_g;

    /* SystemInitialize for SignalConversion generated from: '<S1286>/VeTHDR_e_FaultSts_CT3_SnsrPerf' incorporates:
     *  Constant: '<S1293>/Constant'
     */
    THDR_ac_B.OutportBufferForVeTHDR_e_FaultSts_CT3_Sn =
        THDR_ac_ConstB.Constant_kl;

    /* SystemInitialize for SignalConversion generated from: '<S1286>/VeTHDR_e_FaultSts_ECT_Snsr4CktPerf' incorporates:
     *  Constant: '<S1294>/Constant'
     */
    THDR_ac_B.OutportBufferForVeTHDR_e_FaultSts_ECT_Sn =
        THDR_ac_ConstB.Constant_o;

    /* SystemInitialize for SignalConversion generated from: '<S1286>/VeTHDR_e_FaultSts_CoolPmpATempSnsrPerf' incorporates:
     *  Constant: '<S1295>/Constant'
     */
    THDR_ac_B.OutportBufferForVeTHDR_e_FaultSts_CoolPm =
        THDR_ac_ConstB.Constant_n;

    /* SystemInitialize for SignalConversion generated from: '<S1286>/VeTHDR_e_FaultSts_MtrElect_CT_SnsrBPerf' incorporates:
     *  Constant: '<S1296>/Constant'
     */
    THDR_ac_B.OutportBufferForVeTHDR_e_FaultSts_MtrEle =
        THDR_ac_ConstB.Constant_p;

    /* SystemInitialize for SignalConversion generated from: '<S1286>/VeTHDR_e_FaultSts_MtrElect_CoolPmpBTempSnsrPerf' incorporates:
     *  Constant: '<S1297>/Constant'
     */
    THDR_ac_B.OutportBufferForVeTHDR_e_FaultSts_MtrE_j =
        THDR_ac_ConstB.Constant_e;

    /* SystemInitialize for SignalConversion generated from: '<S1286>/VeTHDR_e_FaultSts_MtrElect_CoolPmpATempSnsrPerf' incorporates:
     *  Constant: '<S1298>/Constant'
     */
    THDR_ac_B.OutportBufferForVeTHDR_e_FaultSts_MtrE_p =
        THDR_ac_ConstB.Constant_ob;

    /* SystemInitialize for SignalConversion generated from: '<S1286>/VeTHDR_e_FaultSts_CT_SnsrPerf' incorporates:
     *  Constant: '<S1299>/Constant'
     */
    THDR_ac_B.OutportBufferForVeTHDR_e_FaultSts_CT_Sns =
        THDR_ac_ConstB.Constant_f;

    /* SystemInitialize for SignalConversion generated from: '<S1286>/VeTHDR_e_FaultSts_MtrElect_CT_SnsrPerf' incorporates:
     *  Constant: '<S1300>/Constant'
     */
    THDR_ac_B.OutportBufferForVeTHDR_e_FaultSts_MtrE_n =
        THDR_ac_ConstB.Constant_ak;

    /* SystemInitialize for SignalConversion generated from: '<S1286>/VeTHDR_e_FaultSts_AC_RefrigTempSnsr4CktPerf' incorporates:
     *  Constant: '<S1301>/Constant'
     */
    THDR_ac_B.OutportBufferForVeTHDR_e_FaultSts_AC_Ref =
        THDR_ac_ConstB.Constant_av;

    /* SystemInitialize for SignalConversion generated from: '<S1286>/VeTHDR_e_FaultSts_AC_RefrigTempSnsr5CktPerf' incorporates:
     *  Constant: '<S1302>/Constant'
     */
    THDR_ac_B.OutportBufferForVeTHDR_e_FaultSts_AC_R_g =
        THDR_ac_ConstB.Constant_d;

    /* SystemInitialize for SignalConversion generated from: '<S1286>/VeTHDR_e_FaultSts_AC_RefrigTempSnsrCPerf' incorporates:
     *  Constant: '<S1303>/Constant'
     */
    THDR_ac_B.OutportBufferForVeTHDR_e_FaultSts_AC_R_l =
        THDR_ac_ConstB.Constant_o4;

    /* End of SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/THDR_MedTEH'
     */
    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Diagnostic'
     */

    /* SystemInitialize for Atomic SubSystem: '<S19>/HighTempLoopDiagnostics' */
#if Rte_SysCon_Variant_THDR_13

    /* SystemInitialize for Atomic SubSystem: '<S451>/HighTempLoop' */
    /* SystemInitialize for Enabled SubSystem: '<S741>/Subsystem2' */
    /* SystemInitialize for SignalConversion generated from: '<S748>/Out1' incorporates:
     *  Outport: '<S748>/Out1'
     */
    THDR_ac_B.OutportBufferForOut1 = true;

    /* End of SystemInitialize for SubSystem: '<S741>/Subsystem2' */
    /* End of SystemInitialize for SubSystem: '<S451>/HighTempLoop' */
#endif

    /* End of SystemInitialize for SubSystem: '<S19>/HighTempLoopDiagnostics' */

    /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */

    /* SystemInitialize for Outport: '<Root>/VeTHDR_e_FaultSts_AGS_B_Perf' incorporates:
     *  Merge: '<Root>/M_VeTHDR_e_FaultSts_AGS_B_Perf'
     */
    (void)Rte_Write_VeTHDR_e_FaultSts_AGS_B_Perf_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeTHDR_e_FaultSts_AGS_A_Perf' incorporates:
     *  Merge: '<Root>/M_VeTHDR_e_FaultSts_AGS_A_Perf'
     */
    (void)Rte_Write_VeTHDR_e_FaultSts_AGS_A_Perf_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeTHDR_e_FaultSts_ClntTempTooHigh' incorporates:
     *  Merge: '<Root>/M_VeTHDR_e_FaultSts_ClntTempTooHigh'
     */
    (void)Rte_Write_VeTHDR_e_FaultSts_ClntTempTooHigh_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeTHDR_e_FaultSts_ECH_TempIn' incorporates:
     *  Merge: '<Root>/M_VeTHDR_e_FaultSts_ECH_TempIn'
     */
    (void)Rte_Write_VeTHDR_e_FaultSts_ECH_TempIn_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeTHDR_e_FaultSts_ECH_TempOut' incorporates:
     *  Merge: '<Root>/M_VeTHDR_e_FaultSts_ECH_TempOut'
     */
    (void)Rte_Write_VeTHDR_e_FaultSts_ECH_TempOut_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeTHDR_e_FaultSts_CT2_SnsrPerf' incorporates:
     *  Merge: '<Root>/M_VeTHDR_e_FaultSts_CT2_SnsrPerf'
     */
    (void)Rte_Write_VeTHDR_e_FaultSts_CT2_SnsrPerf_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeTHDR_e_FaultSts_CT3_SnsrPerf' incorporates:
     *  Merge: '<Root>/M_VeTHDR_e_FaultSts_CT3_SnsrPerf'
     */
    (void)Rte_Write_VeTHDR_e_FaultSts_CT3_SnsrPerf_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeTHDR_e_FaultSts_ECT_Snsr4CktPerf' incorporates:
     *  Merge: '<Root>/M_VeTHDR_e_FaultSts_ECT_Snsr4CktPerf'
     */
    (void)Rte_Write_VeTHDR_e_FaultSts_ECT_Snsr4CktPerf_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeTHDR_e_FaultSts_CoolPmpATempSnsrPerf' incorporates:
     *  Merge: '<Root>/M_VeTHDR_e_FaultSts_CoolPmpATempSnsrPerf'
     */
    (void)Rte_Write_VeTHDR_e_FaultSts_CoolPmpATempSnsrPerf_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeTHDR_e_FaultSts_MtrElect_CT_SnsrBPerf' incorporates:
     *  Merge: '<Root>/M_VeTHDR_e_FaultSts_MtrElect_CT_SnsrBPerf'
     */
    (void)Rte_Write_VeTHDR_e_FaultSts_MtrElect_CT_SnsrBPerf_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeTHDR_e_FaultSts_MtrElect_CoolPmpBTempSnsrPerf' incorporates:
     *  Merge: '<Root>/M_VeTHDR_e_FaultSts_MtrElect_CoolPmpBTempSnsrPerf'
     */
    (void)Rte_Write_VeTHDR_e_FaultSts_MtrElect_CoolPmpBTempSnsrPerf_Value
        (CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeTHDR_e_FaultSts_MtrElect_CoolPmpATempSnsrPerf' incorporates:
     *  Merge: '<Root>/M_VeTHDR_e_FaultSts_MtrElect_CoolPmpATempSnsrPerf'
     */
    (void)Rte_Write_VeTHDR_e_FaultSts_MtrElect_CoolPmpATempSnsrPerf_Value
        (CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeTHDR_e_FaultSts_CT_SnsrPerf' incorporates:
     *  Merge: '<Root>/M_VeTHDR_e_FaultSts_CT_SnsrPerf'
     */
    (void)Rte_Write_VeTHDR_e_FaultSts_CT_SnsrPerf_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeTHDR_e_FaultSts_MtrElect_CT_SnsrPerf' incorporates:
     *  Merge: '<Root>/M_VeTHDR_e_FaultSts_MtrElect_CT_SnsrPerf'
     */
    (void)Rte_Write_VeTHDR_e_FaultSts_MtrElect_CT_SnsrPerf_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeTHDR_e_FaultSts_AC_RefrigTempSnsr4CktPerf' incorporates:
     *  Merge: '<Root>/M_VeTHDR_e_FaultSts_AC_RefrigTempSnsr4CktPerf'
     */
    (void)Rte_Write_VeTHDR_e_FaultSts_AC_RefrigTempSnsr4CktPerf_Value
        (CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeTHDR_e_FaultSts_AC_RefrigTempSnsr5CktPerf' incorporates:
     *  Merge: '<Root>/M_VeTHDR_e_FaultSts_AC_RefrigTempSnsr5CktPerf'
     */
    (void)Rte_Write_VeTHDR_e_FaultSts_AC_RefrigTempSnsr5CktPerf_Value
        (CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeTHDR_e_FaultSts_AC_RefrigTempSnsrCPerf' incorporates:
     *  Merge: '<Root>/M_VeTHDR_e_FaultSts_AC_RefrigTempSnsrCPerf'
     */
    (void)Rte_Write_VeTHDR_e_FaultSts_AC_RefrigTempSnsrCPerf_Value(CeDFIB_e_Init);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
