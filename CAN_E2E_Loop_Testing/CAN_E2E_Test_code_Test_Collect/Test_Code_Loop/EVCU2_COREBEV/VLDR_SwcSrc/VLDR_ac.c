/*
 * File: VLDR_ac.c
 *
 * Code generated for Simulink model 'VLDR_ac'.
 *
 * Model version                  : 9.221
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sun Apr  7 07:07:22 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "VLDR_ac.h"
#include "look1_iflf_binlcapw.h"

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_VLDR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(uint8, VLDR_VAR_INIT) HeVLDR_Cnt_EXV_BTOS_BTIS_limit = 2U;/* Referenced by:
                                                                      * '<S670>/HeVLDR_Cnt_EXV_BTOS_BTIS_limit'
                                                                      * '<S688>/HeVLDR_Cnt_EXV_BTOS_BTIS_limit'
                                                                      */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(float32, VLDR_VAR_INIT) HeVLDR_K_EEXV_RefPress_Gain =
    10.0F;             /* Referenced by: '<S262>/HeVLDR_K_EEXV_RefPress_Gain' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(float32, VLDR_VAR_INIT) HeVLDR_K_EEXV_RefTemp_Gain = 10.0F;
                        /* Referenced by: '<S390>/HeVLDR_K_EEXV_RefTemp_Gain' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(float32, VLDR_VAR_INIT) HeVLDR_K_EXV_RefPress_Gain = 10.0F;
                        /* Referenced by: '<S492>/HeVLDR_K_EXV_RefPress_Gain' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(float32, VLDR_VAR_INIT) HeVLDR_K_EXV_RefTemp_Gain = 10.0F;
                         /* Referenced by: '<S628>/HeVLDR_K_EXV_RefTemp_Gain' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(float32, VLDR_VAR_INIT) HeVLDR_K_OEXV_RefPress_Gain =
    10.0F;            /* Referenced by: '<S1419>/HeVLDR_K_OEXV_RefPress_Gain' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(float32, VLDR_VAR_INIT) HeVLDR_K_OEXV_RefTemp_Gain = 10.0F;
                       /* Referenced by: '<S1528>/HeVLDR_K_OEXV_RefTemp_Gain' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(float32, VLDR_VAR_INIT) HeVLDR_T_EEXV_RefTemp_Offset =
    40.0F;            /* Referenced by: '<S391>/HeVLDR_T_EEXV_RefTemp_Offset' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(float32, VLDR_VAR_INIT) HeVLDR_T_EEXV_RefTemp_ShrtHigh =
    2046.0F;        /* Referenced by: '<S387>/HeVLDR_T_EEXV_RefTemp_ShrtHigh' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(float32, VLDR_VAR_INIT) HeVLDR_T_EEXV_RefTemp_ShrtLow =
    2045.0F;         /* Referenced by: '<S388>/HeVLDR_T_EEXV_RefTemp_ShrtLow' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(float32, VLDR_VAR_INIT) HeVLDR_T_EXV_RefTemp_Offset =
    40.0F;             /* Referenced by: '<S629>/HeVLDR_T_EXV_RefTemp_Offset' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(float32, VLDR_VAR_INIT) HeVLDR_T_EXV_RefTemp_ShrtHigh =
    2046.0F;         /* Referenced by: '<S625>/HeVLDR_T_EXV_RefTemp_ShrtHigh' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(float32, VLDR_VAR_INIT) HeVLDR_T_EXV_RefTemp_ShrtLow =
    2045.0F;          /* Referenced by: '<S626>/HeVLDR_T_EXV_RefTemp_ShrtLow' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(float32, VLDR_VAR_INIT) HeVLDR_T_OEXV_RefTemp_Offset =
    40.0F;           /* Referenced by: '<S1529>/HeVLDR_T_OEXV_RefTemp_Offset' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(float32, VLDR_VAR_INIT) HeVLDR_T_OEXV_RefTemp_ShrtHigh =
    2046.0F;       /* Referenced by: '<S1525>/HeVLDR_T_OEXV_RefTemp_ShrtHigh' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(float32, VLDR_VAR_INIT) HeVLDR_T_OEXV_RefTemp_ShrtLow =
    2045.0F;        /* Referenced by: '<S1526>/HeVLDR_T_OEXV_RefTemp_ShrtLow' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(boolean, VLDR_VAR_INIT) HeVLDR_b_HtrCommBus_Slct = 1;
                          /* Referenced by: '<S858>/HeVLDR_b_HtrCommBus_Slct' */

#endif

#if Rte_SysCon_Variant_VLDR_5

static volatile CONST(boolean, VLDR_VAR_INIT) HeVLDR_b_LTSOV_OFF = 0;/* Referenced by:
                                                                      * '<S1234>/HeVLDR_b_LTSOV_OFF'
                                                                      * '<S1280>/HeVLDR_b_LTSOV_OFF'
                                                                      * '<S1144>/HeVLDR_b_LTSOV_OFF'
                                                                      */

#endif

#if Rte_SysCon_Variant_VLDR_5

static volatile CONST(boolean, VLDR_VAR_INIT) HeVLDR_b_LTSOV_ON = 1;/* Referenced by:
                                                                     * '<S1235>/HeVLDR_b_LTSOV_ON'
                                                                     * '<S1281>/HeVLDR_b_LTSOV_ON'
                                                                     * '<S1134>/HeVLDR_b_LTSOV_ON'
                                                                     */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(uint8, VLDR_VAR_INIT) HeVLDR_i_EXV_LINBusOffDTC_Slct = 0U;/* Referenced by: '<S401>/Calib' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(float32, VLDR_VAR_INIT) HeVLDR_p_EEXV_RefPress_ShrtHigh =
    16382.0F;                          /* Referenced by:
                                        * '<S248>/HeVLDR_p_EEXV_RefPress_ShrtHigh'
                                        * '<S260>/HeVLDR_p_EEXV_RefPress_ShrtHigh'
                                        */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(float32, VLDR_VAR_INIT) HeVLDR_p_EEXV_RefPress_ShrtLow =
    16381.0F;       /* Referenced by: '<S261>/HeVLDR_p_EEXV_RefPress_ShrtLow' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(float32, VLDR_VAR_INIT) HeVLDR_p_EXV_RefPress_ShrtHigh =
    16382.0F;                          /* Referenced by:
                                        * '<S478>/HeVLDR_p_EXV_RefPress_ShrtHigh'
                                        * '<S490>/HeVLDR_p_EXV_RefPress_ShrtHigh'
                                        */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(float32, VLDR_VAR_INIT) HeVLDR_p_EXV_RefPress_ShrtLow =
    16381.0F;        /* Referenced by: '<S491>/HeVLDR_p_EXV_RefPress_ShrtLow' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(float32, VLDR_VAR_INIT) HeVLDR_p_OEXV_RefPress_ShrtHigh =
    16382.0F;                          /* Referenced by:
                                        * '<S1386>/HeVLDR_p_OEXV_RefPress_ShrtHigh'
                                        * '<S1398>/HeVLDR_p_OEXV_RefPress_ShrtHigh'
                                        */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(float32, VLDR_VAR_INIT) HeVLDR_p_OEXV_RefPress_ShrtLow =
    16381.0F;      /* Referenced by: '<S1399>/HeVLDR_p_OEXV_RefPress_ShrtLow' */

#endif

#if Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_10 || Rte_SysCon_Variant_VLDR_11 || Rte_SysCon_Variant_VLDR_12 || Rte_SysCon_Variant_VLDR_4 || Rte_SysCon_Variant_VLDR_6 || Rte_SysCon_Variant_VLDR_8

static volatile CONST(float32, VLDR_VAR_INIT) HeVLDR_t_MedTED = 0.02F;/* Referenced by:
                                                                      * '<S44>/Calib'
                                                                      * '<S122>/Calib'
                                                                      * '<S802>/Calib'
                                                                      * '<S1183>/Calib'
                                                                      * '<S200>/Calib'
                                                                      * '<S249>/Calib'
                                                                      * '<S308>/Calib'
                                                                      * '<S431>/Calib'
                                                                      * '<S479>/Calib'
                                                                      * '<S543>/Calib'
                                                                      * '<S671>/Calib'
                                                                      * '<S1339>/Calib'
                                                                      * '<S1387>/Calib'
                                                                      * '<S1446>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_VLDR_12

static volatile CONST(uint16, VLDR_VAR_INIT) KeVLDR_Cnt_BHV_PerfDiag_FailCnt =
    80U;                               /* Referenced by: '<S26>/Calib' */

#endif

#if Rte_SysCon_Variant_VLDR_12

static volatile CONST(uint16, VLDR_VAR_INIT) KeVLDR_Cnt_BHV_PerfDiag_SmpCnt =
    80U;                               /* Referenced by: '<S27>/Calib' */

#endif

#if Rte_SysCon_Variant_VLDR_12

static volatile CONST(uint16, VLDR_VAR_INIT) KeVLDR_Cnt_BHV_Position_Wait_Time =
    10U;                               /* Referenced by: '<S55>/Calib' */

#endif

#if Rte_SysCon_Variant_VLDR_15

static volatile CONST(sint16, VLDR_VAR_INIT) KeVLDR_Cnt_CPV2_PerfDiag_FailCnt =
    80;             /* Referenced by: '<S62>/KeVLDR_Cnt_CPV_PerfDiag_FailCnt' */

#endif

#if Rte_SysCon_Variant_VLDR_15

static volatile CONST(sint16, VLDR_VAR_INIT) KeVLDR_Cnt_CPV2_PerfDiag_SmplCnt =
    100;            /* Referenced by: '<S63>/KeVLDR_Cnt_CPV_PerfDiag_SmplCnt' */

#endif

#if Rte_SysCon_Variant_VLDR_15

static volatile CONST(uint16, VLDR_VAR_INIT) KeVLDR_Cnt_CPV2_Position_Wait_Time =
    1U;           /* Referenced by: '<S87>/KeVLDR_Cnt_CVP_Position_Wait_Time' */

#endif

#if Rte_SysCon_Variant_VLDR_8

static volatile CONST(sint16, VLDR_VAR_INIT) KeVLDR_Cnt_CPV_PerfDiag_FailCnt =
    80;             /* Referenced by: '<S97>/KeVLDR_Cnt_CPV_PerfDiag_FailCnt' */

#endif

#if Rte_SysCon_Variant_VLDR_8

static volatile CONST(sint16, VLDR_VAR_INIT) KeVLDR_Cnt_CPV_PerfDiag_SmplCnt =
    100;            /* Referenced by: '<S98>/KeVLDR_Cnt_CPV_PerfDiag_SmplCnt' */

#endif

#if Rte_SysCon_Variant_VLDR_8

static volatile CONST(uint16, VLDR_VAR_INIT) KeVLDR_Cnt_CVP_Position_Wait_Time =
    10U;         /* Referenced by: '<S151>/KeVLDR_Cnt_CVP_Position_Wait_Time' */

#endif

#if Rte_SysCon_Variant_VLDR_2

static volatile CONST(uint16, VLDR_VAR_INIT) KeVLDR_Cnt_CabVlvOpeng_Err_FailCnt =
    300U;       /* Referenced by: '<S773>/KeVLDR_Cnt_CabVlvOpeng_Err_FailCnt' */

#endif

#if Rte_SysCon_Variant_VLDR_2

static volatile CONST(uint16, VLDR_VAR_INIT) KeVLDR_Cnt_CabVlvOpeng_Err_SmpCnt =
    330U;        /* Referenced by: '<S774>/KeVLDR_Cnt_CabVlvOpeng_Err_SmpCnt' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(uint16, VLDR_VAR_INIT)
    KeVLDR_Cnt_EEXV_Max_Referencing_Time = 10U;
              /* Referenced by: '<S201>/KeVLDR_Cnt_EEXV_Max_Referencing_Time' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(uint16, VLDR_VAR_INIT) KeVLDR_Cnt_EEXV_PerfDiag_FailCnt =
    20U;          /* Referenced by: '<S176>/KeVLDR_Cnt_EEXV_PerfDiag_FailCnt' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(uint16, VLDR_VAR_INIT) KeVLDR_Cnt_EEXV_PerfDiag_SmpCnt =
    40U;           /* Referenced by: '<S177>/KeVLDR_Cnt_EEXV_PerfDiag_SmpCnt' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(uint16, VLDR_VAR_INIT) KeVLDR_Cnt_EEXV_Position_Wait_Time =
    2U;         /* Referenced by: '<S215>/KeVLDR_Cnt_EEXV_Position_Wait_Time' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(uint16, VLDR_VAR_INIT)
    KeVLDR_Cnt_EEXV_PressElctrFlt_FailCnt = 50U;
             /* Referenced by: '<S224>/KeVLDR_Cnt_EEXV_PressElctrFlt_FailCnt' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(uint16, VLDR_VAR_INIT)
    KeVLDR_Cnt_EEXV_PressElctrFlt_SmpCnt = 80U;
              /* Referenced by: '<S225>/KeVLDR_Cnt_EEXV_PressElctrFlt_SmpCnt' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(uint16, VLDR_VAR_INIT) KeVLDR_Cnt_EEXV_PressSens_FailCnt =
    15U;         /* Referenced by: '<S267>/KeVLDR_Cnt_EEXV_PressSens_FailCnt' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(uint16, VLDR_VAR_INIT) KeVLDR_Cnt_EEXV_PressSens_SmpCnt =
    30U;          /* Referenced by: '<S268>/KeVLDR_Cnt_EEXV_PressSens_SmpCnt' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(uint16, VLDR_VAR_INIT)
    KeVLDR_Cnt_EEXV_TempElctrFlt_FailCnt = 50U;
              /* Referenced by: '<S357>/KeVLDR_Cnt_EEXV_TempElctrFlt_FailCnt' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(uint16, VLDR_VAR_INIT) KeVLDR_Cnt_EEXV_TempElctrFlt_SmpCnt
    = 80U;     /* Referenced by: '<S358>/KeVLDR_Cnt_EEXV_TempElctrFlt_SmpCnt' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(uint16, VLDR_VAR_INIT) KeVLDR_Cnt_EXV_Max_Referencing_Time
    = 10U;     /* Referenced by: '<S432>/KeVLDR_Cnt_EXV_Max_Referencing_Time' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(uint16, VLDR_VAR_INIT) KeVLDR_Cnt_EXV_PerfDiag_FailCnt =
    20U;           /* Referenced by: '<S408>/KeVLDR_Cnt_EXV_PerfDiag_FailCnt' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(uint16, VLDR_VAR_INIT) KeVLDR_Cnt_EXV_PerfDiag_SmpCnt =
    40U;            /* Referenced by: '<S409>/KeVLDR_Cnt_EXV_PerfDiag_SmpCnt' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(uint16, VLDR_VAR_INIT) KeVLDR_Cnt_EXV_Position_Wait_Time =
    2U;          /* Referenced by: '<S446>/KeVLDR_Cnt_EXV_Position_Wait_Time' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(uint16, VLDR_VAR_INIT)
    KeVLDR_Cnt_EXV_PressElctrFlt_FailCnt = 50U;
              /* Referenced by: '<S455>/KeVLDR_Cnt_EXV_PressElctrFlt_FailCnt' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(uint16, VLDR_VAR_INIT) KeVLDR_Cnt_EXV_PressElctrFlt_SmpCnt
    = 80U;     /* Referenced by: '<S456>/KeVLDR_Cnt_EXV_PressElctrFlt_SmpCnt' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(uint16, VLDR_VAR_INIT) KeVLDR_Cnt_EXV_PressSens_FailCnt =
    15U;          /* Referenced by: '<S497>/KeVLDR_Cnt_EXV_PressSens_FailCnt' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(uint16, VLDR_VAR_INIT) KeVLDR_Cnt_EXV_PressSens_SmpCnt =
    30U;           /* Referenced by: '<S498>/KeVLDR_Cnt_EXV_PressSens_SmpCnt' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(uint16, VLDR_VAR_INIT) KeVLDR_Cnt_EXV_TempElctrFlt_FailCnt
    = 50U;     /* Referenced by: '<S596>/KeVLDR_Cnt_EXV_TempElctrFlt_FailCnt' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(uint16, VLDR_VAR_INIT) KeVLDR_Cnt_EXV_TempElctrFlt_SmpCnt =
    80U;        /* Referenced by: '<S597>/KeVLDR_Cnt_EXV_TempElctrFlt_SmpCnt' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(uint16, VLDR_VAR_INIT) KeVLDR_Cnt_EXV_TempSens_FailCnt =
    10U;           /* Referenced by: '<S633>/KeVLDR_Cnt_EXV_TempSens_FailCnt' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(uint16, VLDR_VAR_INIT) KeVLDR_Cnt_EXV_TempSens_SmpCnt =
    20U;            /* Referenced by: '<S634>/KeVLDR_Cnt_EXV_TempSens_SmpCnt' */

#endif

#if Rte_SysCon_Variant_VLDR_2

static volatile CONST(uint16, VLDR_VAR_INIT) KeVLDR_Cnt_HTCVLeakErr_FailCnt =
    200U;           /* Referenced by: '<S733>/KeVLDR_Cnt_HTCVLeakErr_FailCnt' */

#endif

#if Rte_SysCon_Variant_VLDR_2

static volatile CONST(uint16, VLDR_VAR_INIT) KeVLDR_Cnt_HTCVLeakErr_SmpCnt =
    300U;            /* Referenced by: '<S734>/KeVLDR_Cnt_HTCVLeakErr_SmpCnt' */

#endif

#if Rte_SysCon_Variant_VLDR_11

static volatile CONST(uint16, VLDR_VAR_INIT) KeVLDR_Cnt_HTL_PerfDiag_FailCnt =
    60U;           /* Referenced by: '<S817>/KeVLDR_Cnt_HTL_PerfDiag_FailCnt' */

#endif

#if Rte_SysCon_Variant_VLDR_11

static volatile CONST(uint16, VLDR_VAR_INIT) KeVLDR_Cnt_HTL_PerfDiag_SmpCnt =
    80U;            /* Referenced by: '<S818>/KeVLDR_Cnt_HTL_PerfDiag_SmpCnt' */

#endif

#if Rte_SysCon_Variant_VLDR_11

static volatile CONST(uint16, VLDR_VAR_INIT) KeVLDR_Cnt_HTL_Position_Wait_Time =
    10U;         /* Referenced by: '<S812>/KeVLDR_Cnt_HTL_Position_Wait_Time' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(uint16, VLDR_VAR_INIT) KeVLDR_Cnt_HTSoV_StkCls_FailCnt =
    180U;          /* Referenced by: '<S880>/KeVLDR_Cnt_HTSoV_StkCls_FailCnt' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(uint16, VLDR_VAR_INIT) KeVLDR_Cnt_HTSoV_StkCls_SmpCnt =
    200U;           /* Referenced by: '<S881>/KeVLDR_Cnt_HTSoV_StkCls_SmpCnt' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(uint16, VLDR_VAR_INIT) KeVLDR_Cnt_HTSoV_StkOpn_FailCnt =
    180U;          /* Referenced by: '<S950>/KeVLDR_Cnt_HTSoV_StkOpn_FailCnt' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(uint16, VLDR_VAR_INIT) KeVLDR_Cnt_HTSoV_StkOpn_SmpCnt =
    200U;           /* Referenced by: '<S951>/KeVLDR_Cnt_HTSoV_StkOpn_SmpCnt' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(uint16, VLDR_VAR_INIT) KeVLDR_Cnt_HoldVehicle_Soak = 250U;
                       /* Referenced by: '<S672>/KeVLDR_Cnt_HoldVehicle_Soak' */

#endif

#if Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_4 || Rte_SysCon_Variant_VLDR_6

static volatile CONST(float32, VLDR_VAR_INIT)
    KeVLDR_Cnt_IUMPR_EXV_presSens_MinConsecCnt_CmdOn = 2.0F;/* Referenced by:
                                                             * '<S1000>/KeVLDR_Cnt_IUMPR_EXV_presSens_MinConsecCnt_CmdOn'
                                                             * '<S1028>/KeVLDR_Cnt_IUMPR_EXV_presSens_MinConsecCnt_CmdOn'
                                                             * '<S1172>/KeVLDR_Cnt_IUMPR_EXV_presSens_MinConsecCnt_CmdOn'
                                                             */

#endif

#if Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_4 || Rte_SysCon_Variant_VLDR_6

static volatile CONST(float32, VLDR_VAR_INIT)
    KeVLDR_Cnt_IUMPR_EXVperf_MinConsecCnt_CmdOn = 2.0F;/* Referenced by:
                                                        * '<S990>/KeVLDR_Cnt_IUMPR_EXVperf_MinConsecCnt_CmdOn'
                                                        * '<S1018>/KeVLDR_Cnt_IUMPR_EXVperf_MinConsecCnt_CmdOn'
                                                        * '<S1161>/KeVLDR_Cnt_IUMPR_EXVperf_MinConsecCnt_CmdOn'
                                                        */

#endif

#if Rte_SysCon_Variant_VLDR_2

static volatile CONST(float32, VLDR_VAR_INIT)
    KeVLDR_Cnt_IUMPR_HTCV_MinConsecCnt_CmdOn = 2.0F;
         /* Referenced by: '<S1042>/KeVLDR_Cnt_IUMPR_HTCV_MinConsecCnt_CmdOn' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(float32, VLDR_VAR_INIT)
    KeVLDR_Cnt_IUMPR_HTSOV_MinConsecCnt_CmdOn = 2.0F;
        /* Referenced by: '<S1082>/KeVLDR_Cnt_IUMPR_HTSOV_MinConsecCnt_CmdOn' */

#endif

#if Rte_SysCon_Variant_VLDR_5

static volatile CONST(float32, VLDR_VAR_INIT)
    KeVLDR_Cnt_IUMPR_LTSOV_StkOff_MinConsecCnt_CmdOn = 2.0F;
/* Referenced by: '<S1136>/KeVLDR_Cnt_IUMPR_LTSOV_StkOff_MinConsecCnt_CmdOn' */

#endif

#if Rte_SysCon_Variant_VLDR_5

static volatile CONST(float32, VLDR_VAR_INIT)
    KeVLDR_Cnt_IUMPR_LTSOV_StkOn_MinConsecCnt_CmdOn = 2.0F;
/* Referenced by: '<S1146>/KeVLDR_Cnt_IUMPR_LTSOV_StkOn_MinConsecCnt_CmdOn' */

#endif

#if Rte_SysCon_Variant_VLDR_10

static volatile CONST(uint16, VLDR_VAR_INIT) KeVLDR_Cnt_LTR_PerfDiag_FailCnt =
    60U;          /* Referenced by: '<S1198>/KeVLDR_Cnt_LTR_PerfDiag_FailCnt' */

#endif

#if Rte_SysCon_Variant_VLDR_10

static volatile CONST(uint16, VLDR_VAR_INIT) KeVLDR_Cnt_LTR_PerfDiag_SmpCnt =
    80U;           /* Referenced by: '<S1199>/KeVLDR_Cnt_LTR_PerfDiag_SmpCnt' */

#endif

#if Rte_SysCon_Variant_VLDR_10

static volatile CONST(uint16, VLDR_VAR_INIT) KeVLDR_Cnt_LTR_Position_Wait_Time =
    10U;        /* Referenced by: '<S1193>/KeVLDR_Cnt_LTR_Position_Wait_Time' */

#endif

#if Rte_SysCon_Variant_VLDR_5

static volatile CONST(uint16, VLDR_VAR_INIT) KeVLDR_Cnt_LTSOV_StkOff_FailCnt =
    100U;         /* Referenced by: '<S1250>/KeVLDR_Cnt_LTSOV_StkOff_FailCnt' */

#endif

#if Rte_SysCon_Variant_VLDR_5

static volatile CONST(uint16, VLDR_VAR_INIT) KeVLDR_Cnt_LTSOV_StkOff_SmpCnt =
    130U;          /* Referenced by: '<S1251>/KeVLDR_Cnt_LTSOV_StkOff_SmpCnt' */

#endif

#if Rte_SysCon_Variant_VLDR_5

static volatile CONST(uint16, VLDR_VAR_INIT) KeVLDR_Cnt_LTSOV_StkOn_FailCnt =
    100U;          /* Referenced by: '<S1297>/KeVLDR_Cnt_LTSOV_StkOn_FailCnt' */

#endif

#if Rte_SysCon_Variant_VLDR_5

static volatile CONST(uint16, VLDR_VAR_INIT) KeVLDR_Cnt_LTSOV_StkOn_SmpCnt =
    130U;           /* Referenced by: '<S1298>/KeVLDR_Cnt_LTSOV_StkOn_SmpCnt' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(uint16, VLDR_VAR_INIT)
    KeVLDR_Cnt_OEXV_Max_Referencing_Time = 10U;
             /* Referenced by: '<S1340>/KeVLDR_Cnt_OEXV_Max_Referencing_Time' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(uint16, VLDR_VAR_INIT) KeVLDR_Cnt_OEXV_PerfDiag_FailCnt =
    20U;         /* Referenced by: '<S1359>/KeVLDR_Cnt_OEXV_PerfDiag_FailCnt' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(uint16, VLDR_VAR_INIT) KeVLDR_Cnt_OEXV_PerfDiag_SmpCnt =
    40U;          /* Referenced by: '<S1360>/KeVLDR_Cnt_OEXV_PerfDiag_SmpCnt' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(uint16, VLDR_VAR_INIT) KeVLDR_Cnt_OEXV_Position_Wait_Time =
    2U;        /* Referenced by: '<S1354>/KeVLDR_Cnt_OEXV_Position_Wait_Time' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(uint16, VLDR_VAR_INIT)
    KeVLDR_Cnt_OEXV_PressElctrFlt_FailCnt = 50U;
            /* Referenced by: '<S1400>/KeVLDR_Cnt_OEXV_PressElctrFlt_FailCnt' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(uint16, VLDR_VAR_INIT)
    KeVLDR_Cnt_OEXV_PressElctrFlt_SmpCnt = 80U;
             /* Referenced by: '<S1401>/KeVLDR_Cnt_OEXV_PressElctrFlt_SmpCnt' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(uint16, VLDR_VAR_INIT) KeVLDR_Cnt_OEXV_PressSens_FailCnt =
    15U;        /* Referenced by: '<S1490>/KeVLDR_Cnt_OEXV_PressSens_FailCnt' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(uint16, VLDR_VAR_INIT) KeVLDR_Cnt_OEXV_PressSens_SmpCnt =
    30U;         /* Referenced by: '<S1491>/KeVLDR_Cnt_OEXV_PressSens_SmpCnt' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(uint16, VLDR_VAR_INIT)
    KeVLDR_Cnt_OEXV_TempElctrFlt_FailCnt = 50U;
             /* Referenced by: '<S1530>/KeVLDR_Cnt_OEXV_TempElctrFlt_FailCnt' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(uint16, VLDR_VAR_INIT) KeVLDR_Cnt_OEXV_TempElctrFlt_SmpCnt
    = 80U;    /* Referenced by: '<S1531>/KeVLDR_Cnt_OEXV_TempElctrFlt_SmpCnt' */

#endif

#if Rte_SysCon_Variant_VLDR_12

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_Pct_BHVVlv_PstnCmnd_Max =
    100.0F;                            /* Referenced by: '<S45>/Calib' */

#endif

#if Rte_SysCon_Variant_VLDR_12

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_Pct_BHVVlv_PstnCmnd_Min =
    100.0F;                            /* Referenced by: '<S46>/Calib' */

#endif

#if Rte_SysCon_Variant_VLDR_12

static volatile CONST(float32, VLDR_VAR_INIT)
    KeVLDR_Pct_BHV_PerfDiag_PstnDiffMax = 15.0F;/* Referenced by: '<S54>/Calib' */

#endif

#if Rte_SysCon_Variant_VLDR_15

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_Pct_CPV2Vlv_PstnCmnd_Max =
    95.0F;                             /* Referenced by: '<S81>/Calib' */

#endif

#if Rte_SysCon_Variant_VLDR_15

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_Pct_CPV2Vlv_PstnCmnd_Min =
    5.0F;                              /* Referenced by: '<S82>/Calib' */

#endif

#if Rte_SysCon_Variant_VLDR_15

static volatile CONST(float32, VLDR_VAR_INIT)
    KeVLDR_Pct_CPV2_PerfDiag_PstnDiffMax = 15.0F;
                /* Referenced by: '<S88>/KeVLDR_Pct_CPV_PerfDiag_PstnDiffMax' */

#endif

#if Rte_SysCon_Variant_VLDR_8

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_Pct_CPVVlv_PstnCmnd_Max =
    100.0F;         /* Referenced by: '<S123>/KeVLDR_Pct_CPVVlv_PstnCmnd_Max' */

#endif

#if Rte_SysCon_Variant_VLDR_8

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_Pct_CPVVlv_PstnCmnd_Min =
    0.0F;           /* Referenced by: '<S124>/KeVLDR_Pct_CPVVlv_PstnCmnd_Min' */

#endif

#if Rte_SysCon_Variant_VLDR_8

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_Pct_CPV_DltCmdSpd = 10.0F;
                          /* Referenced by: '<S125>/KeVLDR_Pct_CPV_DltCmdSpd' */

#endif

#if Rte_SysCon_Variant_VLDR_8

static volatile CONST(float32, VLDR_VAR_INIT)
    KeVLDR_Pct_CPV_PerfDiag_PstnDiffMax = 15.0F;
               /* Referenced by: '<S152>/KeVLDR_Pct_CPV_PerfDiag_PstnDiffMax' */

#endif

#if Rte_SysCon_Variant_VLDR_2

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_Pct_CabVlvErrLim = 35.0F;
                           /* Referenced by: '<S755>/KeVLDR_Pct_CabVlvErrLim' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_Pct_EEXV_Max_PosRq = 95.0F;
                         /* Referenced by: '<S202>/KeVLDR_Pct_EEXV_Max_PosRq' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_Pct_EEXV_Min_PosRq = 5.0F;
                         /* Referenced by: '<S203>/KeVLDR_Pct_EEXV_Min_PosRq' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(float32, VLDR_VAR_INIT)
    KeVLDR_Pct_EEXV_PerfDiag_PstnDiffMax = 15.0F;
              /* Referenced by: '<S216>/KeVLDR_Pct_EEXV_PerfDiag_PstnDiffMax' */

#endif

#if Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_4 || Rte_SysCon_Variant_VLDR_6

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_Pct_EXV_Max_PosRq = 95.0F;/* Referenced by:
                                                                      * '<S433>/KeVLDR_Pct_EXV_Max_PosRq'
                                                                      * '<S987>/KeVLDR_Pct_EXV_Max_PosRq'
                                                                      * '<S1015>/KeVLDR_Pct_EXV_Max_PosRq'
                                                                      * '<S1164>/KeVLDR_Pct_EXV_Max_PosRq'
                                                                      */

#endif

#if Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_4 || Rte_SysCon_Variant_VLDR_6

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_Pct_EXV_Min_PosRq = 5.0F;/* Referenced by:
                                                                      * '<S434>/KeVLDR_Pct_EXV_Min_PosRq'
                                                                      * '<S988>/KeVLDR_Pct_EXV_Min_PosRq'
                                                                      * '<S1016>/KeVLDR_Pct_EXV_Min_PosRq'
                                                                      * '<S1165>/KeVLDR_Pct_EXV_Min_PosRq'
                                                                      */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(float32, VLDR_VAR_INIT)
    KeVLDR_Pct_EXV_PerfDiag_PstnDiffMax = 15.0F;
               /* Referenced by: '<S447>/KeVLDR_Pct_EXV_PerfDiag_PstnDiffMax' */

#endif

#if Rte_SysCon_Variant_VLDR_2

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_Pct_HTCV_Cls_Cmd = 50.0F;
                           /* Referenced by: '<S762>/KeVLDR_Pct_HTCV_Cls_Cmd' */

#endif

#if Rte_SysCon_Variant_VLDR_2

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_Pct_HTCV_Open_Cmd = 50.0F;
                          /* Referenced by: '<S763>/KeVLDR_Pct_HTCV_Open_Cmd' */

#endif

#if Rte_SysCon_Variant_VLDR_2

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_Pct_HTCV_Open_Pos = 101.0F;
                          /* Referenced by: '<S727>/KeVLDR_Pct_HTCV_Open_Pos' */

#endif

#if Rte_SysCon_Variant_VLDR_11

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_Pct_HTLVlv_PstnCmnd_Max =
    100.0F;         /* Referenced by: '<S803>/KeVLDR_Pct_HTLVlv_PstnCmnd_Max' */

#endif

#if Rte_SysCon_Variant_VLDR_11

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_Pct_HTLVlv_PstnCmnd_Min =
    0.0F;           /* Referenced by: '<S804>/KeVLDR_Pct_HTLVlv_PstnCmnd_Min' */

#endif

#if Rte_SysCon_Variant_VLDR_11

static volatile CONST(float32, VLDR_VAR_INIT)
    KeVLDR_Pct_HTL_PerfDiag_PstnDiffMax = 5.0F;
               /* Referenced by: '<S813>/KeVLDR_Pct_HTL_PerfDiag_PstnDiffMax' */

#endif

#if Rte_SysCon_Variant_VLDR_2

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_Pct_IUMPR_HTCV_Stop_PWM =
    50.0F;         /* Referenced by: '<S1045>/KeVLDR_Pct_IUMPR_HTCV_Stop_PWM' */

#endif

#if Rte_SysCon_Variant_VLDR_2

static volatile CONST(float32, VLDR_VAR_INIT)
    KeVLDR_Pct_IUMPR_HTCV_TwrdsBatt_PWM = 25.0F;
              /* Referenced by: '<S1046>/KeVLDR_Pct_IUMPR_HTCV_TwrdsBatt_PWM' */

#endif

#if Rte_SysCon_Variant_VLDR_2

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_Pct_IUMPR_HTCV_TwrdsCab_PWM
    = 75.0F;   /* Referenced by: '<S1047>/KeVLDR_Pct_IUMPR_HTCV_TwrdsCab_PWM' */

#endif

#if Rte_SysCon_Variant_VLDR_10

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_Pct_LTRVlv_PstnCmnd_Max =
    100.0F;        /* Referenced by: '<S1184>/KeVLDR_Pct_LTRVlv_PstnCmnd_Max' */

#endif

#if Rte_SysCon_Variant_VLDR_10

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_Pct_LTRVlv_PstnCmnd_Min =
    0.0F;          /* Referenced by: '<S1185>/KeVLDR_Pct_LTRVlv_PstnCmnd_Min' */

#endif

#if Rte_SysCon_Variant_VLDR_10

static volatile CONST(float32, VLDR_VAR_INIT)
    KeVLDR_Pct_LTR_PerfDiag_PstnDiffMax = 5.0F;
              /* Referenced by: '<S1194>/KeVLDR_Pct_LTR_PerfDiag_PstnDiffMax' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_Pct_OEXV_Max_PosRq = 95.0F;
                        /* Referenced by: '<S1341>/KeVLDR_Pct_OEXV_Max_PosRq' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_Pct_OEXV_Min_PosRq = 5.0F;
                        /* Referenced by: '<S1342>/KeVLDR_Pct_OEXV_Min_PosRq' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(float32, VLDR_VAR_INIT)
    KeVLDR_Pct_OEXV_PerfDiag_PstnDiffMax = 15.0F;
             /* Referenced by: '<S1355>/KeVLDR_Pct_OEXV_PerfDiag_PstnDiffMax' */

#endif

#if Rte_SysCon_Variant_VLDR_5

static volatile CONST(float32, VLDR_VAR_INIT)
    KeVLDR_T_BTIS_ClntTmp_StkOff_DiffLim = 25.0F;
             /* Referenced by: '<S1249>/KeVLDR_T_BTIS_ClntTmp_StkOff_DiffLim' */

#endif

#if Rte_SysCon_Variant_VLDR_5

static volatile CONST(float32, VLDR_VAR_INIT)
    KeVLDR_T_BTIS_ClntTmp_StkOn_DiffLim = 5.0F;
              /* Referenced by: '<S1296>/KeVLDR_T_BTIS_ClntTmp_StkOn_DiffLim' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_T_CloseValve_DiffLim = 5.0F;
                       /* Referenced by: '<S878>/KeVLDR_T_CloseValve_DiffLim' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_T_ECT_Diff = 1.0F;
                                 /* Referenced by: '<S934>/KeVLDR_T_ECT_Diff' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_T_EXVRefTemp_BTIS2_TmpLim =
    5.0F;         /* Referenced by: '<S689>/KeVLDR_T_EXVRefTemp_BTIS2_TmpLim' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_T_EXVRefTemp_BTIS_TmpLim =
    5.0F;          /* Referenced by: '<S690>/KeVLDR_T_EXVRefTemp_BTIS_TmpLim' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_T_EXVRefTemp_BTOS2_TmpLim =
    5.0F;         /* Referenced by: '<S691>/KeVLDR_T_EXVRefTemp_BTOS2_TmpLim' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_T_EXVRefTemp_BTOS_TmpLim =
    5.0F;          /* Referenced by: '<S692>/KeVLDR_T_EXVRefTemp_BTOS_TmpLim' */

#endif

#if (Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_12 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_15 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_4 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8)

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_T_EngCoolantTemp_Dial =
    0.0F;            /* Referenced by: '<S1549>/KeVLDR_T_EngCoolantTemp_Dial' */

#endif

#if Rte_SysCon_Variant_VLDR_2

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_T_HTCV_Leak_Err_Lim = 2.0F;
                        /* Referenced by: '<S718>/KeVLDR_T_HTCV_Leak_Err_Lim' */

#endif

#if Rte_SysCon_Variant_VLDR_5

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_T_PECTOS_PPCTIS_Delta =
    5.0F;            /* Referenced by: '<S1316>/KeVLDR_T_PECTOS_PPCTIS_Delta' */

#endif

#if (Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_12 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_15 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_4 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8)

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_U_BF1_SysVolt_Dial = 0.0F;
                        /* Referenced by: '<S1550>/KeVLDR_U_BF1_SysVolt_Dial' */

#endif

#if (Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_12 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_15 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_4 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8)

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_U_BattVltg_D = 13.0F;
                              /* Referenced by: '<S1551>/KeVLDR_U_BattVltg_D' */

#endif

#if Rte_SysCon_Variant_VLDR_8

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_U_CPV_MaxBattVltg_Alw =
    16.0F;            /* Referenced by: '<S126>/KeVLDR_U_CPV_MaxBattVltg_Alw' */

#endif

#if Rte_SysCon_Variant_VLDR_8

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_U_CPV_MinBattVltg_Alw =
    10.0F;            /* Referenced by: '<S127>/KeVLDR_U_CPV_MinBattVltg_Alw' */

#endif

#if Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_3 || Rte_SysCon_Variant_VLDR_4 || Rte_SysCon_Variant_VLDR_5 || Rte_SysCon_Variant_VLDR_6

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_U_SysVltLwrLim = 9.0F;/* Referenced by:
                                                                      * '<S1236>/KeVLDR_U_SysVltLwrLim'
                                                                      * '<S1282>/KeVLDR_U_SysVltLwrLim'
                                                                      * '<S204>/KeVLDR_U_SysVltLwrLim'
                                                                      * '<S250>/KeVLDR_U_SysVltLwrLim'
                                                                      * '<S310>/KeVLDR_U_SysVltLwrLim'
                                                                      * '<S381>/KeVLDR_U_SysVltLwrLim'
                                                                      * '<S435>/KeVLDR_U_SysVltLwrLim'
                                                                      * '<S480>/KeVLDR_U_SysVltLwrLim'
                                                                      * '<S545>/KeVLDR_U_SysVltLwrLim'
                                                                      * '<S619>/KeVLDR_U_SysVltLwrLim'
                                                                      * '<S673>/KeVLDR_U_SysVltLwrLim'
                                                                      * '<S859>/KeVLDR_U_SysVltLwrLim'
                                                                      * '<S909>/KeVLDR_U_SysVltLwrLim'
                                                                      * '<S1343>/KeVLDR_U_SysVltLwrLim'
                                                                      * '<S1388>/KeVLDR_U_SysVltLwrLim'
                                                                      * '<S1448>/KeVLDR_U_SysVltLwrLim'
                                                                      * '<S1519>/KeVLDR_U_SysVltLwrLim'
                                                                      */

#endif

#if Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_3 || Rte_SysCon_Variant_VLDR_4 || Rte_SysCon_Variant_VLDR_5 || Rte_SysCon_Variant_VLDR_6

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_U_SysVltUprLim = 16.0F;/* Referenced by:
                                                                      * '<S1237>/KeVLDR_U_SysVltUprLim'
                                                                      * '<S1283>/KeVLDR_U_SysVltUprLim'
                                                                      * '<S205>/KeVLDR_U_SysVltUprLim'
                                                                      * '<S251>/KeVLDR_U_SysVltUprLim'
                                                                      * '<S311>/KeVLDR_U_SysVltUprLim'
                                                                      * '<S382>/KeVLDR_U_SysVltUprLim'
                                                                      * '<S436>/KeVLDR_U_SysVltUprLim'
                                                                      * '<S481>/KeVLDR_U_SysVltUprLim'
                                                                      * '<S546>/KeVLDR_U_SysVltUprLim'
                                                                      * '<S620>/KeVLDR_U_SysVltUprLim'
                                                                      * '<S674>/KeVLDR_U_SysVltUprLim'
                                                                      * '<S860>/KeVLDR_U_SysVltUprLim'
                                                                      * '<S910>/KeVLDR_U_SysVltUprLim'
                                                                      * '<S1344>/KeVLDR_U_SysVltUprLim'
                                                                      * '<S1389>/KeVLDR_U_SysVltUprLim'
                                                                      * '<S1449>/KeVLDR_U_SysVltUprLim'
                                                                      * '<S1520>/KeVLDR_U_SysVltUprLim'
                                                                      */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_W_HVC_HtrPwrLimit_Min =
    5000.0F;          /* Referenced by: '<S911>/KeVLDR_W_HVC_HtrPwrLimit_Min' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_AC_RefrigExpVlvActCtrCktPerf_LtchEnbl = 0;/* Referenced by: '<S410>/Calib' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_AC_RefrigExpVlvActD_CntrlCktPerf_LtchEnbl = 0;/* Referenced by: '<S1361>/Calib' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_AC_RefrigExpVlvAct_C_CntrlCktPerf_LtchEnbl = 0;/* Referenced by: '<S178>/Calib' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_AC_RefrigPresSnsrCCktPerf_LtchEnbl = 0;/* Referenced by: '<S269>/Calib' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_AC_RefrigPresSnsrCCkt_LtchEnbl = 0;/* Referenced by: '<S226>/Calib' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_AC_RefrigPresSnsrDCktPerf_LtchEnbl = 0;/* Referenced by: '<S1492>/Calib' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_AC_RefrigPresSnsrDCkt_LtchEnbl = 0;/* Referenced by: '<S1402>/Calib' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_AC_RefrigTempSnsrACkt_LtchEnbl = 0;/* Referenced by: '<S598>/Calib' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_AC_RefrigTempSnsrAPerf_LtchEnbl = 0;/* Referenced by: '<S635>/Calib' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_AC_RefrigTempSnsrBCkt_LtchEnbl = 0;/* Referenced by: '<S457>/Calib' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_AC_RefrigTempSnsrBPerf_LtchEnbl = 0;/* Referenced by: '<S499>/Calib' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_AC_RefrigTempSnsrCCkt_LtchEnbl = 0;/* Referenced by: '<S359>/Calib' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_AC_RefrigTempSnsrDCkt_LtchEnbl = 0;/* Referenced by: '<S1532>/Calib' */

#endif

#if (Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_12 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_15 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_4 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8)

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_BF1_SysVolt_SD = 0;
                          /* Referenced by: '<S1552>/KeVLDR_b_BF1_SysVolt_SD' */

#endif

#if Rte_SysCon_Variant_VLDR_12

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_BHV_DiagPerfCndsOV_En = 1;/* Referenced by: '<S48>/Calib' */

#endif

#if Rte_SysCon_Variant_VLDR_12

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_BHV_PerfDiag_XYEnbl = 1;/* Referenced by: '<S25>/Calib' */

#endif

#if Rte_SysCon_Variant_VLDR_12

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_BHV_PosActFA_Enbl = 0;
                         /* Referenced by: '<S53>/KeVLDR_b_CPV_PosActFA_Enbl' */

#endif

#if (Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_12 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_15 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_4 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8)

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_BPCM_LIN_BusOff_FA_D = 1;
                    /* Referenced by: '<S1553>/KeVLDR_b_BPCM_LIN_BusOff_FA_D' */

#endif

#if (Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_12 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_15 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_4 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8)

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_BPCM_LIN_BusOff_FA_SD = 1;
                   /* Referenced by: '<S1554>/KeVLDR_b_BPCM_LIN_BusOff_FA_SD' */

#endif

#if (Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_12 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_15 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_4 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8)

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_BPCM_LIN_BusOff_SD = 1;
                      /* Referenced by: '<S1555>/KeVLDR_b_BPCM_LIN_BusOff_SD' */

#endif

#if (Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_12 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_15 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_4 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8)

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_BPCM_LIN_BusOff_SgnlRcvd_D = 1;
              /* Referenced by: '<S1556>/KeVLDR_b_BPCM_LIN_BusOff_SgnlRcvd_D' */

#endif

#if (Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_12 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_15 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_4 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8)

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_BPCM_LIN_BusOff_SgnlRcvd_SD = 1;
             /* Referenced by: '<S1557>/KeVLDR_b_BPCM_LIN_BusOff_SgnlRcvd_SD' */

#endif

#if (Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_12 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_15 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_4 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8)

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_BPCM_LOC_BCP_FA_D = 1;
                       /* Referenced by: '<S1558>/KeVLDR_b_BPCM_LOC_BCP_FA_D' */

#endif

#if (Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_12 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_15 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_4 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8)

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_BPCM_LOC_BCP_FA_SD = 1;
                      /* Referenced by: '<S1559>/KeVLDR_b_BPCM_LOC_BCP_FA_SD' */

#endif

#if (Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_12 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_15 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_4 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8)

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_BPCM_LOC_BCP_SD = 1;
                         /* Referenced by: '<S1560>/KeVLDR_b_BPCM_LOC_BCP_SD' */

#endif

#if (Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_12 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_15 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_4 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8)

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_BPCM_LOC_BCP_SgnlRcvd_D =
    1;           /* Referenced by: '<S1561>/KeVLDR_b_BPCM_LOC_BCP_SgnlRcvd_D' */

#endif

#if (Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_12 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_15 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_4 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8)

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_BPCM_LOC_BCP_SgnlRcvd_SD =
    1;          /* Referenced by: '<S1562>/KeVLDR_b_BPCM_LOC_BCP_SgnlRcvd_SD' */

#endif

#if (Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_12 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_15 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_4 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8)

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_BattVltg_SD = 0;
                             /* Referenced by: '<S1563>/KeVLDR_b_BattVltg_SD' */

#endif

#if Rte_SysCon_Variant_VLDR_15

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_CPV2_PerfDiag_CalSts_Ovrd
    = 0;          /* Referenced by: '<S83>/KeVLDR_b_CPV_PerfDiag_CalSts_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_15

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_CPV2_PerfDiag_Fail_D = 0;
                       /* Referenced by: '<S89>/KeVLDR_b_CPV_PerfDiag_Fail_D' */

#endif

#if Rte_SysCon_Variant_VLDR_15

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_CPV2_PerfDiag_Fail_SD = 0;
                      /* Referenced by: '<S90>/KeVLDR_b_CPV_PerfDiag_Fail_SD' */

#endif

#if Rte_SysCon_Variant_VLDR_8

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_CPV_DiagPerfCndsOV_En = 1;/* Referenced by: '<S147>/Calib' */

#endif

#if Rte_SysCon_Variant_VLDR_8

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_CPV_PerfDiag_BattVltg_Ovrd = 0;
               /* Referenced by: '<S128>/KeVLDR_b_CPV_PerfDiag_BattVltg_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_8

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_CPV_PerfDiag_CalSts_Ovrd =
    0;           /* Referenced by: '<S129>/KeVLDR_b_CPV_PerfDiag_CalSts_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_8

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_CPV_PerfDiag_DtlCmdSpd_Ovrd = 0;
              /* Referenced by: '<S130>/KeVLDR_b_CPV_PerfDiag_DtlCmdSpd_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_8

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_CPV_PerfDiag_Enbl_D = 0;
                      /* Referenced by: '<S131>/KeVLDR_b_CPV_PerfDiag_Enbl_D' */

#endif

#if Rte_SysCon_Variant_VLDR_8

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_CPV_PerfDiag_Enbl_SD = 0;
                     /* Referenced by: '<S132>/KeVLDR_b_CPV_PerfDiag_Enbl_SD' */

#endif

#if Rte_SysCon_Variant_VLDR_8

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_CPV_PerfDiag_Fail_D = 0;
                      /* Referenced by: '<S153>/KeVLDR_b_CPV_PerfDiag_Fail_D' */

#endif

#if Rte_SysCon_Variant_VLDR_8

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_CPV_PerfDiag_Fail_SD = 0;
                     /* Referenced by: '<S154>/KeVLDR_b_CPV_PerfDiag_Fail_SD' */

#endif

#if !Rte_SysCon_Variant_VLDR_13 && Rte_SysCon_Variant_VLDR_8

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_CPV_PerfDiag_LINBusOff_Ovrd = 0;
              /* Referenced by: '<S133>/KeVLDR_b_CPV_PerfDiag_LINBusOff_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_8

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_CPV_PerfDiag_LOC_Ovrd = 0;
                    /* Referenced by: '<S134>/KeVLDR_b_CPV_PerfDiag_LOC_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_10 || Rte_SysCon_Variant_VLDR_11 || Rte_SysCon_Variant_VLDR_12 || Rte_SysCon_Variant_VLDR_15 || Rte_SysCon_Variant_VLDR_8

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_CPV_PerfDiag_MainRly_Ovrd
    = 0;        /* Referenced by: '<S159>/KeVLDR_b_CPV_PerfDiag_MainRly_Ovrd' */

#endif

#if !Rte_SysCon_Variant_VLDR_13 && Rte_SysCon_Variant_VLDR_8

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_CPV_PerfDiag_OV_Ovrd = 0;
                     /* Referenced by: '<S135>/KeVLDR_b_CPV_PerfDiag_OV_Ovrd' */

#endif

#if !Rte_SysCon_Variant_VLDR_13 && Rte_SysCon_Variant_VLDR_8

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_CPV_PerfDiag_PstnSNA_Ovrd
    = 0;        /* Referenced by: '<S136>/KeVLDR_b_CPV_PerfDiag_PstnSNA_Ovrd' */

#endif

#if !Rte_SysCon_Variant_VLDR_13 && Rte_SysCon_Variant_VLDR_8

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_CPV_PerfDiag_PstnSv_Ovrd =
    1;           /* Referenced by: '<S137>/KeVLDR_b_CPV_PerfDiag_PstnSv_Ovrd' */

#endif

#if !Rte_SysCon_Variant_VLDR_13 && Rte_SysCon_Variant_VLDR_8

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_CPV_PerfDiag_RsErr_Ovrd =
    0;            /* Referenced by: '<S138>/KeVLDR_b_CPV_PerfDiag_RsErr_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_8

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_CPV_PerfDiag_SysVolt_Ovrd
    = 0;        /* Referenced by: '<S139>/KeVLDR_b_CPV_PerfDiag_SysVolt_Ovrd' */

#endif

#if !Rte_SysCon_Variant_VLDR_13 && Rte_SysCon_Variant_VLDR_8

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_CPV_PerfDiag_TW_Ovrd = 0;
                     /* Referenced by: '<S140>/KeVLDR_b_CPV_PerfDiag_TW_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_10 || Rte_SysCon_Variant_VLDR_11 || Rte_SysCon_Variant_VLDR_12 || Rte_SysCon_Variant_VLDR_15 || Rte_SysCon_Variant_VLDR_8

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_CPV_PerfDiag_ThrmlDvcEnbl_Ovrd = 0;
           /* Referenced by: '<S160>/KeVLDR_b_CPV_PerfDiag_ThrmlDvcEnbl_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_8

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_CPV_PerfDiag_ThrmlRlyErr_Ovrd = 0;
            /* Referenced by: '<S141>/KeVLDR_b_CPV_PerfDiag_ThrmlRlyErr_Ovrd' */

#endif

#if !Rte_SysCon_Variant_VLDR_13 && Rte_SysCon_Variant_VLDR_8

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_CPV_PerfDiag_UV_Ovrd = 0;
                     /* Referenced by: '<S142>/KeVLDR_b_CPV_PerfDiag_UV_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_8

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_CPV_PosActFA_Enbl = 0;/* Referenced by:
                                                                      * '<S143>/KeVLDR_b_CPV_PosActFA_Enbl'
                                                                      * '<S155>/KeVLDR_b_CPV_PosActFA_Enbl'
                                                                      */

#endif

#if Rte_SysCon_Variant_VLDR_2

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_CabVlvOpeng_Err_Flt = 1;
                      /* Referenced by: '<S775>/KeVLDR_b_CabVlvOpeng_Err_Flt' */

#endif

#if Rte_SysCon_Variant_VLDR_2

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_CabVlvOpeng_Err_XYEnbl =
    1;             /* Referenced by: '<S776>/KeVLDR_b_CabVlvOpeng_Err_XYEnbl' */

#endif

#if Rte_SysCon_Variant_VLDR_2

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_ChangeVlvCmd_Ovrd = 0;
                        /* Referenced by: '<S764>/KeVLDR_b_ChangeVlvCmd_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_2

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_CoolantVlvA_FdbkCktHi_D =
    0;            /* Referenced by: '<S765>/KeVLDR_b_CoolantVlvA_FdbkCktHi_D' */

#endif

#if Rte_SysCon_Variant_VLDR_2

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_CoolantVlvA_FdbkCktLo_D =
    0;            /* Referenced by: '<S766>/KeVLDR_b_CoolantVlvA_FdbkCktLo_D' */

#endif

#if Rte_SysCon_Variant_VLDR_2

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_CoolantVlvA_Perf_LtchEnbl
    = 0;                               /* Referenced by: '<S777>/Calib' */

#endif

#if Rte_SysCon_Variant_VLDR_2

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_CoolantVlvA_StkOpn_LtchEnbl = 0;/* Referenced by: '<S735>/Calib' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_CoolantVlvB_StkClsd_LtchEnbl = 0;/* Referenced by: '<S882>/Calib' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_CoolantVlvB_StkOpn_LtchEnbl = 0;/* Referenced by: '<S952>/Calib' */

#endif

#if (Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_12 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_15 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_4 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8)

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_DsblDiagFailSafe_D = 0;
                      /* Referenced by: '<S1564>/KeVLDR_b_DsblDiagFailSafe_D' */

#endif

#if (Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_12 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_15 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_4 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8)

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_DsblDiagFailSafe_SD = 0;
                     /* Referenced by: '<S1565>/KeVLDR_b_DsblDiagFailSafe_SD' */

#endif

#if (Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_12 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_15 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_4 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8)

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_ECT_Sgnl_Rcvd_Dial = 0;
                      /* Referenced by: '<S1566>/KeVLDR_b_ECT_Sgnl_Rcvd_Dial' */

#endif

#if (Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_12 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_15 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_4 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8)

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_ECT_Sgnl_Rcvd_SD = 0;
                        /* Referenced by: '<S1567>/KeVLDR_b_ECT_Sgnl_Rcvd_SD' */

#endif

#if (Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_12 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_15 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_4 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8)

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_ECT_SnsrFA_Dial = 0;
                         /* Referenced by: '<S1568>/KeVLDR_b_ECT_SnsrFA_Dial' */

#endif

#if (Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_12 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_15 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_4 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8)

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_ECT_SnsrFA_SD = 0;
                           /* Referenced by: '<S1569>/KeVLDR_b_ECT_SnsrFA_SD' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_EEXV_AccelCheckEnbl = 1;
                      /* Referenced by: '<S312>/KeVLDR_b_EEXV_AccelCheckEnbl' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_EEXV_ActCool_Disbl = 1;
                       /* Referenced by: '<S313>/KeVLDR_b_EEXV_ActCool_Disbl' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_EEXV_CheckEnbl = 1;
                           /* Referenced by: '<S314>/KeVLDR_b_EEXV_CheckEnbl' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_EEXV_CmpSpd_Disbl = 0;
                        /* Referenced by: '<S315>/KeVLDR_b_EEXV_CmpSpd_Disbl' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_EEXV_PerfDiag_LIN1BusOff_Ovrd = 1;
            /* Referenced by: '<S206>/KeVLDR_b_EEXV_PerfDiag_LIN1BusOff_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_EEXV_PerfDiag_LOC_Ovrd =
    1;             /* Referenced by: '<S207>/KeVLDR_b_EEXV_PerfDiag_LOC_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_EEXV_PerfDiag_ThrmlRlyErr_Ovrd = 1;
           /* Referenced by: '<S208>/KeVLDR_b_EEXV_PerfDiag_ThrmlRlyErr_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_EEXV_PosActFA_Enbl = 1;
                       /* Referenced by: '<S217>/KeVLDR_b_EEXV_PosActFA_Enbl' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_EEXV_PrefDiagPerfCndsOV_En = 1;/* Referenced by: '<S210>/Calib' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_EEXV_PressElctrDiag_LIN1BusOff_Ovrd = 0;
      /* Referenced by: '<S252>/KeVLDR_b_EEXV_PressElctrDiag_LIN1BusOff_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_EEXV_PressElctrDiag_LOC_Ovrd = 0;
             /* Referenced by: '<S253>/KeVLDR_b_EEXV_PressElctrDiag_LOC_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_EEXV_PressElctrDiag_PressSens_Ovrd = 1;
       /* Referenced by: '<S254>/KeVLDR_b_EEXV_PressElctrDiag_PressSens_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_EEXV_PressElctrDiag_ThrmlRlyErr_Ovrd = 0;
     /* Referenced by: '<S255>/KeVLDR_b_EEXV_PressElctrDiag_ThrmlRlyErr_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_EEXV_PressElctrFlt_XYEnbl
    = 1;        /* Referenced by: '<S227>/KeVLDR_b_EEXV_PressElctrFlt_XYEnbl' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_EEXV_PressSensRatPerfCndsOV_En = 1;/* Referenced by: '<S338>/Calib' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_EEXV_PressSens_EACPerf_Ovrd = 1;
              /* Referenced by: '<S316>/KeVLDR_b_EEXV_PressSens_EACPerf_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_EEXV_PressSens_LIN1BusOff_Ovrd = 1;
           /* Referenced by: '<S317>/KeVLDR_b_EEXV_PressSens_LIN1BusOff_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_EEXV_PressSens_LOC_Ovrd =
    1;            /* Referenced by: '<S318>/KeVLDR_b_EEXV_PressSens_LOC_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_EEXV_PressSens_LostCommEAC_Ovrd = 1;
          /* Referenced by: '<S319>/KeVLDR_b_EEXV_PressSens_LostCommEAC_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_EEXV_PressSens_PerfDiag_Ovrd = 1;
             /* Referenced by: '<S320>/KeVLDR_b_EEXV_PressSens_PerfDiag_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_EEXV_PressSens_PressElctrFlt_Ovrd = 1;
        /* Referenced by: '<S321>/KeVLDR_b_EEXV_PressSens_PressElctrFlt_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_EEXV_PressSens_PressSensAFlts_Ovrd = 1;
       /* Referenced by: '<S322>/KeVLDR_b_EEXV_PressSens_PressSensAFlts_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_EEXV_PressSens_Saturation_Enb = 0;
            /* Referenced by: '<S347>/KeVLDR_b_EEXV_PressSens_Saturation_Enb' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_EEXV_PressSens_TempElctrFlt_Ovrd = 1;
         /* Referenced by: '<S323>/KeVLDR_b_EEXV_PressSens_TempElctrFlt_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_EEXV_PressSens_TempSens_Ovrd = 1;
             /* Referenced by: '<S324>/KeVLDR_b_EEXV_PressSens_TempSens_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_EEXV_PressSens_ThrmlRlyErr_Ovrd = 1;
          /* Referenced by: '<S325>/KeVLDR_b_EEXV_PressSens_ThrmlRlyErr_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_EEXV_PressSens_XYEnbl = 1;
                    /* Referenced by: '<S270>/KeVLDR_b_EEXV_PressSens_XYEnbl' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_EEXV_Press_Delta_Enb = 1;
                     /* Referenced by: '<S348>/KeVLDR_b_EEXV_Press_Delta_Enb' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_EEXV_RefPressFA_Enbl = 1;
                     /* Referenced by: '<S349>/KeVLDR_b_EEXV_RefPressFA_Enbl' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_EEXV_TempElctrDiag_LIN1BusOff_Ovrd = 0;
       /* Referenced by: '<S383>/KeVLDR_b_EEXV_TempElctrDiag_LIN1BusOff_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_EEXV_TempElctrDiag_LOC_Ovrd = 0;
              /* Referenced by: '<S384>/KeVLDR_b_EEXV_TempElctrDiag_LOC_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_EEXV_TempElctrDiag_TempSens_Ovrd = 1;
         /* Referenced by: '<S385>/KeVLDR_b_EEXV_TempElctrDiag_TempSens_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_EEXV_TempElctrDiag_ThrmlRlyErr_Ovrd = 0;
      /* Referenced by: '<S386>/KeVLDR_b_EEXV_TempElctrDiag_ThrmlRlyErr_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_EEXV_TempElctrFlt_XYEnbl =
    1;           /* Referenced by: '<S360>/KeVLDR_b_EEXV_TempElctrFlt_XYEnbl' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_EXV_AccelCheckEnbl = 1;
                       /* Referenced by: '<S547>/KeVLDR_b_EXV_AccelCheckEnbl' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_EXV_ActCool_Disbl = 1;
                        /* Referenced by: '<S548>/KeVLDR_b_EXV_ActCool_Disbl' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_EXV_BCPCommCheck_Ovrd = 0;/* Referenced by:
                                                                      * '<S577>/Calib'
                                                                      * '<S675>/XeVLDR_b_EXV_CAN11Check_Ovrd'
                                                                      */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_EXV_CheckEnbl = 1;
                            /* Referenced by: '<S549>/KeVLDR_b_EXV_CheckEnbl' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_EXV_CmpSpd_Disbl = 0;
                         /* Referenced by: '<S550>/KeVLDR_b_EXV_CmpSpd_Disbl' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_EXV_PerfDiagPerfCndsOV_En
    = 1;                               /* Referenced by: '<S441>/Calib' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_EXV_PerfDiag_LOC_Ovrd = 1;
                    /* Referenced by: '<S437>/KeVLDR_b_EXV_PerfDiag_LOC_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_EXV_PerfDiag_ThrmlRlyErr_Ovrd = 1;
            /* Referenced by: '<S438>/KeVLDR_b_EXV_PerfDiag_ThrmlRlyErr_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_EXV_PosActFA_Enbl = 1;
                        /* Referenced by: '<S448>/KeVLDR_b_EXV_PosActFA_Enbl' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_EXV_PressElctrDiag_LINBusOff_Ovrd = 1;/* Referenced by:
                                                    * '<S439>/Calib'
                                                    * '<S482>/Calib'
                                                    * '<S551>/Calib'
                                                    * '<S621>/Calib'
                                                    * '<S676>/Calib'
                                                    */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_EXV_PressElctrDiag_LOC_Ovrd = 0;
              /* Referenced by: '<S483>/KeVLDR_b_EXV_PressElctrDiag_LOC_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_EXV_PressElctrDiag_PressSens_Ovrd = 1;
        /* Referenced by: '<S484>/KeVLDR_b_EXV_PressElctrDiag_PressSens_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_EXV_PressElctrDiag_ThrmlRlyErr_Ovrd = 0;
      /* Referenced by: '<S485>/KeVLDR_b_EXV_PressElctrDiag_ThrmlRlyErr_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_EXV_PressElctrFlt_XYEnbl =
    1;           /* Referenced by: '<S458>/KeVLDR_b_EXV_PressElctrFlt_XYEnbl' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_EXV_PressSens_BattCoolPmpOveSpd_Ovrd = 1;
     /* Referenced by: '<S552>/KeVLDR_b_EXV_PressSens_BattCoolPmpOveSpd_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_EXV_PressSens_BattCoolPmpPerf_Ovrd = 1;
       /* Referenced by: '<S553>/KeVLDR_b_EXV_PressSens_BattCoolPmpPerf_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_EXV_PressSens_EACPerf_Ovrd = 1;
               /* Referenced by: '<S554>/KeVLDR_b_EXV_PressSens_EACPerf_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_EXV_PressSens_LOC_Ovrd =
    1;             /* Referenced by: '<S555>/KeVLDR_b_EXV_PressSens_LOC_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_EXV_PressSens_LTAP_LIN_Valid_OV = 1;
          /* Referenced by: '<S556>/KeVLDR_b_EXV_PressSens_LTAP_LIN_Valid_OV' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_EXV_PressSens_LTAP_LOC_Dtct_OV = 1;
           /* Referenced by: '<S557>/KeVLDR_b_EXV_PressSens_LTAP_LOC_Dtct_OV' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_EXV_PressSens_LostCommEAC_Ovrd = 1;
           /* Referenced by: '<S558>/KeVLDR_b_EXV_PressSens_LostCommEAC_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_EXV_PressSens_PerfDiag_Ovrd = 1;
              /* Referenced by: '<S559>/KeVLDR_b_EXV_PressSens_PerfDiag_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_EXV_PressSens_PressElctrFlt_Ovrd = 1;
         /* Referenced by: '<S560>/KeVLDR_b_EXV_PressSens_PressElctrFlt_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_EXV_PressSens_Saturation_Enb = 0;
             /* Referenced by: '<S586>/KeVLDR_b_EXV_PressSens_Saturation_Enb' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_EXV_PressSens_TempElctrFlt_Ovrd = 1;
          /* Referenced by: '<S561>/KeVLDR_b_EXV_PressSens_TempElctrFlt_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_EXV_PressSens_TempSens_Ovrd = 1;
              /* Referenced by: '<S562>/KeVLDR_b_EXV_PressSens_TempSens_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_EXV_PressSens_ThrmlRlyErr_Ovrd = 1;
           /* Referenced by: '<S563>/KeVLDR_b_EXV_PressSens_ThrmlRlyErr_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_EXV_PressSens_XYEnbl = 1;
                     /* Referenced by: '<S500>/KeVLDR_b_EXV_PressSens_XYEnbl' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_EXV_Press_Delta_Enb = 1;
                      /* Referenced by: '<S587>/KeVLDR_b_EXV_Press_Delta_Enb' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_EXV_RefPressFA_Enbl = 1;
                      /* Referenced by: '<S588>/KeVLDR_b_EXV_RefPressFA_Enbl' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_EXV_RefPressPerfCndsOV_En
    = 1;                               /* Referenced by: '<S576>/Calib' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_EXV_RefTempFA_Enbl = 1;
                       /* Referenced by: '<S693>/KeVLDR_b_EXV_RefTempFA_Enbl' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_EXV_TempElctrDiag_LOC_Ovrd = 0;
               /* Referenced by: '<S622>/KeVLDR_b_EXV_TempElctrDiag_LOC_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_EXV_TempElctrDiag_TempSens_Ovrd = 1;
          /* Referenced by: '<S623>/KeVLDR_b_EXV_TempElctrDiag_TempSens_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_EXV_TempElctrDiag_ThrmlRlyErr_Ovrd = 0;
       /* Referenced by: '<S624>/KeVLDR_b_EXV_TempElctrDiag_ThrmlRlyErr_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_EXV_TempElctrFlt_XYEnbl =
    1;            /* Referenced by: '<S599>/KeVLDR_b_EXV_TempElctrFlt_XYEnbl' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_EXV_TempSens_LOC_Ovrd = 1;
                    /* Referenced by: '<S677>/KeVLDR_b_EXV_TempSens_LOC_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_EXV_TempSens_TempElctrFlt_Ovrd = 1;
           /* Referenced by: '<S678>/KeVLDR_b_EXV_TempSens_TempElctrFlt_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_EXV_TempSens_ThrmlRlyErr_Ovrd = 1;
            /* Referenced by: '<S679>/KeVLDR_b_EXV_TempSens_ThrmlRlyErr_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_EXV_TempSens_XYEnbl = 1;
                      /* Referenced by: '<S636>/KeVLDR_b_EXV_TempSens_XYEnbl' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_EXV_TempSensorRatPerfCndsOV_En = 1;/* Referenced by: '<S682>/Calib' */

#endif

#if (Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_12 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_15 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_4 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8)

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_EngCombustionCmnd_D = 0;
                     /* Referenced by: '<S1570>/KeVLDR_b_EngCombustionCmnd_D' */

#endif

#if (Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_12 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_15 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_4 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8)

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_EngCombustionCmnd_SD = 0;
                    /* Referenced by: '<S1571>/KeVLDR_b_EngCombustionCmnd_SD' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_EngCoolantTemp_Fltr_Sel =
    1;            /* Referenced by: '<S935>/KeVLDR_b_EngCoolantTemp_Fltr_Sel' */

#endif

#if (Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_12 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_15 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_4 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8)

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_EngCoolantTemp_SD = 0;
                       /* Referenced by: '<S1572>/KeVLDR_b_EngCoolantTemp_SD' */

#endif

#if Rte_SysCon_Variant_VLDR_12

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_EngCoolbypsVlvDPerf_LtchEnbl = 0;/* Referenced by: '<S24>/Calib' */

#endif

#if (Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_12 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_15 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_4 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8)

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_EngStrtStpMd_SD = 0;
                         /* Referenced by: '<S1573>/KeVLDR_b_EngStrtStpMd_SD' */

#endif

#if Rte_SysCon_Variant_VLDR_8

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_HB_PSC_CtrlValACktPerf_LtchEnbl = 0;/* Referenced by: '<S99>/Calib' */

#endif

#if Rte_SysCon_Variant_VLDR_10

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_HB_PSC_CtrlValBCktPerf_LtchEnbl = 0;/* Referenced by: '<S1200>/Calib' */

#endif

#if Rte_SysCon_Variant_VLDR_11

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_HB_PSC_CtrlValCCktPerf_LtchEnbl = 0;/* Referenced by: '<S819>/Calib' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_HTAuxPmp_MinFlow_ClsEn =
    0;             /* Referenced by: '<S861>/KeVLDR_b_HTAuxPmp_MinFlow_ClsEn' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_HTAuxPmp_MinFlow_OpnEn =
    0;             /* Referenced by: '<S912>/KeVLDR_b_HTAuxPmp_MinFlow_OpnEn' */

#endif

#if Rte_SysCon_Variant_VLDR_2

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_HTCVDiagTmrEn_Ovrd = 0;
                       /* Referenced by: '<S728>/KeVLDR_b_HTCVDiagTmrEn_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_2

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_HTCVLeakErr_Flt = 1;
                          /* Referenced by: '<S736>/KeVLDR_b_HTCVLeakErr_Flt' */

#endif

#if Rte_SysCon_Variant_VLDR_2

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_HTCVLeakErr_XYEnbl = 0;
                       /* Referenced by: '<S737>/KeVLDR_b_HTCVLeakErr_XYEnbl' */

#endif

#if Rte_SysCon_Variant_VLDR_2

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_HTCV_HVBTISFA_Ovrd = 0;
                       /* Referenced by: '<S729>/KeVLDR_b_HTCV_HVBTISFA_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_2

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_HTCV_HVBTOSFA_Ovrd = 0;
                       /* Referenced by: '<S730>/KeVLDR_b_HTCV_HVBTOSFA_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_2

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_HTCV_LTAPTempFA_Ovrd = 0;
                     /* Referenced by: '<S731>/KeVLDR_b_HTCV_LTAPTempFA_Ovrd' */

#endif

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_HTCV_Leak_Enable_D = 0;
                      /* Referenced by: '<S1632>/KeVLDR_b_HTCV_Leak_Enable_D' */
static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_HTCV_Leak_Enable_SD = 0;
                     /* Referenced by: '<S1633>/KeVLDR_b_HTCV_Leak_Enable_SD' */
static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_HTCV_LkEnbl_D = 0;
                           /* Referenced by: '<S1634>/KeVLDR_b_HTCV_LkEnbl_D' */
static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_HTCV_LkEnbl_SD = 0;
                          /* Referenced by: '<S1635>/KeVLDR_b_HTCV_LkEnbl_SD' */
static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_HTCV_Stck_FltDtct_D = 0;
                     /* Referenced by: '<S1630>/KeVLDR_b_HTCV_Stck_FltDtct_D' */
static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_HTCV_Stck_FltDtct_SD = 0;
                    /* Referenced by: '<S1631>/KeVLDR_b_HTCV_Stck_FltDtct_SD' */

#if Rte_SysCon_Variant_VLDR_2

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_HTCabVlvSts_FA_Ovrd = 0;
                      /* Referenced by: '<S767>/KeVLDR_b_HTCabVlvSts_FA_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_11

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_HTL_DiagPerfCndsOV_En = 1;/* Referenced by: '<S809>/Calib' */

#endif

#if Rte_SysCon_Variant_VLDR_11

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_HTL_PerfDiag_LIN3BusOff_Ovrd = 0;
             /* Referenced by: '<S805>/KeVLDR_b_HTL_PerfDiag_LIN3BusOff_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_11

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_HTL_PerfDiag_LOC_Ovrd = 0;
                    /* Referenced by: '<S806>/KeVLDR_b_HTL_PerfDiag_LOC_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_11

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_HTL_PerfDiag_SysVolt_Ovrd
    = 0;        /* Referenced by: '<S807>/KeVLDR_b_HTL_PerfDiag_SysVolt_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_11

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_HTL_PerfDiag_XYEnbl = 1;
                      /* Referenced by: '<S820>/KeVLDR_b_HTL_PerfDiag_XYEnbl' */

#endif

#if Rte_SysCon_Variant_VLDR_11

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_HTL_PosActFA_Enbl = 1;
                        /* Referenced by: '<S814>/KeVLDR_b_HTL_PosActFA_Enbl' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_HTSoV_Close = 1;
                              /* Referenced by: '<S913>/KeVLDR_b_HTSoV_Close' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_HTSoV_Open = 0;
                               /* Referenced by: '<S862>/KeVLDR_b_HTSoV_Open' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_HTSoV_StkCls_BSW_Ckt = 0;
                     /* Referenced by: '<S863>/KeVLDR_b_HTSoV_StkCls_BSW_Ckt' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_HTSoV_StkCls_BSW_CktHi =
    1;             /* Referenced by: '<S864>/KeVLDR_b_HTSoV_StkCls_BSW_CktHi' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_HTSoV_StkCls_BSW_CktLo =
    0;             /* Referenced by: '<S865>/KeVLDR_b_HTSoV_StkCls_BSW_CktLo' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_HTSoV_StkCls_BSW_D = 1;
                       /* Referenced by: '<S866>/KeVLDR_b_HTSoV_StkCls_BSW_D' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_HTSoV_StkCls_BSW_OV = 0;
                      /* Referenced by: '<S867>/KeVLDR_b_HTSoV_StkCls_BSW_OV' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_HTSoV_StkCls_Flt = 1;
                         /* Referenced by: '<S883>/KeVLDR_b_HTSoV_StkCls_Flt' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_HTSoV_StkCls_XYEnbl = 1;
                      /* Referenced by: '<S884>/KeVLDR_b_HTSoV_StkCls_XYEnbl' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_HTSoV_StkClsd_HVC_HtrClntIn_Temp_OR_ECHTIS_Dsbl = 0;
/* Referenced by: '<S868>/KeVLDR_b_HTSoV_StkClsd_HVC_HtrClntIn_Temp_OR_ECHTIS_Dsbl' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_HTSoV_StkClsd__HVC_HtrClntIn_Temp_Enb = 1;/* Referenced by:
                                                        * '<S869>/KeVLDR_b_HTSoV_StkClsd__HVC_HtrClntIn_Temp_Enb'
                                                        * '<S879>/KeVLDR_b_HTSoV_StkClsd__HVC_HtrClntIn_Temp_Enb'
                                                        */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_HTSoV_StkOpn_BSW_Ckt = 1;
                     /* Referenced by: '<S914>/KeVLDR_b_HTSoV_StkOpn_BSW_Ckt' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_HTSoV_StkOpn_BSW_CktHi =
    0;             /* Referenced by: '<S915>/KeVLDR_b_HTSoV_StkOpn_BSW_CktHi' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_HTSoV_StkOpn_BSW_CktLo =
    1;             /* Referenced by: '<S916>/KeVLDR_b_HTSoV_StkOpn_BSW_CktLo' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_HTSoV_StkOpn_BSW_D = 1;
                       /* Referenced by: '<S917>/KeVLDR_b_HTSoV_StkOpn_BSW_D' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_HTSoV_StkOpn_BSW_OV = 0;
                      /* Referenced by: '<S918>/KeVLDR_b_HTSoV_StkOpn_BSW_OV' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_HTSoV_StkOpn_Flt = 1;
                         /* Referenced by: '<S953>/KeVLDR_b_HTSoV_StkOpn_Flt' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_HTSoV_StkOpn_XYEnbl = 1;
                      /* Referenced by: '<S954>/KeVLDR_b_HTSoV_StkOpn_XYEnbl' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_HVC_HtrPwrLimit_Chk_En =
    0;             /* Referenced by: '<S919>/KeVLDR_b_HVC_HtrPwrLimit_Chk_En' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_HVC_Htr_LIN_ResErr_Disb =
    0;            /* Referenced by: '<S870>/KeVLDR_b_HVC_Htr_LIN_ResErr_Disb' */

#endif

#if Rte_SysCon_Variant_VLDR_5

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_HybEvBatPacCoolCtrlVlvBPerfStkOff_LtchEnbl = 0;/* Referenced by: '<S1252>/Calib' */

#endif

#if Rte_SysCon_Variant_VLDR_5

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_HybEvBatPacCoolCtrlVlvBStkOn_LtchEnbl = 0;/* Referenced by: '<S1299>/Calib' */

#endif

#if Rte_SysCon_Variant_VLDR_15

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_HybPropSysCoolCntrlVal_E_Perf_LtchEnbl = 0;/* Referenced by: '<S64>/Calib' */

#endif

#if Rte_SysCon_Variant_VLDR_2

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_IUMPR_HTCV_Leak_BTIS_Rat_Enbl = 1;
           /* Referenced by: '<S1066>/KeVLDR_b_IUMPR_HTCV_Leak_BTIS_Rat_Enbl' */

#endif

#if Rte_SysCon_Variant_VLDR_2

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_IUMPR_HTCV_Leak_BTOS_Rat_Enbl = 1;
           /* Referenced by: '<S1067>/KeVLDR_b_IUMPR_HTCV_Leak_BTOS_Rat_Enbl' */

#endif

#if Rte_SysCon_Variant_VLDR_2

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_IUMPR_HTCV_Leak_CktErr_Enbl = 1;
             /* Referenced by: '<S1068>/KeVLDR_b_IUMPR_HTCV_Leak_CktErr_Enbl' */

#endif

#if Rte_SysCon_Variant_VLDR_2

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_IUMPR_HTCV_Leak_CktHi_Enbl = 1;
              /* Referenced by: '<S1069>/KeVLDR_b_IUMPR_HTCV_Leak_CktHi_Enbl' */

#endif

#if Rte_SysCon_Variant_VLDR_2

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_IUMPR_HTCV_Leak_CktLo_Enbl = 1;
              /* Referenced by: '<S1070>/KeVLDR_b_IUMPR_HTCV_Leak_CktLo_Enbl' */

#endif

#if Rte_SysCon_Variant_VLDR_2

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_IUMPR_HTCV_Leak_LTAP_Rat_Enbl = 1;
           /* Referenced by: '<S1071>/KeVLDR_b_IUMPR_HTCV_Leak_LTAP_Rat_Enbl' */

#endif

#if Rte_SysCon_Variant_VLDR_2

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_IUMPR_HTCV_Perf_CktErr_Enbl = 1;
             /* Referenced by: '<S1054>/KeVLDR_b_IUMPR_HTCV_Perf_CktErr_Enbl' */

#endif

#if Rte_SysCon_Variant_VLDR_2

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_IUMPR_HTCV_Perf_CktHi_Enbl = 1;
              /* Referenced by: '<S1055>/KeVLDR_b_IUMPR_HTCV_Perf_CktHi_Enbl' */

#endif

#if Rte_SysCon_Variant_VLDR_2

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_IUMPR_HTCV_Perf_CktLo_Enbl = 1;
              /* Referenced by: '<S1056>/KeVLDR_b_IUMPR_HTCV_Perf_CktLo_Enbl' */

#endif

#if Rte_SysCon_Variant_VLDR_2

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_IUMPR_HTCV_Perf_FdbkCktHi_Enbl = 1;
          /* Referenced by: '<S1057>/KeVLDR_b_IUMPR_HTCV_Perf_FdbkCktHi_Enbl' */

#endif

#if Rte_SysCon_Variant_VLDR_2

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_IUMPR_HTCV_Perf_FdbkCktLo_Enbl = 1;
          /* Referenced by: '<S1058>/KeVLDR_b_IUMPR_HTCV_Perf_FdbkCktLo_Enbl' */

#endif

#if Rte_SysCon_Variant_VLDR_2

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_IUMPR_HTCV_Perf_ThrmlRly_Enbl = 1;
           /* Referenced by: '<S1059>/KeVLDR_b_IUMPR_HTCV_Perf_ThrmlRly_Enbl' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_IUMPR_HTSOV_SktClsd_CrktHiEnbl = 0;
          /* Referenced by: '<S1097>/KeVLDR_b_IUMPR_HTSOV_SktClsd_CrktHiEnbl' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_IUMPR_HTSOV_SktClsd_CrktLoEnbl = 1;
          /* Referenced by: '<S1098>/KeVLDR_b_IUMPR_HTSOV_SktClsd_CrktLoEnbl' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_IUMPR_HTSOV_SktOpn_CrktChkEnbl = 1;
          /* Referenced by: '<S1089>/KeVLDR_b_IUMPR_HTSOV_SktOpn_CrktChkEnbl' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_IUMPR_HTSOV_SktOpn_CrktHiEnbl = 1;
           /* Referenced by: '<S1090>/KeVLDR_b_IUMPR_HTSOV_SktOpn_CrktHiEnbl' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_IUMPR_HTSOV_SktOpn_CrktLoEnbl = 1;
           /* Referenced by: '<S1091>/KeVLDR_b_IUMPR_HTSOV_SktOpn_CrktLoEnbl' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_IUMPR_HTSOV_StkClsd_CrktChkEnbl = 1;
         /* Referenced by: '<S1099>/KeVLDR_b_IUMPR_HTSOV_StkClsd_CrktChkEnbl' */

#endif

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_IUMPR_HTSOV_StkClsd_D = 0;
                   /* Referenced by: '<S1638>/KeVLDR_b_IUMPR_HTSOV_StkClsd_D' */
static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_IUMPR_HTSOV_StkClsd_SD =
    0;            /* Referenced by: '<S1639>/KeVLDR_b_IUMPR_HTSOV_StkClsd_SD' */

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_IUMPR_HTSOV_StkClsd_StkOpnChk_Enbl = 1;
      /* Referenced by: '<S1100>/KeVLDR_b_IUMPR_HTSOV_StkClsd_StkOpnChk_Enbl' */

#endif

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_IUMPR_HTSOV_StkOpn_D = 0;
                    /* Referenced by: '<S1640>/KeVLDR_b_IUMPR_HTSOV_StkOpn_D' */
static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_IUMPR_HTSOV_StkOpn_SD = 0;
                   /* Referenced by: '<S1641>/KeVLDR_b_IUMPR_HTSOV_StkOpn_SD' */

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_IUMPR_HTSOV_StkOpn_StkClsdChk_Enbl = 1;
      /* Referenced by: '<S1092>/KeVLDR_b_IUMPR_HTSOV_StkOpn_StkClsdChk_Enbl' */

#endif

#if Rte_SysCon_Variant_VLDR_10

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_LTR_DiagPerfCndsOV_En = 1;/* Referenced by: '<S1190>/Calib' */

#endif

#if Rte_SysCon_Variant_VLDR_10

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_LTR_PerfDiag_LIN1BusOff_Ovrd = 0;
            /* Referenced by: '<S1186>/KeVLDR_b_LTR_PerfDiag_LIN1BusOff_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_10

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_LTR_PerfDiag_LOC_Ovrd = 0;
                   /* Referenced by: '<S1187>/KeVLDR_b_LTR_PerfDiag_LOC_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_10

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_LTR_PerfDiag_SysVolt_Ovrd
    = 0;       /* Referenced by: '<S1188>/KeVLDR_b_LTR_PerfDiag_SysVolt_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_10

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_LTR_PerfDiag_XYEnbl = 1;
                     /* Referenced by: '<S1201>/KeVLDR_b_LTR_PerfDiag_XYEnbl' */

#endif

#if Rte_SysCon_Variant_VLDR_10

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_LTR_PosActFA_Enbl = 1;
                       /* Referenced by: '<S1195>/KeVLDR_b_LTR_PosActFA_Enbl' */

#endif

#if Rte_SysCon_Variant_VLDR_5

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_LTSOV_BTIS_BTOS_Ovrd = 0;
                    /* Referenced by: '<S1222>/KeVLDR_b_LTSOV_BTIS_BTOS_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_5

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_LTSOV_PECTOS_Enb = 1;/* Referenced by:
                                                                      * '<S1317>/KeVLDR_b_LTSOV_PECTOS_Enb'
                                                                      * '<S1238>/KeVLDR_b_LTSOV_PECTOS_Enb'
                                                                      * '<S1284>/KeVLDR_b_LTSOV_PECTOS_Enb'
                                                                      * '<S1117>/KeVLDR_b_LTSOV_PECTOS_Enb'
                                                                      * '<S1128>/KeVLDR_b_LTSOV_PECTOS_Enb'
                                                                      */

#endif

#if Rte_SysCon_Variant_VLDR_5

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_LTSOV_StckOff_CANBusOff_Ovrd = 0;
            /* Referenced by: '<S1239>/KeVLDR_b_LTSOV_StckOff_CANBusOff_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_5

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_LTSOV_StckOn_CANBusOff_Ovrd = 0;
             /* Referenced by: '<S1285>/KeVLDR_b_LTSOV_StckOn_CANBusOff_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_5

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_LTSOV_StkOff_CirHigh_Ovrd
    = 0;       /* Referenced by: '<S1240>/KeVLDR_b_LTSOV_StkOff_CirHigh_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_5

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_LTSOV_StkOff_CirLow_Ovrd =
    0;          /* Referenced by: '<S1241>/KeVLDR_b_LTSOV_StkOff_CirLow_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_5

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_LTSOV_StkOff_CoolPumB_perf_Ovrd = 0;
         /* Referenced by: '<S1242>/KeVLDR_b_LTSOV_StkOff_CoolPumB_perf_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_5

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_LTSOV_StkOff_LTPP2_ChkEnbl_Ovrd = 0;
         /* Referenced by: '<S1243>/KeVLDR_b_LTSOV_StkOff_LTPP2_ChkEnbl_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_5

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_LTSOV_StkOff_StkOn_Ovrd =
    0;           /* Referenced by: '<S1244>/KeVLDR_b_LTSOV_StkOff_StkOn_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_5

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_LTSOV_StkOff_XYEnbl = 1;
                     /* Referenced by: '<S1253>/KeVLDR_b_LTSOV_StkOff_XYEnbl' */

#endif

#if Rte_SysCon_Variant_VLDR_5

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_LTSOV_StkOn_CirHigh_Ovrd =
    0;          /* Referenced by: '<S1286>/KeVLDR_b_LTSOV_StkOn_CirHigh_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_5

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_LTSOV_StkOn_CirLow_Ovrd =
    0;           /* Referenced by: '<S1287>/KeVLDR_b_LTSOV_StkOn_CirLow_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_5

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_LTSOV_StkOn_CoolPumB_perf_Ovrd = 0;
          /* Referenced by: '<S1288>/KeVLDR_b_LTSOV_StkOn_CoolPumB_perf_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_5

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_LTSOV_StkOn_LTPP2_ChkEnbl_Ovrd = 0;
          /* Referenced by: '<S1289>/KeVLDR_b_LTSOV_StkOn_LTPP2_ChkEnbl_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_5

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_LTSOV_StkOn_StkOff_Ovrd =
    0;           /* Referenced by: '<S1290>/KeVLDR_b_LTSOV_StkOn_StkOff_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_5

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_LTSOV_StkOn_XYEnbl = 1;
                      /* Referenced by: '<S1300>/KeVLDR_b_LTSOV_StkOn_XYEnbl' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_OEXV_AccelCheckEnbl = 1;
                     /* Referenced by: '<S1450>/KeVLDR_b_OEXV_AccelCheckEnbl' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_OEXV_ActCool_Disbl = 1;
                      /* Referenced by: '<S1451>/KeVLDR_b_OEXV_ActCool_Disbl' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_OEXV_CheckEnbl = 1;
                          /* Referenced by: '<S1452>/KeVLDR_b_OEXV_CheckEnbl' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_OEXV_CmpSpd_Disbl = 0;
                       /* Referenced by: '<S1453>/KeVLDR_b_OEXV_CmpSpd_Disbl' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_OEXV_PerfDiagPerfCndsOV_En = 1;/* Referenced by: '<S1349>/Calib' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_OEXV_PerfDiag_LIN2BusOff_Ovrd = 1;
           /* Referenced by: '<S1345>/KeVLDR_b_OEXV_PerfDiag_LIN2BusOff_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_OEXV_PerfDiag_LOC_Ovrd =
    1;            /* Referenced by: '<S1346>/KeVLDR_b_OEXV_PerfDiag_LOC_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_OEXV_PerfDiag_ThrmlRlyErr_Ovrd = 1;
          /* Referenced by: '<S1347>/KeVLDR_b_OEXV_PerfDiag_ThrmlRlyErr_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_OEXV_PosActFA_Enbl = 1;
                      /* Referenced by: '<S1356>/KeVLDR_b_OEXV_PosActFA_Enbl' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_OEXV_PressElctrDiag_LIN2BusOff_Ovrd = 0;
     /* Referenced by: '<S1390>/KeVLDR_b_OEXV_PressElctrDiag_LIN2BusOff_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_OEXV_PressElctrDiag_LOC_Ovrd = 0;
            /* Referenced by: '<S1391>/KeVLDR_b_OEXV_PressElctrDiag_LOC_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_OEXV_PressElctrDiag_PressSens_Ovrd = 1;
      /* Referenced by: '<S1392>/KeVLDR_b_OEXV_PressElctrDiag_PressSens_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_OEXV_PressElctrDiag_ThrmlRlyErr_Ovrd = 0;
    /* Referenced by: '<S1393>/KeVLDR_b_OEXV_PressElctrDiag_ThrmlRlyErr_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_OEXV_PressElctrFlt_XYEnbl
    = 1;       /* Referenced by: '<S1403>/KeVLDR_b_OEXV_PressElctrFlt_XYEnbl' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_OEXV_PressSensRatPerfCndsOV_En = 1;/* Referenced by: '<S1476>/Calib' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_OEXV_PressSens_EACPerf_Ovrd = 1;
             /* Referenced by: '<S1454>/KeVLDR_b_OEXV_PressSens_EACPerf_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_OEXV_PressSens_LIN2BusOff_Ovrd = 1;
          /* Referenced by: '<S1455>/KeVLDR_b_OEXV_PressSens_LIN2BusOff_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_OEXV_PressSens_LOC_Ovrd =
    1;           /* Referenced by: '<S1456>/KeVLDR_b_OEXV_PressSens_LOC_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_OEXV_PressSens_LostCommEAC_Ovrd = 1;
         /* Referenced by: '<S1457>/KeVLDR_b_OEXV_PressSens_LostCommEAC_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_OEXV_PressSens_PerfDiag_Ovrd = 1;
            /* Referenced by: '<S1458>/KeVLDR_b_OEXV_PressSens_PerfDiag_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_OEXV_PressSens_PressElctrFlt_Ovrd = 1;
       /* Referenced by: '<S1459>/KeVLDR_b_OEXV_PressSens_PressElctrFlt_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_OEXV_PressSens_PressSensAFlts_Ovrd = 1;
      /* Referenced by: '<S1460>/KeVLDR_b_OEXV_PressSens_PressSensAFlts_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_OEXV_PressSens_Saturation_Enb = 0;
           /* Referenced by: '<S1485>/KeVLDR_b_OEXV_PressSens_Saturation_Enb' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_OEXV_PressSens_TempElctrFlt_Ovrd = 1;
        /* Referenced by: '<S1461>/KeVLDR_b_OEXV_PressSens_TempElctrFlt_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_OEXV_PressSens_TempSens_Ovrd = 1;
            /* Referenced by: '<S1462>/KeVLDR_b_OEXV_PressSens_TempSens_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_OEXV_PressSens_ThrmlRlyErr_Ovrd = 1;
         /* Referenced by: '<S1463>/KeVLDR_b_OEXV_PressSens_ThrmlRlyErr_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_OEXV_PressSens_XYEnbl = 1;
                   /* Referenced by: '<S1493>/KeVLDR_b_OEXV_PressSens_XYEnbl' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_OEXV_Press_Delta_Enb = 1;
                    /* Referenced by: '<S1486>/KeVLDR_b_OEXV_Press_Delta_Enb' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_OEXV_RefPressFA_Enbl = 1;
                    /* Referenced by: '<S1487>/KeVLDR_b_OEXV_RefPressFA_Enbl' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_OEXV_TempElctrDiag_LIN2BusOff_Ovrd = 0;
      /* Referenced by: '<S1521>/KeVLDR_b_OEXV_TempElctrDiag_LIN2BusOff_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_OEXV_TempElctrDiag_LOC_Ovrd = 0;
             /* Referenced by: '<S1522>/KeVLDR_b_OEXV_TempElctrDiag_LOC_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_OEXV_TempElctrDiag_TempSens_Ovrd = 1;
        /* Referenced by: '<S1523>/KeVLDR_b_OEXV_TempElctrDiag_TempSens_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(boolean, VLDR_VAR_INIT)
    KeVLDR_b_OEXV_TempElctrDiag_ThrmlRlyErr_Ovrd = 0;
     /* Referenced by: '<S1524>/KeVLDR_b_OEXV_TempElctrDiag_ThrmlRlyErr_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_OEXV_TempElctrFlt_XYEnbl =
    1;          /* Referenced by: '<S1533>/KeVLDR_b_OEXV_TempElctrFlt_XYEnbl' */

#endif

#if (Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_12 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_15 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_4 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8)

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_OnBrdChrg_ClntTmpIn_FA_D =
    0;          /* Referenced by: '<S1574>/KeVLDR_b_OnBrdChrg_ClntTmpIn_FA_D' */

#endif

#if (Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_12 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_15 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_4 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8)

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_OnBrdChrg_ClntTmpIn_FA_SD
    = 0;       /* Referenced by: '<S1575>/KeVLDR_b_OnBrdChrg_ClntTmpIn_FA_SD' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_Operating_States_ClsEn =
    0;             /* Referenced by: '<S871>/KeVLDR_b_Operating_States_ClsEn' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_Operating_States_OpnEn =
    0;             /* Referenced by: '<S920>/KeVLDR_b_Operating_States_OpnEn' */

#endif

#if (Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_12 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_15 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_4 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8)

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_PostCodeClrDiagDsbl_D = 0;
                   /* Referenced by: '<S1576>/KeVLDR_b_PostCodeClrDiagDsbl_D' */

#endif

#if (Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_12 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_15 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_4 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8)

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_PostCodeClrDiagDsbl_SD =
    0;            /* Referenced by: '<S1577>/KeVLDR_b_PostCodeClrDiagDsbl_SD' */

#endif

#if (Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_12 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_15 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_4 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8)

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_PropSysActv_D = 0;
                           /* Referenced by: '<S1578>/KeVLDR_b_PropSysActv_D' */

#endif

#if (Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_12 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_15 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_4 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8)

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_PropSysActv_SD = 0;
                          /* Referenced by: '<S1579>/KeVLDR_b_PropSysActv_SD' */

#endif

#if (Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_12 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_15 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_4 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8)

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_PsvPmpClnt_TmpIn_FA_D = 0;
                   /* Referenced by: '<S1580>/KeVLDR_b_PsvPmpClnt_TmpIn_FA_D' */

#endif

#if (Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_12 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_15 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_4 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8)

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_PsvPmpClnt_TmpIn_FA_SD =
    0;            /* Referenced by: '<S1581>/KeVLDR_b_PsvPmpClnt_TmpIn_FA_SD' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_StkCls_FltDtct_OV = 0;
                        /* Referenced by: '<S921>/KeVLDR_b_StkCls_FltDtct_OV' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_StkOpn_FltDtct_OV = 0;
                        /* Referenced by: '<S872>/KeVLDR_b_StkOpn_FltDtct_OV' */

#endif

#if Rte_SysCon_Variant_VLDR_2

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_ValidPWM_Leak_Ovrd = 0;
                       /* Referenced by: '<S732>/KeVLDR_b_ValidPWM_Leak_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_2

static volatile CONST(boolean, VLDR_VAR_INIT) KeVLDR_b_ValidPWM_Ovrd = 0;
                            /* Referenced by: '<S768>/KeVLDR_b_ValidPWM_Ovrd' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_dn_EEXV_CompAccelThr =
    100.0F;            /* Referenced by: '<S326>/KeVLDR_dn_EEXV_CompAccelThr' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_dn_EXV_CompAccelThr =
    100.0F;             /* Referenced by: '<S564>/KeVLDR_dn_EXV_CompAccelThr' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_dn_OEXV_CompAccelThr =
    100.0F;           /* Referenced by: '<S1464>/KeVLDR_dn_OEXV_CompAccelThr' */

#endif

#if (Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_12 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_15 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_4 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8)

static volatile CONST(TeBPCR_e_LIN_BusOff, VLDR_VAR_INIT)
    KeVLDR_e_BPCM_LIN_BusOff_D = CeBPCR_e_LIN_BusOff_Disabled;
                       /* Referenced by: '<S1582>/KeVLDR_e_BPCM_LIN_BusOff_D' */

#endif

#if (Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_12 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_15 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_4 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8)

static volatile CONST(TeBPCR_e_LOC_BCP, VLDR_VAR_INIT) KeVLDR_e_BPCM_LOC_BCP_D =
    CeBPCR_e_LOC_BCP_False;
                          /* Referenced by: '<S1583>/KeVLDR_e_BPCM_LOC_BCP_D' */

#endif

#if (Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_12 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_15 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_4 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8)

static volatile CONST(TeESSR_e_EngStrtStpMd, VLDR_VAR_INIT)
    KeVLDR_e_EngStrtStpMd_D = CeESSR_e_Stop;
                          /* Referenced by: '<S1584>/KeVLDR_e_EngStrtStpMd_D' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(TeESSR_e_EngStrtStpMd, VLDR_VAR_INIT)
    KeVLDR_e_EngStrtStpMd_EngRun = CeESSR_e_ProducingTorque;
                      /* Referenced by: '<S922>/KeVLDR_e_EngStrtStpMd_EngRun' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_k_ECT_Fltr_Coeff = 0.5F;
                           /* Referenced by: '<S936>/KeVLDR_k_ECT_Fltr_Coeff' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_n_EEXV_CompSpdThr = 1000.0F;
                          /* Referenced by: '<S256>/KeVLDR_n_EEXV_CompSpdThr' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_n_EEXV_InitCompSpd = 10.0F;
                         /* Referenced by: '<S327>/KeVLDR_n_EEXV_InitCompSpd' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_n_EEXV_LowCompSpd = 1050.0F;
                          /* Referenced by: '<S328>/KeVLDR_n_EEXV_LowCompSpd' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_n_EEXV_SpdThrshld_LSP_Diag =
    1000.0F;     /* Referenced by: '<S329>/KeVLDR_n_EEXV_SpdThrshld_LSP_Diag' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_n_EEXV_SpdThrshld_RSP_Diag =
    2500.0F;     /* Referenced by: '<S330>/KeVLDR_n_EEXV_SpdThrshld_RSP_Diag' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_n_EXV_CompSpdThr = 1000.0F;
                           /* Referenced by: '<S486>/KeVLDR_n_EXV_CompSpdThr' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_n_EXV_InitCompSpd = 10.0F;
                          /* Referenced by: '<S565>/KeVLDR_n_EXV_InitCompSpd' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_n_EXV_LowCompSpd = 1050.0F;
                           /* Referenced by: '<S566>/KeVLDR_n_EXV_LowCompSpd' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_n_EXV_SpdThrshld_LSP_Diag =
    1000.0F;      /* Referenced by: '<S567>/KeVLDR_n_EXV_SpdThrshld_LSP_Diag' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_n_EXV_SpdThrshld_RSP_Diag =
    2500.0F;      /* Referenced by: '<S568>/KeVLDR_n_EXV_SpdThrshld_RSP_Diag' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_n_HTAuxPmp_MinFlowCls =
    5.0F;             /* Referenced by: '<S923>/KeVLDR_n_HTAuxPmp_MinFlowCls' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_n_HTAuxPmp_MinFlowOpn =
    5.0F;             /* Referenced by: '<S873>/KeVLDR_n_HTAuxPmp_MinFlowOpn' */

#endif

#if Rte_SysCon_Variant_VLDR_5

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_n_LTSOV_StkOn_LTPP2_MinSpd =
    1000.0F;    /* Referenced by: '<S1291>/KeVLDR_n_LTSOV_StkOn_LTPP2_MinSpd' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_n_OEXV_CompSpdThr = 1000.0F;
                         /* Referenced by: '<S1394>/KeVLDR_n_OEXV_CompSpdThr' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_n_OEXV_InitCompSpd = 10.0F;
                        /* Referenced by: '<S1465>/KeVLDR_n_OEXV_InitCompSpd' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_n_OEXV_LowCompSpd = 1050.0F;
                         /* Referenced by: '<S1466>/KeVLDR_n_OEXV_LowCompSpd' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_n_OEXV_SpdThrshld_LSP_Diag =
    1000.0F;    /* Referenced by: '<S1467>/KeVLDR_n_OEXV_SpdThrshld_LSP_Diag' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_n_OEXV_SpdThrshld_RSP_Diag =
    2500.0F;    /* Referenced by: '<S1468>/KeVLDR_n_OEXV_SpdThrshld_RSP_Diag' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_p_EEXV_Press_Delta_Min =
    10.0F;           /* Referenced by: '<S350>/KeVLDR_p_EEXV_Press_Delta_Min' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_p_EXV_Press_Delta_Min =
    10.0F;            /* Referenced by: '<S589>/KeVLDR_p_EXV_Press_Delta_Min' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_p_OEXV_Press_Delta_Min =
    10.0F;          /* Referenced by: '<S1488>/KeVLDR_p_OEXV_Press_Delta_Min' */

#endif

#if Rte_SysCon_Variant_VLDR_12

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_t_BHV_FA_WaitTime = 2.0F;
                           /* Referenced by: '<S47>/KeVLDR_t_CPV_FA_WaitTime' */

#endif

#if Rte_SysCon_Variant_VLDR_8

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_t_CPV_DltCmdSpd_DsblTime =
    8.0F;          /* Referenced by: '<S144>/KeVLDR_t_CPV_DltCmdSpd_DsblTime' */

#endif

#if Rte_SysCon_Variant_VLDR_8

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_t_CPV_FA_WaitTime = 2.0F;
                          /* Referenced by: '<S145>/KeVLDR_t_CPV_FA_WaitTime' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_t_EEXV_CmpSpdTm = 2.0F;
                            /* Referenced by: '<S331>/KeVLDR_t_EEXV_CmpSpdTm' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_t_EEXV_CntrTime1 = 2.0F;
                           /* Referenced by: '<S332>/KeVLDR_t_EEXV_CntrTime1' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_t_EEXV_CntrTime2 = 6.0F;
                           /* Referenced by: '<S333>/KeVLDR_t_EEXV_CntrTime2' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_t_EEXV_CompAC_Time = 2.0F;
                         /* Referenced by: '<S334>/KeVLDR_t_EEXV_CompAC_Time' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_t_EEXV_Comp_Run_Time =
    10.0F;             /* Referenced by: '<S257>/KeVLDR_t_EEXV_Comp_Run_Time' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_t_EEXV_FA_WaitTime = 2.0F;/* Referenced by:
                                                                      * '<S209>/KeVLDR_t_EEXV_FA_WaitTime'
                                                                      * '<S335>/KeVLDR_t_EEXV_FA_WaitTime'
                                                                      */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_t_EEXV_FilterDeriv_CutOff =
    5.0F;         /* Referenced by: '<S336>/KeVLDR_t_EEXV_FilterDeriv_CutOff' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_t_EEXV_LPF_Coef = 0.1F;
                            /* Referenced by: '<S337>/KeVLDR_t_EEXV_LPF_Coef' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_t_EXV_CmpSpdTm = 2.0F;
                             /* Referenced by: '<S569>/KeVLDR_t_EXV_CmpSpdTm' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_t_EXV_CntrTime1 = 2.0F;
                            /* Referenced by: '<S570>/KeVLDR_t_EXV_CntrTime1' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_t_EXV_CntrTime2 = 6.0F;
                            /* Referenced by: '<S571>/KeVLDR_t_EXV_CntrTime2' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_t_EXV_CompAC_Time = 2.0F;
                          /* Referenced by: '<S572>/KeVLDR_t_EXV_CompAC_Time' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_t_EXV_Comp_Run_Time = 10.0F;
                        /* Referenced by: '<S487>/KeVLDR_t_EXV_Comp_Run_Time' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_t_EXV_FA_WaitTime = 2.0F;/* Referenced by:
                                                                      * '<S440>/KeVLDR_t_EXV_FA_WaitTime'
                                                                      * '<S573>/KeVLDR_t_EXV_FA_WaitTime'
                                                                      * '<S680>/KeVLDR_t_EXV_FA_WaitTime'
                                                                      */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_t_EXV_FilterDeriv_CutOff =
    5.0F;          /* Referenced by: '<S574>/KeVLDR_t_EXV_FilterDeriv_CutOff' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_t_EXV_LPF_Coef = 0.1F;
                             /* Referenced by: '<S575>/KeVLDR_t_EXV_LPF_Coef' */

#endif

#if Rte_SysCon_Variant_VLDR_11

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_t_HTL_FA_WaitTime = 2.0F;
                          /* Referenced by: '<S808>/KeVLDR_t_HTL_FA_WaitTime' */

#endif

#if Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_4 || Rte_SysCon_Variant_VLDR_6

static volatile CONST(float32, VLDR_VAR_INIT)
    KeVLDR_t_IUMPR_EXV_presSens_MinConsecTime_CmdOn = 2.0F;/* Referenced by:
                                                            * '<S1001>/KeVLDR_t_IUMPR_EXV_presSens_MinConsecTime_CmdOn'
                                                            * '<S1029>/KeVLDR_t_IUMPR_EXV_presSens_MinConsecTime_CmdOn'
                                                            * '<S1173>/KeVLDR_t_IUMPR_EXV_presSens_MinConsecTime_CmdOn'
                                                            */

#endif

#if Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_4 || Rte_SysCon_Variant_VLDR_6

static volatile CONST(float32, VLDR_VAR_INIT)
    KeVLDR_t_IUMPR_EXV_presSens_MinCumlTime_CmdOn = 10.0F;/* Referenced by:
                                                           * '<S1002>/KeVLDR_t_IUMPR_EXV_presSens_MinCumlTime_CmdOn'
                                                           * '<S1030>/KeVLDR_t_IUMPR_EXV_presSens_MinCumlTime_CmdOn'
                                                           * '<S1174>/KeVLDR_t_IUMPR_EXV_presSens_MinCumlTime_CmdOn'
                                                           */

#endif

#if Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_4 || Rte_SysCon_Variant_VLDR_6

static volatile CONST(float32, VLDR_VAR_INIT)
    KeVLDR_t_IUMPR_EXVperf_MinConsecTime_CmdOn = 2.0F;/* Referenced by:
                                                       * '<S991>/KeVLDR_t_IUMPR_EXVperf_MinConsecTime_CmdOn'
                                                       * '<S1019>/KeVLDR_t_IUMPR_EXVperf_MinConsecTime_CmdOn'
                                                       * '<S1162>/KeVLDR_t_IUMPR_EXVperf_MinConsecTime_CmdOn'
                                                       */

#endif

#if Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_4 || Rte_SysCon_Variant_VLDR_6

static volatile CONST(float32, VLDR_VAR_INIT)
    KeVLDR_t_IUMPR_EXVperf_MinCumlTime_CmdOn = 10.0F;/* Referenced by:
                                                      * '<S992>/KeVLDR_t_IUMPR_EXVperf_MinCumlTime_CmdOn'
                                                      * '<S1020>/KeVLDR_t_IUMPR_EXVperf_MinCumlTime_CmdOn'
                                                      * '<S1163>/KeVLDR_t_IUMPR_EXVperf_MinCumlTime_CmdOn'
                                                      */

#endif

#if Rte_SysCon_Variant_VLDR_2

static volatile CONST(float32, VLDR_VAR_INIT)
    KeVLDR_t_IUMPR_HTCV_MinConsecTime_CmdOn = 2.0F;
          /* Referenced by: '<S1043>/KeVLDR_t_IUMPR_HTCV_MinConsecTime_CmdOn' */

#endif

#if Rte_SysCon_Variant_VLDR_2

static volatile CONST(float32, VLDR_VAR_INIT)
    KeVLDR_t_IUMPR_HTCV_MinCumlTime_CmdOn = 10.0F;
            /* Referenced by: '<S1044>/KeVLDR_t_IUMPR_HTCV_MinCumlTime_CmdOn' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(float32, VLDR_VAR_INIT)
    KeVLDR_t_IUMPR_HTSOV_MinConsecTime_CmdOn = 2.0F;
         /* Referenced by: '<S1083>/KeVLDR_t_IUMPR_HTSOV_MinConsecTime_CmdOn' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(float32, VLDR_VAR_INIT)
    KeVLDR_t_IUMPR_HTSOV_MinCumlTime_CmdOn = 10.0F;
           /* Referenced by: '<S1084>/KeVLDR_t_IUMPR_HTSOV_MinCumlTime_CmdOn' */

#endif

#if Rte_SysCon_Variant_VLDR_5

static volatile CONST(float32, VLDR_VAR_INIT)
    KeVLDR_t_IUMPR_LTSOV_StkOff_MinConsecTime_CmdOn = 2.0F;
/* Referenced by: '<S1137>/KeVLDR_t_IUMPR_LTSOV_StkOff_MinConsecTime_CmdOn' */

#endif

#if Rte_SysCon_Variant_VLDR_5

static volatile CONST(float32, VLDR_VAR_INIT)
    KeVLDR_t_IUMPR_LTSOV_StkOff_MinCumlTime_CmdOn = 10.0F;
    /* Referenced by: '<S1138>/KeVLDR_t_IUMPR_LTSOV_StkOff_MinCumlTime_CmdOn' */

#endif

#if Rte_SysCon_Variant_VLDR_5

static volatile CONST(float32, VLDR_VAR_INIT)
    KeVLDR_t_IUMPR_LTSOV_StkOn_MinConsecTime_CmdOn = 2.0F;
/* Referenced by: '<S1147>/KeVLDR_t_IUMPR_LTSOV_StkOn_MinConsecTime_CmdOn' */

#endif

#if Rte_SysCon_Variant_VLDR_5

static volatile CONST(float32, VLDR_VAR_INIT)
    KeVLDR_t_IUMPR_LTSOV_StkOn_MinCumlTime_CmdOn = 10.0F;
     /* Referenced by: '<S1148>/KeVLDR_t_IUMPR_LTSOV_StkOn_MinCumlTime_CmdOn' */

#endif

#if Rte_SysCon_Variant_VLDR_10

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_t_LTR_FA_WaitTime = 2.0F;
                         /* Referenced by: '<S1189>/KeVLDR_t_LTR_FA_WaitTime' */

#endif

#if Rte_SysCon_Variant_VLDR_2

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_t_LeakDiag = 0.025F;
                                 /* Referenced by: '<S719>/KeVLDR_t_LeakDiag' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_t_OEXV_CmpSpdTm = 2.0F;
                           /* Referenced by: '<S1469>/KeVLDR_t_OEXV_CmpSpdTm' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_t_OEXV_CntrTime1 = 2.0F;
                          /* Referenced by: '<S1470>/KeVLDR_t_OEXV_CntrTime1' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_t_OEXV_CntrTime2 = 6.0F;
                          /* Referenced by: '<S1471>/KeVLDR_t_OEXV_CntrTime2' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_t_OEXV_CompAC_Time = 2.0F;
                        /* Referenced by: '<S1472>/KeVLDR_t_OEXV_CompAC_Time' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_t_OEXV_Comp_Run_Time =
    10.0F;            /* Referenced by: '<S1395>/KeVLDR_t_OEXV_Comp_Run_Time' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_t_OEXV_FA_WaitTime = 2.0F;/* Referenced by:
                                                                      * '<S1348>/KeVLDR_t_OEXV_FA_WaitTime'
                                                                      * '<S1473>/KeVLDR_t_OEXV_FA_WaitTime'
                                                                      */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_t_OEXV_FilterDeriv_CutOff =
    5.0F;        /* Referenced by: '<S1474>/KeVLDR_t_OEXV_FilterDeriv_CutOff' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_t_OEXV_LPF_Coef = 0.1F;
                           /* Referenced by: '<S1475>/KeVLDR_t_OEXV_LPF_Coef' */

#endif

#if Rte_SysCon_Variant_VLDR_2

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_t_StckDiag = 0.025F;
                                 /* Referenced by: '<S769>/KeVLDR_t_StckDiag' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_t_StkCls_Diag = 0.1F;
                              /* Referenced by: '<S874>/KeVLDR_t_StkCls_Diag' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_t_StkCls_Diag_Deb = 0.0F;
                          /* Referenced by: '<S875>/KeVLDR_t_StkCls_Diag_Deb' */

#endif

#if Rte_SysCon_Variant_VLDR_5

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_t_StkOff_CntrTime1 = 2.0F;
                        /* Referenced by: '<S1245>/KeVLDR_t_StkOff_CntrTime1' */

#endif

#if Rte_SysCon_Variant_VLDR_5

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_t_StkOff_CntrTime2 = 6.0F;
                        /* Referenced by: '<S1246>/KeVLDR_t_StkOff_CntrTime2' */

#endif

#if Rte_SysCon_Variant_VLDR_5

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_t_StkOn_CntrTime1 = 2.0F;
                         /* Referenced by: '<S1292>/KeVLDR_t_StkOn_CntrTime1' */

#endif

#if Rte_SysCon_Variant_VLDR_5

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_t_StkOn_CntrTime2 = 6.0F;
                         /* Referenced by: '<S1293>/KeVLDR_t_StkOn_CntrTime2' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_t_StkOpnFailSym_App2Deb =
    60.0F;          /* Referenced by: '<S937>/KeVLDR_t_StkOpnFailSym_App2Deb' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_t_StkOpnFailSym_Deb_Time =
    2.0F;          /* Referenced by: '<S938>/KeVLDR_t_StkOpnFailSym_Deb_Time' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_t_StkOpnFailSym_dt = 0.1F;
                         /* Referenced by: '<S939>/KeVLDR_t_StkOpnFailSym_dt' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_t_StkOpn_Diag = 0.1F;
                              /* Referenced by: '<S924>/KeVLDR_t_StkOpn_Diag' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_t_StkOpn_Diag_Deb = 0.0F;
                          /* Referenced by: '<S925>/KeVLDR_t_StkOpn_Diag_Deb' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_t_StkOpn_Diff_Delay2 =
    15.0F;             /* Referenced by: '<S940>/KeVLDR_t_StkOpn_Diff_Delay2' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(uint32, VLDR_VAR_INIT) KeVLDR_t_VehicleSoakTime = 21600U;
                          /* Referenced by: '<S681>/KeVLDR_t_VehicleSoakTime' */

#endif

#if Rte_SysCon_Variant_VLDR_2

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_t_WaitTime_B4_LeakDiagEn =
    3000.0F;       /* Referenced by: '<S720>/KeVLDR_t_WaitTime_B4_LeakDiagEn' */

#endif

#if Rte_SysCon_Variant_VLDR_2

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_t_WaitTime_B4_StckDiagEn =
    10.0F;         /* Referenced by: '<S770>/KeVLDR_t_WaitTime_B4_StckDiagEn' */

#endif

#if Rte_SysCon_Variant_VLDR_8

static volatile CONST(float32, VLDR_VAR_INIT) KeVLDR_t_dT_CPV = 0.025F;
                                   /* Referenced by: '<S146>/KeVLDR_t_dT_CPV' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(float32, VLDR_VAR_INIT)
    KtVLDR_p_EEXV_PressSens_Saturation[7] =
{
    800.0F, 820.0F, 850.0F, 870.0F, 900.0F, 920.0F, 950.0F
} ;                                    /* Referenced by: '<S351>/Vector' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(float32, VLDR_VAR_INIT) KtVLDR_p_EXV_PressSens_Saturation
    [7] =
{
    800.0F, 820.0F, 850.0F, 870.0F, 900.0F, 920.0F, 950.0F
} ;                                    /* Referenced by: '<S590>/Vector' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(float32, VLDR_VAR_INIT)
    KtVLDR_p_OEXV_PressSens_Saturation[7] =
{
    800.0F, 820.0F, 850.0F, 870.0F, 900.0F, 920.0F, 950.0F
} ;                                    /* Referenced by: '<S1489>/Vector' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static volatile CONST(float32, VLDR_VAR_INIT)
    KxVLDR_p_EEXV_PressSens_Saturation[7] =
{
    -40.0F, -20.0F, 0.0F, 20.0F, 40.0F, 60.0F, 100.0F
} ;                                    /* Referenced by: '<S351>/Vector' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static volatile CONST(float32, VLDR_VAR_INIT) KxVLDR_p_EXV_PressSens_Saturation
    [7] =
{
    -40.0F, -20.0F, 0.0F, 20.0F, 40.0F, 60.0F, 100.0F
} ;                                    /* Referenced by: '<S590>/Vector' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static volatile CONST(float32, VLDR_VAR_INIT)
    KxVLDR_p_OEXV_PressSens_Saturation[7] =
{
    -40.0F, -20.0F, 0.0F, 20.0F, 40.0F, 60.0F, 100.0F
} ;                                    /* Referenced by: '<S1489>/Vector' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_VLDR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_VLDR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_VLDR_12

static VAR(uint16, VLDR_VAR_INIT) VeVLDR_Cnt_BHV_PerfDiag_FailCnt;/* '<S36>/Switch1' */

#endif

#if Rte_SysCon_Variant_VLDR_12

static VAR(uint16, VLDR_VAR_INIT) VeVLDR_Cnt_BHV_PerfDiag_SmpCnt;/* '<S37>/Switch1' */

#endif

#if Rte_SysCon_Variant_VLDR_15

static VAR(uint16, VLDR_VAR_INIT) VeVLDR_Cnt_CPV2_PerfDiag_FailCnt;/* '<S73>/Switch1' */

#endif

#if Rte_SysCon_Variant_VLDR_15

static VAR(uint16, VLDR_VAR_INIT) VeVLDR_Cnt_CPV2_PerfDiag_SmpCnt;/* '<S74>/Switch1' */

#endif

#if Rte_SysCon_Variant_VLDR_8

static VAR(uint16, VLDR_VAR_INIT) VeVLDR_Cnt_CPV_PerfDiag_FailCnt;/* '<S108>/Switch1' */

#endif

#if Rte_SysCon_Variant_VLDR_8

static VAR(uint16, VLDR_VAR_INIT) VeVLDR_Cnt_CPV_PerfDiag_SmpCnt;/* '<S109>/Switch1' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static VAR(uint16, VLDR_VAR_INIT) VeVLDR_Cnt_EEXVPrsElFlt_FailCnt;/* '<S236>/Switch1' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static VAR(uint16, VLDR_VAR_INIT) VeVLDR_Cnt_EEXVPrsElFlt_SmpCnt;/* '<S237>/Switch1' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static VAR(uint16, VLDR_VAR_INIT) VeVLDR_Cnt_EEXV_PerfDiag_FailCnt;/* '<S187>/Switch1' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static VAR(uint16, VLDR_VAR_INIT) VeVLDR_Cnt_EEXV_PerfDiag_SmpCnt;/* '<S188>/Switch1' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static VAR(uint16, VLDR_VAR_INIT) VeVLDR_Cnt_EEXV_PresSens_FailCnt;/* '<S279>/Switch1' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static VAR(uint16, VLDR_VAR_INIT) VeVLDR_Cnt_EEXV_PressSens_SmpCnt;/* '<S280>/Switch1' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static VAR(uint16, VLDR_VAR_INIT) VeVLDR_Cnt_EEXV_TmpElFlt_FailCnt;/* '<S369>/Switch1' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static VAR(uint16, VLDR_VAR_INIT) VeVLDR_Cnt_EEXV_TmpElFlt_SmpCnt;/* '<S370>/Switch1' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static VAR(uint16, VLDR_VAR_INIT) VeVLDR_Cnt_EXVPrsElFlt_FailCnt;/* '<S467>/Switch1' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static VAR(uint16, VLDR_VAR_INIT) VeVLDR_Cnt_EXVPrsElFlt_SmpCnt;/* '<S468>/Switch1' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static VAR(uint16, VLDR_VAR_INIT) VeVLDR_Cnt_EXV_PerfDiag_FailCnt;/* '<S419>/Switch1' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static VAR(uint16, VLDR_VAR_INIT) VeVLDR_Cnt_EXV_PerfDiag_SmpCnt;/* '<S420>/Switch1' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static VAR(uint16, VLDR_VAR_INIT) VeVLDR_Cnt_EXV_PresSens_FailCnt;/* '<S509>/Switch1' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static VAR(uint16, VLDR_VAR_INIT) VeVLDR_Cnt_EXV_PressSens_SmpCnt;/* '<S510>/Switch1' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static VAR(uint16, VLDR_VAR_INIT) VeVLDR_Cnt_EXV_TempSens_FailCnt;/* '<S645>/Switch1' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static VAR(uint16, VLDR_VAR_INIT) VeVLDR_Cnt_EXV_TempSens_SmpCnt;/* '<S646>/Switch1' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static VAR(uint16, VLDR_VAR_INIT) VeVLDR_Cnt_EXV_TmpElFlt_FailCnt;/* '<S608>/Switch1' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static VAR(uint16, VLDR_VAR_INIT) VeVLDR_Cnt_EXV_TmpElFlt_SmpCnt;/* '<S609>/Switch1' */

#endif

#if Rte_SysCon_Variant_VLDR_2

static VAR(uint16, VLDR_VAR_INIT) VeVLDR_Cnt_HCTV_Leak_FailCnt;/* '<S746>/Switch1' */

#endif

#if Rte_SysCon_Variant_VLDR_2

static VAR(uint16, VLDR_VAR_INIT) VeVLDR_Cnt_HCTV_Leak_SmpCnt;/* '<S747>/Switch1' */

#endif

#if Rte_SysCon_Variant_VLDR_2

static VAR(uint16, VLDR_VAR_INIT) VeVLDR_Cnt_HTCV_Stck_FailCnt;/* '<S786>/Switch1' */

#endif

#if Rte_SysCon_Variant_VLDR_2

static VAR(uint16, VLDR_VAR_INIT) VeVLDR_Cnt_HTCV_Stck_SmpCnt;/* '<S787>/Switch1' */

#endif

#if Rte_SysCon_Variant_VLDR_11

static VAR(uint16, VLDR_VAR_INIT) VeVLDR_Cnt_HTL_PerfDiag_FailCnt;/* '<S829>/Switch1' */

#endif

#if Rte_SysCon_Variant_VLDR_11

static VAR(uint16, VLDR_VAR_INIT) VeVLDR_Cnt_HTL_PerfDiag_SmpCnt;/* '<S830>/Switch1' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static VAR(uint16, VLDR_VAR_INIT) VeVLDR_Cnt_HTSoV_StkCls_FailCnt;/* '<S893>/Switch1' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static VAR(uint16, VLDR_VAR_INIT) VeVLDR_Cnt_HTSoV_StkCls_SmpCnt;/* '<S894>/Switch1' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static VAR(uint16, VLDR_VAR_INIT) VeVLDR_Cnt_HTSoV_StkOpn_FailCnt;/* '<S963>/Switch1' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static VAR(uint16, VLDR_VAR_INIT) VeVLDR_Cnt_HTSoV_StkOpn_SmpCnt;/* '<S964>/Switch1' */

#endif

#if Rte_SysCon_Variant_VLDR_10

static VAR(uint16, VLDR_VAR_INIT) VeVLDR_Cnt_LTR_PerfDiag_FailCnt;/* '<S1210>/Switch1' */

#endif

#if Rte_SysCon_Variant_VLDR_10

static VAR(uint16, VLDR_VAR_INIT) VeVLDR_Cnt_LTR_PerfDiag_SmpCnt;/* '<S1211>/Switch1' */

#endif

#if Rte_SysCon_Variant_VLDR_5

static VAR(uint16, VLDR_VAR_INIT) VeVLDR_Cnt_LTSOV_StkOff_FailCnt;/* '<S1262>/Switch1' */

#endif

#if Rte_SysCon_Variant_VLDR_5

static VAR(uint16, VLDR_VAR_INIT) VeVLDR_Cnt_LTSOV_StkOff_SmpCnt;/* '<S1263>/Switch1' */

#endif

#if Rte_SysCon_Variant_VLDR_5

static VAR(uint16, VLDR_VAR_INIT) VeVLDR_Cnt_LTSOV_StkOn_FailCnt;/* '<S1309>/Switch1' */

#endif

#if Rte_SysCon_Variant_VLDR_5

static VAR(uint16, VLDR_VAR_INIT) VeVLDR_Cnt_LTSOV_StkOn_SmpCnt;/* '<S1310>/Switch1' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static VAR(uint16, VLDR_VAR_INIT) VeVLDR_Cnt_OEXVPrsElFlt_FailCnt;/* '<S1412>/Switch1' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static VAR(uint16, VLDR_VAR_INIT) VeVLDR_Cnt_OEXVPrsElFlt_SmpCnt;/* '<S1413>/Switch1' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static VAR(uint16, VLDR_VAR_INIT) VeVLDR_Cnt_OEXV_PerfDiag_FailCnt;/* '<S1370>/Switch1' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static VAR(uint16, VLDR_VAR_INIT) VeVLDR_Cnt_OEXV_PerfDiag_SmpCnt;/* '<S1371>/Switch1' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static VAR(uint16, VLDR_VAR_INIT) VeVLDR_Cnt_OEXV_PresSens_FailCnt;/* '<S1502>/Switch1' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static VAR(uint16, VLDR_VAR_INIT) VeVLDR_Cnt_OEXV_PressSens_SmpCnt;/* '<S1503>/Switch1' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static VAR(uint16, VLDR_VAR_INIT) VeVLDR_Cnt_OEXV_TmpElFlt_FailCnt;/* '<S1542>/Switch1' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static VAR(uint16, VLDR_VAR_INIT) VeVLDR_Cnt_OEXV_TmpElFlt_SmpCnt;/* '<S1543>/Switch1' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static VAR(float32, VLDR_VAR_INIT) VeVLDR_Pct_EEXV_PerfDiag_PstnDiff;/* '<S175>/Sum1' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static VAR(float32, VLDR_VAR_INIT) VeVLDR_Pct_EXV_PerfDiag_PstnDiff;/* '<S407>/Sum1' */

#endif

#if Rte_SysCon_Variant_VLDR_2

static VAR(float32, VLDR_VAR_INIT) VeVLDR_Pct_HT_CabVlvErr;/* '<S753>/Subtraction' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static VAR(float32, VLDR_VAR_INIT) VeVLDR_Pct_OEXV_PerfDiag_PstnDiff;/* '<S1331>/Sum1' */

#endif

#if Rte_SysCon_Variant_VLDR_5

static VAR(float32, VLDR_VAR_INIT) VeVLDR_T_ClntTmp;/* '<S1221>/Switch' */

#endif

#if Rte_SysCon_Variant_VLDR_5

static VAR(float32, VLDR_VAR_INIT) VeVLDR_T_Diff_BTIS_ClntTmp;/* '<S1221>/Abs' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static VAR(float32, VLDR_VAR_INIT) VeVLDR_T_EEXV_TempRawData;/* '<S389>/Rounding2' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static VAR(float32, VLDR_VAR_INIT) VeVLDR_T_EXVRefTemp_BTIS2_Diff;/* '<S632>/Sum1' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static VAR(float32, VLDR_VAR_INIT) VeVLDR_T_EXVRefTemp_BTIS_Diff;/* '<S632>/Sum' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static VAR(float32, VLDR_VAR_INIT) VeVLDR_T_EXVRefTemp_BTOS2_Diff;/* '<S632>/Sum3' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static VAR(float32, VLDR_VAR_INIT) VeVLDR_T_EXVRefTemp_BTOS_Diff;/* '<S632>/Sum2' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static VAR(float32, VLDR_VAR_INIT) VeVLDR_T_EXV_TempRawData;/* '<S627>/Rounding2' */

#endif

#if (Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_12 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_15 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_4 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8)

static VAR(float32, VLDR_VAR_INIT) VeVLDR_T_EngCoolantTemp_AD;/* '<S5>/Switch' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static VAR(float32, VLDR_VAR_INIT) VeVLDR_T_EngCoolantTemp_Fltr;/* '<S941>/Summation' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static VAR(float32, VLDR_VAR_INIT) VeVLDR_T_EngCoolantTemp_Latched;/* '<S942>/Switch1' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static VAR(float32, VLDR_VAR_INIT) VeVLDR_T_HTSoV_StkClsd_DiffTempLim;/* '<S845>/Sum' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static VAR(float32, VLDR_VAR_INIT) VeVLDR_T_OEXV_TempRawData;/* '<S1527>/Rounding2' */

#endif

#if (Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_12 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_15 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_4 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8)

static VAR(float32, VLDR_VAR_INIT) VeVLDR_U_BattVltg_AD;/* '<S5>/Switch7' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static VAR(boolean, VLDR_VAR_INIT) VeVLDR_b_ACComp;/* '<S579>/AND' */

#endif

#if Rte_SysCon_Variant_VLDR_12

static VAR(boolean, VLDR_VAR_INIT) VeVLDR_b_BHV_PerfDiag_En;/* '<S21>/Logical Operator9' */

#endif

#if Rte_SysCon_Variant_VLDR_15

static VAR(boolean, VLDR_VAR_INIT) VeVLDR_b_CPV2_PerDiag_Fail_AD;/* '<S61>/Switch1' */

#endif

#if Rte_SysCon_Variant_VLDR_15

static VAR(boolean, VLDR_VAR_INIT) VeVLDR_b_CPV2_PerfDiag_FltDtct;/* '<S65>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_VLDR_8

static VAR(boolean, VLDR_VAR_INIT) VeVLDR_b_CPV_PerDiag_Fail_AD;/* '<S96>/Switch1' */

#endif

#if Rte_SysCon_Variant_VLDR_8

static VAR(boolean, VLDR_VAR_INIT) VeVLDR_b_CPV_PerfDiag_Enbl_AD;/* '<S94>/Logical33' */

#endif

#if Rte_SysCon_Variant_VLDR_8

static VAR(boolean, VLDR_VAR_INIT) VeVLDR_b_CPV_PerfDiag_FltDtct;/* '<S100>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_VLDR_8

static VAR(boolean, VLDR_VAR_INIT) VeVLDR_b_CPV_Perf_DeltSpdCmdEnbl;/* '<S94>/Logical26' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static VAR(boolean, VLDR_VAR_INIT) VeVLDR_b_CompAcc_EEXV;/* '<S340>/AND' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static VAR(boolean, VLDR_VAR_INIT) VeVLDR_b_CompAcc_OEXV;/* '<S1478>/AND' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static VAR(boolean, VLDR_VAR_INIT) VeVLDR_b_EEXV_PerfDiag_En;/* '<S174>/Logical6' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static VAR(boolean, VLDR_VAR_INIT) VeVLDR_b_EEXV_PresSensSNA_DiagEn;/* '<S264>/Logical16' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static VAR(boolean, VLDR_VAR_INIT) VeVLDR_b_EEXV_PressSensDiag_En;/* '<S264>/Logical34' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static VAR(boolean, VLDR_VAR_INIT) VeVLDR_b_EEXV_PressSensLatch_En;/* '<S264>/Logical6' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static VAR(boolean, VLDR_VAR_INIT) VeVLDR_b_EEXV_PrsElctrFlt_DiagEn;/* '<S221>/Logical6' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static VAR(boolean, VLDR_VAR_INIT) VeVLDR_b_EEXV_TmpElctrFlt_DiagEn;/* '<S355>/Logical6' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static VAR(boolean, VLDR_VAR_INIT) VeVLDR_b_EXV_PerfDiag_En;/* '<S406>/Logical7' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static VAR(boolean, VLDR_VAR_INIT) VeVLDR_b_EXV_PresSensSNA_DiagEn;/* '<S494>/Logical16' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static VAR(boolean, VLDR_VAR_INIT) VeVLDR_b_EXV_PressSensDiag_En;/* '<S494>/Logical34' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static VAR(boolean, VLDR_VAR_INIT) VeVLDR_b_EXV_PressSensLatch_En;/* '<S494>/Logical6' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static VAR(boolean, VLDR_VAR_INIT) VeVLDR_b_EXV_PrsElctrFlt_DiagEn;/* '<S452>/Logical6' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static VAR(boolean, VLDR_VAR_INIT) VeVLDR_b_EXV_TempSensDiag_En;/* '<S631>/Logical11' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static VAR(boolean, VLDR_VAR_INIT) VeVLDR_b_EXV_TempSensSNADiag_En;/* '<S631>/Logical6' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static VAR(boolean, VLDR_VAR_INIT) VeVLDR_b_EXV_TmpElctrFlt_DiagEn;/* '<S594>/Logical6' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static VAR(boolean, VLDR_VAR_INIT) VeVLDR_b_EngRunning_Chk;/* '<S926>/Switch1' */

#endif

#if Rte_SysCon_Variant_VLDR_2

static VAR(boolean, VLDR_VAR_INIT) VeVLDR_b_HCTV_DiagEn;/* '<S715>/Logical2' */

#endif

static VAR(boolean, VLDR_VAR_INIT) VeVLDR_b_HCTV_Leak_DiagEnbl;/* synthesized block */
static VAR(boolean, VLDR_VAR_INIT) VeVLDR_b_HCTV_Leak_FltDtct_B4D;/* synthesized block */

#if Rte_SysCon_Variant_VLDR_2

static VAR(boolean, VLDR_VAR_INIT) VeVLDR_b_HTCV_Leak_FltSymptom;/* '<S715>/Logical' */

#endif

#if Rte_SysCon_Variant_VLDR_2

static VAR(boolean, VLDR_VAR_INIT) VeVLDR_b_HTCV_PinDiagSet;/* '<S700>/Logical3' */

#endif

#if Rte_SysCon_Variant_VLDR_2

static VAR(boolean, VLDR_VAR_INIT) VeVLDR_b_HTCV_Stck_DiagEnbl;/* '<S756>/Logical' */

#endif

#if Rte_SysCon_Variant_VLDR_2

static VAR(boolean, VLDR_VAR_INIT) VeVLDR_b_HTCV_Stck_DiagXYEnbl;/* '<S757>/AND1' */

#endif

#if Rte_SysCon_Variant_VLDR_11

static VAR(boolean, VLDR_VAR_INIT) VeVLDR_b_HTL_PerfDiag_En;/* '<S795>/Logical12' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static VAR(boolean, VLDR_VAR_INIT) VeVLDR_b_HTSoV_StkCls_Diag_En;/* '<S876>/AND' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static VAR(boolean, VLDR_VAR_INIT) VeVLDR_b_HTSoV_StkCls_Flt;/* '<S846>/AND2' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static VAR(boolean, VLDR_VAR_INIT) VeVLDR_b_HTSoV_StkOpn_Diag_En;/* '<S927>/AND' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static VAR(boolean, VLDR_VAR_INIT) VeVLDR_b_HTSoV_StkOpn_Diag_En_BD;/* '<S900>/Logical6' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static VAR(boolean, VLDR_VAR_INIT) VeVLDR_b_HTSoV_StkOpn_Diag_FailSym;/* '<S944>/AND' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static VAR(boolean, VLDR_VAR_INIT) VeVLDR_b_HTSoV_StkOpn_Flt;/* '<S902>/AND2' */

#endif

#if Rte_SysCon_Variant_VLDR_10

static VAR(boolean, VLDR_VAR_INIT) VeVLDR_b_LTR_PerfDiag_En;/* '<S1176>/Logical9' */

#endif

#if Rte_SysCon_Variant_VLDR_5

static VAR(boolean, VLDR_VAR_INIT) VeVLDR_b_LTSOV_StkOff_Diag_En;/* '<S1223>/Logical6' */

#endif

#if Rte_SysCon_Variant_VLDR_5

static VAR(boolean, VLDR_VAR_INIT) VeVLDR_b_LTSOV_StkOn_Diag_En;/* '<S1269>/Logical6' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static VAR(boolean, VLDR_VAR_INIT) VeVLDR_b_OEXV_PerfDiag_En;/* '<S1330>/Logical7' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static VAR(boolean, VLDR_VAR_INIT) VeVLDR_b_OEXV_PressSensDiag_En;/* '<S1420>/Logical34' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static VAR(boolean, VLDR_VAR_INIT) VeVLDR_b_OEXV_PressSensLatch_En;/* '<S1420>/Logical6' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static VAR(boolean, VLDR_VAR_INIT) VeVLDR_b_OEXV_PrsElctrFlt_DiagEn;/* '<S1377>/Logical6' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static VAR(boolean, VLDR_VAR_INIT) VeVLDR_b_OEXV_TmpElctrFlt_DiagEn;/* '<S1511>/Logical6' */

#endif

#if Rte_SysCon_Variant_VLDR_3

static VAR(boolean, VLDR_VAR_INIT) VeVLDR_b_Reset_Latch_App2;/* '<S901>/Logical9' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static VAR(boolean, VLDR_VAR_INIT) VeVLDR_b_WaitTimeEnable;/* '<S582>/Greater  Than1' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static VAR(boolean, VLDR_VAR_INIT) VeVLDR_b_WaitTimeEnable_EEXV;/* '<S343>/Greater  Than1' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static VAR(boolean, VLDR_VAR_INIT) VeVLDR_b_WaitTimeEnable_OEXV;/* '<S1481>/Greater  Than1' */

#endif

#if Rte_SysCon_Variant_VLDR_5

static VAR(boolean, VLDR_VAR_INIT) VeVLDR_b_WaitTimeEnable_StkOff;/* '<S1248>/Greater  Than1' */

#endif

#if Rte_SysCon_Variant_VLDR_5

static VAR(boolean, VLDR_VAR_INIT) VeVLDR_b_WaitTimeEnable_StkOn;/* '<S1295>/Greater  Than1' */

#endif

#if Rte_SysCon_Variant_VLDR_2

static VAR(float32, VLDR_VAR_INIT) VeVLDR_dT_HTCV_Temp_Diff_AS;/* '<S715>/Sum2' */

#endif

#if Rte_SysCon_Variant_VLDR_2

static VAR(float32, VLDR_VAR_INIT) VeVLDR_dT_HTCV_Temp_Diff_IV;/* '<S722>/Switch1' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static VAR(float32, VLDR_VAR_INIT) VeVLDR_dn_CompAccelFilter;/* '<S517>/Switch1' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static VAR(float32, VLDR_VAR_INIT) VeVLDR_dn_CompAccelFilter_EEXV;/* '<S287>/Switch1' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static VAR(float32, VLDR_VAR_INIT) VeVLDR_dn_CompAccelFilter_OEXV;/* '<S1425>/Switch1' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static VAR(float32, VLDR_VAR_INIT) VeVLDR_p_EEXV_Pres_Diff;/* '<S265>/Abs' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static VAR(float32, VLDR_VAR_INIT) VeVLDR_p_EEXV_PressLatch;/* '<S266>/Switch' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static VAR(float32, VLDR_VAR_INIT) VeVLDR_p_EEXV_PressRawData;/* '<S223>/Rounding2' */

#endif

#if Rte_SysCon_Variant_VLDR_1

static VAR(float32, VLDR_VAR_INIT) VeVLDR_p_EEXV_PressSens_Sat_Thr;/* '<S351>/Vector' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static VAR(float32, VLDR_VAR_INIT) VeVLDR_p_EXV_Pres_Diff;/* '<S495>/Abs' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static VAR(float32, VLDR_VAR_INIT) VeVLDR_p_EXV_PressLatch;/* '<S496>/Switch' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static VAR(float32, VLDR_VAR_INIT) VeVLDR_p_EXV_PressRawData;/* '<S454>/Rounding2' */

#endif

#if Rte_SysCon_Variant_VLDR_4

static VAR(float32, VLDR_VAR_INIT) VeVLDR_p_EXV_PressSens_Sat_Thr;/* '<S590>/Vector' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static VAR(float32, VLDR_VAR_INIT) VeVLDR_p_OEXV_Pres_Diff;/* '<S1421>/Abs' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static VAR(float32, VLDR_VAR_INIT) VeVLDR_p_OEXV_PressLatch;/* '<S1423>/Switch' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static VAR(float32, VLDR_VAR_INIT) VeVLDR_p_OEXV_PressRawData;/* '<S1380>/Rounding2' */

#endif

#if Rte_SysCon_Variant_VLDR_6

static VAR(float32, VLDR_VAR_INIT) VeVLDR_p_OEXV_PressSens_Sat_Thr;/* '<S1489>/Vector' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_VLDR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_VLDR
#include "MemMap.h"

CONST(ConstB_VLDR_ac_T, VLDR_VAR_INIT) VLDR_ac_ConstB =
{
    CeDFIB_e_Init,                     /* '<S1644>/Constant' */
    CeDFIB_e_Init,                     /* '<S1645>/Constant' */
    CeDFIB_e_Init,                     /* '<S1646>/Constant' */
    CeDFIB_e_Init,                     /* '<S1647>/Constant' */
    CeDFIB_e_Init,                     /* '<S1648>/Constant' */
    CeDFIB_e_Init,                     /* '<S1649>/Constant' */
    CeDFIB_e_Init,                     /* '<S1650>/Constant' */
    CeDFIB_e_Init,                     /* '<S1651>/Constant' */
    CeDFIB_e_Init,                     /* '<S1652>/Constant' */
    CeDFIB_e_Init,                     /* '<S1653>/Constant' */
    CeDFIB_e_Init,                     /* '<S1654>/Constant' */
    CeDFIB_e_Init,                     /* '<S1655>/Constant' */
    CeDFIB_e_Init,                     /* '<S1656>/Constant' */
    CeDFIB_e_Init,                     /* '<S1657>/Constant' */
    CeDFIB_e_Init,                     /* '<S1658>/Constant' */
    CeDFIB_e_Init,                     /* '<S1659>/Constant' */
    CeDFIB_e_Init,                     /* '<S1660>/Constant' */
    CeDFIB_e_Init,                     /* '<S1661>/Constant' */
    CeDFIB_e_Init,                     /* '<S1662>/Constant' */
    CeDFIB_e_Init,                     /* '<S1663>/Constant' */
    CeDFIB_e_Init,                     /* '<S1664>/Constant' */
    CeDFIB_e_Init,                     /* '<S1665>/Constant' */
    CeDFIB_e_Init,                     /* '<S1666>/Constant' */
    CeDFIB_e_Init                      /* '<S1667>/Constant' */
};

#define STOP_SEC_CONST_UNSPECIFIED_VLDR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_VLDR
#include "MemMap.h"

VAR(B_VLDR_ac_T, VLDR_VAR_INIT) VLDR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_VLDR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_VLDR
#include "MemMap.h"

VAR(DW_VLDR_ac_T, VLDR_VAR_INIT) VLDR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_VLDR
#include "MemMap.h"
#if Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_10 || Rte_SysCon_Variant_VLDR_11 || Rte_SysCon_Variant_VLDR_12 || Rte_SysCon_Variant_VLDR_15 || Rte_SysCon_Variant_VLDR_2 || Rte_SysCon_Variant_VLDR_3 || Rte_SysCon_Variant_VLDR_4 || Rte_SysCon_Variant_VLDR_5 || Rte_SysCon_Variant_VLDR_6 || Rte_SysCon_Variant_VLDR_8

static FUNC(void, VLDR_CODE_LOCAL) VLDR_ac_Fail(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, VLDR_VAR_INIT)
    rty_FaultSts);

#endif

#if Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_10 || Rte_SysCon_Variant_VLDR_11 || Rte_SysCon_Variant_VLDR_12 || Rte_SysCon_Variant_VLDR_15 || Rte_SysCon_Variant_VLDR_2 || Rte_SysCon_Variant_VLDR_3 || Rte_SysCon_Variant_VLDR_4 || Rte_SysCon_Variant_VLDR_5 || Rte_SysCon_Variant_VLDR_6 || Rte_SysCon_Variant_VLDR_8

static FUNC(void, VLDR_CODE_LOCAL) VLDR_ac_Init_a(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, VLDR_VAR_INIT)
    rty_FaultSts);

#endif

#if Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_10 || Rte_SysCon_Variant_VLDR_11 || Rte_SysCon_Variant_VLDR_12 || Rte_SysCon_Variant_VLDR_15 || Rte_SysCon_Variant_VLDR_2 || Rte_SysCon_Variant_VLDR_3 || Rte_SysCon_Variant_VLDR_4 || Rte_SysCon_Variant_VLDR_5 || Rte_SysCon_Variant_VLDR_6 || Rte_SysCon_Variant_VLDR_8

static FUNC(void, VLDR_CODE_LOCAL) VLDR_ac_Pass(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, VLDR_VAR_INIT)
    rty_FaultSts);

#endif

/*
 * Output and update for enable system:
 *    '<S28>/Fail'
 *    '<S65>/Fail'
 *    '<S100>/Fail'
 *    '<S179>/Fail'
 *    '<S228>/Fail'
 *    '<S271>/Fail'
 *    '<S361>/Fail'
 *    '<S411>/Fail'
 *    '<S459>/Fail'
 *    '<S501>/Fail'
 *    ...
 */
#if Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_10 || Rte_SysCon_Variant_VLDR_11 || Rte_SysCon_Variant_VLDR_12 || Rte_SysCon_Variant_VLDR_15 || Rte_SysCon_Variant_VLDR_2 || Rte_SysCon_Variant_VLDR_3 || Rte_SysCon_Variant_VLDR_4 || Rte_SysCon_Variant_VLDR_5 || Rte_SysCon_Variant_VLDR_6 || Rte_SysCon_Variant_VLDR_8

static FUNC(void, VLDR_CODE_LOCAL) VLDR_ac_Fail(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, VLDR_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S28>/Fail' incorporates:
     *  EnablePort: '<S32>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S32>/FaultSts' incorporates:
         *  Constant: '<S38>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Fail;
    }

    /* End of Outputs for SubSystem: '<S28>/Fail' */
}

#endif

/*
 * Output and update for enable system:
 *    '<S28>/Init'
 *    '<S65>/Init'
 *    '<S100>/Init'
 *    '<S179>/Init'
 *    '<S228>/Init'
 *    '<S271>/Init'
 *    '<S361>/Init'
 *    '<S411>/Init'
 *    '<S459>/Init'
 *    '<S501>/Init'
 *    ...
 */
#if Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_10 || Rte_SysCon_Variant_VLDR_11 || Rte_SysCon_Variant_VLDR_12 || Rte_SysCon_Variant_VLDR_15 || Rte_SysCon_Variant_VLDR_2 || Rte_SysCon_Variant_VLDR_3 || Rte_SysCon_Variant_VLDR_4 || Rte_SysCon_Variant_VLDR_5 || Rte_SysCon_Variant_VLDR_6 || Rte_SysCon_Variant_VLDR_8

static FUNC(void, VLDR_CODE_LOCAL) VLDR_ac_Init_a(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, VLDR_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S28>/Init' incorporates:
     *  EnablePort: '<S33>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S33>/FaultSts' incorporates:
         *  Constant: '<S39>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Init;
    }

    /* End of Outputs for SubSystem: '<S28>/Init' */
}

#endif

/*
 * Output and update for enable system:
 *    '<S28>/Pass'
 *    '<S65>/Pass'
 *    '<S100>/Pass'
 *    '<S179>/Pass'
 *    '<S228>/Pass'
 *    '<S271>/Pass'
 *    '<S361>/Pass'
 *    '<S411>/Pass'
 *    '<S459>/Pass'
 *    '<S501>/Pass'
 *    ...
 */
#if Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_10 || Rte_SysCon_Variant_VLDR_11 || Rte_SysCon_Variant_VLDR_12 || Rte_SysCon_Variant_VLDR_15 || Rte_SysCon_Variant_VLDR_2 || Rte_SysCon_Variant_VLDR_3 || Rte_SysCon_Variant_VLDR_4 || Rte_SysCon_Variant_VLDR_5 || Rte_SysCon_Variant_VLDR_6 || Rte_SysCon_Variant_VLDR_8

static FUNC(void, VLDR_CODE_LOCAL) VLDR_ac_Pass(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, VLDR_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S28>/Pass' incorporates:
     *  EnablePort: '<S34>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S34>/FaultSts' incorporates:
         *  Constant: '<S40>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Pass;
    }

    /* End of Outputs for SubSystem: '<S28>/Pass' */
}

#endif

/* Model step function for TID1 */
FUNC(void, VLDR_CODE) VLDR_MedTED(void) /* Explicit Task: MedTED */
{

#if (Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_12 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_15 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_4 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8)

    float32 tmpRead;

#endif

#if (Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_12 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_15 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_4 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8)

    boolean tmpRead_0;

#endif

#if (Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_12 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_15 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_4 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8)

    boolean tmpRead_1;

#endif

#if (Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_12 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_15 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_4 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8)

    float32 tmpRead_2;

#endif

#if Rte_SysCon_Variant_VLDR_3

    float32 tmpRead_3;

#endif

#if (Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_12 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_15 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_4 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8)

    boolean tmpRead_4;

#endif

#if (Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_12 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_15 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_4 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8)

    boolean tmpRead_5;

#endif

#if Rte_SysCon_Variant_VLDR_3

    float32 tmpRead_6;

#endif

#if (Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_12 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_15 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_4 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8)

    boolean tmpRead_7;

#endif

#if (Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_12 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_15 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_4 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8)

    TeESSR_e_EngStrtStpMd tmpRead_8;

#endif

#if Rte_SysCon_Variant_VLDR_2

    float32 tmpRead_9;

#endif

#if Rte_SysCon_Variant_VLDR_8

    TeTAIR_e_CPV_Calibration_Sts tmpRead_a;

#endif

#if (Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_12 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_15 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_4 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8)

    TeBPCR_e_LIN_BusOff tmpRead_b;

#endif

#if (Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_12 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_15 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_4 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8)

    TeBPCR_e_LOC_BCP tmpRead_c;

#endif

#if Rte_SysCon_Variant_VLDR_4

    float32 tmpRead_d;

#endif

#if Rte_SysCon_Variant_VLDR_4

    float32 tmpRead_e;

#endif

#if Rte_SysCon_Variant_VLDR_10 || Rte_SysCon_Variant_VLDR_11 || Rte_SysCon_Variant_VLDR_2 || Rte_SysCon_Variant_VLDR_3 || Rte_SysCon_Variant_VLDR_4 || Rte_SysCon_Variant_VLDR_5 || Rte_SysCon_Variant_VLDR_6

    uint32 tmpRead_f;

#endif

#if Rte_SysCon_Variant_VLDR_10

    float32 tmpRead_g;

#endif

#if Rte_SysCon_Variant_VLDR_15

    TeTAIR_e_CPV_Calibration_Sts tmpRead_h;

#endif

#if Rte_SysCon_Variant_VLDR_15

    float32 tmpRead_i;

#endif

#if Rte_SysCon_Variant_VLDR_10 || Rte_SysCon_Variant_VLDR_11 || Rte_SysCon_Variant_VLDR_12 || Rte_SysCon_Variant_VLDR_15 || Rte_SysCon_Variant_VLDR_8

    boolean rtb_Logical1;

#endif

#if (!Rte_SysCon_Variant_VLDR_7 && (!(Rte_SysCon_Variant_VLDR_15 && Rte_SysCon_Variant_VLDR_7) && !(Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8) && !(Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) && !(Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) && !(Rte_SysCon_Variant_VLDR_4 && Rte_SysCon_Variant_VLDR_7) && !(Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) && !(Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) && !(Rte_SysCon_Variant_VLDR_12 && Rte_SysCon_Variant_VLDR_7) && !(Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) && !(Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) && !(Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7))) || Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_10 || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 || (!Rte_SysCon_Variant_VLDR_8 && !Rte_SysCon_Variant_VLDR_6 && !Rte_SysCon_Variant_VLDR_5 && !Rte_SysCon_Variant_VLDR_4 && !Rte_SysCon_Variant_VLDR_3 && !Rte_SysCon_Variant_VLDR_2 && !Rte_SysCon_Variant_VLDR_15 && !Rte_SysCon_Variant_VLDR_12 && !(Rte_SysCon_Variant_VLDR_15 && Rte_SysCon_Variant_VLDR_7) && !(Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8) && !(Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) && !(Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) && !(Rte_SysCon_Variant_VLDR_4 && Rte_SysCon_Variant_VLDR_7) && !(Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) && !(Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) && !(Rte_SysCon_Variant_VLDR_12 && Rte_SysCon_Variant_VLDR_7) && !(Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) && !(Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) && !(Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7))) || Rte_SysCon_Variant_VLDR_12 || Rte_SysCon_Variant_VLDR_15 || Rte_SysCon_Variant_VLDR_2 || Rte_SysCon_Variant_VLDR_3 || Rte_SysCon_Variant_VLDR_4 || Rte_SysCon_Variant_VLDR_5 || Rte_SysCon_Variant_VLDR_6 || Rte_SysCon_Variant_VLDR_8

    boolean rtb_VM_Conditional_Signal_DsblD;

#endif

#if (!Rte_SysCon_Variant_VLDR_7 && (!(Rte_SysCon_Variant_VLDR_15 && Rte_SysCon_Variant_VLDR_7) && !(Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8) && !(Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) && !(Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) && !(Rte_SysCon_Variant_VLDR_4 && Rte_SysCon_Variant_VLDR_7) && !(Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) && !(Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) && !(Rte_SysCon_Variant_VLDR_12 && Rte_SysCon_Variant_VLDR_7) && !(Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) && !(Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) && !(Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7))) || Rte_SysCon_Variant_VLDR_1 || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_10 || (!Rte_SysCon_Variant_VLDR_8 && !Rte_SysCon_Variant_VLDR_6 && !Rte_SysCon_Variant_VLDR_5 && !Rte_SysCon_Variant_VLDR_4 && !Rte_SysCon_Variant_VLDR_3 && !Rte_SysCon_Variant_VLDR_2 && !Rte_SysCon_Variant_VLDR_15 && !Rte_SysCon_Variant_VLDR_12 && !Rte_SysCon_Variant_VLDR_11 && !(Rte_SysCon_Variant_VLDR_15 && Rte_SysCon_Variant_VLDR_7) && !(Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8) && !(Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) && !(Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) && !(Rte_SysCon_Variant_VLDR_4 && Rte_SysCon_Variant_VLDR_7) && !(Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) && !(Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) && !(Rte_SysCon_Variant_VLDR_12 && Rte_SysCon_Variant_VLDR_7) && !(Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) && !(Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) && !(Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7))) || Rte_SysCon_Variant_VLDR_11 || Rte_SysCon_Variant_VLDR_12 || Rte_SysCon_Variant_VLDR_15 || Rte_SysCon_Variant_VLDR_2 || Rte_SysCon_Variant_VLDR_3 || Rte_SysCon_Variant_VLDR_4 || Rte_SysCon_Variant_VLDR_5 || Rte_SysCon_Variant_VLDR_6 || Rte_SysCon_Variant_VLDR_8

    boolean rtb_VM_Conditional_Signal_PostC;

#endif

#if Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_11 || Rte_SysCon_Variant_VLDR_2 || Rte_SysCon_Variant_VLDR_4 || Rte_SysCon_Variant_VLDR_8

    boolean rtb_VM_Conditional_Signal_CPV_D;

#endif

#if Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_2 || Rte_SysCon_Variant_VLDR_4 || Rte_SysCon_Variant_VLDR_8

    boolean rtb_VM_Conditional_Signal_CPV_f;

#endif

#if Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_4 || Rte_SysCon_Variant_VLDR_8

    boolean rtb_VM_Conditional_Signal_CPV_n;

#endif

#if Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_4 || Rte_SysCon_Variant_VLDR_8

    boolean rtb_VM_Conditional_Signal_CPV_m;

#endif

#if (!(!Rte_SysCon_Variant_VLDR_13) && Rte_SysCon_Variant_VLDR_8) || (!Rte_SysCon_Variant_VLDR_13 && Rte_SysCon_Variant_VLDR_8) || Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_4

    boolean rtb_VM_Conditional_Signal_CPV_d;

#endif

#if (!(!Rte_SysCon_Variant_VLDR_13) && Rte_SysCon_Variant_VLDR_8) || (!Rte_SysCon_Variant_VLDR_13 && Rte_SysCon_Variant_VLDR_8) || Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_4

    boolean rtb_VM_Conditional_Signal_CPV_l;

#endif

#if (!(!Rte_SysCon_Variant_VLDR_13) && Rte_SysCon_Variant_VLDR_8) || (!Rte_SysCon_Variant_VLDR_13 && Rte_SysCon_Variant_VLDR_8) || Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_4

    boolean rtb_VM_Conditional_Signal_CP_cz;

#endif

#if Rte_SysCon_Variant_VLDR_10 || Rte_SysCon_Variant_VLDR_11 || Rte_SysCon_Variant_VLDR_12 || Rte_SysCon_Variant_VLDR_15 || Rte_SysCon_Variant_VLDR_8

    boolean rtb_Logical28;

#endif

    float32 rtb_VM_Conditional_Signal_BF1_S;
    boolean rtb_VariantMergeForOutportDFI_o;

#if Rte_SysCon_Variant_VLDR_1

    float32 rtb_TmpSignalConversionAtVeR_co;

#endif

#if Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_2 || Rte_SysCon_Variant_VLDR_3 || Rte_SysCon_Variant_VLDR_4 || Rte_SysCon_Variant_VLDR_5 || Rte_SysCon_Variant_VLDR_6

    boolean rtb_Logical1_pzo;

#endif

#if Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_2 || Rte_SysCon_Variant_VLDR_4 || Rte_SysCon_Variant_VLDR_5 || Rte_SysCon_Variant_VLDR_6

    boolean rtb_Logical2_fw;

#endif

    boolean rtb_UnitDelay_id;

#if Rte_SysCon_Variant_VLDR_1

    float32 rtb_Switch1_ja;

#endif

#if Rte_SysCon_Variant_VLDR_1

    float32 rtb_Switch1_ncz;

#endif

    boolean rtb_VariantMergeForOutportDF_ko;

#if Rte_SysCon_Variant_VLDR_4

    float32 rtb_TmpSignalConversionAtVeRC_i;

#endif

#if Rte_SysCon_Variant_VLDR_4

    float32 rtb_Switch1_mq;

#endif

#if Rte_SysCon_Variant_VLDR_4

    float32 rtb_Switch1_fq;

#endif

#if Rte_SysCon_Variant_VLDR_2 || Rte_SysCon_Variant_VLDR_3 || Rte_SysCon_Variant_VLDR_6

    float32 rtb_TmpSignalConversionAtVeTAIR;

#endif

#if Rte_SysCon_Variant_VLDR_2

    float32 rtb_Switch1_ln;

#endif

#if Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_3 || Rte_SysCon_Variant_VLDR_5 || Rte_SysCon_Variant_VLDR_6

    boolean rtb_TmpSignalConversionAtVeR_go;

#endif

#if Rte_SysCon_Variant_VLDR_3

    float32 rtb_Switch1_bc;

#endif

#if Rte_SysCon_Variant_VLDR_10 || Rte_SysCon_Variant_VLDR_5 || Rte_SysCon_Variant_VLDR_6

    boolean rtb_TmpSignalConversionAtVeRC_e;

#endif

    boolean rtb_VariantMergeForOutportDFIR_;

#if Rte_SysCon_Variant_VLDR_6

    float32 rtb_TmpSignalConversionAtVeRC_g;

#endif

#if Rte_SysCon_Variant_VLDR_6

    float32 rtb_Switch1_d;

#endif

#if Rte_SysCon_Variant_VLDR_6

    float32 rtb_Switch1_mb;

#endif

#if Rte_SysCon_Variant_VLDR_11 || Rte_SysCon_Variant_VLDR_12 || Rte_SysCon_Variant_VLDR_3

    float32 rtb_TmpSignalConversionAtVeRC_c;

#endif

#if Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_10 || Rte_SysCon_Variant_VLDR_11 || Rte_SysCon_Variant_VLDR_12 || Rte_SysCon_Variant_VLDR_15 || Rte_SysCon_Variant_VLDR_2 || Rte_SysCon_Variant_VLDR_3 || Rte_SysCon_Variant_VLDR_4 || Rte_SysCon_Variant_VLDR_5 || Rte_SysCon_Variant_VLDR_6 || Rte_SysCon_Variant_VLDR_8

    boolean rtb_TmpSignalConversionAtVeDFIR;

#endif

#if (Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || Rte_SysCon_Variant_VLDR_12 || Rte_SysCon_Variant_VLDR_15 || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || Rte_SysCon_Variant_VLDR_4 || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8)

    boolean rtb_UnitDelay_dr;

#endif

#if Rte_SysCon_Variant_VLDR_11 || Rte_SysCon_Variant_VLDR_12 || Rte_SysCon_Variant_VLDR_3

    boolean rtb_TmpSignalConversionAtVeT_nu;

#endif

#if Rte_SysCon_Variant_VLDR_1 || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || Rte_SysCon_Variant_VLDR_12 || Rte_SysCon_Variant_VLDR_15 || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || Rte_SysCon_Variant_VLDR_4 || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) || Rte_SysCon_Variant_VLDR_8

    boolean rtb_LogicalOperator7;

#endif

#if (Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || Rte_SysCon_Variant_VLDR_12 || Rte_SysCon_Variant_VLDR_15 || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || Rte_SysCon_Variant_VLDR_4 || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8)

    boolean rtb_RelationalOperator3_f;

#endif

#if Rte_SysCon_Variant_VLDR_11 || Rte_SysCon_Variant_VLDR_12

    float32 rtb_TmpSignalConversionAtVeT_kz;

#endif

#if Rte_SysCon_Variant_VLDR_15 || Rte_SysCon_Variant_VLDR_8

    float32 rtb_TmpSignalConversionAtVeRC_p;

#endif

#if Rte_SysCon_Variant_VLDR_1 || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || Rte_SysCon_Variant_VLDR_12 || (Rte_SysCon_Variant_VLDR_15 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || Rte_SysCon_Variant_VLDR_4 || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8)

    boolean rtb_VM_Conditional_Signal_Logic;

#endif

#if Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_2 || Rte_SysCon_Variant_VLDR_4 || Rte_SysCon_Variant_VLDR_8

    boolean rtb_VariantMerge_For_Variant_So;

#endif

#if Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_4 || Rte_SysCon_Variant_VLDR_8

    boolean rtb_VariantMerge_For_Variant__h;

#endif

#if Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_8

    float32 rtb_TmpSignalConversionAtVeRC_a;

#endif

#if Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_2 || Rte_SysCon_Variant_VLDR_4 || Rte_SysCon_Variant_VLDR_8

    boolean rtb_TmpSignalConversionAtVeT_a4;

#endif

#if Rte_SysCon_Variant_VLDR_5 || Rte_SysCon_Variant_VLDR_6

    boolean rtb_Logical2_nq;

#endif

#if Rte_SysCon_Variant_VLDR_5 || Rte_SysCon_Variant_VLDR_6

    boolean rtb_NOT4;

#endif

#if Rte_SysCon_Variant_VLDR_4 || Rte_SysCon_Variant_VLDR_5 || Rte_SysCon_Variant_VLDR_6

    float32 rtb_TmpSignalConversionAtVeTR_a;

#endif

#if Rte_SysCon_Variant_VLDR_10

    float32 rtb_TmpSignalConversionAtVeR_mt;

#endif

#if Rte_SysCon_Variant_VLDR_10

    boolean rtb_Logical3_oe;

#endif

#if (Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || Rte_SysCon_Variant_VLDR_12 || Rte_SysCon_Variant_VLDR_15 || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || Rte_SysCon_Variant_VLDR_4 || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8)

    boolean rtb_AND_ea;

#endif

#if (Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || Rte_SysCon_Variant_VLDR_12 || (Rte_SysCon_Variant_VLDR_15 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_4 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8)

    float32 rtb_Switch1_c;

#endif

#if (Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || Rte_SysCon_Variant_VLDR_12 || (Rte_SysCon_Variant_VLDR_15 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || Rte_SysCon_Variant_VLDR_4 || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8)

    boolean rtb_AND_e0;

#endif

#if Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_10 || Rte_SysCon_Variant_VLDR_11 || Rte_SysCon_Variant_VLDR_12 || Rte_SysCon_Variant_VLDR_15 || Rte_SysCon_Variant_VLDR_4 || Rte_SysCon_Variant_VLDR_6 || Rte_SysCon_Variant_VLDR_8

    uint16 rtb_Switch1_dj;

#endif

    boolean rtb_Comparison4_i;
    boolean rtb_Logical12_f3;

#if Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_10 || Rte_SysCon_Variant_VLDR_4 || Rte_SysCon_Variant_VLDR_6

    float32 rtb_TmpSignalConversionAtVeT_dk;

#endif

#if Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_6

    boolean rtb_TmpSignalConversionAtVeTA_i;

#endif

#if Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_11 || Rte_SysCon_Variant_VLDR_2 || Rte_SysCon_Variant_VLDR_3 || Rte_SysCon_Variant_VLDR_4

    boolean rtb_Logical41_a;

#endif

#if Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_4

    float32 rtb_TmpSignalConversionAtVeT_ld;

#endif

    boolean rtb_Logical12_c5;
    boolean rtb_UnitDelay1_e;

#if Rte_SysCon_Variant_VLDR_11 || Rte_SysCon_Variant_VLDR_2 || Rte_SysCon_Variant_VLDR_3 || Rte_SysCon_Variant_VLDR_4

    boolean rtb_Logical44;

#endif

#if Rte_SysCon_Variant_VLDR_4

    float32 rtb_TmpSignalConversionAtVeTA_o;

#endif

    boolean rtb_UnitDelay_lwd;

#if Rte_SysCon_Variant_VLDR_11 || Rte_SysCon_Variant_VLDR_2 || Rte_SysCon_Variant_VLDR_4

    boolean rtb_Logical8_h5;

#endif

#if Rte_SysCon_Variant_VLDR_2 || Rte_SysCon_Variant_VLDR_4

    float32 rtb_TmpSignalConversionAtVeTRIR;

#endif

#if Rte_SysCon_Variant_VLDR_11 || Rte_SysCon_Variant_VLDR_2 || Rte_SysCon_Variant_VLDR_5

    float32 rtb_TmpSignalConversionAtVeRCVR;

#endif

#if Rte_SysCon_Variant_VLDR_11 || Rte_SysCon_Variant_VLDR_2 || Rte_SysCon_Variant_VLDR_3

    boolean rtb_TmpSignalConversionAtVeT_cs;

#endif

#if Rte_SysCon_Variant_VLDR_3

    float32 rtb_TmpSignalConversionAtVePMIR;

#endif

#if Rte_SysCon_Variant_VLDR_3 || Rte_SysCon_Variant_VLDR_5

    boolean rtb_TmpSignalConversionAtVeTHDR;

#endif

#if Rte_SysCon_Variant_VLDR_3 || Rte_SysCon_Variant_VLDR_5

    boolean rtb_TmpSignalConversionAtVeTMIR;

#endif

#if Rte_SysCon_Variant_VLDR_3

    boolean rtb_Logical6_j;

#endif

    boolean rtb_Comparison4_k;
    boolean rtb_Logical11;

#if Rte_SysCon_Variant_VLDR_6

    boolean rtb_Logical41;

#endif

#if Rte_SysCon_Variant_VLDR_6

    float32 rtb_TmpSignalConversionAtVeTA_p;

#endif

#if Rte_SysCon_Variant_VLDR_1

    float32 rtb_Switch1_o0;

#endif

#if Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_4

    float32 rtb_TmpSignalConversionAtVeT_dd;

#endif

#if Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_8

    float32 rtb_Switch1_np;

#endif

#if Rte_SysCon_Variant_VLDR_4

    float32 rtb_Switch1_e4v;

#endif

#if Rte_SysCon_Variant_VLDR_4

    float32 rtb_TmpSignalConversionAtVeT_d0;

#endif

    boolean rtb_AND_po;

#if Rte_SysCon_Variant_VLDR_3

    boolean rtb_AND_bb;

#endif

#if Rte_SysCon_Variant_VLDR_3

    float32 rtb_Switch1_lv;

#endif

#if Rte_SysCon_Variant_VLDR_6

    float32 rtb_Switch1_p;

#endif

#if Rte_SysCon_Variant_VLDR_6

    float32 rtb_TmpSignalConversionAtVeTA_b;

#endif

#if Rte_SysCon_Variant_VLDR_2

    uint8 rtb_TmpSignalConversionAtVeDM_a;

#endif

#if Rte_SysCon_Variant_VLDR_2

    uint8 rtb_TmpSignalConversionAtVeDMAB;

#endif

#if Rte_SysCon_Variant_VLDR_3

    boolean rtb_AND_or;

#endif

#if Rte_SysCon_Variant_VLDR_3

    boolean rtb_OR1_e4;

#endif

#if Rte_SysCon_Variant_VLDR_5 || Rte_SysCon_Variant_VLDR_6

    boolean rtb_Logical24_pk;

#endif

#if Rte_SysCon_Variant_VLDR_5

    float32 rtb_Switch1_mp;

#endif

#if Rte_SysCon_Variant_VLDR_5 || Rte_SysCon_Variant_VLDR_6

    boolean rtb_TmpSignalConversionAtVeCPDR;

#endif

#if Rte_SysCon_Variant_VLDR_5 || Rte_SysCon_Variant_VLDR_6

    boolean rtb_AND_ck;

#endif

#if Rte_SysCon_Variant_VLDR_5

    float32 rtb_Switch1_mh;

#endif

#if Rte_SysCon_Variant_VLDR_5 || Rte_SysCon_Variant_VLDR_6

    boolean rtb_OR1_dx;

#endif

#if Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_10 || Rte_SysCon_Variant_VLDR_11 || Rte_SysCon_Variant_VLDR_12 || Rte_SysCon_Variant_VLDR_15 || Rte_SysCon_Variant_VLDR_2 || Rte_SysCon_Variant_VLDR_3 || Rte_SysCon_Variant_VLDR_4 || Rte_SysCon_Variant_VLDR_6 || Rte_SysCon_Variant_VLDR_8

    TePMTR_e_ThrmlDevisEnbl rtb_TmpSignalConversionAtVePMTR;

#endif

#if Rte_SysCon_Variant_VLDR_3

    TeTHMR_e_Eng_Htr_HTSOV_St rtb_TmpSignalConversionAtVeTHMR;

#endif

#if Rte_SysCon_Variant_VLDR_1

    TeTAIR_e_EXV_Calibration_Sts rtb_TmpSignalConversionAtVeTA_e;

#endif

#if Rte_SysCon_Variant_VLDR_4

    TeTAIR_e_EXV_Calibration_Sts rtb_TmpSignalConversionAtVeTA_c;

#endif

#if Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_4 || Rte_SysCon_Variant_VLDR_6

    TeTHMR_e_BatThrmlSt rtb_TmpSignalConversionAtVeTH_j;

#endif

#if Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_6

    TeTAIR_e_CompStat rtb_TmpSignalConversionAtVeT_a5;

#endif

#if Rte_SysCon_Variant_VLDR_6

    TeTAIR_e_EXV_Calibration_Sts rtb_TmpSignalConversionAtVeT_cz;

#endif

#if Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_12 || Rte_SysCon_Variant_VLDR_2 || Rte_SysCon_Variant_VLDR_3 || Rte_SysCon_Variant_VLDR_4 || Rte_SysCon_Variant_VLDR_5 || Rte_SysCon_Variant_VLDR_6

    uint32 rtb_UnitDelay_ly_tmp;

#endif

#if Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_2 || Rte_SysCon_Variant_VLDR_3 || Rte_SysCon_Variant_VLDR_4 || Rte_SysCon_Variant_VLDR_5 || Rte_SysCon_Variant_VLDR_6

    sint32 rtb_VariantMergeForOutportDFI_0;

#endif

#if Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_2 || Rte_SysCon_Variant_VLDR_3 || Rte_SysCon_Variant_VLDR_4 || Rte_SysCon_Variant_VLDR_5 || Rte_SysCon_Variant_VLDR_6

    sint32 rtb_VariantMergeForOutportDFI_1;

#endif

#if Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_2 || Rte_SysCon_Variant_VLDR_3 || Rte_SysCon_Variant_VLDR_4 || Rte_SysCon_Variant_VLDR_5 || Rte_SysCon_Variant_VLDR_6

    uint32 rtb_VariantMergeForOutportDFI_2;

#endif

#if Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_2 || Rte_SysCon_Variant_VLDR_3 || Rte_SysCon_Variant_VLDR_4 || Rte_SysCon_Variant_VLDR_5 || Rte_SysCon_Variant_VLDR_6

    sint32 rtb_VariantMergeForOutportDFI_3;

#endif

#if Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_4 || Rte_SysCon_Variant_VLDR_5 || Rte_SysCon_Variant_VLDR_6

    uint32 rtb_VariantMergeForOutportDFI_4;

#endif

#if Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_4 || Rte_SysCon_Variant_VLDR_6

    uint32 rtb_Comparison4_mj_tmp;

#endif

#if Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_4 || Rte_SysCon_Variant_VLDR_6

    uint32 rtb_VM_Conditional_Signal_CPV_e;

#endif

#if Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_4 || Rte_SysCon_Variant_VLDR_6

    uint32 VeVLDR_b_EEXV_PrsElctrFlt_DiagE;

#endif

#if Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_4 || Rte_SysCon_Variant_VLDR_5 || Rte_SysCon_Variant_VLDR_6

    TeDFIB_e_FaultDebounceStatus VariantMergeForOutportEEXV_Pr_k;

#endif

#if Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_4 || Rte_SysCon_Variant_VLDR_5 || Rte_SysCon_Variant_VLDR_6

    sint32 rtb_Comparison4_mj_tmp_0;

#endif

#if Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_4 || Rte_SysCon_Variant_VLDR_6

    uint32 rtb_Comparison4_mj_tmp_1;

#endif

#if Rte_SysCon_Variant_VLDR_4

    sint32 rtb_UnitDelay1_o2_tmp;

#endif

#if Rte_SysCon_Variant_VLDR_4

    sint32 rtb_UnitDelay1_o2_tmp_0;

#endif

#if Rte_SysCon_Variant_VLDR_4

    uint32 rtb_UnitDelay1_o2_tmp_1;

#endif

#if Rte_SysCon_Variant_VLDR_4

    sint32 rtb_UnitDelay1_o2_tmp_2;

#endif

#if Rte_SysCon_Variant_VLDR_4

    uint32 rtb_UnitDelay1_o2_tmp_3;

#endif

#if Rte_SysCon_Variant_VLDR_4

    sint32 rtb_UnitDelay1_o2_tmp_4;

#endif

#if Rte_SysCon_Variant_VLDR_4

    uint32 rtb_UnitDelay1_o2_tmp_5;

#endif

#if Rte_SysCon_Variant_VLDR_4

    sint32 rtb_UnitDelay1_o2_tmp_6;

#endif

#if Rte_SysCon_Variant_VLDR_4

    uint32 rtb_UnitDelay1_o2_tmp_7;

#endif

#if Rte_SysCon_Variant_VLDR_4

    sint32 rtb_UnitDelay1_o2_tmp_8;

#endif

#if Rte_SysCon_Variant_VLDR_4

    uint32 rtb_UnitDelay1_o2_tmp_9;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/VLDR_MedTED'
     */
    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostComm_HybPropSysCoolCntrlVal_E' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostComm_HybPropSysCoolCntrlVal_E'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostComm_HybPropSysCoolCntrlVal_E_Value
        (&VLDR_ac_DW.StatusByte_LostComm_HybPropSysC);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_HybPropSysCoolCntrlVal_E_Perf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HybPropSysCoolCntrlVal_E_Perf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HybPropSysCoolCntrlVal_E_Perf_Value
        (&VLDR_ac_DW.StatusByte_HybPropSysCoolCntrlV);

    /* DataStoreWrite: '<S1>/Data Store Write1' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HB_PSC_CtrlValCCktPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HB_PSC_CtrlValCCktPerf_Value
        (&VLDR_ac_DW.StatusByte_HB_PSC_CtrlValCCktPe);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_HB_PSC_CtrlValBCktPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HB_PSC_CtrlValBCktPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HB_PSC_CtrlValBCktPerf_Value
        (&VLDR_ac_DW.StatusByte_HB_PSC_CtrlValBCktPe);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_HB_PSC_CtrlValACktPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HB_PSC_CtrlValACktPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HB_PSC_CtrlValACktPerf_Value
        (&VLDR_ac_DW.StatusByte_HB_PSC_CtrlValACktPe);

    /* DataStoreWrite: '<S1>/StatusByte_LostCommEngCoolbypsVlvD' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommEngCoolbypsVlvD'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommEngCoolbypsVlvD_Value
        (&VLDR_ac_DW.StatusByte_LostCommEngCoolbypsV);

    /* DataStoreWrite: '<S1>/Data Store Write' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_EngCoolbypsVlvDPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_EngCoolbypsVlvDPerf_Value
        (&VLDR_ac_DW.StatusByte_EngCoolbypsVlvDPerf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_HybBattCooTempSnsrDPer' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HybBattCooTempSnsrDPer'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HybBattCooTempSnsrDPer_Value
        (&VLDR_ac_DW.StatusByte_HybBattCooTempSnsrDP);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_HybBattCooTempSnsrCPer' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HybBattCooTempSnsrCPer'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HybBattCooTempSnsrCPer_Value
        (&VLDR_ac_DW.StatusByte_HybBattCooTempSnsrCP);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LosCommBECM_A_CANC11' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LosCommBECM_A_CANC11'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LosCommBECM_A_CANC11_Value
        (&VLDR_ac_DW.StatusByte_LosCommBECM_A_CANC11);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_InvData_BECM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_BECM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_BECM_Value
        (&VLDR_ac_DW.StatusByte_InvData_BECM);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_InvData_BECM_CANC11' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_BECM_CANC11'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_BECM_CANC11_Value
        (&VLDR_ac_DW.StatusByte_InvData_BECM_CANC11);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CommBus_B_Off' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CommBus_B_Off'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CommBus_B_Off_Value
        (&VLDR_ac_DW.StatusByte_CommBus_B_Off);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_BattCoolPmpPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BattCoolPmpPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BattCoolPmpPerf_Value
        (&VLDR_ac_DW.StatusByte_BattCoolPmpPerf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_BattCoolPmpOveSpd' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BattCoolPmpOveSpd'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BattCoolPmpOveSpd_Value
        (&VLDR_ac_DW.StatusByte_BattCoolPmpOveSpd);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_AC_RefrigTempSnsrBCkt' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigTempSnsrBCkt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigTempSnsrBCkt_Value
        (&VLDR_ac_DW.StatusByte_AC_RefrigTempSnsrBCk);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_AC_RefrigTempSnsrAPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigTempSnsrAPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigTempSnsrAPerf_Value
        (&VLDR_ac_DW.StatusByte_AC_RefrigTempSnsrAPe);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_AC_RefrigTempSnsrACkt' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigTempSnsrACkt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigTempSnsrACkt_Value
        (&VLDR_ac_DW.StatusByte_AC_RefrigTempSnsrACk);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_AC_RefrigExpVlvActCtrCktPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigExpVlvActCtrCktPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigExpVlvActCtrCktPerf_Value
        (&VLDR_ac_DW.StatusByte_AC_RefrigExpVlvActCt);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_AC_RefrigTempSnsrBPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigTempSnsrBPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigTempSnsrBPerf_Value
        (&VLDR_ac_DW.StatusByte_AC_RefrigTempSnsrBPe);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommACRefrigExpVlvActA' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommACRefrigExpVlvActA'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommACRefrigExpVlvActA_Value
        (&VLDR_ac_DW.StatusByte_LostCommACRefrigExpV);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_AC_RefrigTempSnsrDCkt' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigTempSnsrDCkt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigTempSnsrDCkt_Value
        (&VLDR_ac_DW.StatusByte_AC_RefrigTempSnsrDCk);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_AC_RefrigTempSnsr4CktPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigTempSnsr4CktPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigTempSnsr4CktPerf_Value
        (&VLDR_ac_DW.StatusByte_AC_RefrigTempSnsr4Ck);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_AC_RefrigPresSnsrDCkt' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigPresSnsrDCkt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigPresSnsrDCkt_Value
        (&VLDR_ac_DW.StatusByte_AC_RefrigPresSnsrDCk);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_AC_RefrigExpVlvActD_CntrlCktPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigExpVlvActD_CntrlCktPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigExpVlvActD_CntrlCktPerf_Value
        (&VLDR_ac_DW.StatusByte_AC_RefrigExpVlvActD_);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_AC_RefrigPresSnsrDCktPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigPresSnsrDCktPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigPresSnsrDCktPerf_Value
        (&VLDR_ac_DW.StatusByte_AC_RefrigPresSnsrD_b);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommACRefrigExpVlvActD' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommACRefrigExpVlvActD'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommACRefrigExpVlvActD_Value
        (&VLDR_ac_DW.StatusByte_LostCommACRefrigEx_c);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_MtrElect_CoolPumBCtrlPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_MtrElect_CoolPumBCtrlPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_MtrElect_CoolPumBCtrlPerf_Value
        (&VLDR_ac_DW.StatusByte_MtrElect_CoolPumBCtr);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_HybEvBatPacCoolCtrlVlv2CtrlCktLo' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HybEvBatPacCoolCtrlVlv2CtrlCktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HybEvBatPacCoolCtrlVlv2CtrlCktLo_Value
        (&VLDR_ac_DW.StatusByte_HybEvBatPacCoolCtr_p);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_HybEvBatPacCoolCtrlVlv2CtrlCktHi' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HybEvBatPacCoolCtrlVlv2CtrlCktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HybEvBatPacCoolCtrlVlv2CtrlCktHi_Value
        (&VLDR_ac_DW.StatusByte_HybEvBatPacCoolCtrlV);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CommBusOff' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CommBusOff'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CommBusOff_Value
        (&VLDR_ac_DW.StatusByte_CommBusOff);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommHB_PSCCooCtrlVlvB' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommHB_PSCCooCtrlVlvB'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommHB_PSCCooCtrlVlvB_Value
        (&VLDR_ac_DW.StatusByte_LostCommHB_PSCCooCtr);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_HybEvBatPacCoolCtrlVlvBPerfStkOff' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HybEvBatPacCoolCtrlVlvBPerfStkOff'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HybEvBatPacCoolCtrlVlvBPerfStkOff_Value
        (&VLDR_ac_DW.StatusByte_HybEvBatPacCoolCtr_n);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_MtrElect_CT_SnsrPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_MtrElect_CT_SnsrPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_MtrElect_CT_SnsrPerf_Value
        (&VLDR_ac_DW.StatusByte_MtrElect_CT_SnsrPerf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_MtrElect_CT_SnsrCktLo' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_MtrElect_CT_SnsrCktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_MtrElect_CT_SnsrCktLo_Value
        (&VLDR_ac_DW.StatusByte_MtrElect_CT_SnsrCktL);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_MtrElect_CT_SnsrCktHi' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_MtrElect_CT_SnsrCktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_MtrElect_CT_SnsrCktHi_Value
        (&VLDR_ac_DW.StatusByte_MtrElect_CT_SnsrCktH);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LosCommBECM_A' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LosCommBECM_A'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LosCommBECM_A_Value
        (&VLDR_ac_DW.StatusByte_LosCommBECM_A);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_HybEvBatPacCoolCtrlVlvBStkOn' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HybEvBatPacCoolCtrlVlvBStkOn'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HybEvBatPacCoolCtrlVlvBStkOn_Value
        (&VLDR_ac_DW.StatusByte_HybEvBatPacCoolCtr_d);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CT_SnsrPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CT_SnsrPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CT_SnsrPerf_Value
        (&VLDR_ac_DW.StatusByte_CT_SnsrPerf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CT_SnsrCktLo' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CT_SnsrCktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CT_SnsrCktLo_Value
        (&VLDR_ac_DW.StatusByte_CT_SnsrCktLo);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CT_SnsrCktHi' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CT_SnsrCktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CT_SnsrCktHi_Value
        (&VLDR_ac_DW.StatusByte_CT_SnsrCktHi);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CoolantVlvB_StkOpn' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolantVlvB_StkOpn'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolantVlvB_StkOpn_Value
        (&VLDR_ac_DW.StatusByte_CoolantVlvB_StkOpn);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CoolantVlvB_StkClsd' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolantVlvB_StkClsd'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolantVlvB_StkClsd_Value
        (&VLDR_ac_DW.StatusByte_CoolantVlvB_StkClsd);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommCoolHtrA' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommCoolHtrA'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommCoolHtrA_Value
        (&VLDR_ac_DW.StatusByte_LostCommCoolHtrA);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CoolantVlvB_Ckt' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolantVlvB_Ckt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolantVlvB_Ckt_Value
        (&VLDR_ac_DW.StatusByte_CoolantVlvB_Ckt);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CoolantVlvB_CktLo' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolantVlvB_CktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolantVlvB_CktLo_Value
        (&VLDR_ac_DW.StatusByte_CoolantVlvB_CktLo);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CoolantVlvB_CktHi' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolantVlvB_CktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolantVlvB_CktHi_Value
        (&VLDR_ac_DW.StatusByte_CoolantVlvB_CktHi);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommHB_PSCCooCtrlVlvC' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommHB_PSCCooCtrlVlvC'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommHB_PSCCooCtrlVlvC_Value
        (&VLDR_ac_DW.StatusByte_LostCommHB_PSCCooC_p);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LIN3_BusOff' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LIN3_BusOff'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LIN3_BusOff_Value
        (&VLDR_ac_DW.StatusByte_LIN3_BusOff);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CoolantVlvA_FdbkCktLo' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolantVlvA_FdbkCktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolantVlvA_FdbkCktLo_Value
        (&VLDR_ac_DW.StatusByte_CoolantVlvA_FdbkCktL);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CoolantVlvA_FdbkCktHi' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolantVlvA_FdbkCktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolantVlvA_FdbkCktHi_Value
        (&VLDR_ac_DW.StatusByte_CoolantVlvA_FdbkCktH);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_HB_CT_SnsrPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HB_CT_SnsrPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HB_CT_SnsrPerf_Value
        (&VLDR_ac_DW.StatusByte_HB_CT_SnsrPerf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CoolOutTempSnsCkt' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolOutTempSnsCkt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolOutTempSnsCkt_Value
        (&VLDR_ac_DW.StatusByte_CoolOutTempSnsCkt);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_BattCoolPmpATempSnsrPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BattCoolPmpATempSnsrPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BattCoolPmpATempSnsrPerf_Value
        (&VLDR_ac_DW.StatusByte_BattCoolPmpATempSnsr);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CoolantVlvA_Ckt' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolantVlvA_Ckt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolantVlvA_Ckt_Value
        (&VLDR_ac_DW.StatusByte_CoolantVlvA_Ckt);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CoolantVlvA_CktLo' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolantVlvA_CktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolantVlvA_CktLo_Value
        (&VLDR_ac_DW.StatusByte_CoolantVlvA_CktLo);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CoolantVlvA_CktHi' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolantVlvA_CktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolantVlvA_CktHi_Value
        (&VLDR_ac_DW.StatusByte_CoolantVlvA_CktHi);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommEAC' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommEAC'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommEAC_Value
        (&VLDR_ac_DW.StatusByte_LostCommEAC);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_EACPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_EACPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_EACPerf_Value
        (&VLDR_ac_DW.StatusByte_EACPerf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_AC_RefrigTempSnsrCPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigTempSnsrCPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigTempSnsrCPerf_Value
        (&VLDR_ac_DW.StatusByte_AC_RefrigTempSnsrCPe);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_AC_RefrigTempSnsrCCkt' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigTempSnsrCCkt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigTempSnsrCCkt_Value
        (&VLDR_ac_DW.StatusByte_AC_RefrigTempSnsrCCk);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_AC_RefrigPresSnsrCCkt' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigPresSnsrCCkt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigPresSnsrCCkt_Value
        (&VLDR_ac_DW.StatusByte_AC_RefrigPresSnsrCCk);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_AC_RefrigPresSnsrAPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigPresSnsrAPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigPresSnsrAPerf_Value
        (&VLDR_ac_DW.StatusByte_AC_RefrigPresSnsrAPe);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_AC_RefrigPresSnsrALo' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigPresSnsrALo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigPresSnsrALo_Value
        (&VLDR_ac_DW.StatusByte_AC_RefrigPresSnsrALo);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_AC_RefrigPresSnsrAHi' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigPresSnsrAHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigPresSnsrAHi_Value
        (&VLDR_ac_DW.StatusByte_AC_RefrigPresSnsrAHi);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_AC_RefrigExpVlvAct_C_CntrlCktPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigExpVlvAct_C_CntrlCktPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigExpVlvAct_C_CntrlCktPerf_Value
        (&VLDR_ac_DW.StatusByte_AC_RefrigExpVlvAct_C);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_AC_RefrigPresSnsrCCktPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigPresSnsrCCktPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigPresSnsrCCktPerf_Value
        (&VLDR_ac_DW.StatusByte_AC_RefrigPresSnsrC_i);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommACRefrigExpVlvActC' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommACRefrigExpVlvActC'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommACRefrigExpVlvActC_Value
        (&VLDR_ac_DW.StatusByte_LostCommACRefrigEx_b);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_ThrmlRlyCtrlCkt' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_ThrmlRlyCtrlCkt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_ThrmlRlyCtrlCkt_Value
        (&VLDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LosCommHybPSCCtrlValA' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LosCommHybPSCCtrlValA'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LosCommHybPSCCtrlValA_Value
        (&VLDR_ac_DW.StatusByte_LosCommHybPSCCtrlVal);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LIN2_BusOff' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LIN2_BusOff'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LIN2_BusOff_Value
        (&VLDR_ac_DW.StatusByte_LIN2_BusOff);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LIN1_BusOff' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LIN1_BusOff'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LIN1_BusOff_Value
        (&VLDR_ac_DW.StatusByte_LIN1_BusOff);

    /* SignalConversion generated from: '<S1>/VeRCVR_Pct_HT_CabVlvSts' incorporates:
     *  SignalConversion generated from: '<S1>/VeTAIR_b_HT_CabVlvSts_FA'
     */
#if Rte_SysCon_Variant_VLDR_2

    /* SignalConversion generated from: '<S1>/VeRCVR_Pct_HT_CabVlvSts' incorporates:
     *  Inport: '<Root>/VeRCVR_Pct_HT_CabVlvSts'
     */
    (void)Rte_Read_VeRCVR_Pct_HT_CabVlvSts_Value
        (&rtb_TmpSignalConversionAtVeRCVR);

    /* SignalConversion generated from: '<S1>/VeTAIR_b_HT_CabVlvSts_FA' incorporates:
     *  Inport: '<Root>/VeTAIR_b_HT_CabVlvSts_FA'
     */
    (void)Rte_Read_VeTAIR_b_HT_CabVlvSts_FA_Value
        (&rtb_TmpSignalConversionAtVeT_cs);

#endif

    /* End of SignalConversion generated from: '<S1>/VeRCVR_Pct_HT_CabVlvSts' */

    /* SignalConversion generated from: '<S1>/VeRCVR_b_HT_Shtoff_VlvCmd' incorporates:
     *  SignalConversion generated from: '<S1>/VePMIR_n_HTAuxPumpRPMAct'
     *  SignalConversion generated from: '<S1>/VeTHMR_e_Eng_Htr_HTSOV_Stat'
     */
#if Rte_SysCon_Variant_VLDR_3

    /* SignalConversion generated from: '<S1>/VeRCVR_b_HT_Shtoff_VlvCmd' incorporates:
     *  Inport: '<Root>/VeRCVR_b_HT_Shtoff_VlvCmd'
     */
    (void)Rte_Read_VeRCVR_b_HT_Shtoff_VlvCmd_Value
        (&rtb_TmpSignalConversionAtVeR_go);

    /* SignalConversion generated from: '<S1>/VeTHMR_e_Eng_Htr_HTSOV_Stat' incorporates:
     *  Inport: '<Root>/VeTHMR_e_Eng_Htr_HTSOV_Stat'
     */
    (void)Rte_Read_VeTHMR_e_Eng_Htr_HTSOV_Stat_Value
        (&rtb_TmpSignalConversionAtVeTHMR);

    /* SignalConversion generated from: '<S1>/VePMIR_n_HTAuxPumpRPMAct' incorporates:
     *  Inport: '<Root>/VePMIR_n_HTAuxPumpRPMAct'
     */
    (void)Rte_Read_VePMIR_n_HTAuxPumpRPMAct_Value
        (&rtb_TmpSignalConversionAtVePMIR);

#endif

    /* End of SignalConversion generated from: '<S1>/VeRCVR_b_HT_Shtoff_VlvCmd' */

    /* SignalConversion generated from: '<S1>/VePMTR_e_ThrmlDevEnbl' */
#if Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_10 || Rte_SysCon_Variant_VLDR_11 || Rte_SysCon_Variant_VLDR_12 || Rte_SysCon_Variant_VLDR_15 || Rte_SysCon_Variant_VLDR_2 || Rte_SysCon_Variant_VLDR_3 || Rte_SysCon_Variant_VLDR_4 || Rte_SysCon_Variant_VLDR_6 || Rte_SysCon_Variant_VLDR_8

    /* SignalConversion generated from: '<S1>/VePMTR_e_ThrmlDevEnbl' incorporates:
     *  Inport: '<Root>/VePMTR_e_ThrmlDevEnbl'
     */
    (void)Rte_Read_VePMTR_e_ThrmlDevEnbl_Value(&rtb_TmpSignalConversionAtVePMTR);

#endif

    /* End of SignalConversion generated from: '<S1>/VePMTR_e_ThrmlDevEnbl' */

    /* SignalConversion generated from: '<S1>/VeTAIR_Pct_HT_CabVlvCmd' */
#if Rte_SysCon_Variant_VLDR_2

    /* SignalConversion generated from: '<S1>/VeTAIR_Pct_HT_CabVlvCmd' incorporates:
     *  Inport: '<Root>/VeTAIR_Pct_HT_CabVlvCmd'
     */
    (void)Rte_Read_VeTAIR_Pct_HT_CabVlvCmd_Value
        (&rtb_TmpSignalConversionAtVeTAIR);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTAIR_Pct_HT_CabVlvCmd' */

    /* SignalConversion generated from: '<S1>/VeTRIR_T_HV_BatClntTmpOut' */
#if Rte_SysCon_Variant_VLDR_2 || Rte_SysCon_Variant_VLDR_4

    /* SignalConversion generated from: '<S1>/VeTRIR_T_HV_BatClntTmpOut' incorporates:
     *  Inport: '<Root>/VeTRIR_T_HV_BatClntTmpOut'
     */
    (void)Rte_Read_VeTRIR_T_HV_BatClntTmpOut_Value
        (&rtb_TmpSignalConversionAtVeTRIR);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTRIR_T_HV_BatClntTmpOut' */

    /* SignalConversion generated from: '<S1>/VeRCVR_Pct_FrWyVlv_PstnCmnd' incorporates:
     *  SignalConversion generated from: '<S1>/VeTAIR_b_FrWyVlv_PstnAct_FA'
     */
#if Rte_SysCon_Variant_VLDR_8

    /* SignalConversion generated from: '<S1>/VeRCVR_Pct_FrWyVlv_PstnCmnd' incorporates:
     *  Inport: '<Root>/VeRCVR_Pct_FrWyVlv_PstnCmnd'
     */
    (void)Rte_Read_VeRCVR_Pct_FrWyVlv_PstnCmnd_Value
        (&rtb_TmpSignalConversionAtVeRC_a);

    /* SignalConversion generated from: '<S1>/VeTAIR_b_FrWyVlv_PstnAct_FA' incorporates:
     *  Inport: '<Root>/VeTAIR_b_FrWyVlv_PstnAct_FA'
     */
    (void)Rte_Read_VeTAIR_b_FrWyVlv_PstnAct_FA_Value
        (&rtb_TmpSignalConversionAtVeT_a4);

#endif

    /* End of SignalConversion generated from: '<S1>/VeRCVR_Pct_FrWyVlv_PstnCmnd' */

    /* SignalConversion generated from: '<S1>/VeTHDR_b_ECHTIS_FltDtct' incorporates:
     *  SignalConversion generated from: '<S1>/VeTMIR_b_ElecClntHtr_TmpIn_FA'
     */
#if Rte_SysCon_Variant_VLDR_3

    /* SignalConversion generated from: '<S1>/VeTHDR_b_ECHTIS_FltDtct' incorporates:
     *  Inport: '<Root>/VeTHDR_b_ECHTIS_FltDtct'
     */
    (void)Rte_Read_VeTHDR_b_ECHTIS_FltDtct_Value
        (&rtb_TmpSignalConversionAtVeTHDR);

    /* SignalConversion generated from: '<S1>/VeTMIR_b_ElecClntHtr_TmpIn_FA' incorporates:
     *  Inport: '<Root>/VeTMIR_b_ElecClntHtr_TmpIn_FA'
     */
    (void)Rte_Read_VeTMIR_b_ElecClntHtr_TmpIn_FA_Value
        (&rtb_TmpSignalConversionAtVeTMIR);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTHDR_b_ECHTIS_FltDtct' */

    /* SignalConversion generated from: '<S1>/VeTAIR_p_EXV_RefPress' incorporates:
     *  SignalConversion generated from: '<S1>/VeRCVR_Pct_EXV_PosRq'
     *  SignalConversion generated from: '<S1>/VeTAIR_T_EXV_RefTemp'
     */
#if Rte_SysCon_Variant_VLDR_4

    /* SignalConversion generated from: '<S1>/VeTAIR_p_EXV_RefPress' incorporates:
     *  Inport: '<Root>/VeTAIR_p_EXV_RefPress'
     */
    (void)Rte_Read_VeTAIR_p_EXV_RefPress_Value(&rtb_TmpSignalConversionAtVeT_d0);

    /* SignalConversion generated from: '<S1>/VeTAIR_T_EXV_RefTemp' incorporates:
     *  Inport: '<Root>/VeTAIR_T_EXV_RefTemp'
     */
    (void)Rte_Read_VeTAIR_T_EXV_RefTemp_Value(&rtb_TmpSignalConversionAtVeTA_o);

    /* SignalConversion generated from: '<S1>/VeRCVR_Pct_EXV_PosRq' incorporates:
     *  Inport: '<Root>/VeRCVR_Pct_EXV_PosRq'
     */
    (void)Rte_Read_VeRCVR_Pct_EXV_PosRq_Value(&rtb_TmpSignalConversionAtVeRC_i);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTAIR_p_EXV_RefPress' */

    /* SignalConversion generated from: '<S1>/VeTRIR_T_HV_BatClntTmp_In' */
#if Rte_SysCon_Variant_VLDR_4 || Rte_SysCon_Variant_VLDR_5

    /* SignalConversion generated from: '<S1>/VeTRIR_T_HV_BatClntTmp_In' incorporates:
     *  Inport: '<Root>/VeTRIR_T_HV_BatClntTmp_In'
     */
    (void)Rte_Read_VeTRIR_T_HV_BatClntTmp_In_Value
        (&rtb_TmpSignalConversionAtVeTR_a);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTRIR_T_HV_BatClntTmp_In' */

    /* SignalConversion generated from: '<S1>/VeTAIR_e_EXV_CalStat' */
#if Rte_SysCon_Variant_VLDR_4

    /* SignalConversion generated from: '<S1>/VeTAIR_e_EXV_CalStat' incorporates:
     *  Inport: '<Root>/VeTAIR_e_EXV_CalStat'
     */
    (void)Rte_Read_VeTAIR_e_EXV_CalStat_Value(&rtb_TmpSignalConversionAtVeTA_c);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTAIR_e_EXV_CalStat' */

    /* SignalConversion generated from: '<S1>/VeTHMR_e_BatThrmlSt' */
#if Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_4 || Rte_SysCon_Variant_VLDR_6

    /* SignalConversion generated from: '<S1>/VeTHMR_e_BatThrmlSt' incorporates:
     *  Inport: '<Root>/VeTHMR_e_BatThrmlSt'
     */
    (void)Rte_Read_VeTHMR_e_BatThrmlSt_Value(&rtb_TmpSignalConversionAtVeTH_j);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTHMR_e_BatThrmlSt' */

    /* SignalConversion generated from: '<S1>/VeRCVR_b_ChlrRfgtShtoff_VlvCmd' incorporates:
     *  SignalConversion generated from: '<S1>/VeCPDR_b_LTPP2_FunPer_ChkEnbl'
     */
#if Rte_SysCon_Variant_VLDR_5

    /* SignalConversion generated from: '<S1>/VeRCVR_b_ChlrRfgtShtoff_VlvCmd' incorporates:
     *  Inport: '<Root>/VeRCVR_b_ChlrRfgtShtoff_VlvCmd'
     */
    (void)Rte_Read_VeRCVR_b_ChlrRfgtShtoff_VlvCmd_Value
        (&rtb_TmpSignalConversionAtVeRC_e);

    /* SignalConversion generated from: '<S1>/VeCPDR_b_LTPP2_FunPer_ChkEnbl' incorporates:
     *  Inport: '<Root>/VeCPDR_b_LTPP2_FunPer_ChkEnbl'
     */
    (void)Rte_Read_VeCPDR_b_LTPP2_FunPer_ChkEnbl_Value
        (&rtb_TmpSignalConversionAtVeCPDR);

#endif

    /* End of SignalConversion generated from: '<S1>/VeRCVR_b_ChlrRfgtShtoff_VlvCmd' */

    /* SignalConversion generated from: '<S1>/VeRCVR_Pct_LTR_Vlv_PstnCmnd' */
#if Rte_SysCon_Variant_VLDR_10

    /* SignalConversion generated from: '<S1>/VeRCVR_Pct_LTR_Vlv_PstnCmnd' incorporates:
     *  Inport: '<Root>/VeRCVR_Pct_LTR_Vlv_PstnCmnd'
     */
    (void)Rte_Read_VeRCVR_Pct_LTR_Vlv_PstnCmnd_Value
        (&rtb_TmpSignalConversionAtVeR_mt);

#endif

    /* End of SignalConversion generated from: '<S1>/VeRCVR_Pct_LTR_Vlv_PstnCmnd' */

    /* SignalConversion generated from: '<S1>/VeRCVR_Pct_HTL_Vlv_PstnCmnd' incorporates:
     *  SignalConversion generated from: '<S1>/VeTAIR_Pct_HTL_BypsVlv_ActlPstn'
     *  SignalConversion generated from: '<S1>/VeTAIR_b_HTL_BypsVlv_ActlPstn_FA'
     */
#if Rte_SysCon_Variant_VLDR_11 || Rte_SysCon_Variant_VLDR_12

    /* SignalConversion generated from: '<S1>/VeRCVR_Pct_HTL_Vlv_PstnCmnd' incorporates:
     *  Inport: '<Root>/VeRCVR_Pct_HTL_Vlv_PstnCmnd'
     */
    (void)Rte_Read_VeRCVR_Pct_HTL_Vlv_PstnCmnd_Value
        (&rtb_TmpSignalConversionAtVeRC_c);

    /* SignalConversion generated from: '<S1>/VeTAIR_Pct_HTL_BypsVlv_ActlPstn' incorporates:
     *  Inport: '<Root>/VeTAIR_Pct_HTL_BypsVlv_ActlPstn'
     */
    (void)Rte_Read_VeTAIR_Pct_HTL_BypsVlv_ActlPstn_Value
        (&rtb_TmpSignalConversionAtVeT_kz);

    /* SignalConversion generated from: '<S1>/VeTAIR_b_HTL_BypsVlv_ActlPstn_FA' incorporates:
     *  Inport: '<Root>/VeTAIR_b_HTL_BypsVlv_ActlPstn_FA'
     */
    (void)Rte_Read_VeTAIR_b_HTL_BypsVlv_ActlPstn_FA_Value
        (&rtb_TmpSignalConversionAtVeT_nu);

#endif

    /* End of SignalConversion generated from: '<S1>/VeRCVR_Pct_HTL_Vlv_PstnCmnd' */

    /* SignalConversion generated from: '<S1>/VeDFIR_b_IsDiagGlobalConditionsValid' */
#if Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_10 || Rte_SysCon_Variant_VLDR_11 || Rte_SysCon_Variant_VLDR_12 || Rte_SysCon_Variant_VLDR_15 || Rte_SysCon_Variant_VLDR_2 || Rte_SysCon_Variant_VLDR_3 || Rte_SysCon_Variant_VLDR_4 || Rte_SysCon_Variant_VLDR_5 || Rte_SysCon_Variant_VLDR_6 || Rte_SysCon_Variant_VLDR_8

    /* SignalConversion generated from: '<S1>/VeDFIR_b_IsDiagGlobalConditionsValid' incorporates:
     *  Inport: '<Root>/VeDFIR_b_IsDiagGlobalConditionsValid'
     */
    (void)Rte_Read_VeDFIR_b_IsDiagGlobalConditionsValid_Value
        (&rtb_TmpSignalConversionAtVeDFIR);

#endif

    /* End of SignalConversion generated from: '<S1>/VeDFIR_b_IsDiagGlobalConditionsValid' */

    /* SignalConversion generated from: '<S1>/VeTAIR_n_CompSpdFdb' */
#if Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_4 || Rte_SysCon_Variant_VLDR_6

    /* SignalConversion generated from: '<S1>/VeTAIR_n_CompSpdFdb' incorporates:
     *  Inport: '<Root>/VeTAIR_n_CompSpdFdb'
     */
    (void)Rte_Read_VeTAIR_n_CompSpdFdb_Value(&rtb_TmpSignalConversionAtVeT_dk);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTAIR_n_CompSpdFdb' */

    /* SignalConversion generated from: '<S1>/VeTAIR_p_OEXV_RefPress' incorporates:
     *  SignalConversion generated from: '<S1>/VeRCVR_Pct_OEXV_Cmd'
     *  SignalConversion generated from: '<S1>/VeTAIR_T_OEXV_RefTemp'
     *  SignalConversion generated from: '<S1>/VeTAIR_e_OEXV_CalStat'
     */
#if Rte_SysCon_Variant_VLDR_6

    /* SignalConversion generated from: '<S1>/VeTAIR_p_OEXV_RefPress' incorporates:
     *  Inport: '<Root>/VeTAIR_p_OEXV_RefPress'
     */
    (void)Rte_Read_VeTAIR_p_OEXV_RefPress_Value(&rtb_TmpSignalConversionAtVeTA_b);

    /* SignalConversion generated from: '<S1>/VeTAIR_T_OEXV_RefTemp' incorporates:
     *  Inport: '<Root>/VeTAIR_T_OEXV_RefTemp'
     */
    (void)Rte_Read_VeTAIR_T_OEXV_RefTemp_Value(&rtb_TmpSignalConversionAtVeTA_p);

    /* SignalConversion generated from: '<S1>/VeRCVR_Pct_OEXV_Cmd' incorporates:
     *  Inport: '<Root>/VeRCVR_Pct_OEXV_Cmd'
     */
    (void)Rte_Read_VeRCVR_Pct_OEXV_Cmd_Value(&rtb_TmpSignalConversionAtVeRC_g);

    /* SignalConversion generated from: '<S1>/VeTAIR_e_OEXV_CalStat' incorporates:
     *  Inport: '<Root>/VeTAIR_e_OEXV_CalStat'
     */
    (void)Rte_Read_VeTAIR_e_OEXV_CalStat_Value(&rtb_TmpSignalConversionAtVeT_cz);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTAIR_p_OEXV_RefPress' */

    /* SignalConversion generated from: '<S1>/VeTAIR_e_CompStat' incorporates:
     *  SignalConversion generated from: '<S1>/VeTAIR_b_WinshldDfrst'
     */
#if Rte_SysCon_Variant_VLDR_1 || Rte_SysCon_Variant_VLDR_6

    /* SignalConversion generated from: '<S1>/VeTAIR_e_CompStat' incorporates:
     *  Inport: '<Root>/VeTAIR_e_CompStat'
     */
    (void)Rte_Read_VeTAIR_e_CompStat_Value(&rtb_TmpSignalConversionAtVeT_a5);

    /* SignalConversion generated from: '<S1>/VeTAIR_b_WinshldDfrst' incorporates:
     *  Inport: '<Root>/VeTAIR_b_WinshldDfrst'
     */
    (void)Rte_Read_VeTAIR_b_WinshldDfrst_Value(&rtb_TmpSignalConversionAtVeTA_i);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTAIR_e_CompStat' */

    /* SignalConversion generated from: '<S1>/VeTAIR_p_EEXV_RefPress' incorporates:
     *  SignalConversion generated from: '<S1>/VeRCVR_Pct_EEXV_Cmd'
     *  SignalConversion generated from: '<S1>/VeTAIR_T_EEXV_RefTemp'
     *  SignalConversion generated from: '<S1>/VeTAIR_e_EEXV_CalStat'
     */
#if Rte_SysCon_Variant_VLDR_1

    /* SignalConversion generated from: '<S1>/VeTAIR_p_EEXV_RefPress' incorporates:
     *  Inport: '<Root>/VeTAIR_p_EEXV_RefPress'
     */
    (void)Rte_Read_VeTAIR_p_EEXV_RefPress_Value(&rtb_TmpSignalConversionAtVeT_dd);

    /* SignalConversion generated from: '<S1>/VeTAIR_T_EEXV_RefTemp' incorporates:
     *  Inport: '<Root>/VeTAIR_T_EEXV_RefTemp'
     */
    (void)Rte_Read_VeTAIR_T_EEXV_RefTemp_Value(&rtb_TmpSignalConversionAtVeT_ld);

    /* SignalConversion generated from: '<S1>/VeRCVR_Pct_EEXV_Cmd' incorporates:
     *  Inport: '<Root>/VeRCVR_Pct_EEXV_Cmd'
     */
    (void)Rte_Read_VeRCVR_Pct_EEXV_Cmd_Value(&rtb_TmpSignalConversionAtVeR_co);

    /* SignalConversion generated from: '<S1>/VeTAIR_e_EEXV_CalStat' incorporates:
     *  Inport: '<Root>/VeTAIR_e_EEXV_CalStat'
     */
    (void)Rte_Read_VeTAIR_e_EEXV_CalStat_Value(&rtb_TmpSignalConversionAtVeTA_e);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTAIR_p_EEXV_RefPress' */

    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_CoolantVlvA_Perf' incorporates:
     *  SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_CoolantVlvA_StkOpn'
     */
#if Rte_SysCon_Variant_VLDR_2

    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_CoolantVlvA_Perf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolantVlvA_Perf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolantVlvA_Perf_Value
        (&rtb_TmpSignalConversionAtVeDMAB);

    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_CoolantVlvA_StkOpn' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolantVlvA_StkOpn'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolantVlvA_StkOpn_Value
        (&rtb_TmpSignalConversionAtVeDM_a);

#endif

    /* End of SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_CoolantVlvA_Perf' */

    /* SignalConversion generated from: '<S1>/VeRCVR_Pct_CPV2_PstnCmnd' */
#if Rte_SysCon_Variant_VLDR_15

    /* SignalConversion generated from: '<S1>/VeRCVR_Pct_CPV2_PstnCmnd' incorporates:
     *  Inport: '<Root>/VeRCVR_Pct_HtrCoreBypVlv_PstnCmnd'
     */
    (void)Rte_Read_VeRCVR_Pct_HtrCoreBypVlv_PstnCmnd_Value
        (&rtb_TmpSignalConversionAtVeRC_p);

#endif

    /* End of SignalConversion generated from: '<S1>/VeRCVR_Pct_CPV2_PstnCmnd' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Diagnostic'
     */
    /* SignalConversion generated from: '<S4>/DsblDiagFailSafe' incorporates:
     *  Inport: '<Root>/VeBPCR_b_BPCM_LIN_BusOff_FA'
     *  Inport: '<Root>/VeBPCR_b_BPCM_LIN_BusOff_SgnlRcvd'
     *  Inport: '<Root>/VeBPCR_b_BPCM_LOC_BCP_FA'
     *  Inport: '<Root>/VeBPCR_b_BPCM_LOC_BCP_SgnlRcvd'
     *  Inport: '<Root>/VeBPCR_e_BPCM_LIN_BusOff'
     *  Inport: '<Root>/VeBPCR_e_BPCM_LOC_BCP'
     *  Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe'
     *  Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl'
     *  Inport: '<Root>/VeENGR_T_EngCoolantTemp'
     *  Inport: '<Root>/VeENGR_b_ECT_Sgnl_Rcvd'
     *  Inport: '<Root>/VeENGR_b_ECT_SnsrFA'
     *  Inport: '<Root>/VeENGR_b_EngCombustionCmnd'
     *  Inport: '<Root>/VeESSR_e_EngStrtStpMd'
     *  Inport: '<Root>/VeHPMR_b_PropSysActv'
     *  Inport: '<Root>/VeIDCR_U_IBS_BattVolt'
     *  Inport: '<Root>/VePMDR_U_BF1_SysVolt'
     *  Inport: '<Root>/VeTMIR_b_OnBrdChrg_ClntTmpIn_FA'
     *  Inport: '<Root>/VeTMIR_b_PsvPmpClnt_TmpIn_FA'
     */
#if (Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_12 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_15 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_4 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8)

    (void)Rte_Read_VeTMIR_b_OnBrdChrg_ClntTmpIn_FA_Value(&rtb_LogicalOperator7);
    (void)Rte_Read_VeTMIR_b_PsvPmpClnt_TmpIn_FA_Value(&rtb_UnitDelay_dr);
    (void)Rte_Read_VeBPCR_b_BPCM_LOC_BCP_SgnlRcvd_Value(&rtb_AND_ea);
    (void)Rte_Read_VeBPCR_b_BPCM_LOC_BCP_FA_Value(&rtb_RelationalOperator3_f);
    (void)Rte_Read_VeBPCR_e_BPCM_LOC_BCP_Value(&tmpRead_c);
    (void)Rte_Read_VeBPCR_b_BPCM_LIN_BusOff_SgnlRcvd_Value(&rtb_AND_e0);
    (void)Rte_Read_VeBPCR_b_BPCM_LIN_BusOff_FA_Value
        (&rtb_VM_Conditional_Signal_Logic);
    (void)Rte_Read_VeBPCR_e_BPCM_LIN_BusOff_Value(&tmpRead_b);
    (void)Rte_Read_VeIDCR_U_IBS_BattVolt_Value(&rtb_Switch1_c);
    (void)Rte_Read_VeHPMR_b_PropSysActv_Value(&rtb_VM_Conditional_Signal_DsblD);
    (void)Rte_Read_VeESSR_e_EngStrtStpMd_Value(&tmpRead_8);
    (void)Rte_Read_VeENGR_b_EngCombustionCmnd_Value(&tmpRead_7);
    (void)Rte_Read_VeDFIR_b_PostCodeClrDiagDsbl_Value(&tmpRead_5);
    (void)Rte_Read_VeDFIR_b_DsblDiagFailSafe_Value(&tmpRead_4);
    (void)Rte_Read_VePMDR_U_BF1_SysVolt_Value(&tmpRead_2);
    (void)Rte_Read_VeENGR_b_ECT_Sgnl_Rcvd_Value(&tmpRead_1);
    (void)Rte_Read_VeENGR_b_ECT_SnsrFA_Value(&tmpRead_0);
    (void)Rte_Read_VeENGR_T_EngCoolantTemp_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S1>/Input' */
    /* Switch: '<S5>/Switch' incorporates:
     *  Constant: '<S1572>/KeVLDR_b_EngCoolantTemp_SD'
     *  Inport: '<Root>/VeBPCR_b_BPCM_LIN_BusOff_FA'
     *  Inport: '<Root>/VeBPCR_b_BPCM_LIN_BusOff_SgnlRcvd'
     *  Inport: '<Root>/VeBPCR_b_BPCM_LOC_BCP_FA'
     *  Inport: '<Root>/VeBPCR_b_BPCM_LOC_BCP_SgnlRcvd'
     *  Inport: '<Root>/VeBPCR_e_BPCM_LIN_BusOff'
     *  Inport: '<Root>/VeBPCR_e_BPCM_LOC_BCP'
     *  Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe'
     *  Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl'
     *  Inport: '<Root>/VeENGR_T_EngCoolantTemp'
     *  Inport: '<Root>/VeENGR_b_ECT_Sgnl_Rcvd'
     *  Inport: '<Root>/VeENGR_b_ECT_SnsrFA'
     *  Inport: '<Root>/VeENGR_b_EngCombustionCmnd'
     *  Inport: '<Root>/VeESSR_e_EngStrtStpMd'
     *  Inport: '<Root>/VeHPMR_b_PropSysActv'
     *  Inport: '<Root>/VeIDCR_U_IBS_BattVolt'
     *  Inport: '<Root>/VePMDR_U_BF1_SysVolt'
     *  Inport: '<Root>/VeTMIR_b_OnBrdChrg_ClntTmpIn_FA'
     *  Inport: '<Root>/VeTMIR_b_PsvPmpClnt_TmpIn_FA'
     */
    if (KeVLDR_b_EngCoolantTemp_SD)
    {
        /* Switch: '<S5>/Switch' incorporates:
         *  Constant: '<S1549>/KeVLDR_T_EngCoolantTemp_Dial'
         */
        VeVLDR_T_EngCoolantTemp_AD = KeVLDR_T_EngCoolantTemp_Dial;
    }
    else
    {
        /* Switch: '<S5>/Switch' */
        VeVLDR_T_EngCoolantTemp_AD = tmpRead;
    }

    /* End of Switch: '<S5>/Switch' */

    /* Switch: '<S5>/Switch1' incorporates:
     *  Constant: '<S1569>/KeVLDR_b_ECT_SnsrFA_SD'
     */
    if (KeVLDR_b_ECT_SnsrFA_SD)
    {
        /* Switch: '<S5>/Switch1' incorporates:
         *  Constant: '<S1568>/KeVLDR_b_ECT_SnsrFA_Dial'
         */
        VLDR_ac_B.Switch1 = KeVLDR_b_ECT_SnsrFA_Dial;
    }
    else
    {
        /* Switch: '<S5>/Switch1' */
        VLDR_ac_B.Switch1 = tmpRead_0;
    }

    /* End of Switch: '<S5>/Switch1' */

    /* Switch: '<S5>/Switch2' incorporates:
     *  Constant: '<S1567>/KeVLDR_b_ECT_Sgnl_Rcvd_SD'
     */
    if (KeVLDR_b_ECT_Sgnl_Rcvd_SD)
    {
        /* Switch: '<S5>/Switch2' incorporates:
         *  Constant: '<S1566>/KeVLDR_b_ECT_Sgnl_Rcvd_Dial'
         */
        VLDR_ac_B.Switch2 = KeVLDR_b_ECT_Sgnl_Rcvd_Dial;
    }
    else
    {
        /* Switch: '<S5>/Switch2' */
        VLDR_ac_B.Switch2 = tmpRead_1;
    }

    /* End of Switch: '<S5>/Switch2' */

    /* Switch: '<S5>/Switch3' incorporates:
     *  Constant: '<S1552>/KeVLDR_b_BF1_SysVolt_SD'
     */
    if (KeVLDR_b_BF1_SysVolt_SD)
    {
        /* Switch: '<S5>/Switch3' incorporates:
         *  Constant: '<S1550>/KeVLDR_U_BF1_SysVolt_Dial'
         */
        VLDR_ac_B.Switch3 = KeVLDR_U_BF1_SysVolt_Dial;
    }
    else
    {
        /* Switch: '<S5>/Switch3' */
        VLDR_ac_B.Switch3 = tmpRead_2;
    }

    /* End of Switch: '<S5>/Switch3' */

    /* Switch: '<S5>/Switch8' incorporates:
     *  Constant: '<S1565>/KeVLDR_b_DsblDiagFailSafe_SD'
     */
    if (KeVLDR_b_DsblDiagFailSafe_SD)
    {
        /* Switch: '<S5>/Switch8' incorporates:
         *  Constant: '<S1564>/KeVLDR_b_DsblDiagFailSafe_D'
         */
        VLDR_ac_B.Switch8 = KeVLDR_b_DsblDiagFailSafe_D;
    }
    else
    {
        /* Switch: '<S5>/Switch8' */
        VLDR_ac_B.Switch8 = tmpRead_4;
    }

    /* End of Switch: '<S5>/Switch8' */

    /* Switch: '<S5>/Switch9' incorporates:
     *  Constant: '<S1577>/KeVLDR_b_PostCodeClrDiagDsbl_SD'
     */
    if (KeVLDR_b_PostCodeClrDiagDsbl_SD)
    {
        /* Switch: '<S5>/Switch9' incorporates:
         *  Constant: '<S1576>/KeVLDR_b_PostCodeClrDiagDsbl_D'
         */
        VLDR_ac_B.Switch9 = KeVLDR_b_PostCodeClrDiagDsbl_D;
    }
    else
    {
        /* Switch: '<S5>/Switch9' */
        VLDR_ac_B.Switch9 = tmpRead_5;
    }

    /* End of Switch: '<S5>/Switch9' */

    /* Switch: '<S5>/Switch4' incorporates:
     *  Constant: '<S1571>/KeVLDR_b_EngCombustionCmnd_SD'
     */
    if (KeVLDR_b_EngCombustionCmnd_SD)
    {
        /* Switch: '<S5>/Switch4' incorporates:
         *  Constant: '<S1570>/KeVLDR_b_EngCombustionCmnd_D'
         */
        VLDR_ac_B.Switch4 = KeVLDR_b_EngCombustionCmnd_D;
    }
    else
    {
        /* Switch: '<S5>/Switch4' */
        VLDR_ac_B.Switch4 = tmpRead_7;
    }

    /* End of Switch: '<S5>/Switch4' */

    /* Switch: '<S5>/Switch5' incorporates:
     *  Constant: '<S1573>/KeVLDR_b_EngStrtStpMd_SD'
     */
    if (KeVLDR_b_EngStrtStpMd_SD)
    {
        /* Switch: '<S5>/Switch5' incorporates:
         *  Constant: '<S1584>/KeVLDR_e_EngStrtStpMd_D'
         */
        VLDR_ac_B.Switch5 = KeVLDR_e_EngStrtStpMd_D;
    }
    else
    {
        /* Switch: '<S5>/Switch5' incorporates:
         *  Inport: '<Root>/VeESSR_e_EngStrtStpMd'
         */
        VLDR_ac_B.Switch5 = tmpRead_8;
    }

    /* End of Switch: '<S5>/Switch5' */

    /* Switch: '<S5>/Switch6' incorporates:
     *  Constant: '<S1579>/KeVLDR_b_PropSysActv_SD'
     */
    if (KeVLDR_b_PropSysActv_SD)
    {
        /* Switch: '<S5>/Switch6' incorporates:
         *  Constant: '<S1578>/KeVLDR_b_PropSysActv_D'
         */
        VLDR_ac_B.Switch6 = KeVLDR_b_PropSysActv_D;
    }
    else
    {
        /* Switch: '<S5>/Switch6' */
        VLDR_ac_B.Switch6 = rtb_VM_Conditional_Signal_DsblD;
    }

    /* End of Switch: '<S5>/Switch6' */

    /* Switch: '<S5>/Switch7' incorporates:
     *  Constant: '<S1563>/KeVLDR_b_BattVltg_SD'
     */
    if (KeVLDR_b_BattVltg_SD)
    {
        /* Switch: '<S5>/Switch7' incorporates:
         *  Constant: '<S1551>/KeVLDR_U_BattVltg_D'
         */
        VeVLDR_U_BattVltg_AD = KeVLDR_U_BattVltg_D;
    }
    else
    {
        /* Switch: '<S5>/Switch7' */
        VeVLDR_U_BattVltg_AD = rtb_Switch1_c;
    }

    /* End of Switch: '<S5>/Switch7' */

    /* Switch: '<S5>/Switch10' incorporates:
     *  Constant: '<S1555>/KeVLDR_b_BPCM_LIN_BusOff_SD'
     */
    if (KeVLDR_b_BPCM_LIN_BusOff_SD)
    {
        /* Switch: '<S5>/Switch10' incorporates:
         *  Constant: '<S1582>/KeVLDR_e_BPCM_LIN_BusOff_D'
         */
        VLDR_ac_B.Switch10 = KeVLDR_e_BPCM_LIN_BusOff_D;
    }
    else
    {
        /* Switch: '<S5>/Switch10' incorporates:
         *  Inport: '<Root>/VeBPCR_e_BPCM_LIN_BusOff'
         */
        VLDR_ac_B.Switch10 = tmpRead_b;
    }

    /* End of Switch: '<S5>/Switch10' */

    /* Switch: '<S5>/Switch11' incorporates:
     *  Constant: '<S1554>/KeVLDR_b_BPCM_LIN_BusOff_FA_SD'
     */
    if (KeVLDR_b_BPCM_LIN_BusOff_FA_SD)
    {
        /* Switch: '<S5>/Switch11' incorporates:
         *  Constant: '<S1553>/KeVLDR_b_BPCM_LIN_BusOff_FA_D'
         */
        VLDR_ac_B.Switch11 = KeVLDR_b_BPCM_LIN_BusOff_FA_D;
    }
    else
    {
        /* Switch: '<S5>/Switch11' */
        VLDR_ac_B.Switch11 = rtb_VM_Conditional_Signal_Logic;
    }

    /* End of Switch: '<S5>/Switch11' */

    /* Switch: '<S5>/Switch12' incorporates:
     *  Constant: '<S1557>/KeVLDR_b_BPCM_LIN_BusOff_SgnlRcvd_SD'
     */
    if (KeVLDR_b_BPCM_LIN_BusOff_SgnlRcvd_SD)
    {
        /* Switch: '<S5>/Switch12' incorporates:
         *  Constant: '<S1556>/KeVLDR_b_BPCM_LIN_BusOff_SgnlRcvd_D'
         */
        VLDR_ac_B.Switch12 = KeVLDR_b_BPCM_LIN_BusOff_SgnlRcvd_D;
    }
    else
    {
        /* Switch: '<S5>/Switch12' */
        VLDR_ac_B.Switch12 = rtb_AND_e0;
    }

    /* End of Switch: '<S5>/Switch12' */

    /* Switch: '<S5>/Switch13' incorporates:
     *  Constant: '<S1560>/KeVLDR_b_BPCM_LOC_BCP_SD'
     */
    if (KeVLDR_b_BPCM_LOC_BCP_SD)
    {
        /* Switch: '<S5>/Switch13' incorporates:
         *  Constant: '<S1583>/KeVLDR_e_BPCM_LOC_BCP_D'
         */
        VLDR_ac_B.Switch13 = KeVLDR_e_BPCM_LOC_BCP_D;
    }
    else
    {
        /* Switch: '<S5>/Switch13' incorporates:
         *  Inport: '<Root>/VeBPCR_e_BPCM_LOC_BCP'
         */
        VLDR_ac_B.Switch13 = tmpRead_c;
    }

    /* End of Switch: '<S5>/Switch13' */

    /* Switch: '<S5>/Switch14' incorporates:
     *  Constant: '<S1559>/KeVLDR_b_BPCM_LOC_BCP_FA_SD'
     */
    if (KeVLDR_b_BPCM_LOC_BCP_FA_SD)
    {
        /* Switch: '<S5>/Switch14' incorporates:
         *  Constant: '<S1558>/KeVLDR_b_BPCM_LOC_BCP_FA_D'
         */
        VLDR_ac_B.Switch14 = KeVLDR_b_BPCM_LOC_BCP_FA_D;
    }
    else
    {
        /* Switch: '<S5>/Switch14' */
        VLDR_ac_B.Switch14 = rtb_RelationalOperator3_f;
    }

    /* End of Switch: '<S5>/Switch14' */

    /* Switch: '<S5>/Switch15' incorporates:
     *  Constant: '<S1562>/KeVLDR_b_BPCM_LOC_BCP_SgnlRcvd_SD'
     */
    if (KeVLDR_b_BPCM_LOC_BCP_SgnlRcvd_SD)
    {
        /* Switch: '<S5>/Switch15' incorporates:
         *  Constant: '<S1561>/KeVLDR_b_BPCM_LOC_BCP_SgnlRcvd_D'
         */
        VLDR_ac_B.Switch15 = KeVLDR_b_BPCM_LOC_BCP_SgnlRcvd_D;
    }
    else
    {
        /* Switch: '<S5>/Switch15' */
        VLDR_ac_B.Switch15 = rtb_AND_ea;
    }

    /* End of Switch: '<S5>/Switch15' */

    /* Switch: '<S5>/Switch16' incorporates:
     *  Constant: '<S1581>/KeVLDR_b_PsvPmpClnt_TmpIn_FA_SD'
     */
    if (KeVLDR_b_PsvPmpClnt_TmpIn_FA_SD)
    {
        /* Switch: '<S5>/Switch16' incorporates:
         *  Constant: '<S1580>/KeVLDR_b_PsvPmpClnt_TmpIn_FA_D'
         */
        VLDR_ac_B.Switch16 = KeVLDR_b_PsvPmpClnt_TmpIn_FA_D;
    }
    else
    {
        /* Switch: '<S5>/Switch16' */
        VLDR_ac_B.Switch16 = rtb_UnitDelay_dr;
    }

    /* End of Switch: '<S5>/Switch16' */

    /* Switch: '<S5>/Switch17' incorporates:
     *  Constant: '<S1575>/KeVLDR_b_OnBrdChrg_ClntTmpIn_FA_SD'
     */
    if (KeVLDR_b_OnBrdChrg_ClntTmpIn_FA_SD)
    {
        /* Switch: '<S5>/Switch17' incorporates:
         *  Constant: '<S1574>/KeVLDR_b_OnBrdChrg_ClntTmpIn_FA_D'
         */
        VLDR_ac_B.Switch17 = KeVLDR_b_OnBrdChrg_ClntTmpIn_FA_D;
    }
    else
    {
        /* Switch: '<S5>/Switch17' */
        VLDR_ac_B.Switch17 = rtb_LogicalOperator7;
    }

    /* End of Switch: '<S5>/Switch17' */
    /* End of Outputs for SubSystem: '<S1>/Input' */

    /* VariantMerge generated from: '<S4>/DsblDiagFailSafe' */
    rtb_VM_Conditional_Signal_DsblD = VLDR_ac_B.Switch8;

#endif

    /* End of SignalConversion generated from: '<S4>/DsblDiagFailSafe' */

    /* RelationalOperator: '<S10>/Comparison3' incorporates:
     *  Logic: '<S10>/Logical1'
     */
#if Rte_SysCon_Variant_VLDR_10 || Rte_SysCon_Variant_VLDR_11 || Rte_SysCon_Variant_VLDR_12 || Rte_SysCon_Variant_VLDR_15 || Rte_SysCon_Variant_VLDR_8

    /* Logic: '<S10>/Logical1' incorporates:
     *  Constant: '<S158>/Constant'
     *  Constant: '<S160>/KeVLDR_b_CPV_PerfDiag_ThrmlDvcEnbl_Ovrd'
     *  SignalConversion generated from: '<S1>/VePMTR_e_ThrmlDevEnbl'
     */
    rtb_Logical1 = ((((uint32)rtb_TmpSignalConversionAtVePMTR) !=
                     CePMTR_e_DISBL_All_Thrml) ||
                    (KeVLDR_b_CPV_PerfDiag_ThrmlDvcEnbl_Ovrd));

#endif

    /* End of RelationalOperator: '<S10>/Comparison3' */

    /* SignalConversion generated from: '<S4>/PostCodeClrDiagDsbl' incorporates:
     *  SignalConversion generated from: '<S4>/DsblDiagFailSafe'
     */
#if (Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_10 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_11 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_12 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_15 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_4 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_7 && Rte_SysCon_Variant_VLDR_8)

    /* VariantMerge generated from: '<S4>/PostCodeClrDiagDsbl' */
    rtb_VM_Conditional_Signal_PostC = VLDR_ac_B.Switch9;

#elif !Rte_SysCon_Variant_VLDR_7 || (!Rte_SysCon_Variant_VLDR_1 && !Rte_SysCon_Variant_VLDR_10 && !Rte_SysCon_Variant_VLDR_11 && !Rte_SysCon_Variant_VLDR_12 && !Rte_SysCon_Variant_VLDR_15 && !Rte_SysCon_Variant_VLDR_2 && !Rte_SysCon_Variant_VLDR_3 && !Rte_SysCon_Variant_VLDR_4 && !Rte_SysCon_Variant_VLDR_5 && !Rte_SysCon_Variant_VLDR_6 && !Rte_SysCon_Variant_VLDR_8)

    /* VariantMerge generated from: '<S4>/DsblDiagFailSafe' incorporates:
     *  SignalConversion generated from: '<S4>/DsblDiagFailSafe'
     */
    rtb_VM_Conditional_Signal_DsblD = false;

    /* VariantMerge generated from: '<S4>/PostCodeClrDiagDsbl' incorporates:
     *  SignalConversion generated from: '<S4>/PostCodeClrDiagDsbl'
     */
    rtb_VM_Conditional_Signal_PostC = false;

#endif

    /* End of SignalConversion generated from: '<S4>/PostCodeClrDiagDsbl' */
#if Rte_SysCon_Variant_VLDR_12

    /* Outputs for Enabled SubSystem: '<S4>/BHV Diagnostics' */
    /* Outputs for Enabled SubSystem: '<S4>/BHV Diagnostics' incorporates:
     *  EnablePort: '<S7>/Enable'
     */

    /* S-Function (sfix_bitop): '<S51>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S51>/StatusByte_EngCoolbypsVlvDPerf'
     *  S-Function (sfix_bitop): '<S28>/Bitwise Operator2'
     */
    rtb_UnitDelay_ly_tmp = ((uint32)VLDR_ac_DW.StatusByte_EngCoolbypsVlvDPerf) &
        64U;

    /* UnitDelay: '<S30>/Unit Delay' incorporates:
     *  Constant: '<S43>/Constant1'
     *  Constant: '<S43>/Constant2'
     *  Constant: '<S50>/Constant1'
     *  Constant: '<S50>/Constant2'
     *  Constant: '<S51>/Constant1'
     *  Constant: '<S51>/Constant2'
     *  DataStoreRead: '<S43>/StatusByte_LIN2_BusOff'
     *  DataStoreRead: '<S50>/StatusByte_LostCommEngCoolbypsVlvD'
     *  DataStoreRead: '<S51>/StatusByte_EngCoolbypsVlvDPerf'
     *  Logic: '<S21>/Logical Operator'
     *  Logic: '<S21>/Logical Operator3'
     *  Logic: '<S21>/Logical Operator4'
     *  Logic: '<S21>/Logical Operator5'
     *  Logic: '<S43>/Logical Operator'
     *  Logic: '<S50>/Logical Operator'
     *  Logic: '<S51>/Logical Operator'
     *  RelationalOperator: '<S43>/Relational Operator1'
     *  RelationalOperator: '<S43>/Relational Operator2'
     *  RelationalOperator: '<S50>/Relational Operator1'
     *  RelationalOperator: '<S50>/Relational Operator2'
     *  RelationalOperator: '<S51>/Relational Operator1'
     *  RelationalOperator: '<S51>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S43>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S43>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S50>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S50>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S51>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S51>/Bitwise Operator2'
     */
    rtb_UnitDelay_dr = ((((rtb_TmpSignalConversionAtVeDFIR && rtb_Logical1) &&
                          (((((sint32)VLDR_ac_DW.StatusByte_LIN2_BusOff) & 1) <=
                            0) || ((((uint32)VLDR_ac_DW.StatusByte_LIN2_BusOff)
        & 64U) != 0U))) && (((((sint32)
        VLDR_ac_DW.StatusByte_LostCommEngCoolbypsV) & 1) <= 0) || ((((uint32)
        VLDR_ac_DW.StatusByte_LostCommEngCoolbypsV) & 64U) != 0U))) &&
                        (((((sint32)VLDR_ac_DW.StatusByte_EngCoolbypsVlvDPerf) &
                           1) <= 0) || (rtb_UnitDelay_ly_tmp != 0U)));

    /* Logic: '<S21>/Logical Operator7' */
    rtb_LogicalOperator7 = (rtb_UnitDelay_dr && rtb_TmpSignalConversionAtVeT_nu);

    /* Outputs for Atomic SubSystem: '<S21>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S49>/EdgeRising' */
    /* Logic: '<S52>/AND' incorporates:
     *  Logic: '<S52>/OR1'
     *  UnitDelay: '<S52>/Unit Delay'
     */
    rtb_AND_ea = (rtb_LogicalOperator7 && (!VLDR_ac_DW.UnitDelay_DSTATE_an));

    /* Update for UnitDelay: '<S52>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_an = rtb_LogicalOperator7;

    /* End of Outputs for SubSystem: '<S49>/EdgeRising' */

    /* Switch: '<S49>/Switch1' incorporates:
     *  Logic: '<S49>/OR'
     *  Logic: '<S49>/OR1'
     */
    if ((!rtb_LogicalOperator7) || rtb_AND_ea)
    {
        /* Switch: '<S49>/Switch1' incorporates:
         *  Constant: '<S49>/Constant Value1'
         */
        rtb_Switch1_c = 0.0F;
    }
    else
    {
        /* Switch: '<S49>/Switch1' incorporates:
         *  Constant: '<S44>/Calib'
         *  Constant: '<S47>/KeVLDR_t_CPV_FA_WaitTime'
         *  MinMax: '<S49>/Minimum'
         *  Sum: '<S49>/Summation'
         *  UnitDelay: '<S49>/Unit Delay'
         */
        rtb_Switch1_c = fminf(KeVLDR_t_BHV_FA_WaitTime, HeVLDR_t_MedTED +
                              VLDR_ac_DW.UnitDelay_DSTATE_ik);
    }

    /* End of Switch: '<S49>/Switch1' */

    /* Update for UnitDelay: '<S49>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_ik = rtb_Switch1_c;

    /* Logic: '<S21>/Logical Operator8' incorporates:
     *  Constant: '<S47>/KeVLDR_t_CPV_FA_WaitTime'
     *  Constant: '<S48>/Calib'
     *  Logic: '<S49>/AND'
     *  RelationalOperator: '<S49>/Greater  Than'
     */
    rtb_LogicalOperator7 = ((KeVLDR_b_BHV_DiagPerfCndsOV_En) &&
                            (rtb_LogicalOperator7 && (rtb_Switch1_c >=
        KeVLDR_t_BHV_FA_WaitTime)));

    /* End of Outputs for SubSystem: '<S21>/Turn On Delay Time' */

    /* Logic: '<S21>/Logical Operator9' incorporates:
     *  Constant: '<S45>/Calib'
     *  Constant: '<S46>/Calib'
     *  Logic: '<S21>/Logical Operator1'
     *  Logic: '<S21>/Logical Operator6'
     *  RelationalOperator: '<S21>/Relational Operator'
     *  RelationalOperator: '<S21>/Relational Operator2'
     */
    VeVLDR_b_BHV_PerfDiag_En = ((((rtb_TmpSignalConversionAtVeRC_c <
        KeVLDR_Pct_BHVVlv_PstnCmnd_Max) && (rtb_TmpSignalConversionAtVeRC_c >
        KeVLDR_Pct_BHVVlv_PstnCmnd_Min)) && rtb_UnitDelay_dr) ||
        rtb_LogicalOperator7);

    /* RelationalOperator: '<S28>/Relational Operator3' incorporates:
     *  Constant: '<S28>/Constant3'
     */
    rtb_RelationalOperator3_f = (rtb_UnitDelay_ly_tmp == 0U);

    /* Outputs for Atomic SubSystem: '<S28>/EdgeFalling1' */
    /* Logic: '<S28>/Logical Operator' incorporates:
     *  Logic: '<S30>/OR1'
     */
    rtb_VM_Conditional_Signal_Logic = !rtb_RelationalOperator3_f;

    /* End of Outputs for SubSystem: '<S28>/EdgeFalling1' */

    /* Logic: '<S28>/Logical1' incorporates:
     *  Constant: '<S24>/Calib'
     *  Constant: '<S25>/Calib'
     *  Constant: '<S28>/Constant1'
     *  DataStoreRead: '<S20>/Data Store Read2'
     *  Logic: '<S20>/Logical Operator'
     *  Logic: '<S28>/Logical Operator'
     *  Logic: '<S28>/Logical10'
     *  Logic: '<S28>/Logical12'
     *  RelationalOperator: '<S28>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S28>/Bitwise Operator3'
     */
    rtb_UnitDelay_dr = (((VeVLDR_b_BHV_PerfDiag_En) &&
                         (KeVLDR_b_BHV_PerfDiag_XYEnbl)) &&
                        ((!KeVLDR_b_EngCoolbypsVlvDPerf_LtchEnbl) || (((((uint32)
        VLDR_ac_DW.StatusByte_EngCoolbypsVlvDPerf) & 1U) == 0U) ||
                          rtb_VM_Conditional_Signal_Logic)));

    /* RelationalOperator: '<S23>/Relational Operator' incorporates:
     *  Abs: '<S23>/Abs'
     *  Constant: '<S54>/Calib'
     *  Sum: '<S23>/Sum'
     */
    rtb_AND_ea = (fabsf(rtb_TmpSignalConversionAtVeRC_c +
                        rtb_TmpSignalConversionAtVeT_kz) >=
                  KeVLDR_Pct_BHV_PerfDiag_PstnDiffMax);

    /* Outputs for Atomic SubSystem: '<S23>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S56>/EdgeRising' */
    /* Logic: '<S57>/AND' incorporates:
     *  Logic: '<S57>/OR1'
     *  UnitDelay: '<S57>/Unit Delay'
     */
    rtb_AND_e0 = (rtb_AND_ea && (!VLDR_ac_DW.UnitDelay_DSTATE_h5));

    /* Update for UnitDelay: '<S57>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_h5 = rtb_AND_ea;

    /* End of Outputs for SubSystem: '<S56>/EdgeRising' */

    /* Switch: '<S56>/Switch1' incorporates:
     *  Constant: '<S55>/Calib'
     *  Constant: '<S56>/Constant Value'
     *  Logic: '<S56>/OR'
     *  Logic: '<S56>/OR1'
     *  MinMax: '<S56>/Minimum'
     *  Sum: '<S56>/Summation'
     *  UnitDelay: '<S56>/Unit Delay'
     */
    if ((!rtb_AND_ea) || rtb_AND_e0)
    {
        /* Switch: '<S56>/Switch1' incorporates:
         *  Constant: '<S56>/Constant Value1'
         */
        rtb_Switch1_dj = 0U;
    }
    else if (KeVLDR_Cnt_BHV_Position_Wait_Time < ((uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_iab) + 1U)))
    {
        /* MinMax: '<S56>/Minimum' incorporates:
         *  Constant: '<S55>/Calib'
         *  Switch: '<S56>/Switch1'
         */
        rtb_Switch1_dj = KeVLDR_Cnt_BHV_Position_Wait_Time;
    }
    else
    {
        /* Switch: '<S56>/Switch1' incorporates:
         *  Constant: '<S56>/Constant Value'
         *  MinMax: '<S56>/Minimum'
         *  Sum: '<S56>/Summation'
         *  UnitDelay: '<S56>/Unit Delay'
         */
        rtb_Switch1_dj = (uint16)(((uint32)VLDR_ac_DW.UnitDelay_DSTATE_iab) + 1U);
    }

    /* End of Switch: '<S56>/Switch1' */

    /* Update for UnitDelay: '<S56>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_iab = rtb_Switch1_dj;

    /* End of Outputs for SubSystem: '<S23>/Turn On Delay Sample' */

    /* Outputs for Atomic SubSystem: '<S28>/EdgeFalling1' */
    /* Logic: '<S30>/AND' incorporates:
     *  UnitDelay: '<S30>/Unit Delay'
     */
    rtb_AND_e0 = (rtb_VM_Conditional_Signal_Logic &&
                  (VLDR_ac_DW.UnitDelay_DSTATE_lrh));

    /* Update for UnitDelay: '<S30>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_lrh = rtb_RelationalOperator3_f;

    /* End of Outputs for SubSystem: '<S28>/EdgeFalling1' */

    /* Logic: '<S28>/Logical5' incorporates:
     *  Logic: '<S22>/NOT4'
     */
    rtb_RelationalOperator3_f = ((rtb_VM_Conditional_Signal_DsblD ||
        rtb_VM_Conditional_Signal_PostC) || rtb_AND_e0);

    /* Logic: '<S29>/Fail Counter Reset' incorporates:
     *  UnitDelay: '<S29>/Unit Delay'
     *  UnitDelay: '<S29>/Unit Delay1'
     */
    rtb_AND_e0 = ((rtb_RelationalOperator3_f || (VLDR_ac_DW.UnitDelay_DSTATE_ja))
                  || (VLDR_ac_DW.UnitDelay1_DSTATE_ej));

    /* Outputs for Atomic SubSystem: '<S29>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S29>/Counter Reset  Enabled ' */
    /* Switch: '<S36>/Switch1' incorporates:
     *  Constant: '<S53>/KeVLDR_b_CPV_PosActFA_Enbl'
     *  Constant: '<S55>/Calib'
     *  Logic: '<S23>/Logical Operator'
     *  Logic: '<S23>/Logical1'
     *  Logic: '<S29>/NOT6'
     *  Logic: '<S56>/AND'
     *  RelationalOperator: '<S56>/Greater  Than'
     *  Switch: '<S36>/Switch2'
     *  Switch: '<S37>/Switch1'
     */
    if (rtb_AND_e0)
    {
        /* Switch: '<S36>/Switch1' incorporates:
         *  Constant: '<S36>/Constant Value2'
         */
        VeVLDR_Cnt_BHV_PerfDiag_FailCnt = 0U;

        /* Switch: '<S37>/Switch1' incorporates:
         *  Constant: '<S37>/Constant Value2'
         */
        VeVLDR_Cnt_BHV_PerfDiag_SmpCnt = 0U;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S23>/Turn On Delay Sample' */
        if (rtb_UnitDelay_dr && ((rtb_AND_ea && (rtb_Switch1_dj >=
                KeVLDR_Cnt_BHV_Position_Wait_Time)) || (rtb_LogicalOperator7 &&
                (KeVLDR_b_BHV_PosActFA_Enbl))))
        {
            /* Switch: '<S36>/Switch2' incorporates:
             *  Constant: '<S36>/Constant Value1'
             *  Sum: '<S36>/Subtraction'
             *  Switch: '<S36>/Switch1'
             *  UnitDelay: '<S36>/Unit Delay'
             */
            VeVLDR_Cnt_BHV_PerfDiag_FailCnt = (uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_by) + 1U);
        }
        else
        {
            /* Switch: '<S36>/Switch1' incorporates:
             *  Switch: '<S36>/Switch2'
             *  UnitDelay: '<S36>/Unit Delay'
             */
            VeVLDR_Cnt_BHV_PerfDiag_FailCnt = VLDR_ac_DW.UnitDelay_DSTATE_by;
        }

        /* End of Outputs for SubSystem: '<S23>/Turn On Delay Sample' */

        /* Switch: '<S37>/Switch2' */
        if (rtb_UnitDelay_dr)
        {
            /* Switch: '<S37>/Switch1' incorporates:
             *  Constant: '<S37>/Constant Value1'
             *  Sum: '<S37>/Subtraction'
             *  Switch: '<S37>/Switch2'
             *  UnitDelay: '<S37>/Unit Delay'
             */
            VeVLDR_Cnt_BHV_PerfDiag_SmpCnt = (uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_mm5) + 1U);
        }
        else
        {
            /* Switch: '<S37>/Switch1' incorporates:
             *  Switch: '<S37>/Switch2'
             *  UnitDelay: '<S37>/Unit Delay'
             */
            VeVLDR_Cnt_BHV_PerfDiag_SmpCnt = VLDR_ac_DW.UnitDelay_DSTATE_mm5;
        }

        /* End of Switch: '<S37>/Switch2' */
    }

    /* End of Switch: '<S36>/Switch1' */
    /* End of Outputs for SubSystem: '<S29>/Counter Reset  Enabled 1' */

    /* Update for UnitDelay: '<S36>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_by = VeVLDR_Cnt_BHV_PerfDiag_FailCnt;

    /* End of Outputs for SubSystem: '<S29>/Counter Reset  Enabled ' */

    /* Outputs for Atomic SubSystem: '<S29>/Counter Reset  Enabled 1' */
    /* Update for UnitDelay: '<S37>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_mm5 = VeVLDR_Cnt_BHV_PerfDiag_SmpCnt;

    /* End of Outputs for SubSystem: '<S29>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S29>/Greater Than or Equal ' incorporates:
     *  Constant: '<S26>/Calib'
     */
    rtb_LogicalOperator7 = (VeVLDR_Cnt_BHV_PerfDiag_FailCnt >=
                            KeVLDR_Cnt_BHV_PerfDiag_FailCnt);

    /* Logic: '<S29>/NOT5' incorporates:
     *  Constant: '<S27>/Calib'
     *  Logic: '<S29>/NOT3'
     *  RelationalOperator: '<S29>/Less Than  or Equal'
     */
    rtb_UnitDelay_dr = ((VeVLDR_Cnt_BHV_PerfDiag_SmpCnt >=
                         KeVLDR_Cnt_BHV_PerfDiag_SmpCnt) &&
                        (!rtb_LogicalOperator7));

    /* Switch: '<S42>/Switch1' incorporates:
     *  Constant: '<S35>/Constant Value'
     *  DataStoreWrite: '<S20>/Data Store Write1'
     *  Switch: '<S41>/Switch1'
     */
    if (rtb_VM_Conditional_Signal_PostC)
    {
        VLDR_ac_DW.NeVLDR_Cnt_BHV_PerfDiag_MFOP = 0U;
    }
    else
    {
        if (rtb_UnitDelay_dr)
        {
            /* MinMax: '<S35>/Minimum2' incorporates:
             *  DataStoreRead: '<S20>/Data Store Read1'
             *  Switch: '<S41>/Switch1'
             */
            if (VeVLDR_Cnt_BHV_PerfDiag_FailCnt >
                    VLDR_ac_DW.NeVLDR_Cnt_BHV_PerfDiag_MFOP)
            {
                /* DataStoreWrite: '<S20>/Data Store Write1' incorporates:
                 *  Switch: '<S41>/Switch1'
                 */
                VLDR_ac_DW.NeVLDR_Cnt_BHV_PerfDiag_MFOP =
                    VeVLDR_Cnt_BHV_PerfDiag_FailCnt;
            }

            /* End of MinMax: '<S35>/Minimum2' */
        }
    }

    /* End of Switch: '<S42>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S28>/Fail' */
    VLDR_ac_Fail(rtb_LogicalOperator7, &VLDR_ac_B.Merge_j);

    /* End of Outputs for SubSystem: '<S28>/Fail' */

    /* Outputs for Enabled SubSystem: '<S28>/Init' */
    VLDR_ac_Init_a(rtb_RelationalOperator3_f, &VLDR_ac_B.Merge_j);

    /* End of Outputs for SubSystem: '<S28>/Init' */

    /* Outputs for Enabled SubSystem: '<S28>/Pass' */
    VLDR_ac_Pass(rtb_UnitDelay_dr, &VLDR_ac_B.Merge_j);

    /* End of Outputs for SubSystem: '<S28>/Pass' */

    /* Update for UnitDelay: '<S29>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_ja = rtb_UnitDelay_dr;

    /* Update for UnitDelay: '<S29>/Unit Delay1' */
    VLDR_ac_DW.UnitDelay1_DSTATE_ej = rtb_LogicalOperator7;

    /* End of Outputs for SubSystem: '<S4>/BHV Diagnostics' */
#endif

#if Rte_SysCon_Variant_VLDR_15

    /* Outputs for Enabled SubSystem: '<S4>/CPV2_Diagnostics' */
    /* Inport: '<Root>/VeTAIR_Pct_CPV2_PstnAct' */
    (void)Rte_Read_VeTAIR_Pct_CPV2_PstnAct_Value(&tmpRead_i);

    /* Inport: '<Root>/VeTAIR_e_CPV2_CalSts' */
    (void)Rte_Read_VeTAIR_e_CPV2_CalSts_Value(&tmpRead_h);

    /* Outputs for Enabled SubSystem: '<S4>/CPV2_Diagnostics' incorporates:
     *  EnablePort: '<S8>/Enable'
     */

    /* RelationalOperator: '<S65>/Relational Operator3' incorporates:
     *  Constant: '<S65>/Constant3'
     *  DataStoreRead: '<S58>/Data Store Read2'
     *  S-Function (sfix_bitop): '<S65>/Bitwise Operator2'
     */
    rtb_UnitDelay_dr = ((((uint32)VLDR_ac_DW.StatusByte_HybPropSysCoolCntrlV) &
                         64U) == 0U);

    /* Logic: '<S65>/Logical1' incorporates:
     *  Constant: '<S64>/Calib'
     *  Constant: '<S65>/Constant1'
     *  Constant: '<S80>/Constant'
     *  Constant: '<S81>/Calib'
     *  Constant: '<S82>/Calib'
     *  Constant: '<S83>/KeVLDR_b_CPV_PerfDiag_CalSts_Ovrd'
     *  Constant: '<S84>/Constant1'
     *  Constant: '<S84>/Constant2'
     *  Constant: '<S85>/Constant1'
     *  Constant: '<S85>/Constant2'
     *  Constant: '<S86>/Constant1'
     *  Constant: '<S86>/Constant2'
     *  DataStoreRead: '<S58>/Data Store Read2'
     *  DataStoreRead: '<S84>/StatusByte_LostComm_HybPropSysCoolCntrlVal_E'
     *  DataStoreRead: '<S85>/StatusByte_LIN3_BusOff'
     *  DataStoreRead: '<S86>/StatusByte_ThrmlRlyCtrlCkt'
     *  Inport: '<Root>/VeTAIR_e_CPV2_CalSts'
     *  Logic: '<S59>/Logical Operator'
     *  Logic: '<S59>/Logical Operator1'
     *  Logic: '<S59>/Logical Operator2'
     *  Logic: '<S59>/Logical Operator4'
     *  Logic: '<S59>/Logical3'
     *  Logic: '<S65>/Logical Operator'
     *  Logic: '<S65>/Logical10'
     *  Logic: '<S65>/Logical12'
     *  Logic: '<S84>/Logical Operator'
     *  Logic: '<S85>/Logical Operator'
     *  Logic: '<S86>/Logical Operator'
     *  RelationalOperator: '<S59>/Comparison2'
     *  RelationalOperator: '<S59>/Relational Operator'
     *  RelationalOperator: '<S59>/Relational Operator2'
     *  RelationalOperator: '<S65>/Relational Operator1'
     *  RelationalOperator: '<S84>/Relational Operator1'
     *  RelationalOperator: '<S84>/Relational Operator2'
     *  RelationalOperator: '<S85>/Relational Operator1'
     *  RelationalOperator: '<S85>/Relational Operator2'
     *  RelationalOperator: '<S86>/Relational Operator1'
     *  RelationalOperator: '<S86>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S65>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S84>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S84>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S85>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S85>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S86>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S86>/Bitwise Operator2'
     */
    rtb_LogicalOperator7 = ((((((((rtb_TmpSignalConversionAtVeDFIR &&
        rtb_Logical1) && (((((uint32)VLDR_ac_DW.StatusByte_LostComm_HybPropSysC)
                            & 1U) == 0U) || ((((uint32)
        VLDR_ac_DW.StatusByte_LostComm_HybPropSysC) & 64U) != 0U))) &&
        (((((uint32)VLDR_ac_DW.StatusByte_LIN3_BusOff) & 1U) == 0U) ||
         ((((uint32)VLDR_ac_DW.StatusByte_LIN3_BusOff) & 64U) != 0U))) &&
        (((((uint32)VLDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 1U) == 0U) ||
         ((((uint32)VLDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 64U) != 0U))) &&
        (rtb_TmpSignalConversionAtVeRC_p < KeVLDR_Pct_CPV2Vlv_PstnCmnd_Max)) &&
        (rtb_TmpSignalConversionAtVeRC_p > KeVLDR_Pct_CPV2Vlv_PstnCmnd_Min)) &&
        ((((uint32)tmpRead_h) != CeTAIR_e_CPV_Calibration_Taking_Place) ||
         (KeVLDR_b_CPV2_PerfDiag_CalSts_Ovrd))) &&
                            ((!KeVLDR_b_HybPropSysCoolCntrlVal_E_Perf_LtchEnbl) ||
        (((((uint32)VLDR_ac_DW.StatusByte_HybPropSysCoolCntrlV) & 1U) == 0U) ||
         (!rtb_UnitDelay_dr))));

    /* RelationalOperator: '<S61>/Comparison1' incorporates:
     *  Abs: '<S61>/Abs'
     *  Constant: '<S88>/KeVLDR_Pct_CPV_PerfDiag_PstnDiffMax'
     *  Sum: '<S61>/Sum1'
     */
    rtb_AND_ea = (fabsf(rtb_TmpSignalConversionAtVeRC_p - tmpRead_i) >=
                  KeVLDR_Pct_CPV2_PerfDiag_PstnDiffMax);

    /* Outputs for Atomic SubSystem: '<S61>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S91>/EdgeRising' */
    /* Logic: '<S92>/AND' incorporates:
     *  Logic: '<S92>/OR1'
     *  UnitDelay: '<S92>/Unit Delay'
     */
    rtb_RelationalOperator3_f = (rtb_AND_ea && (!VLDR_ac_DW.UnitDelay_DSTATE_lkp));

    /* Update for UnitDelay: '<S92>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_lkp = rtb_AND_ea;

    /* End of Outputs for SubSystem: '<S91>/EdgeRising' */

    /* Switch: '<S91>/Switch1' incorporates:
     *  Constant: '<S87>/KeVLDR_Cnt_CVP_Position_Wait_Time'
     *  Constant: '<S91>/Constant Value'
     *  Logic: '<S91>/OR'
     *  Logic: '<S91>/OR1'
     *  MinMax: '<S91>/Minimum'
     *  Sum: '<S91>/Summation'
     *  UnitDelay: '<S91>/Unit Delay'
     */
    if ((!rtb_AND_ea) || rtb_RelationalOperator3_f)
    {
        /* Switch: '<S91>/Switch1' incorporates:
         *  Constant: '<S91>/Constant Value1'
         */
        rtb_Switch1_dj = 0U;
    }
    else if (KeVLDR_Cnt_CPV2_Position_Wait_Time < ((uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_ew) + 1U)))
    {
        /* MinMax: '<S91>/Minimum' incorporates:
         *  Constant: '<S87>/KeVLDR_Cnt_CVP_Position_Wait_Time'
         *  Switch: '<S91>/Switch1'
         */
        rtb_Switch1_dj = KeVLDR_Cnt_CPV2_Position_Wait_Time;
    }
    else
    {
        /* Switch: '<S91>/Switch1' incorporates:
         *  Constant: '<S91>/Constant Value'
         *  MinMax: '<S91>/Minimum'
         *  Sum: '<S91>/Summation'
         *  UnitDelay: '<S91>/Unit Delay'
         */
        rtb_Switch1_dj = (uint16)(((uint32)VLDR_ac_DW.UnitDelay_DSTATE_ew) + 1U);
    }

    /* End of Switch: '<S91>/Switch1' */

    /* Update for UnitDelay: '<S91>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_ew = rtb_Switch1_dj;

    /* End of Outputs for SubSystem: '<S61>/Turn On Delay Sample' */

    /* Switch: '<S61>/Switch1' incorporates:
     *  Constant: '<S90>/KeVLDR_b_CPV_PerfDiag_Fail_SD'
     */
    if (KeVLDR_b_CPV2_PerfDiag_Fail_SD)
    {
        /* Switch: '<S61>/Switch1' incorporates:
         *  Constant: '<S89>/KeVLDR_b_CPV_PerfDiag_Fail_D'
         */
        VeVLDR_b_CPV2_PerDiag_Fail_AD = KeVLDR_b_CPV2_PerfDiag_Fail_D;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S61>/Turn On Delay Sample' */
        /* Switch: '<S61>/Switch1' incorporates:
         *  Constant: '<S87>/KeVLDR_Cnt_CVP_Position_Wait_Time'
         *  Logic: '<S91>/AND'
         *  RelationalOperator: '<S91>/Greater  Than'
         */
        VeVLDR_b_CPV2_PerDiag_Fail_AD = (rtb_AND_ea && (rtb_Switch1_dj >=
            KeVLDR_Cnt_CPV2_Position_Wait_Time));

        /* End of Outputs for SubSystem: '<S61>/Turn On Delay Sample' */
    }

    /* End of Switch: '<S61>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S65>/EdgeFalling1' */
    /* Logic: '<S67>/AND' incorporates:
     *  Logic: '<S67>/OR1'
     *  UnitDelay: '<S67>/Unit Delay'
     */
    rtb_AND_ea = ((!rtb_UnitDelay_dr) && (VLDR_ac_DW.UnitDelay_DSTATE_gyj));

    /* Update for UnitDelay: '<S67>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_gyj = rtb_UnitDelay_dr;

    /* End of Outputs for SubSystem: '<S65>/EdgeFalling1' */

    /* Logic: '<S65>/Logical5' incorporates:
     *  Logic: '<S60>/NOT4'
     */
    rtb_UnitDelay_dr = ((rtb_VM_Conditional_Signal_DsblD ||
                         rtb_VM_Conditional_Signal_PostC) || rtb_AND_ea);

    /* Logic: '<S66>/Fail Counter Reset' incorporates:
     *  UnitDelay: '<S66>/Unit Delay'
     *  UnitDelay: '<S66>/Unit Delay1'
     */
    rtb_AND_ea = ((rtb_UnitDelay_dr || (VLDR_ac_DW.UnitDelay_DSTATE_a2)) ||
                  (VLDR_ac_DW.UnitDelay1_DSTATE_l));

    /* Outputs for Atomic SubSystem: '<S66>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S66>/Counter Reset  Enabled ' */
    /* Switch: '<S73>/Switch1' incorporates:
     *  Logic: '<S66>/NOT6'
     *  Switch: '<S73>/Switch2'
     *  Switch: '<S74>/Switch1'
     */
    if (rtb_AND_ea)
    {
        /* Switch: '<S73>/Switch1' incorporates:
         *  Constant: '<S73>/Constant Value2'
         */
        VeVLDR_Cnt_CPV2_PerfDiag_FailCnt = 0U;

        /* Switch: '<S74>/Switch1' incorporates:
         *  Constant: '<S74>/Constant Value2'
         */
        VeVLDR_Cnt_CPV2_PerfDiag_SmpCnt = 0U;
    }
    else
    {
        if (rtb_LogicalOperator7 && (VeVLDR_b_CPV2_PerDiag_Fail_AD))
        {
            /* Switch: '<S73>/Switch2' incorporates:
             *  Constant: '<S73>/Constant Value1'
             *  Sum: '<S73>/Subtraction'
             *  Switch: '<S73>/Switch1'
             *  UnitDelay: '<S73>/Unit Delay'
             */
            VeVLDR_Cnt_CPV2_PerfDiag_FailCnt = (uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_fn) + 1U);
        }
        else
        {
            /* Switch: '<S73>/Switch1' incorporates:
             *  Switch: '<S73>/Switch2'
             *  UnitDelay: '<S73>/Unit Delay'
             */
            VeVLDR_Cnt_CPV2_PerfDiag_FailCnt = VLDR_ac_DW.UnitDelay_DSTATE_fn;
        }

        /* Switch: '<S74>/Switch2' */
        if (rtb_LogicalOperator7)
        {
            /* Switch: '<S74>/Switch1' incorporates:
             *  Constant: '<S74>/Constant Value1'
             *  Sum: '<S74>/Subtraction'
             *  Switch: '<S74>/Switch2'
             *  UnitDelay: '<S74>/Unit Delay'
             */
            VeVLDR_Cnt_CPV2_PerfDiag_SmpCnt = (uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_lk) + 1U);
        }
        else
        {
            /* Switch: '<S74>/Switch1' incorporates:
             *  Switch: '<S74>/Switch2'
             *  UnitDelay: '<S74>/Unit Delay'
             */
            VeVLDR_Cnt_CPV2_PerfDiag_SmpCnt = VLDR_ac_DW.UnitDelay_DSTATE_lk;
        }

        /* End of Switch: '<S74>/Switch2' */
    }

    /* End of Switch: '<S73>/Switch1' */
    /* End of Outputs for SubSystem: '<S66>/Counter Reset  Enabled 1' */

    /* Update for UnitDelay: '<S73>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_fn = VeVLDR_Cnt_CPV2_PerfDiag_FailCnt;

    /* End of Outputs for SubSystem: '<S66>/Counter Reset  Enabled ' */

    /* Outputs for Atomic SubSystem: '<S66>/Counter Reset  Enabled 1' */
    /* Update for UnitDelay: '<S74>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_lk = VeVLDR_Cnt_CPV2_PerfDiag_SmpCnt;

    /* End of Outputs for SubSystem: '<S66>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S66>/Greater Than or Equal ' incorporates:
     *  Constant: '<S62>/KeVLDR_Cnt_CPV_PerfDiag_FailCnt'
     */
    rtb_LogicalOperator7 = (((sint32)VeVLDR_Cnt_CPV2_PerfDiag_FailCnt) >=
                            ((sint32)KeVLDR_Cnt_CPV2_PerfDiag_FailCnt));

    /* Logic: '<S66>/NOT5' incorporates:
     *  Constant: '<S63>/KeVLDR_Cnt_CPV_PerfDiag_SmplCnt'
     *  Logic: '<S66>/NOT3'
     *  RelationalOperator: '<S66>/Less Than  or Equal'
     */
    rtb_AND_ea = ((((sint32)VeVLDR_Cnt_CPV2_PerfDiag_SmpCnt) >= ((sint32)
                    KeVLDR_Cnt_CPV2_PerfDiag_SmplCnt)) && (!rtb_LogicalOperator7));

    /* Switch: '<S79>/Switch1' incorporates:
     *  Constant: '<S72>/Constant Value'
     *  DataStoreWrite: '<S58>/Data Store Write'
     *  Switch: '<S78>/Switch1'
     */
    if (rtb_VM_Conditional_Signal_PostC)
    {
        VLDR_ac_DW.NeVLDR_Cnt_CPV2_PerfDiag_MFOP = 0U;
    }
    else
    {
        if (rtb_AND_ea)
        {
            /* MinMax: '<S72>/Minimum2' incorporates:
             *  DataStoreRead: '<S58>/Data Store Read'
             *  Switch: '<S78>/Switch1'
             */
            if (VeVLDR_Cnt_CPV2_PerfDiag_FailCnt >
                    VLDR_ac_DW.NeVLDR_Cnt_CPV2_PerfDiag_MFOP)
            {
                /* DataStoreWrite: '<S58>/Data Store Write' incorporates:
                 *  Switch: '<S78>/Switch1'
                 */
                VLDR_ac_DW.NeVLDR_Cnt_CPV2_PerfDiag_MFOP =
                    VeVLDR_Cnt_CPV2_PerfDiag_FailCnt;
            }

            /* End of MinMax: '<S72>/Minimum2' */
        }
    }

    /* End of Switch: '<S79>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S65>/Fail' */
    VLDR_ac_Fail(rtb_LogicalOperator7, &VLDR_ac_B.Merge_a);

    /* End of Outputs for SubSystem: '<S65>/Fail' */

    /* Outputs for Enabled SubSystem: '<S65>/Init' */
    VLDR_ac_Init_a(rtb_UnitDelay_dr, &VLDR_ac_B.Merge_a);

    /* End of Outputs for SubSystem: '<S65>/Init' */

    /* Outputs for Enabled SubSystem: '<S65>/Pass' */
    VLDR_ac_Pass(rtb_AND_ea, &VLDR_ac_B.Merge_a);

    /* End of Outputs for SubSystem: '<S65>/Pass' */

    /* RelationalOperator: '<S65>/Relational Operator' incorporates:
     *  Constant: '<S68>/Constant'
     *  Merge: '<S65>/Merge'
     */
    VeVLDR_b_CPV2_PerfDiag_FltDtct = (((uint32)VLDR_ac_B.Merge_a) ==
        CeDFIB_e_Fail);

    /* Update for UnitDelay: '<S66>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_a2 = rtb_AND_ea;

    /* Update for UnitDelay: '<S66>/Unit Delay1' */
    VLDR_ac_DW.UnitDelay1_DSTATE_l = rtb_LogicalOperator7;

    /* End of Outputs for SubSystem: '<S4>/CPV2_Diagnostics' */
#endif

    /* SignalConversion generated from: '<S4>/CPV_Diagnostics' */
#if !Rte_SysCon_Variant_VLDR_13 && Rte_SysCon_Variant_VLDR_8

    /* VariantMerge generated from: '<S4>/CPV_Diagnostics' incorporates:
     *  Inport: '<Root>/VeRCVR_b_FrWyVlv_PstnSv'
     */
    (void)Rte_Read_VeRCVR_b_FrWyVlv_PstnSv_Value
        (&rtb_VM_Conditional_Signal_CPV_D);

    /* VariantMerge generated from: '<S4>/CPV_Diagnostics' incorporates:
     *  Inport: '<Root>/VeTAIR_b_FrWyVlv_RsErr'
     */
    (void)Rte_Read_VeTAIR_b_FrWyVlv_RsErr_Value(&rtb_VM_Conditional_Signal_CPV_f);

#elif !(!Rte_SysCon_Variant_VLDR_13) && Rte_SysCon_Variant_VLDR_8

    /* VariantMerge generated from: '<S4>/CPV_Diagnostics' incorporates:
     *  SignalConversion generated from: '<S4>/CPV_Diagnostics'
     */
    rtb_VM_Conditional_Signal_CPV_D = false;

#endif

    /* End of SignalConversion generated from: '<S4>/CPV_Diagnostics' */

    /* SignalConversion generated from: '<S4>/CPV_Diagnostics' */
#if !Rte_SysCon_Variant_VLDR_13 && Rte_SysCon_Variant_VLDR_8

    /* VariantMerge generated from: '<S4>/CPV_Diagnostics' incorporates:
     *  Inport: '<Root>/VeTAIR_b_FrWyVlv_OvrVltg'
     */
    (void)Rte_Read_VeTAIR_b_FrWyVlv_OvrVltg_Value
        (&rtb_VM_Conditional_Signal_CPV_n);

#elif !(!Rte_SysCon_Variant_VLDR_13) && Rte_SysCon_Variant_VLDR_8

    /* VariantMerge generated from: '<S4>/CPV_Diagnostics' incorporates:
     *  SignalConversion generated from: '<S4>/CPV_Diagnostics'
     */
    rtb_VM_Conditional_Signal_CPV_f = false;

#endif

    /* End of SignalConversion generated from: '<S4>/CPV_Diagnostics' */

    /* SignalConversion generated from: '<S4>/CPV_Diagnostics' */
#if !Rte_SysCon_Variant_VLDR_13 && Rte_SysCon_Variant_VLDR_8

    /* VariantMerge generated from: '<S4>/CPV_Diagnostics' incorporates:
     *  Inport: '<Root>/VeTAIR_b_FrWyVlv_UndrVltg'
     */
    (void)Rte_Read_VeTAIR_b_FrWyVlv_UndrVltg_Value
        (&rtb_VM_Conditional_Signal_CPV_m);

#elif !(!Rte_SysCon_Variant_VLDR_13) && Rte_SysCon_Variant_VLDR_8

    /* VariantMerge generated from: '<S4>/CPV_Diagnostics' incorporates:
     *  SignalConversion generated from: '<S4>/CPV_Diagnostics'
     */
    rtb_VM_Conditional_Signal_CPV_n = false;

#endif

    /* End of SignalConversion generated from: '<S4>/CPV_Diagnostics' */

    /* SignalConversion generated from: '<S4>/CPV_Diagnostics' */
#if !Rte_SysCon_Variant_VLDR_13 && Rte_SysCon_Variant_VLDR_8

    /* VariantMerge generated from: '<S4>/CPV_Diagnostics' incorporates:
     *  Inport: '<Root>/VeTAIR_b_FrWyVlv_ThrmlWrng'
     */
    (void)Rte_Read_VeTAIR_b_FrWyVlv_ThrmlWrng_Value
        (&rtb_VM_Conditional_Signal_CPV_d);

#elif !(!Rte_SysCon_Variant_VLDR_13) && Rte_SysCon_Variant_VLDR_8

    /* VariantMerge generated from: '<S4>/CPV_Diagnostics' incorporates:
     *  SignalConversion generated from: '<S4>/CPV_Diagnostics'
     */
    rtb_VM_Conditional_Signal_CPV_m = false;

#endif

    /* End of SignalConversion generated from: '<S4>/CPV_Diagnostics' */

    /* SignalConversion generated from: '<S4>/CPV_Diagnostics' */
#if !Rte_SysCon_Variant_VLDR_13 && Rte_SysCon_Variant_VLDR_8

    /* VariantMerge generated from: '<S4>/CPV_Diagnostics' incorporates:
     *  Inport: '<Root>/VeTAIR_b_FrWyVlv_BlckPnt'
     */
    (void)Rte_Read_VeTAIR_b_FrWyVlv_BlckPnt_Value
        (&rtb_VM_Conditional_Signal_CPV_l);

#elif !(!Rte_SysCon_Variant_VLDR_13) && Rte_SysCon_Variant_VLDR_8

    /* VariantMerge generated from: '<S4>/CPV_Diagnostics' incorporates:
     *  SignalConversion generated from: '<S4>/CPV_Diagnostics'
     */
    rtb_VM_Conditional_Signal_CPV_d = false;

#endif

    /* End of SignalConversion generated from: '<S4>/CPV_Diagnostics' */

    /* SignalConversion generated from: '<S4>/CPV_Diagnostics' */
#if !Rte_SysCon_Variant_VLDR_13 && Rte_SysCon_Variant_VLDR_8

    /* VariantMerge generated from: '<S4>/CPV_Diagnostics' incorporates:
     *  Inport: '<Root>/VeTAIR_b_FrWyVlv_MechBrk'
     */
    (void)Rte_Read_VeTAIR_b_FrWyVlv_MechBrk_Value
        (&rtb_VM_Conditional_Signal_CP_cz);

#elif !(!Rte_SysCon_Variant_VLDR_13) && Rte_SysCon_Variant_VLDR_8

    /* VariantMerge generated from: '<S4>/CPV_Diagnostics' incorporates:
     *  SignalConversion generated from: '<S4>/CPV_Diagnostics'
     */
    rtb_VM_Conditional_Signal_CPV_l = false;

    /* VariantMerge generated from: '<S4>/CPV_Diagnostics' incorporates:
     *  SignalConversion generated from: '<S4>/CPV_Diagnostics'
     */
    rtb_VM_Conditional_Signal_CP_cz = false;

#endif

    /* End of SignalConversion generated from: '<S4>/CPV_Diagnostics' */

    /* Logic: '<S10>/Logical28' incorporates:
     *  Inport: '<Root>/VeTMIR_b_MainRly_CmdReq'
     */
#if Rte_SysCon_Variant_VLDR_10 || Rte_SysCon_Variant_VLDR_11 || Rte_SysCon_Variant_VLDR_12 || Rte_SysCon_Variant_VLDR_15 || Rte_SysCon_Variant_VLDR_8

    (void)Rte_Read_VeTMIR_b_MainRly_CmdReq_Value(&rtb_Logical28);

    /* Logic: '<S10>/Logical28' incorporates:
     *  Constant: '<S159>/KeVLDR_b_CPV_PerfDiag_MainRly_Ovrd'
     *  Inport: '<Root>/VeTMIR_b_MainRly_CmdReq'
     */
    rtb_Logical28 = (rtb_Logical28 || (KeVLDR_b_CPV_PerfDiag_MainRly_Ovrd));

#endif

    /* End of Logic: '<S10>/Logical28' */
#if Rte_SysCon_Variant_VLDR_8

    /* Outputs for Enabled SubSystem: '<S4>/CPV_Diagnostics' */
    /* Outputs for Enabled SubSystem: '<S4>/CPV_Diagnostics' incorporates:
     *  EnablePort: '<S9>/Enable'
     */

    /* S-Function (sfix_bitop): '<S118>/Bitwise Operator2' incorporates:
     *  Logic: '<S117>/Logical Operator'
     *  Logic: '<S118>/Logical Operator'
     *  Logic: '<S94>/Logical17'
     *  Logic: '<S94>/Logical2'
     *  Logic: '<S94>/Logical20'
     *  RelationalOperator: '<S117>/Relational Operator1'
     *  RelationalOperator: '<S117>/Relational Operator2'
     *  RelationalOperator: '<S118>/Relational Operator1'
     *  RelationalOperator: '<S118>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S117>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S117>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S118>/Bitwise Operator1'
     */
#if Rte_SysCon_Variant_VLDR_13

    /* VariantMerge generated from: '<S94>/Variant Source1' incorporates:
     *  Constant: '<S118>/Constant1'
     *  Constant: '<S118>/Constant2'
     *  DataStoreRead: '<S118>/StatusByte_LIN2_BusOff'
     */
    rtb_VariantMerge_For_Variant_So = (((((sint32)
        VLDR_ac_DW.StatusByte_LIN2_BusOff) & 1) <= 0) || ((((uint32)
        VLDR_ac_DW.StatusByte_LIN2_BusOff) & 64U) != 0U));

#else

    /* VariantMerge generated from: '<S94>/Variant Source1' incorporates:
     *  Constant: '<S117>/Constant1'
     *  Constant: '<S117>/Constant2'
     *  Constant: '<S133>/KeVLDR_b_CPV_PerfDiag_LINBusOff_Ovrd'
     *  DataStoreRead: '<S117>/StatusByte_LIN1_BusOff'
     *  Logic: '<S117>/Logical Operator'
     *  Logic: '<S94>/Logical17'
     *  Logic: '<S94>/Logical20'
     *  RelationalOperator: '<S117>/Relational Operator1'
     *  RelationalOperator: '<S117>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S117>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S117>/Bitwise Operator2'
     */
    rtb_VariantMerge_For_Variant_So = ((((((sint32)
        VLDR_ac_DW.StatusByte_LIN1_BusOff) & 1) <= 0) || ((((uint32)
        VLDR_ac_DW.StatusByte_LIN1_BusOff) & 64U) != 0U)) ||
        (KeVLDR_b_CPV_PerfDiag_LINBusOff_Ovrd));

#endif

    /* End of S-Function (sfix_bitop): '<S118>/Bitwise Operator2' */

    /* Switch: '<S94>/Switch1' incorporates:
     *  Constant: '<S143>/KeVLDR_b_CPV_PosActFA_Enbl'
     */
    if (KeVLDR_b_CPV_PosActFA_Enbl)
    {
        /* RelationalOperator: '<S101>/Less Than  or Equal' incorporates:
         *  Constant: '<S94>/Constant2'
         */
        rtb_LogicalOperator7 = true;
    }
    else
    {
        /* RelationalOperator: '<S101>/Less Than  or Equal' incorporates:
         *  Logic: '<S94>/Logical23'
         */
        rtb_LogicalOperator7 = !rtb_TmpSignalConversionAtVeT_a4;
    }

    /* End of Switch: '<S94>/Switch1' */

    /* SignalConversion generated from: '<S94>/Variant Source' incorporates:
     *  Logic: '<S94>/Logical10'
     *  Logic: '<S94>/Logical11'
     *  Logic: '<S94>/Logical12'
     *  Logic: '<S94>/Logical13'
     *  Logic: '<S94>/Logical14'
     *  Logic: '<S94>/Logical15'
     *  Logic: '<S94>/Logical24'
     *  Logic: '<S94>/Logical27'
     *  Logic: '<S94>/Logical4'
     *  Logic: '<S94>/Logical6'
     *  Logic: '<S94>/Logical7'
     *  Logic: '<S94>/Logical8'
     *  Logic: '<S94>/Logical9'
     */
#if Rte_SysCon_Variant_VLDR_13

    /* VariantMerge generated from: '<S94>/Variant Source' */
    rtb_VariantMerge_For_Variant__h = rtb_LogicalOperator7;

#else

    /* VariantMerge generated from: '<S94>/Variant Source' incorporates:
     *  Constant: '<S135>/KeVLDR_b_CPV_PerfDiag_OV_Ovrd'
     *  Constant: '<S136>/KeVLDR_b_CPV_PerfDiag_PstnSNA_Ovrd'
     *  Constant: '<S137>/KeVLDR_b_CPV_PerfDiag_PstnSv_Ovrd'
     *  Constant: '<S138>/KeVLDR_b_CPV_PerfDiag_RsErr_Ovrd'
     *  Constant: '<S140>/KeVLDR_b_CPV_PerfDiag_TW_Ovrd'
     *  Constant: '<S142>/KeVLDR_b_CPV_PerfDiag_UV_Ovrd'
     *  Logic: '<S94>/Logical10'
     *  Logic: '<S94>/Logical11'
     *  Logic: '<S94>/Logical12'
     *  Logic: '<S94>/Logical13'
     *  Logic: '<S94>/Logical14'
     *  Logic: '<S94>/Logical15'
     *  Logic: '<S94>/Logical24'
     *  Logic: '<S94>/Logical27'
     *  Logic: '<S94>/Logical4'
     *  Logic: '<S94>/Logical6'
     *  Logic: '<S94>/Logical7'
     *  Logic: '<S94>/Logical8'
     *  Logic: '<S94>/Logical9'
     */
    rtb_VariantMerge_For_Variant__h = ((((((((rtb_LogicalOperator7 ||
        rtb_VM_Conditional_Signal_CPV_l) || rtb_VM_Conditional_Signal_CP_cz) ||
        (KeVLDR_b_CPV_PerfDiag_PstnSNA_Ovrd)) &&
        ((!rtb_VM_Conditional_Signal_CPV_D) ||
         (KeVLDR_b_CPV_PerfDiag_PstnSv_Ovrd))) &&
        ((!rtb_VM_Conditional_Signal_CPV_f) || (KeVLDR_b_CPV_PerfDiag_RsErr_Ovrd)))
        && ((!rtb_VM_Conditional_Signal_CPV_n) || (KeVLDR_b_CPV_PerfDiag_OV_Ovrd)))
        && ((!rtb_VM_Conditional_Signal_CPV_m) || (KeVLDR_b_CPV_PerfDiag_UV_Ovrd)))
        && ((!rtb_VM_Conditional_Signal_CPV_d) || (KeVLDR_b_CPV_PerfDiag_TW_Ovrd)));

#endif

    /* End of SignalConversion generated from: '<S94>/Variant Source' */

    /* Switch: '<S94>/Switch' incorporates:
     *  Constant: '<S132>/KeVLDR_b_CPV_PerfDiag_Enbl_SD'
     */
    if (KeVLDR_b_CPV_PerfDiag_Enbl_SD)
    {
        /* RelationalOperator: '<S101>/Less Than  or Equal' incorporates:
         *  Constant: '<S131>/KeVLDR_b_CPV_PerfDiag_Enbl_D'
         */
        rtb_LogicalOperator7 = KeVLDR_b_CPV_PerfDiag_Enbl_D;
    }
    else
    {
        /* RelationalOperator: '<S101>/Less Than  or Equal' incorporates:
         *  Constant: '<S119>/Constant1'
         *  Constant: '<S119>/Constant2'
         *  Constant: '<S120>/Constant1'
         *  Constant: '<S120>/Constant2'
         *  Constant: '<S121>/Constant1'
         *  Constant: '<S121>/Constant2'
         *  Constant: '<S126>/KeVLDR_U_CPV_MaxBattVltg_Alw'
         *  Constant: '<S127>/KeVLDR_U_CPV_MinBattVltg_Alw'
         *  Constant: '<S128>/KeVLDR_b_CPV_PerfDiag_BattVltg_Ovrd'
         *  Constant: '<S134>/KeVLDR_b_CPV_PerfDiag_LOC_Ovrd'
         *  Constant: '<S139>/KeVLDR_b_CPV_PerfDiag_SysVolt_Ovrd'
         *  Constant: '<S141>/KeVLDR_b_CPV_PerfDiag_ThrmlRlyErr_Ovrd'
         *  DataStoreRead: '<S119>/StatusByte_LosCommHybPSCCtrlValA'
         *  DataStoreRead: '<S120>/StatusByte_ThrmlRlyCtrlCkt'
         *  DataStoreRead: '<S121>/StatusByte_HB_PSC_CtrlValACktPerf'
         *  Logic: '<S119>/Logical Operator'
         *  Logic: '<S120>/Logical Operator'
         *  Logic: '<S121>/Logical Operator'
         *  Logic: '<S94>/Logical'
         *  Logic: '<S94>/Logical16'
         *  Logic: '<S94>/Logical18'
         *  Logic: '<S94>/Logical19'
         *  Logic: '<S94>/Logical21'
         *  Logic: '<S94>/Logical25'
         *  Logic: '<S94>/Logical30'
         *  Logic: '<S94>/Logical31'
         *  Logic: '<S94>/Logical5'
         *  RelationalOperator: '<S119>/Relational Operator1'
         *  RelationalOperator: '<S119>/Relational Operator2'
         *  RelationalOperator: '<S120>/Relational Operator1'
         *  RelationalOperator: '<S120>/Relational Operator2'
         *  RelationalOperator: '<S121>/Relational Operator1'
         *  RelationalOperator: '<S121>/Relational Operator2'
         *  RelationalOperator: '<S94>/Comparison4'
         *  RelationalOperator: '<S94>/Comparison5'
         *  S-Function (sfix_bitop): '<S119>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S119>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S120>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S120>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S121>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S121>/Bitwise Operator2'
         */
        rtb_LogicalOperator7 = (((((((((rtb_TmpSignalConversionAtVeDFIR ||
            (KeVLDR_b_CPV_PerfDiag_SysVolt_Ovrd)) && rtb_Logical28) &&
            rtb_Logical1) && (((VeVLDR_U_BattVltg_AD >=
                                KeVLDR_U_CPV_MinBattVltg_Alw) &&
                               (VeVLDR_U_BattVltg_AD <=
                                KeVLDR_U_CPV_MaxBattVltg_Alw)) ||
                              (KeVLDR_b_CPV_PerfDiag_BattVltg_Ovrd))) &&
            (((((sint32)VLDR_ac_DW.StatusByte_HB_PSC_CtrlValACktPe) & 1) <= 0) ||
             ((((uint32)VLDR_ac_DW.StatusByte_HB_PSC_CtrlValACktPe) & 64U) != 0U)))
            && ((((((sint32)VLDR_ac_DW.StatusByte_LosCommHybPSCCtrlVal) & 1) <=
                  0) || ((((uint32)VLDR_ac_DW.StatusByte_LosCommHybPSCCtrlVal) &
                          64U) != 0U)) || (KeVLDR_b_CPV_PerfDiag_LOC_Ovrd))) &&
            rtb_VariantMerge_For_Variant_So) && ((((((sint32)
            VLDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 1) <= 0) || ((((uint32)
            VLDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 64U) != 0U)) ||
            (KeVLDR_b_CPV_PerfDiag_ThrmlRlyErr_Ovrd))) &&
                                rtb_VariantMerge_For_Variant__h);
    }

    /* End of Switch: '<S94>/Switch' */

    /* Inport: '<Root>/VeTAIR_e_FrWyVlv_CalSts' */
    (void)Rte_Read_VeTAIR_e_FrWyVlv_CalSts_Value(&tmpRead_a);

    /* Outputs for Atomic SubSystem: '<S94>/DeltaOneStep1' */
    /* Sum: '<S115>/Sum//Sub' incorporates:
     *  UnitDelay: '<S115>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeRC_p = rtb_TmpSignalConversionAtVeRC_a -
        VLDR_ac_DW.UnitDelay_DSTATE_aa;

    /* Update for UnitDelay: '<S115>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_aa = rtb_TmpSignalConversionAtVeRC_a;

    /* End of Outputs for SubSystem: '<S94>/DeltaOneStep1' */

    /* Outputs for Atomic SubSystem: '<S94>/Timer Retrigger Reset Enabled' */
    /* Switch: '<S148>/Switch1' incorporates:
     *  Abs: '<S94>/Abs'
     *  Constant: '<S125>/KeVLDR_Pct_CPV_DltCmdSpd'
     *  RelationalOperator: '<S94>/Greater Than or Equal 4'
     */
    if (fabsf(rtb_TmpSignalConversionAtVeRC_p) >= KeVLDR_Pct_CPV_DltCmdSpd)
    {
        /* Switch: '<S148>/Switch1' incorporates:
         *  Constant: '<S144>/KeVLDR_t_CPV_DltCmdSpd_DsblTime'
         */
        rtb_TmpSignalConversionAtVeRC_p = KeVLDR_t_CPV_DltCmdSpd_DsblTime;
    }
    else
    {
        /* Switch: '<S148>/Switch1' incorporates:
         *  Constant: '<S146>/KeVLDR_t_dT_CPV'
         *  Constant: '<S148>/Constant Value4'
         *  MinMax: '<S148>/Maximum'
         *  Sum: '<S148>/Subtraction'
         *  UnitDelay: '<S148>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeRC_p = fmaxf(VLDR_ac_DW.UnitDelay_DSTATE_jx -
            KeVLDR_t_dT_CPV, 0.0F);
    }

    /* End of Switch: '<S148>/Switch1' */

    /* Update for UnitDelay: '<S148>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_jx = rtb_TmpSignalConversionAtVeRC_p;

    /* Logic: '<S94>/Logical26' incorporates:
     *  Constant: '<S148>/Constant Value2'
     *  RelationalOperator: '<S148>/Greater  Than1'
     */
    VeVLDR_b_CPV_Perf_DeltSpdCmdEnbl = (rtb_TmpSignalConversionAtVeRC_p <= 0.0F);

    /* End of Outputs for SubSystem: '<S94>/Timer Retrigger Reset Enabled' */

    /* Logic: '<S94>/Logical36' */
    rtb_TmpSignalConversionAtVeT_a4 = (rtb_LogicalOperator7 &&
        rtb_TmpSignalConversionAtVeT_a4);

    /* Outputs for Atomic SubSystem: '<S94>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S149>/EdgeRising' */
    /* Logic: '<S150>/AND' incorporates:
     *  Logic: '<S150>/OR1'
     *  UnitDelay: '<S150>/Unit Delay'
     */
    rtb_VM_Conditional_Signal_CPV_D = (rtb_TmpSignalConversionAtVeT_a4 &&
        (!VLDR_ac_DW.UnitDelay_DSTATE_pot));

    /* Update for UnitDelay: '<S150>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_pot = rtb_TmpSignalConversionAtVeT_a4;

    /* End of Outputs for SubSystem: '<S149>/EdgeRising' */

    /* Switch: '<S149>/Switch1' incorporates:
     *  Logic: '<S149>/OR'
     *  Logic: '<S149>/OR1'
     */
    if ((!rtb_TmpSignalConversionAtVeT_a4) || rtb_VM_Conditional_Signal_CPV_D)
    {
        /* Switch: '<S149>/Switch1' incorporates:
         *  Constant: '<S149>/Constant Value1'
         */
        rtb_TmpSignalConversionAtVeRC_p = 0.0F;
    }
    else
    {
        /* Switch: '<S149>/Switch1' incorporates:
         *  Constant: '<S122>/Calib'
         *  Constant: '<S145>/KeVLDR_t_CPV_FA_WaitTime'
         *  MinMax: '<S149>/Minimum'
         *  Sum: '<S149>/Summation'
         *  UnitDelay: '<S149>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeRC_p = fminf(KeVLDR_t_CPV_FA_WaitTime,
            HeVLDR_t_MedTED + VLDR_ac_DW.UnitDelay_DSTATE_l0);
    }

    /* End of Switch: '<S149>/Switch1' */
    /* End of Outputs for SubSystem: '<S94>/Turn On Delay Time' */

    /* Inport: '<Root>/VeTAIR_Pct_FrWyVlv_PstnAct' */
    (void)Rte_Read_VeTAIR_Pct_FrWyVlv_PstnAct_Value(&rtb_Switch1_np);

    /* Outputs for Atomic SubSystem: '<S94>/Turn On Delay Time' */
    /* Logic: '<S149>/AND' incorporates:
     *  Constant: '<S145>/KeVLDR_t_CPV_FA_WaitTime'
     *  RelationalOperator: '<S149>/Greater  Than'
     */
    rtb_VM_Conditional_Signal_CPV_D = (rtb_TmpSignalConversionAtVeT_a4 &&
        (rtb_TmpSignalConversionAtVeRC_p >= KeVLDR_t_CPV_FA_WaitTime));

    /* Update for UnitDelay: '<S149>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_l0 = rtb_TmpSignalConversionAtVeRC_p;

    /* End of Outputs for SubSystem: '<S94>/Turn On Delay Time' */

    /* Logic: '<S94>/Logical33' incorporates:
     *  Constant: '<S116>/Constant'
     *  Constant: '<S123>/KeVLDR_Pct_CPVVlv_PstnCmnd_Max'
     *  Constant: '<S124>/KeVLDR_Pct_CPVVlv_PstnCmnd_Min'
     *  Constant: '<S129>/KeVLDR_b_CPV_PerfDiag_CalSts_Ovrd'
     *  Constant: '<S130>/KeVLDR_b_CPV_PerfDiag_DtlCmdSpd_Ovrd'
     *  Constant: '<S147>/Calib'
     *  Inport: '<Root>/VeTAIR_e_FrWyVlv_CalSts'
     *  Logic: '<S94>/Logical1'
     *  Logic: '<S94>/Logical22'
     *  Logic: '<S94>/Logical3'
     *  Logic: '<S94>/Logical32'
     *  Logic: '<S94>/Logical35'
     *  Logic: '<S94>/Logical37'
     *  RelationalOperator: '<S94>/Comparison2'
     *  RelationalOperator: '<S94>/Comparison3'
     *  RelationalOperator: '<S94>/Comparison6'
     */
    VeVLDR_b_CPV_PerfDiag_Enbl_AD = ((rtb_LogicalOperator7 && ((((((uint32)
        tmpRead_a) != CeTAIR_e_CPV_Calibration_Taking_Place) ||
        (KeVLDR_b_CPV_PerfDiag_CalSts_Ovrd)) &&
        ((rtb_TmpSignalConversionAtVeRC_a <= KeVLDR_Pct_CPVVlv_PstnCmnd_Max) &&
         (rtb_TmpSignalConversionAtVeRC_a >= KeVLDR_Pct_CPVVlv_PstnCmnd_Min))) &&
        ((VeVLDR_b_CPV_Perf_DeltSpdCmdEnbl) ||
         (KeVLDR_b_CPV_PerfDiag_DtlCmdSpd_Ovrd)))) ||
        ((KeVLDR_b_CPV_DiagPerfCndsOV_En) && rtb_VM_Conditional_Signal_CPV_D));

    /* RelationalOperator: '<S100>/Relational Operator3' incorporates:
     *  Constant: '<S100>/Constant3'
     *  DataStoreRead: '<S93>/Data Store Read2'
     *  S-Function (sfix_bitop): '<S100>/Bitwise Operator2'
     */
    rtb_VM_Conditional_Signal_CPV_f = ((((uint32)
        VLDR_ac_DW.StatusByte_HB_PSC_CtrlValACktPe) & 64U) == 0U);

    /* Logic: '<S100>/Logical1' incorporates:
     *  Constant: '<S100>/Constant1'
     *  Constant: '<S99>/Calib'
     *  DataStoreRead: '<S93>/Data Store Read2'
     *  Logic: '<S100>/Logical Operator'
     *  Logic: '<S100>/Logical10'
     *  Logic: '<S100>/Logical12'
     *  RelationalOperator: '<S100>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S100>/Bitwise Operator3'
     */
    rtb_TmpSignalConversionAtVeT_a4 = ((VeVLDR_b_CPV_PerfDiag_Enbl_AD) &&
        ((!KeVLDR_b_HB_PSC_CtrlValACktPerf_LtchEnbl) || (((((uint32)
        VLDR_ac_DW.StatusByte_HB_PSC_CtrlValACktPe) & 1U) == 0U) ||
        (!rtb_VM_Conditional_Signal_CPV_f))));

    /* RelationalOperator: '<S96>/Comparison1' incorporates:
     *  Abs: '<S96>/Abs'
     *  Constant: '<S152>/KeVLDR_Pct_CPV_PerfDiag_PstnDiffMax'
     *  Sum: '<S96>/Sum1'
     */
    rtb_VM_Conditional_Signal_CPV_n = (fabsf(rtb_TmpSignalConversionAtVeRC_a -
        rtb_Switch1_np) >= KeVLDR_Pct_CPV_PerfDiag_PstnDiffMax);

    /* Outputs for Atomic SubSystem: '<S96>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S156>/EdgeRising' */
    /* Logic: '<S157>/AND' incorporates:
     *  Logic: '<S157>/OR1'
     *  UnitDelay: '<S157>/Unit Delay'
     */
    rtb_VM_Conditional_Signal_CPV_m = (rtb_VM_Conditional_Signal_CPV_n &&
        (!VLDR_ac_DW.UnitDelay_DSTATE_bzc));

    /* Update for UnitDelay: '<S157>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_bzc = rtb_VM_Conditional_Signal_CPV_n;

    /* End of Outputs for SubSystem: '<S156>/EdgeRising' */

    /* Switch: '<S156>/Switch1' incorporates:
     *  Constant: '<S151>/KeVLDR_Cnt_CVP_Position_Wait_Time'
     *  Constant: '<S156>/Constant Value'
     *  Logic: '<S156>/OR'
     *  Logic: '<S156>/OR1'
     *  MinMax: '<S156>/Minimum'
     *  Sum: '<S156>/Summation'
     *  UnitDelay: '<S156>/Unit Delay'
     */
    if ((!rtb_VM_Conditional_Signal_CPV_n) || rtb_VM_Conditional_Signal_CPV_m)
    {
        /* Switch: '<S156>/Switch1' incorporates:
         *  Constant: '<S156>/Constant Value1'
         */
        rtb_Switch1_dj = 0U;
    }
    else if (KeVLDR_Cnt_CVP_Position_Wait_Time < ((uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_kc) + 1U)))
    {
        /* MinMax: '<S156>/Minimum' incorporates:
         *  Constant: '<S151>/KeVLDR_Cnt_CVP_Position_Wait_Time'
         *  Switch: '<S156>/Switch1'
         */
        rtb_Switch1_dj = KeVLDR_Cnt_CVP_Position_Wait_Time;
    }
    else
    {
        /* Switch: '<S156>/Switch1' incorporates:
         *  Constant: '<S156>/Constant Value'
         *  MinMax: '<S156>/Minimum'
         *  Sum: '<S156>/Summation'
         *  UnitDelay: '<S156>/Unit Delay'
         */
        rtb_Switch1_dj = (uint16)(((uint32)VLDR_ac_DW.UnitDelay_DSTATE_kc) + 1U);
    }

    /* End of Switch: '<S156>/Switch1' */

    /* Update for UnitDelay: '<S156>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_kc = rtb_Switch1_dj;

    /* End of Outputs for SubSystem: '<S96>/Turn On Delay Sample' */

    /* Switch: '<S96>/Switch1' incorporates:
     *  Constant: '<S154>/KeVLDR_b_CPV_PerfDiag_Fail_SD'
     */
    if (KeVLDR_b_CPV_PerfDiag_Fail_SD)
    {
        /* Switch: '<S96>/Switch1' incorporates:
         *  Constant: '<S153>/KeVLDR_b_CPV_PerfDiag_Fail_D'
         */
        VeVLDR_b_CPV_PerDiag_Fail_AD = KeVLDR_b_CPV_PerfDiag_Fail_D;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S96>/Turn On Delay Sample' */
        /* Switch: '<S96>/Switch1' incorporates:
         *  Constant: '<S151>/KeVLDR_Cnt_CVP_Position_Wait_Time'
         *  Constant: '<S155>/KeVLDR_b_CPV_PosActFA_Enbl'
         *  Logic: '<S156>/AND'
         *  Logic: '<S96>/Logical1'
         *  Logic: '<S96>/Logical18'
         *  RelationalOperator: '<S156>/Greater  Than'
         */
        VeVLDR_b_CPV_PerDiag_Fail_AD = ((rtb_VM_Conditional_Signal_CPV_n &&
            (rtb_Switch1_dj >= KeVLDR_Cnt_CVP_Position_Wait_Time)) ||
            (rtb_VM_Conditional_Signal_CPV_D && (KeVLDR_b_CPV_PosActFA_Enbl)));

        /* End of Outputs for SubSystem: '<S96>/Turn On Delay Sample' */
    }

    /* End of Switch: '<S96>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S100>/EdgeFalling1' */
    /* Logic: '<S102>/AND' incorporates:
     *  Logic: '<S102>/OR1'
     *  UnitDelay: '<S102>/Unit Delay'
     */
    rtb_VM_Conditional_Signal_CPV_D = ((!rtb_VM_Conditional_Signal_CPV_f) &&
        (VLDR_ac_DW.UnitDelay_DSTATE_io));

    /* Update for UnitDelay: '<S102>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_io = rtb_VM_Conditional_Signal_CPV_f;

    /* End of Outputs for SubSystem: '<S100>/EdgeFalling1' */

    /* Logic: '<S100>/Logical5' incorporates:
     *  Logic: '<S95>/NOT4'
     */
    rtb_VM_Conditional_Signal_CPV_D = ((rtb_VM_Conditional_Signal_DsblD ||
        rtb_VM_Conditional_Signal_PostC) || rtb_VM_Conditional_Signal_CPV_D);

    /* Logic: '<S101>/Fail Counter Reset' incorporates:
     *  UnitDelay: '<S101>/Unit Delay'
     *  UnitDelay: '<S101>/Unit Delay1'
     */
    rtb_VM_Conditional_Signal_CPV_f = ((rtb_VM_Conditional_Signal_CPV_D ||
        (VLDR_ac_DW.UnitDelay_DSTATE_gnm)) || (VLDR_ac_DW.UnitDelay1_DSTATE_cu));

    /* Outputs for Atomic SubSystem: '<S101>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S101>/Counter Reset  Enabled ' */
    /* Switch: '<S108>/Switch1' incorporates:
     *  Logic: '<S101>/NOT6'
     *  Switch: '<S108>/Switch2'
     *  Switch: '<S109>/Switch1'
     */
    if (rtb_VM_Conditional_Signal_CPV_f)
    {
        /* Switch: '<S108>/Switch1' incorporates:
         *  Constant: '<S108>/Constant Value2'
         */
        VeVLDR_Cnt_CPV_PerfDiag_FailCnt = 0U;

        /* Switch: '<S109>/Switch1' incorporates:
         *  Constant: '<S109>/Constant Value2'
         */
        VeVLDR_Cnt_CPV_PerfDiag_SmpCnt = 0U;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeT_a4 && (VeVLDR_b_CPV_PerDiag_Fail_AD))
        {
            /* Switch: '<S108>/Switch2' incorporates:
             *  Constant: '<S108>/Constant Value1'
             *  Sum: '<S108>/Subtraction'
             *  Switch: '<S108>/Switch1'
             *  UnitDelay: '<S108>/Unit Delay'
             */
            VeVLDR_Cnt_CPV_PerfDiag_FailCnt = (uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_eb) + 1U);
        }
        else
        {
            /* Switch: '<S108>/Switch1' incorporates:
             *  Switch: '<S108>/Switch2'
             *  UnitDelay: '<S108>/Unit Delay'
             */
            VeVLDR_Cnt_CPV_PerfDiag_FailCnt = VLDR_ac_DW.UnitDelay_DSTATE_eb;
        }

        /* Switch: '<S109>/Switch2' */
        if (rtb_TmpSignalConversionAtVeT_a4)
        {
            /* Switch: '<S109>/Switch1' incorporates:
             *  Constant: '<S109>/Constant Value1'
             *  Sum: '<S109>/Subtraction'
             *  Switch: '<S109>/Switch2'
             *  UnitDelay: '<S109>/Unit Delay'
             */
            VeVLDR_Cnt_CPV_PerfDiag_SmpCnt = (uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_a4) + 1U);
        }
        else
        {
            /* Switch: '<S109>/Switch1' incorporates:
             *  Switch: '<S109>/Switch2'
             *  UnitDelay: '<S109>/Unit Delay'
             */
            VeVLDR_Cnt_CPV_PerfDiag_SmpCnt = VLDR_ac_DW.UnitDelay_DSTATE_a4;
        }

        /* End of Switch: '<S109>/Switch2' */
    }

    /* End of Switch: '<S108>/Switch1' */
    /* End of Outputs for SubSystem: '<S101>/Counter Reset  Enabled 1' */

    /* Update for UnitDelay: '<S108>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_eb = VeVLDR_Cnt_CPV_PerfDiag_FailCnt;

    /* End of Outputs for SubSystem: '<S101>/Counter Reset  Enabled ' */

    /* Outputs for Atomic SubSystem: '<S101>/Counter Reset  Enabled 1' */
    /* Update for UnitDelay: '<S109>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_a4 = VeVLDR_Cnt_CPV_PerfDiag_SmpCnt;

    /* End of Outputs for SubSystem: '<S101>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S101>/Greater Than or Equal ' incorporates:
     *  Constant: '<S97>/KeVLDR_Cnt_CPV_PerfDiag_FailCnt'
     */
    rtb_TmpSignalConversionAtVeT_a4 = (((sint32)VeVLDR_Cnt_CPV_PerfDiag_FailCnt)
        >= ((sint32)KeVLDR_Cnt_CPV_PerfDiag_FailCnt));

    /* Logic: '<S101>/NOT5' incorporates:
     *  Constant: '<S98>/KeVLDR_Cnt_CPV_PerfDiag_SmplCnt'
     *  Logic: '<S101>/NOT3'
     *  RelationalOperator: '<S101>/Less Than  or Equal'
     */
    rtb_VM_Conditional_Signal_CPV_f = ((((sint32)VeVLDR_Cnt_CPV_PerfDiag_SmpCnt)
        >= ((sint32)KeVLDR_Cnt_CPV_PerfDiag_SmplCnt)) &&
        (!rtb_TmpSignalConversionAtVeT_a4));

    /* Switch: '<S114>/Switch1' incorporates:
     *  Constant: '<S107>/Constant Value'
     *  DataStoreWrite: '<S93>/Data Store Write1'
     *  Switch: '<S113>/Switch1'
     */
    if (rtb_VM_Conditional_Signal_PostC)
    {
        VLDR_ac_DW.NeVLDR_Cnt_CPV_PerfDiag_MFOP = 0U;
    }
    else
    {
        if (rtb_VM_Conditional_Signal_CPV_f)
        {
            /* MinMax: '<S107>/Minimum2' incorporates:
             *  DataStoreRead: '<S93>/Data Store Read1'
             *  Switch: '<S113>/Switch1'
             */
            if (VeVLDR_Cnt_CPV_PerfDiag_FailCnt >
                    VLDR_ac_DW.NeVLDR_Cnt_CPV_PerfDiag_MFOP)
            {
                /* DataStoreWrite: '<S93>/Data Store Write1' incorporates:
                 *  Switch: '<S113>/Switch1'
                 */
                VLDR_ac_DW.NeVLDR_Cnt_CPV_PerfDiag_MFOP =
                    VeVLDR_Cnt_CPV_PerfDiag_FailCnt;
            }

            /* End of MinMax: '<S107>/Minimum2' */
        }
    }

    /* End of Switch: '<S114>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S100>/Fail' */
    VLDR_ac_Fail(rtb_TmpSignalConversionAtVeT_a4, &VLDR_ac_B.Merge_b);

    /* End of Outputs for SubSystem: '<S100>/Fail' */

    /* Outputs for Enabled SubSystem: '<S100>/Init' */
    VLDR_ac_Init_a(rtb_VM_Conditional_Signal_CPV_D, &VLDR_ac_B.Merge_b);

    /* End of Outputs for SubSystem: '<S100>/Init' */

    /* Outputs for Enabled SubSystem: '<S100>/Pass' */
    VLDR_ac_Pass(rtb_VM_Conditional_Signal_CPV_f, &VLDR_ac_B.Merge_b);

    /* End of Outputs for SubSystem: '<S100>/Pass' */

    /* RelationalOperator: '<S100>/Relational Operator' incorporates:
     *  Constant: '<S103>/Constant'
     *  Merge: '<S100>/Merge'
     */
    VeVLDR_b_CPV_PerfDiag_FltDtct = (((uint32)VLDR_ac_B.Merge_b) ==
        CeDFIB_e_Fail);

    /* Update for UnitDelay: '<S101>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_gnm = rtb_VM_Conditional_Signal_CPV_f;

    /* Update for UnitDelay: '<S101>/Unit Delay1' */
    VLDR_ac_DW.UnitDelay1_DSTATE_cu = rtb_TmpSignalConversionAtVeT_a4;

    /* End of Outputs for SubSystem: '<S4>/CPV_Diagnostics' */
#endif

    /* SignalConversion generated from: '<S4>/BF1_SysVolt_AD' */
#if (Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_4 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7)

    /* VariantMerge generated from: '<S4>/BF1_SysVolt_AD' */
    rtb_VM_Conditional_Signal_BF1_S = VLDR_ac_B.Switch3;

#elif !Rte_SysCon_Variant_VLDR_7 || (!Rte_SysCon_Variant_VLDR_1 && !Rte_SysCon_Variant_VLDR_3 && !Rte_SysCon_Variant_VLDR_4 && !Rte_SysCon_Variant_VLDR_5 && !Rte_SysCon_Variant_VLDR_6)

    /* VariantMerge generated from: '<S4>/BF1_SysVolt_AD' incorporates:
     *  SignalConversion generated from: '<S4>/BF1_SysVolt_AD'
     */
    rtb_VM_Conditional_Signal_BF1_S = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S4>/BF1_SysVolt_AD' */

    /* Outputs for Atomic SubSystem: '<S11>/EEXV' */
#if Rte_SysCon_Variant_VLDR_1

    /* Outputs for Atomic SubSystem: '<S161>/Diag_Enable' */

    /* S-Function (sfix_bitop): '<S199>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S199>/StatusByte_ThrmlRlyCtrlCkt'
     *  S-Function (sfix_bitop): '<S247>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S307>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S380>/Bitwise Operator2'
     */
    rtb_VariantMergeForOutportDFI_0 = ((sint32)
        VLDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 1;

    /* S-Function (sfix_bitop): '<S199>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S199>/StatusByte_ThrmlRlyCtrlCkt'
     *  S-Function (sfix_bitop): '<S247>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S307>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S380>/Bitwise Operator1'
     */
    rtb_UnitDelay_ly_tmp = ((uint32)VLDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 64U;

    /* S-Function (sfix_bitop): '<S197>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S197>/StatusByte_LIN1_BusOff'
     *  S-Function (sfix_bitop): '<S245>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S304>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S378>/Bitwise Operator2'
     */
    rtb_VariantMergeForOutportDFI_1 = ((sint32)VLDR_ac_DW.StatusByte_LIN1_BusOff)
        & 1;

    /* S-Function (sfix_bitop): '<S197>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S197>/StatusByte_LIN1_BusOff'
     *  S-Function (sfix_bitop): '<S245>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S304>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S378>/Bitwise Operator1'
     */
    rtb_VariantMergeForOutportDFI_2 = ((uint32)VLDR_ac_DW.StatusByte_LIN1_BusOff)
        & 64U;

    /* S-Function (sfix_bitop): '<S198>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S198>/StatusByte_LostCommACRefrigExpVlvActC'
     *  S-Function (sfix_bitop): '<S246>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S305>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S379>/Bitwise Operator2'
     */
    rtb_VariantMergeForOutportDFI_3 = ((sint32)
        VLDR_ac_DW.StatusByte_LostCommACRefrigEx_b) & 1;

    /* S-Function (sfix_bitop): '<S198>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S198>/StatusByte_LostCommACRefrigExpVlvActC'
     *  S-Function (sfix_bitop): '<S246>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S305>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S379>/Bitwise Operator1'
     */
    rtb_VariantMergeForOutportDFI_4 = ((uint32)
        VLDR_ac_DW.StatusByte_LostCommACRefrigEx_b) & 64U;

    /* VariantMerge generated from: '<S161>/DFIR_EEXV_PerfDiag' incorporates:
     *  Constant: '<S197>/Constant1'
     *  Constant: '<S197>/Constant2'
     *  Constant: '<S198>/Constant1'
     *  Constant: '<S198>/Constant2'
     *  Constant: '<S199>/Constant1'
     *  Constant: '<S199>/Constant2'
     *  Constant: '<S206>/KeVLDR_b_EEXV_PerfDiag_LIN1BusOff_Ovrd'
     *  Constant: '<S207>/KeVLDR_b_EEXV_PerfDiag_LOC_Ovrd'
     *  Constant: '<S208>/KeVLDR_b_EEXV_PerfDiag_ThrmlRlyErr_Ovrd'
     *  Logic: '<S174>/Logical18'
     *  Logic: '<S174>/Logical2'
     *  Logic: '<S174>/Logical21'
     *  Logic: '<S174>/Logical3'
     *  Logic: '<S174>/Logical4'
     *  Logic: '<S174>/Logical5'
     *  Logic: '<S174>/Logical9'
     *  Logic: '<S197>/Logical Operator'
     *  Logic: '<S198>/Logical Operator'
     *  Logic: '<S199>/Logical Operator'
     *  RelationalOperator: '<S197>/Relational Operator1'
     *  RelationalOperator: '<S197>/Relational Operator2'
     *  RelationalOperator: '<S198>/Relational Operator1'
     *  RelationalOperator: '<S198>/Relational Operator2'
     *  RelationalOperator: '<S199>/Relational Operator1'
     *  RelationalOperator: '<S199>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S197>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S197>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S198>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S198>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S199>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S199>/Bitwise Operator2'
     */
    rtb_VariantMergeForOutportDFI_o = (((((rtb_VariantMergeForOutportDFI_0 <= 0)
        || (rtb_UnitDelay_ly_tmp != 0U)) ||
        (KeVLDR_b_EEXV_PerfDiag_ThrmlRlyErr_Ovrd)) &&
        (((rtb_VariantMergeForOutportDFI_1 <= 0) ||
          (rtb_VariantMergeForOutportDFI_2 != 0U)) ||
         (KeVLDR_b_EEXV_PerfDiag_LIN1BusOff_Ovrd))) &&
        (((rtb_VariantMergeForOutportDFI_3 <= 0) ||
          (rtb_VariantMergeForOutportDFI_4 != 0U)) ||
         (KeVLDR_b_EEXV_PerfDiag_LOC_Ovrd)));

    /* RelationalOperator: '<S174>/Comparison4' incorporates:
     *  Constant: '<S196>/Constant'
     */
    rtb_Comparison4_i = (((uint32)rtb_TmpSignalConversionAtVeTA_e) !=
                         CeTAIR_e_EXV_Calibration_Complete);

    /* Outputs for Atomic SubSystem: '<S174>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S211>/EdgeRising' */
    /* Logic: '<S213>/AND' incorporates:
     *  Logic: '<S213>/OR1'
     *  UnitDelay: '<S213>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeT_a4 = (rtb_Comparison4_i &&
        (!VLDR_ac_DW.UnitDelay_DSTATE_cor));

    /* Update for UnitDelay: '<S213>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_cor = rtb_Comparison4_i;

    /* End of Outputs for SubSystem: '<S211>/EdgeRising' */

    /* Switch: '<S211>/Switch1' incorporates:
     *  Constant: '<S201>/KeVLDR_Cnt_EEXV_Max_Referencing_Time'
     *  Constant: '<S211>/Constant Value'
     *  Logic: '<S211>/OR'
     *  Logic: '<S211>/OR1'
     *  MinMax: '<S211>/Minimum'
     *  Sum: '<S211>/Summation'
     *  UnitDelay: '<S211>/Unit Delay'
     */
    if ((!rtb_Comparison4_i) || rtb_TmpSignalConversionAtVeT_a4)
    {
        /* Switch: '<S211>/Switch1' incorporates:
         *  Constant: '<S211>/Constant Value1'
         */
        rtb_Switch1_dj = 0U;
    }
    else if (KeVLDR_Cnt_EEXV_Max_Referencing_Time < ((uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_es) + 1U)))
    {
        /* MinMax: '<S211>/Minimum' incorporates:
         *  Constant: '<S201>/KeVLDR_Cnt_EEXV_Max_Referencing_Time'
         *  Switch: '<S211>/Switch1'
         */
        rtb_Switch1_dj = KeVLDR_Cnt_EEXV_Max_Referencing_Time;
    }
    else
    {
        /* Switch: '<S211>/Switch1' incorporates:
         *  Constant: '<S211>/Constant Value'
         *  MinMax: '<S211>/Minimum'
         *  Sum: '<S211>/Summation'
         *  UnitDelay: '<S211>/Unit Delay'
         */
        rtb_Switch1_dj = (uint16)(((uint32)VLDR_ac_DW.UnitDelay_DSTATE_es) + 1U);
    }

    /* End of Switch: '<S211>/Switch1' */
    /* End of Outputs for SubSystem: '<S174>/Turn On Delay Sample' */

    /* Inport: '<Root>/VeTAIR_b_EEXV_PosAct_FA' */
    (void)Rte_Read_VeTAIR_b_EEXV_PosAct_FA_Value(&rtb_Logical12_f3);

    /* Outputs for Atomic SubSystem: '<S174>/Turn On Delay Sample' */
    /* Update for UnitDelay: '<S211>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_es = rtb_Switch1_dj;

    /* Logic: '<S174>/Logical6' incorporates:
     *  Constant: '<S194>/Constant'
     *  Constant: '<S195>/Constant'
     *  Constant: '<S201>/KeVLDR_Cnt_EEXV_Max_Referencing_Time'
     *  Constant: '<S204>/KeVLDR_U_SysVltLwrLim'
     *  Constant: '<S205>/KeVLDR_U_SysVltUprLim'
     *  Logic: '<S174>/Logical10'
     *  Logic: '<S174>/Logical8'
     *  Logic: '<S211>/AND'
     *  RelationalOperator: '<S174>/Comparison2'
     *  RelationalOperator: '<S174>/Comparison5'
     *  RelationalOperator: '<S174>/Comparison6'
     *  RelationalOperator: '<S174>/Comparison8'
     *  RelationalOperator: '<S211>/Greater  Than'
     */
    VeVLDR_b_EEXV_PerfDiag_En = ((((((rtb_VM_Conditional_Signal_BF1_S <
        KeVLDR_U_SysVltUprLim) && (rtb_VM_Conditional_Signal_BF1_S >
        KeVLDR_U_SysVltLwrLim)) && rtb_TmpSignalConversionAtVeDFIR) && (((uint32)
        rtb_TmpSignalConversionAtVePMTR) != CePMTR_e_DISBL_All_Thrml)) &&
        rtb_VariantMergeForOutportDFI_o) && ((((uint32)
        rtb_TmpSignalConversionAtVeTA_e) == CeTAIR_e_EXV_Calibration_Complete) ||
        (rtb_Comparison4_i && (rtb_Switch1_dj >=
        KeVLDR_Cnt_EEXV_Max_Referencing_Time))));

    /* End of Outputs for SubSystem: '<S174>/Turn On Delay Sample' */

    /* Logic: '<S174>/Logical12' */
    rtb_Logical12_f3 = (rtb_Logical12_f3 && (VeVLDR_b_EEXV_PerfDiag_En));

    /* Outputs for Atomic SubSystem: '<S174>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S212>/EdgeRising' */
    /* Logic: '<S214>/AND' incorporates:
     *  Logic: '<S214>/OR1'
     *  UnitDelay: '<S214>/Unit Delay'
     */
    rtb_Comparison4_i = (rtb_Logical12_f3 && (!VLDR_ac_DW.UnitDelay_DSTATE_g4z));

    /* Update for UnitDelay: '<S214>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_g4z = rtb_Logical12_f3;

    /* End of Outputs for SubSystem: '<S212>/EdgeRising' */

    /* Switch: '<S212>/Switch1' incorporates:
     *  Logic: '<S212>/OR'
     *  Logic: '<S212>/OR1'
     */
    if ((!rtb_Logical12_f3) || rtb_Comparison4_i)
    {
        /* Switch: '<S212>/Switch1' incorporates:
         *  Constant: '<S212>/Constant Value1'
         */
        rtb_TmpSignalConversionAtVeRC_a = 0.0F;
    }
    else
    {
        /* Switch: '<S212>/Switch1' incorporates:
         *  Constant: '<S200>/Calib'
         *  Constant: '<S209>/KeVLDR_t_EEXV_FA_WaitTime'
         *  MinMax: '<S212>/Minimum'
         *  Sum: '<S212>/Summation'
         *  UnitDelay: '<S212>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeRC_a = fminf(KeVLDR_t_EEXV_FA_WaitTime,
            HeVLDR_t_MedTED + VLDR_ac_DW.UnitDelay_DSTATE_cq);
    }

    /* End of Switch: '<S212>/Switch1' */
    /* End of Outputs for SubSystem: '<S174>/Turn On Delay Time' */

    /* Inport: '<Root>/VeTAIR_Pct_EEXV_PosAct' */
    (void)Rte_Read_VeTAIR_Pct_EEXV_PosAct_Value(&rtb_Switch1_o0);

    /* Outputs for Atomic SubSystem: '<S174>/Turn On Delay Time' */
    /* Logic: '<S212>/AND' incorporates:
     *  Constant: '<S209>/KeVLDR_t_EEXV_FA_WaitTime'
     *  RelationalOperator: '<S212>/Greater  Than'
     */
    rtb_Logical12_f3 = (rtb_Logical12_f3 && (rtb_TmpSignalConversionAtVeRC_a >=
                         KeVLDR_t_EEXV_FA_WaitTime));

    /* Update for UnitDelay: '<S212>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_cq = rtb_TmpSignalConversionAtVeRC_a;

    /* End of Outputs for SubSystem: '<S174>/Turn On Delay Time' */

    /* S-Function (sfix_bitop): '<S179>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S173>/Data Store Read1'
     *  S-Function (sfix_bitop): '<S296>/Bitwise Operator1'
     */
    rtb_VM_Conditional_Signal_CPV_e = ((uint32)
        VLDR_ac_DW.StatusByte_AC_RefrigExpVlvAct_C) & 64U;

    /* RelationalOperator: '<S179>/Relational Operator3' incorporates:
     *  Constant: '<S179>/Constant3'
     *  S-Function (sfix_bitop): '<S179>/Bitwise Operator2'
     */
    rtb_VM_Conditional_Signal_CPV_f = (rtb_VM_Conditional_Signal_CPV_e == 0U);

    /* Logic: '<S179>/Logical1' incorporates:
     *  Constant: '<S178>/Calib'
     *  Constant: '<S179>/Constant1'
     *  Constant: '<S202>/KeVLDR_Pct_EEXV_Max_PosRq'
     *  Constant: '<S203>/KeVLDR_Pct_EEXV_Min_PosRq'
     *  Constant: '<S210>/Calib'
     *  DataStoreRead: '<S173>/Data Store Read1'
     *  Logic: '<S174>/Logical1'
     *  Logic: '<S174>/Logical11'
     *  Logic: '<S174>/Logical13'
     *  Logic: '<S174>/Logical7'
     *  Logic: '<S179>/Logical Operator'
     *  Logic: '<S179>/Logical10'
     *  Logic: '<S179>/Logical12'
     *  RelationalOperator: '<S174>/Comparison1'
     *  RelationalOperator: '<S174>/Comparison3'
     *  RelationalOperator: '<S179>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S179>/Bitwise Operator3'
     */
    rtb_Comparison4_i = (((((rtb_TmpSignalConversionAtVeR_co <
        KeVLDR_Pct_EEXV_Max_PosRq) && (rtb_TmpSignalConversionAtVeR_co >
        KeVLDR_Pct_EEXV_Min_PosRq)) && (VeVLDR_b_EEXV_PerfDiag_En)) ||
                          ((KeVLDR_b_EEXV_PrefDiagPerfCndsOV_En) &&
                           rtb_Logical12_f3)) &&
                         ((!KeVLDR_b_AC_RefrigExpVlvAct_C_CntrlCktPerf_LtchEnbl)
                          || (((((uint32)
        VLDR_ac_DW.StatusByte_AC_RefrigExpVlvAct_C) & 1U) == 0U) ||
                           (!rtb_VM_Conditional_Signal_CPV_f))));

    /* Sum: '<S175>/Sum1' */
    VeVLDR_Pct_EEXV_PerfDiag_PstnDiff = rtb_Switch1_o0 -
        rtb_TmpSignalConversionAtVeR_co;

    /* RelationalOperator: '<S175>/Comparison1' incorporates:
     *  Abs: '<S175>/Abs'
     *  Constant: '<S216>/KeVLDR_Pct_EEXV_PerfDiag_PstnDiffMax'
     */
    rtb_VM_Conditional_Signal_CPV_D = (fabsf(VeVLDR_Pct_EEXV_PerfDiag_PstnDiff) >=
        KeVLDR_Pct_EEXV_PerfDiag_PstnDiffMax);

    /* Outputs for Atomic SubSystem: '<S175>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S218>/EdgeRising' */
    /* Logic: '<S219>/AND' incorporates:
     *  Logic: '<S219>/OR1'
     *  UnitDelay: '<S219>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeT_a4 = (rtb_VM_Conditional_Signal_CPV_D &&
        (!VLDR_ac_DW.UnitDelay_DSTATE_gw));

    /* Update for UnitDelay: '<S219>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_gw = rtb_VM_Conditional_Signal_CPV_D;

    /* End of Outputs for SubSystem: '<S218>/EdgeRising' */

    /* Switch: '<S218>/Switch1' incorporates:
     *  Constant: '<S215>/KeVLDR_Cnt_EEXV_Position_Wait_Time'
     *  Constant: '<S218>/Constant Value'
     *  Logic: '<S218>/OR'
     *  Logic: '<S218>/OR1'
     *  MinMax: '<S218>/Minimum'
     *  Sum: '<S218>/Summation'
     *  UnitDelay: '<S218>/Unit Delay'
     */
    if ((!rtb_VM_Conditional_Signal_CPV_D) || rtb_TmpSignalConversionAtVeT_a4)
    {
        /* Switch: '<S218>/Switch1' incorporates:
         *  Constant: '<S218>/Constant Value1'
         */
        rtb_Switch1_dj = 0U;
    }
    else if (KeVLDR_Cnt_EEXV_Position_Wait_Time < ((uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_p4) + 1U)))
    {
        /* MinMax: '<S218>/Minimum' incorporates:
         *  Constant: '<S215>/KeVLDR_Cnt_EEXV_Position_Wait_Time'
         *  Switch: '<S218>/Switch1'
         */
        rtb_Switch1_dj = KeVLDR_Cnt_EEXV_Position_Wait_Time;
    }
    else
    {
        /* Switch: '<S218>/Switch1' incorporates:
         *  Constant: '<S218>/Constant Value'
         *  MinMax: '<S218>/Minimum'
         *  Sum: '<S218>/Summation'
         *  UnitDelay: '<S218>/Unit Delay'
         */
        rtb_Switch1_dj = (uint16)(((uint32)VLDR_ac_DW.UnitDelay_DSTATE_p4) + 1U);
    }

    /* End of Switch: '<S218>/Switch1' */

    /* Update for UnitDelay: '<S218>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_p4 = rtb_Switch1_dj;

    /* End of Outputs for SubSystem: '<S175>/Turn On Delay Sample' */

    /* Logic: '<S172>/NOT4' */
    rtb_TmpSignalConversionAtVeT_a4 = (rtb_VM_Conditional_Signal_DsblD ||
        rtb_VM_Conditional_Signal_PostC);

    /* Outputs for Atomic SubSystem: '<S179>/EdgeFalling1' */
    /* Logic: '<S181>/AND' incorporates:
     *  Logic: '<S181>/OR1'
     *  UnitDelay: '<S181>/Unit Delay'
     */
    rtb_VM_Conditional_Signal_CPV_n = ((!rtb_VM_Conditional_Signal_CPV_f) &&
        (VLDR_ac_DW.UnitDelay_DSTATE_n3));

    /* Update for UnitDelay: '<S181>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_n3 = rtb_VM_Conditional_Signal_CPV_f;

    /* End of Outputs for SubSystem: '<S179>/EdgeFalling1' */

    /* Logic: '<S179>/Logical5' */
    rtb_VM_Conditional_Signal_CPV_n = (rtb_TmpSignalConversionAtVeT_a4 ||
        rtb_VM_Conditional_Signal_CPV_n);

    /* Logic: '<S180>/Fail Counter Reset' incorporates:
     *  UnitDelay: '<S180>/Unit Delay'
     *  UnitDelay: '<S180>/Unit Delay1'
     */
    rtb_VM_Conditional_Signal_CPV_f = ((rtb_VM_Conditional_Signal_CPV_n ||
        (VLDR_ac_DW.UnitDelay_DSTATE_gy)) || (VLDR_ac_DW.UnitDelay1_DSTATE_i));

    /* Outputs for Atomic SubSystem: '<S180>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S180>/Counter Reset  Enabled ' */
    /* Switch: '<S187>/Switch1' incorporates:
     *  Constant: '<S215>/KeVLDR_Cnt_EEXV_Position_Wait_Time'
     *  Constant: '<S217>/KeVLDR_b_EEXV_PosActFA_Enbl'
     *  Logic: '<S175>/Logical1'
     *  Logic: '<S175>/Logical18'
     *  Logic: '<S180>/NOT6'
     *  Logic: '<S218>/AND'
     *  RelationalOperator: '<S218>/Greater  Than'
     *  Switch: '<S187>/Switch2'
     *  Switch: '<S188>/Switch1'
     */
    if (rtb_VM_Conditional_Signal_CPV_f)
    {
        /* Switch: '<S187>/Switch1' incorporates:
         *  Constant: '<S187>/Constant Value2'
         */
        VeVLDR_Cnt_EEXV_PerfDiag_FailCnt = 0U;

        /* Switch: '<S188>/Switch1' incorporates:
         *  Constant: '<S188>/Constant Value2'
         */
        VeVLDR_Cnt_EEXV_PerfDiag_SmpCnt = 0U;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S175>/Turn On Delay Sample' */
        if (rtb_Comparison4_i && ((rtb_VM_Conditional_Signal_CPV_D &&
                                   (rtb_Switch1_dj >=
                                    KeVLDR_Cnt_EEXV_Position_Wait_Time)) ||
                                  (rtb_Logical12_f3 &&
                                   (KeVLDR_b_EEXV_PosActFA_Enbl))))
        {
            /* Switch: '<S187>/Switch2' incorporates:
             *  Constant: '<S187>/Constant Value1'
             *  Sum: '<S187>/Subtraction'
             *  Switch: '<S187>/Switch1'
             *  UnitDelay: '<S187>/Unit Delay'
             */
            VeVLDR_Cnt_EEXV_PerfDiag_FailCnt = (uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_h3) + 1U);
        }
        else
        {
            /* Switch: '<S187>/Switch1' incorporates:
             *  Switch: '<S187>/Switch2'
             *  UnitDelay: '<S187>/Unit Delay'
             */
            VeVLDR_Cnt_EEXV_PerfDiag_FailCnt = VLDR_ac_DW.UnitDelay_DSTATE_h3;
        }

        /* End of Outputs for SubSystem: '<S175>/Turn On Delay Sample' */

        /* Switch: '<S188>/Switch2' */
        if (rtb_Comparison4_i)
        {
            /* Switch: '<S188>/Switch1' incorporates:
             *  Constant: '<S188>/Constant Value1'
             *  Sum: '<S188>/Subtraction'
             *  Switch: '<S188>/Switch2'
             *  UnitDelay: '<S188>/Unit Delay'
             */
            VeVLDR_Cnt_EEXV_PerfDiag_SmpCnt = (uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_kk) + 1U);
        }
        else
        {
            /* Switch: '<S188>/Switch1' incorporates:
             *  Switch: '<S188>/Switch2'
             *  UnitDelay: '<S188>/Unit Delay'
             */
            VeVLDR_Cnt_EEXV_PerfDiag_SmpCnt = VLDR_ac_DW.UnitDelay_DSTATE_kk;
        }

        /* End of Switch: '<S188>/Switch2' */
    }

    /* End of Switch: '<S187>/Switch1' */
    /* End of Outputs for SubSystem: '<S180>/Counter Reset  Enabled 1' */

    /* Update for UnitDelay: '<S187>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_h3 = VeVLDR_Cnt_EEXV_PerfDiag_FailCnt;

    /* End of Outputs for SubSystem: '<S180>/Counter Reset  Enabled ' */

    /* Outputs for Atomic SubSystem: '<S180>/Counter Reset  Enabled 1' */
    /* Update for UnitDelay: '<S188>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_kk = VeVLDR_Cnt_EEXV_PerfDiag_SmpCnt;

    /* End of Outputs for SubSystem: '<S180>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S180>/Greater Than or Equal ' incorporates:
     *  Constant: '<S176>/KeVLDR_Cnt_EEXV_PerfDiag_FailCnt'
     */
    rtb_VM_Conditional_Signal_CPV_D = (VeVLDR_Cnt_EEXV_PerfDiag_FailCnt >=
        KeVLDR_Cnt_EEXV_PerfDiag_FailCnt);

    /* Logic: '<S180>/NOT5' incorporates:
     *  Constant: '<S177>/KeVLDR_Cnt_EEXV_PerfDiag_SmpCnt'
     *  Logic: '<S180>/NOT3'
     *  RelationalOperator: '<S180>/Less Than  or Equal'
     */
    rtb_VM_Conditional_Signal_CPV_f = ((VeVLDR_Cnt_EEXV_PerfDiag_SmpCnt >=
        KeVLDR_Cnt_EEXV_PerfDiag_SmpCnt) && (!rtb_VM_Conditional_Signal_CPV_D));

    /* Switch: '<S193>/Switch1' incorporates:
     *  Constant: '<S186>/Constant Value'
     *  DataStoreWrite: '<S173>/Data Store Write'
     *  Switch: '<S192>/Switch1'
     */
    if (rtb_VM_Conditional_Signal_PostC)
    {
        VLDR_ac_DW.NeVLDR_Cnt_EEXV_PerfDiag_MFOP = 0U;
    }
    else
    {
        if (rtb_VM_Conditional_Signal_CPV_f)
        {
            /* MinMax: '<S186>/Minimum2' incorporates:
             *  DataStoreRead: '<S173>/Data Store Read'
             *  Switch: '<S192>/Switch1'
             */
            if (VeVLDR_Cnt_EEXV_PerfDiag_FailCnt >
                    VLDR_ac_DW.NeVLDR_Cnt_EEXV_PerfDiag_MFOP)
            {
                /* DataStoreWrite: '<S173>/Data Store Write' incorporates:
                 *  Switch: '<S192>/Switch1'
                 */
                VLDR_ac_DW.NeVLDR_Cnt_EEXV_PerfDiag_MFOP =
                    VeVLDR_Cnt_EEXV_PerfDiag_FailCnt;
            }

            /* End of MinMax: '<S186>/Minimum2' */
        }
    }

    /* End of Switch: '<S193>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S179>/Fail' */
    VLDR_ac_Fail(rtb_VM_Conditional_Signal_CPV_D,
                 &VLDR_ac_B.VariantMergeForOutportVeVLDR_lh);

    /* End of Outputs for SubSystem: '<S179>/Fail' */

    /* Outputs for Enabled SubSystem: '<S179>/Init' */
    VLDR_ac_Init_a(rtb_VM_Conditional_Signal_CPV_n,
                   &VLDR_ac_B.VariantMergeForOutportVeVLDR_lh);

    /* End of Outputs for SubSystem: '<S179>/Init' */

    /* Outputs for Enabled SubSystem: '<S179>/Pass' */
    VLDR_ac_Pass(rtb_VM_Conditional_Signal_CPV_f,
                 &VLDR_ac_B.VariantMergeForOutportVeVLDR_lh);

    /* End of Outputs for SubSystem: '<S179>/Pass' */

    /* VariantMerge generated from: '<S161>/EEXV_PerfDiag_FltDtct' incorporates:
     *  Constant: '<S182>/Constant'
     *  RelationalOperator: '<S179>/Relational Operator'
     *  VariantMerge generated from: '<S161>/VeVLDR_e_FaultSts_AC_RefrigExpVlvAct_C_CntrlCktPerf'
     */
    VLDR_ac_B.VariantMergeForOutportEEXV_Perf = (((uint32)
        VLDR_ac_B.VariantMergeForOutportVeVLDR_lh) == CeDFIB_e_Fail);

    /* RelationalOperator: '<S221>/Comparison2' incorporates:
     *  Constant: '<S256>/KeVLDR_n_EEXV_CompSpdThr'
     */
    rtb_Logical12_f3 = (rtb_TmpSignalConversionAtVeT_dk >=
                        KeVLDR_n_EEXV_CompSpdThr);

    /* Outputs for Atomic SubSystem: '<S221>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S258>/EdgeRising' */
    /* Logic: '<S259>/AND' incorporates:
     *  Logic: '<S259>/OR1'
     *  UnitDelay: '<S259>/Unit Delay'
     */
    rtb_Comparison4_i = (rtb_Logical12_f3 && (!VLDR_ac_DW.UnitDelay_DSTATE_m0));

    /* Update for UnitDelay: '<S259>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_m0 = rtb_Logical12_f3;

    /* End of Outputs for SubSystem: '<S258>/EdgeRising' */

    /* Switch: '<S258>/Switch1' incorporates:
     *  Logic: '<S258>/OR'
     *  Logic: '<S258>/OR1'
     */
    if ((!rtb_Logical12_f3) || rtb_Comparison4_i)
    {
        /* Switch: '<S258>/Switch1' incorporates:
         *  Constant: '<S258>/Constant Value1'
         */
        rtb_Switch1_o0 = 0.0F;
    }
    else
    {
        /* Switch: '<S258>/Switch1' incorporates:
         *  Constant: '<S249>/Calib'
         *  Constant: '<S257>/KeVLDR_t_EEXV_Comp_Run_Time'
         *  MinMax: '<S258>/Minimum'
         *  Sum: '<S258>/Summation'
         *  UnitDelay: '<S258>/Unit Delay'
         */
        rtb_Switch1_o0 = fminf(KeVLDR_t_EEXV_Comp_Run_Time, HeVLDR_t_MedTED +
                               VLDR_ac_DW.UnitDelay_DSTATE_e0);
    }

    /* End of Switch: '<S258>/Switch1' */

    /* Update for UnitDelay: '<S258>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_e0 = rtb_Switch1_o0;

    /* End of Outputs for SubSystem: '<S221>/Turn On Delay Time' */

    /* Rounding: '<S223>/Rounding2' incorporates:
     *  Constant: '<S262>/HeVLDR_K_EEXV_RefPress_Gain'
     *  Product: '<S223>/Product'
     */
    VeVLDR_p_EEXV_PressRawData = roundf(rtb_TmpSignalConversionAtVeT_dd *
        HeVLDR_K_EEXV_RefPress_Gain);

    /* S-Function (sfix_bitop): '<S244>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S244>/StatusByte_AC_RefrigPresSnsrCCktPerf'
     *  S-Function (sfix_bitop): '<S271>/Bitwise Operator2'
     */
    VeVLDR_b_EEXV_PrsElctrFlt_DiagE = ((uint32)
        VLDR_ac_DW.StatusByte_AC_RefrigPresSnsrC_i) & 64U;

    /* Outputs for Atomic SubSystem: '<S221>/Turn On Delay Time' */
    /* Logic: '<S221>/Logical6' incorporates:
     *  Constant: '<S243>/Constant'
     *  Constant: '<S244>/Constant1'
     *  Constant: '<S244>/Constant2'
     *  Constant: '<S245>/Constant1'
     *  Constant: '<S245>/Constant2'
     *  Constant: '<S246>/Constant1'
     *  Constant: '<S246>/Constant2'
     *  Constant: '<S247>/Constant1'
     *  Constant: '<S247>/Constant2'
     *  Constant: '<S248>/HeVLDR_p_EEXV_RefPress_ShrtHigh'
     *  Constant: '<S250>/KeVLDR_U_SysVltLwrLim'
     *  Constant: '<S251>/KeVLDR_U_SysVltUprLim'
     *  Constant: '<S252>/KeVLDR_b_EEXV_PressElctrDiag_LIN1BusOff_Ovrd'
     *  Constant: '<S253>/KeVLDR_b_EEXV_PressElctrDiag_LOC_Ovrd'
     *  Constant: '<S254>/KeVLDR_b_EEXV_PressElctrDiag_PressSens_Ovrd'
     *  Constant: '<S255>/KeVLDR_b_EEXV_PressElctrDiag_ThrmlRlyErr_Ovrd'
     *  Constant: '<S257>/KeVLDR_t_EEXV_Comp_Run_Time'
     *  DataStoreRead: '<S244>/StatusByte_AC_RefrigPresSnsrCCktPerf'
     *  Logic: '<S221>/Logical1'
     *  Logic: '<S221>/Logical18'
     *  Logic: '<S221>/Logical2'
     *  Logic: '<S221>/Logical21'
     *  Logic: '<S221>/Logical3'
     *  Logic: '<S221>/Logical4'
     *  Logic: '<S221>/Logical5'
     *  Logic: '<S221>/Logical7'
     *  Logic: '<S221>/Logical8'
     *  Logic: '<S221>/Logical9'
     *  Logic: '<S244>/Logical Operator'
     *  Logic: '<S245>/Logical Operator'
     *  Logic: '<S246>/Logical Operator'
     *  Logic: '<S247>/Logical Operator'
     *  Logic: '<S258>/AND'
     *  RelationalOperator: '<S221>/Comparison1'
     *  RelationalOperator: '<S221>/Comparison3'
     *  RelationalOperator: '<S221>/Comparison4'
     *  RelationalOperator: '<S221>/Comparison8'
     *  RelationalOperator: '<S244>/Relational Operator1'
     *  RelationalOperator: '<S244>/Relational Operator2'
     *  RelationalOperator: '<S245>/Relational Operator1'
     *  RelationalOperator: '<S245>/Relational Operator2'
     *  RelationalOperator: '<S246>/Relational Operator1'
     *  RelationalOperator: '<S246>/Relational Operator2'
     *  RelationalOperator: '<S247>/Relational Operator1'
     *  RelationalOperator: '<S247>/Relational Operator2'
     *  RelationalOperator: '<S258>/Greater  Than'
     *  S-Function (sfix_bitop): '<S244>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S244>/Bitwise Operator2'
     */
    VeVLDR_b_EEXV_PrsElctrFlt_DiagEn = (((((((((rtb_VM_Conditional_Signal_BF1_S <
        KeVLDR_U_SysVltUprLim) && (rtb_VM_Conditional_Signal_BF1_S >
        KeVLDR_U_SysVltLwrLim)) && (((uint32)rtb_TmpSignalConversionAtVePMTR) !=
        CePMTR_e_DISBL_All_Thrml)) && (((rtb_VariantMergeForOutportDFI_0 <= 0) ||
        (rtb_UnitDelay_ly_tmp != 0U)) ||
        (KeVLDR_b_EEXV_PressElctrDiag_ThrmlRlyErr_Ovrd))) &&
        (((rtb_VariantMergeForOutportDFI_1 <= 0) ||
          (rtb_VariantMergeForOutportDFI_2 != 0U)) ||
         (KeVLDR_b_EEXV_PressElctrDiag_LIN1BusOff_Ovrd))) &&
        (((rtb_VariantMergeForOutportDFI_3 <= 0) ||
          (rtb_VariantMergeForOutportDFI_4 != 0U)) ||
         (KeVLDR_b_EEXV_PressElctrDiag_LOC_Ovrd))) && ((((((sint32)
        VLDR_ac_DW.StatusByte_AC_RefrigPresSnsrC_i) & 1) <= 0) ||
        (VeVLDR_b_EEXV_PrsElctrFlt_DiagE != 0U)) ||
        (KeVLDR_b_EEXV_PressElctrDiag_PressSens_Ovrd))) && ((rtb_Logical12_f3 &&
        (rtb_Switch1_o0 >= KeVLDR_t_EEXV_Comp_Run_Time)) ||
        (VeVLDR_p_EEXV_PressRawData != HeVLDR_p_EEXV_RefPress_ShrtHigh))) &&
        rtb_TmpSignalConversionAtVeDFIR);

    /* End of Outputs for SubSystem: '<S221>/Turn On Delay Time' */

    /* S-Function (sfix_bitop): '<S228>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S220>/Data Store Read2'
     *  S-Function (sfix_bitop): '<S300>/Bitwise Operator1'
     */
    rtb_Comparison4_mj_tmp = ((uint32)VLDR_ac_DW.StatusByte_AC_RefrigPresSnsrCCk)
        & 64U;

    /* RelationalOperator: '<S228>/Relational Operator3' incorporates:
     *  Constant: '<S228>/Constant3'
     *  S-Function (sfix_bitop): '<S228>/Bitwise Operator2'
     */
    rtb_Comparison4_i = (rtb_Comparison4_mj_tmp == 0U);

    /* Outputs for Atomic SubSystem: '<S228>/EdgeFalling1' */
    /* Logic: '<S228>/Logical Operator' incorporates:
     *  Logic: '<S230>/OR1'
     */
    rtb_VM_Conditional_Signal_CPV_n = !rtb_Comparison4_i;

    /* End of Outputs for SubSystem: '<S228>/EdgeFalling1' */

    /* Logic: '<S228>/Logical1' incorporates:
     *  Constant: '<S226>/Calib'
     *  Constant: '<S227>/KeVLDR_b_EEXV_PressElctrFlt_XYEnbl'
     *  Constant: '<S228>/Constant1'
     *  DataStoreRead: '<S220>/Data Store Read2'
     *  Logic: '<S220>/AND1'
     *  Logic: '<S228>/Logical Operator'
     *  Logic: '<S228>/Logical10'
     *  Logic: '<S228>/Logical12'
     *  RelationalOperator: '<S228>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S228>/Bitwise Operator3'
     */
    rtb_Logical12_f3 = (((VeVLDR_b_EEXV_PrsElctrFlt_DiagEn) &&
                         (KeVLDR_b_EEXV_PressElctrFlt_XYEnbl)) &&
                        ((!KeVLDR_b_AC_RefrigPresSnsrCCkt_LtchEnbl) ||
                         (((((uint32)VLDR_ac_DW.StatusByte_AC_RefrigPresSnsrCCk)
                            & 1U) == 0U) || rtb_VM_Conditional_Signal_CPV_n)));

    /* VariantMerge generated from: '<S161>/EEXV_PressShrtHigh' incorporates:
     *  Constant: '<S260>/HeVLDR_p_EEXV_RefPress_ShrtHigh'
     *  RelationalOperator: '<S222>/Comparison1'
     */
    VLDR_ac_B.VariantMergeForOutportEEXV_Pr_a = (VeVLDR_p_EEXV_PressRawData ==
        HeVLDR_p_EEXV_RefPress_ShrtHigh);

    /* Outputs for Atomic SubSystem: '<S228>/EdgeFalling1' */
    /* Logic: '<S230>/AND' incorporates:
     *  UnitDelay: '<S230>/Unit Delay'
     */
    rtb_VM_Conditional_Signal_CPV_n = (rtb_VM_Conditional_Signal_CPV_n &&
        (VLDR_ac_DW.UnitDelay_DSTATE_bp));

    /* Update for UnitDelay: '<S230>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_bp = rtb_Comparison4_i;

    /* End of Outputs for SubSystem: '<S228>/EdgeFalling1' */

    /* Logic: '<S228>/Logical5' */
    rtb_Comparison4_i = (rtb_TmpSignalConversionAtVeT_a4 ||
                         rtb_VM_Conditional_Signal_CPV_n);

    /* Logic: '<S229>/Fail Counter Reset' incorporates:
     *  UnitDelay: '<S229>/Unit Delay'
     *  UnitDelay: '<S229>/Unit Delay1'
     */
    rtb_VM_Conditional_Signal_CPV_n = ((rtb_Comparison4_i ||
        (VLDR_ac_DW.UnitDelay_DSTATE_da)) || (VLDR_ac_DW.UnitDelay1_DSTATE_ox));

    /* Outputs for Atomic SubSystem: '<S229>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S229>/Counter Reset  Enabled ' */
    /* Switch: '<S236>/Switch1' incorporates:
     *  Constant: '<S261>/HeVLDR_p_EEXV_RefPress_ShrtLow'
     *  Logic: '<S222>/Logical18'
     *  Logic: '<S229>/NOT6'
     *  RelationalOperator: '<S222>/Comparison8'
     *  Switch: '<S236>/Switch2'
     *  Switch: '<S237>/Switch1'
     */
    if (rtb_VM_Conditional_Signal_CPV_n)
    {
        /* Switch: '<S236>/Switch1' incorporates:
         *  Constant: '<S236>/Constant Value2'
         */
        VeVLDR_Cnt_EEXVPrsElFlt_FailCnt = 0U;

        /* Switch: '<S237>/Switch1' incorporates:
         *  Constant: '<S237>/Constant Value2'
         */
        VeVLDR_Cnt_EEXVPrsElFlt_SmpCnt = 0U;
    }
    else
    {
        if (rtb_Logical12_f3 && ((VeVLDR_p_EEXV_PressRawData ==
                                  HeVLDR_p_EEXV_RefPress_ShrtLow) ||
                                 (VLDR_ac_B.VariantMergeForOutportEEXV_Pr_a)))
        {
            /* Switch: '<S236>/Switch2' incorporates:
             *  Constant: '<S236>/Constant Value1'
             *  Sum: '<S236>/Subtraction'
             *  Switch: '<S236>/Switch1'
             *  UnitDelay: '<S236>/Unit Delay'
             */
            VeVLDR_Cnt_EEXVPrsElFlt_FailCnt = (uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_fj0) + 1U);
        }
        else
        {
            /* Switch: '<S236>/Switch1' incorporates:
             *  Switch: '<S236>/Switch2'
             *  UnitDelay: '<S236>/Unit Delay'
             */
            VeVLDR_Cnt_EEXVPrsElFlt_FailCnt = VLDR_ac_DW.UnitDelay_DSTATE_fj0;
        }

        /* Switch: '<S237>/Switch2' */
        if (rtb_Logical12_f3)
        {
            /* Switch: '<S237>/Switch1' incorporates:
             *  Constant: '<S237>/Constant Value1'
             *  Sum: '<S237>/Subtraction'
             *  Switch: '<S237>/Switch2'
             *  UnitDelay: '<S237>/Unit Delay'
             */
            VeVLDR_Cnt_EEXVPrsElFlt_SmpCnt = (uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_d0) + 1U);
        }
        else
        {
            /* Switch: '<S237>/Switch1' incorporates:
             *  Switch: '<S237>/Switch2'
             *  UnitDelay: '<S237>/Unit Delay'
             */
            VeVLDR_Cnt_EEXVPrsElFlt_SmpCnt = VLDR_ac_DW.UnitDelay_DSTATE_d0;
        }

        /* End of Switch: '<S237>/Switch2' */
    }

    /* End of Switch: '<S236>/Switch1' */
    /* End of Outputs for SubSystem: '<S229>/Counter Reset  Enabled 1' */

    /* Update for UnitDelay: '<S236>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_fj0 = VeVLDR_Cnt_EEXVPrsElFlt_FailCnt;

    /* End of Outputs for SubSystem: '<S229>/Counter Reset  Enabled ' */

    /* Outputs for Atomic SubSystem: '<S229>/Counter Reset  Enabled 1' */
    /* Update for UnitDelay: '<S237>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_d0 = VeVLDR_Cnt_EEXVPrsElFlt_SmpCnt;

    /* End of Outputs for SubSystem: '<S229>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S229>/Greater Than or Equal ' incorporates:
     *  Constant: '<S224>/KeVLDR_Cnt_EEXV_PressElctrFlt_FailCnt'
     */
    rtb_VM_Conditional_Signal_CPV_n = (VeVLDR_Cnt_EEXVPrsElFlt_FailCnt >=
        KeVLDR_Cnt_EEXV_PressElctrFlt_FailCnt);

    /* Logic: '<S229>/NOT5' incorporates:
     *  Constant: '<S225>/KeVLDR_Cnt_EEXV_PressElctrFlt_SmpCnt'
     *  Logic: '<S229>/NOT3'
     *  RelationalOperator: '<S229>/Less Than  or Equal'
     */
    rtb_VM_Conditional_Signal_CPV_m = ((VeVLDR_Cnt_EEXVPrsElFlt_SmpCnt >=
        KeVLDR_Cnt_EEXV_PressElctrFlt_SmpCnt) &&
        (!rtb_VM_Conditional_Signal_CPV_n));

    /* Switch: '<S242>/Switch1' incorporates:
     *  Constant: '<S235>/Constant Value'
     *  DataStoreWrite: '<S220>/Data Store Write2'
     *  Switch: '<S241>/Switch1'
     */
    if (rtb_VM_Conditional_Signal_PostC)
    {
        VLDR_ac_DW.NeVLDR_Cnt_EEXV_PressElctrFlt_M = 0U;
    }
    else
    {
        if (rtb_VM_Conditional_Signal_CPV_m)
        {
            /* MinMax: '<S235>/Minimum2' incorporates:
             *  DataStoreRead: '<S220>/Data Store Read1'
             *  Switch: '<S241>/Switch1'
             */
            if (VeVLDR_Cnt_EEXVPrsElFlt_FailCnt >
                    VLDR_ac_DW.NeVLDR_Cnt_EEXV_PressElctrFlt_M)
            {
                /* DataStoreWrite: '<S220>/Data Store Write2' incorporates:
                 *  Switch: '<S241>/Switch1'
                 */
                VLDR_ac_DW.NeVLDR_Cnt_EEXV_PressElctrFlt_M =
                    VeVLDR_Cnt_EEXVPrsElFlt_FailCnt;
            }

            /* End of MinMax: '<S235>/Minimum2' */
        }
    }

    /* End of Switch: '<S242>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S228>/Fail' */
    VLDR_ac_Fail(rtb_VM_Conditional_Signal_CPV_n,
                 &VLDR_ac_B.VariantMergeForOutportVeVLDR__j);

    /* End of Outputs for SubSystem: '<S228>/Fail' */

    /* Outputs for Enabled SubSystem: '<S228>/Init' */
    VLDR_ac_Init_a(rtb_Comparison4_i, &VLDR_ac_B.VariantMergeForOutportVeVLDR__j);

    /* End of Outputs for SubSystem: '<S228>/Init' */

    /* Outputs for Enabled SubSystem: '<S228>/Pass' */
    VLDR_ac_Pass(rtb_VM_Conditional_Signal_CPV_m,
                 &VLDR_ac_B.VariantMergeForOutportVeVLDR__j);

    /* End of Outputs for SubSystem: '<S228>/Pass' */

    /* VariantMerge generated from: '<S161>/EEXV_PressElctrFlt_FltDtct' incorporates:
     *  Constant: '<S231>/Constant'
     *  RelationalOperator: '<S228>/Relational Operator'
     *  VariantMerge generated from: '<S161>/VeVLDR_e_FaultSts_AC_RefrigPresSnsrCCkt'
     */
    VLDR_ac_B.VariantMergeForOutportEEXV_Pres = (((uint32)
        VLDR_ac_B.VariantMergeForOutportVeVLDR__j) == CeDFIB_e_Fail);

    /* VariantMerge generated from: '<S161>/DFIR_EEXV_PressSensSNA' incorporates:
     *  Constant: '<S297>/Constant1'
     *  Constant: '<S297>/Constant2'
     *  Constant: '<S298>/Constant1'
     *  Constant: '<S298>/Constant2'
     *  Constant: '<S299>/Constant1'
     *  Constant: '<S299>/Constant2'
     *  Constant: '<S300>/Constant1'
     *  Constant: '<S300>/Constant2'
     *  Constant: '<S304>/Constant1'
     *  Constant: '<S304>/Constant2'
     *  Constant: '<S305>/Constant1'
     *  Constant: '<S305>/Constant2'
     *  Constant: '<S307>/Constant1'
     *  Constant: '<S307>/Constant2'
     *  Constant: '<S317>/KeVLDR_b_EEXV_PressSens_LIN1BusOff_Ovrd'
     *  Constant: '<S318>/KeVLDR_b_EEXV_PressSens_LOC_Ovrd'
     *  Constant: '<S321>/KeVLDR_b_EEXV_PressSens_PressElctrFlt_Ovrd'
     *  Constant: '<S322>/KeVLDR_b_EEXV_PressSens_PressSensAFlts_Ovrd'
     *  Constant: '<S325>/KeVLDR_b_EEXV_PressSens_ThrmlRlyErr_Ovrd'
     *  DataStoreRead: '<S297>/StatusByte_AC_RefrigPresSnsrAHi'
     *  DataStoreRead: '<S298>/StatusByte_AC_RefrigPresSnsrALo'
     *  DataStoreRead: '<S299>/StatusByte_AC_RefrigPresSnsrAPerf'
     *  DataStoreRead: '<S300>/StatusByte_AC_RefrigPresSnsrCCkt'
     *  Logic: '<S264>/Logical14'
     *  Logic: '<S264>/Logical18'
     *  Logic: '<S264>/Logical2'
     *  Logic: '<S264>/Logical21'
     *  Logic: '<S264>/Logical23'
     *  Logic: '<S264>/Logical24'
     *  Logic: '<S264>/Logical25'
     *  Logic: '<S264>/Logical26'
     *  Logic: '<S264>/Logical27'
     *  Logic: '<S264>/Logical3'
     *  Logic: '<S264>/Logical31'
     *  Logic: '<S264>/Logical40'
     *  Logic: '<S264>/Logical7'
     *  Logic: '<S264>/Logical8'
     *  Logic: '<S297>/Logical Operator'
     *  Logic: '<S298>/Logical Operator'
     *  Logic: '<S299>/Logical Operator'
     *  Logic: '<S300>/Logical Operator'
     *  Logic: '<S304>/Logical Operator'
     *  Logic: '<S305>/Logical Operator'
     *  Logic: '<S307>/Logical Operator'
     *  RelationalOperator: '<S297>/Relational Operator1'
     *  RelationalOperator: '<S297>/Relational Operator2'
     *  RelationalOperator: '<S298>/Relational Operator1'
     *  RelationalOperator: '<S298>/Relational Operator2'
     *  RelationalOperator: '<S299>/Relational Operator1'
     *  RelationalOperator: '<S299>/Relational Operator2'
     *  RelationalOperator: '<S300>/Relational Operator1'
     *  RelationalOperator: '<S300>/Relational Operator2'
     *  RelationalOperator: '<S304>/Relational Operator1'
     *  RelationalOperator: '<S304>/Relational Operator2'
     *  RelationalOperator: '<S305>/Relational Operator1'
     *  RelationalOperator: '<S305>/Relational Operator2'
     *  RelationalOperator: '<S307>/Relational Operator1'
     *  RelationalOperator: '<S307>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S297>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S297>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S298>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S298>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S299>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S299>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S300>/Bitwise Operator2'
     */
    rtb_Logical12_f3 = (((((((rtb_VariantMergeForOutportDFI_0 <= 0) ||
        (rtb_UnitDelay_ly_tmp != 0U)) ||
                            (KeVLDR_b_EEXV_PressSens_ThrmlRlyErr_Ovrd)) &&
                           (((rtb_VariantMergeForOutportDFI_1 <= 0) ||
        (rtb_VariantMergeForOutportDFI_2 != 0U)) ||
                            (KeVLDR_b_EEXV_PressSens_LIN1BusOff_Ovrd))) &&
                          ((((((sint32)
        VLDR_ac_DW.StatusByte_AC_RefrigPresSnsrCCk) & 1) <= 0) ||
                            (rtb_Comparison4_mj_tmp != 0U)) ||
                           (KeVLDR_b_EEXV_PressSens_PressElctrFlt_Ovrd))) &&
                         (((rtb_VariantMergeForOutportDFI_3 <= 0) ||
                           (rtb_VariantMergeForOutportDFI_4 != 0U)) ||
                          (KeVLDR_b_EEXV_PressSens_LOC_Ovrd))) && ((((((((sint32)
        VLDR_ac_DW.StatusByte_AC_RefrigPresSnsrAPe) & 1) <= 0) || ((((uint32)
        VLDR_ac_DW.StatusByte_AC_RefrigPresSnsrAPe) & 64U) != 0U)) &&
                           (((((sint32)
        VLDR_ac_DW.StatusByte_AC_RefrigPresSnsrALo) & 1) <= 0) || ((((uint32)
        VLDR_ac_DW.StatusByte_AC_RefrigPresSnsrALo) & 64U) != 0U))) &&
                          (((((sint32)VLDR_ac_DW.StatusByte_AC_RefrigPresSnsrAHi)
        & 1) <= 0) || ((((uint32)VLDR_ac_DW.StatusByte_AC_RefrigPresSnsrAHi) &
                        64U) != 0U))) ||
                         (KeVLDR_b_EEXV_PressSens_PressSensAFlts_Ovrd)));

    /* UnitDelay: '<S272>/Unit Delay1' incorporates:
     *  Constant: '<S293>/Constant'
     *  Constant: '<S310>/KeVLDR_U_SysVltLwrLim'
     *  Constant: '<S311>/KeVLDR_U_SysVltUprLim'
     *  Logic: '<S264>/Logical1'
     *  Logic: '<S264>/Logical33'
     *  RelationalOperator: '<S264>/Comparison1'
     *  RelationalOperator: '<S264>/Comparison3'
     *  RelationalOperator: '<S264>/Comparison8'
     */
    rtb_VM_Conditional_Signal_CP_cz = ((((((uint32)
        rtb_TmpSignalConversionAtVePMTR) != CePMTR_e_DISBL_All_Thrml) &&
        ((rtb_VM_Conditional_Signal_BF1_S < KeVLDR_U_SysVltUprLim) &&
         (rtb_VM_Conditional_Signal_BF1_S > KeVLDR_U_SysVltLwrLim))) &&
        rtb_Logical12_f3) && rtb_TmpSignalConversionAtVeDFIR);

    /* S-Function (sfix_bitop): '<S302>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S302>/StatusByte_AC_RefrigTempSnsrCPerf'
     *  S-Function (sfix_bitop): '<S377>/Bitwise Operator2'
     */
    rtb_Comparison4_mj_tmp_0 = ((sint32)
        VLDR_ac_DW.StatusByte_AC_RefrigTempSnsrCPe) & 1;

    /* S-Function (sfix_bitop): '<S302>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S302>/StatusByte_AC_RefrigTempSnsrCPerf'
     *  S-Function (sfix_bitop): '<S377>/Bitwise Operator1'
     */
    rtb_Comparison4_mj_tmp = ((uint32)VLDR_ac_DW.StatusByte_AC_RefrigTempSnsrCPe)
        & 64U;

    /* S-Function (sfix_bitop): '<S301>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S301>/StatusByte_AC_RefrigTempSnsrCCkt'
     *  S-Function (sfix_bitop): '<S361>/Bitwise Operator2'
     */
    rtb_Comparison4_mj_tmp_1 = ((uint32)
        VLDR_ac_DW.StatusByte_AC_RefrigTempSnsrCCk) & 64U;

    /* VariantMerge generated from: '<S161>/DFIR_EEXV_PressSens' incorporates:
     *  Constant: '<S296>/Constant1'
     *  Constant: '<S296>/Constant2'
     *  Constant: '<S301>/Constant1'
     *  Constant: '<S301>/Constant2'
     *  Constant: '<S302>/Constant1'
     *  Constant: '<S302>/Constant2'
     *  Constant: '<S303>/Constant1'
     *  Constant: '<S303>/Constant2'
     *  Constant: '<S306>/Constant1'
     *  Constant: '<S306>/Constant2'
     *  Constant: '<S316>/KeVLDR_b_EEXV_PressSens_EACPerf_Ovrd'
     *  Constant: '<S319>/KeVLDR_b_EEXV_PressSens_LostCommEAC_Ovrd'
     *  Constant: '<S320>/KeVLDR_b_EEXV_PressSens_PerfDiag_Ovrd'
     *  Constant: '<S323>/KeVLDR_b_EEXV_PressSens_TempElctrFlt_Ovrd'
     *  Constant: '<S324>/KeVLDR_b_EEXV_PressSens_TempSens_Ovrd'
     *  DataStoreRead: '<S296>/StatusByte_AC_RefrigExpVlvAct_C_CntrlCktPerf'
     *  DataStoreRead: '<S301>/StatusByte_AC_RefrigTempSnsrCCkt'
     *  DataStoreRead: '<S303>/StatusByte_EACPerf'
     *  DataStoreRead: '<S306>/StatusByte_LostCommEAC'
     *  Logic: '<S264>/Logical10'
     *  Logic: '<S264>/Logical11'
     *  Logic: '<S264>/Logical12'
     *  Logic: '<S264>/Logical17'
     *  Logic: '<S264>/Logical19'
     *  Logic: '<S264>/Logical20'
     *  Logic: '<S264>/Logical22'
     *  Logic: '<S264>/Logical29'
     *  Logic: '<S264>/Logical30'
     *  Logic: '<S264>/Logical35'
     *  Logic: '<S264>/Logical4'
     *  Logic: '<S264>/Logical5'
     *  Logic: '<S264>/Logical9'
     *  Logic: '<S296>/Logical Operator'
     *  Logic: '<S301>/Logical Operator'
     *  Logic: '<S302>/Logical Operator'
     *  Logic: '<S303>/Logical Operator'
     *  Logic: '<S306>/Logical Operator'
     *  RelationalOperator: '<S296>/Relational Operator1'
     *  RelationalOperator: '<S296>/Relational Operator2'
     *  RelationalOperator: '<S301>/Relational Operator1'
     *  RelationalOperator: '<S301>/Relational Operator2'
     *  RelationalOperator: '<S302>/Relational Operator1'
     *  RelationalOperator: '<S302>/Relational Operator2'
     *  RelationalOperator: '<S303>/Relational Operator1'
     *  RelationalOperator: '<S303>/Relational Operator2'
     *  RelationalOperator: '<S306>/Relational Operator1'
     *  RelationalOperator: '<S306>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S296>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S301>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S301>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S302>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S302>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S303>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S303>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S306>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S306>/Bitwise Operator2'
     */
    rtb_Comparison4_i = ((((((((sint32)VLDR_ac_DW.StatusByte_EACPerf) & 1) <= 0)
                            || ((((uint32)VLDR_ac_DW.StatusByte_EACPerf) & 64U)
        != 0U)) || (KeVLDR_b_EEXV_PressSens_EACPerf_Ovrd)) && ((((((sint32)
        VLDR_ac_DW.StatusByte_LostCommEAC) & 1) <= 0) || ((((uint32)
        VLDR_ac_DW.StatusByte_LostCommEAC) & 64U) != 0U)) ||
                           (KeVLDR_b_EEXV_PressSens_LostCommEAC_Ovrd))) &&
                         ((((((((sint32)
        VLDR_ac_DW.StatusByte_AC_RefrigTempSnsrCCk) & 1) <= 0) ||
        (rtb_Comparison4_mj_tmp_1 != 0U)) ||
                            (KeVLDR_b_EEXV_PressSens_TempElctrFlt_Ovrd)) &&
                           ((((((sint32)
        VLDR_ac_DW.StatusByte_AC_RefrigExpVlvAct_C) & 1) <= 0) ||
        (rtb_VM_Conditional_Signal_CPV_e != 0U)) ||
                            (KeVLDR_b_EEXV_PressSens_PerfDiag_Ovrd))) &&
                          (((rtb_Comparison4_mj_tmp_0 <= 0) ||
                            (rtb_Comparison4_mj_tmp != 0U)) ||
                           (KeVLDR_b_EEXV_PressSens_TempSens_Ovrd))));

    /* Logic: '<S264>/Logical6' incorporates:
     *  Constant: '<S294>/Constant'
     *  Constant: '<S295>/Constant'
     *  Constant: '<S313>/KeVLDR_b_EEXV_ActCool_Disbl'
     *  Logic: '<S264>/AND3'
     *  Logic: '<S264>/Logical13'
     *  RelationalOperator: '<S264>/Comparison4'
     *  RelationalOperator: '<S264>/Comparison5'
     *  SignalConversion generated from: '<S1>/VeTAIR_e_CompStat'
     *  SignalConversion generated from: '<S1>/VeTHMR_e_BatThrmlSt'
     */
    VeVLDR_b_EEXV_PressSensLatch_En = (((rtb_Comparison4_i && ((((uint32)
        rtb_TmpSignalConversionAtVeTH_j) == CeTHMR_e_ActiveCooling) ||
        (KeVLDR_b_EEXV_ActCool_Disbl))) && (((uint32)
        rtb_TmpSignalConversionAtVeT_a5) != CeTAIR_e_Degraded)) &&
        (!rtb_TmpSignalConversionAtVeTA_i));

    /* Product: '<S389>/Product' incorporates:
     *  Constant: '<S286>/Constant Value1'
     *  Constant: '<S308>/Calib'
     *  Product: '<S286>/Multiplication3'
     */
    rtb_TmpSignalConversionAtVeRC_a = HeVLDR_t_MedTED / 2.0F;

    /* Product: '<S286>/Multiplication2' incorporates:
     *  Constant: '<S336>/KeVLDR_t_EEXV_FilterDeriv_CutOff'
     *  Product: '<S286>/Multiplication4'
     *  Sum: '<S286>/Summation'
     *  Sum: '<S286>/Summation1'
     *  Sum: '<S286>/Summation2'
     *  UnitDelay: '<S286>/Unit Delay'
     *  UnitDelay: '<S286>/Unit Delay1'
     */
    rtb_Switch1_o0 = ((rtb_TmpSignalConversionAtVeT_dk -
                       ((rtb_TmpSignalConversionAtVeRC_a -
                         KeVLDR_t_EEXV_FilterDeriv_CutOff) *
                        VLDR_ac_DW.UnitDelay1_DSTATE_c)) -
                      VLDR_ac_DW.UnitDelay_DSTATE_lp) /
        (rtb_TmpSignalConversionAtVeRC_a + KeVLDR_t_EEXV_FilterDeriv_CutOff);

    /* Outputs for Atomic SubSystem: '<S264>/Digital Lowpass Reset Enabled' */
    /* Product: '<S389>/Product' incorporates:
     *  UnitDelay: '<S287>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeRC_a = VLDR_ac_DW.UnitDelay_DSTATE_kp;

    /* Switch: '<S287>/Switch1' incorporates:
     *  Constant: '<S337>/KeVLDR_t_EEXV_LPF_Coef'
     *  Product: '<S287>/Multiplication'
     *  Sum: '<S287>/Subtraction'
     *  Sum: '<S287>/Summation'
     */
    VeVLDR_dn_CompAccelFilter_EEXV = ((rtb_Switch1_o0 -
        rtb_TmpSignalConversionAtVeRC_a) * KeVLDR_t_EEXV_LPF_Coef) +
        rtb_TmpSignalConversionAtVeRC_a;

    /* Update for UnitDelay: '<S287>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_kp = VeVLDR_dn_CompAccelFilter_EEXV;

    /* End of Outputs for SubSystem: '<S264>/Digital Lowpass Reset Enabled' */

    /* RelationalOperator: '<S264>/Comparison12' incorporates:
     *  Constant: '<S326>/KeVLDR_dn_EEXV_CompAccelThr'
     */
    rtb_VM_Conditional_Signal_CPV_d = (VeVLDR_dn_CompAccelFilter_EEXV >=
        KeVLDR_dn_EEXV_CompAccelThr);

    /* Outputs for Atomic SubSystem: '<S264>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S340>/EdgeFalling1' */
    /* Logic: '<S344>/AND' incorporates:
     *  Logic: '<S344>/OR1'
     *  UnitDelay: '<S344>/Unit Delay'
     */
    rtb_VM_Conditional_Signal_CPV_l = ((!rtb_VM_Conditional_Signal_CPV_d) &&
        (VLDR_ac_DW.UnitDelay_DSTATE_mc));

    /* Update for UnitDelay: '<S344>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_mc = rtb_VM_Conditional_Signal_CPV_d;

    /* End of Outputs for SubSystem: '<S340>/EdgeFalling1' */

    /* Switch: '<S340>/Switch' */
    if (rtb_VM_Conditional_Signal_CPV_l)
    {
        /* Switch: '<S340>/Switch' incorporates:
         *  Constant: '<S334>/KeVLDR_t_EEXV_CompAC_Time'
         */
        rtb_TmpSignalConversionAtVeRC_a = KeVLDR_t_EEXV_CompAC_Time;
    }
    else
    {
        /* Switch: '<S340>/Switch' incorporates:
         *  Constant: '<S308>/Calib'
         *  Constant: '<S340>/Constant Value1'
         *  MinMax: '<S340>/Minimum'
         *  Sum: '<S340>/Summation'
         *  UnitDelay: '<S340>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeRC_a = fmaxf(VLDR_ac_DW.UnitDelay_DSTATE_d4 -
            HeVLDR_t_MedTED, 0.0F);
    }

    /* End of Switch: '<S340>/Switch' */

    /* Logic: '<S340>/AND' incorporates:
     *  Constant: '<S340>/Constant Value2'
     *  RelationalOperator: '<S340>/Greater  Than'
     */
    VeVLDR_b_CompAcc_EEXV = (rtb_VM_Conditional_Signal_CPV_d ||
        (rtb_TmpSignalConversionAtVeRC_a > 0.0F));

    /* Update for UnitDelay: '<S340>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_d4 = rtb_TmpSignalConversionAtVeRC_a;

    /* End of Outputs for SubSystem: '<S264>/Turn Off Delay Time' */

    /* Outputs for Atomic SubSystem: '<S264>/Hysteresis1' */
    /* Switch: '<S309>/Switch1' incorporates:
     *  Constant: '<S330>/KeVLDR_n_EEXV_SpdThrshld_RSP_Diag'
     *  RelationalOperator: '<S309>/Greater  Than'
     */
    if (rtb_TmpSignalConversionAtVeT_dk > KeVLDR_n_EEXV_SpdThrshld_RSP_Diag)
    {
        /* Switch: '<S309>/Switch1' incorporates:
         *  Constant: '<S309>/Constant Value'
         */
        rtb_VM_Conditional_Signal_Logic = true;
    }
    else
    {
        /* Switch: '<S309>/Switch1' incorporates:
         *  Constant: '<S329>/KeVLDR_n_EEXV_SpdThrshld_LSP_Diag'
         *  RelationalOperator: '<S309>/Greater  Than1'
         *  UnitDelay: '<S309>/Unit Delay'
         */
        rtb_VM_Conditional_Signal_Logic = ((rtb_TmpSignalConversionAtVeT_dk >=
            KeVLDR_n_EEXV_SpdThrshld_LSP_Diag) &&
            (VLDR_ac_DW.UnitDelay_DSTATE_i5));
    }

    /* End of Switch: '<S309>/Switch1' */

    /* Update for UnitDelay: '<S309>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_i5 = rtb_VM_Conditional_Signal_Logic;

    /* End of Outputs for SubSystem: '<S264>/Hysteresis1' */

    /* RelationalOperator: '<S264>/Comparison2' incorporates:
     *  Constant: '<S328>/KeVLDR_n_EEXV_LowCompSpd'
     */
    rtb_VM_Conditional_Signal_CPV_l = (rtb_TmpSignalConversionAtVeT_dk >
        KeVLDR_n_EEXV_LowCompSpd);

    /* Outputs for Atomic SubSystem: '<S264>/EdgeRising2' */
    /* Logic: '<S289>/AND' incorporates:
     *  Logic: '<S289>/OR1'
     *  UnitDelay: '<S289>/Unit Delay'
     */
    rtb_VM_Conditional_Signal_CPV_d = (rtb_VM_Conditional_Signal_CPV_l &&
        (!VLDR_ac_DW.UnitDelay_DSTATE_iz));

    /* Update for UnitDelay: '<S289>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_iz = rtb_VM_Conditional_Signal_CPV_l;

    /* End of Outputs for SubSystem: '<S264>/EdgeRising2' */

    /* Logic: '<S264>/AND7' incorporates:
     *  Constant: '<S312>/KeVLDR_b_EEXV_AccelCheckEnbl'
     */
    rtb_VM_Conditional_Signal_CPV_l = ((VeVLDR_b_CompAcc_EEXV) &&
        (KeVLDR_b_EEXV_AccelCheckEnbl));

    /* Outputs for Atomic SubSystem: '<S264>/EdgeRising4' */
    /* Logic: '<S290>/AND' incorporates:
     *  Logic: '<S290>/OR1'
     *  UnitDelay: '<S290>/Unit Delay'
     */
    rtb_VariantMerge_For_Variant_So = (rtb_VM_Conditional_Signal_CPV_l &&
        (!VLDR_ac_DW.UnitDelay_DSTATE_eh));

    /* Update for UnitDelay: '<S290>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_eh = rtb_VM_Conditional_Signal_CPV_l;

    /* End of Outputs for SubSystem: '<S264>/EdgeRising4' */

    /* Logic: '<S264>/Logical28' incorporates:
     *  Logic: '<S264>/AND8'
     */
    rtb_VM_Conditional_Signal_CPV_d = ((rtb_VM_Conditional_Signal_CPV_d ||
        rtb_VariantMerge_For_Variant_So) && (VeVLDR_b_EEXV_PressSensLatch_En));

    /* Switch: '<S343>/Switch1' */
    if (rtb_VM_Conditional_Signal_CPV_d)
    {
        /* Product: '<S389>/Product' incorporates:
         *  Constant: '<S343>/InitValue'
         */
        rtb_TmpSignalConversionAtVeRC_a = 0.0F;
    }
    else
    {
        /* Product: '<S389>/Product' incorporates:
         *  Constant: '<S308>/Calib'
         *  Sum: '<S343>/Subtraction'
         *  Switch: '<S343>/Switch2'
         *  UnitDelay: '<S343>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeRC_a = HeVLDR_t_MedTED +
            VLDR_ac_DW.UnitDelay_DSTATE_lh;
    }

    /* End of Switch: '<S343>/Switch1' */

    /* RelationalOperator: '<S343>/Greater  Than1' incorporates:
     *  Constant: '<S332>/KeVLDR_t_EEXV_CntrTime1'
     */
    VeVLDR_b_WaitTimeEnable_EEXV = (rtb_TmpSignalConversionAtVeRC_a >
        KeVLDR_t_EEXV_CntrTime1);

    /* RelationalOperator: '<S264>/Comparison13' incorporates:
     *  Constant: '<S327>/KeVLDR_n_EEXV_InitCompSpd'
     */
    rtb_VariantMerge_For_Variant_So = (rtb_TmpSignalConversionAtVeT_dk <
        KeVLDR_n_EEXV_InitCompSpd);

    /* Outputs for Atomic SubSystem: '<S264>/Turn On Delay Time1' */
    /* Outputs for Atomic SubSystem: '<S342>/EdgeRising' */
    /* Logic: '<S346>/AND' incorporates:
     *  Logic: '<S346>/OR1'
     *  UnitDelay: '<S346>/Unit Delay'
     */
    rtb_VM_Conditional_Signal_CPV_l = (rtb_VariantMerge_For_Variant_So &&
        (!VLDR_ac_DW.UnitDelay_DSTATE_ji));

    /* Update for UnitDelay: '<S346>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_ji = rtb_VariantMerge_For_Variant_So;

    /* End of Outputs for SubSystem: '<S342>/EdgeRising' */

    /* Switch: '<S342>/Switch1' incorporates:
     *  Logic: '<S342>/OR'
     *  Logic: '<S342>/OR1'
     */
    if ((!rtb_VariantMerge_For_Variant_So) || rtb_VM_Conditional_Signal_CPV_l)
    {
        /* Switch: '<S342>/Switch1' incorporates:
         *  Constant: '<S342>/Constant Value1'
         */
        rtb_Switch1_np = 0.0F;
    }
    else
    {
        /* Switch: '<S342>/Switch1' incorporates:
         *  Constant: '<S308>/Calib'
         *  Constant: '<S331>/KeVLDR_t_EEXV_CmpSpdTm'
         *  MinMax: '<S342>/Minimum'
         *  Sum: '<S342>/Summation'
         *  UnitDelay: '<S342>/Unit Delay'
         */
        rtb_Switch1_np = fminf(KeVLDR_t_EEXV_CmpSpdTm, HeVLDR_t_MedTED +
                               VLDR_ac_DW.UnitDelay_DSTATE_nr);
    }

    /* End of Switch: '<S342>/Switch1' */
    /* End of Outputs for SubSystem: '<S264>/Turn On Delay Time1' */

    /* Inport: '<Root>/VeTAIR_b_EEXV_RefPress_FA' */
    (void)Rte_Read_VeTAIR_b_EEXV_RefPress_FA_Value(&rtb_Logical41_a);

    /* Outputs for Atomic SubSystem: '<S264>/Turn On Delay Time1' */
    /* Update for UnitDelay: '<S342>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_nr = rtb_Switch1_np;

    /* End of Outputs for SubSystem: '<S264>/Turn On Delay Time1' */

    /* UnitDelay: '<S362>/Unit Delay' incorporates:
     *  Constant: '<S333>/KeVLDR_t_EEXV_CntrTime2'
     *  RelationalOperator: '<S343>/Greater  Than2'
     */
    rtb_VM_Conditional_Signal_CPV_l = (rtb_TmpSignalConversionAtVeRC_a >
        KeVLDR_t_EEXV_CntrTime2);

    /* Logic: '<S264>/AND5' incorporates:
     *  Constant: '<S314>/KeVLDR_b_EEXV_CheckEnbl'
     *  Logic: '<S264>/Logical36'
     *  Logic: '<S264>/Logical37'
     *  UnitDelay: '<S264>/Unit Delay3'
     */
    rtb_VariantMerge_For_Variant__h = (rtb_VariantMerge_For_Variant_So ||
        (((VLDR_ac_DW.UnitDelay3_DSTATE_k) || rtb_VM_Conditional_Signal_CPV_l) &&
         (KeVLDR_b_EEXV_CheckEnbl)));

    /* Outputs for Atomic SubSystem: '<S264>/EdgeRising1' */
    /* Logic: '<S288>/OR1' incorporates:
     *  UnitDelay: '<S288>/Unit Delay'
     */
    rtb_LogicalOperator7 = !VLDR_ac_DW.UnitDelay_DSTATE_lkf;

    /* Update for UnitDelay: '<S288>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_lkf = rtb_VariantMerge_For_Variant__h;

    /* Outputs for Atomic SubSystem: '<S264>/Signal Latch On With Reset1' */
    /* Outputs for Atomic SubSystem: '<S264>/Turn On Delay Time1' */
    /* Logic: '<S339>/OR1' incorporates:
     *  Constant: '<S331>/KeVLDR_t_EEXV_CmpSpdTm'
     *  Logic: '<S288>/AND'
     *  Logic: '<S339>/NOT'
     *  Logic: '<S339>/OR'
     *  Logic: '<S342>/AND'
     *  RelationalOperator: '<S342>/Greater  Than'
     *  UnitDelay: '<S339>/Unit Delay'
     */
    rtb_VariantMerge_For_Variant_So = ((rtb_VariantMerge_For_Variant_So &&
        (rtb_Switch1_np >= KeVLDR_t_EEXV_CmpSpdTm)) ||
        (((!rtb_VariantMerge_For_Variant__h) || (!rtb_LogicalOperator7)) &&
         (VLDR_ac_DW.UnitDelay_DSTATE_adv)));

    /* End of Outputs for SubSystem: '<S264>/Turn On Delay Time1' */
    /* End of Outputs for SubSystem: '<S264>/EdgeRising1' */

    /* Update for UnitDelay: '<S339>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_adv = rtb_VariantMerge_For_Variant_So;

    /* End of Outputs for SubSystem: '<S264>/Signal Latch On With Reset1' */

    /* Logic: '<S264>/Logical34' incorporates:
     *  Constant: '<S315>/KeVLDR_b_EEXV_CmpSpd_Disbl'
     *  Logic: '<S264>/AND4'
     *  Logic: '<S264>/Logical39'
     *  UnitDelay: '<S264>/Unit Delay1'
     */
    VeVLDR_b_EEXV_PressSensDiag_En = ((VeVLDR_b_EEXV_PressSensLatch_En) &&
        (((((VeVLDR_b_CompAcc_EEXV) && rtb_VM_Conditional_Signal_Logic) &&
           (VeVLDR_b_WaitTimeEnable_EEXV)) && (VLDR_ac_DW.UnitDelay1_DSTATE_gt))
         && (rtb_VariantMerge_For_Variant_So || (KeVLDR_b_EEXV_CmpSpd_Disbl))));

    /* Logic: '<S264>/Logical41' */
    rtb_Logical41_a = (rtb_Logical41_a && rtb_VM_Conditional_Signal_CP_cz);

    /* Outputs for Atomic SubSystem: '<S264>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S341>/EdgeRising' */
    /* Logic: '<S345>/AND' incorporates:
     *  Logic: '<S345>/OR1'
     *  UnitDelay: '<S345>/Unit Delay'
     */
    rtb_VM_Conditional_Signal_Logic = (rtb_Logical41_a &&
        (!VLDR_ac_DW.UnitDelay_DSTATE_luc));

    /* Update for UnitDelay: '<S345>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_luc = rtb_Logical41_a;

    /* End of Outputs for SubSystem: '<S341>/EdgeRising' */

    /* Switch: '<S341>/Switch1' incorporates:
     *  Logic: '<S341>/OR'
     *  Logic: '<S341>/OR1'
     */
    if ((!rtb_Logical41_a) || rtb_VM_Conditional_Signal_Logic)
    {
        /* Switch: '<S341>/Switch1' incorporates:
         *  Constant: '<S341>/Constant Value1'
         */
        rtb_Switch1_np = 0.0F;
    }
    else
    {
        /* Switch: '<S341>/Switch1' incorporates:
         *  Constant: '<S308>/Calib'
         *  Constant: '<S335>/KeVLDR_t_EEXV_FA_WaitTime'
         *  MinMax: '<S341>/Minimum'
         *  Sum: '<S341>/Summation'
         *  UnitDelay: '<S341>/Unit Delay'
         */
        rtb_Switch1_np = fminf(KeVLDR_t_EEXV_FA_WaitTime, HeVLDR_t_MedTED +
                               VLDR_ac_DW.UnitDelay_DSTATE_lt);
    }

    /* End of Switch: '<S341>/Switch1' */

    /* Logic: '<S341>/AND' incorporates:
     *  Constant: '<S335>/KeVLDR_t_EEXV_FA_WaitTime'
     *  RelationalOperator: '<S341>/Greater  Than'
     */
    rtb_VM_Conditional_Signal_Logic = (rtb_Logical41_a && (rtb_Switch1_np >=
        KeVLDR_t_EEXV_FA_WaitTime));

    /* Update for UnitDelay: '<S341>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_lt = rtb_Switch1_np;

    /* End of Outputs for SubSystem: '<S264>/Turn On Delay Time' */

    /* Logic: '<S264>/Logical16' incorporates:
     *  Constant: '<S338>/Calib'
     *  Logic: '<S264>/Logical32'
     *  Logic: '<S264>/Logical43'
     */
    VeVLDR_b_EEXV_PresSensSNA_DiagEn = ((rtb_VM_Conditional_Signal_CP_cz &&
        (VeVLDR_b_EEXV_PressSensDiag_En)) ||
        ((KeVLDR_b_EEXV_PressSensRatPerfCndsOV_En) &&
         rtb_VM_Conditional_Signal_Logic));

    /* RelationalOperator: '<S271>/Relational Operator3' incorporates:
     *  Constant: '<S271>/Constant3'
     */
    rtb_VM_Conditional_Signal_CP_cz = (VeVLDR_b_EEXV_PrsElctrFlt_DiagE == 0U);

    /* Outputs for Atomic SubSystem: '<S271>/EdgeFalling1' */
    /* Logic: '<S271>/Logical Operator' incorporates:
     *  Logic: '<S273>/OR1'
     */
    rtb_VariantMerge_For_Variant_So = !rtb_VM_Conditional_Signal_CP_cz;

    /* End of Outputs for SubSystem: '<S271>/EdgeFalling1' */

    /* Logic: '<S271>/Logical1' incorporates:
     *  Constant: '<S269>/Calib'
     *  Constant: '<S270>/KeVLDR_b_EEXV_PressSens_XYEnbl'
     *  Constant: '<S271>/Constant1'
     *  DataStoreRead: '<S263>/Data Store Read'
     *  Logic: '<S263>/AND1'
     *  Logic: '<S271>/Logical Operator'
     *  Logic: '<S271>/Logical10'
     *  Logic: '<S271>/Logical12'
     *  RelationalOperator: '<S271>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S271>/Bitwise Operator3'
     */
    rtb_Logical41_a = (((VeVLDR_b_EEXV_PresSensSNA_DiagEn) &&
                        (KeVLDR_b_EEXV_PressSens_XYEnbl)) &&
                       ((!KeVLDR_b_AC_RefrigPresSnsrCCktPerf_LtchEnbl) ||
                        (((((uint32)VLDR_ac_DW.StatusByte_AC_RefrigPresSnsrC_i)
                           & 1U) == 0U) || rtb_VariantMerge_For_Variant_So)));

    /* Switch: '<S266>/Switch' */
    if (rtb_VM_Conditional_Signal_CPV_d)
    {
        /* Switch: '<S266>/Switch' */
        VeVLDR_p_EEXV_PressLatch = rtb_TmpSignalConversionAtVeT_dd;
    }
    else
    {
        /* Switch: '<S266>/Switch' incorporates:
         *  UnitDelay: '<S266>/Unit Delay1'
         */
        VeVLDR_p_EEXV_PressLatch = VLDR_ac_DW.UnitDelay1_DSTATE_hm;
    }

    /* End of Switch: '<S266>/Switch' */

    /* Outputs for Enabled SubSystem: '<S170>/Fail_Symptom' incorporates:
     *  EnablePort: '<S265>/Enable'
     */
    if (VeVLDR_b_EEXV_PresSensSNA_DiagEn)
    {
        /* Abs: '<S265>/Abs' incorporates:
         *  Sum: '<S265>/Sum1'
         */
        VeVLDR_p_EEXV_Pres_Diff = fabsf(rtb_TmpSignalConversionAtVeT_dd -
            VeVLDR_p_EEXV_PressLatch);

        /* Lookup_n-D: '<S351>/Vector' incorporates:
         *  SignalConversion generated from: '<S1>/VeTAIR_T_EEXV_RefTemp'
         */
        VeVLDR_p_EEXV_PressSens_Sat_Thr = look1_iflf_binlcapw
            (rtb_TmpSignalConversionAtVeT_ld, ((const float32 *)
              &(KxVLDR_p_EEXV_PressSens_Saturation[0])), ((const float32 *)
              &(KtVLDR_p_EEXV_PressSens_Saturation[0])), 6U);

        /* Logic: '<S265>/Logical Operator' incorporates:
         *  Constant: '<S347>/KeVLDR_b_EEXV_PressSens_Saturation_Enb'
         *  Constant: '<S348>/KeVLDR_b_EEXV_Press_Delta_Enb'
         *  Constant: '<S349>/KeVLDR_b_EEXV_RefPressFA_Enbl'
         *  Constant: '<S350>/KeVLDR_p_EEXV_Press_Delta_Min'
         *  Logic: '<S265>/Logical Operator1'
         *  Logic: '<S265>/Logical Operator2'
         *  Logic: '<S265>/Logical5'
         *  RelationalOperator: '<S265>/Comparison1'
         *  RelationalOperator: '<S265>/Comparison5'
         */
        VLDR_ac_B.LogicalOperator_k = ((((VeVLDR_p_EEXV_Pres_Diff <
            KeVLDR_p_EEXV_Press_Delta_Min) && (KeVLDR_b_EEXV_Press_Delta_Enb)) ||
            ((rtb_TmpSignalConversionAtVeT_dd > VeVLDR_p_EEXV_PressSens_Sat_Thr)
             && (KeVLDR_b_EEXV_PressSens_Saturation_Enb))) ||
            (rtb_VM_Conditional_Signal_Logic && (KeVLDR_b_EEXV_RefPressFA_Enbl)));
    }

    /* End of Outputs for SubSystem: '<S170>/Fail_Symptom' */

    /* Outputs for Atomic SubSystem: '<S271>/EdgeFalling1' */
    /* Logic: '<S273>/AND' incorporates:
     *  UnitDelay: '<S273>/Unit Delay'
     */
    rtb_VM_Conditional_Signal_Logic = (rtb_VariantMerge_For_Variant_So &&
        (VLDR_ac_DW.UnitDelay_DSTATE_bs));

    /* Update for UnitDelay: '<S273>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_bs = rtb_VM_Conditional_Signal_CP_cz;

    /* End of Outputs for SubSystem: '<S271>/EdgeFalling1' */

    /* Logic: '<S271>/Logical5' */
    rtb_VM_Conditional_Signal_Logic = (rtb_TmpSignalConversionAtVeT_a4 ||
        rtb_VM_Conditional_Signal_Logic);

    /* Logic: '<S272>/Fail Counter Reset' incorporates:
     *  UnitDelay: '<S272>/Unit Delay'
     *  UnitDelay: '<S272>/Unit Delay1'
     */
    rtb_VM_Conditional_Signal_CP_cz = ((rtb_VM_Conditional_Signal_Logic ||
        (VLDR_ac_DW.UnitDelay_DSTATE_me)) || (VLDR_ac_DW.UnitDelay1_DSTATE_el));

    /* Outputs for Atomic SubSystem: '<S272>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S272>/Counter Reset  Enabled ' */
    /* Switch: '<S279>/Switch1' incorporates:
     *  Logic: '<S272>/NOT6'
     *  Switch: '<S279>/Switch2'
     *  Switch: '<S280>/Switch1'
     */
    if (rtb_VM_Conditional_Signal_CP_cz)
    {
        /* Switch: '<S279>/Switch1' incorporates:
         *  Constant: '<S279>/Constant Value2'
         */
        VeVLDR_Cnt_EEXV_PresSens_FailCnt = 0U;

        /* Switch: '<S280>/Switch1' incorporates:
         *  Constant: '<S280>/Constant Value2'
         */
        VeVLDR_Cnt_EEXV_PressSens_SmpCnt = 0U;
    }
    else
    {
        if (rtb_Logical41_a && (VLDR_ac_B.LogicalOperator_k))
        {
            /* Switch: '<S279>/Switch2' incorporates:
             *  Constant: '<S279>/Constant Value1'
             *  Sum: '<S279>/Subtraction'
             *  Switch: '<S279>/Switch1'
             *  UnitDelay: '<S279>/Unit Delay'
             */
            VeVLDR_Cnt_EEXV_PresSens_FailCnt = (uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_d3) + 1U);
        }
        else
        {
            /* Switch: '<S279>/Switch1' incorporates:
             *  Switch: '<S279>/Switch2'
             *  UnitDelay: '<S279>/Unit Delay'
             */
            VeVLDR_Cnt_EEXV_PresSens_FailCnt = VLDR_ac_DW.UnitDelay_DSTATE_d3;
        }

        /* Switch: '<S280>/Switch2' */
        if (rtb_Logical41_a)
        {
            /* Switch: '<S280>/Switch1' incorporates:
             *  Constant: '<S280>/Constant Value1'
             *  Sum: '<S280>/Subtraction'
             *  Switch: '<S280>/Switch2'
             *  UnitDelay: '<S280>/Unit Delay'
             */
            VeVLDR_Cnt_EEXV_PressSens_SmpCnt = (uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_ia) + 1U);
        }
        else
        {
            /* Switch: '<S280>/Switch1' incorporates:
             *  Switch: '<S280>/Switch2'
             *  UnitDelay: '<S280>/Unit Delay'
             */
            VeVLDR_Cnt_EEXV_PressSens_SmpCnt = VLDR_ac_DW.UnitDelay_DSTATE_ia;
        }

        /* End of Switch: '<S280>/Switch2' */
    }

    /* End of Switch: '<S279>/Switch1' */
    /* End of Outputs for SubSystem: '<S272>/Counter Reset  Enabled 1' */

    /* Update for UnitDelay: '<S279>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_d3 = VeVLDR_Cnt_EEXV_PresSens_FailCnt;

    /* End of Outputs for SubSystem: '<S272>/Counter Reset  Enabled ' */

    /* Outputs for Atomic SubSystem: '<S272>/Counter Reset  Enabled 1' */
    /* Update for UnitDelay: '<S280>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_ia = VeVLDR_Cnt_EEXV_PressSens_SmpCnt;

    /* End of Outputs for SubSystem: '<S272>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S272>/Greater Than or Equal ' incorporates:
     *  Constant: '<S267>/KeVLDR_Cnt_EEXV_PressSens_FailCnt'
     */
    rtb_Logical41_a = (VeVLDR_Cnt_EEXV_PresSens_FailCnt >=
                       KeVLDR_Cnt_EEXV_PressSens_FailCnt);

    /* Logic: '<S272>/NOT5' incorporates:
     *  Constant: '<S268>/KeVLDR_Cnt_EEXV_PressSens_SmpCnt'
     *  Logic: '<S272>/NOT3'
     *  RelationalOperator: '<S272>/Less Than  or Equal'
     */
    rtb_VM_Conditional_Signal_CP_cz = ((VeVLDR_Cnt_EEXV_PressSens_SmpCnt >=
        KeVLDR_Cnt_EEXV_PressSens_SmpCnt) && (!rtb_Logical41_a));

    /* Switch: '<S285>/Switch1' incorporates:
     *  Constant: '<S278>/Constant Value'
     *  DataStoreWrite: '<S263>/Data Store Write'
     *  Switch: '<S284>/Switch1'
     */
    if (rtb_VM_Conditional_Signal_PostC)
    {
        VLDR_ac_DW.NeVLDR_Cnt_EEXV_PressSens_MFOP = 0U;
    }
    else
    {
        if (rtb_VM_Conditional_Signal_CP_cz)
        {
            /* MinMax: '<S278>/Minimum2' incorporates:
             *  DataStoreRead: '<S263>/Data Store Read1'
             *  Switch: '<S284>/Switch1'
             */
            if (VeVLDR_Cnt_EEXV_PresSens_FailCnt >
                    VLDR_ac_DW.NeVLDR_Cnt_EEXV_PressSens_MFOP)
            {
                /* DataStoreWrite: '<S263>/Data Store Write' incorporates:
                 *  Switch: '<S284>/Switch1'
                 */
                VLDR_ac_DW.NeVLDR_Cnt_EEXV_PressSens_MFOP =
                    VeVLDR_Cnt_EEXV_PresSens_FailCnt;
            }

            /* End of MinMax: '<S278>/Minimum2' */
        }
    }

    /* End of Switch: '<S285>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S271>/Fail' */
    VLDR_ac_Fail(rtb_Logical41_a, &VLDR_ac_B.VariantMergeForOutportVeVLDR_gf);

    /* End of Outputs for SubSystem: '<S271>/Fail' */

    /* Outputs for Enabled SubSystem: '<S271>/Init' */
    VLDR_ac_Init_a(rtb_VM_Conditional_Signal_Logic,
                   &VLDR_ac_B.VariantMergeForOutportVeVLDR_gf);

    /* End of Outputs for SubSystem: '<S271>/Init' */

    /* Outputs for Enabled SubSystem: '<S271>/Pass' */
    VLDR_ac_Pass(rtb_VM_Conditional_Signal_CP_cz,
                 &VLDR_ac_B.VariantMergeForOutportVeVLDR_gf);

    /* End of Outputs for SubSystem: '<S271>/Pass' */

    /* RelationalOperator: '<S271>/Relational Operator' incorporates:
     *  RelationalOperator: '<S264>/Relational Operator1'
     *  RelationalOperator: '<S264>/Relational Operator2'
     *  VariantMerge generated from: '<S161>/VeVLDR_e_FaultSts_AC_RefrigPresSnsrCCktPerf'
     */
    VariantMergeForOutportEEXV_Pr_k = VLDR_ac_B.VariantMergeForOutportVeVLDR_gf;

    /* VariantMerge generated from: '<S161>/EEXV_PressSens_FltDtct' incorporates:
     *  Constant: '<S274>/Constant'
     *  RelationalOperator: '<S271>/Relational Operator'
     */
    VLDR_ac_B.VariantMergeForOutportEEXV_Pr_k = (((uint32)
        VariantMergeForOutportEEXV_Pr_k) == CeDFIB_e_Fail);

    /* Logic: '<S264>/Logical38' incorporates:
     *  Constant: '<S291>/Constant'
     *  Constant: '<S292>/Constant'
     *  RelationalOperator: '<S264>/Relational Operator1'
     *  RelationalOperator: '<S264>/Relational Operator2'
     */
    rtb_VM_Conditional_Signal_Logic = ((((uint32)VariantMergeForOutportEEXV_Pr_k)
        == CeDFIB_e_Pass) || (((uint32)VariantMergeForOutportEEXV_Pr_k) ==
        CeDFIB_e_Fail));

    /* Switch: '<S343>/Switch3' */
    if (rtb_VM_Conditional_Signal_CPV_l)
    {
        /* Switch: '<S343>/Switch3' incorporates:
         *  Constant: '<S333>/KeVLDR_t_EEXV_CntrTime2'
         */
        rtb_TmpSignalConversionAtVeT_dd = KeVLDR_t_EEXV_CntrTime2;
    }
    else
    {
        /* Switch: '<S343>/Switch3' */
        rtb_TmpSignalConversionAtVeT_dd = rtb_TmpSignalConversionAtVeRC_a;
    }

    /* End of Switch: '<S343>/Switch3' */

    /* Outputs for Atomic SubSystem: '<S266>/EdgeFalling' */
    /* UnitDelay: '<S362>/Unit Delay' incorporates:
     *  UnitDelay: '<S352>/Unit Delay'
     */
    rtb_VM_Conditional_Signal_CPV_l = VLDR_ac_DW.UnitDelay_DSTATE_ne;

    /* Update for UnitDelay: '<S352>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_ne = VeVLDR_b_EEXV_PresSensSNA_DiagEn;

    /* Outputs for Atomic SubSystem: '<S266>/Signal Latch On With Reset' */
    /* Logic: '<S353>/OR1' incorporates:
     *  Logic: '<S352>/AND'
     *  Logic: '<S352>/OR1'
     *  Logic: '<S353>/NOT'
     *  Logic: '<S353>/OR'
     *  UnitDelay: '<S353>/Unit Delay'
     */
    rtb_VM_Conditional_Signal_CPV_d = (rtb_VM_Conditional_Signal_CPV_d ||
        (((VeVLDR_b_EEXV_PresSensSNA_DiagEn) ||
          (!rtb_VM_Conditional_Signal_CPV_l)) && (VLDR_ac_DW.UnitDelay_DSTATE_py)));

    /* End of Outputs for SubSystem: '<S266>/EdgeFalling' */

    /* Update for UnitDelay: '<S353>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_py = rtb_VM_Conditional_Signal_CPV_d;

    /* End of Outputs for SubSystem: '<S266>/Signal Latch On With Reset' */

    /* Logic: '<S355>/Logical6' incorporates:
     *  Constant: '<S376>/Constant'
     *  Constant: '<S377>/Constant1'
     *  Constant: '<S377>/Constant2'
     *  Constant: '<S378>/Constant1'
     *  Constant: '<S378>/Constant2'
     *  Constant: '<S379>/Constant1'
     *  Constant: '<S379>/Constant2'
     *  Constant: '<S380>/Constant1'
     *  Constant: '<S380>/Constant2'
     *  Constant: '<S381>/KeVLDR_U_SysVltLwrLim'
     *  Constant: '<S382>/KeVLDR_U_SysVltUprLim'
     *  Constant: '<S383>/KeVLDR_b_EEXV_TempElctrDiag_LIN1BusOff_Ovrd'
     *  Constant: '<S384>/KeVLDR_b_EEXV_TempElctrDiag_LOC_Ovrd'
     *  Constant: '<S385>/KeVLDR_b_EEXV_TempElctrDiag_TempSens_Ovrd'
     *  Constant: '<S386>/KeVLDR_b_EEXV_TempElctrDiag_ThrmlRlyErr_Ovrd'
     *  Logic: '<S355>/Logical1'
     *  Logic: '<S355>/Logical18'
     *  Logic: '<S355>/Logical2'
     *  Logic: '<S355>/Logical21'
     *  Logic: '<S355>/Logical3'
     *  Logic: '<S355>/Logical4'
     *  Logic: '<S355>/Logical5'
     *  Logic: '<S355>/Logical7'
     *  Logic: '<S355>/Logical8'
     *  Logic: '<S377>/Logical Operator'
     *  Logic: '<S378>/Logical Operator'
     *  Logic: '<S379>/Logical Operator'
     *  Logic: '<S380>/Logical Operator'
     *  RelationalOperator: '<S355>/Comparison1'
     *  RelationalOperator: '<S355>/Comparison3'
     *  RelationalOperator: '<S355>/Comparison8'
     *  RelationalOperator: '<S377>/Relational Operator1'
     *  RelationalOperator: '<S377>/Relational Operator2'
     *  RelationalOperator: '<S378>/Relational Operator1'
     *  RelationalOperator: '<S378>/Relational Operator2'
     *  RelationalOperator: '<S379>/Relational Operator1'
     *  RelationalOperator: '<S379>/Relational Operator2'
     *  RelationalOperator: '<S380>/Relational Operator1'
     *  RelationalOperator: '<S380>/Relational Operator2'
     */
    VeVLDR_b_EEXV_TmpElctrFlt_DiagEn = ((((((((rtb_VM_Conditional_Signal_BF1_S <
        KeVLDR_U_SysVltUprLim) && (rtb_VM_Conditional_Signal_BF1_S >
        KeVLDR_U_SysVltLwrLim)) && (((uint32)rtb_TmpSignalConversionAtVePMTR) !=
        CePMTR_e_DISBL_All_Thrml)) && (((rtb_VariantMergeForOutportDFI_0 <= 0) ||
        (rtb_UnitDelay_ly_tmp != 0U)) ||
        (KeVLDR_b_EEXV_TempElctrDiag_ThrmlRlyErr_Ovrd))) &&
        (((rtb_VariantMergeForOutportDFI_1 <= 0) ||
          (rtb_VariantMergeForOutportDFI_2 != 0U)) ||
         (KeVLDR_b_EEXV_TempElctrDiag_LIN1BusOff_Ovrd))) &&
        (((rtb_VariantMergeForOutportDFI_3 <= 0) ||
          (rtb_VariantMergeForOutportDFI_4 != 0U)) ||
         (KeVLDR_b_EEXV_TempElctrDiag_LOC_Ovrd))) && (((rtb_Comparison4_mj_tmp_0
        <= 0) || (rtb_Comparison4_mj_tmp != 0U)) ||
        (KeVLDR_b_EEXV_TempElctrDiag_TempSens_Ovrd))) &&
        rtb_TmpSignalConversionAtVeDFIR);

    /* RelationalOperator: '<S361>/Relational Operator3' incorporates:
     *  Constant: '<S361>/Constant3'
     */
    rtb_VariantMerge_For_Variant_So = (rtb_Comparison4_mj_tmp_1 == 0U);

    /* Outputs for Atomic SubSystem: '<S361>/EdgeFalling1' */
    /* Logic: '<S361>/Logical Operator' incorporates:
     *  Logic: '<S363>/OR1'
     */
    rtb_LogicalOperator7 = !rtb_VariantMerge_For_Variant_So;

    /* End of Outputs for SubSystem: '<S361>/EdgeFalling1' */

    /* Logic: '<S361>/Logical1' incorporates:
     *  Constant: '<S359>/Calib'
     *  Constant: '<S360>/KeVLDR_b_EEXV_TempElctrFlt_XYEnbl'
     *  Constant: '<S361>/Constant1'
     *  DataStoreRead: '<S354>/Data Store Read1'
     *  Logic: '<S354>/AND1'
     *  Logic: '<S361>/Logical Operator'
     *  Logic: '<S361>/Logical10'
     *  Logic: '<S361>/Logical12'
     *  RelationalOperator: '<S361>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S361>/Bitwise Operator3'
     */
    rtb_VM_Conditional_Signal_CPV_l = (((VeVLDR_b_EEXV_TmpElctrFlt_DiagEn) &&
        (KeVLDR_b_EEXV_TempElctrFlt_XYEnbl)) &&
        ((!KeVLDR_b_AC_RefrigTempSnsrCCkt_LtchEnbl) || (((((uint32)
        VLDR_ac_DW.StatusByte_AC_RefrigTempSnsrCCk) & 1U) == 0U) ||
        rtb_LogicalOperator7)));

    /* Rounding: '<S389>/Rounding2' incorporates:
     *  Constant: '<S390>/HeVLDR_K_EEXV_RefTemp_Gain'
     *  Constant: '<S391>/HeVLDR_T_EEXV_RefTemp_Offset'
     *  Product: '<S389>/Product'
     *  Sum: '<S389>/Sum1'
     */
    VeVLDR_T_EEXV_TempRawData = roundf((rtb_TmpSignalConversionAtVeT_ld +
        HeVLDR_T_EEXV_RefTemp_Offset) * HeVLDR_K_EEXV_RefTemp_Gain);

    /* Outputs for Atomic SubSystem: '<S361>/EdgeFalling1' */
    /* Logic: '<S363>/AND' incorporates:
     *  UnitDelay: '<S363>/Unit Delay'
     */
    rtb_VariantMerge_For_Variant__h = (rtb_LogicalOperator7 &&
        (VLDR_ac_DW.UnitDelay_DSTATE_cxo));

    /* Update for UnitDelay: '<S363>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_cxo = rtb_VariantMerge_For_Variant_So;

    /* End of Outputs for SubSystem: '<S361>/EdgeFalling1' */

    /* Logic: '<S361>/Logical5' */
    rtb_TmpSignalConversionAtVeT_a4 = (rtb_TmpSignalConversionAtVeT_a4 ||
        rtb_VariantMerge_For_Variant__h);

    /* Logic: '<S362>/Fail Counter Reset' incorporates:
     *  UnitDelay: '<S362>/Unit Delay'
     *  UnitDelay: '<S362>/Unit Delay1'
     */
    rtb_VariantMerge_For_Variant_So = ((rtb_TmpSignalConversionAtVeT_a4 ||
        (VLDR_ac_DW.UnitDelay_DSTATE_f5q)) || (VLDR_ac_DW.UnitDelay1_DSTATE_ml));

    /* Outputs for Atomic SubSystem: '<S362>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S362>/Counter Reset  Enabled ' */
    /* Switch: '<S369>/Switch1' incorporates:
     *  Constant: '<S387>/HeVLDR_T_EEXV_RefTemp_ShrtHigh'
     *  Constant: '<S388>/HeVLDR_T_EEXV_RefTemp_ShrtLow'
     *  Logic: '<S356>/Logical18'
     *  Logic: '<S362>/NOT6'
     *  RelationalOperator: '<S356>/Comparison1'
     *  RelationalOperator: '<S356>/Comparison8'
     *  Switch: '<S369>/Switch2'
     *  Switch: '<S370>/Switch1'
     */
    if (rtb_VariantMerge_For_Variant_So)
    {
        /* Switch: '<S369>/Switch1' incorporates:
         *  Constant: '<S369>/Constant Value2'
         */
        VeVLDR_Cnt_EEXV_TmpElFlt_FailCnt = 0U;

        /* Switch: '<S370>/Switch1' incorporates:
         *  Constant: '<S370>/Constant Value2'
         */
        VeVLDR_Cnt_EEXV_TmpElFlt_SmpCnt = 0U;
    }
    else
    {
        if (rtb_VM_Conditional_Signal_CPV_l && ((VeVLDR_T_EEXV_TempRawData ==
                HeVLDR_T_EEXV_RefTemp_ShrtLow) || (VeVLDR_T_EEXV_TempRawData ==
                HeVLDR_T_EEXV_RefTemp_ShrtHigh)))
        {
            /* Switch: '<S369>/Switch2' incorporates:
             *  Constant: '<S369>/Constant Value1'
             *  Sum: '<S369>/Subtraction'
             *  Switch: '<S369>/Switch1'
             *  UnitDelay: '<S369>/Unit Delay'
             */
            VeVLDR_Cnt_EEXV_TmpElFlt_FailCnt = (uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_n5f) + 1U);
        }
        else
        {
            /* Switch: '<S369>/Switch1' incorporates:
             *  Switch: '<S369>/Switch2'
             *  UnitDelay: '<S369>/Unit Delay'
             */
            VeVLDR_Cnt_EEXV_TmpElFlt_FailCnt = VLDR_ac_DW.UnitDelay_DSTATE_n5f;
        }

        /* Switch: '<S370>/Switch2' */
        if (rtb_VM_Conditional_Signal_CPV_l)
        {
            /* Switch: '<S370>/Switch1' incorporates:
             *  Constant: '<S370>/Constant Value1'
             *  Sum: '<S370>/Subtraction'
             *  Switch: '<S370>/Switch2'
             *  UnitDelay: '<S370>/Unit Delay'
             */
            VeVLDR_Cnt_EEXV_TmpElFlt_SmpCnt = (uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_auu) + 1U);
        }
        else
        {
            /* Switch: '<S370>/Switch1' incorporates:
             *  Switch: '<S370>/Switch2'
             *  UnitDelay: '<S370>/Unit Delay'
             */
            VeVLDR_Cnt_EEXV_TmpElFlt_SmpCnt = VLDR_ac_DW.UnitDelay_DSTATE_auu;
        }

        /* End of Switch: '<S370>/Switch2' */
    }

    /* End of Switch: '<S369>/Switch1' */
    /* End of Outputs for SubSystem: '<S362>/Counter Reset  Enabled 1' */

    /* Update for UnitDelay: '<S369>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_n5f = VeVLDR_Cnt_EEXV_TmpElFlt_FailCnt;

    /* End of Outputs for SubSystem: '<S362>/Counter Reset  Enabled ' */

    /* Outputs for Atomic SubSystem: '<S362>/Counter Reset  Enabled 1' */
    /* Update for UnitDelay: '<S370>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_auu = VeVLDR_Cnt_EEXV_TmpElFlt_SmpCnt;

    /* End of Outputs for SubSystem: '<S362>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S362>/Greater Than or Equal ' incorporates:
     *  Constant: '<S357>/KeVLDR_Cnt_EEXV_TempElctrFlt_FailCnt'
     */
    rtb_VM_Conditional_Signal_CPV_l = (VeVLDR_Cnt_EEXV_TmpElFlt_FailCnt >=
        KeVLDR_Cnt_EEXV_TempElctrFlt_FailCnt);

    /* Logic: '<S362>/NOT5' incorporates:
     *  Constant: '<S358>/KeVLDR_Cnt_EEXV_TempElctrFlt_SmpCnt'
     *  Logic: '<S362>/NOT3'
     *  RelationalOperator: '<S362>/Less Than  or Equal'
     */
    rtb_VariantMerge_For_Variant_So = ((VeVLDR_Cnt_EEXV_TmpElFlt_SmpCnt >=
        KeVLDR_Cnt_EEXV_TempElctrFlt_SmpCnt) &&
        (!rtb_VM_Conditional_Signal_CPV_l));

    /* Switch: '<S375>/Switch1' incorporates:
     *  Constant: '<S368>/Constant Value'
     *  DataStoreWrite: '<S354>/Data Store Write'
     *  Switch: '<S374>/Switch1'
     */
    if (rtb_VM_Conditional_Signal_PostC)
    {
        VLDR_ac_DW.NeVLDR_Cnt_EEXV_TempElctrFlt_MF = 0U;
    }
    else
    {
        if (rtb_VariantMerge_For_Variant_So)
        {
            /* MinMax: '<S368>/Minimum2' incorporates:
             *  DataStoreRead: '<S354>/Data Store Read'
             *  Switch: '<S374>/Switch1'
             */
            if (VeVLDR_Cnt_EEXV_TmpElFlt_FailCnt >
                    VLDR_ac_DW.NeVLDR_Cnt_EEXV_TempElctrFlt_MF)
            {
                /* DataStoreWrite: '<S354>/Data Store Write' incorporates:
                 *  Switch: '<S374>/Switch1'
                 */
                VLDR_ac_DW.NeVLDR_Cnt_EEXV_TempElctrFlt_MF =
                    VeVLDR_Cnt_EEXV_TmpElFlt_FailCnt;
            }

            /* End of MinMax: '<S368>/Minimum2' */
        }
    }

    /* End of Switch: '<S375>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S361>/Fail' */
    VLDR_ac_Fail(rtb_VM_Conditional_Signal_CPV_l,
                 &VLDR_ac_B.VariantMergeForOutportVeVLDR_i2);

    /* End of Outputs for SubSystem: '<S361>/Fail' */

    /* Outputs for Enabled SubSystem: '<S361>/Init' */
    VLDR_ac_Init_a(rtb_TmpSignalConversionAtVeT_a4,
                   &VLDR_ac_B.VariantMergeForOutportVeVLDR_i2);

    /* End of Outputs for SubSystem: '<S361>/Init' */

    /* Outputs for Enabled SubSystem: '<S361>/Pass' */
    VLDR_ac_Pass(rtb_VariantMerge_For_Variant_So,
                 &VLDR_ac_B.VariantMergeForOutportVeVLDR_i2);

    /* End of Outputs for SubSystem: '<S361>/Pass' */

    /* VariantMerge generated from: '<S161>/EEXV_TempElctrFlt_FltDtct' incorporates:
     *  Constant: '<S364>/Constant'
     *  RelationalOperator: '<S361>/Relational Operator'
     *  VariantMerge generated from: '<S161>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrCCkt'
     */
    VLDR_ac_B.VariantMergeForOutportEEXV_Temp = (((uint32)
        VLDR_ac_B.VariantMergeForOutportVeVLDR_i2) == CeDFIB_e_Fail);

    /* Update for UnitDelay: '<S180>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_gy = rtb_VM_Conditional_Signal_CPV_f;

    /* Update for UnitDelay: '<S180>/Unit Delay1' */
    VLDR_ac_DW.UnitDelay1_DSTATE_i = rtb_VM_Conditional_Signal_CPV_D;

    /* Update for UnitDelay: '<S229>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_da = rtb_VM_Conditional_Signal_CPV_m;

    /* Update for UnitDelay: '<S229>/Unit Delay1' */
    VLDR_ac_DW.UnitDelay1_DSTATE_ox = rtb_VM_Conditional_Signal_CPV_n;

    /* Update for UnitDelay: '<S286>/Unit Delay1' */
    VLDR_ac_DW.UnitDelay1_DSTATE_c = rtb_Switch1_o0;

    /* Update for UnitDelay: '<S286>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_lp = rtb_TmpSignalConversionAtVeT_dk;

    /* Update for UnitDelay: '<S343>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_lh = rtb_TmpSignalConversionAtVeT_dd;

    /* Update for UnitDelay: '<S264>/Unit Delay1' */
    VLDR_ac_DW.UnitDelay1_DSTATE_gt = rtb_VM_Conditional_Signal_CPV_d;

    /* Update for UnitDelay: '<S264>/Unit Delay3' */
    VLDR_ac_DW.UnitDelay3_DSTATE_k = rtb_VM_Conditional_Signal_Logic;

    /* Update for UnitDelay: '<S266>/Unit Delay1' */
    VLDR_ac_DW.UnitDelay1_DSTATE_hm = VeVLDR_p_EEXV_PressLatch;

    /* Update for UnitDelay: '<S272>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_me = rtb_VM_Conditional_Signal_CP_cz;

    /* Update for UnitDelay: '<S272>/Unit Delay1' */
    VLDR_ac_DW.UnitDelay1_DSTATE_el = rtb_Logical41_a;

    /* Update for UnitDelay: '<S362>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_f5q = rtb_VariantMerge_For_Variant_So;

    /* Update for UnitDelay: '<S362>/Unit Delay1' */
    VLDR_ac_DW.UnitDelay1_DSTATE_ml = rtb_VM_Conditional_Signal_CPV_l;

    /* End of Outputs for SubSystem: '<S161>/Diag_Enable' */
#else

    /* Outputs for Atomic SubSystem: '<S161>/Default_Diag' */
    /* VariantMerge generated from: '<S161>/EEXV_PressElctrFlt_FltDtct' incorporates:
     *  Constant: '<S162>/FALSE Constant'
     */
    VLDR_ac_B.VariantMergeForOutportEEXV_Pres = false;

    /* VariantMerge generated from: '<S161>/EEXV_TempElctrFlt_FltDtct' incorporates:
     *  Constant: '<S162>/FALSE Constant1'
     */
    VLDR_ac_B.VariantMergeForOutportEEXV_Temp = false;

    /* VariantMerge generated from: '<S161>/EEXV_PerfDiag_FltDtct' incorporates:
     *  Constant: '<S162>/FALSE Constant2'
     */
    VLDR_ac_B.VariantMergeForOutportEEXV_Perf = false;

    /* VariantMerge generated from: '<S161>/EEXV_PressSens_FltDtct' incorporates:
     *  Constant: '<S162>/FALSE Constant3'
     */
    VLDR_ac_B.VariantMergeForOutportEEXV_Pr_k = false;

    /* VariantMerge generated from: '<S161>/EEXV_PressShrtHigh' incorporates:
     *  Constant: '<S162>/FALSE Constant4'
     */
    VLDR_ac_B.VariantMergeForOutportEEXV_Pr_a = false;

    /* VariantMerge generated from: '<S161>/DFIR_EEXV_PerfDiag' incorporates:
     *  Constant: '<S162>/FALSE Constant5'
     */
    rtb_VariantMergeForOutportDFI_o = false;

    /* VariantMerge generated from: '<S161>/DFIR_EEXV_PressSensSNA' incorporates:
     *  Constant: '<S162>/FALSE Constant6'
     */
    rtb_Logical12_f3 = false;

    /* VariantMerge generated from: '<S161>/DFIR_EEXV_PressSens' incorporates:
     *  Constant: '<S162>/FALSE Constant7'
     */
    rtb_Comparison4_i = false;

    /* VariantMerge generated from: '<S161>/VeVLDR_e_FaultSts_AC_RefrigPresSnsrCCkt' incorporates:
     *  Constant: '<S164>/Constant'
     */
    VLDR_ac_B.VariantMergeForOutportVeVLDR__j = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S161>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrCCkt' incorporates:
     *  Constant: '<S165>/Constant'
     */
    VLDR_ac_B.VariantMergeForOutportVeVLDR_i2 = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S161>/VeVLDR_e_FaultSts_AC_RefrigExpVlvAct_C_CntrlCktPerf' incorporates:
     *  Constant: '<S166>/Constant'
     */
    VLDR_ac_B.VariantMergeForOutportVeVLDR_lh = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S161>/VeVLDR_e_FaultSts_AC_RefrigPresSnsrCCktPerf' incorporates:
     *  Constant: '<S167>/Constant'
     */
    VLDR_ac_B.VariantMergeForOutportVeVLDR_gf = CeDFIB_e_Init;

    /* End of Outputs for SubSystem: '<S161>/Default_Diag' */
#endif

    /* End of Outputs for SubSystem: '<S11>/EEXV' */

    /* Outputs for Atomic SubSystem: '<S12>/EXV' */
#if Rte_SysCon_Variant_VLDR_4

    /* Outputs for Atomic SubSystem: '<S392>/EXV_Active_Diag' */

    /* MultiPortSwitch: '<S393>/Multiport Switch' incorporates:
     *  Constant: '<S401>/Calib'
     */
    switch (HeVLDR_i_EXV_LINBusOffDTC_Slct)
    {
      case 0:
        /* MultiPortSwitch: '<S393>/Multiport Switch' incorporates:
         *  Constant: '<S402>/Constant1'
         *  Constant: '<S402>/Constant2'
         *  DataStoreRead: '<S402>/StatusByte_LIN1_BusOff'
         *  Logic: '<S402>/Logical Operator'
         *  RelationalOperator: '<S402>/Relational Operator1'
         *  RelationalOperator: '<S402>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S402>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S402>/Bitwise Operator2'
         */
        rtb_TmpSignalConversionAtVeT_a4 = (((((sint32)
            VLDR_ac_DW.StatusByte_LIN1_BusOff) & 1) > 0) && ((((uint32)
            VLDR_ac_DW.StatusByte_LIN1_BusOff) & 64U) == 0U));
        break;

      case 1:
        /* MultiPortSwitch: '<S393>/Multiport Switch' incorporates:
         *  Constant: '<S403>/Constant1'
         *  Constant: '<S403>/Constant2'
         *  DataStoreRead: '<S403>/StatusByte_LIN2_BusOff'
         *  Logic: '<S403>/Logical Operator'
         *  RelationalOperator: '<S403>/Relational Operator1'
         *  RelationalOperator: '<S403>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S403>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S403>/Bitwise Operator2'
         */
        rtb_TmpSignalConversionAtVeT_a4 = (((((sint32)
            VLDR_ac_DW.StatusByte_LIN2_BusOff) & 1) > 0) && ((((uint32)
            VLDR_ac_DW.StatusByte_LIN2_BusOff) & 64U) == 0U));
        break;

      case 2:
        /* MultiPortSwitch: '<S393>/Multiport Switch' incorporates:
         *  Constant: '<S404>/Constant1'
         *  Constant: '<S404>/Constant2'
         *  DataStoreRead: '<S404>/StatusByte_LIN3_BusOff'
         *  Logic: '<S404>/Logical Operator'
         *  RelationalOperator: '<S404>/Relational Operator1'
         *  RelationalOperator: '<S404>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S404>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S404>/Bitwise Operator2'
         */
        rtb_TmpSignalConversionAtVeT_a4 = (((((sint32)
            VLDR_ac_DW.StatusByte_LIN3_BusOff) & 1) > 0) && ((((uint32)
            VLDR_ac_DW.StatusByte_LIN3_BusOff) & 64U) == 0U));
        break;

      default:
        /* MultiPortSwitch: '<S393>/Multiport Switch' incorporates:
         *  Constant: '<S393>/Constant'
         */
        rtb_TmpSignalConversionAtVeT_a4 = false;
        break;
    }

    /* End of MultiPortSwitch: '<S393>/Multiport Switch' */

    /* S-Function (sfix_bitop): '<S430>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S430>/StatusByte_ThrmlRlyCtrlCkt'
     *  S-Function (sfix_bitop): '<S477>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S542>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S618>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S669>/Bitwise Operator2'
     */
    rtb_VariantMergeForOutportDFI_0 = ((sint32)
        VLDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 1;

    /* S-Function (sfix_bitop): '<S430>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S430>/StatusByte_ThrmlRlyCtrlCkt'
     *  S-Function (sfix_bitop): '<S477>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S542>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S618>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S669>/Bitwise Operator1'
     */
    rtb_UnitDelay_ly_tmp = ((uint32)VLDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 64U;

    /* Logic: '<S406>/Logical2' incorporates:
     *  Constant: '<S439>/Calib'
     *  Logic: '<S406>/Logical3'
     *  Logic: '<S452>/Logical2'
     *  Logic: '<S494>/Logical2'
     *  Logic: '<S594>/Logical2'
     *  Logic: '<S631>/Logical2'
     */
    rtb_TmpSignalConversionAtVeT_a4 = ((!rtb_TmpSignalConversionAtVeT_a4) ||
        (KeVLDR_b_EXV_PressElctrDiag_LINBusOff_Ovrd));

    /* S-Function (sfix_bitop): '<S429>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S429>/StatusByte_LostCommACRefrigExpVlvActA'
     *  S-Function (sfix_bitop): '<S476>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S540>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S617>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S668>/Bitwise Operator2'
     */
    rtb_VariantMergeForOutportDFI_1 = ((sint32)
        VLDR_ac_DW.StatusByte_LostCommACRefrigExpV) & 1;

    /* S-Function (sfix_bitop): '<S429>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S429>/StatusByte_LostCommACRefrigExpVlvActA'
     *  S-Function (sfix_bitop): '<S476>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S540>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S617>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S668>/Bitwise Operator1'
     */
    rtb_VariantMergeForOutportDFI_2 = ((uint32)
        VLDR_ac_DW.StatusByte_LostCommACRefrigExpV) & 64U;

    /* VariantMerge generated from: '<S392>/DFIR_EXV_PerfDiag' incorporates:
     *  Constant: '<S429>/Constant1'
     *  Constant: '<S429>/Constant2'
     *  Constant: '<S430>/Constant1'
     *  Constant: '<S430>/Constant2'
     *  Constant: '<S437>/KeVLDR_b_EXV_PerfDiag_LOC_Ovrd'
     *  Constant: '<S438>/KeVLDR_b_EXV_PerfDiag_ThrmlRlyErr_Ovrd'
     *  Logic: '<S406>/Logical18'
     *  Logic: '<S406>/Logical2'
     *  Logic: '<S406>/Logical21'
     *  Logic: '<S406>/Logical4'
     *  Logic: '<S406>/Logical5'
     *  Logic: '<S406>/Logical9'
     *  Logic: '<S429>/Logical Operator'
     *  Logic: '<S430>/Logical Operator'
     *  RelationalOperator: '<S429>/Relational Operator1'
     *  RelationalOperator: '<S429>/Relational Operator2'
     *  RelationalOperator: '<S430>/Relational Operator1'
     *  RelationalOperator: '<S430>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S429>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S429>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S430>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S430>/Bitwise Operator2'
     */
    rtb_VariantMergeForOutportDF_ko = (((((rtb_VariantMergeForOutportDFI_0 <= 0)
        || (rtb_UnitDelay_ly_tmp != 0U)) ||
        (KeVLDR_b_EXV_PerfDiag_ThrmlRlyErr_Ovrd)) &&
        rtb_TmpSignalConversionAtVeT_a4) && (((rtb_VariantMergeForOutportDFI_1 <=
        0) || (rtb_VariantMergeForOutportDFI_2 != 0U)) ||
        (KeVLDR_b_EXV_PerfDiag_LOC_Ovrd)));

    /* RelationalOperator: '<S406>/Comparison4' incorporates:
     *  Constant: '<S428>/Constant'
     *  SignalConversion generated from: '<S1>/VeTAIR_e_EXV_CalStat'
     */
    rtb_Logical41_a = (((uint32)rtb_TmpSignalConversionAtVeTA_c) !=
                       CeTAIR_e_EXV_Calibration_Complete);

    /* Outputs for Atomic SubSystem: '<S406>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S442>/EdgeRising' */
    /* Logic: '<S444>/AND' incorporates:
     *  Logic: '<S444>/OR1'
     *  UnitDelay: '<S444>/Unit Delay'
     */
    rtb_VM_Conditional_Signal_CPV_D = (rtb_Logical41_a &&
        (!VLDR_ac_DW.UnitDelay_DSTATE_kkq));

    /* Update for UnitDelay: '<S444>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_kkq = rtb_Logical41_a;

    /* End of Outputs for SubSystem: '<S442>/EdgeRising' */

    /* Switch: '<S442>/Switch1' incorporates:
     *  Constant: '<S432>/KeVLDR_Cnt_EXV_Max_Referencing_Time'
     *  Constant: '<S442>/Constant Value'
     *  Logic: '<S442>/OR'
     *  Logic: '<S442>/OR1'
     *  MinMax: '<S442>/Minimum'
     *  Sum: '<S442>/Summation'
     *  UnitDelay: '<S442>/Unit Delay'
     */
    if ((!rtb_Logical41_a) || rtb_VM_Conditional_Signal_CPV_D)
    {
        /* Switch: '<S442>/Switch1' incorporates:
         *  Constant: '<S442>/Constant Value1'
         */
        rtb_Switch1_dj = 0U;
    }
    else if (KeVLDR_Cnt_EXV_Max_Referencing_Time < ((uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_iv) + 1U)))
    {
        /* MinMax: '<S442>/Minimum' incorporates:
         *  Constant: '<S432>/KeVLDR_Cnt_EXV_Max_Referencing_Time'
         *  Switch: '<S442>/Switch1'
         */
        rtb_Switch1_dj = KeVLDR_Cnt_EXV_Max_Referencing_Time;
    }
    else
    {
        /* Switch: '<S442>/Switch1' incorporates:
         *  Constant: '<S442>/Constant Value'
         *  MinMax: '<S442>/Minimum'
         *  Sum: '<S442>/Summation'
         *  UnitDelay: '<S442>/Unit Delay'
         */
        rtb_Switch1_dj = (uint16)(((uint32)VLDR_ac_DW.UnitDelay_DSTATE_iv) + 1U);
    }

    /* End of Switch: '<S442>/Switch1' */
    /* End of Outputs for SubSystem: '<S406>/Turn On Delay Sample' */

    /* Inport: '<Root>/VeTAIR_b_EXV_PosAct_FA' */
    (void)Rte_Read_VeTAIR_b_EXV_PosAct_FA_Value(&rtb_Logical12_c5);

    /* Outputs for Atomic SubSystem: '<S406>/Turn On Delay Sample' */
    /* Update for UnitDelay: '<S442>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_iv = rtb_Switch1_dj;

    /* Logic: '<S400>/NOT4' incorporates:
     *  Constant: '<S426>/Constant'
     *  Constant: '<S427>/Constant'
     *  Constant: '<S432>/KeVLDR_Cnt_EXV_Max_Referencing_Time'
     *  Constant: '<S435>/KeVLDR_U_SysVltLwrLim'
     *  Constant: '<S436>/KeVLDR_U_SysVltUprLim'
     *  Logic: '<S406>/Logical10'
     *  Logic: '<S406>/Logical6'
     *  Logic: '<S406>/Logical8'
     *  Logic: '<S442>/AND'
     *  RelationalOperator: '<S406>/Comparison2'
     *  RelationalOperator: '<S406>/Comparison4'
     *  RelationalOperator: '<S406>/Comparison5'
     *  RelationalOperator: '<S406>/Comparison6'
     *  RelationalOperator: '<S406>/Comparison8'
     *  RelationalOperator: '<S442>/Greater  Than'
     *  SignalConversion generated from: '<S1>/VeTAIR_e_EXV_CalStat'
     */
    rtb_Logical41_a = ((((((rtb_VM_Conditional_Signal_BF1_S <
                            KeVLDR_U_SysVltUprLim) &&
                           (rtb_VM_Conditional_Signal_BF1_S >
                            KeVLDR_U_SysVltLwrLim)) &&
                          rtb_TmpSignalConversionAtVeDFIR) && (((uint32)
                           rtb_TmpSignalConversionAtVePMTR) !=
                          CePMTR_e_DISBL_All_Thrml)) &&
                        rtb_VariantMergeForOutportDF_ko) && ((((uint32)
                          rtb_TmpSignalConversionAtVeTA_c) ==
                         CeTAIR_e_EXV_Calibration_Complete) || (rtb_Logical41_a &&
                         (rtb_Switch1_dj >= KeVLDR_Cnt_EXV_Max_Referencing_Time))));

    /* End of Outputs for SubSystem: '<S406>/Turn On Delay Sample' */

    /* Logic: '<S406>/Logical12' */
    rtb_Logical12_c5 = (rtb_Logical41_a && rtb_Logical12_c5);

    /* Outputs for Atomic SubSystem: '<S406>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S443>/EdgeRising' */
    /* Logic: '<S445>/AND' incorporates:
     *  Logic: '<S445>/OR1'
     *  UnitDelay: '<S445>/Unit Delay'
     */
    rtb_VM_Conditional_Signal_CPV_D = (rtb_Logical12_c5 &&
        (!VLDR_ac_DW.UnitDelay_DSTATE_bz));

    /* Update for UnitDelay: '<S445>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_bz = rtb_Logical12_c5;

    /* End of Outputs for SubSystem: '<S443>/EdgeRising' */

    /* Switch: '<S443>/Switch1' incorporates:
     *  Logic: '<S443>/OR'
     *  Logic: '<S443>/OR1'
     */
    if ((!rtb_Logical12_c5) || rtb_VM_Conditional_Signal_CPV_D)
    {
        /* Switch: '<S443>/Switch1' incorporates:
         *  Constant: '<S443>/Constant Value1'
         */
        rtb_TmpSignalConversionAtVeT_ld = 0.0F;
    }
    else
    {
        /* Switch: '<S443>/Switch1' incorporates:
         *  Constant: '<S431>/Calib'
         *  Constant: '<S440>/KeVLDR_t_EXV_FA_WaitTime'
         *  MinMax: '<S443>/Minimum'
         *  Sum: '<S443>/Summation'
         *  UnitDelay: '<S443>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeT_ld = fminf(KeVLDR_t_EXV_FA_WaitTime,
            HeVLDR_t_MedTED + VLDR_ac_DW.UnitDelay_DSTATE_a3);
    }

    /* End of Switch: '<S443>/Switch1' */
    /* End of Outputs for SubSystem: '<S406>/Turn On Delay Time' */

    /* Inport: '<Root>/VeTAIR_Pct_EXV_PosAct' */
    (void)Rte_Read_VeTAIR_Pct_EXV_PosAct_Value(&rtb_Switch1_e4v);

    /* Outputs for Atomic SubSystem: '<S406>/Turn On Delay Time' */
    /* Logic: '<S443>/AND' incorporates:
     *  Constant: '<S440>/KeVLDR_t_EXV_FA_WaitTime'
     *  RelationalOperator: '<S443>/Greater  Than'
     */
    rtb_Logical12_c5 = (rtb_Logical12_c5 && (rtb_TmpSignalConversionAtVeT_ld >=
                         KeVLDR_t_EXV_FA_WaitTime));

    /* Update for UnitDelay: '<S443>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_a3 = rtb_TmpSignalConversionAtVeT_ld;

    /* End of Outputs for SubSystem: '<S406>/Turn On Delay Time' */

    /* Logic: '<S406>/Logical7' incorporates:
     *  Constant: '<S433>/KeVLDR_Pct_EXV_Max_PosRq'
     *  Constant: '<S434>/KeVLDR_Pct_EXV_Min_PosRq'
     *  Constant: '<S441>/Calib'
     *  Logic: '<S406>/Logical1'
     *  Logic: '<S406>/Logical11'
     *  Logic: '<S406>/Logical13'
     *  RelationalOperator: '<S406>/Comparison1'
     *  RelationalOperator: '<S406>/Comparison3'
     */
    VeVLDR_b_EXV_PerfDiag_En = ((((rtb_TmpSignalConversionAtVeRC_i <
        KeVLDR_Pct_EXV_Max_PosRq) && (rtb_TmpSignalConversionAtVeRC_i >
        KeVLDR_Pct_EXV_Min_PosRq)) && rtb_Logical41_a) ||
        ((KeVLDR_b_EXV_PerfDiagPerfCndsOV_En) && rtb_Logical12_c5));

    /* S-Function (sfix_bitop): '<S411>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S405>/Data Store Read2'
     *  S-Function (sfix_bitop): '<S527>/Bitwise Operator1'
     */
    rtb_VariantMergeForOutportDFI_4 = ((uint32)
        VLDR_ac_DW.StatusByte_AC_RefrigExpVlvActCt) & 64U;

    /* RelationalOperator: '<S411>/Relational Operator3' incorporates:
     *  Constant: '<S411>/Constant3'
     *  S-Function (sfix_bitop): '<S411>/Bitwise Operator2'
     */
    rtb_VM_Conditional_Signal_CPV_n = (rtb_VariantMergeForOutportDFI_4 == 0U);

    /* Logic: '<S411>/Logical1' incorporates:
     *  Constant: '<S410>/Calib'
     *  Constant: '<S411>/Constant1'
     *  DataStoreRead: '<S405>/Data Store Read2'
     *  Logic: '<S411>/Logical Operator'
     *  Logic: '<S411>/Logical10'
     *  Logic: '<S411>/Logical12'
     *  RelationalOperator: '<S411>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S411>/Bitwise Operator3'
     */
    rtb_VM_Conditional_Signal_CPV_D = ((VeVLDR_b_EXV_PerfDiag_En) &&
        ((!KeVLDR_b_AC_RefrigExpVlvActCtrCktPerf_LtchEnbl) || (((((uint32)
        VLDR_ac_DW.StatusByte_AC_RefrigExpVlvActCt) & 1U) == 0U) ||
        (!rtb_VM_Conditional_Signal_CPV_n))));

    /* Sum: '<S407>/Sum1' */
    VeVLDR_Pct_EXV_PerfDiag_PstnDiff = rtb_Switch1_e4v -
        rtb_TmpSignalConversionAtVeRC_i;

    /* RelationalOperator: '<S407>/Comparison1' incorporates:
     *  Abs: '<S407>/Abs'
     *  Constant: '<S447>/KeVLDR_Pct_EXV_PerfDiag_PstnDiffMax'
     */
    rtb_VM_Conditional_Signal_CPV_f = (fabsf(VeVLDR_Pct_EXV_PerfDiag_PstnDiff) >=
        KeVLDR_Pct_EXV_PerfDiag_PstnDiffMax);

    /* Outputs for Atomic SubSystem: '<S407>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S449>/EdgeRising' */
    /* Logic: '<S450>/AND' incorporates:
     *  Logic: '<S450>/OR1'
     *  UnitDelay: '<S450>/Unit Delay'
     */
    rtb_Logical41_a = (rtb_VM_Conditional_Signal_CPV_f &&
                       (!VLDR_ac_DW.UnitDelay_DSTATE_orw));

    /* Update for UnitDelay: '<S450>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_orw = rtb_VM_Conditional_Signal_CPV_f;

    /* End of Outputs for SubSystem: '<S449>/EdgeRising' */

    /* Switch: '<S449>/Switch1' incorporates:
     *  Constant: '<S446>/KeVLDR_Cnt_EXV_Position_Wait_Time'
     *  Constant: '<S449>/Constant Value'
     *  Logic: '<S449>/OR'
     *  Logic: '<S449>/OR1'
     *  MinMax: '<S449>/Minimum'
     *  Sum: '<S449>/Summation'
     *  UnitDelay: '<S449>/Unit Delay'
     */
    if ((!rtb_VM_Conditional_Signal_CPV_f) || rtb_Logical41_a)
    {
        /* Switch: '<S449>/Switch1' incorporates:
         *  Constant: '<S449>/Constant Value1'
         */
        rtb_Switch1_dj = 0U;
    }
    else if (KeVLDR_Cnt_EXV_Position_Wait_Time < ((uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_lr) + 1U)))
    {
        /* MinMax: '<S449>/Minimum' incorporates:
         *  Constant: '<S446>/KeVLDR_Cnt_EXV_Position_Wait_Time'
         *  Switch: '<S449>/Switch1'
         */
        rtb_Switch1_dj = KeVLDR_Cnt_EXV_Position_Wait_Time;
    }
    else
    {
        /* Switch: '<S449>/Switch1' incorporates:
         *  Constant: '<S449>/Constant Value'
         *  MinMax: '<S449>/Minimum'
         *  Sum: '<S449>/Summation'
         *  UnitDelay: '<S449>/Unit Delay'
         */
        rtb_Switch1_dj = (uint16)(((uint32)VLDR_ac_DW.UnitDelay_DSTATE_lr) + 1U);
    }

    /* End of Switch: '<S449>/Switch1' */

    /* Update for UnitDelay: '<S449>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_lr = rtb_Switch1_dj;

    /* End of Outputs for SubSystem: '<S407>/Turn On Delay Sample' */

    /* Logic: '<S400>/NOT4' */
    rtb_Logical41_a = (rtb_VM_Conditional_Signal_DsblD ||
                       rtb_VM_Conditional_Signal_PostC);

    /* Outputs for Atomic SubSystem: '<S411>/EdgeFalling1' */
    /* Logic: '<S413>/AND' incorporates:
     *  Logic: '<S413>/OR1'
     *  UnitDelay: '<S413>/Unit Delay'
     */
    rtb_VM_Conditional_Signal_CPV_m = ((!rtb_VM_Conditional_Signal_CPV_n) &&
        (VLDR_ac_DW.UnitDelay_DSTATE_ga));

    /* Update for UnitDelay: '<S413>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_ga = rtb_VM_Conditional_Signal_CPV_n;

    /* End of Outputs for SubSystem: '<S411>/EdgeFalling1' */

    /* Logic: '<S411>/Logical5' */
    rtb_VM_Conditional_Signal_CPV_n = (rtb_Logical41_a ||
        rtb_VM_Conditional_Signal_CPV_m);

    /* Logic: '<S412>/Fail Counter Reset' incorporates:
     *  UnitDelay: '<S412>/Unit Delay'
     *  UnitDelay: '<S412>/Unit Delay1'
     */
    rtb_VM_Conditional_Signal_CPV_m = ((rtb_VM_Conditional_Signal_CPV_n ||
        (VLDR_ac_DW.UnitDelay_DSTATE_n12)) || (VLDR_ac_DW.UnitDelay1_DSTATE_kg));

    /* Outputs for Atomic SubSystem: '<S412>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S412>/Counter Reset  Enabled ' */
    /* Switch: '<S419>/Switch1' incorporates:
     *  Constant: '<S446>/KeVLDR_Cnt_EXV_Position_Wait_Time'
     *  Constant: '<S448>/KeVLDR_b_EXV_PosActFA_Enbl'
     *  Logic: '<S407>/Logical1'
     *  Logic: '<S407>/Logical18'
     *  Logic: '<S412>/NOT6'
     *  Logic: '<S449>/AND'
     *  RelationalOperator: '<S449>/Greater  Than'
     *  Switch: '<S419>/Switch2'
     *  Switch: '<S420>/Switch1'
     */
    if (rtb_VM_Conditional_Signal_CPV_m)
    {
        /* Switch: '<S419>/Switch1' incorporates:
         *  Constant: '<S419>/Constant Value2'
         */
        VeVLDR_Cnt_EXV_PerfDiag_FailCnt = 0U;

        /* Switch: '<S420>/Switch1' incorporates:
         *  Constant: '<S420>/Constant Value2'
         */
        VeVLDR_Cnt_EXV_PerfDiag_SmpCnt = 0U;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S407>/Turn On Delay Sample' */
        if (rtb_VM_Conditional_Signal_CPV_D && ((rtb_VM_Conditional_Signal_CPV_f
              && (rtb_Switch1_dj >= KeVLDR_Cnt_EXV_Position_Wait_Time)) ||
                (rtb_Logical12_c5 && (KeVLDR_b_EXV_PosActFA_Enbl))))
        {
            /* Switch: '<S419>/Switch2' incorporates:
             *  Constant: '<S419>/Constant Value1'
             *  Sum: '<S419>/Subtraction'
             *  Switch: '<S419>/Switch1'
             *  UnitDelay: '<S419>/Unit Delay'
             */
            VeVLDR_Cnt_EXV_PerfDiag_FailCnt = (uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_npv) + 1U);
        }
        else
        {
            /* Switch: '<S419>/Switch1' incorporates:
             *  Switch: '<S419>/Switch2'
             *  UnitDelay: '<S419>/Unit Delay'
             */
            VeVLDR_Cnt_EXV_PerfDiag_FailCnt = VLDR_ac_DW.UnitDelay_DSTATE_npv;
        }

        /* End of Outputs for SubSystem: '<S407>/Turn On Delay Sample' */

        /* Switch: '<S420>/Switch2' */
        if (rtb_VM_Conditional_Signal_CPV_D)
        {
            /* Switch: '<S420>/Switch1' incorporates:
             *  Constant: '<S420>/Constant Value1'
             *  Sum: '<S420>/Subtraction'
             *  Switch: '<S420>/Switch2'
             *  UnitDelay: '<S420>/Unit Delay'
             */
            VeVLDR_Cnt_EXV_PerfDiag_SmpCnt = (uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_en) + 1U);
        }
        else
        {
            /* Switch: '<S420>/Switch1' incorporates:
             *  Switch: '<S420>/Switch2'
             *  UnitDelay: '<S420>/Unit Delay'
             */
            VeVLDR_Cnt_EXV_PerfDiag_SmpCnt = VLDR_ac_DW.UnitDelay_DSTATE_en;
        }

        /* End of Switch: '<S420>/Switch2' */
    }

    /* End of Switch: '<S419>/Switch1' */
    /* End of Outputs for SubSystem: '<S412>/Counter Reset  Enabled 1' */

    /* Update for UnitDelay: '<S419>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_npv = VeVLDR_Cnt_EXV_PerfDiag_FailCnt;

    /* End of Outputs for SubSystem: '<S412>/Counter Reset  Enabled ' */

    /* Outputs for Atomic SubSystem: '<S412>/Counter Reset  Enabled 1' */
    /* Update for UnitDelay: '<S420>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_en = VeVLDR_Cnt_EXV_PerfDiag_SmpCnt;

    /* End of Outputs for SubSystem: '<S412>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S412>/Greater Than or Equal ' incorporates:
     *  Constant: '<S408>/KeVLDR_Cnt_EXV_PerfDiag_FailCnt'
     */
    rtb_VM_Conditional_Signal_CPV_D = (VeVLDR_Cnt_EXV_PerfDiag_FailCnt >=
        KeVLDR_Cnt_EXV_PerfDiag_FailCnt);

    /* Logic: '<S412>/NOT5' incorporates:
     *  Constant: '<S409>/KeVLDR_Cnt_EXV_PerfDiag_SmpCnt'
     *  Logic: '<S412>/NOT3'
     *  RelationalOperator: '<S412>/Less Than  or Equal'
     */
    rtb_VM_Conditional_Signal_CPV_f = ((VeVLDR_Cnt_EXV_PerfDiag_SmpCnt >=
        KeVLDR_Cnt_EXV_PerfDiag_SmpCnt) && (!rtb_VM_Conditional_Signal_CPV_D));

    /* Switch: '<S425>/Switch1' incorporates:
     *  Constant: '<S418>/Constant Value'
     *  DataStoreWrite: '<S405>/Data Store Write1'
     *  Switch: '<S424>/Switch1'
     */
    if (rtb_VM_Conditional_Signal_PostC)
    {
        VLDR_ac_DW.NeVLDR_Cnt_EXV_PerfDiag_MFOP = 0U;
    }
    else
    {
        if (rtb_VM_Conditional_Signal_CPV_f)
        {
            /* MinMax: '<S418>/Minimum2' incorporates:
             *  DataStoreRead: '<S405>/Data Store Read1'
             *  Switch: '<S424>/Switch1'
             */
            if (VeVLDR_Cnt_EXV_PerfDiag_FailCnt >
                    VLDR_ac_DW.NeVLDR_Cnt_EXV_PerfDiag_MFOP)
            {
                /* DataStoreWrite: '<S405>/Data Store Write1' incorporates:
                 *  Switch: '<S424>/Switch1'
                 */
                VLDR_ac_DW.NeVLDR_Cnt_EXV_PerfDiag_MFOP =
                    VeVLDR_Cnt_EXV_PerfDiag_FailCnt;
            }

            /* End of MinMax: '<S418>/Minimum2' */
        }
    }

    /* End of Switch: '<S425>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S411>/Fail' */
    VLDR_ac_Fail(rtb_VM_Conditional_Signal_CPV_D,
                 &VLDR_ac_B.VariantMergeForOutportVeVLDR_h4);

    /* End of Outputs for SubSystem: '<S411>/Fail' */

    /* Outputs for Enabled SubSystem: '<S411>/Init' */
    VLDR_ac_Init_a(rtb_VM_Conditional_Signal_CPV_n,
                   &VLDR_ac_B.VariantMergeForOutportVeVLDR_h4);

    /* End of Outputs for SubSystem: '<S411>/Init' */

    /* Outputs for Enabled SubSystem: '<S411>/Pass' */
    VLDR_ac_Pass(rtb_VM_Conditional_Signal_CPV_f,
                 &VLDR_ac_B.VariantMergeForOutportVeVLDR_h4);

    /* End of Outputs for SubSystem: '<S411>/Pass' */

    /* VariantMerge generated from: '<S392>/EXV_PerfDiag_FltDtct' incorporates:
     *  Constant: '<S414>/Constant'
     *  RelationalOperator: '<S411>/Relational Operator'
     *  VariantMerge generated from: '<S392>/VeVLDR_e_FaultSts_AC_RefrigExpVlvActCtrCktPerf'
     */
    VLDR_ac_B.VariantMergeForOutportEXV_PerfD = (((uint32)
        VLDR_ac_B.VariantMergeForOutportVeVLDR_h4) == CeDFIB_e_Fail);

    /* RelationalOperator: '<S452>/Comparison2' incorporates:
     *  Constant: '<S486>/KeVLDR_n_EXV_CompSpdThr'
     */
    rtb_Logical12_c5 = (rtb_TmpSignalConversionAtVeT_dk >=
                        KeVLDR_n_EXV_CompSpdThr);

    /* Outputs for Atomic SubSystem: '<S452>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S488>/EdgeRising' */
    /* Logic: '<S489>/AND' incorporates:
     *  Logic: '<S489>/OR1'
     *  UnitDelay: '<S489>/Unit Delay'
     */
    rtb_VM_Conditional_Signal_CPV_n = (rtb_Logical12_c5 &&
        (!VLDR_ac_DW.UnitDelay_DSTATE_djy));

    /* Update for UnitDelay: '<S489>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_djy = rtb_Logical12_c5;

    /* End of Outputs for SubSystem: '<S488>/EdgeRising' */

    /* Switch: '<S488>/Switch1' incorporates:
     *  Logic: '<S488>/OR'
     *  Logic: '<S488>/OR1'
     */
    if ((!rtb_Logical12_c5) || rtb_VM_Conditional_Signal_CPV_n)
    {
        /* Switch: '<S488>/Switch1' incorporates:
         *  Constant: '<S488>/Constant Value1'
         */
        rtb_Switch1_e4v = 0.0F;
    }
    else
    {
        /* Switch: '<S488>/Switch1' incorporates:
         *  Constant: '<S479>/Calib'
         *  Constant: '<S487>/KeVLDR_t_EXV_Comp_Run_Time'
         *  MinMax: '<S488>/Minimum'
         *  Sum: '<S488>/Summation'
         *  UnitDelay: '<S488>/Unit Delay'
         */
        rtb_Switch1_e4v = fminf(KeVLDR_t_EXV_Comp_Run_Time, HeVLDR_t_MedTED +
                                VLDR_ac_DW.UnitDelay_DSTATE_lb);
    }

    /* End of Switch: '<S488>/Switch1' */

    /* Update for UnitDelay: '<S488>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_lb = rtb_Switch1_e4v;

    /* End of Outputs for SubSystem: '<S452>/Turn On Delay Time' */

    /* Rounding: '<S454>/Rounding2' incorporates:
     *  Constant: '<S492>/HeVLDR_K_EXV_RefPress_Gain'
     *  Product: '<S454>/Product'
     */
    VeVLDR_p_EXV_PressRawData = roundf(rtb_TmpSignalConversionAtVeT_d0 *
        HeVLDR_K_EXV_RefPress_Gain);

    /* S-Function (sfix_bitop): '<S475>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S475>/StatusByte_AC_RefrigTempSnsrBPerf'
     *  S-Function (sfix_bitop): '<S501>/Bitwise Operator2'
     */
    rtb_VM_Conditional_Signal_CPV_e = ((uint32)
        VLDR_ac_DW.StatusByte_AC_RefrigTempSnsrBPe) & 64U;

    /* Outputs for Atomic SubSystem: '<S452>/Turn On Delay Time' */
    /* Logic: '<S452>/Logical6' incorporates:
     *  Constant: '<S474>/Constant'
     *  Constant: '<S475>/Constant1'
     *  Constant: '<S475>/Constant2'
     *  Constant: '<S476>/Constant1'
     *  Constant: '<S476>/Constant2'
     *  Constant: '<S477>/Constant1'
     *  Constant: '<S477>/Constant2'
     *  Constant: '<S478>/HeVLDR_p_EXV_RefPress_ShrtHigh'
     *  Constant: '<S480>/KeVLDR_U_SysVltLwrLim'
     *  Constant: '<S481>/KeVLDR_U_SysVltUprLim'
     *  Constant: '<S483>/KeVLDR_b_EXV_PressElctrDiag_LOC_Ovrd'
     *  Constant: '<S484>/KeVLDR_b_EXV_PressElctrDiag_PressSens_Ovrd'
     *  Constant: '<S485>/KeVLDR_b_EXV_PressElctrDiag_ThrmlRlyErr_Ovrd'
     *  Constant: '<S487>/KeVLDR_t_EXV_Comp_Run_Time'
     *  DataStoreRead: '<S475>/StatusByte_AC_RefrigTempSnsrBPerf'
     *  Logic: '<S452>/Logical1'
     *  Logic: '<S452>/Logical18'
     *  Logic: '<S452>/Logical21'
     *  Logic: '<S452>/Logical4'
     *  Logic: '<S452>/Logical5'
     *  Logic: '<S452>/Logical7'
     *  Logic: '<S452>/Logical8'
     *  Logic: '<S452>/Logical9'
     *  Logic: '<S475>/Logical Operator'
     *  Logic: '<S476>/Logical Operator'
     *  Logic: '<S477>/Logical Operator'
     *  Logic: '<S488>/AND'
     *  RelationalOperator: '<S452>/Comparison1'
     *  RelationalOperator: '<S452>/Comparison3'
     *  RelationalOperator: '<S452>/Comparison4'
     *  RelationalOperator: '<S452>/Comparison8'
     *  RelationalOperator: '<S475>/Relational Operator1'
     *  RelationalOperator: '<S475>/Relational Operator2'
     *  RelationalOperator: '<S476>/Relational Operator1'
     *  RelationalOperator: '<S476>/Relational Operator2'
     *  RelationalOperator: '<S477>/Relational Operator1'
     *  RelationalOperator: '<S477>/Relational Operator2'
     *  RelationalOperator: '<S488>/Greater  Than'
     *  S-Function (sfix_bitop): '<S475>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S475>/Bitwise Operator2'
     */
    VeVLDR_b_EXV_PrsElctrFlt_DiagEn = (((((((((rtb_VM_Conditional_Signal_BF1_S <
        KeVLDR_U_SysVltUprLim) && (rtb_VM_Conditional_Signal_BF1_S >
        KeVLDR_U_SysVltLwrLim)) && (((uint32)rtb_TmpSignalConversionAtVePMTR) !=
        CePMTR_e_DISBL_All_Thrml)) && (((rtb_VariantMergeForOutportDFI_0 <= 0) ||
        (rtb_UnitDelay_ly_tmp != 0U)) ||
        (KeVLDR_b_EXV_PressElctrDiag_ThrmlRlyErr_Ovrd))) &&
        rtb_TmpSignalConversionAtVeT_a4) && (((rtb_VariantMergeForOutportDFI_1 <=
        0) || (rtb_VariantMergeForOutportDFI_2 != 0U)) ||
        (KeVLDR_b_EXV_PressElctrDiag_LOC_Ovrd))) && ((((((sint32)
        VLDR_ac_DW.StatusByte_AC_RefrigTempSnsrBPe) & 1) <= 0) ||
        (rtb_VM_Conditional_Signal_CPV_e != 0U)) ||
        (KeVLDR_b_EXV_PressElctrDiag_PressSens_Ovrd))) && ((rtb_Logical12_c5 &&
        (rtb_Switch1_e4v >= KeVLDR_t_EXV_Comp_Run_Time)) ||
        (VeVLDR_p_EXV_PressRawData != HeVLDR_p_EXV_RefPress_ShrtHigh))) &&
        rtb_TmpSignalConversionAtVeDFIR);

    /* End of Outputs for SubSystem: '<S452>/Turn On Delay Time' */

    /* S-Function (sfix_bitop): '<S459>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S451>/Data Store Read1'
     *  S-Function (sfix_bitop): '<S530>/Bitwise Operator1'
     */
    VeVLDR_b_EEXV_PrsElctrFlt_DiagE = ((uint32)
        VLDR_ac_DW.StatusByte_AC_RefrigTempSnsrBCk) & 64U;

    /* RelationalOperator: '<S459>/Relational Operator3' incorporates:
     *  Constant: '<S459>/Constant3'
     *  S-Function (sfix_bitop): '<S459>/Bitwise Operator2'
     */
    rtb_VM_Conditional_Signal_CPV_n = (VeVLDR_b_EEXV_PrsElctrFlt_DiagE == 0U);

    /* Outputs for Atomic SubSystem: '<S459>/EdgeFalling1' */
    /* Logic: '<S459>/Logical Operator' incorporates:
     *  Logic: '<S461>/OR1'
     */
    rtb_VM_Conditional_Signal_CPV_m = !rtb_VM_Conditional_Signal_CPV_n;

    /* End of Outputs for SubSystem: '<S459>/EdgeFalling1' */

    /* Logic: '<S459>/Logical1' incorporates:
     *  Constant: '<S457>/Calib'
     *  Constant: '<S458>/KeVLDR_b_EXV_PressElctrFlt_XYEnbl'
     *  Constant: '<S459>/Constant1'
     *  DataStoreRead: '<S451>/Data Store Read1'
     *  Logic: '<S451>/AND1'
     *  Logic: '<S459>/Logical Operator'
     *  Logic: '<S459>/Logical10'
     *  Logic: '<S459>/Logical12'
     *  RelationalOperator: '<S459>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S459>/Bitwise Operator3'
     */
    rtb_Logical12_c5 = (((VeVLDR_b_EXV_PrsElctrFlt_DiagEn) &&
                         (KeVLDR_b_EXV_PressElctrFlt_XYEnbl)) &&
                        ((!KeVLDR_b_AC_RefrigTempSnsrBCkt_LtchEnbl) ||
                         (((((uint32)VLDR_ac_DW.StatusByte_AC_RefrigTempSnsrBCk)
                            & 1U) == 0U) || rtb_VM_Conditional_Signal_CPV_m)));

    /* VariantMerge generated from: '<S392>/EXV_PressShrtHigh' incorporates:
     *  Constant: '<S490>/HeVLDR_p_EXV_RefPress_ShrtHigh'
     *  RelationalOperator: '<S453>/Comparison1'
     */
    VLDR_ac_B.VariantMergeForOutportEXV_Pre_b = (VeVLDR_p_EXV_PressRawData ==
        HeVLDR_p_EXV_RefPress_ShrtHigh);

    /* Outputs for Atomic SubSystem: '<S459>/EdgeFalling1' */
    /* Logic: '<S461>/AND' incorporates:
     *  UnitDelay: '<S461>/Unit Delay'
     */
    rtb_VM_Conditional_Signal_CPV_m = (rtb_VM_Conditional_Signal_CPV_m &&
        (VLDR_ac_DW.UnitDelay_DSTATE_el3));

    /* Update for UnitDelay: '<S461>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_el3 = rtb_VM_Conditional_Signal_CPV_n;

    /* End of Outputs for SubSystem: '<S459>/EdgeFalling1' */

    /* Logic: '<S459>/Logical5' */
    rtb_VM_Conditional_Signal_CPV_d = (rtb_Logical41_a ||
        rtb_VM_Conditional_Signal_CPV_m);

    /* Logic: '<S460>/Fail Counter Reset' incorporates:
     *  UnitDelay: '<S460>/Unit Delay'
     *  UnitDelay: '<S460>/Unit Delay1'
     */
    rtb_VM_Conditional_Signal_CPV_n = ((rtb_VM_Conditional_Signal_CPV_d ||
        (VLDR_ac_DW.UnitDelay_DSTATE_iu)) || (VLDR_ac_DW.UnitDelay1_DSTATE_fd));

    /* Outputs for Atomic SubSystem: '<S460>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S460>/Counter Reset  Enabled ' */
    /* Switch: '<S467>/Switch1' incorporates:
     *  Constant: '<S491>/HeVLDR_p_EXV_RefPress_ShrtLow'
     *  Logic: '<S453>/Logical18'
     *  Logic: '<S460>/NOT6'
     *  RelationalOperator: '<S453>/Comparison8'
     *  Switch: '<S467>/Switch2'
     *  Switch: '<S468>/Switch1'
     */
    if (rtb_VM_Conditional_Signal_CPV_n)
    {
        /* Switch: '<S467>/Switch1' incorporates:
         *  Constant: '<S467>/Constant Value2'
         */
        VeVLDR_Cnt_EXVPrsElFlt_FailCnt = 0U;

        /* Switch: '<S468>/Switch1' incorporates:
         *  Constant: '<S468>/Constant Value2'
         */
        VeVLDR_Cnt_EXVPrsElFlt_SmpCnt = 0U;
    }
    else
    {
        if (rtb_Logical12_c5 && ((VeVLDR_p_EXV_PressRawData ==
                                  HeVLDR_p_EXV_RefPress_ShrtLow) ||
                                 (VLDR_ac_B.VariantMergeForOutportEXV_Pre_b)))
        {
            /* Switch: '<S467>/Switch2' incorporates:
             *  Constant: '<S467>/Constant Value1'
             *  Sum: '<S467>/Subtraction'
             *  Switch: '<S467>/Switch1'
             *  UnitDelay: '<S467>/Unit Delay'
             */
            VeVLDR_Cnt_EXVPrsElFlt_FailCnt = (uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_fi) + 1U);
        }
        else
        {
            /* Switch: '<S467>/Switch1' incorporates:
             *  Switch: '<S467>/Switch2'
             *  UnitDelay: '<S467>/Unit Delay'
             */
            VeVLDR_Cnt_EXVPrsElFlt_FailCnt = VLDR_ac_DW.UnitDelay_DSTATE_fi;
        }

        /* Switch: '<S468>/Switch2' */
        if (rtb_Logical12_c5)
        {
            /* Switch: '<S468>/Switch1' incorporates:
             *  Constant: '<S468>/Constant Value1'
             *  Sum: '<S468>/Subtraction'
             *  Switch: '<S468>/Switch2'
             *  UnitDelay: '<S468>/Unit Delay'
             */
            VeVLDR_Cnt_EXVPrsElFlt_SmpCnt = (uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_mm) + 1U);
        }
        else
        {
            /* Switch: '<S468>/Switch1' incorporates:
             *  Switch: '<S468>/Switch2'
             *  UnitDelay: '<S468>/Unit Delay'
             */
            VeVLDR_Cnt_EXVPrsElFlt_SmpCnt = VLDR_ac_DW.UnitDelay_DSTATE_mm;
        }

        /* End of Switch: '<S468>/Switch2' */
    }

    /* End of Switch: '<S467>/Switch1' */
    /* End of Outputs for SubSystem: '<S460>/Counter Reset  Enabled 1' */

    /* Update for UnitDelay: '<S467>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_fi = VeVLDR_Cnt_EXVPrsElFlt_FailCnt;

    /* End of Outputs for SubSystem: '<S460>/Counter Reset  Enabled ' */

    /* Outputs for Atomic SubSystem: '<S460>/Counter Reset  Enabled 1' */
    /* Update for UnitDelay: '<S468>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_mm = VeVLDR_Cnt_EXVPrsElFlt_SmpCnt;

    /* End of Outputs for SubSystem: '<S460>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S460>/Greater Than or Equal ' incorporates:
     *  Constant: '<S455>/KeVLDR_Cnt_EXV_PressElctrFlt_FailCnt'
     */
    rtb_VM_Conditional_Signal_CPV_n = (VeVLDR_Cnt_EXVPrsElFlt_FailCnt >=
        KeVLDR_Cnt_EXV_PressElctrFlt_FailCnt);

    /* Logic: '<S460>/NOT5' incorporates:
     *  Constant: '<S456>/KeVLDR_Cnt_EXV_PressElctrFlt_SmpCnt'
     *  Logic: '<S460>/NOT3'
     *  RelationalOperator: '<S460>/Less Than  or Equal'
     */
    rtb_VM_Conditional_Signal_CPV_m = ((VeVLDR_Cnt_EXVPrsElFlt_SmpCnt >=
        KeVLDR_Cnt_EXV_PressElctrFlt_SmpCnt) &&
        (!rtb_VM_Conditional_Signal_CPV_n));

    /* Switch: '<S473>/Switch1' incorporates:
     *  Constant: '<S466>/Constant Value'
     *  DataStoreWrite: '<S451>/Data Store Write1'
     *  Switch: '<S472>/Switch1'
     */
    if (rtb_VM_Conditional_Signal_PostC)
    {
        VLDR_ac_DW.NeVLDR_Cnt_EXV_PressElctrFlt_MF = 0U;
    }
    else
    {
        if (rtb_VM_Conditional_Signal_CPV_m)
        {
            /* MinMax: '<S466>/Minimum2' incorporates:
             *  DataStoreRead: '<S451>/Data Store Read2'
             *  Switch: '<S472>/Switch1'
             */
            if (VeVLDR_Cnt_EXVPrsElFlt_FailCnt >
                    VLDR_ac_DW.NeVLDR_Cnt_EXV_PressElctrFlt_MF)
            {
                /* DataStoreWrite: '<S451>/Data Store Write1' incorporates:
                 *  Switch: '<S472>/Switch1'
                 */
                VLDR_ac_DW.NeVLDR_Cnt_EXV_PressElctrFlt_MF =
                    VeVLDR_Cnt_EXVPrsElFlt_FailCnt;
            }

            /* End of MinMax: '<S466>/Minimum2' */
        }
    }

    /* End of Switch: '<S473>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S459>/Fail' */
    VLDR_ac_Fail(rtb_VM_Conditional_Signal_CPV_n,
                 &VLDR_ac_B.VariantMergeForOutportVeVLDR__l);

    /* End of Outputs for SubSystem: '<S459>/Fail' */

    /* Outputs for Enabled SubSystem: '<S459>/Init' */
    VLDR_ac_Init_a(rtb_VM_Conditional_Signal_CPV_d,
                   &VLDR_ac_B.VariantMergeForOutportVeVLDR__l);

    /* End of Outputs for SubSystem: '<S459>/Init' */

    /* Outputs for Enabled SubSystem: '<S459>/Pass' */
    VLDR_ac_Pass(rtb_VM_Conditional_Signal_CPV_m,
                 &VLDR_ac_B.VariantMergeForOutportVeVLDR__l);

    /* End of Outputs for SubSystem: '<S459>/Pass' */

    /* VariantMerge generated from: '<S392>/EXV_PressElctrFlt_FltDtct' incorporates:
     *  Constant: '<S462>/Constant'
     *  RelationalOperator: '<S459>/Relational Operator'
     *  VariantMerge generated from: '<S392>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrBCkt'
     */
    VLDR_ac_B.VariantMergeForOutportEXV_Press = (((uint32)
        VLDR_ac_B.VariantMergeForOutportVeVLDR__l) == CeDFIB_e_Fail);

    /* VariantMerge generated from: '<S392>/DFIR_EXV_PressSensSNA' incorporates:
     *  Constant: '<S530>/Constant1'
     *  Constant: '<S530>/Constant2'
     *  Constant: '<S540>/Constant1'
     *  Constant: '<S540>/Constant2'
     *  Constant: '<S542>/Constant1'
     *  Constant: '<S542>/Constant2'
     *  Constant: '<S555>/KeVLDR_b_EXV_PressSens_LOC_Ovrd'
     *  Constant: '<S560>/KeVLDR_b_EXV_PressSens_PressElctrFlt_Ovrd'
     *  Constant: '<S563>/KeVLDR_b_EXV_PressSens_ThrmlRlyErr_Ovrd'
     *  DataStoreRead: '<S530>/StatusByte_AC_RefrigTempSnsrBCkt'
     *  Logic: '<S494>/Logical18'
     *  Logic: '<S494>/Logical21'
     *  Logic: '<S494>/Logical25'
     *  Logic: '<S494>/Logical26'
     *  Logic: '<S494>/Logical27'
     *  Logic: '<S494>/Logical7'
     *  Logic: '<S494>/Logical8'
     *  Logic: '<S530>/Logical Operator'
     *  Logic: '<S540>/Logical Operator'
     *  Logic: '<S542>/Logical Operator'
     *  RelationalOperator: '<S530>/Relational Operator1'
     *  RelationalOperator: '<S530>/Relational Operator2'
     *  RelationalOperator: '<S540>/Relational Operator1'
     *  RelationalOperator: '<S540>/Relational Operator2'
     *  RelationalOperator: '<S542>/Relational Operator1'
     *  RelationalOperator: '<S542>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S530>/Bitwise Operator2'
     */
    rtb_Logical12_c5 = ((((((rtb_VariantMergeForOutportDFI_0 <= 0) ||
                            (rtb_UnitDelay_ly_tmp != 0U)) ||
                           (KeVLDR_b_EXV_PressSens_ThrmlRlyErr_Ovrd)) &&
                          rtb_TmpSignalConversionAtVeT_a4) && ((((((sint32)
        VLDR_ac_DW.StatusByte_AC_RefrigTempSnsrBCk) & 1) <= 0) ||
                           (VeVLDR_b_EEXV_PrsElctrFlt_DiagE != 0U)) ||
                          (KeVLDR_b_EXV_PressSens_PressElctrFlt_Ovrd))) &&
                        (((rtb_VariantMergeForOutportDFI_1 <= 0) ||
                          (rtb_VariantMergeForOutportDFI_2 != 0U)) ||
                         (KeVLDR_b_EXV_PressSens_LOC_Ovrd)));

    /* UnitDelay: '<S502>/Unit Delay1' incorporates:
     *  Constant: '<S524>/Constant'
     *  Constant: '<S545>/KeVLDR_U_SysVltLwrLim'
     *  Constant: '<S546>/KeVLDR_U_SysVltUprLim'
     *  Logic: '<S494>/Logical1'
     *  Logic: '<S494>/Logical33'
     *  RelationalOperator: '<S494>/Comparison1'
     *  RelationalOperator: '<S494>/Comparison3'
     *  RelationalOperator: '<S494>/Comparison8'
     */
    rtb_VM_Conditional_Signal_CPV_d = ((((((uint32)
        rtb_TmpSignalConversionAtVePMTR) != CePMTR_e_DISBL_All_Thrml) &&
        ((rtb_VM_Conditional_Signal_BF1_S < KeVLDR_U_SysVltUprLim) &&
         (rtb_VM_Conditional_Signal_BF1_S > KeVLDR_U_SysVltLwrLim))) &&
        rtb_Logical12_c5) && rtb_TmpSignalConversionAtVeDFIR);

    /* SignalConversion generated from: '<S494>/Logical42' */
#if Rte_SysCon_Variant_VLDR_14

    /* UnitDelay: '<S601>/Unit Delay1' incorporates:
     *  Constant: '<S494>/Constant4'
     */
    rtb_UnitDelay1_e = true;

#else

    /* UnitDelay: '<S601>/Unit Delay1' incorporates:
     *  SignalConversion generated from: '<S494>/Logical42'
     */
    rtb_UnitDelay1_e = false;

#endif

    /* End of SignalConversion generated from: '<S494>/Logical42' */

    /* S-Function (sfix_bitop): '<S529>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S529>/StatusByte_AC_RefrigTempSnsrAPerf'
     *  S-Function (sfix_bitop): '<S616>/Bitwise Operator2'
     */
    rtb_Comparison4_mj_tmp_0 = ((sint32)
        VLDR_ac_DW.StatusByte_AC_RefrigTempSnsrAPe) & 1;

    /* S-Function (sfix_bitop): '<S529>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S529>/StatusByte_AC_RefrigTempSnsrAPerf'
     *  S-Function (sfix_bitop): '<S616>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S637>/Bitwise Operator2'
     */
    VeVLDR_b_EEXV_PrsElctrFlt_DiagE = ((uint32)
        VLDR_ac_DW.StatusByte_AC_RefrigTempSnsrAPe) & 64U;

    /* S-Function (sfix_bitop): '<S528>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S528>/StatusByte_AC_RefrigTempSnsrACkt'
     *  S-Function (sfix_bitop): '<S600>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S657>/Bitwise Operator1'
     */
    rtb_Comparison4_mj_tmp = ((uint32)VLDR_ac_DW.StatusByte_AC_RefrigTempSnsrACk)
        & 64U;

    /* S-Function (sfix_bitop): '<S533>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S533>/StatusByte_CommBusOff'
     *  S-Function (sfix_bitop): '<S658>/Bitwise Operator2'
     */
    rtb_UnitDelay1_o2_tmp = ((sint32)VLDR_ac_DW.StatusByte_CommBusOff) & 1;

    /* S-Function (sfix_bitop): '<S533>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S533>/StatusByte_CommBusOff'
     *  S-Function (sfix_bitop): '<S658>/Bitwise Operator1'
     */
    rtb_Comparison4_mj_tmp_1 = ((uint32)VLDR_ac_DW.StatusByte_CommBusOff) & 64U;

    /* S-Function (sfix_bitop): '<S537>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S537>/StatusByte_InvData_BECM'
     *  S-Function (sfix_bitop): '<S665>/Bitwise Operator2'
     */
    rtb_UnitDelay1_o2_tmp_0 = ((sint32)VLDR_ac_DW.StatusByte_InvData_BECM) & 1;

    /* S-Function (sfix_bitop): '<S537>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S537>/StatusByte_InvData_BECM'
     *  S-Function (sfix_bitop): '<S665>/Bitwise Operator1'
     */
    rtb_UnitDelay1_o2_tmp_1 = ((uint32)VLDR_ac_DW.StatusByte_InvData_BECM) & 64U;

    /* S-Function (sfix_bitop): '<S539>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S539>/StatusByte_LosCommBECM_A'
     *  S-Function (sfix_bitop): '<S667>/Bitwise Operator2'
     */
    rtb_UnitDelay1_o2_tmp_2 = ((sint32)VLDR_ac_DW.StatusByte_LosCommBECM_A) & 1;

    /* S-Function (sfix_bitop): '<S539>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S539>/StatusByte_LosCommBECM_A'
     *  S-Function (sfix_bitop): '<S667>/Bitwise Operator1'
     */
    rtb_UnitDelay1_o2_tmp_3 = ((uint32)VLDR_ac_DW.StatusByte_LosCommBECM_A) &
        64U;

    /* S-Function (sfix_bitop): '<S534>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S534>/StatusByte_CommBus_B_Off'
     *  S-Function (sfix_bitop): '<S659>/Bitwise Operator2'
     */
    rtb_UnitDelay1_o2_tmp_4 = ((sint32)VLDR_ac_DW.StatusByte_CommBus_B_Off) & 1;

    /* S-Function (sfix_bitop): '<S534>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S534>/StatusByte_CommBus_B_Off'
     *  S-Function (sfix_bitop): '<S659>/Bitwise Operator1'
     */
    rtb_UnitDelay1_o2_tmp_5 = ((uint32)VLDR_ac_DW.StatusByte_CommBus_B_Off) &
        64U;

    /* S-Function (sfix_bitop): '<S536>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S536>/StatusByte_InvData_BECM_CANC11'
     *  S-Function (sfix_bitop): '<S664>/Bitwise Operator2'
     */
    rtb_UnitDelay1_o2_tmp_6 = ((sint32)VLDR_ac_DW.StatusByte_InvData_BECM_CANC11)
        & 1;

    /* S-Function (sfix_bitop): '<S536>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S536>/StatusByte_InvData_BECM_CANC11'
     *  S-Function (sfix_bitop): '<S664>/Bitwise Operator1'
     */
    rtb_UnitDelay1_o2_tmp_7 = ((uint32)VLDR_ac_DW.StatusByte_InvData_BECM_CANC11)
        & 64U;

    /* S-Function (sfix_bitop): '<S538>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S538>/StatusByte_LosCommBECM_A_CANC11'
     *  S-Function (sfix_bitop): '<S666>/Bitwise Operator2'
     */
    rtb_UnitDelay1_o2_tmp_8 = ((sint32)
        VLDR_ac_DW.StatusByte_LosCommBECM_A_CANC11) & 1;

    /* S-Function (sfix_bitop): '<S538>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S538>/StatusByte_LosCommBECM_A_CANC11'
     *  S-Function (sfix_bitop): '<S666>/Bitwise Operator1'
     */
    rtb_UnitDelay1_o2_tmp_9 = ((uint32)
        VLDR_ac_DW.StatusByte_LosCommBECM_A_CANC11) & 64U;

    /* S-Function (sfix_bitop): '<S528>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S528>/StatusByte_AC_RefrigTempSnsrACkt'
     *  S-Function (sfix_bitop): '<S657>/Bitwise Operator2'
     */
    rtb_VariantMergeForOutportDFI_3 = ((sint32)
        VLDR_ac_DW.StatusByte_AC_RefrigTempSnsrACk) & 1;

    /* VariantMerge generated from: '<S392>/DFIR_EXV_PressSens' incorporates:
     *  Constant: '<S527>/Constant1'
     *  Constant: '<S527>/Constant2'
     *  Constant: '<S528>/Constant1'
     *  Constant: '<S528>/Constant2'
     *  Constant: '<S529>/Constant1'
     *  Constant: '<S529>/Constant2'
     *  Constant: '<S531>/Constant1'
     *  Constant: '<S531>/Constant2'
     *  Constant: '<S532>/Constant1'
     *  Constant: '<S532>/Constant2'
     *  Constant: '<S533>/Constant1'
     *  Constant: '<S533>/Constant2'
     *  Constant: '<S534>/Constant1'
     *  Constant: '<S534>/Constant2'
     *  Constant: '<S535>/Constant1'
     *  Constant: '<S535>/Constant2'
     *  Constant: '<S536>/Constant1'
     *  Constant: '<S536>/Constant2'
     *  Constant: '<S537>/Constant1'
     *  Constant: '<S537>/Constant2'
     *  Constant: '<S538>/Constant1'
     *  Constant: '<S538>/Constant2'
     *  Constant: '<S539>/Constant1'
     *  Constant: '<S539>/Constant2'
     *  Constant: '<S541>/Constant1'
     *  Constant: '<S541>/Constant2'
     *  Constant: '<S552>/KeVLDR_b_EXV_PressSens_BattCoolPmpOveSpd_Ovrd'
     *  Constant: '<S553>/KeVLDR_b_EXV_PressSens_BattCoolPmpPerf_Ovrd'
     *  Constant: '<S554>/KeVLDR_b_EXV_PressSens_EACPerf_Ovrd'
     *  Constant: '<S558>/KeVLDR_b_EXV_PressSens_LostCommEAC_Ovrd'
     *  Constant: '<S559>/KeVLDR_b_EXV_PressSens_PerfDiag_Ovrd'
     *  Constant: '<S561>/KeVLDR_b_EXV_PressSens_TempElctrFlt_Ovrd'
     *  Constant: '<S562>/KeVLDR_b_EXV_PressSens_TempSens_Ovrd'
     *  Constant: '<S577>/Calib'
     *  DataStoreRead: '<S527>/StatusByte_AC_RefrigExpVlvActCtrCktPerf'
     *  DataStoreRead: '<S531>/StatusByte_BattCoolPmpOveSpd'
     *  DataStoreRead: '<S532>/StatusByte_BattCoolPmpPerf'
     *  DataStoreRead: '<S535>/StatusByte_EACPerf'
     *  DataStoreRead: '<S541>/StatusByte_LostCommEAC'
     *  Logic: '<S494>/Logical10'
     *  Logic: '<S494>/Logical11'
     *  Logic: '<S494>/Logical12'
     *  Logic: '<S494>/Logical13'
     *  Logic: '<S494>/Logical14'
     *  Logic: '<S494>/Logical15'
     *  Logic: '<S494>/Logical17'
     *  Logic: '<S494>/Logical19'
     *  Logic: '<S494>/Logical20'
     *  Logic: '<S494>/Logical22'
     *  Logic: '<S494>/Logical23'
     *  Logic: '<S494>/Logical24'
     *  Logic: '<S494>/Logical29'
     *  Logic: '<S494>/Logical30'
     *  Logic: '<S494>/Logical31'
     *  Logic: '<S494>/Logical35'
     *  Logic: '<S494>/Logical4'
     *  Logic: '<S494>/Logical40'
     *  Logic: '<S494>/Logical41'
     *  Logic: '<S494>/Logical42'
     *  Logic: '<S494>/Logical43'
     *  Logic: '<S494>/Logical5'
     *  Logic: '<S494>/Logical9'
     *  Logic: '<S527>/Logical Operator'
     *  Logic: '<S528>/Logical Operator'
     *  Logic: '<S529>/Logical Operator'
     *  Logic: '<S531>/Logical Operator'
     *  Logic: '<S532>/Logical Operator'
     *  Logic: '<S533>/Logical Operator'
     *  Logic: '<S534>/Logical Operator'
     *  Logic: '<S535>/Logical Operator'
     *  Logic: '<S536>/Logical Operator'
     *  Logic: '<S537>/Logical Operator'
     *  Logic: '<S538>/Logical Operator'
     *  Logic: '<S539>/Logical Operator'
     *  Logic: '<S541>/Logical Operator'
     *  RelationalOperator: '<S527>/Relational Operator1'
     *  RelationalOperator: '<S527>/Relational Operator2'
     *  RelationalOperator: '<S528>/Relational Operator1'
     *  RelationalOperator: '<S528>/Relational Operator2'
     *  RelationalOperator: '<S529>/Relational Operator1'
     *  RelationalOperator: '<S529>/Relational Operator2'
     *  RelationalOperator: '<S531>/Relational Operator1'
     *  RelationalOperator: '<S531>/Relational Operator2'
     *  RelationalOperator: '<S532>/Relational Operator1'
     *  RelationalOperator: '<S532>/Relational Operator2'
     *  RelationalOperator: '<S533>/Relational Operator1'
     *  RelationalOperator: '<S533>/Relational Operator2'
     *  RelationalOperator: '<S534>/Relational Operator1'
     *  RelationalOperator: '<S534>/Relational Operator2'
     *  RelationalOperator: '<S535>/Relational Operator1'
     *  RelationalOperator: '<S535>/Relational Operator2'
     *  RelationalOperator: '<S536>/Relational Operator1'
     *  RelationalOperator: '<S536>/Relational Operator2'
     *  RelationalOperator: '<S537>/Relational Operator1'
     *  RelationalOperator: '<S537>/Relational Operator2'
     *  RelationalOperator: '<S538>/Relational Operator1'
     *  RelationalOperator: '<S538>/Relational Operator2'
     *  RelationalOperator: '<S539>/Relational Operator1'
     *  RelationalOperator: '<S539>/Relational Operator2'
     *  RelationalOperator: '<S541>/Relational Operator1'
     *  RelationalOperator: '<S541>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S527>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S528>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S528>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S529>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S529>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S531>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S531>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S532>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S532>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S533>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S533>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S534>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S534>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S535>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S535>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S536>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S536>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S537>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S537>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S538>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S538>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S539>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S539>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S541>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S541>/Bitwise Operator2'
     */
    rtb_UnitDelay1_e = (((((((((rtb_UnitDelay1_o2_tmp <= 0) ||
        (rtb_Comparison4_mj_tmp_1 != 0U)) && ((rtb_UnitDelay1_o2_tmp_0 <= 0) ||
        (rtb_UnitDelay1_o2_tmp_1 != 0U))) && ((rtb_UnitDelay1_o2_tmp_2 <= 0) ||
        (rtb_UnitDelay1_o2_tmp_3 != 0U))) || (((((rtb_UnitDelay1_o2_tmp_4 <= 0) ||
        (rtb_UnitDelay1_o2_tmp_5 != 0U)) && ((rtb_UnitDelay1_o2_tmp_6 <= 0) ||
        (rtb_UnitDelay1_o2_tmp_7 != 0U))) && ((rtb_UnitDelay1_o2_tmp_8 <= 0) ||
        (rtb_UnitDelay1_o2_tmp_9 != 0U))) && (!rtb_UnitDelay1_e))) ||
                           (KeVLDR_b_EXV_BCPCommCheck_Ovrd)) && (((((((sint32)
        VLDR_ac_DW.StatusByte_BattCoolPmpPerf) & 1) <= 0) || ((((uint32)
        VLDR_ac_DW.StatusByte_BattCoolPmpPerf) & 64U) != 0U)) ||
                            (KeVLDR_b_EXV_PressSens_BattCoolPmpPerf_Ovrd)) &&
                           ((((((sint32)VLDR_ac_DW.StatusByte_BattCoolPmpOveSpd)
        & 1) <= 0) || ((((uint32)VLDR_ac_DW.StatusByte_BattCoolPmpOveSpd) & 64U)
                       != 0U)) || (KeVLDR_b_EXV_PressSens_BattCoolPmpOveSpd_Ovrd))))
                         && (((((((sint32)VLDR_ac_DW.StatusByte_EACPerf) & 1) <=
        0) || ((((uint32)VLDR_ac_DW.StatusByte_EACPerf) & 64U) != 0U)) ||
                           (KeVLDR_b_EXV_PressSens_EACPerf_Ovrd)) &&
                          ((((((sint32)VLDR_ac_DW.StatusByte_LostCommEAC) & 1) <=
        0) || ((((uint32)VLDR_ac_DW.StatusByte_LostCommEAC) & 64U) != 0U)) ||
                           (KeVLDR_b_EXV_PressSens_LostCommEAC_Ovrd)))) &&
                        (((((rtb_VariantMergeForOutportDFI_3 <= 0) ||
                            (rtb_Comparison4_mj_tmp != 0U)) ||
                           (KeVLDR_b_EXV_PressSens_TempElctrFlt_Ovrd)) &&
                          ((((((sint32)
        VLDR_ac_DW.StatusByte_AC_RefrigExpVlvActCt) & 1) <= 0) ||
                            (rtb_VariantMergeForOutportDFI_4 != 0U)) ||
                           (KeVLDR_b_EXV_PressSens_PerfDiag_Ovrd))) &&
                         (((rtb_Comparison4_mj_tmp_0 <= 0) ||
                           (VeVLDR_b_EEXV_PrsElctrFlt_DiagE != 0U)) ||
                          (KeVLDR_b_EXV_PressSens_TempSens_Ovrd))));

    /* Logic: '<S494>/Logical6' incorporates:
     *  Constant: '<S523>/Constant'
     *  Constant: '<S525>/Constant'
     *  Constant: '<S526>/Constant'
     *  Constant: '<S548>/KeVLDR_b_EXV_ActCool_Disbl'
     *  Constant: '<S556>/KeVLDR_b_EXV_PressSens_LTAP_LIN_Valid_OV'
     *  Constant: '<S557>/KeVLDR_b_EXV_PressSens_LTAP_LOC_Dtct_OV'
     *  Logic: '<S494>/AND1'
     *  Logic: '<S494>/AND2'
     *  Logic: '<S494>/AND28'
     *  Logic: '<S494>/AND29'
     *  Logic: '<S494>/AND3'
     *  RelationalOperator: '<S494>/Comparison10'
     *  RelationalOperator: '<S494>/Comparison11'
     *  RelationalOperator: '<S494>/Comparison4'
     *  RelationalOperator: '<S494>/Comparison5'
     *  RelationalOperator: '<S494>/Comparison6'
     *  RelationalOperator: '<S494>/Comparison7'
     *  RelationalOperator: '<S494>/Comparison9'
     *  SignalConversion generated from: '<S1>/VeTHMR_e_BatThrmlSt'
     *  Switch: '<S5>/Switch10'
     *  Switch: '<S5>/Switch13'
     */
    VeVLDR_b_EXV_PressSensLatch_En = (((rtb_UnitDelay1_e && ((((uint32)
        rtb_TmpSignalConversionAtVeTH_j) == CeTHMR_e_ActiveCooling) ||
        (KeVLDR_b_EXV_ActCool_Disbl))) && ((((((uint32)VLDR_ac_B.Switch10) ==
        CeBPCR_e_LIN_BusOff_Disabled) && (!VLDR_ac_B.Switch11)) &&
        (VLDR_ac_B.Switch12)) || (KeVLDR_b_EXV_PressSens_LTAP_LIN_Valid_OV))) &&
        ((((((uint32)VLDR_ac_B.Switch13) == CeBPCR_e_LOC_BCP_False) &&
           (!VLDR_ac_B.Switch14)) && (VLDR_ac_B.Switch15)) ||
         (KeVLDR_b_EXV_PressSens_LTAP_LOC_Dtct_OV)));

    /* Product: '<S627>/Product' incorporates:
     *  Constant: '<S516>/Constant Value1'
     *  Constant: '<S543>/Calib'
     *  Product: '<S516>/Multiplication3'
     */
    rtb_TmpSignalConversionAtVeT_ld = HeVLDR_t_MedTED / 2.0F;

    /* Product: '<S516>/Multiplication2' incorporates:
     *  Constant: '<S574>/KeVLDR_t_EXV_FilterDeriv_CutOff'
     *  Product: '<S516>/Multiplication4'
     *  Sum: '<S516>/Summation'
     *  Sum: '<S516>/Summation1'
     *  Sum: '<S516>/Summation2'
     *  UnitDelay: '<S516>/Unit Delay'
     *  UnitDelay: '<S516>/Unit Delay1'
     */
    rtb_Switch1_e4v = ((rtb_TmpSignalConversionAtVeT_dk -
                        ((rtb_TmpSignalConversionAtVeT_ld -
                          KeVLDR_t_EXV_FilterDeriv_CutOff) *
                         VLDR_ac_DW.UnitDelay1_DSTATE_b)) -
                       VLDR_ac_DW.UnitDelay_DSTATE_c) /
        (rtb_TmpSignalConversionAtVeT_ld + KeVLDR_t_EXV_FilterDeriv_CutOff);

    /* Outputs for Atomic SubSystem: '<S494>/Digital Lowpass Reset Enabled' */
    /* Product: '<S627>/Product' incorporates:
     *  UnitDelay: '<S517>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeT_ld = VLDR_ac_DW.UnitDelay_DSTATE_af;

    /* Switch: '<S517>/Switch1' incorporates:
     *  Constant: '<S575>/KeVLDR_t_EXV_LPF_Coef'
     *  Product: '<S517>/Multiplication'
     *  Sum: '<S517>/Subtraction'
     *  Sum: '<S517>/Summation'
     */
    VeVLDR_dn_CompAccelFilter = ((rtb_Switch1_e4v -
        rtb_TmpSignalConversionAtVeT_ld) * KeVLDR_t_EXV_LPF_Coef) +
        rtb_TmpSignalConversionAtVeT_ld;

    /* Update for UnitDelay: '<S517>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_af = VeVLDR_dn_CompAccelFilter;

    /* End of Outputs for SubSystem: '<S494>/Digital Lowpass Reset Enabled' */

    /* RelationalOperator: '<S494>/Comparison12' incorporates:
     *  Constant: '<S564>/KeVLDR_dn_EXV_CompAccelThr'
     */
    rtb_VM_Conditional_Signal_CPV_l = (VeVLDR_dn_CompAccelFilter >=
        KeVLDR_dn_EXV_CompAccelThr);

    /* Outputs for Atomic SubSystem: '<S494>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S579>/EdgeFalling1' */
    /* Logic: '<S583>/AND' incorporates:
     *  Logic: '<S583>/OR1'
     *  UnitDelay: '<S583>/Unit Delay'
     */
    rtb_VM_Conditional_Signal_CP_cz = ((!rtb_VM_Conditional_Signal_CPV_l) &&
        (VLDR_ac_DW.UnitDelay_DSTATE_ad));

    /* Update for UnitDelay: '<S583>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_ad = rtb_VM_Conditional_Signal_CPV_l;

    /* End of Outputs for SubSystem: '<S579>/EdgeFalling1' */

    /* Switch: '<S579>/Switch' */
    if (rtb_VM_Conditional_Signal_CP_cz)
    {
        /* Switch: '<S579>/Switch' incorporates:
         *  Constant: '<S572>/KeVLDR_t_EXV_CompAC_Time'
         */
        rtb_TmpSignalConversionAtVeT_ld = KeVLDR_t_EXV_CompAC_Time;
    }
    else
    {
        /* Switch: '<S579>/Switch' incorporates:
         *  Constant: '<S543>/Calib'
         *  Constant: '<S579>/Constant Value1'
         *  MinMax: '<S579>/Minimum'
         *  Sum: '<S579>/Summation'
         *  UnitDelay: '<S579>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeT_ld = fmaxf(VLDR_ac_DW.UnitDelay_DSTATE_ev -
            HeVLDR_t_MedTED, 0.0F);
    }

    /* End of Switch: '<S579>/Switch' */

    /* Logic: '<S579>/AND' incorporates:
     *  Constant: '<S579>/Constant Value2'
     *  RelationalOperator: '<S579>/Greater  Than'
     */
    VeVLDR_b_ACComp = (rtb_VM_Conditional_Signal_CPV_l ||
                       (rtb_TmpSignalConversionAtVeT_ld > 0.0F));

    /* Update for UnitDelay: '<S579>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_ev = rtb_TmpSignalConversionAtVeT_ld;

    /* End of Outputs for SubSystem: '<S494>/Turn Off Delay Time' */

    /* Outputs for Atomic SubSystem: '<S494>/Hysteresis1' */
    /* Switch: '<S544>/Switch1' incorporates:
     *  Constant: '<S568>/KeVLDR_n_EXV_SpdThrshld_RSP_Diag'
     *  RelationalOperator: '<S544>/Greater  Than'
     */
    if (rtb_TmpSignalConversionAtVeT_dk > KeVLDR_n_EXV_SpdThrshld_RSP_Diag)
    {
        /* Switch: '<S544>/Switch1' incorporates:
         *  Constant: '<S544>/Constant Value'
         */
        rtb_VM_Conditional_Signal_CPV_l = true;
    }
    else
    {
        /* Switch: '<S544>/Switch1' incorporates:
         *  Constant: '<S567>/KeVLDR_n_EXV_SpdThrshld_LSP_Diag'
         *  RelationalOperator: '<S544>/Greater  Than1'
         *  UnitDelay: '<S544>/Unit Delay'
         */
        rtb_VM_Conditional_Signal_CPV_l = ((rtb_TmpSignalConversionAtVeT_dk >=
            KeVLDR_n_EXV_SpdThrshld_LSP_Diag) &&
            (VLDR_ac_DW.UnitDelay_DSTATE_ivk));
    }

    /* End of Switch: '<S544>/Switch1' */

    /* Update for UnitDelay: '<S544>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_ivk = rtb_VM_Conditional_Signal_CPV_l;

    /* End of Outputs for SubSystem: '<S494>/Hysteresis1' */

    /* RelationalOperator: '<S494>/Comparison2' incorporates:
     *  Constant: '<S566>/KeVLDR_n_EXV_LowCompSpd'
     */
    rtb_VM_Conditional_Signal_Logic = (rtb_TmpSignalConversionAtVeT_dk >
        KeVLDR_n_EXV_LowCompSpd);

    /* Outputs for Atomic SubSystem: '<S494>/EdgeRising2' */
    /* Logic: '<S519>/AND' incorporates:
     *  Logic: '<S519>/OR1'
     *  UnitDelay: '<S519>/Unit Delay'
     */
    rtb_VM_Conditional_Signal_CP_cz = (rtb_VM_Conditional_Signal_Logic &&
        (!VLDR_ac_DW.UnitDelay_DSTATE_phe));

    /* Update for UnitDelay: '<S519>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_phe = rtb_VM_Conditional_Signal_Logic;

    /* End of Outputs for SubSystem: '<S494>/EdgeRising2' */

    /* Logic: '<S494>/AND7' incorporates:
     *  Constant: '<S547>/KeVLDR_b_EXV_AccelCheckEnbl'
     */
    rtb_VM_Conditional_Signal_Logic = ((VeVLDR_b_ACComp) &&
        (KeVLDR_b_EXV_AccelCheckEnbl));

    /* Outputs for Atomic SubSystem: '<S494>/EdgeRising4' */
    /* Logic: '<S520>/AND' incorporates:
     *  Logic: '<S520>/OR1'
     *  UnitDelay: '<S520>/Unit Delay'
     */
    rtb_VariantMerge_For_Variant_So = (rtb_VM_Conditional_Signal_Logic &&
        (!VLDR_ac_DW.UnitDelay_DSTATE_hf));

    /* Update for UnitDelay: '<S520>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_hf = rtb_VM_Conditional_Signal_Logic;

    /* End of Outputs for SubSystem: '<S494>/EdgeRising4' */

    /* Logic: '<S494>/Logical28' incorporates:
     *  Logic: '<S494>/AND8'
     */
    rtb_VM_Conditional_Signal_CP_cz = ((rtb_VM_Conditional_Signal_CP_cz ||
        rtb_VariantMerge_For_Variant_So) && (VeVLDR_b_EXV_PressSensLatch_En));

    /* Switch: '<S582>/Switch1' */
    if (rtb_VM_Conditional_Signal_CP_cz)
    {
        /* Product: '<S627>/Product' incorporates:
         *  Constant: '<S582>/InitValue'
         */
        rtb_TmpSignalConversionAtVeT_ld = 0.0F;
    }
    else
    {
        /* Product: '<S627>/Product' incorporates:
         *  Constant: '<S543>/Calib'
         *  Sum: '<S582>/Subtraction'
         *  Switch: '<S582>/Switch2'
         *  UnitDelay: '<S582>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeT_ld = HeVLDR_t_MedTED +
            VLDR_ac_DW.UnitDelay_DSTATE_ca;
    }

    /* End of Switch: '<S582>/Switch1' */

    /* RelationalOperator: '<S582>/Greater  Than1' incorporates:
     *  Constant: '<S570>/KeVLDR_t_EXV_CntrTime1'
     */
    VeVLDR_b_WaitTimeEnable = (rtb_TmpSignalConversionAtVeT_ld >
        KeVLDR_t_EXV_CntrTime1);

    /* RelationalOperator: '<S494>/Comparison13' incorporates:
     *  Constant: '<S565>/KeVLDR_n_EXV_InitCompSpd'
     */
    rtb_VariantMerge_For_Variant_So = (rtb_TmpSignalConversionAtVeT_dk <
        KeVLDR_n_EXV_InitCompSpd);

    /* Outputs for Atomic SubSystem: '<S494>/Turn On Delay Time1' */
    /* Outputs for Atomic SubSystem: '<S581>/EdgeRising' */
    /* Logic: '<S585>/AND' incorporates:
     *  Logic: '<S585>/OR1'
     *  UnitDelay: '<S585>/Unit Delay'
     */
    rtb_VM_Conditional_Signal_Logic = (rtb_VariantMerge_For_Variant_So &&
        (!VLDR_ac_DW.UnitDelay_DSTATE_oli));

    /* Update for UnitDelay: '<S585>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_oli = rtb_VariantMerge_For_Variant_So;

    /* End of Outputs for SubSystem: '<S581>/EdgeRising' */

    /* Switch: '<S581>/Switch1' incorporates:
     *  Logic: '<S581>/OR'
     *  Logic: '<S581>/OR1'
     */
    if ((!rtb_VariantMerge_For_Variant_So) || rtb_VM_Conditional_Signal_Logic)
    {
        /* Switch: '<S581>/Switch1' incorporates:
         *  Constant: '<S581>/Constant Value1'
         */
        rtb_TmpSignalConversionAtVeT_dd = 0.0F;
    }
    else
    {
        /* Switch: '<S581>/Switch1' incorporates:
         *  Constant: '<S543>/Calib'
         *  Constant: '<S569>/KeVLDR_t_EXV_CmpSpdTm'
         *  MinMax: '<S581>/Minimum'
         *  Sum: '<S581>/Summation'
         *  UnitDelay: '<S581>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeT_dd = fminf(KeVLDR_t_EXV_CmpSpdTm,
            HeVLDR_t_MedTED + VLDR_ac_DW.UnitDelay_DSTATE_au);
    }

    /* End of Switch: '<S581>/Switch1' */
    /* End of Outputs for SubSystem: '<S494>/Turn On Delay Time1' */

    /* Inport: '<Root>/VeTAIR_b_EXV_RefPress_FA' */
    (void)Rte_Read_VeTAIR_b_EXV_RefPress_FA_Value(&rtb_Logical44);

    /* Outputs for Atomic SubSystem: '<S494>/Turn On Delay Time1' */
    /* Update for UnitDelay: '<S581>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_au = rtb_TmpSignalConversionAtVeT_dd;

    /* End of Outputs for SubSystem: '<S494>/Turn On Delay Time1' */

    /* UnitDelay: '<S638>/Unit Delay1' incorporates:
     *  Constant: '<S571>/KeVLDR_t_EXV_CntrTime2'
     *  RelationalOperator: '<S582>/Greater  Than2'
     */
    rtb_VM_Conditional_Signal_Logic = (rtb_TmpSignalConversionAtVeT_ld >
        KeVLDR_t_EXV_CntrTime2);

    /* Logic: '<S494>/AND5' incorporates:
     *  Constant: '<S549>/KeVLDR_b_EXV_CheckEnbl'
     *  Logic: '<S494>/Logical36'
     *  Logic: '<S494>/Logical37'
     *  UnitDelay: '<S494>/Unit Delay2'
     */
    rtb_VariantMerge_For_Variant__h = (rtb_VariantMerge_For_Variant_So ||
        (((VLDR_ac_DW.UnitDelay2_DSTATE_e) || rtb_VM_Conditional_Signal_Logic) &&
         (KeVLDR_b_EXV_CheckEnbl)));

    /* Outputs for Atomic SubSystem: '<S494>/EdgeRising1' */
    /* Logic: '<S518>/OR1' incorporates:
     *  UnitDelay: '<S518>/Unit Delay'
     */
    rtb_LogicalOperator7 = !VLDR_ac_DW.UnitDelay_DSTATE_pj;

    /* Update for UnitDelay: '<S518>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_pj = rtb_VariantMerge_For_Variant__h;

    /* Outputs for Atomic SubSystem: '<S494>/Signal Latch On With Reset1' */
    /* Outputs for Atomic SubSystem: '<S494>/Turn On Delay Time1' */
    /* Logic: '<S578>/OR1' incorporates:
     *  Constant: '<S569>/KeVLDR_t_EXV_CmpSpdTm'
     *  Logic: '<S518>/AND'
     *  Logic: '<S578>/NOT'
     *  Logic: '<S578>/OR'
     *  Logic: '<S581>/AND'
     *  RelationalOperator: '<S581>/Greater  Than'
     *  UnitDelay: '<S578>/Unit Delay'
     */
    rtb_VariantMerge_For_Variant_So = ((rtb_VariantMerge_For_Variant_So &&
        (rtb_TmpSignalConversionAtVeT_dd >= KeVLDR_t_EXV_CmpSpdTm)) ||
        (((!rtb_VariantMerge_For_Variant__h) || (!rtb_LogicalOperator7)) &&
         (VLDR_ac_DW.UnitDelay_DSTATE_gp)));

    /* End of Outputs for SubSystem: '<S494>/Turn On Delay Time1' */
    /* End of Outputs for SubSystem: '<S494>/EdgeRising1' */

    /* Update for UnitDelay: '<S578>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_gp = rtb_VariantMerge_For_Variant_So;

    /* End of Outputs for SubSystem: '<S494>/Signal Latch On With Reset1' */

    /* Logic: '<S494>/Logical34' incorporates:
     *  Constant: '<S550>/KeVLDR_b_EXV_CmpSpd_Disbl'
     *  Logic: '<S494>/AND4'
     *  Logic: '<S494>/Logical39'
     *  UnitDelay: '<S494>/Unit Delay1'
     */
    VeVLDR_b_EXV_PressSensDiag_En = ((VeVLDR_b_EXV_PressSensLatch_En) &&
        (((((VeVLDR_b_ACComp) && rtb_VM_Conditional_Signal_CPV_l) &&
           (VeVLDR_b_WaitTimeEnable)) && (VLDR_ac_DW.UnitDelay1_DSTATE_au)) &&
         (rtb_VariantMerge_For_Variant_So || (KeVLDR_b_EXV_CmpSpd_Disbl))));

    /* Logic: '<S494>/Logical44' */
    rtb_Logical44 = (rtb_Logical44 && rtb_VM_Conditional_Signal_CPV_d);

    /* Outputs for Atomic SubSystem: '<S494>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S580>/EdgeRising' */
    /* Logic: '<S584>/AND' incorporates:
     *  Logic: '<S584>/OR1'
     *  UnitDelay: '<S584>/Unit Delay'
     */
    rtb_VM_Conditional_Signal_CPV_l = (rtb_Logical44 &&
        (!VLDR_ac_DW.UnitDelay_DSTATE_gi));

    /* Update for UnitDelay: '<S584>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_gi = rtb_Logical44;

    /* End of Outputs for SubSystem: '<S580>/EdgeRising' */

    /* Switch: '<S580>/Switch1' incorporates:
     *  Logic: '<S580>/OR'
     *  Logic: '<S580>/OR1'
     */
    if ((!rtb_Logical44) || rtb_VM_Conditional_Signal_CPV_l)
    {
        /* Switch: '<S580>/Switch1' incorporates:
         *  Constant: '<S580>/Constant Value1'
         */
        rtb_TmpSignalConversionAtVeT_dd = 0.0F;
    }
    else
    {
        /* Switch: '<S580>/Switch1' incorporates:
         *  Constant: '<S543>/Calib'
         *  Constant: '<S573>/KeVLDR_t_EXV_FA_WaitTime'
         *  MinMax: '<S580>/Minimum'
         *  Sum: '<S580>/Summation'
         *  UnitDelay: '<S580>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeT_dd = fminf(KeVLDR_t_EXV_FA_WaitTime,
            HeVLDR_t_MedTED + VLDR_ac_DW.UnitDelay_DSTATE_pe);
    }

    /* End of Switch: '<S580>/Switch1' */

    /* Logic: '<S580>/AND' incorporates:
     *  Constant: '<S573>/KeVLDR_t_EXV_FA_WaitTime'
     *  RelationalOperator: '<S580>/Greater  Than'
     */
    rtb_VM_Conditional_Signal_CPV_l = (rtb_Logical44 &&
        (rtb_TmpSignalConversionAtVeT_dd >= KeVLDR_t_EXV_FA_WaitTime));

    /* Update for UnitDelay: '<S580>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_pe = rtb_TmpSignalConversionAtVeT_dd;

    /* End of Outputs for SubSystem: '<S494>/Turn On Delay Time' */

    /* Logic: '<S494>/Logical16' incorporates:
     *  Constant: '<S576>/Calib'
     *  Logic: '<S494>/Logical32'
     *  Logic: '<S494>/Logical46'
     */
    VeVLDR_b_EXV_PresSensSNA_DiagEn = ((rtb_VM_Conditional_Signal_CPV_d &&
        (VeVLDR_b_EXV_PressSensDiag_En)) || ((KeVLDR_b_EXV_RefPressPerfCndsOV_En)
        && rtb_VM_Conditional_Signal_CPV_l));

    /* RelationalOperator: '<S501>/Relational Operator3' incorporates:
     *  Constant: '<S501>/Constant3'
     */
    rtb_VM_Conditional_Signal_CPV_d = (rtb_VM_Conditional_Signal_CPV_e == 0U);

    /* Outputs for Atomic SubSystem: '<S501>/EdgeFalling1' */
    /* Logic: '<S501>/Logical Operator' incorporates:
     *  Logic: '<S503>/OR1'
     */
    rtb_VariantMerge_For_Variant_So = !rtb_VM_Conditional_Signal_CPV_d;

    /* End of Outputs for SubSystem: '<S501>/EdgeFalling1' */

    /* Logic: '<S501>/Logical1' incorporates:
     *  Constant: '<S499>/Calib'
     *  Constant: '<S500>/KeVLDR_b_EXV_PressSens_XYEnbl'
     *  Constant: '<S501>/Constant1'
     *  DataStoreRead: '<S493>/Data Store Read2'
     *  Logic: '<S493>/AND1'
     *  Logic: '<S501>/Logical Operator'
     *  Logic: '<S501>/Logical10'
     *  Logic: '<S501>/Logical12'
     *  RelationalOperator: '<S501>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S501>/Bitwise Operator3'
     */
    rtb_Logical44 = (((VeVLDR_b_EXV_PresSensSNA_DiagEn) &&
                      (KeVLDR_b_EXV_PressSens_XYEnbl)) &&
                     ((!KeVLDR_b_AC_RefrigTempSnsrBPerf_LtchEnbl) || (((((uint32)
                          VLDR_ac_DW.StatusByte_AC_RefrigTempSnsrBPe) & 1U) ==
                        0U) || rtb_VariantMerge_For_Variant_So)));

    /* Switch: '<S496>/Switch' */
    if (rtb_VM_Conditional_Signal_CP_cz)
    {
        /* Switch: '<S496>/Switch' */
        VeVLDR_p_EXV_PressLatch = rtb_TmpSignalConversionAtVeT_d0;
    }
    else
    {
        /* Switch: '<S496>/Switch' incorporates:
         *  UnitDelay: '<S496>/Unit Delay1'
         */
        VeVLDR_p_EXV_PressLatch = VLDR_ac_DW.UnitDelay1_DSTATE_p;
    }

    /* End of Switch: '<S496>/Switch' */

    /* Outputs for Enabled SubSystem: '<S397>/Fail_Symptom' incorporates:
     *  EnablePort: '<S495>/Enable'
     */
    if (VeVLDR_b_EXV_PresSensSNA_DiagEn)
    {
        /* Abs: '<S495>/Abs' incorporates:
         *  Sum: '<S495>/Sum1'
         */
        VeVLDR_p_EXV_Pres_Diff = fabsf(rtb_TmpSignalConversionAtVeT_d0 -
            VeVLDR_p_EXV_PressLatch);

        /* Lookup_n-D: '<S590>/Vector' incorporates:
         *  SignalConversion generated from: '<S1>/VeTAIR_T_EXV_RefTemp'
         */
        VeVLDR_p_EXV_PressSens_Sat_Thr = look1_iflf_binlcapw
            (rtb_TmpSignalConversionAtVeTA_o, ((const float32 *)
              &(KxVLDR_p_EXV_PressSens_Saturation[0])), ((const float32 *)
              &(KtVLDR_p_EXV_PressSens_Saturation[0])), 6U);

        /* Logic: '<S495>/Logical Operator' incorporates:
         *  Constant: '<S586>/KeVLDR_b_EXV_PressSens_Saturation_Enb'
         *  Constant: '<S587>/KeVLDR_b_EXV_Press_Delta_Enb'
         *  Constant: '<S588>/KeVLDR_b_EXV_RefPressFA_Enbl'
         *  Constant: '<S589>/KeVLDR_p_EXV_Press_Delta_Min'
         *  Logic: '<S495>/Logical Operator1'
         *  Logic: '<S495>/Logical Operator2'
         *  Logic: '<S495>/Logical5'
         *  RelationalOperator: '<S495>/Comparison1'
         *  RelationalOperator: '<S495>/Comparison5'
         */
        VLDR_ac_B.LogicalOperator_f = ((((VeVLDR_p_EXV_Pres_Diff <
            KeVLDR_p_EXV_Press_Delta_Min) && (KeVLDR_b_EXV_Press_Delta_Enb)) ||
            ((rtb_TmpSignalConversionAtVeT_d0 > VeVLDR_p_EXV_PressSens_Sat_Thr) &&
             (KeVLDR_b_EXV_PressSens_Saturation_Enb))) ||
            (rtb_VM_Conditional_Signal_CPV_l && (KeVLDR_b_EXV_RefPressFA_Enbl)));
    }

    /* End of Outputs for SubSystem: '<S397>/Fail_Symptom' */

    /* Outputs for Atomic SubSystem: '<S501>/EdgeFalling1' */
    /* Logic: '<S503>/AND' incorporates:
     *  UnitDelay: '<S503>/Unit Delay'
     */
    rtb_VM_Conditional_Signal_CPV_l = (rtb_VariantMerge_For_Variant_So &&
        (VLDR_ac_DW.UnitDelay_DSTATE_l4));

    /* Update for UnitDelay: '<S503>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_l4 = rtb_VM_Conditional_Signal_CPV_d;

    /* End of Outputs for SubSystem: '<S501>/EdgeFalling1' */

    /* Logic: '<S501>/Logical5' */
    rtb_VM_Conditional_Signal_CPV_l = (rtb_Logical41_a ||
        rtb_VM_Conditional_Signal_CPV_l);

    /* Logic: '<S502>/Fail Counter Reset' incorporates:
     *  UnitDelay: '<S502>/Unit Delay'
     *  UnitDelay: '<S502>/Unit Delay1'
     */
    rtb_VM_Conditional_Signal_CPV_d = ((rtb_VM_Conditional_Signal_CPV_l ||
        (VLDR_ac_DW.UnitDelay_DSTATE_jj)) || (VLDR_ac_DW.UnitDelay1_DSTATE_kc));

    /* Outputs for Atomic SubSystem: '<S502>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S502>/Counter Reset  Enabled ' */
    /* Switch: '<S509>/Switch1' incorporates:
     *  Logic: '<S502>/NOT6'
     *  Switch: '<S509>/Switch2'
     *  Switch: '<S510>/Switch1'
     */
    if (rtb_VM_Conditional_Signal_CPV_d)
    {
        /* Switch: '<S509>/Switch1' incorporates:
         *  Constant: '<S509>/Constant Value2'
         */
        VeVLDR_Cnt_EXV_PresSens_FailCnt = 0U;

        /* Switch: '<S510>/Switch1' incorporates:
         *  Constant: '<S510>/Constant Value2'
         */
        VeVLDR_Cnt_EXV_PressSens_SmpCnt = 0U;
    }
    else
    {
        if (rtb_Logical44 && (VLDR_ac_B.LogicalOperator_f))
        {
            /* Switch: '<S509>/Switch2' incorporates:
             *  Constant: '<S509>/Constant Value1'
             *  Sum: '<S509>/Subtraction'
             *  Switch: '<S509>/Switch1'
             *  UnitDelay: '<S509>/Unit Delay'
             */
            VeVLDR_Cnt_EXV_PresSens_FailCnt = (uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_fr) + 1U);
        }
        else
        {
            /* Switch: '<S509>/Switch1' incorporates:
             *  Switch: '<S509>/Switch2'
             *  UnitDelay: '<S509>/Unit Delay'
             */
            VeVLDR_Cnt_EXV_PresSens_FailCnt = VLDR_ac_DW.UnitDelay_DSTATE_fr;
        }

        /* Switch: '<S510>/Switch2' */
        if (rtb_Logical44)
        {
            /* Switch: '<S510>/Switch1' incorporates:
             *  Constant: '<S510>/Constant Value1'
             *  Sum: '<S510>/Subtraction'
             *  Switch: '<S510>/Switch2'
             *  UnitDelay: '<S510>/Unit Delay'
             */
            VeVLDR_Cnt_EXV_PressSens_SmpCnt = (uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_dh5) + 1U);
        }
        else
        {
            /* Switch: '<S510>/Switch1' incorporates:
             *  Switch: '<S510>/Switch2'
             *  UnitDelay: '<S510>/Unit Delay'
             */
            VeVLDR_Cnt_EXV_PressSens_SmpCnt = VLDR_ac_DW.UnitDelay_DSTATE_dh5;
        }

        /* End of Switch: '<S510>/Switch2' */
    }

    /* End of Switch: '<S509>/Switch1' */
    /* End of Outputs for SubSystem: '<S502>/Counter Reset  Enabled 1' */

    /* Update for UnitDelay: '<S509>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_fr = VeVLDR_Cnt_EXV_PresSens_FailCnt;

    /* End of Outputs for SubSystem: '<S502>/Counter Reset  Enabled ' */

    /* Outputs for Atomic SubSystem: '<S502>/Counter Reset  Enabled 1' */
    /* Update for UnitDelay: '<S510>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_dh5 = VeVLDR_Cnt_EXV_PressSens_SmpCnt;

    /* End of Outputs for SubSystem: '<S502>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S502>/Greater Than or Equal ' incorporates:
     *  Constant: '<S497>/KeVLDR_Cnt_EXV_PressSens_FailCnt'
     */
    rtb_Logical44 = (VeVLDR_Cnt_EXV_PresSens_FailCnt >=
                     KeVLDR_Cnt_EXV_PressSens_FailCnt);

    /* Logic: '<S502>/NOT5' incorporates:
     *  Constant: '<S498>/KeVLDR_Cnt_EXV_PressSens_SmpCnt'
     *  Logic: '<S502>/NOT3'
     *  RelationalOperator: '<S502>/Less Than  or Equal'
     */
    rtb_VM_Conditional_Signal_CPV_d = ((VeVLDR_Cnt_EXV_PressSens_SmpCnt >=
        KeVLDR_Cnt_EXV_PressSens_SmpCnt) && (!rtb_Logical44));

    /* Switch: '<S515>/Switch1' incorporates:
     *  Constant: '<S508>/Constant Value'
     *  DataStoreWrite: '<S493>/Data Store Write1'
     *  Switch: '<S514>/Switch1'
     */
    if (rtb_VM_Conditional_Signal_PostC)
    {
        VLDR_ac_DW.NeVLDR_Cnt_EXV_PressSens_MFOP = 0U;
    }
    else
    {
        if (rtb_VM_Conditional_Signal_CPV_d)
        {
            /* MinMax: '<S508>/Minimum2' incorporates:
             *  DataStoreRead: '<S493>/Data Store Read'
             *  Switch: '<S514>/Switch1'
             */
            if (VeVLDR_Cnt_EXV_PresSens_FailCnt >
                    VLDR_ac_DW.NeVLDR_Cnt_EXV_PressSens_MFOP)
            {
                /* DataStoreWrite: '<S493>/Data Store Write1' incorporates:
                 *  Switch: '<S514>/Switch1'
                 */
                VLDR_ac_DW.NeVLDR_Cnt_EXV_PressSens_MFOP =
                    VeVLDR_Cnt_EXV_PresSens_FailCnt;
            }

            /* End of MinMax: '<S508>/Minimum2' */
        }
    }

    /* End of Switch: '<S515>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S501>/Fail' */
    VLDR_ac_Fail(rtb_Logical44, &VLDR_ac_B.VariantMergeForOutportVeVLDR__g);

    /* End of Outputs for SubSystem: '<S501>/Fail' */

    /* Outputs for Enabled SubSystem: '<S501>/Init' */
    VLDR_ac_Init_a(rtb_VM_Conditional_Signal_CPV_l,
                   &VLDR_ac_B.VariantMergeForOutportVeVLDR__g);

    /* End of Outputs for SubSystem: '<S501>/Init' */

    /* Outputs for Enabled SubSystem: '<S501>/Pass' */
    VLDR_ac_Pass(rtb_VM_Conditional_Signal_CPV_d,
                 &VLDR_ac_B.VariantMergeForOutportVeVLDR__g);

    /* End of Outputs for SubSystem: '<S501>/Pass' */

    /* RelationalOperator: '<S501>/Relational Operator' incorporates:
     *  RelationalOperator: '<S494>/Relational Operator1'
     *  RelationalOperator: '<S494>/Relational Operator2'
     *  VariantMerge generated from: '<S392>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrBPerf'
     */
    VariantMergeForOutportEEXV_Pr_k = VLDR_ac_B.VariantMergeForOutportVeVLDR__g;

    /* VariantMerge generated from: '<S392>/EXV_PressSens_FltDtct' incorporates:
     *  Constant: '<S504>/Constant'
     *  RelationalOperator: '<S501>/Relational Operator'
     */
    VLDR_ac_B.VariantMergeForOutportEXV_Pre_k = (((uint32)
        VariantMergeForOutportEEXV_Pr_k) == CeDFIB_e_Fail);

    /* Logic: '<S494>/Logical38' incorporates:
     *  Constant: '<S521>/Constant'
     *  Constant: '<S522>/Constant'
     *  RelationalOperator: '<S494>/Relational Operator1'
     *  RelationalOperator: '<S494>/Relational Operator2'
     */
    rtb_VM_Conditional_Signal_CPV_l = ((((uint32)VariantMergeForOutportEEXV_Pr_k)
        == CeDFIB_e_Pass) || (((uint32)VariantMergeForOutportEEXV_Pr_k) ==
        CeDFIB_e_Fail));

    /* Switch: '<S582>/Switch3' */
    if (rtb_VM_Conditional_Signal_Logic)
    {
        /* Switch: '<S582>/Switch3' incorporates:
         *  Constant: '<S571>/KeVLDR_t_EXV_CntrTime2'
         */
        rtb_TmpSignalConversionAtVeT_d0 = KeVLDR_t_EXV_CntrTime2;
    }
    else
    {
        /* Switch: '<S582>/Switch3' */
        rtb_TmpSignalConversionAtVeT_d0 = rtb_TmpSignalConversionAtVeT_ld;
    }

    /* End of Switch: '<S582>/Switch3' */

    /* Outputs for Atomic SubSystem: '<S496>/EdgeFalling' */
    /* UnitDelay: '<S638>/Unit Delay1' incorporates:
     *  UnitDelay: '<S591>/Unit Delay'
     */
    rtb_VM_Conditional_Signal_Logic = VLDR_ac_DW.UnitDelay_DSTATE_gu;

    /* Update for UnitDelay: '<S591>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_gu = VeVLDR_b_EXV_PresSensSNA_DiagEn;

    /* Outputs for Atomic SubSystem: '<S496>/Signal Latch On With Reset' */
    /* Logic: '<S592>/OR1' incorporates:
     *  Logic: '<S591>/AND'
     *  Logic: '<S591>/OR1'
     *  Logic: '<S592>/NOT'
     *  Logic: '<S592>/OR'
     *  UnitDelay: '<S592>/Unit Delay'
     */
    rtb_VM_Conditional_Signal_CP_cz = (rtb_VM_Conditional_Signal_CP_cz ||
        (((VeVLDR_b_EXV_PresSensSNA_DiagEn) || (!rtb_VM_Conditional_Signal_Logic))
         && (VLDR_ac_DW.UnitDelay_DSTATE_ij)));

    /* End of Outputs for SubSystem: '<S496>/EdgeFalling' */

    /* Update for UnitDelay: '<S592>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_ij = rtb_VM_Conditional_Signal_CP_cz;

    /* End of Outputs for SubSystem: '<S496>/Signal Latch On With Reset' */

    /* Logic: '<S594>/Logical6' incorporates:
     *  Constant: '<S615>/Constant'
     *  Constant: '<S616>/Constant1'
     *  Constant: '<S616>/Constant2'
     *  Constant: '<S617>/Constant1'
     *  Constant: '<S617>/Constant2'
     *  Constant: '<S618>/Constant1'
     *  Constant: '<S618>/Constant2'
     *  Constant: '<S619>/KeVLDR_U_SysVltLwrLim'
     *  Constant: '<S620>/KeVLDR_U_SysVltUprLim'
     *  Constant: '<S622>/KeVLDR_b_EXV_TempElctrDiag_LOC_Ovrd'
     *  Constant: '<S623>/KeVLDR_b_EXV_TempElctrDiag_TempSens_Ovrd'
     *  Constant: '<S624>/KeVLDR_b_EXV_TempElctrDiag_ThrmlRlyErr_Ovrd'
     *  Logic: '<S594>/Logical1'
     *  Logic: '<S594>/Logical18'
     *  Logic: '<S594>/Logical21'
     *  Logic: '<S594>/Logical4'
     *  Logic: '<S594>/Logical5'
     *  Logic: '<S594>/Logical7'
     *  Logic: '<S594>/Logical8'
     *  Logic: '<S616>/Logical Operator'
     *  Logic: '<S617>/Logical Operator'
     *  Logic: '<S618>/Logical Operator'
     *  RelationalOperator: '<S594>/Comparison1'
     *  RelationalOperator: '<S594>/Comparison3'
     *  RelationalOperator: '<S594>/Comparison8'
     *  RelationalOperator: '<S616>/Relational Operator1'
     *  RelationalOperator: '<S616>/Relational Operator2'
     *  RelationalOperator: '<S617>/Relational Operator1'
     *  RelationalOperator: '<S617>/Relational Operator2'
     *  RelationalOperator: '<S618>/Relational Operator1'
     *  RelationalOperator: '<S618>/Relational Operator2'
     */
    VeVLDR_b_EXV_TmpElctrFlt_DiagEn = ((((((((rtb_VM_Conditional_Signal_BF1_S <
        KeVLDR_U_SysVltUprLim) && (rtb_VM_Conditional_Signal_BF1_S >
        KeVLDR_U_SysVltLwrLim)) && (((uint32)rtb_TmpSignalConversionAtVePMTR) !=
        CePMTR_e_DISBL_All_Thrml)) && (((rtb_VariantMergeForOutportDFI_0 <= 0) ||
        (rtb_UnitDelay_ly_tmp != 0U)) ||
        (KeVLDR_b_EXV_TempElctrDiag_ThrmlRlyErr_Ovrd))) &&
        rtb_TmpSignalConversionAtVeT_a4) && (((rtb_VariantMergeForOutportDFI_1 <=
        0) || (rtb_VariantMergeForOutportDFI_2 != 0U)) ||
        (KeVLDR_b_EXV_TempElctrDiag_LOC_Ovrd))) && (((rtb_Comparison4_mj_tmp_0 <=
        0) || (VeVLDR_b_EEXV_PrsElctrFlt_DiagE != 0U)) ||
        (KeVLDR_b_EXV_TempElctrDiag_TempSens_Ovrd))) &&
        rtb_TmpSignalConversionAtVeDFIR);

    /* RelationalOperator: '<S600>/Relational Operator3' incorporates:
     *  Constant: '<S600>/Constant3'
     */
    rtb_VariantMerge_For_Variant_So = (rtb_Comparison4_mj_tmp == 0U);

    /* Outputs for Atomic SubSystem: '<S600>/EdgeFalling1' */
    /* Logic: '<S600>/Logical Operator' incorporates:
     *  Logic: '<S602>/OR1'
     */
    rtb_LogicalOperator7 = !rtb_VariantMerge_For_Variant_So;

    /* End of Outputs for SubSystem: '<S600>/EdgeFalling1' */

    /* Logic: '<S600>/Logical1' incorporates:
     *  Constant: '<S598>/Calib'
     *  Constant: '<S599>/KeVLDR_b_EXV_TempElctrFlt_XYEnbl'
     *  Constant: '<S600>/Constant1'
     *  DataStoreRead: '<S593>/Data Store Read2'
     *  Logic: '<S593>/AND1'
     *  Logic: '<S600>/Logical Operator'
     *  Logic: '<S600>/Logical10'
     *  Logic: '<S600>/Logical12'
     *  RelationalOperator: '<S600>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S600>/Bitwise Operator3'
     */
    rtb_VM_Conditional_Signal_Logic = (((VeVLDR_b_EXV_TmpElctrFlt_DiagEn) &&
        (KeVLDR_b_EXV_TempElctrFlt_XYEnbl)) &&
        ((!KeVLDR_b_AC_RefrigTempSnsrACkt_LtchEnbl) || (((((uint32)
        VLDR_ac_DW.StatusByte_AC_RefrigTempSnsrACk) & 1U) == 0U) ||
        rtb_LogicalOperator7)));

    /* Rounding: '<S627>/Rounding2' incorporates:
     *  Constant: '<S628>/HeVLDR_K_EXV_RefTemp_Gain'
     *  Constant: '<S629>/HeVLDR_T_EXV_RefTemp_Offset'
     *  Product: '<S627>/Product'
     *  Sum: '<S627>/Sum1'
     */
    VeVLDR_T_EXV_TempRawData = roundf((rtb_TmpSignalConversionAtVeTA_o +
        HeVLDR_T_EXV_RefTemp_Offset) * HeVLDR_K_EXV_RefTemp_Gain);

    /* Outputs for Atomic SubSystem: '<S600>/EdgeFalling1' */
    /* Logic: '<S602>/AND' incorporates:
     *  UnitDelay: '<S602>/Unit Delay'
     */
    rtb_VariantMerge_For_Variant__h = (rtb_LogicalOperator7 &&
        (VLDR_ac_DW.UnitDelay_DSTATE_gv));

    /* Update for UnitDelay: '<S602>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_gv = rtb_VariantMerge_For_Variant_So;

    /* End of Outputs for SubSystem: '<S600>/EdgeFalling1' */

    /* Logic: '<S600>/Logical5' */
    rtb_VariantMerge_For_Variant__h = (rtb_Logical41_a ||
        rtb_VariantMerge_For_Variant__h);

    /* Logic: '<S601>/Fail Counter Reset' incorporates:
     *  UnitDelay: '<S601>/Unit Delay'
     *  UnitDelay: '<S601>/Unit Delay1'
     */
    rtb_VariantMerge_For_Variant_So = ((rtb_VariantMerge_For_Variant__h ||
        (VLDR_ac_DW.UnitDelay_DSTATE_pxm)) || (VLDR_ac_DW.UnitDelay1_DSTATE_pq));

    /* Outputs for Atomic SubSystem: '<S601>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S601>/Counter Reset  Enabled ' */
    /* Switch: '<S608>/Switch1' incorporates:
     *  Constant: '<S625>/HeVLDR_T_EXV_RefTemp_ShrtHigh'
     *  Constant: '<S626>/HeVLDR_T_EXV_RefTemp_ShrtLow'
     *  Logic: '<S595>/Logical18'
     *  Logic: '<S601>/NOT6'
     *  RelationalOperator: '<S595>/Comparison1'
     *  RelationalOperator: '<S595>/Comparison8'
     *  Switch: '<S608>/Switch2'
     *  Switch: '<S609>/Switch1'
     */
    if (rtb_VariantMerge_For_Variant_So)
    {
        /* Switch: '<S608>/Switch1' incorporates:
         *  Constant: '<S608>/Constant Value2'
         */
        VeVLDR_Cnt_EXV_TmpElFlt_FailCnt = 0U;

        /* Switch: '<S609>/Switch1' incorporates:
         *  Constant: '<S609>/Constant Value2'
         */
        VeVLDR_Cnt_EXV_TmpElFlt_SmpCnt = 0U;
    }
    else
    {
        if (rtb_VM_Conditional_Signal_Logic && ((VeVLDR_T_EXV_TempRawData ==
                HeVLDR_T_EXV_RefTemp_ShrtLow) || (VeVLDR_T_EXV_TempRawData ==
                HeVLDR_T_EXV_RefTemp_ShrtHigh)))
        {
            /* Switch: '<S608>/Switch2' incorporates:
             *  Constant: '<S608>/Constant Value1'
             *  Sum: '<S608>/Subtraction'
             *  Switch: '<S608>/Switch1'
             *  UnitDelay: '<S608>/Unit Delay'
             */
            VeVLDR_Cnt_EXV_TmpElFlt_FailCnt = (uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_po) + 1U);
        }
        else
        {
            /* Switch: '<S608>/Switch1' incorporates:
             *  Switch: '<S608>/Switch2'
             *  UnitDelay: '<S608>/Unit Delay'
             */
            VeVLDR_Cnt_EXV_TmpElFlt_FailCnt = VLDR_ac_DW.UnitDelay_DSTATE_po;
        }

        /* Switch: '<S609>/Switch2' */
        if (rtb_VM_Conditional_Signal_Logic)
        {
            /* Switch: '<S609>/Switch1' incorporates:
             *  Constant: '<S609>/Constant Value1'
             *  Sum: '<S609>/Subtraction'
             *  Switch: '<S609>/Switch2'
             *  UnitDelay: '<S609>/Unit Delay'
             */
            VeVLDR_Cnt_EXV_TmpElFlt_SmpCnt = (uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_hd) + 1U);
        }
        else
        {
            /* Switch: '<S609>/Switch1' incorporates:
             *  Switch: '<S609>/Switch2'
             *  UnitDelay: '<S609>/Unit Delay'
             */
            VeVLDR_Cnt_EXV_TmpElFlt_SmpCnt = VLDR_ac_DW.UnitDelay_DSTATE_hd;
        }

        /* End of Switch: '<S609>/Switch2' */
    }

    /* End of Switch: '<S608>/Switch1' */
    /* End of Outputs for SubSystem: '<S601>/Counter Reset  Enabled 1' */

    /* Update for UnitDelay: '<S608>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_po = VeVLDR_Cnt_EXV_TmpElFlt_FailCnt;

    /* End of Outputs for SubSystem: '<S601>/Counter Reset  Enabled ' */

    /* Outputs for Atomic SubSystem: '<S601>/Counter Reset  Enabled 1' */
    /* Update for UnitDelay: '<S609>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_hd = VeVLDR_Cnt_EXV_TmpElFlt_SmpCnt;

    /* End of Outputs for SubSystem: '<S601>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S601>/Greater Than or Equal ' incorporates:
     *  Constant: '<S596>/KeVLDR_Cnt_EXV_TempElctrFlt_FailCnt'
     */
    rtb_VM_Conditional_Signal_Logic = (VeVLDR_Cnt_EXV_TmpElFlt_FailCnt >=
        KeVLDR_Cnt_EXV_TempElctrFlt_FailCnt);

    /* Logic: '<S601>/NOT5' incorporates:
     *  Constant: '<S597>/KeVLDR_Cnt_EXV_TempElctrFlt_SmpCnt'
     *  Logic: '<S601>/NOT3'
     *  RelationalOperator: '<S601>/Less Than  or Equal'
     */
    rtb_VariantMerge_For_Variant_So = ((VeVLDR_Cnt_EXV_TmpElFlt_SmpCnt >=
        KeVLDR_Cnt_EXV_TempElctrFlt_SmpCnt) && (!rtb_VM_Conditional_Signal_Logic));

    /* Switch: '<S614>/Switch1' incorporates:
     *  Constant: '<S607>/Constant Value'
     *  DataStoreWrite: '<S593>/Data Store Write1'
     *  Switch: '<S613>/Switch1'
     */
    if (rtb_VM_Conditional_Signal_PostC)
    {
        VLDR_ac_DW.NeVLDR_Cnt_EXV_TempElctrFlt_MFO = 0U;
    }
    else
    {
        if (rtb_VariantMerge_For_Variant_So)
        {
            /* MinMax: '<S607>/Minimum2' incorporates:
             *  DataStoreRead: '<S593>/Data Store Read1'
             *  Switch: '<S613>/Switch1'
             */
            if (VeVLDR_Cnt_EXV_TmpElFlt_FailCnt >
                    VLDR_ac_DW.NeVLDR_Cnt_EXV_TempElctrFlt_MFO)
            {
                /* DataStoreWrite: '<S593>/Data Store Write1' incorporates:
                 *  Switch: '<S613>/Switch1'
                 */
                VLDR_ac_DW.NeVLDR_Cnt_EXV_TempElctrFlt_MFO =
                    VeVLDR_Cnt_EXV_TmpElFlt_FailCnt;
            }

            /* End of MinMax: '<S607>/Minimum2' */
        }
    }

    /* End of Switch: '<S614>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S600>/Fail' */
    VLDR_ac_Fail(rtb_VM_Conditional_Signal_Logic,
                 &VLDR_ac_B.VariantMergeForOutportVeVLDR_ho);

    /* End of Outputs for SubSystem: '<S600>/Fail' */

    /* Outputs for Enabled SubSystem: '<S600>/Init' */
    VLDR_ac_Init_a(rtb_VariantMerge_For_Variant__h,
                   &VLDR_ac_B.VariantMergeForOutportVeVLDR_ho);

    /* End of Outputs for SubSystem: '<S600>/Init' */

    /* Outputs for Enabled SubSystem: '<S600>/Pass' */
    VLDR_ac_Pass(rtb_VariantMerge_For_Variant_So,
                 &VLDR_ac_B.VariantMergeForOutportVeVLDR_ho);

    /* End of Outputs for SubSystem: '<S600>/Pass' */

    /* VariantMerge generated from: '<S392>/EXV_TempElctrFlt_FltDtct' incorporates:
     *  Constant: '<S603>/Constant'
     *  RelationalOperator: '<S600>/Relational Operator'
     *  VariantMerge generated from: '<S392>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrACkt'
     */
    VLDR_ac_B.VariantMergeForOutportEXV_TempE = (((uint32)
        VLDR_ac_B.VariantMergeForOutportVeVLDR_ho) == CeDFIB_e_Fail);

    /* SignalConversion generated from: '<S631>/Logical35' */
#if Rte_SysCon_Variant_VLDR_14

    /* UnitDelay: '<S638>/Unit Delay' incorporates:
     *  Constant: '<S631>/Constant4'
     */
    rtb_UnitDelay_lwd = true;

#else

    /* UnitDelay: '<S638>/Unit Delay' incorporates:
     *  SignalConversion generated from: '<S631>/Logical35'
     */
    rtb_UnitDelay_lwd = false;

#endif

    /* End of SignalConversion generated from: '<S631>/Logical35' */

    /* Inport: '<Root>/VePLTR_b_HCPOffTimeFA' */
    (void)Rte_Read_VePLTR_b_HCPOffTimeFA_Value(&rtb_AND_po);

    /* Inport: '<Root>/VePLTR_t_HCPOffTime' */
    (void)Rte_Read_VePLTR_t_HCPOffTime_Value(&tmpRead_f);

    /* Logic: '<S661>/Logical Operator' incorporates:
     *  Constant: '<S661>/Constant1'
     *  Constant: '<S661>/Constant2'
     *  DataStoreRead: '<S661>/StatusByte_HB_CT_SnsrPerf'
     *  RelationalOperator: '<S661>/Relational Operator1'
     *  RelationalOperator: '<S661>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S661>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S661>/Bitwise Operator2'
     */
    rtb_VariantMerge_For_Variant__h = (((((sint32)
        VLDR_ac_DW.StatusByte_HB_CT_SnsrPerf) & 1) > 0) && ((((uint32)
        VLDR_ac_DW.StatusByte_HB_CT_SnsrPerf) & 64U) == 0U));

    /* Logic: '<S660>/Logical Operator' incorporates:
     *  Constant: '<S660>/Constant1'
     *  Constant: '<S660>/Constant2'
     *  DataStoreRead: '<S660>/StatusByte_CoolOutTempSnsCkt'
     *  RelationalOperator: '<S660>/Relational Operator1'
     *  RelationalOperator: '<S660>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S660>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S660>/Bitwise Operator2'
     */
    rtb_LogicalOperator7 = (((((sint32)VLDR_ac_DW.StatusByte_CoolOutTempSnsCkt)
        & 1) > 0) && ((((uint32)VLDR_ac_DW.StatusByte_CoolOutTempSnsCkt) & 64U) ==
                      0U));

    /* Logic: '<S662>/Logical Operator' incorporates:
     *  Constant: '<S662>/Constant1'
     *  Constant: '<S662>/Constant2'
     *  DataStoreRead: '<S662>/StatusByte_HybBattCooTempSnsrCPer'
     *  RelationalOperator: '<S662>/Relational Operator1'
     *  RelationalOperator: '<S662>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S662>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S662>/Bitwise Operator2'
     */
    rtb_UnitDelay_dr = (((((sint32)VLDR_ac_DW.StatusByte_HybBattCooTempSnsrCP) &
                          1) > 0) && ((((uint32)
                           VLDR_ac_DW.StatusByte_HybBattCooTempSnsrCP) & 64U) ==
                         0U));

    /* Logic: '<S663>/Logical Operator' incorporates:
     *  Constant: '<S663>/Constant1'
     *  Constant: '<S663>/Constant2'
     *  DataStoreRead: '<S663>/StatusByte_HybBattCooTempSnsrDPer'
     *  RelationalOperator: '<S663>/Relational Operator1'
     *  RelationalOperator: '<S663>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S663>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S663>/Bitwise Operator2'
     */
    rtb_AND_ea = (((((sint32)VLDR_ac_DW.StatusByte_HybBattCooTempSnsrDP) & 1) >
                   0) && ((((uint32)VLDR_ac_DW.StatusByte_HybBattCooTempSnsrDP)
                           & 64U) == 0U));

    /* VariantMerge generated from: '<S392>/DFIR_EXV_TempSens' incorporates:
     *  Constant: '<S658>/Constant1'
     *  Constant: '<S658>/Constant2'
     *  Constant: '<S659>/Constant1'
     *  Constant: '<S659>/Constant2'
     *  Constant: '<S664>/Constant1'
     *  Constant: '<S664>/Constant2'
     *  Constant: '<S665>/Constant1'
     *  Constant: '<S665>/Constant2'
     *  Constant: '<S666>/Constant1'
     *  Constant: '<S666>/Constant2'
     *  Constant: '<S667>/Constant1'
     *  Constant: '<S667>/Constant2'
     *  Constant: '<S670>/HeVLDR_Cnt_EXV_BTOS_BTIS_limit'
     *  Constant: '<S675>/XeVLDR_b_EXV_CAN11Check_Ovrd'
     *  Logic: '<S631>/Logical10'
     *  Logic: '<S631>/Logical14'
     *  Logic: '<S631>/Logical30'
     *  Logic: '<S631>/Logical31'
     *  Logic: '<S631>/Logical35'
     *  Logic: '<S631>/Logical7'
     *  Logic: '<S658>/Logical Operator'
     *  Logic: '<S659>/Logical Operator'
     *  Logic: '<S664>/Logical Operator'
     *  Logic: '<S665>/Logical Operator'
     *  Logic: '<S666>/Logical Operator'
     *  Logic: '<S667>/Logical Operator'
     *  RelationalOperator: '<S631>/Comparison2'
     *  RelationalOperator: '<S658>/Relational Operator1'
     *  RelationalOperator: '<S658>/Relational Operator2'
     *  RelationalOperator: '<S659>/Relational Operator1'
     *  RelationalOperator: '<S659>/Relational Operator2'
     *  RelationalOperator: '<S664>/Relational Operator1'
     *  RelationalOperator: '<S664>/Relational Operator2'
     *  RelationalOperator: '<S665>/Relational Operator1'
     *  RelationalOperator: '<S665>/Relational Operator2'
     *  RelationalOperator: '<S666>/Relational Operator1'
     *  RelationalOperator: '<S666>/Relational Operator2'
     *  RelationalOperator: '<S667>/Relational Operator1'
     *  RelationalOperator: '<S667>/Relational Operator2'
     *  Sum: '<S631>/Sum1'
     *  Switch: '<S631>/Switch10'
     *  Switch: '<S631>/Switch6'
     *  Switch: '<S631>/Switch8'
     *  Switch: '<S631>/Switch9'
     */
    rtb_UnitDelay_lwd = (((((((rtb_UnitDelay1_o2_tmp <= 0) ||
        (rtb_Comparison4_mj_tmp_1 != 0U)) && ((rtb_UnitDelay1_o2_tmp_0 <= 0) ||
        (rtb_UnitDelay1_o2_tmp_1 != 0U))) && ((rtb_UnitDelay1_o2_tmp_2 <= 0) ||
        (rtb_UnitDelay1_o2_tmp_3 != 0U))) || (((((rtb_UnitDelay1_o2_tmp_4 <= 0) ||
        (rtb_UnitDelay1_o2_tmp_5 != 0U)) && ((rtb_UnitDelay1_o2_tmp_6 <= 0) ||
        (rtb_UnitDelay1_o2_tmp_7 != 0U))) && ((rtb_UnitDelay1_o2_tmp_8 <= 0) ||
        (rtb_UnitDelay1_o2_tmp_9 != 0U))) && (!rtb_UnitDelay_lwd))) ||
                          (KeVLDR_b_EXV_BCPCommCheck_Ovrd)) && (((sint32)
                           ((uint32)(((((uint32)(rtb_VariantMerge_For_Variant__h
        ? 1U : 0U)) + (rtb_LogicalOperator7 ? 1U : 0U)) + (rtb_UnitDelay_dr ? 1U
        : 0U)) + (rtb_AND_ea ? 1U : 0U)))) <= ((sint32)
                           HeVLDR_Cnt_EXV_BTOS_BTIS_limit)));

    /* Outputs for Atomic SubSystem: '<S631>/EdgeRising' */
    /* Logic: '<S652>/OR1' incorporates:
     *  UnitDelay: '<S652>/Unit Delay'
     */
    rtb_RelationalOperator3_f = !VLDR_ac_DW.UnitDelay_DSTATE_f0;

    /* Update for UnitDelay: '<S652>/Unit Delay' incorporates:
     *  Constant: '<S631>/TRUE Constant'
     */
    VLDR_ac_DW.UnitDelay_DSTATE_f0 = true;

    /* Outputs for Atomic SubSystem: '<S631>/Signal Latch On With Reset' */
    /* Logic: '<S683>/OR1' incorporates:
     *  Logic: '<S652>/AND'
     *  Logic: '<S683>/NOT'
     *  Logic: '<S683>/OR'
     *  UnitDelay: '<S631>/Unit Delay2'
     *  UnitDelay: '<S683>/Unit Delay'
     */
    rtb_RelationalOperator3_f = (rtb_RelationalOperator3_f ||
        ((!VLDR_ac_DW.UnitDelay2_DSTATE_n) && (VLDR_ac_DW.UnitDelay_DSTATE_aq)));

    /* End of Outputs for SubSystem: '<S631>/EdgeRising' */

    /* Update for UnitDelay: '<S683>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_aq = rtb_RelationalOperator3_f;

    /* End of Outputs for SubSystem: '<S631>/Signal Latch On With Reset' */

    /* Logic: '<S631>/Logical Operator1' incorporates:
     *  Constant: '<S681>/KeVLDR_t_VehicleSoakTime'
     *  Logic: '<S631>/Logical Operator'
     *  RelationalOperator: '<S631>/Comparison4'
     */
    rtb_AND_e0 = ((tmpRead_f >= KeVLDR_t_VehicleSoakTime) && (!rtb_AND_po));

    /* Outputs for Atomic SubSystem: '<S631>/EdgeRising1' */
    /* Logic: '<S653>/AND' incorporates:
     *  Logic: '<S653>/OR1'
     *  UnitDelay: '<S653>/Unit Delay'
     */
    rtb_AND_po = (rtb_AND_e0 && (!VLDR_ac_DW.UnitDelay_DSTATE_j3));

    /* Update for UnitDelay: '<S653>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_j3 = rtb_AND_e0;

    /* End of Outputs for SubSystem: '<S631>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S631>/Turn Off Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S684>/EdgeFalling1' */
    /* Logic: '<S686>/AND' incorporates:
     *  Logic: '<S686>/OR1'
     *  UnitDelay: '<S686>/Unit Delay'
     */
    rtb_AND_e0 = ((!rtb_AND_po) && (VLDR_ac_DW.UnitDelay_DSTATE_axm));

    /* Update for UnitDelay: '<S686>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_axm = rtb_AND_po;

    /* End of Outputs for SubSystem: '<S684>/EdgeFalling1' */

    /* Switch: '<S684>/Switch' */
    if (rtb_AND_e0)
    {
        /* Switch: '<S684>/Switch' incorporates:
         *  Constant: '<S672>/KeVLDR_Cnt_HoldVehicle_Soak'
         */
        rtb_Switch1_dj = KeVLDR_Cnt_HoldVehicle_Soak;
    }
    else
    {
        /* Sum: '<S684>/Summation' incorporates:
         *  Constant: '<S684>/Constant Value'
         *  UnitDelay: '<S684>/Unit Delay'
         */
        rtb_Comparison4_mj_tmp_0 = ((sint32)VLDR_ac_DW.UnitDelay_DSTATE_my) - 1;
        if ((((sint32)VLDR_ac_DW.UnitDelay_DSTATE_my) - 1) < 0)
        {
            rtb_Comparison4_mj_tmp_0 = 0;
        }

        /* Switch: '<S684>/Switch' incorporates:
         *  Sum: '<S684>/Summation'
         */
        rtb_Switch1_dj = (uint16)rtb_Comparison4_mj_tmp_0;
    }

    /* End of Switch: '<S684>/Switch' */
    /* End of Outputs for SubSystem: '<S631>/Turn Off Delay Sample' */

    /* Inport: '<Root>/VeTAIR_b_EXV_RefTemp_FA' */
    (void)Rte_Read_VeTAIR_b_EXV_RefTemp_FA_Value(&rtb_Logical8_h5);

    /* Outputs for Atomic SubSystem: '<S631>/Turn Off Delay Sample' */
    /* Update for UnitDelay: '<S684>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_my = rtb_Switch1_dj;

    /* Logic: '<S631>/Logical11' incorporates:
     *  Constant: '<S684>/Constant Value2'
     *  Logic: '<S684>/AND'
     *  RelationalOperator: '<S684>/Greater  Than'
     */
    VeVLDR_b_EXV_TempSensDiag_En = ((rtb_UnitDelay_lwd &&
        rtb_RelationalOperator3_f) && (rtb_AND_po || (((sint32)rtb_Switch1_dj) >
        0)));

    /* End of Outputs for SubSystem: '<S631>/Turn Off Delay Sample' */

    /* VariantMerge generated from: '<S392>/DFIR_EXV_TempSensSNA' incorporates:
     *  Constant: '<S657>/Constant1'
     *  Constant: '<S657>/Constant2'
     *  Constant: '<S668>/Constant1'
     *  Constant: '<S668>/Constant2'
     *  Constant: '<S669>/Constant1'
     *  Constant: '<S669>/Constant2'
     *  Constant: '<S677>/KeVLDR_b_EXV_TempSens_LOC_Ovrd'
     *  Constant: '<S678>/KeVLDR_b_EXV_TempSens_TempElctrFlt_Ovrd'
     *  Constant: '<S679>/KeVLDR_b_EXV_TempSens_ThrmlRlyErr_Ovrd'
     *  Logic: '<S631>/Logical16'
     *  Logic: '<S631>/Logical18'
     *  Logic: '<S631>/Logical20'
     *  Logic: '<S631>/Logical21'
     *  Logic: '<S631>/Logical22'
     *  Logic: '<S631>/Logical4'
     *  Logic: '<S631>/Logical5'
     *  Logic: '<S657>/Logical Operator'
     *  Logic: '<S668>/Logical Operator'
     *  Logic: '<S669>/Logical Operator'
     *  RelationalOperator: '<S657>/Relational Operator1'
     *  RelationalOperator: '<S657>/Relational Operator2'
     *  RelationalOperator: '<S668>/Relational Operator1'
     *  RelationalOperator: '<S668>/Relational Operator2'
     *  RelationalOperator: '<S669>/Relational Operator1'
     *  RelationalOperator: '<S669>/Relational Operator2'
     */
    rtb_AND_po = ((((((rtb_VariantMergeForOutportDFI_0 <= 0) ||
                      (rtb_UnitDelay_ly_tmp != 0U)) ||
                     (KeVLDR_b_EXV_TempSens_ThrmlRlyErr_Ovrd)) &&
                    rtb_TmpSignalConversionAtVeT_a4) &&
                   (((rtb_VariantMergeForOutportDFI_1 <= 0) ||
                     (rtb_VariantMergeForOutportDFI_2 != 0U)) ||
                    (KeVLDR_b_EXV_TempSens_LOC_Ovrd))) &&
                  (((rtb_VariantMergeForOutportDFI_3 <= 0) ||
                    (rtb_Comparison4_mj_tmp != 0U)) ||
                   (KeVLDR_b_EXV_TempSens_TempElctrFlt_Ovrd)));

    /* Logic: '<S631>/Logical6' incorporates:
     *  Constant: '<S656>/Constant'
     *  Constant: '<S673>/KeVLDR_U_SysVltLwrLim'
     *  Constant: '<S674>/KeVLDR_U_SysVltUprLim'
     *  Logic: '<S631>/Logical1'
     *  RelationalOperator: '<S631>/Comparison1'
     *  RelationalOperator: '<S631>/Comparison3'
     *  RelationalOperator: '<S631>/Comparison8'
     */
    VeVLDR_b_EXV_TempSensSNADiag_En = (((((rtb_VM_Conditional_Signal_BF1_S <
        KeVLDR_U_SysVltUprLim) && (rtb_VM_Conditional_Signal_BF1_S >
        KeVLDR_U_SysVltLwrLim)) && (((uint32)rtb_TmpSignalConversionAtVePMTR) !=
        CePMTR_e_DISBL_All_Thrml)) && rtb_AND_po) &&
        rtb_TmpSignalConversionAtVeDFIR);

    /* Logic: '<S631>/Logical8' */
    rtb_Logical8_h5 = (rtb_Logical8_h5 && (VeVLDR_b_EXV_TempSensSNADiag_En));

    /* Outputs for Atomic SubSystem: '<S631>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S685>/EdgeRising' */
    /* Logic: '<S687>/AND' incorporates:
     *  Logic: '<S687>/OR1'
     *  UnitDelay: '<S687>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeT_a4 = (rtb_Logical8_h5 &&
        (!VLDR_ac_DW.UnitDelay_DSTATE_dvs));

    /* Update for UnitDelay: '<S687>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_dvs = rtb_Logical8_h5;

    /* End of Outputs for SubSystem: '<S685>/EdgeRising' */

    /* Switch: '<S685>/Switch1' incorporates:
     *  Logic: '<S685>/OR'
     *  Logic: '<S685>/OR1'
     */
    if ((!rtb_Logical8_h5) || rtb_TmpSignalConversionAtVeT_a4)
    {
        /* Switch: '<S685>/Switch1' incorporates:
         *  Constant: '<S685>/Constant Value1'
         */
        rtb_TmpSignalConversionAtVeT_ld = 0.0F;
    }
    else
    {
        /* Switch: '<S685>/Switch1' incorporates:
         *  Constant: '<S671>/Calib'
         *  Constant: '<S680>/KeVLDR_t_EXV_FA_WaitTime'
         *  MinMax: '<S685>/Minimum'
         *  Sum: '<S685>/Summation'
         *  UnitDelay: '<S685>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeT_ld = fminf(KeVLDR_t_EXV_FA_WaitTime,
            HeVLDR_t_MedTED + VLDR_ac_DW.UnitDelay_DSTATE_pk);
    }

    /* End of Switch: '<S685>/Switch1' */
    /* End of Outputs for SubSystem: '<S631>/Turn On Delay Time' */

    /* Inport: '<Root>/VeTRIR_T_HV_BatClntTmpOut2' */
    (void)Rte_Read_VeTRIR_T_HV_BatClntTmpOut2_Value(&tmpRead_e);

    /* Inport: '<Root>/VeTRIR_T_HV_BatClntTmp2_In' */
    (void)Rte_Read_VeTRIR_T_HV_BatClntTmp2_In_Value(&tmpRead_d);

    /* Outputs for Atomic SubSystem: '<S631>/Turn On Delay Time' */
    /* Logic: '<S685>/AND' incorporates:
     *  Constant: '<S680>/KeVLDR_t_EXV_FA_WaitTime'
     *  RelationalOperator: '<S685>/Greater  Than'
     */
    rtb_Logical8_h5 = (rtb_Logical8_h5 && (rtb_TmpSignalConversionAtVeT_ld >=
                        KeVLDR_t_EXV_FA_WaitTime));

    /* Update for UnitDelay: '<S685>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_pk = rtb_TmpSignalConversionAtVeT_ld;

    /* End of Outputs for SubSystem: '<S631>/Turn On Delay Time' */

    /* RelationalOperator: '<S637>/Relational Operator3' incorporates:
     *  Constant: '<S637>/Constant3'
     */
    rtb_RelationalOperator3_f = (VeVLDR_b_EEXV_PrsElctrFlt_DiagE == 0U);

    /* Outputs for Atomic SubSystem: '<S637>/EdgeFalling1' */
    /* Logic: '<S637>/Logical Operator' incorporates:
     *  Logic: '<S639>/OR1'
     */
    rtb_AND_e0 = !rtb_RelationalOperator3_f;

    /* End of Outputs for SubSystem: '<S637>/EdgeFalling1' */

    /* Logic: '<S637>/Logical1' incorporates:
     *  Constant: '<S635>/Calib'
     *  Constant: '<S636>/KeVLDR_b_EXV_TempSens_XYEnbl'
     *  Constant: '<S637>/Constant1'
     *  Constant: '<S682>/Calib'
     *  DataStoreRead: '<S630>/Data Store Read2'
     *  Logic: '<S630>/AND1'
     *  Logic: '<S631>/Logical12'
     *  Logic: '<S631>/Logical13'
     *  Logic: '<S631>/Logical19'
     *  Logic: '<S637>/Logical Operator'
     *  Logic: '<S637>/Logical10'
     *  Logic: '<S637>/Logical12'
     *  RelationalOperator: '<S637>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S637>/Bitwise Operator3'
     */
    rtb_TmpSignalConversionAtVeT_a4 = (((((VeVLDR_b_EXV_TempSensDiag_En) &&
        (VeVLDR_b_EXV_TempSensSNADiag_En)) ||
        ((KeVLDR_b_EXV_TempSensorRatPerfCndsOV_En) && rtb_Logical8_h5)) &&
        (KeVLDR_b_EXV_TempSens_XYEnbl)) &&
        ((!KeVLDR_b_AC_RefrigTempSnsrAPerf_LtchEnbl) || (((((uint32)
        VLDR_ac_DW.StatusByte_AC_RefrigTempSnsrAPe) & 1U) == 0U) || rtb_AND_e0)));

    /* Sum: '<S632>/Sum' */
    VeVLDR_T_EXVRefTemp_BTIS_Diff = rtb_TmpSignalConversionAtVeTR_a -
        rtb_TmpSignalConversionAtVeTA_o;

    /* Sum: '<S632>/Sum1' */
    VeVLDR_T_EXVRefTemp_BTIS2_Diff = tmpRead_d - rtb_TmpSignalConversionAtVeTA_o;

    /* Sum: '<S632>/Sum2' */
    VeVLDR_T_EXVRefTemp_BTOS_Diff = rtb_TmpSignalConversionAtVeTRIR -
        rtb_TmpSignalConversionAtVeTA_o;

    /* Sum: '<S632>/Sum3' */
    VeVLDR_T_EXVRefTemp_BTOS2_Diff = tmpRead_e - rtb_TmpSignalConversionAtVeTA_o;

    /* Outputs for Atomic SubSystem: '<S637>/EdgeFalling1' */
    /* Logic: '<S639>/AND' incorporates:
     *  UnitDelay: '<S639>/Unit Delay'
     */
    rtb_AND_e0 = (rtb_AND_e0 && (VLDR_ac_DW.UnitDelay_DSTATE_j2));

    /* Update for UnitDelay: '<S639>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_j2 = rtb_RelationalOperator3_f;

    /* End of Outputs for SubSystem: '<S637>/EdgeFalling1' */

    /* Logic: '<S637>/Logical5' */
    rtb_Logical41_a = (rtb_Logical41_a || rtb_AND_e0);

    /* Logic: '<S638>/Fail Counter Reset' incorporates:
     *  UnitDelay: '<S638>/Unit Delay'
     *  UnitDelay: '<S638>/Unit Delay1'
     */
    rtb_RelationalOperator3_f = ((rtb_Logical41_a ||
        (VLDR_ac_DW.UnitDelay_DSTATE_h4)) || (VLDR_ac_DW.UnitDelay1_DSTATE_gp));

    /* Outputs for Atomic SubSystem: '<S638>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S638>/Counter Reset  Enabled ' */
    /* Switch: '<S645>/Switch1' incorporates:
     *  Abs: '<S632>/Abs'
     *  Abs: '<S632>/Abs1'
     *  Abs: '<S632>/Abs2'
     *  Abs: '<S632>/Abs3'
     *  Constant: '<S688>/HeVLDR_Cnt_EXV_BTOS_BTIS_limit'
     *  Constant: '<S689>/KeVLDR_T_EXVRefTemp_BTIS2_TmpLim'
     *  Constant: '<S690>/KeVLDR_T_EXVRefTemp_BTIS_TmpLim'
     *  Constant: '<S691>/KeVLDR_T_EXVRefTemp_BTOS2_TmpLim'
     *  Constant: '<S692>/KeVLDR_T_EXVRefTemp_BTOS_TmpLim'
     *  Constant: '<S693>/KeVLDR_b_EXV_RefTempFA_Enbl'
     *  Logic: '<S632>/Logical1'
     *  Logic: '<S632>/Logical14'
     *  Logic: '<S632>/Logical2'
     *  Logic: '<S632>/Logical3'
     *  Logic: '<S632>/Logical4'
     *  Logic: '<S632>/Logical5'
     *  Logic: '<S632>/Logical6'
     *  Logic: '<S632>/Logical7'
     *  Logic: '<S632>/Logical8'
     *  Logic: '<S632>/Logical9'
     *  Logic: '<S638>/NOT6'
     *  RelationalOperator: '<S632>/Comparison1'
     *  RelationalOperator: '<S632>/Comparison2'
     *  RelationalOperator: '<S632>/Comparison3'
     *  RelationalOperator: '<S632>/Comparison4'
     *  RelationalOperator: '<S632>/Comparison5'
     *  Sum: '<S632>/Sum5'
     *  Switch: '<S645>/Switch2'
     *  Switch: '<S646>/Switch1'
     */
    if (rtb_RelationalOperator3_f)
    {
        /* Switch: '<S645>/Switch1' incorporates:
         *  Constant: '<S645>/Constant Value2'
         */
        VeVLDR_Cnt_EXV_TempSens_FailCnt = 0U;

        /* Switch: '<S646>/Switch1' incorporates:
         *  Constant: '<S646>/Constant Value2'
         */
        VeVLDR_Cnt_EXV_TempSens_SmpCnt = 0U;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeT_a4 && ((((sint32)((uint32)(((((uint32)
                    (((!rtb_VariantMerge_For_Variant__h) && (fabsf
                       (VeVLDR_T_EXVRefTemp_BTIS_Diff) >
                       KeVLDR_T_EXVRefTemp_BTIS_TmpLim)) ? 1 : 0)) + ((uint32)
                    (((!rtb_LogicalOperator7) && (fabsf
                       (VeVLDR_T_EXVRefTemp_BTIS2_Diff) >
                       KeVLDR_T_EXVRefTemp_BTIS2_TmpLim)) ? 1 : 0))) + ((uint32)
                   (((!rtb_UnitDelay_dr) && (fabsf(VeVLDR_T_EXVRefTemp_BTOS_Diff)
                      > KeVLDR_T_EXVRefTemp_BTOS_TmpLim)) ? 1 : 0))) + ((uint32)
                  (((!rtb_AND_ea) && (fabsf(VeVLDR_T_EXVRefTemp_BTOS2_Diff) >
                     KeVLDR_T_EXVRefTemp_BTOS2_TmpLim)) ? 1 : 0))))) >= ((sint32)
                HeVLDR_Cnt_EXV_BTOS_BTIS_limit)) || (rtb_Logical8_h5 &&
                (KeVLDR_b_EXV_RefTempFA_Enbl))))
        {
            /* Switch: '<S645>/Switch2' incorporates:
             *  Constant: '<S645>/Constant Value1'
             *  Sum: '<S645>/Subtraction'
             *  Switch: '<S645>/Switch1'
             *  UnitDelay: '<S645>/Unit Delay'
             */
            VeVLDR_Cnt_EXV_TempSens_FailCnt = (uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_cx) + 1U);
        }
        else
        {
            /* Switch: '<S645>/Switch1' incorporates:
             *  Switch: '<S645>/Switch2'
             *  UnitDelay: '<S645>/Unit Delay'
             */
            VeVLDR_Cnt_EXV_TempSens_FailCnt = VLDR_ac_DW.UnitDelay_DSTATE_cx;
        }

        /* Switch: '<S646>/Switch2' */
        if (rtb_TmpSignalConversionAtVeT_a4)
        {
            /* Switch: '<S646>/Switch1' incorporates:
             *  Constant: '<S646>/Constant Value1'
             *  Sum: '<S646>/Subtraction'
             *  Switch: '<S646>/Switch2'
             *  UnitDelay: '<S646>/Unit Delay'
             */
            VeVLDR_Cnt_EXV_TempSens_SmpCnt = (uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_if) + 1U);
        }
        else
        {
            /* Switch: '<S646>/Switch1' incorporates:
             *  Switch: '<S646>/Switch2'
             *  UnitDelay: '<S646>/Unit Delay'
             */
            VeVLDR_Cnt_EXV_TempSens_SmpCnt = VLDR_ac_DW.UnitDelay_DSTATE_if;
        }

        /* End of Switch: '<S646>/Switch2' */
    }

    /* End of Switch: '<S645>/Switch1' */
    /* End of Outputs for SubSystem: '<S638>/Counter Reset  Enabled 1' */

    /* Update for UnitDelay: '<S645>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_cx = VeVLDR_Cnt_EXV_TempSens_FailCnt;

    /* End of Outputs for SubSystem: '<S638>/Counter Reset  Enabled ' */

    /* Outputs for Atomic SubSystem: '<S638>/Counter Reset  Enabled 1' */
    /* Update for UnitDelay: '<S646>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_if = VeVLDR_Cnt_EXV_TempSens_SmpCnt;

    /* End of Outputs for SubSystem: '<S638>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S638>/Greater Than or Equal ' incorporates:
     *  Constant: '<S633>/KeVLDR_Cnt_EXV_TempSens_FailCnt'
     */
    rtb_Logical8_h5 = (VeVLDR_Cnt_EXV_TempSens_FailCnt >=
                       KeVLDR_Cnt_EXV_TempSens_FailCnt);

    /* Logic: '<S638>/NOT5' incorporates:
     *  Constant: '<S634>/KeVLDR_Cnt_EXV_TempSens_SmpCnt'
     *  Logic: '<S638>/NOT3'
     *  RelationalOperator: '<S638>/Less Than  or Equal'
     */
    rtb_TmpSignalConversionAtVeT_a4 = ((VeVLDR_Cnt_EXV_TempSens_SmpCnt >=
        KeVLDR_Cnt_EXV_TempSens_SmpCnt) && (!rtb_Logical8_h5));

    /* Switch: '<S651>/Switch1' incorporates:
     *  Constant: '<S644>/Constant Value'
     *  DataStoreWrite: '<S630>/Data Store Write'
     *  Switch: '<S650>/Switch1'
     */
    if (rtb_VM_Conditional_Signal_PostC)
    {
        VLDR_ac_DW.NeVLDR_Cnt_EXV_TempSens_MFOP = 0U;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeT_a4)
        {
            /* MinMax: '<S644>/Minimum2' incorporates:
             *  DataStoreRead: '<S630>/Data Store Read1'
             *  Switch: '<S650>/Switch1'
             */
            if (VeVLDR_Cnt_EXV_TempSens_FailCnt >
                    VLDR_ac_DW.NeVLDR_Cnt_EXV_TempSens_MFOP)
            {
                /* DataStoreWrite: '<S630>/Data Store Write' incorporates:
                 *  Switch: '<S650>/Switch1'
                 */
                VLDR_ac_DW.NeVLDR_Cnt_EXV_TempSens_MFOP =
                    VeVLDR_Cnt_EXV_TempSens_FailCnt;
            }

            /* End of MinMax: '<S644>/Minimum2' */
        }
    }

    /* End of Switch: '<S651>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S637>/Fail' */
    VLDR_ac_Fail(rtb_Logical8_h5, &VLDR_ac_B.VariantMergeForOutportVeVLDR__n);

    /* End of Outputs for SubSystem: '<S637>/Fail' */

    /* Outputs for Enabled SubSystem: '<S637>/Init' */
    VLDR_ac_Init_a(rtb_Logical41_a, &VLDR_ac_B.VariantMergeForOutportVeVLDR__n);

    /* End of Outputs for SubSystem: '<S637>/Init' */

    /* Outputs for Enabled SubSystem: '<S637>/Pass' */
    VLDR_ac_Pass(rtb_TmpSignalConversionAtVeT_a4,
                 &VLDR_ac_B.VariantMergeForOutportVeVLDR__n);

    /* End of Outputs for SubSystem: '<S637>/Pass' */

    /* RelationalOperator: '<S637>/Relational Operator' incorporates:
     *  RelationalOperator: '<S631>/Relational Operator1'
     *  RelationalOperator: '<S631>/Relational Operator2'
     *  VariantMerge generated from: '<S392>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrAPerf'
     */
    VariantMergeForOutportEEXV_Pr_k = VLDR_ac_B.VariantMergeForOutportVeVLDR__n;

    /* VariantMerge generated from: '<S392>/EXV_TempSens_FltDtct' incorporates:
     *  Constant: '<S640>/Constant'
     *  RelationalOperator: '<S637>/Relational Operator'
     */
    VLDR_ac_B.VariantMergeForOutportEXV_TempS = (((uint32)
        VariantMergeForOutportEEXV_Pr_k) == CeDFIB_e_Fail);

    /* Logic: '<S631>/Logical38' incorporates:
     *  Constant: '<S654>/Constant'
     *  Constant: '<S655>/Constant'
     *  RelationalOperator: '<S631>/Relational Operator1'
     *  RelationalOperator: '<S631>/Relational Operator2'
     */
    rtb_Logical41_a = ((((uint32)VariantMergeForOutportEEXV_Pr_k) ==
                        CeDFIB_e_Pass) || (((uint32)
                         VariantMergeForOutportEEXV_Pr_k) == CeDFIB_e_Fail));

    /* Update for UnitDelay: '<S412>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_n12 = rtb_VM_Conditional_Signal_CPV_f;

    /* Update for UnitDelay: '<S412>/Unit Delay1' */
    VLDR_ac_DW.UnitDelay1_DSTATE_kg = rtb_VM_Conditional_Signal_CPV_D;

    /* Update for UnitDelay: '<S460>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_iu = rtb_VM_Conditional_Signal_CPV_m;

    /* Update for UnitDelay: '<S460>/Unit Delay1' */
    VLDR_ac_DW.UnitDelay1_DSTATE_fd = rtb_VM_Conditional_Signal_CPV_n;

    /* Update for UnitDelay: '<S516>/Unit Delay1' */
    VLDR_ac_DW.UnitDelay1_DSTATE_b = rtb_Switch1_e4v;

    /* Update for UnitDelay: '<S516>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_c = rtb_TmpSignalConversionAtVeT_dk;

    /* Update for UnitDelay: '<S582>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_ca = rtb_TmpSignalConversionAtVeT_d0;

    /* Update for UnitDelay: '<S494>/Unit Delay1' */
    VLDR_ac_DW.UnitDelay1_DSTATE_au = rtb_VM_Conditional_Signal_CP_cz;

    /* Update for UnitDelay: '<S494>/Unit Delay2' */
    VLDR_ac_DW.UnitDelay2_DSTATE_e = rtb_VM_Conditional_Signal_CPV_l;

    /* Update for UnitDelay: '<S496>/Unit Delay1' */
    VLDR_ac_DW.UnitDelay1_DSTATE_p = VeVLDR_p_EXV_PressLatch;

    /* Update for UnitDelay: '<S502>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_jj = rtb_VM_Conditional_Signal_CPV_d;

    /* Update for UnitDelay: '<S502>/Unit Delay1' */
    VLDR_ac_DW.UnitDelay1_DSTATE_kc = rtb_Logical44;

    /* Update for UnitDelay: '<S601>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_pxm = rtb_VariantMerge_For_Variant_So;

    /* Update for UnitDelay: '<S601>/Unit Delay1' */
    VLDR_ac_DW.UnitDelay1_DSTATE_pq = rtb_VM_Conditional_Signal_Logic;

    /* Update for UnitDelay: '<S631>/Unit Delay2' */
    VLDR_ac_DW.UnitDelay2_DSTATE_n = rtb_Logical41_a;

    /* Update for UnitDelay: '<S638>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_h4 = rtb_TmpSignalConversionAtVeT_a4;

    /* Update for UnitDelay: '<S638>/Unit Delay1' */
    VLDR_ac_DW.UnitDelay1_DSTATE_gp = rtb_Logical8_h5;

    /* End of Outputs for SubSystem: '<S392>/EXV_Active_Diag' */
#else

    /* Outputs for Atomic SubSystem: '<S392>/EXV_Stub' */
    /* VariantMerge generated from: '<S392>/EXV_PressElctrFlt_FltDtct' incorporates:
     *  Constant: '<S394>/FALSE Constant'
     */
    VLDR_ac_B.VariantMergeForOutportEXV_Press = false;

    /* VariantMerge generated from: '<S392>/EXV_TempElctrFlt_FltDtct' incorporates:
     *  Constant: '<S394>/FALSE Constant1'
     */
    VLDR_ac_B.VariantMergeForOutportEXV_TempE = false;

    /* VariantMerge generated from: '<S392>/EXV_PerfDiag_FltDtct' incorporates:
     *  Constant: '<S394>/FALSE Constant2'
     */
    VLDR_ac_B.VariantMergeForOutportEXV_PerfD = false;

    /* VariantMerge generated from: '<S392>/EXV_PressSens_FltDtct' incorporates:
     *  Constant: '<S394>/FALSE Constant3'
     */
    VLDR_ac_B.VariantMergeForOutportEXV_Pre_k = false;

    /* VariantMerge generated from: '<S392>/EXV_TempSens_FltDtct' incorporates:
     *  Constant: '<S394>/FALSE Constant4'
     */
    VLDR_ac_B.VariantMergeForOutportEXV_TempS = false;

    /* VariantMerge generated from: '<S392>/EXV_PressShrtHigh' incorporates:
     *  Constant: '<S394>/FALSE Constant5'
     */
    VLDR_ac_B.VariantMergeForOutportEXV_Pre_b = false;

    /* VariantMerge generated from: '<S392>/DFIR_EXV_PerfDiag' incorporates:
     *  Constant: '<S394>/FALSE Constant6'
     */
    rtb_VariantMergeForOutportDF_ko = false;

    /* VariantMerge generated from: '<S392>/DFIR_EXV_TempSensSNA' incorporates:
     *  Constant: '<S394>/FALSE Constant7'
     */
    rtb_AND_po = false;

    /* VariantMerge generated from: '<S392>/DFIR_EXV_PressSensSNA' incorporates:
     *  Constant: '<S394>/FALSE Constant8'
     */
    rtb_Logical12_c5 = false;

    /* VariantMerge generated from: '<S392>/DFIR_EXV_PressSens' incorporates:
     *  Constant: '<S394>/FALSE Constant9'
     */
    rtb_UnitDelay1_e = false;

    /* VariantMerge generated from: '<S392>/DFIR_EXV_TempSens' incorporates:
     *  Constant: '<S394>/FALSE Constant10'
     */
    rtb_UnitDelay_lwd = false;

    /* VariantMerge generated from: '<S392>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrBCkt' incorporates:
     *  Constant: '<S694>/Constant'
     */
    VLDR_ac_B.VariantMergeForOutportVeVLDR__l = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S392>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrACkt' incorporates:
     *  Constant: '<S695>/Constant'
     */
    VLDR_ac_B.VariantMergeForOutportVeVLDR_ho = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S392>/VeVLDR_e_FaultSts_AC_RefrigExpVlvActCtrCktPerf' incorporates:
     *  Constant: '<S696>/Constant'
     */
    VLDR_ac_B.VariantMergeForOutportVeVLDR_h4 = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S392>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrBPerf' incorporates:
     *  Constant: '<S697>/Constant'
     */
    VLDR_ac_B.VariantMergeForOutportVeVLDR__g = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S392>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrAPerf' incorporates:
     *  Constant: '<S698>/Constant'
     */
    VLDR_ac_B.VariantMergeForOutportVeVLDR__n = CeDFIB_e_Init;

    /* End of Outputs for SubSystem: '<S392>/EXV_Stub' */
#endif

    /* End of Outputs for SubSystem: '<S12>/EXV' */

    /* Outputs for Atomic SubSystem: '<S13>/HTCV_Diag' */
#if Rte_SysCon_Variant_VLDR_2

    /* Outputs for Atomic SubSystem: '<S699>/HT_Cabin_Vlv_Diag' */
    /* Inport: '<Root>/VePMIR_T_LTActvPumpTemp' */
    (void)Rte_Read_VePMIR_T_LTActvPumpTemp_Value(&tmpRead_9);

    /* UnitDelay: '<S779>/Unit Delay1' incorporates:
     *  Constant: '<S703>/Constant'
     *  RelationalOperator: '<S700>/Comparison8'
     *  SignalConversion generated from: '<S1>/VePMTR_e_ThrmlDevEnbl'
     */
    rtb_Logical44 = (((uint32)rtb_TmpSignalConversionAtVePMTR) !=
                     CePMTR_e_DISBL_All_Thrml);

    /* Logic: '<S702>/NOT4' */
    rtb_Logical8_h5 = (rtb_VM_Conditional_Signal_DsblD ||
                       rtb_VM_Conditional_Signal_PostC);

    /* Outputs for Atomic SubSystem: '<S715>/EdgeRising' */
    /* Logic: '<S716>/AND' incorporates:
     *  Logic: '<S716>/OR1'
     *  UnitDelay: '<S716>/Unit Delay'
     */
    rtb_Logical41_a = !VLDR_ac_DW.UnitDelay_DSTATE_mf;

    /* Update for UnitDelay: '<S716>/Unit Delay' incorporates:
     *  Constant: '<S715>/TRUE Constant'
     */
    VLDR_ac_DW.UnitDelay_DSTATE_mf = true;

    /* End of Outputs for SubSystem: '<S715>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S722>/Signal Latch On With Reset' */
    /* Logic: '<S724>/OR1' incorporates:
     *  Logic: '<S724>/NOT'
     *  Logic: '<S724>/OR'
     *  UnitDelay: '<S715>/Unit Delay1'
     *  UnitDelay: '<S724>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeT_a4 = ((VLDR_ac_DW.UnitDelay1_DSTATE_ph) ||
        ((!rtb_Logical41_a) && (VLDR_ac_DW.UnitDelay_DSTATE_ay)));

    /* Update for UnitDelay: '<S724>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_ay = rtb_TmpSignalConversionAtVeT_a4;

    /* End of Outputs for SubSystem: '<S722>/Signal Latch On With Reset' */

    /* UnitDelay: '<S756>/Unit Delay1' incorporates:
     *  Sum: '<S715>/Sum1'
     */
    rtb_TmpSignalConversionAtVeTRIR -= tmpRead_9;

    /* Switch: '<S722>/Switch1' */
    if (rtb_TmpSignalConversionAtVeT_a4)
    {
        /* Switch: '<S722>/Switch1' incorporates:
         *  UnitDelay: '<S722>/Unit Delay1'
         */
        VeVLDR_dT_HTCV_Temp_Diff_IV = VLDR_ac_DW.UnitDelay1_DSTATE_a;
    }
    else
    {
        /* Switch: '<S722>/Switch1' */
        VeVLDR_dT_HTCV_Temp_Diff_IV = rtb_TmpSignalConversionAtVeTRIR;
    }

    /* End of Switch: '<S722>/Switch1' */

    /* Sum: '<S715>/Sum2' */
    VeVLDR_dT_HTCV_Temp_Diff_AS = rtb_TmpSignalConversionAtVeTRIR -
        VeVLDR_dT_HTCV_Temp_Diff_IV;

    /* Outputs for Atomic SubSystem: '<S715>/Signal Latch On With Reset' */
    /* Logic: '<S721>/OR1' incorporates:
     *  Logic: '<S721>/NOT'
     *  Logic: '<S721>/OR'
     *  RelationalOperator: '<S715>/Not Equal'
     *  UnitDelay: '<S715>/Unit Delay'
     *  UnitDelay: '<S721>/Unit Delay'
     */
    rtb_Logical41_a = ((VeVLDR_dT_HTCV_Temp_Diff_IV !=
                        VLDR_ac_DW.UnitDelay_DSTATE_e5) || ((!rtb_Logical41_a) &&
                        (VLDR_ac_DW.UnitDelay_DSTATE_bqe)));

    /* Update for UnitDelay: '<S721>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_bqe = rtb_Logical41_a;

    /* End of Outputs for SubSystem: '<S715>/Signal Latch On With Reset' */

    /* Outputs for Atomic SubSystem: '<S715>/EdgeRising1' */
    /* Logic: '<S717>/OR1' incorporates:
     *  UnitDelay: '<S717>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeT_a4 = !VLDR_ac_DW.UnitDelay_DSTATE_d2;

    /* Update for UnitDelay: '<S717>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_d2 = rtb_Logical41_a;

    /* Outputs for Atomic SubSystem: '<S715>/Timer Retrigger Reset Enabled1' */
    /* Switch: '<S723>/Switch1' incorporates:
     *  Logic: '<S717>/AND'
     *  Switch: '<S723>/Switch2'
     */
    if (rtb_Logical41_a && rtb_TmpSignalConversionAtVeT_a4)
    {
        /* Switch: '<S723>/Switch1' incorporates:
         *  Constant: '<S720>/KeVLDR_t_WaitTime_B4_LeakDiagEn'
         */
        rtb_TmpSignalConversionAtVeTRIR = KeVLDR_t_WaitTime_B4_LeakDiagEn;
    }
    else if (rtb_Logical41_a)
    {
        /* Switch: '<S723>/Switch2' incorporates:
         *  Constant: '<S719>/KeVLDR_t_LeakDiag'
         *  Constant: '<S723>/Constant Value4'
         *  MinMax: '<S723>/Maximum'
         *  Sum: '<S723>/Subtraction'
         *  Switch: '<S723>/Switch1'
         *  UnitDelay: '<S723>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeTRIR = fmaxf(VLDR_ac_DW.UnitDelay_DSTATE_kfq
            - KeVLDR_t_LeakDiag, 0.0F);
    }
    else
    {
        /* Switch: '<S723>/Switch1' incorporates:
         *  Switch: '<S723>/Switch2'
         *  UnitDelay: '<S723>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeTRIR = VLDR_ac_DW.UnitDelay_DSTATE_kfq;
    }

    /* End of Switch: '<S723>/Switch1' */
    /* End of Outputs for SubSystem: '<S715>/EdgeRising1' */

    /* Update for UnitDelay: '<S723>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_kfq = rtb_TmpSignalConversionAtVeTRIR;

    /* Logic: '<S715>/Logical2' incorporates:
     *  Constant: '<S723>/Constant Value2'
     *  RelationalOperator: '<S723>/Greater  Than1'
     */
    VeVLDR_b_HCTV_DiagEn = (rtb_TmpSignalConversionAtVeTRIR <= 0.0F);

    /* End of Outputs for SubSystem: '<S715>/Timer Retrigger Reset Enabled1' */

    /* Logic: '<S715>/Logical' incorporates:
     *  Constant: '<S718>/KeVLDR_T_HTCV_Leak_Err_Lim'
     *  RelationalOperator: '<S715>/Comparison2'
     */
    VeVLDR_b_HTCV_Leak_FltSymptom = ((VeVLDR_b_HCTV_DiagEn) &&
        (VeVLDR_dT_HTCV_Temp_Diff_AS > KeVLDR_T_HTCV_Leak_Err_Lim));

    /* Logic: '<S700>/Logical3' incorporates:
     *  Constant: '<S706>/Constant1'
     *  Constant: '<S706>/Constant2'
     *  Constant: '<S707>/Constant1'
     *  Constant: '<S707>/Constant2'
     *  Constant: '<S708>/Constant1'
     *  Constant: '<S708>/Constant2'
     *  DataStoreRead: '<S706>/StatusByte_CoolantVlvA_CktHi'
     *  DataStoreRead: '<S707>/StatusByte_CoolantVlvA_CktLo'
     *  DataStoreRead: '<S708>/StatusByte_CoolantVlvA_Ckt'
     *  Logic: '<S706>/Logical Operator'
     *  Logic: '<S707>/Logical Operator'
     *  Logic: '<S708>/Logical Operator'
     *  RelationalOperator: '<S706>/Relational Operator1'
     *  RelationalOperator: '<S706>/Relational Operator2'
     *  RelationalOperator: '<S707>/Relational Operator1'
     *  RelationalOperator: '<S707>/Relational Operator2'
     *  RelationalOperator: '<S708>/Relational Operator1'
     *  RelationalOperator: '<S708>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S706>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S706>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S707>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S707>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S708>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S708>/Bitwise Operator2'
     */
    VeVLDR_b_HTCV_PinDiagSet = (((((((sint32)
        VLDR_ac_DW.StatusByte_CoolantVlvA_Ckt) & 1) > 0) && ((((uint32)
        VLDR_ac_DW.StatusByte_CoolantVlvA_Ckt) & 64U) == 0U)) || (((((sint32)
        VLDR_ac_DW.StatusByte_CoolantVlvA_CktLo) & 1) > 0) && ((((uint32)
        VLDR_ac_DW.StatusByte_CoolantVlvA_CktLo) & 64U) == 0U))) || (((((sint32)
        VLDR_ac_DW.StatusByte_CoolantVlvA_CktHi) & 1) > 0) && ((((uint32)
        VLDR_ac_DW.StatusByte_CoolantVlvA_CktHi) & 64U) == 0U)));

    /* Logic: '<S725>/Logical8' incorporates:
     *  Logic: '<S756>/Logical11'
     */
    rtb_TmpSignalConversionAtVeT_cs = !rtb_TmpSignalConversionAtVeT_cs;

    /* Logic: '<S725>/Logical6' incorporates:
     *  Logic: '<S756>/Logical9'
     */
    rtb_VM_Conditional_Signal_CPV_f = !VeVLDR_b_HTCV_PinDiagSet;

    /* VariantMerge generated from: '<S699>/HTCV_Leak_Enable' incorporates:
     *  Constant: '<S704>/Constant1'
     *  Constant: '<S704>/Constant2'
     *  Constant: '<S705>/Constant1'
     *  Constant: '<S705>/Constant2'
     *  Constant: '<S709>/Constant1'
     *  Constant: '<S709>/Constant2'
     *  Constant: '<S727>/KeVLDR_Pct_HTCV_Open_Pos'
     *  Constant: '<S728>/KeVLDR_b_HTCVDiagTmrEn_Ovrd'
     *  Constant: '<S729>/KeVLDR_b_HTCV_HVBTISFA_Ovrd'
     *  Constant: '<S730>/KeVLDR_b_HTCV_HVBTOSFA_Ovrd'
     *  Constant: '<S731>/KeVLDR_b_HTCV_LTAPTempFA_Ovrd'
     *  Constant: '<S732>/KeVLDR_b_ValidPWM_Leak_Ovrd'
     *  DataStoreRead: '<S704>/StatusByte_BattCoolPmpATempSnsrPerf'
     *  DataStoreRead: '<S705>/StatusByte_CoolOutTempSnsCkt'
     *  DataStoreRead: '<S709>/StatusByte_HB_CT_SnsrPerf'
     *  Logic: '<S704>/Logical Operator'
     *  Logic: '<S705>/Logical Operator'
     *  Logic: '<S709>/Logical Operator'
     *  Logic: '<S725>/Logical'
     *  Logic: '<S725>/Logical10'
     *  Logic: '<S725>/Logical11'
     *  Logic: '<S725>/Logical2'
     *  Logic: '<S725>/Logical3'
     *  Logic: '<S725>/Logical4'
     *  Logic: '<S725>/Logical5'
     *  Logic: '<S725>/Logical6'
     *  Logic: '<S725>/Logical7'
     *  Logic: '<S725>/Logical8'
     *  Logic: '<S725>/Logical9'
     *  RelationalOperator: '<S704>/Relational Operator1'
     *  RelationalOperator: '<S704>/Relational Operator2'
     *  RelationalOperator: '<S705>/Relational Operator1'
     *  RelationalOperator: '<S705>/Relational Operator2'
     *  RelationalOperator: '<S709>/Relational Operator1'
     *  RelationalOperator: '<S709>/Relational Operator2'
     *  RelationalOperator: '<S725>/Comparison5'
     *  S-Function (sfix_bitop): '<S704>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S704>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S705>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S705>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S709>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S709>/Bitwise Operator2'
     */
    VeVLDR_b_HCTV_Leak_DiagEnbl = ((((((((rtb_Logical44 &&
        rtb_TmpSignalConversionAtVeT_cs) && (rtb_TmpSignalConversionAtVeRCVR >
        KeVLDR_Pct_HTCV_Open_Pos)) && (rtb_VM_Conditional_Signal_CPV_f ||
        (KeVLDR_b_ValidPWM_Leak_Ovrd))) && ((VeVLDR_b_HCTV_DiagEn) ||
        (KeVLDR_b_HTCVDiagTmrEn_Ovrd))) && ((((((sint32)
        VLDR_ac_DW.StatusByte_HB_CT_SnsrPerf) & 1) <= 0) || ((((uint32)
        VLDR_ac_DW.StatusByte_HB_CT_SnsrPerf) & 64U) != 0U)) ||
        (KeVLDR_b_HTCV_HVBTISFA_Ovrd))) && ((((((sint32)
        VLDR_ac_DW.StatusByte_CoolOutTempSnsCkt) & 1) <= 0) || ((((uint32)
        VLDR_ac_DW.StatusByte_CoolOutTempSnsCkt) & 64U) != 0U)) ||
        (KeVLDR_b_HTCV_HVBTOSFA_Ovrd))) && ((((((sint32)
        VLDR_ac_DW.StatusByte_BattCoolPmpATempSnsr) & 1) <= 0) || ((((uint32)
        VLDR_ac_DW.StatusByte_BattCoolPmpATempSnsr) & 64U) != 0U)) ||
        (KeVLDR_b_HTCV_LTAPTempFA_Ovrd))) && rtb_TmpSignalConversionAtVeDFIR);

    /* Outputs for Atomic SubSystem: '<S714>/Check_HCTVLeakDiag' */
    /* RelationalOperator: '<S738>/Relational Operator3' incorporates:
     *  Constant: '<S738>/Constant3'
     *  S-Function (sfix_bitop): '<S738>/Bitwise Operator2'
     */
    rtb_TmpSignalConversionAtVeT_a4 = ((((uint32)rtb_TmpSignalConversionAtVeDM_a)
        & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S738>/EdgeFalling1' */
    /* Logic: '<S738>/Logical Operator' incorporates:
     *  Logic: '<S740>/OR1'
     */
    rtb_VariantMerge_For_Variant_So = !rtb_TmpSignalConversionAtVeT_a4;

    /* End of Outputs for SubSystem: '<S738>/EdgeFalling1' */

    /* Logic: '<S738>/Logical1' incorporates:
     *  Constant: '<S735>/Calib'
     *  Constant: '<S737>/KeVLDR_b_HTCVLeakErr_XYEnbl'
     *  Constant: '<S738>/Constant1'
     *  Logic: '<S726>/AND1'
     *  Logic: '<S738>/Logical Operator'
     *  Logic: '<S738>/Logical10'
     *  Logic: '<S738>/Logical12'
     *  RelationalOperator: '<S738>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S738>/Bitwise Operator3'
     */
    rtb_Logical41_a = (((VeVLDR_b_HCTV_Leak_DiagEnbl) &&
                        (KeVLDR_b_HTCVLeakErr_XYEnbl)) &&
                       ((!KeVLDR_b_CoolantVlvA_StkOpn_LtchEnbl) || (((((uint32)
                            rtb_TmpSignalConversionAtVeDM_a) & 1U) == 0U) ||
                         rtb_VariantMerge_For_Variant_So)));

    /* Outputs for Atomic SubSystem: '<S738>/EdgeFalling1' */
    /* Logic: '<S740>/AND' incorporates:
     *  UnitDelay: '<S740>/Unit Delay'
     */
    rtb_VM_Conditional_Signal_CPV_D = (rtb_VariantMerge_For_Variant_So &&
        (VLDR_ac_DW.UnitDelay_DSTATE_cqg));

    /* Update for UnitDelay: '<S740>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_cqg = rtb_TmpSignalConversionAtVeT_a4;

    /* End of Outputs for SubSystem: '<S738>/EdgeFalling1' */

    /* Logic: '<S738>/Logical5' */
    rtb_TmpSignalConversionAtVeT_a4 = (rtb_Logical8_h5 ||
        rtb_VM_Conditional_Signal_CPV_D);

    /* Logic: '<S739>/Fail Counter Reset' incorporates:
     *  UnitDelay: '<S739>/Unit Delay'
     *  UnitDelay: '<S739>/Unit Delay1'
     */
    rtb_VM_Conditional_Signal_CPV_D = ((rtb_TmpSignalConversionAtVeT_a4 ||
        (VLDR_ac_DW.UnitDelay_DSTATE_bj)) || (VLDR_ac_DW.UnitDelay1_DSTATE_n));

    /* Outputs for Atomic SubSystem: '<S739>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S739>/Counter Reset  Enabled ' */
    /* Switch: '<S746>/Switch1' incorporates:
     *  Constant: '<S736>/KeVLDR_b_HTCVLeakErr_Flt'
     *  Logic: '<S726>/AND2'
     *  Logic: '<S739>/NOT6'
     *  Switch: '<S746>/Switch2'
     *  Switch: '<S747>/Switch1'
     */
    if (rtb_VM_Conditional_Signal_CPV_D)
    {
        /* Switch: '<S746>/Switch1' incorporates:
         *  Constant: '<S746>/Constant Value2'
         */
        VeVLDR_Cnt_HCTV_Leak_FailCnt = 0U;

        /* Switch: '<S747>/Switch1' incorporates:
         *  Constant: '<S747>/Constant Value2'
         */
        VeVLDR_Cnt_HCTV_Leak_SmpCnt = 0U;
    }
    else
    {
        if (rtb_Logical41_a && ((VeVLDR_b_HTCV_Leak_FltSymptom) &&
                                (KeVLDR_b_HTCVLeakErr_Flt)))
        {
            /* Switch: '<S746>/Switch2' incorporates:
             *  Constant: '<S746>/Constant Value1'
             *  Sum: '<S746>/Subtraction'
             *  Switch: '<S746>/Switch1'
             *  UnitDelay: '<S746>/Unit Delay'
             */
            VeVLDR_Cnt_HCTV_Leak_FailCnt = (uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_iw) + 1U);
        }
        else
        {
            /* Switch: '<S746>/Switch1' incorporates:
             *  Switch: '<S746>/Switch2'
             *  UnitDelay: '<S746>/Unit Delay'
             */
            VeVLDR_Cnt_HCTV_Leak_FailCnt = VLDR_ac_DW.UnitDelay_DSTATE_iw;
        }

        /* Switch: '<S747>/Switch2' */
        if (rtb_Logical41_a)
        {
            /* Switch: '<S747>/Switch1' incorporates:
             *  Constant: '<S747>/Constant Value1'
             *  Sum: '<S747>/Subtraction'
             *  Switch: '<S747>/Switch2'
             *  UnitDelay: '<S747>/Unit Delay'
             */
            VeVLDR_Cnt_HCTV_Leak_SmpCnt = (uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_de) + 1U);
        }
        else
        {
            /* Switch: '<S747>/Switch1' incorporates:
             *  Switch: '<S747>/Switch2'
             *  UnitDelay: '<S747>/Unit Delay'
             */
            VeVLDR_Cnt_HCTV_Leak_SmpCnt = VLDR_ac_DW.UnitDelay_DSTATE_de;
        }

        /* End of Switch: '<S747>/Switch2' */
    }

    /* End of Switch: '<S746>/Switch1' */
    /* End of Outputs for SubSystem: '<S739>/Counter Reset  Enabled 1' */

    /* Update for UnitDelay: '<S746>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_iw = VeVLDR_Cnt_HCTV_Leak_FailCnt;

    /* End of Outputs for SubSystem: '<S739>/Counter Reset  Enabled ' */

    /* Outputs for Atomic SubSystem: '<S739>/Counter Reset  Enabled 1' */
    /* Update for UnitDelay: '<S747>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_de = VeVLDR_Cnt_HCTV_Leak_SmpCnt;

    /* End of Outputs for SubSystem: '<S739>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S739>/Greater Than or Equal ' incorporates:
     *  Constant: '<S733>/KeVLDR_Cnt_HTCVLeakErr_FailCnt'
     */
    rtb_Logical41_a = (VeVLDR_Cnt_HCTV_Leak_FailCnt >=
                       KeVLDR_Cnt_HTCVLeakErr_FailCnt);

    /* Logic: '<S739>/NOT5' incorporates:
     *  Constant: '<S734>/KeVLDR_Cnt_HTCVLeakErr_SmpCnt'
     *  Logic: '<S739>/NOT3'
     *  RelationalOperator: '<S739>/Less Than  or Equal'
     */
    rtb_VM_Conditional_Signal_CPV_D = ((VeVLDR_Cnt_HCTV_Leak_SmpCnt >=
        KeVLDR_Cnt_HTCVLeakErr_SmpCnt) && (!rtb_Logical41_a));

    /* Switch: '<S752>/Switch1' incorporates:
     *  Constant: '<S745>/Constant Value'
     *  DataStoreWrite: '<S726>/Data Store Write3'
     *  Switch: '<S751>/Switch1'
     */
    if (rtb_VM_Conditional_Signal_PostC)
    {
        VLDR_ac_DW.NeVLDR_Cnt_HCTV_Leak_MFOP = 0U;
    }
    else
    {
        if (rtb_VM_Conditional_Signal_CPV_D)
        {
            /* MinMax: '<S745>/Minimum2' incorporates:
             *  DataStoreRead: '<S726>/Data Store Read1'
             *  Switch: '<S751>/Switch1'
             */
            if (VeVLDR_Cnt_HCTV_Leak_FailCnt >
                    VLDR_ac_DW.NeVLDR_Cnt_HCTV_Leak_MFOP)
            {
                /* DataStoreWrite: '<S726>/Data Store Write3' incorporates:
                 *  Switch: '<S751>/Switch1'
                 */
                VLDR_ac_DW.NeVLDR_Cnt_HCTV_Leak_MFOP =
                    VeVLDR_Cnt_HCTV_Leak_FailCnt;
            }

            /* End of MinMax: '<S745>/Minimum2' */
        }
    }

    /* End of Switch: '<S752>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S738>/Fail' */
    VLDR_ac_Fail(rtb_Logical41_a, &VLDR_ac_B.VariantMergeForOutportVeVLDR__c);

    /* End of Outputs for SubSystem: '<S738>/Fail' */

    /* Outputs for Enabled SubSystem: '<S738>/Init' */
    VLDR_ac_Init_a(rtb_TmpSignalConversionAtVeT_a4,
                   &VLDR_ac_B.VariantMergeForOutportVeVLDR__c);

    /* End of Outputs for SubSystem: '<S738>/Init' */

    /* Outputs for Enabled SubSystem: '<S738>/Pass' */
    VLDR_ac_Pass(rtb_VM_Conditional_Signal_CPV_D,
                 &VLDR_ac_B.VariantMergeForOutportVeVLDR__c);

    /* End of Outputs for SubSystem: '<S738>/Pass' */

    /* VariantMerge generated from: '<S699>/HCTV_Leak_FltDtct' incorporates:
     *  Constant: '<S741>/Constant'
     *  RelationalOperator: '<S738>/Relational Operator'
     *  VariantMerge generated from: '<S699>/VeVLDR_e_FaultSts_CoolantVlvA_StkOpn'
     */
    VeVLDR_b_HCTV_Leak_FltDtct_B4D = (((uint32)
        VLDR_ac_B.VariantMergeForOutportVeVLDR__c) == CeDFIB_e_Fail);

    /* Update for UnitDelay: '<S739>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_bj = rtb_VM_Conditional_Signal_CPV_D;

    /* Update for UnitDelay: '<S739>/Unit Delay1' */
    VLDR_ac_DW.UnitDelay1_DSTATE_n = rtb_Logical41_a;

    /* End of Outputs for SubSystem: '<S714>/Check_HCTVLeakDiag' */

    /* Sum: '<S753>/Subtraction' */
    VeVLDR_Pct_HT_CabVlvErr = rtb_TmpSignalConversionAtVeTAIR -
        rtb_TmpSignalConversionAtVeRCVR;

    /* Logic: '<S756>/Logical4' incorporates:
     *  Constant: '<S762>/KeVLDR_Pct_HTCV_Cls_Cmd'
     *  Constant: '<S763>/KeVLDR_Pct_HTCV_Open_Cmd'
     *  Logic: '<S756>/Logical2'
     *  Logic: '<S756>/Logical3'
     *  RelationalOperator: '<S756>/Comparison2'
     *  RelationalOperator: '<S756>/Comparison4'
     *  RelationalOperator: '<S756>/Comparison5'
     *  RelationalOperator: '<S756>/Comparison6'
     *  UnitDelay: '<S756>/Unit Delay'
     *  UnitDelay: '<S756>/Unit Delay1'
     */
    rtb_Logical41_a = (((rtb_TmpSignalConversionAtVeTAIR ==
                         KeVLDR_Pct_HTCV_Open_Cmd) && (KeVLDR_Pct_HTCV_Open_Cmd
                         != VLDR_ac_DW.UnitDelay_DSTATE_li)) ||
                       ((rtb_TmpSignalConversionAtVeTAIR ==
                         KeVLDR_Pct_HTCV_Cls_Cmd) && (KeVLDR_Pct_HTCV_Cls_Cmd !=
                         VLDR_ac_DW.UnitDelay1_DSTATE_h)));

    /* Outputs for Atomic SubSystem: '<S756>/EdgeRising' */
    /* Logic: '<S758>/OR1' incorporates:
     *  UnitDelay: '<S758>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeT_a4 = !VLDR_ac_DW.UnitDelay_DSTATE_oy;

    /* Update for UnitDelay: '<S758>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_oy = rtb_Logical41_a;

    /* Outputs for Atomic SubSystem: '<S756>/Signal Latch On With Reset' */
    /* Logic: '<S771>/OR1' incorporates:
     *  Logic: '<S758>/AND'
     *  Logic: '<S771>/NOT'
     *  Logic: '<S771>/OR'
     *  UnitDelay: '<S756>/Unit Delay2'
     *  UnitDelay: '<S771>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeT_a4 = ((VLDR_ac_DW.UnitDelay2_DSTATE_l) ||
        (((!rtb_Logical41_a) || (!rtb_TmpSignalConversionAtVeT_a4)) &&
         (VLDR_ac_DW.UnitDelay_DSTATE_ivs)));

    /* End of Outputs for SubSystem: '<S756>/EdgeRising' */

    /* Update for UnitDelay: '<S771>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_ivs = rtb_TmpSignalConversionAtVeT_a4;

    /* End of Outputs for SubSystem: '<S756>/Signal Latch On With Reset' */

    /* Outputs for Atomic SubSystem: '<S756>/EdgeRising1' */
    /* Logic: '<S759>/OR1' incorporates:
     *  UnitDelay: '<S759>/Unit Delay'
     */
    rtb_VM_Conditional_Signal_CPV_D = !VLDR_ac_DW.UnitDelay_DSTATE_dkk;

    /* Update for UnitDelay: '<S759>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_dkk = rtb_TmpSignalConversionAtVeT_a4;

    /* Outputs for Atomic SubSystem: '<S756>/Timer Retrigger Reset Enabled' */
    /* Switch: '<S772>/Switch1' incorporates:
     *  Logic: '<S759>/AND'
     *  Switch: '<S772>/Switch2'
     */
    if (rtb_TmpSignalConversionAtVeT_a4 && rtb_VM_Conditional_Signal_CPV_D)
    {
        /* Switch: '<S772>/Switch1' incorporates:
         *  Constant: '<S770>/KeVLDR_t_WaitTime_B4_StckDiagEn'
         */
        rtb_TmpSignalConversionAtVeRCVR = KeVLDR_t_WaitTime_B4_StckDiagEn;
    }
    else if (rtb_TmpSignalConversionAtVeT_a4)
    {
        /* Switch: '<S772>/Switch2' incorporates:
         *  Constant: '<S769>/KeVLDR_t_StckDiag'
         *  Constant: '<S772>/Constant Value4'
         *  MinMax: '<S772>/Maximum'
         *  Sum: '<S772>/Subtraction'
         *  Switch: '<S772>/Switch1'
         *  UnitDelay: '<S772>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeRCVR = fmaxf(VLDR_ac_DW.UnitDelay_DSTATE_mh -
            KeVLDR_t_StckDiag, 0.0F);
    }
    else
    {
        /* Switch: '<S772>/Switch1' incorporates:
         *  Switch: '<S772>/Switch2'
         *  UnitDelay: '<S772>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeRCVR = VLDR_ac_DW.UnitDelay_DSTATE_mh;
    }

    /* End of Switch: '<S772>/Switch1' */
    /* End of Outputs for SubSystem: '<S756>/EdgeRising1' */

    /* Update for UnitDelay: '<S772>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_mh = rtb_TmpSignalConversionAtVeRCVR;

    /* End of Outputs for SubSystem: '<S756>/Timer Retrigger Reset Enabled' */

    /* Switch: '<S756>/Switch' */
    if (rtb_TmpSignalConversionAtVeT_a4)
    {
        /* Outputs for Atomic SubSystem: '<S756>/Timer Retrigger Reset Enabled' */
        /* UnitDelay: '<S779>/Unit Delay' incorporates:
         *  Constant: '<S772>/Constant Value2'
         *  Logic: '<S756>/Logical5'
         *  RelationalOperator: '<S772>/Greater  Than1'
         */
        rtb_TmpSignalConversionAtVeT_a4 = (rtb_TmpSignalConversionAtVeRCVR <=
            0.0F);

        /* End of Outputs for SubSystem: '<S756>/Timer Retrigger Reset Enabled' */
    }

    /* End of Switch: '<S756>/Switch' */

    /* Logic: '<S756>/Logical' incorporates:
     *  Constant: '<S710>/Constant1'
     *  Constant: '<S710>/Constant2'
     *  Constant: '<S760>/Constant1'
     *  Constant: '<S760>/Constant2'
     *  Constant: '<S761>/Constant1'
     *  Constant: '<S761>/Constant2'
     *  Constant: '<S764>/KeVLDR_b_ChangeVlvCmd_Ovrd'
     *  Constant: '<S765>/KeVLDR_b_CoolantVlvA_FdbkCktHi_D'
     *  Constant: '<S766>/KeVLDR_b_CoolantVlvA_FdbkCktLo_D'
     *  Constant: '<S767>/KeVLDR_b_HTCabVlvSts_FA_Ovrd'
     *  Constant: '<S768>/KeVLDR_b_ValidPWM_Ovrd'
     *  DataStoreRead: '<S710>/StatusByte_ThrmlRlyCtrlCkt'
     *  DataStoreRead: '<S760>/StatusByte_CoolantVlvA_FdbkCktHi'
     *  DataStoreRead: '<S761>/StatusByte_CoolantVlvA_FdbkCktLo'
     *  Logic: '<S710>/Logical Operator'
     *  Logic: '<S756>/Logical1'
     *  Logic: '<S756>/Logical10'
     *  Logic: '<S756>/Logical12'
     *  Logic: '<S756>/Logical13'
     *  Logic: '<S756>/Logical14'
     *  Logic: '<S756>/Logical6'
     *  Logic: '<S756>/Logical7'
     *  Logic: '<S756>/Logical8'
     *  Logic: '<S760>/Logical Operator'
     *  Logic: '<S761>/Logical Operator'
     *  RelationalOperator: '<S710>/Relational Operator1'
     *  RelationalOperator: '<S710>/Relational Operator2'
     *  RelationalOperator: '<S760>/Relational Operator1'
     *  RelationalOperator: '<S760>/Relational Operator2'
     *  RelationalOperator: '<S761>/Relational Operator1'
     *  RelationalOperator: '<S761>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S710>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S710>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S760>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S760>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S761>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S761>/Bitwise Operator2'
     */
    VeVLDR_b_HTCV_Stck_DiagEnbl = (((((((rtb_Logical44 &&
        (rtb_TmpSignalConversionAtVeT_cs || (KeVLDR_b_HTCabVlvSts_FA_Ovrd))) &&
        (rtb_VM_Conditional_Signal_CPV_f || (KeVLDR_b_ValidPWM_Ovrd))) &&
        ((((((sint32)VLDR_ac_DW.StatusByte_CoolantVlvA_FdbkCktH) & 1) <= 0) ||
          ((((uint32)VLDR_ac_DW.StatusByte_CoolantVlvA_FdbkCktH) & 64U) != 0U)) ||
         (KeVLDR_b_CoolantVlvA_FdbkCktHi_D))) && ((((((sint32)
        VLDR_ac_DW.StatusByte_CoolantVlvA_FdbkCktL) & 1) <= 0) || ((((uint32)
        VLDR_ac_DW.StatusByte_CoolantVlvA_FdbkCktL) & 64U) != 0U)) ||
        (KeVLDR_b_CoolantVlvA_FdbkCktLo_D))) && (rtb_TmpSignalConversionAtVeT_a4
        || (KeVLDR_b_ChangeVlvCmd_Ovrd))) && (((((sint32)
        VLDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 1) <= 0) || ((((uint32)
        VLDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 64U) != 0U))) &&
        rtb_TmpSignalConversionAtVeDFIR);

    /* Outputs for Atomic SubSystem: '<S754>/Check_HTCVStckDiag' */
    /* Logic: '<S757>/AND1' incorporates:
     *  Constant: '<S776>/KeVLDR_b_CabVlvOpeng_Err_XYEnbl'
     */
    VeVLDR_b_HTCV_Stck_DiagXYEnbl = ((VeVLDR_b_HTCV_Stck_DiagEnbl) &&
        (KeVLDR_b_CabVlvOpeng_Err_XYEnbl));

    /* RelationalOperator: '<S778>/Relational Operator3' incorporates:
     *  Constant: '<S778>/Constant3'
     *  S-Function (sfix_bitop): '<S778>/Bitwise Operator2'
     */
    rtb_Logical44 = ((((uint32)rtb_TmpSignalConversionAtVeDMAB) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S778>/EdgeFalling1' */
    /* Logic: '<S778>/Logical Operator' incorporates:
     *  Logic: '<S780>/OR1'
     */
    rtb_VM_Conditional_Signal_CPV_D = !rtb_Logical44;

    /* End of Outputs for SubSystem: '<S778>/EdgeFalling1' */

    /* Logic: '<S778>/Logical1' incorporates:
     *  Constant: '<S777>/Calib'
     *  Constant: '<S778>/Constant1'
     *  Logic: '<S778>/Logical Operator'
     *  Logic: '<S778>/Logical10'
     *  Logic: '<S778>/Logical12'
     *  RelationalOperator: '<S778>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S778>/Bitwise Operator3'
     */
    rtb_TmpSignalConversionAtVeT_cs = ((VeVLDR_b_HTCV_Stck_DiagXYEnbl) &&
        ((!KeVLDR_b_CoolantVlvA_Perf_LtchEnbl) || (((((uint32)
        rtb_TmpSignalConversionAtVeDMAB) & 1U) == 0U) ||
        rtb_VM_Conditional_Signal_CPV_D)));

    /* Outputs for Atomic SubSystem: '<S778>/EdgeFalling1' */
    /* Logic: '<S780>/AND' incorporates:
     *  UnitDelay: '<S780>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeT_a4 = (rtb_VM_Conditional_Signal_CPV_D &&
        (VLDR_ac_DW.UnitDelay_DSTATE_lw));

    /* Update for UnitDelay: '<S780>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_lw = rtb_Logical44;

    /* End of Outputs for SubSystem: '<S778>/EdgeFalling1' */

    /* Logic: '<S778>/Logical5' */
    rtb_Logical8_h5 = (rtb_Logical8_h5 || rtb_TmpSignalConversionAtVeT_a4);

    /* Logic: '<S779>/Fail Counter Reset' incorporates:
     *  UnitDelay: '<S779>/Unit Delay'
     *  UnitDelay: '<S779>/Unit Delay1'
     */
    rtb_Logical44 = ((rtb_Logical8_h5 || (VLDR_ac_DW.UnitDelay_DSTATE_mx0)) ||
                     (VLDR_ac_DW.UnitDelay1_DSTATE_j));

    /* Outputs for Atomic SubSystem: '<S779>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S779>/Counter Reset  Enabled ' */
    /* Switch: '<S786>/Switch1' incorporates:
     *  Abs: '<S753>/Abs'
     *  Constant: '<S755>/KeVLDR_Pct_CabVlvErrLim'
     *  Constant: '<S775>/KeVLDR_b_CabVlvOpeng_Err_Flt'
     *  Logic: '<S757>/AND2'
     *  Logic: '<S779>/NOT6'
     *  RelationalOperator: '<S753>/Comparison'
     *  Switch: '<S786>/Switch2'
     *  Switch: '<S787>/Switch1'
     */
    if (rtb_Logical44)
    {
        /* Switch: '<S786>/Switch1' incorporates:
         *  Constant: '<S786>/Constant Value2'
         */
        VeVLDR_Cnt_HTCV_Stck_FailCnt = 0U;

        /* Switch: '<S787>/Switch1' incorporates:
         *  Constant: '<S787>/Constant Value2'
         */
        VeVLDR_Cnt_HTCV_Stck_SmpCnt = 0U;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeT_cs && ((fabsf(VeVLDR_Pct_HT_CabVlvErr) >
              KeVLDR_Pct_CabVlvErrLim) && (KeVLDR_b_CabVlvOpeng_Err_Flt)))
        {
            /* Switch: '<S786>/Switch2' incorporates:
             *  Constant: '<S786>/Constant Value1'
             *  Sum: '<S786>/Subtraction'
             *  Switch: '<S786>/Switch1'
             *  UnitDelay: '<S786>/Unit Delay'
             */
            VeVLDR_Cnt_HTCV_Stck_FailCnt = (uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_k5) + 1U);
        }
        else
        {
            /* Switch: '<S786>/Switch1' incorporates:
             *  Switch: '<S786>/Switch2'
             *  UnitDelay: '<S786>/Unit Delay'
             */
            VeVLDR_Cnt_HTCV_Stck_FailCnt = VLDR_ac_DW.UnitDelay_DSTATE_k5;
        }

        /* Switch: '<S787>/Switch2' */
        if (rtb_TmpSignalConversionAtVeT_cs)
        {
            /* Switch: '<S787>/Switch1' incorporates:
             *  Constant: '<S787>/Constant Value1'
             *  Sum: '<S787>/Subtraction'
             *  Switch: '<S787>/Switch2'
             *  UnitDelay: '<S787>/Unit Delay'
             */
            VeVLDR_Cnt_HTCV_Stck_SmpCnt = (uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_bq) + 1U);
        }
        else
        {
            /* Switch: '<S787>/Switch1' incorporates:
             *  Switch: '<S787>/Switch2'
             *  UnitDelay: '<S787>/Unit Delay'
             */
            VeVLDR_Cnt_HTCV_Stck_SmpCnt = VLDR_ac_DW.UnitDelay_DSTATE_bq;
        }

        /* End of Switch: '<S787>/Switch2' */
    }

    /* End of Switch: '<S786>/Switch1' */
    /* End of Outputs for SubSystem: '<S779>/Counter Reset  Enabled 1' */

    /* Update for UnitDelay: '<S786>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_k5 = VeVLDR_Cnt_HTCV_Stck_FailCnt;

    /* End of Outputs for SubSystem: '<S779>/Counter Reset  Enabled ' */

    /* Outputs for Atomic SubSystem: '<S779>/Counter Reset  Enabled 1' */
    /* Update for UnitDelay: '<S787>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_bq = VeVLDR_Cnt_HTCV_Stck_SmpCnt;

    /* End of Outputs for SubSystem: '<S779>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S779>/Greater Than or Equal ' incorporates:
     *  Constant: '<S773>/KeVLDR_Cnt_CabVlvOpeng_Err_FailCnt'
     */
    rtb_TmpSignalConversionAtVeT_cs = (VeVLDR_Cnt_HTCV_Stck_FailCnt >=
        KeVLDR_Cnt_CabVlvOpeng_Err_FailCnt);

    /* Logic: '<S779>/NOT5' incorporates:
     *  Constant: '<S774>/KeVLDR_Cnt_CabVlvOpeng_Err_SmpCnt'
     *  Logic: '<S779>/NOT3'
     *  RelationalOperator: '<S779>/Less Than  or Equal'
     */
    rtb_Logical44 = ((VeVLDR_Cnt_HTCV_Stck_SmpCnt >=
                      KeVLDR_Cnt_CabVlvOpeng_Err_SmpCnt) &&
                     (!rtb_TmpSignalConversionAtVeT_cs));

    /* Switch: '<S792>/Switch1' incorporates:
     *  Constant: '<S785>/Constant Value'
     *  DataStoreWrite: '<S757>/Data Store Write3'
     *  Switch: '<S791>/Switch1'
     */
    if (rtb_VM_Conditional_Signal_PostC)
    {
        VLDR_ac_DW.NeVLDR_Cnt_CabVlvOpeng_Err_MFOP = 0U;
    }
    else
    {
        if (rtb_Logical44)
        {
            /* MinMax: '<S785>/Minimum2' incorporates:
             *  DataStoreRead: '<S757>/Data Store Read1'
             *  Switch: '<S791>/Switch1'
             */
            if (VeVLDR_Cnt_HTCV_Stck_FailCnt >
                    VLDR_ac_DW.NeVLDR_Cnt_CabVlvOpeng_Err_MFOP)
            {
                /* DataStoreWrite: '<S757>/Data Store Write3' incorporates:
                 *  Switch: '<S791>/Switch1'
                 */
                VLDR_ac_DW.NeVLDR_Cnt_CabVlvOpeng_Err_MFOP =
                    VeVLDR_Cnt_HTCV_Stck_FailCnt;
            }

            /* End of MinMax: '<S785>/Minimum2' */
        }
    }

    /* End of Switch: '<S792>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S778>/Fail' */
    VLDR_ac_Fail(rtb_TmpSignalConversionAtVeT_cs,
                 &VLDR_ac_B.VariantMergeForOutportVeVLDR__i);

    /* End of Outputs for SubSystem: '<S778>/Fail' */

    /* Outputs for Enabled SubSystem: '<S778>/Init' */
    VLDR_ac_Init_a(rtb_Logical8_h5, &VLDR_ac_B.VariantMergeForOutportVeVLDR__i);

    /* End of Outputs for SubSystem: '<S778>/Init' */

    /* Outputs for Enabled SubSystem: '<S778>/Pass' */
    VLDR_ac_Pass(rtb_Logical44, &VLDR_ac_B.VariantMergeForOutportVeVLDR__i);

    /* End of Outputs for SubSystem: '<S778>/Pass' */

    /* VariantMerge generated from: '<S699>/HTCV_Stck_FltDtct' incorporates:
     *  Constant: '<S781>/Constant'
     *  RelationalOperator: '<S778>/Relational Operator'
     *  VariantMerge generated from: '<S699>/VeVLDR_e_FaultSts_CoolantVlvA_Perf'
     */
    VLDR_ac_B.VariantMergeForOutportHTCV_Stck = (((uint32)
        VLDR_ac_B.VariantMergeForOutportVeVLDR__i) == CeDFIB_e_Fail);

    /* Update for UnitDelay: '<S779>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_mx0 = rtb_Logical44;

    /* Update for UnitDelay: '<S779>/Unit Delay1' */
    VLDR_ac_DW.UnitDelay1_DSTATE_j = rtb_TmpSignalConversionAtVeT_cs;

    /* End of Outputs for SubSystem: '<S754>/Check_HTCVStckDiag' */

    /* Update for UnitDelay: '<S722>/Unit Delay1' */
    VLDR_ac_DW.UnitDelay1_DSTATE_a = VeVLDR_dT_HTCV_Temp_Diff_IV;

    /* Update for UnitDelay: '<S715>/Unit Delay1' incorporates:
     *  Constant: '<S715>/TRUE Constant'
     */
    VLDR_ac_DW.UnitDelay1_DSTATE_ph = true;

    /* Update for UnitDelay: '<S715>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_e5 = VeVLDR_dT_HTCV_Temp_Diff_IV;

    /* Update for UnitDelay: '<S756>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_li = rtb_TmpSignalConversionAtVeTAIR;

    /* Update for UnitDelay: '<S756>/Unit Delay1' */
    VLDR_ac_DW.UnitDelay1_DSTATE_h = rtb_TmpSignalConversionAtVeTAIR;

    /* Update for UnitDelay: '<S756>/Unit Delay2' */
    VLDR_ac_DW.UnitDelay2_DSTATE_l = rtb_Logical41_a;

    /* End of Outputs for SubSystem: '<S699>/HT_Cabin_Vlv_Diag' */
#else

    /* Outputs for Atomic SubSystem: '<S699>/HT_Cabin_Vlv_Stub' */
    /* VariantMerge generated from: '<S699>/HTCV_Leak_Enable' incorporates:
     *  Constant: '<S701>/FALSE Constant'
     */
    VeVLDR_b_HCTV_Leak_DiagEnbl = false;

    /* VariantMerge generated from: '<S699>/HTCV_Stck_FltDtct' incorporates:
     *  Constant: '<S701>/FALSE Constant1'
     */
    VLDR_ac_B.VariantMergeForOutportHTCV_Stck = false;

    /* VariantMerge generated from: '<S699>/HCTV_Leak_FltDtct' incorporates:
     *  Constant: '<S701>/FALSE Constant2'
     */
    VeVLDR_b_HCTV_Leak_FltDtct_B4D = false;

    /* VariantMerge generated from: '<S699>/VeVLDR_e_FaultSts_CoolantVlvA_Perf' incorporates:
     *  Constant: '<S793>/Constant'
     */
    VLDR_ac_B.VariantMergeForOutportVeVLDR__i = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S699>/VeVLDR_e_FaultSts_CoolantVlvA_StkOpn' incorporates:
     *  Constant: '<S794>/Constant'
     */
    VLDR_ac_B.VariantMergeForOutportVeVLDR__c = CeDFIB_e_Init;

    /* End of Outputs for SubSystem: '<S699>/HT_Cabin_Vlv_Stub' */
#endif

    /* End of Outputs for SubSystem: '<S13>/HTCV_Diag' */
#if Rte_SysCon_Variant_VLDR_11

    /* Outputs for Enabled SubSystem: '<S4>/HTL_Diag' */
    /* Outputs for Enabled SubSystem: '<S4>/HTL_Diag' incorporates:
     *  EnablePort: '<S14>/Enable'
     */

    /* S-Function (sfix_bitop): '<S800>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S800>/StatusByte_HB_PSC_CtrlValCCktPerf'
     *  S-Function (sfix_bitop): '<S821>/Bitwise Operator2'
     */
    tmpRead_f = ((uint32)VLDR_ac_DW.StatusByte_HB_PSC_CtrlValCCktPe) & 64U;

    /* UnitDelay: '<S823>/Unit Delay' incorporates:
     *  Constant: '<S799>/Constant1'
     *  Constant: '<S799>/Constant2'
     *  Constant: '<S800>/Constant1'
     *  Constant: '<S800>/Constant2'
     *  Constant: '<S801>/Constant1'
     *  Constant: '<S801>/Constant2'
     *  Constant: '<S805>/KeVLDR_b_HTL_PerfDiag_LIN3BusOff_Ovrd'
     *  Constant: '<S806>/KeVLDR_b_HTL_PerfDiag_LOC_Ovrd'
     *  Constant: '<S807>/KeVLDR_b_HTL_PerfDiag_SysVolt_Ovrd'
     *  DataStoreRead: '<S799>/StatusByte_LIN3_BusOff'
     *  DataStoreRead: '<S800>/StatusByte_HB_PSC_CtrlValCCktPerf'
     *  DataStoreRead: '<S801>/StatusByte_LostCommHB_PSCCooCtrlVlvC'
     *  Logic: '<S795>/Logical1'
     *  Logic: '<S795>/Logical2'
     *  Logic: '<S795>/Logical3'
     *  Logic: '<S795>/Logical4'
     *  Logic: '<S795>/Logical5'
     *  Logic: '<S795>/Logical6'
     *  Logic: '<S795>/Logical8'
     *  Logic: '<S799>/Logical Operator'
     *  Logic: '<S800>/Logical Operator'
     *  Logic: '<S801>/Logical Operator'
     *  RelationalOperator: '<S799>/Relational Operator1'
     *  RelationalOperator: '<S799>/Relational Operator2'
     *  RelationalOperator: '<S800>/Relational Operator1'
     *  RelationalOperator: '<S800>/Relational Operator2'
     *  RelationalOperator: '<S801>/Relational Operator1'
     *  RelationalOperator: '<S801>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S799>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S799>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S800>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S800>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S801>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S801>/Bitwise Operator2'
     */
    rtb_TmpSignalConversionAtVeT_cs = ((((((rtb_TmpSignalConversionAtVeDFIR ||
        (KeVLDR_b_HTL_PerfDiag_SysVolt_Ovrd)) && rtb_Logical1) && rtb_Logical28)
        && ((((((sint32)VLDR_ac_DW.StatusByte_LostCommHB_PSCCooC_p) & 1) <= 0) ||
             ((((uint32)VLDR_ac_DW.StatusByte_LostCommHB_PSCCooC_p) & 64U) != 0U))
            || (KeVLDR_b_HTL_PerfDiag_LOC_Ovrd))) && ((((((sint32)
        VLDR_ac_DW.StatusByte_LIN3_BusOff) & 1) <= 0) || ((((uint32)
        VLDR_ac_DW.StatusByte_LIN3_BusOff) & 64U) != 0U)) ||
        (KeVLDR_b_HTL_PerfDiag_LIN3BusOff_Ovrd))) && (((((sint32)
        VLDR_ac_DW.StatusByte_HB_PSC_CtrlValCCktPe) & 1) <= 0) || (tmpRead_f !=
        0U)));

    /* Logic: '<S795>/Logical9' */
    rtb_TmpSignalConversionAtVeT_nu = (rtb_TmpSignalConversionAtVeT_nu &&
        rtb_TmpSignalConversionAtVeT_cs);

    /* Outputs for Atomic SubSystem: '<S795>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S810>/EdgeRising' */
    /* Logic: '<S811>/AND' incorporates:
     *  Logic: '<S811>/OR1'
     *  UnitDelay: '<S811>/Unit Delay'
     */
    rtb_Logical8_h5 = (rtb_TmpSignalConversionAtVeT_nu &&
                       (!VLDR_ac_DW.UnitDelay_DSTATE_aaf));

    /* Update for UnitDelay: '<S811>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_aaf = rtb_TmpSignalConversionAtVeT_nu;

    /* End of Outputs for SubSystem: '<S810>/EdgeRising' */

    /* Switch: '<S810>/Switch1' incorporates:
     *  Logic: '<S810>/OR'
     *  Logic: '<S810>/OR1'
     */
    if ((!rtb_TmpSignalConversionAtVeT_nu) || rtb_Logical8_h5)
    {
        /* Switch: '<S810>/Switch1' incorporates:
         *  Constant: '<S810>/Constant Value1'
         */
        rtb_TmpSignalConversionAtVeRCVR = 0.0F;
    }
    else
    {
        /* Switch: '<S810>/Switch1' incorporates:
         *  Constant: '<S802>/Calib'
         *  Constant: '<S808>/KeVLDR_t_HTL_FA_WaitTime'
         *  MinMax: '<S810>/Minimum'
         *  Sum: '<S810>/Summation'
         *  UnitDelay: '<S810>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeRCVR = fminf(KeVLDR_t_HTL_FA_WaitTime,
            HeVLDR_t_MedTED + VLDR_ac_DW.UnitDelay_DSTATE_fj);
    }

    /* End of Switch: '<S810>/Switch1' */

    /* Logic: '<S810>/AND' incorporates:
     *  Constant: '<S808>/KeVLDR_t_HTL_FA_WaitTime'
     *  RelationalOperator: '<S810>/Greater  Than'
     */
    rtb_TmpSignalConversionAtVeT_nu = (rtb_TmpSignalConversionAtVeT_nu &&
        (rtb_TmpSignalConversionAtVeRCVR >= KeVLDR_t_HTL_FA_WaitTime));

    /* Update for UnitDelay: '<S810>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_fj = rtb_TmpSignalConversionAtVeRCVR;

    /* End of Outputs for SubSystem: '<S795>/Turn On Delay Time' */

    /* Logic: '<S795>/Logical12' incorporates:
     *  Constant: '<S803>/KeVLDR_Pct_HTLVlv_PstnCmnd_Max'
     *  Constant: '<S804>/KeVLDR_Pct_HTLVlv_PstnCmnd_Min'
     *  Constant: '<S809>/Calib'
     *  Logic: '<S795>/Logical11'
     *  Logic: '<S795>/Logical13'
     *  Logic: '<S795>/Logical7'
     *  RelationalOperator: '<S795>/Comparison2'
     *  RelationalOperator: '<S795>/Comparison4'
     */
    VeVLDR_b_HTL_PerfDiag_En = ((rtb_TmpSignalConversionAtVeT_cs &&
        ((rtb_TmpSignalConversionAtVeRC_c < KeVLDR_Pct_HTLVlv_PstnCmnd_Max) &&
         (rtb_TmpSignalConversionAtVeRC_c > KeVLDR_Pct_HTLVlv_PstnCmnd_Min))) ||
        ((KeVLDR_b_HTL_DiagPerfCndsOV_En) && rtb_TmpSignalConversionAtVeT_nu));

    /* RelationalOperator: '<S821>/Relational Operator3' incorporates:
     *  Constant: '<S821>/Constant3'
     */
    rtb_Logical44 = (tmpRead_f == 0U);

    /* Outputs for Atomic SubSystem: '<S821>/EdgeFalling1' */
    /* Logic: '<S821>/Logical Operator' incorporates:
     *  Logic: '<S823>/OR1'
     */
    rtb_VM_Conditional_Signal_CPV_D = !rtb_Logical44;

    /* End of Outputs for SubSystem: '<S821>/EdgeFalling1' */

    /* Logic: '<S821>/Logical1' incorporates:
     *  Constant: '<S819>/Calib'
     *  Constant: '<S820>/KeVLDR_b_HTL_PerfDiag_XYEnbl'
     *  Constant: '<S821>/Constant1'
     *  DataStoreRead: '<S798>/Data Store Read2'
     *  Logic: '<S798>/AND1'
     *  Logic: '<S821>/Logical Operator'
     *  Logic: '<S821>/Logical10'
     *  Logic: '<S821>/Logical12'
     *  RelationalOperator: '<S821>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S821>/Bitwise Operator3'
     */
    rtb_TmpSignalConversionAtVeT_cs = (((VeVLDR_b_HTL_PerfDiag_En) &&
        (KeVLDR_b_HTL_PerfDiag_XYEnbl)) &&
        ((!KeVLDR_b_HB_PSC_CtrlValCCktPerf_LtchEnbl) || (((((uint32)
        VLDR_ac_DW.StatusByte_HB_PSC_CtrlValCCktPe) & 1U) == 0U) ||
        rtb_VM_Conditional_Signal_CPV_D)));

    /* RelationalOperator: '<S797>/Comparison1' incorporates:
     *  Abs: '<S797>/Abs'
     *  Constant: '<S813>/KeVLDR_Pct_HTL_PerfDiag_PstnDiffMax'
     *  Sum: '<S797>/Sum1'
     */
    rtb_Logical8_h5 = (fabsf(rtb_TmpSignalConversionAtVeRC_c -
                        rtb_TmpSignalConversionAtVeT_kz) >=
                       KeVLDR_Pct_HTL_PerfDiag_PstnDiffMax);

    /* Outputs for Atomic SubSystem: '<S797>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S815>/EdgeRising' */
    /* Logic: '<S816>/AND' incorporates:
     *  Logic: '<S816>/OR1'
     *  UnitDelay: '<S816>/Unit Delay'
     */
    rtb_Logical41_a = (rtb_Logical8_h5 && (!VLDR_ac_DW.UnitDelay_DSTATE_esc));

    /* Update for UnitDelay: '<S816>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_esc = rtb_Logical8_h5;

    /* End of Outputs for SubSystem: '<S815>/EdgeRising' */

    /* Switch: '<S815>/Switch1' incorporates:
     *  Constant: '<S812>/KeVLDR_Cnt_HTL_Position_Wait_Time'
     *  Constant: '<S815>/Constant Value'
     *  Logic: '<S815>/OR'
     *  Logic: '<S815>/OR1'
     *  MinMax: '<S815>/Minimum'
     *  Sum: '<S815>/Summation'
     *  UnitDelay: '<S815>/Unit Delay'
     */
    if ((!rtb_Logical8_h5) || rtb_Logical41_a)
    {
        /* Switch: '<S815>/Switch1' incorporates:
         *  Constant: '<S815>/Constant Value1'
         */
        rtb_Switch1_dj = 0U;
    }
    else if (KeVLDR_Cnt_HTL_Position_Wait_Time < ((uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_np) + 1U)))
    {
        /* MinMax: '<S815>/Minimum' incorporates:
         *  Constant: '<S812>/KeVLDR_Cnt_HTL_Position_Wait_Time'
         *  Switch: '<S815>/Switch1'
         */
        rtb_Switch1_dj = KeVLDR_Cnt_HTL_Position_Wait_Time;
    }
    else
    {
        /* Switch: '<S815>/Switch1' incorporates:
         *  Constant: '<S815>/Constant Value'
         *  MinMax: '<S815>/Minimum'
         *  Sum: '<S815>/Summation'
         *  UnitDelay: '<S815>/Unit Delay'
         */
        rtb_Switch1_dj = (uint16)(((uint32)VLDR_ac_DW.UnitDelay_DSTATE_np) + 1U);
    }

    /* End of Switch: '<S815>/Switch1' */

    /* Update for UnitDelay: '<S815>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_np = rtb_Switch1_dj;

    /* End of Outputs for SubSystem: '<S797>/Turn On Delay Sample' */

    /* Outputs for Atomic SubSystem: '<S821>/EdgeFalling1' */
    /* Logic: '<S823>/AND' incorporates:
     *  UnitDelay: '<S823>/Unit Delay'
     */
    rtb_Logical41_a = (rtb_VM_Conditional_Signal_CPV_D &&
                       (VLDR_ac_DW.UnitDelay_DSTATE_ph));

    /* Update for UnitDelay: '<S823>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_ph = rtb_Logical44;

    /* End of Outputs for SubSystem: '<S821>/EdgeFalling1' */

    /* Logic: '<S821>/Logical5' incorporates:
     *  Logic: '<S796>/NOT4'
     */
    rtb_Logical44 = ((rtb_VM_Conditional_Signal_DsblD ||
                      rtb_VM_Conditional_Signal_PostC) || rtb_Logical41_a);

    /* Logic: '<S822>/Fail Counter Reset' incorporates:
     *  UnitDelay: '<S822>/Unit Delay'
     *  UnitDelay: '<S822>/Unit Delay1'
     */
    rtb_Logical41_a = ((rtb_Logical44 || (VLDR_ac_DW.UnitDelay_DSTATE_n1)) ||
                       (VLDR_ac_DW.UnitDelay1_DSTATE_e));

    /* Outputs for Atomic SubSystem: '<S822>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S822>/Counter Reset  Enabled ' */
    /* Switch: '<S829>/Switch1' incorporates:
     *  Constant: '<S812>/KeVLDR_Cnt_HTL_Position_Wait_Time'
     *  Constant: '<S814>/KeVLDR_b_HTL_PosActFA_Enbl'
     *  Logic: '<S797>/Logical1'
     *  Logic: '<S797>/Logical18'
     *  Logic: '<S815>/AND'
     *  Logic: '<S822>/NOT6'
     *  RelationalOperator: '<S815>/Greater  Than'
     *  Switch: '<S829>/Switch2'
     *  Switch: '<S830>/Switch1'
     */
    if (rtb_Logical41_a)
    {
        /* Switch: '<S829>/Switch1' incorporates:
         *  Constant: '<S829>/Constant Value2'
         */
        VeVLDR_Cnt_HTL_PerfDiag_FailCnt = 0U;

        /* Switch: '<S830>/Switch1' incorporates:
         *  Constant: '<S830>/Constant Value2'
         */
        VeVLDR_Cnt_HTL_PerfDiag_SmpCnt = 0U;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S797>/Turn On Delay Sample' */
        if (rtb_TmpSignalConversionAtVeT_cs && ((rtb_Logical8_h5 &&
                (rtb_Switch1_dj >= KeVLDR_Cnt_HTL_Position_Wait_Time)) ||
                (rtb_TmpSignalConversionAtVeT_nu && (KeVLDR_b_HTL_PosActFA_Enbl))))
        {
            /* Switch: '<S829>/Switch2' incorporates:
             *  Constant: '<S829>/Constant Value1'
             *  Sum: '<S829>/Subtraction'
             *  Switch: '<S829>/Switch1'
             *  UnitDelay: '<S829>/Unit Delay'
             */
            VeVLDR_Cnt_HTL_PerfDiag_FailCnt = (uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_p3) + 1U);
        }
        else
        {
            /* Switch: '<S829>/Switch1' incorporates:
             *  Switch: '<S829>/Switch2'
             *  UnitDelay: '<S829>/Unit Delay'
             */
            VeVLDR_Cnt_HTL_PerfDiag_FailCnt = VLDR_ac_DW.UnitDelay_DSTATE_p3;
        }

        /* End of Outputs for SubSystem: '<S797>/Turn On Delay Sample' */

        /* Switch: '<S830>/Switch2' */
        if (rtb_TmpSignalConversionAtVeT_cs)
        {
            /* Switch: '<S830>/Switch1' incorporates:
             *  Constant: '<S830>/Constant Value1'
             *  Sum: '<S830>/Subtraction'
             *  Switch: '<S830>/Switch2'
             *  UnitDelay: '<S830>/Unit Delay'
             */
            VeVLDR_Cnt_HTL_PerfDiag_SmpCnt = (uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_ht) + 1U);
        }
        else
        {
            /* Switch: '<S830>/Switch1' incorporates:
             *  Switch: '<S830>/Switch2'
             *  UnitDelay: '<S830>/Unit Delay'
             */
            VeVLDR_Cnt_HTL_PerfDiag_SmpCnt = VLDR_ac_DW.UnitDelay_DSTATE_ht;
        }

        /* End of Switch: '<S830>/Switch2' */
    }

    /* End of Switch: '<S829>/Switch1' */
    /* End of Outputs for SubSystem: '<S822>/Counter Reset  Enabled 1' */

    /* Update for UnitDelay: '<S829>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_p3 = VeVLDR_Cnt_HTL_PerfDiag_FailCnt;

    /* End of Outputs for SubSystem: '<S822>/Counter Reset  Enabled ' */

    /* Outputs for Atomic SubSystem: '<S822>/Counter Reset  Enabled 1' */
    /* Update for UnitDelay: '<S830>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_ht = VeVLDR_Cnt_HTL_PerfDiag_SmpCnt;

    /* End of Outputs for SubSystem: '<S822>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S822>/Greater Than or Equal ' incorporates:
     *  Constant: '<S817>/KeVLDR_Cnt_HTL_PerfDiag_FailCnt'
     */
    rtb_TmpSignalConversionAtVeT_nu = (VeVLDR_Cnt_HTL_PerfDiag_FailCnt >=
        KeVLDR_Cnt_HTL_PerfDiag_FailCnt);

    /* Logic: '<S822>/NOT5' incorporates:
     *  Constant: '<S818>/KeVLDR_Cnt_HTL_PerfDiag_SmpCnt'
     *  Logic: '<S822>/NOT3'
     *  RelationalOperator: '<S822>/Less Than  or Equal'
     */
    rtb_TmpSignalConversionAtVeT_cs = ((VeVLDR_Cnt_HTL_PerfDiag_SmpCnt >=
        KeVLDR_Cnt_HTL_PerfDiag_SmpCnt) && (!rtb_TmpSignalConversionAtVeT_nu));

    /* Switch: '<S835>/Switch1' incorporates:
     *  Constant: '<S828>/Constant Value'
     *  DataStoreWrite: '<S798>/Data Store Write1'
     *  Switch: '<S834>/Switch1'
     */
    if (rtb_VM_Conditional_Signal_PostC)
    {
        VLDR_ac_DW.NeVLDR_Cnt_HTL_PerfDiag_MFOP = 0U;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeT_cs)
        {
            /* MinMax: '<S828>/Minimum2' incorporates:
             *  DataStoreRead: '<S798>/Data Store Read'
             *  Switch: '<S834>/Switch1'
             */
            if (VeVLDR_Cnt_HTL_PerfDiag_FailCnt >
                    VLDR_ac_DW.NeVLDR_Cnt_HTL_PerfDiag_MFOP)
            {
                /* DataStoreWrite: '<S798>/Data Store Write1' incorporates:
                 *  Switch: '<S834>/Switch1'
                 */
                VLDR_ac_DW.NeVLDR_Cnt_HTL_PerfDiag_MFOP =
                    VeVLDR_Cnt_HTL_PerfDiag_FailCnt;
            }

            /* End of MinMax: '<S828>/Minimum2' */
        }
    }

    /* End of Switch: '<S835>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S821>/Fail' */
    VLDR_ac_Fail(rtb_TmpSignalConversionAtVeT_nu, &VLDR_ac_B.Merge_o);

    /* End of Outputs for SubSystem: '<S821>/Fail' */

    /* Outputs for Enabled SubSystem: '<S821>/Init' */
    VLDR_ac_Init_a(rtb_Logical44, &VLDR_ac_B.Merge_o);

    /* End of Outputs for SubSystem: '<S821>/Init' */

    /* Outputs for Enabled SubSystem: '<S821>/Pass' */
    VLDR_ac_Pass(rtb_TmpSignalConversionAtVeT_cs, &VLDR_ac_B.Merge_o);

    /* End of Outputs for SubSystem: '<S821>/Pass' */

    /* Update for UnitDelay: '<S822>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_n1 = rtb_TmpSignalConversionAtVeT_cs;

    /* Update for UnitDelay: '<S822>/Unit Delay1' */
    VLDR_ac_DW.UnitDelay1_DSTATE_e = rtb_TmpSignalConversionAtVeT_nu;

    /* End of Outputs for SubSystem: '<S4>/HTL_Diag' */
#endif

    /* Outputs for Atomic SubSystem: '<S15>/HTSoV_Diag' */
#if Rte_SysCon_Variant_VLDR_3

    /* Outputs for Atomic SubSystem: '<S836>/HTSoV_Diag_Enable' */

    /* Inport: '<Root>/VeHTIR_b_HVC_Htr_LIN_ResErr' */
    (void)Rte_Read_VeHTIR_b_HVC_Htr_LIN_ResErr_Value(&rtb_Logical6_j);

    /* Inport: '<Root>/VeHTIR_b_HVC_HtrClntIn_Temp_FA' */
    (void)Rte_Read_VeHTIR_b_HVC_HtrClntIn_Temp_FA_Value(&rtb_AND_bb);

    /* Inport: '<Root>/VeHTIR_b_HVC_HtrClntIn_TempSensFlt_FA' */
    (void)Rte_Read_VeHTIR_b_HVC_HtrClntIn_TempSensFlt_FA_Value(&rtb_AND_or);

    /* Inport: '<Root>/VeTHDR_b_InTmpSns_FltDtct' */
    (void)Rte_Read_VeTHDR_b_InTmpSns_FltDtct_Value(&rtb_OR1_e4);

    /* Switch: '<S844>/Switch' incorporates:
     *  Constant: '<S852>/Constant1'
     *  Constant: '<S852>/Constant2'
     *  Constant: '<S853>/Constant1'
     *  Constant: '<S853>/Constant2'
     *  Constant: '<S854>/Constant1'
     *  Constant: '<S854>/Constant2'
     *  Constant: '<S863>/KeVLDR_b_HTSoV_StkCls_BSW_Ckt'
     *  Constant: '<S864>/KeVLDR_b_HTSoV_StkCls_BSW_CktHi'
     *  Constant: '<S865>/KeVLDR_b_HTSoV_StkCls_BSW_CktLo'
     *  Constant: '<S866>/KeVLDR_b_HTSoV_StkCls_BSW_D'
     *  Constant: '<S867>/KeVLDR_b_HTSoV_StkCls_BSW_OV'
     *  DataStoreRead: '<S852>/StatusByte_CoolantVlvB_CktHi'
     *  DataStoreRead: '<S853>/StatusByte_CoolantVlvB_CktLo'
     *  DataStoreRead: '<S854>/StatusByte_CoolantVlvB_Ckt'
     *  Logic: '<S844>/Logical10'
     *  Logic: '<S844>/Logical13'
     *  Logic: '<S844>/Logical15'
     *  Logic: '<S844>/Logical16'
     *  Logic: '<S844>/Logical17'
     *  Logic: '<S852>/Logical Operator'
     *  Logic: '<S853>/Logical Operator'
     *  Logic: '<S854>/Logical Operator'
     *  RelationalOperator: '<S852>/Relational Operator1'
     *  RelationalOperator: '<S852>/Relational Operator2'
     *  RelationalOperator: '<S853>/Relational Operator1'
     *  RelationalOperator: '<S853>/Relational Operator2'
     *  RelationalOperator: '<S854>/Relational Operator1'
     *  RelationalOperator: '<S854>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S852>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S852>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S853>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S853>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S854>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S854>/Bitwise Operator2'
     */
    if (KeVLDR_b_HTSoV_StkCls_BSW_OV)
    {
        rtb_Logical44 = KeVLDR_b_HTSoV_StkCls_BSW_D;
    }
    else
    {
        rtb_Logical44 = ((((((((sint32)VLDR_ac_DW.StatusByte_CoolantVlvB_Ckt) &
                              1) <= 0) || ((((uint32)
                               VLDR_ac_DW.StatusByte_CoolantVlvB_Ckt) & 64U) !=
                             0U)) || (!KeVLDR_b_HTSoV_StkCls_BSW_Ckt)) &&
                          ((((((sint32)VLDR_ac_DW.StatusByte_CoolantVlvB_CktLo)
                              & 1) <= 0) || ((((uint32)
                               VLDR_ac_DW.StatusByte_CoolantVlvB_CktLo) & 64U)
                             != 0U)) || (!KeVLDR_b_HTSoV_StkCls_BSW_CktLo))) &&
                         ((((((sint32)VLDR_ac_DW.StatusByte_CoolantVlvB_CktHi) &
                             1) <= 0) || ((((uint32)
                              VLDR_ac_DW.StatusByte_CoolantVlvB_CktHi) & 64U) !=
                            0U)) || (!KeVLDR_b_HTSoV_StkCls_BSW_CktHi)));
    }

    /* End of Switch: '<S844>/Switch' */

    /* Switch: '<S844>/Switch1' incorporates:
     *  Constant: '<S855>/Constant1'
     *  Constant: '<S855>/Constant2'
     *  Constant: '<S856>/Constant1'
     *  Constant: '<S856>/Constant2'
     *  Constant: '<S858>/HeVLDR_b_HtrCommBus_Slct'
     *  DataStoreRead: '<S855>/StatusByte_LIN1_BusOff'
     *  DataStoreRead: '<S856>/StatusByte_LIN2_BusOff'
     *  Logic: '<S855>/Logical Operator'
     *  Logic: '<S856>/Logical Operator'
     *  RelationalOperator: '<S855>/Relational Operator1'
     *  RelationalOperator: '<S855>/Relational Operator2'
     *  RelationalOperator: '<S856>/Relational Operator1'
     *  RelationalOperator: '<S856>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S855>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S855>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S856>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S856>/Bitwise Operator2'
     */
    if (HeVLDR_b_HtrCommBus_Slct)
    {
        rtb_TmpSignalConversionAtVeT_nu = (((((sint32)
            VLDR_ac_DW.StatusByte_LIN1_BusOff) & 1) > 0) && ((((uint32)
            VLDR_ac_DW.StatusByte_LIN1_BusOff) & 64U) == 0U));
    }
    else
    {
        rtb_TmpSignalConversionAtVeT_nu = (((((sint32)
            VLDR_ac_DW.StatusByte_LIN2_BusOff) & 1) > 0) && ((((uint32)
            VLDR_ac_DW.StatusByte_LIN2_BusOff) & 64U) == 0U));
    }

    /* End of Switch: '<S844>/Switch1' */

    /* Logic: '<S844>/Logical' incorporates:
     *  Logic: '<S844>/Logical2'
     *  Logic: '<S900>/Logical'
     */
    rtb_Logical41_a = ((!VLDR_ac_B.Switch1) && (VLDR_ac_B.Switch2));

    /* Logic: '<S844>/Logical6' incorporates:
     *  Constant: '<S847>/Constant'
     *  Constant: '<S848>/Constant'
     *  Constant: '<S849>/Constant'
     *  Constant: '<S850>/Constant'
     *  Constant: '<S851>/Constant'
     *  Constant: '<S857>/Constant1'
     *  Constant: '<S857>/Constant2'
     *  Constant: '<S859>/KeVLDR_U_SysVltLwrLim'
     *  Constant: '<S860>/KeVLDR_U_SysVltUprLim'
     *  Constant: '<S861>/KeVLDR_b_HTAuxPmp_MinFlow_ClsEn'
     *  Constant: '<S862>/KeVLDR_b_HTSoV_Open'
     *  Constant: '<S868>/KeVLDR_b_HTSoV_StkClsd_HVC_HtrClntIn_Temp_OR_ECHTIS_Dsbl'
     *  Constant: '<S869>/KeVLDR_b_HTSoV_StkClsd__HVC_HtrClntIn_Temp_Enb'
     *  Constant: '<S870>/KeVLDR_b_HVC_Htr_LIN_ResErr_Disb'
     *  Constant: '<S871>/KeVLDR_b_Operating_States_ClsEn'
     *  Constant: '<S872>/KeVLDR_b_StkOpn_FltDtct_OV'
     *  Constant: '<S873>/KeVLDR_n_HTAuxPmp_MinFlowOpn'
     *  DataStoreRead: '<S857>/StatusByte_LostCommCoolHtrA'
     *  Logic: '<S844>/Logical'
     *  Logic: '<S844>/Logical1'
     *  Logic: '<S844>/Logical11'
     *  Logic: '<S844>/Logical12'
     *  Logic: '<S844>/Logical14'
     *  Logic: '<S844>/Logical18'
     *  Logic: '<S844>/Logical19'
     *  Logic: '<S844>/Logical20'
     *  Logic: '<S844>/Logical21'
     *  Logic: '<S844>/Logical22'
     *  Logic: '<S844>/Logical23'
     *  Logic: '<S844>/Logical24'
     *  Logic: '<S844>/Logical25'
     *  Logic: '<S844>/Logical26'
     *  Logic: '<S844>/Logical27'
     *  Logic: '<S844>/Logical28'
     *  Logic: '<S844>/Logical3'
     *  Logic: '<S844>/Logical4'
     *  Logic: '<S844>/Logical5'
     *  Logic: '<S844>/Logical7'
     *  Logic: '<S844>/Logical8'
     *  Logic: '<S844>/Logical9'
     *  Logic: '<S857>/Logical Operator'
     *  RelationalOperator: '<S844>/Comparison1'
     *  RelationalOperator: '<S844>/Comparison2'
     *  RelationalOperator: '<S844>/Comparison3'
     *  RelationalOperator: '<S844>/Comparison4'
     *  RelationalOperator: '<S844>/Comparison5'
     *  RelationalOperator: '<S844>/Comparison6'
     *  RelationalOperator: '<S844>/Comparison7'
     *  RelationalOperator: '<S844>/Comparison8'
     *  RelationalOperator: '<S844>/Comparison9'
     *  RelationalOperator: '<S857>/Relational Operator1'
     *  RelationalOperator: '<S857>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S857>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S857>/Bitwise Operator2'
     *  UnitDelay: '<S838>/Unit Delay'
     */
    rtb_Logical6_j = (((((((((rtb_Logical41_a && ((KeVLDR_U_SysVltLwrLim <
        rtb_VM_Conditional_Signal_BF1_S) && (rtb_VM_Conditional_Signal_BF1_S <
        KeVLDR_U_SysVltUprLim))) && (((((((uint32)
        rtb_TmpSignalConversionAtVeTHMR) == CeTHMR_e_StateA) || (((uint32)
        rtb_TmpSignalConversionAtVeTHMR) == CeTHMR_e_StateC)) || (((uint32)
        rtb_TmpSignalConversionAtVeTHMR) == CeTHMR_e_StateE)) || (((uint32)
        rtb_TmpSignalConversionAtVeTHMR) == CeTHMR_e_StateF)) ||
        (KeVLDR_b_Operating_States_ClsEn))) && ((rtb_TmpSignalConversionAtVePMIR
        >= KeVLDR_n_HTAuxPmp_MinFlowOpn) || (KeVLDR_b_HTAuxPmp_MinFlow_ClsEn))) &&
                           (((uint32)rtb_TmpSignalConversionAtVePMTR) !=
                            CePMTR_e_DISBL_All_Thrml)) &&
                          ((!VLDR_ac_DW.UnitDelay_DSTATE_bc) ||
                           (KeVLDR_b_StkOpn_FltDtct_OV))) &&
                         (rtb_TmpSignalConversionAtVeR_go == KeVLDR_b_HTSoV_Open))
                        && rtb_Logical44) &&
                       ((KeVLDR_b_HTSoV_StkClsd_HVC_HtrClntIn_Temp_OR_ECHTIS_Dsbl)
                        || (((!rtb_TmpSignalConversionAtVeTHDR) &&
                          (!rtb_TmpSignalConversionAtVeTMIR)) ||
                            (((((((!rtb_TmpSignalConversionAtVeT_nu) &&
        (((((sint32)VLDR_ac_DW.StatusByte_LostCommCoolHtrA) & 1) <= 0) ||
         ((((uint32)VLDR_ac_DW.StatusByte_LostCommCoolHtrA) & 64U) != 0U))) &&
        ((!rtb_Logical6_j) || (KeVLDR_b_HVC_Htr_LIN_ResErr_Disb))) &&
        (!rtb_OR1_e4)) && (!rtb_AND_or)) && (!rtb_AND_bb)) &&
                          (KeVLDR_b_HTSoV_StkClsd__HVC_HtrClntIn_Temp_Enb))))) &&
                      rtb_TmpSignalConversionAtVeDFIR);

    /* Outputs for Atomic SubSystem: '<S844>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S876>/EdgeRising' */
    /* Logic: '<S877>/AND' incorporates:
     *  Logic: '<S877>/OR1'
     *  UnitDelay: '<S877>/Unit Delay'
     */
    rtb_AND_bb = (rtb_Logical6_j && (!VLDR_ac_DW.UnitDelay_DSTATE_dv));

    /* Update for UnitDelay: '<S877>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_dv = rtb_Logical6_j;

    /* End of Outputs for SubSystem: '<S876>/EdgeRising' */

    /* Switch: '<S876>/Switch1' incorporates:
     *  Logic: '<S876>/OR'
     *  Logic: '<S876>/OR1'
     */
    if ((!rtb_Logical6_j) || rtb_AND_bb)
    {
        /* Switch: '<S876>/Switch1' incorporates:
         *  Constant: '<S876>/Constant Value1'
         */
        rtb_TmpSignalConversionAtVeRC_c = 0.0F;
    }
    else
    {
        /* Switch: '<S876>/Switch1' incorporates:
         *  Constant: '<S874>/KeVLDR_t_StkCls_Diag'
         *  Constant: '<S875>/KeVLDR_t_StkCls_Diag_Deb'
         *  MinMax: '<S876>/Minimum'
         *  Sum: '<S876>/Summation'
         *  UnitDelay: '<S876>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeRC_c = fminf(KeVLDR_t_StkCls_Diag_Deb,
            KeVLDR_t_StkCls_Diag + VLDR_ac_DW.UnitDelay_DSTATE_gn);
    }

    /* End of Switch: '<S876>/Switch1' */
    /* End of Outputs for SubSystem: '<S844>/Turn On Delay Time' */

    /* Inport: '<Root>/VeHTIR_T_HVC_HtrClntIn_Temp' */
    (void)Rte_Read_VeHTIR_T_HVC_HtrClntIn_Temp_Value(&rtb_Switch1_lv);

    /* Inport: '<Root>/VeTMIR_T_ElecClntHtr_TmpIn' */
    (void)Rte_Read_VeTMIR_T_ElecClntHtr_TmpIn_Value(&tmpRead_3);

    /* Outputs for Atomic SubSystem: '<S844>/Turn On Delay Time' */
    /* Logic: '<S876>/AND' incorporates:
     *  Constant: '<S875>/KeVLDR_t_StkCls_Diag_Deb'
     *  RelationalOperator: '<S876>/Greater  Than'
     */
    VeVLDR_b_HTSoV_StkCls_Diag_En = (rtb_Logical6_j &&
        (rtb_TmpSignalConversionAtVeRC_c >= KeVLDR_t_StkCls_Diag_Deb));

    /* Update for UnitDelay: '<S876>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_gn = rtb_TmpSignalConversionAtVeRC_c;

    /* End of Outputs for SubSystem: '<S844>/Turn On Delay Time' */

    /* VariantMerge generated from: '<S836>/HTSoV_StkCls_XYEnbl' incorporates:
     *  Constant: '<S884>/KeVLDR_b_HTSoV_StkCls_XYEnbl'
     *  Logic: '<S846>/AND1'
     */
    VLDR_ac_B.VariantMergeForOutportHTSoV_S_d = ((VeVLDR_b_HTSoV_StkCls_Diag_En)
        && (KeVLDR_b_HTSoV_StkCls_XYEnbl));

    /* RelationalOperator: '<S885>/Relational Operator3' incorporates:
     *  Constant: '<S885>/Constant3'
     *  DataStoreRead: '<S846>/Data Store Read2'
     *  S-Function (sfix_bitop): '<S885>/Bitwise Operator2'
     */
    rtb_AND_bb = ((((uint32)VLDR_ac_DW.StatusByte_CoolantVlvB_StkClsd) & 64U) ==
                  0U);

    /* Outputs for Atomic SubSystem: '<S885>/EdgeFalling1' */
    /* Logic: '<S885>/Logical Operator' incorporates:
     *  Logic: '<S887>/OR1'
     */
    rtb_AND_or = !rtb_AND_bb;

    /* End of Outputs for SubSystem: '<S885>/EdgeFalling1' */

    /* Logic: '<S885>/Logical1' incorporates:
     *  Constant: '<S882>/Calib'
     *  Constant: '<S885>/Constant1'
     *  DataStoreRead: '<S846>/Data Store Read2'
     *  Logic: '<S885>/Logical Operator'
     *  Logic: '<S885>/Logical10'
     *  Logic: '<S885>/Logical12'
     *  RelationalOperator: '<S885>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S885>/Bitwise Operator3'
     */
    rtb_Logical6_j = ((VLDR_ac_B.VariantMergeForOutportHTSoV_S_d) &&
                      ((!KeVLDR_b_CoolantVlvB_StkClsd_LtchEnbl) || (((((uint32)
                           VLDR_ac_DW.StatusByte_CoolantVlvB_StkClsd) & 1U) ==
                         0U) || rtb_AND_or)));

    /* Switch: '<S845>/Switch' incorporates:
     *  Constant: '<S879>/KeVLDR_b_HTSoV_StkClsd__HVC_HtrClntIn_Temp_Enb'
     *  Logic: '<S845>/Logical'
     *  Logic: '<S845>/Logical1'
     */
    if ((KeVLDR_b_HTSoV_StkClsd__HVC_HtrClntIn_Temp_Enb) &&
            (rtb_TmpSignalConversionAtVeTHDR || rtb_TmpSignalConversionAtVeTMIR))
    {
        tmpRead_3 = rtb_Switch1_lv;
    }

    /* End of Switch: '<S845>/Switch' */

    /* Sum: '<S845>/Sum' */
    VeVLDR_T_HTSoV_StkClsd_DiffTempLim = tmpRead_3 - VeVLDR_T_EngCoolantTemp_AD;

    /* Logic: '<S846>/AND2' incorporates:
     *  Abs: '<S845>/Abs'
     *  Constant: '<S878>/KeVLDR_T_CloseValve_DiffLim'
     *  Constant: '<S883>/KeVLDR_b_HTSoV_StkCls_Flt'
     *  RelationalOperator: '<S845>/Comparison1'
     */
    VeVLDR_b_HTSoV_StkCls_Flt = ((fabsf(VeVLDR_T_HTSoV_StkClsd_DiffTempLim) >
        KeVLDR_T_CloseValve_DiffLim) && (KeVLDR_b_HTSoV_StkCls_Flt));

    /* UnitDelay: '<S956>/Unit Delay' incorporates:
     *  Logic: '<S841>/NOT4'
     */
    rtb_TmpSignalConversionAtVeT_nu = (rtb_VM_Conditional_Signal_DsblD ||
        rtb_VM_Conditional_Signal_PostC);

    /* Outputs for Atomic SubSystem: '<S885>/EdgeFalling1' */
    /* Logic: '<S887>/AND' incorporates:
     *  UnitDelay: '<S887>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeTHDR = (rtb_AND_or &&
        (VLDR_ac_DW.UnitDelay_DSTATE_oi));

    /* Update for UnitDelay: '<S887>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_oi = rtb_AND_bb;

    /* End of Outputs for SubSystem: '<S885>/EdgeFalling1' */

    /* Logic: '<S885>/Logical5' */
    rtb_AND_bb = (rtb_TmpSignalConversionAtVeT_nu ||
                  rtb_TmpSignalConversionAtVeTHDR);

    /* Logic: '<S886>/Fail Counter Reset' incorporates:
     *  UnitDelay: '<S886>/Unit Delay'
     *  UnitDelay: '<S886>/Unit Delay1'
     */
    rtb_TmpSignalConversionAtVeTHDR = ((rtb_AND_bb ||
        (VLDR_ac_DW.UnitDelay_DSTATE_eg)) || (VLDR_ac_DW.UnitDelay1_DSTATE_bi));

    /* Outputs for Atomic SubSystem: '<S886>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S886>/Counter Reset  Enabled ' */
    /* Switch: '<S893>/Switch1' incorporates:
     *  Logic: '<S886>/NOT6'
     *  Switch: '<S893>/Switch2'
     *  Switch: '<S894>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeTHDR)
    {
        /* Switch: '<S893>/Switch1' incorporates:
         *  Constant: '<S893>/Constant Value2'
         */
        VeVLDR_Cnt_HTSoV_StkCls_FailCnt = 0U;

        /* Switch: '<S894>/Switch1' incorporates:
         *  Constant: '<S894>/Constant Value2'
         */
        VeVLDR_Cnt_HTSoV_StkCls_SmpCnt = 0U;
    }
    else
    {
        if (rtb_Logical6_j && (VeVLDR_b_HTSoV_StkCls_Flt))
        {
            /* Switch: '<S893>/Switch2' incorporates:
             *  Constant: '<S893>/Constant Value1'
             *  Sum: '<S893>/Subtraction'
             *  Switch: '<S893>/Switch1'
             *  UnitDelay: '<S893>/Unit Delay'
             */
            VeVLDR_Cnt_HTSoV_StkCls_FailCnt = (uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_lix) + 1U);
        }
        else
        {
            /* Switch: '<S893>/Switch1' incorporates:
             *  Switch: '<S893>/Switch2'
             *  UnitDelay: '<S893>/Unit Delay'
             */
            VeVLDR_Cnt_HTSoV_StkCls_FailCnt = VLDR_ac_DW.UnitDelay_DSTATE_lix;
        }

        /* Switch: '<S894>/Switch2' */
        if (rtb_Logical6_j)
        {
            /* Switch: '<S894>/Switch1' incorporates:
             *  Constant: '<S894>/Constant Value1'
             *  Sum: '<S894>/Subtraction'
             *  Switch: '<S894>/Switch2'
             *  UnitDelay: '<S894>/Unit Delay'
             */
            VeVLDR_Cnt_HTSoV_StkCls_SmpCnt = (uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_f2) + 1U);
        }
        else
        {
            /* Switch: '<S894>/Switch1' incorporates:
             *  Switch: '<S894>/Switch2'
             *  UnitDelay: '<S894>/Unit Delay'
             */
            VeVLDR_Cnt_HTSoV_StkCls_SmpCnt = VLDR_ac_DW.UnitDelay_DSTATE_f2;
        }

        /* End of Switch: '<S894>/Switch2' */
    }

    /* End of Switch: '<S893>/Switch1' */
    /* End of Outputs for SubSystem: '<S886>/Counter Reset  Enabled 1' */

    /* Update for UnitDelay: '<S893>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_lix = VeVLDR_Cnt_HTSoV_StkCls_FailCnt;

    /* End of Outputs for SubSystem: '<S886>/Counter Reset  Enabled ' */

    /* Outputs for Atomic SubSystem: '<S886>/Counter Reset  Enabled 1' */
    /* Update for UnitDelay: '<S894>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_f2 = VeVLDR_Cnt_HTSoV_StkCls_SmpCnt;

    /* End of Outputs for SubSystem: '<S886>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S886>/Greater Than or Equal ' incorporates:
     *  Constant: '<S880>/KeVLDR_Cnt_HTSoV_StkCls_FailCnt'
     */
    rtb_TmpSignalConversionAtVeTHDR = (VeVLDR_Cnt_HTSoV_StkCls_FailCnt >=
        KeVLDR_Cnt_HTSoV_StkCls_FailCnt);

    /* Logic: '<S886>/NOT5' incorporates:
     *  Constant: '<S881>/KeVLDR_Cnt_HTSoV_StkCls_SmpCnt'
     *  Logic: '<S886>/NOT3'
     *  RelationalOperator: '<S886>/Less Than  or Equal'
     */
    rtb_TmpSignalConversionAtVeTMIR = ((VeVLDR_Cnt_HTSoV_StkCls_SmpCnt >=
        KeVLDR_Cnt_HTSoV_StkCls_SmpCnt) && (!rtb_TmpSignalConversionAtVeTHDR));

    /* Switch: '<S899>/Switch1' incorporates:
     *  Constant: '<S892>/Constant Value'
     *  DataStoreWrite: '<S846>/Data Store Write3'
     *  Switch: '<S898>/Switch1'
     */
    if (rtb_VM_Conditional_Signal_PostC)
    {
        VLDR_ac_DW.NeVLDR_Cnt_HTSoV_StkCls_MFOP = 0U;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeTMIR)
        {
            /* MinMax: '<S892>/Minimum2' incorporates:
             *  DataStoreRead: '<S846>/Data Store Read1'
             *  Switch: '<S898>/Switch1'
             */
            if (VeVLDR_Cnt_HTSoV_StkCls_FailCnt >
                    VLDR_ac_DW.NeVLDR_Cnt_HTSoV_StkCls_MFOP)
            {
                /* DataStoreWrite: '<S846>/Data Store Write3' incorporates:
                 *  Switch: '<S898>/Switch1'
                 */
                VLDR_ac_DW.NeVLDR_Cnt_HTSoV_StkCls_MFOP =
                    VeVLDR_Cnt_HTSoV_StkCls_FailCnt;
            }

            /* End of MinMax: '<S892>/Minimum2' */
        }
    }

    /* End of Switch: '<S899>/Switch1' */

    /* Inport: '<Root>/VeHTRR_P_HVC_HtrPwrLimit' */
    (void)Rte_Read_VeHTRR_P_HVC_HtrPwrLimit_Value(&tmpRead_6);

    /* Outputs for Enabled SubSystem: '<S885>/Fail' */
    VLDR_ac_Fail(rtb_TmpSignalConversionAtVeTHDR,
                 &VLDR_ac_B.VariantMergeForOutportVeVLDR__o);

    /* End of Outputs for SubSystem: '<S885>/Fail' */

    /* Outputs for Enabled SubSystem: '<S885>/Init' */
    VLDR_ac_Init_a(rtb_AND_bb, &VLDR_ac_B.VariantMergeForOutportVeVLDR__o);

    /* End of Outputs for SubSystem: '<S885>/Init' */

    /* Outputs for Enabled SubSystem: '<S885>/Pass' */
    VLDR_ac_Pass(rtb_TmpSignalConversionAtVeTMIR,
                 &VLDR_ac_B.VariantMergeForOutportVeVLDR__o);

    /* End of Outputs for SubSystem: '<S885>/Pass' */

    /* VariantMerge generated from: '<S836>/HTSoV_StkCls_FltDtct' incorporates:
     *  Constant: '<S888>/Constant'
     *  RelationalOperator: '<S885>/Relational Operator'
     *  VariantMerge generated from: '<S836>/VeVLDR_e_FaultSts_CoolantVlvB_StkClsd'
     */
    VLDR_ac_B.VariantMergeForOutportHTSoV_Stk = (((uint32)
        VLDR_ac_B.VariantMergeForOutportVeVLDR__o) == CeDFIB_e_Fail);

    /* RelationalOperator: '<S900>/Comparison5' incorporates:
     *  Constant: '<S913>/KeVLDR_b_HTSoV_Close'
     */
    rtb_Logical6_j = (rtb_TmpSignalConversionAtVeR_go == KeVLDR_b_HTSoV_Close);

    /* Logic: '<S900>/Logical12' incorporates:
     *  Constant: '<S922>/KeVLDR_e_EngStrtStpMd_EngRun'
     *  Logic: '<S900>/Logical10'
     *  Logic: '<S900>/Logical11'
     *  RelationalOperator: '<S900>/Comparison9'
     *  Switch: '<S5>/Switch5'
     */
    rtb_AND_bb = ((rtb_Logical6_j && (!VLDR_ac_B.Switch4)) && (VLDR_ac_B.Switch5
                   != KeVLDR_e_EngStrtStpMd_EngRun));

    /* Outputs for Atomic SubSystem: '<S900>/Signal Latch Off With Reset' */
    /* Outputs for Atomic SubSystem: '<S926>/EdgeFalling' */
    /* Logic: '<S928>/AND' incorporates:
     *  Logic: '<S928>/OR1'
     *  UnitDelay: '<S928>/Unit Delay'
     */
    rtb_AND_or = ((!rtb_AND_bb) && (VLDR_ac_DW.UnitDelay_DSTATE_alc));

    /* Update for UnitDelay: '<S928>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_alc = rtb_AND_bb;

    /* End of Outputs for SubSystem: '<S926>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S926>/EdgeRising' */
    /* Logic: '<S929>/OR1' incorporates:
     *  UnitDelay: '<S929>/Unit Delay'
     */
    rtb_OR1_e4 = !VLDR_ac_DW.UnitDelay_DSTATE_ln;

    /* Update for UnitDelay: '<S929>/Unit Delay' incorporates:
     *  UnitDelay: '<S926>/Unit Delay'
     */
    VLDR_ac_DW.UnitDelay_DSTATE_ln = VLDR_ac_DW.UnitDelay_DSTATE_kwl;

    /* Outputs for Atomic SubSystem: '<S926>/Signal Latch On With Reset' */
    /* Logic: '<S930>/OR1' incorporates:
     *  Logic: '<S929>/AND'
     *  Logic: '<S930>/NOT'
     *  Logic: '<S930>/OR'
     *  UnitDelay: '<S926>/Unit Delay'
     *  UnitDelay: '<S930>/Unit Delay'
     */
    rtb_AND_or = (rtb_AND_or || (((!VLDR_ac_DW.UnitDelay_DSTATE_kwl) ||
                    (!rtb_OR1_e4)) && (VLDR_ac_DW.UnitDelay_DSTATE_dd)));

    /* End of Outputs for SubSystem: '<S926>/EdgeRising' */

    /* Update for UnitDelay: '<S930>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_dd = rtb_AND_or;

    /* End of Outputs for SubSystem: '<S926>/Signal Latch On With Reset' */

    /* Switch: '<S926>/Switch1' */
    VeVLDR_b_EngRunning_Chk = ((!rtb_AND_or) && rtb_AND_bb);

    /* Update for UnitDelay: '<S926>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_kwl = rtb_Logical6_j;

    /* End of Outputs for SubSystem: '<S900>/Signal Latch Off With Reset' */

    /* Switch: '<S900>/Switch' incorporates:
     *  Constant: '<S906>/Constant1'
     *  Constant: '<S906>/Constant2'
     *  Constant: '<S907>/Constant1'
     *  Constant: '<S907>/Constant2'
     *  Constant: '<S908>/Constant1'
     *  Constant: '<S908>/Constant2'
     *  Constant: '<S914>/KeVLDR_b_HTSoV_StkOpn_BSW_Ckt'
     *  Constant: '<S915>/KeVLDR_b_HTSoV_StkOpn_BSW_CktHi'
     *  Constant: '<S916>/KeVLDR_b_HTSoV_StkOpn_BSW_CktLo'
     *  Constant: '<S917>/KeVLDR_b_HTSoV_StkOpn_BSW_D'
     *  Constant: '<S918>/KeVLDR_b_HTSoV_StkOpn_BSW_OV'
     *  DataStoreRead: '<S906>/StatusByte_CoolantVlvB_CktHi'
     *  DataStoreRead: '<S907>/StatusByte_CoolantVlvB_CktLo'
     *  DataStoreRead: '<S908>/StatusByte_CoolantVlvB_Ckt'
     *  Logic: '<S900>/Logical13'
     *  Logic: '<S900>/Logical14'
     *  Logic: '<S900>/Logical15'
     *  Logic: '<S900>/Logical16'
     *  Logic: '<S900>/Logical17'
     *  Logic: '<S906>/Logical Operator'
     *  Logic: '<S907>/Logical Operator'
     *  Logic: '<S908>/Logical Operator'
     *  RelationalOperator: '<S906>/Relational Operator1'
     *  RelationalOperator: '<S906>/Relational Operator2'
     *  RelationalOperator: '<S907>/Relational Operator1'
     *  RelationalOperator: '<S907>/Relational Operator2'
     *  RelationalOperator: '<S908>/Relational Operator1'
     *  RelationalOperator: '<S908>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S906>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S906>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S907>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S907>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S908>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S908>/Bitwise Operator2'
     */
    if (KeVLDR_b_HTSoV_StkOpn_BSW_OV)
    {
        rtb_Logical44 = KeVLDR_b_HTSoV_StkOpn_BSW_D;
    }
    else
    {
        rtb_Logical44 = ((((((((sint32)VLDR_ac_DW.StatusByte_CoolantVlvB_Ckt) &
                              1) <= 0) || ((((uint32)
                               VLDR_ac_DW.StatusByte_CoolantVlvB_Ckt) & 64U) !=
                             0U)) || (!KeVLDR_b_HTSoV_StkOpn_BSW_Ckt)) &&
                          ((((((sint32)VLDR_ac_DW.StatusByte_CoolantVlvB_CktLo)
                              & 1) <= 0) || ((((uint32)
                               VLDR_ac_DW.StatusByte_CoolantVlvB_CktLo) & 64U)
                             != 0U)) || (!KeVLDR_b_HTSoV_StkOpn_BSW_CktLo))) &&
                         ((((((sint32)VLDR_ac_DW.StatusByte_CoolantVlvB_CktHi) &
                             1) <= 0) || ((((uint32)
                              VLDR_ac_DW.StatusByte_CoolantVlvB_CktHi) & 64U) !=
                            0U)) || (!KeVLDR_b_HTSoV_StkOpn_BSW_CktHi)));
    }

    /* End of Switch: '<S900>/Switch' */

    /* Logic: '<S900>/Logical6' incorporates:
     *  Constant: '<S903>/Constant'
     *  Constant: '<S904>/Constant'
     *  Constant: '<S905>/Constant'
     *  Constant: '<S909>/KeVLDR_U_SysVltLwrLim'
     *  Constant: '<S910>/KeVLDR_U_SysVltUprLim'
     *  Constant: '<S911>/KeVLDR_W_HVC_HtrPwrLimit_Min'
     *  Constant: '<S912>/KeVLDR_b_HTAuxPmp_MinFlow_OpnEn'
     *  Constant: '<S919>/KeVLDR_b_HVC_HtrPwrLimit_Chk_En'
     *  Constant: '<S920>/KeVLDR_b_Operating_States_OpnEn'
     *  Constant: '<S921>/KeVLDR_b_StkCls_FltDtct_OV'
     *  Constant: '<S923>/KeVLDR_n_HTAuxPmp_MinFlowCls'
     *  Logic: '<S900>/Logical1'
     *  Logic: '<S900>/Logical3'
     *  Logic: '<S900>/Logical4'
     *  Logic: '<S900>/Logical5'
     *  Logic: '<S900>/Logical7'
     *  Logic: '<S900>/Logical8'
     *  Logic: '<S900>/Logical9'
     *  RelationalOperator: '<S900>/Comparison1'
     *  RelationalOperator: '<S900>/Comparison2'
     *  RelationalOperator: '<S900>/Comparison3'
     *  RelationalOperator: '<S900>/Comparison4'
     *  RelationalOperator: '<S900>/Comparison6'
     *  RelationalOperator: '<S900>/Comparison7'
     *  RelationalOperator: '<S900>/Comparison8'
     *  UnitDelay: '<S838>/Unit Delay1'
     */
    VeVLDR_b_HTSoV_StkOpn_Diag_En_BD = ((((((((((rtb_Logical41_a &&
        ((KeVLDR_U_SysVltLwrLim < rtb_VM_Conditional_Signal_BF1_S) &&
         (rtb_VM_Conditional_Signal_BF1_S < KeVLDR_U_SysVltUprLim))) &&
        (((((uint32)rtb_TmpSignalConversionAtVeTHMR) == CeTHMR_e_StateD) ||
          (((uint32)rtb_TmpSignalConversionAtVeTHMR) == CeTHMR_e_StateG)) ||
         (KeVLDR_b_Operating_States_OpnEn))) &&
        ((rtb_TmpSignalConversionAtVePMIR >= KeVLDR_n_HTAuxPmp_MinFlowCls) ||
         (KeVLDR_b_HTAuxPmp_MinFlow_OpnEn))) && (((uint32)
        rtb_TmpSignalConversionAtVePMTR) != CePMTR_e_DISBL_All_Thrml)) &&
        ((!VLDR_ac_DW.UnitDelay1_DSTATE_g) || (KeVLDR_b_StkCls_FltDtct_OV))) &&
        rtb_Logical6_j) && ((tmpRead_6 >= KeVLDR_W_HVC_HtrPwrLimit_Min) ||
                            (KeVLDR_b_HVC_HtrPwrLimit_Chk_En))) &&
        (VeVLDR_b_EngRunning_Chk)) && rtb_Logical44) &&
        rtb_TmpSignalConversionAtVeDFIR);

    /* Outputs for Atomic SubSystem: '<S900>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S927>/EdgeRising' */
    /* Logic: '<S901>/Logical3' incorporates:
     *  UnitDelay: '<S931>/Unit Delay'
     */
    rtb_AND_bb = VLDR_ac_DW.UnitDelay_DSTATE_fy1;

    /* Update for UnitDelay: '<S931>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_fy1 = VeVLDR_b_HTSoV_StkOpn_Diag_En_BD;

    /* Switch: '<S927>/Switch1' incorporates:
     *  Logic: '<S927>/OR'
     *  Logic: '<S927>/OR1'
     *  Logic: '<S931>/AND'
     *  Logic: '<S931>/OR1'
     */
    if ((!VeVLDR_b_HTSoV_StkOpn_Diag_En_BD) ||
            ((VeVLDR_b_HTSoV_StkOpn_Diag_En_BD) && (!rtb_AND_bb)))
    {
        /* Switch: '<S927>/Switch1' incorporates:
         *  Constant: '<S927>/Constant Value1'
         */
        rtb_TmpSignalConversionAtVePMIR = 0.0F;
    }
    else
    {
        /* Switch: '<S927>/Switch1' incorporates:
         *  Constant: '<S924>/KeVLDR_t_StkOpn_Diag'
         *  Constant: '<S925>/KeVLDR_t_StkOpn_Diag_Deb'
         *  MinMax: '<S927>/Minimum'
         *  Sum: '<S927>/Summation'
         *  UnitDelay: '<S927>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVePMIR = fminf(KeVLDR_t_StkOpn_Diag_Deb,
            KeVLDR_t_StkOpn_Diag + VLDR_ac_DW.UnitDelay_DSTATE_f5);
    }

    /* End of Switch: '<S927>/Switch1' */
    /* End of Outputs for SubSystem: '<S927>/EdgeRising' */

    /* Logic: '<S927>/AND' incorporates:
     *  Constant: '<S925>/KeVLDR_t_StkOpn_Diag_Deb'
     *  RelationalOperator: '<S927>/Greater  Than'
     */
    VeVLDR_b_HTSoV_StkOpn_Diag_En = ((VeVLDR_b_HTSoV_StkOpn_Diag_En_BD) &&
        (rtb_TmpSignalConversionAtVePMIR >= KeVLDR_t_StkOpn_Diag_Deb));

    /* Update for UnitDelay: '<S927>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_f5 = rtb_TmpSignalConversionAtVePMIR;

    /* End of Outputs for SubSystem: '<S900>/Turn On Delay Time' */

    /* VariantMerge generated from: '<S836>/HTSoV_StkOpn_XYEnbl' incorporates:
     *  Constant: '<S954>/KeVLDR_b_HTSoV_StkOpn_XYEnbl'
     *  Logic: '<S902>/AND1'
     */
    VLDR_ac_B.VariantMergeForOutportHTSoV_S_b = ((VeVLDR_b_HTSoV_StkOpn_Diag_En)
        && (KeVLDR_b_HTSoV_StkOpn_XYEnbl));

    /* RelationalOperator: '<S955>/Relational Operator3' incorporates:
     *  Constant: '<S955>/Constant3'
     *  DataStoreRead: '<S902>/Data Store Read2'
     *  S-Function (sfix_bitop): '<S955>/Bitwise Operator2'
     */
    rtb_AND_or = ((((uint32)VLDR_ac_DW.StatusByte_CoolantVlvB_StkOpn) & 64U) ==
                  0U);

    /* Outputs for Atomic SubSystem: '<S955>/EdgeFalling1' */
    /* Logic: '<S955>/Logical Operator' incorporates:
     *  Logic: '<S957>/OR1'
     */
    rtb_Logical41_a = !rtb_AND_or;

    /* End of Outputs for SubSystem: '<S955>/EdgeFalling1' */

    /* Logic: '<S955>/Logical1' incorporates:
     *  Constant: '<S952>/Calib'
     *  Constant: '<S955>/Constant1'
     *  DataStoreRead: '<S902>/Data Store Read2'
     *  Logic: '<S955>/Logical Operator'
     *  Logic: '<S955>/Logical10'
     *  Logic: '<S955>/Logical12'
     *  RelationalOperator: '<S955>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S955>/Bitwise Operator3'
     */
    rtb_Logical6_j = ((VLDR_ac_B.VariantMergeForOutportHTSoV_S_b) &&
                      ((!KeVLDR_b_CoolantVlvB_StkOpn_LtchEnbl) || (((((uint32)
                           VLDR_ac_DW.StatusByte_CoolantVlvB_StkOpn) & 1U) == 0U)
                        || rtb_Logical41_a)));

    /* Switch: '<S901>/Switch' incorporates:
     *  UnitDelay: '<S941>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVePMIR = VLDR_ac_DW.UnitDelay_DSTATE_o1;

    /* Sum: '<S941>/Summation' incorporates:
     *  Constant: '<S936>/KeVLDR_k_ECT_Fltr_Coeff'
     *  Product: '<S941>/Multiplication'
     *  Sum: '<S941>/Subtraction'
     */
    VeVLDR_T_EngCoolantTemp_Fltr = ((VeVLDR_T_EngCoolantTemp_AD -
        rtb_TmpSignalConversionAtVePMIR) * KeVLDR_k_ECT_Fltr_Coeff) +
        rtb_TmpSignalConversionAtVePMIR;

    /* Switch: '<S901>/Switch' incorporates:
     *  Constant: '<S935>/KeVLDR_b_EngCoolantTemp_Fltr_Sel'
     */
    if (KeVLDR_b_EngCoolantTemp_Fltr_Sel)
    {
        /* Switch: '<S901>/Switch' */
        rtb_TmpSignalConversionAtVePMIR = VeVLDR_T_EngCoolantTemp_Fltr;
    }
    else
    {
        /* Switch: '<S901>/Switch' */
        rtb_TmpSignalConversionAtVePMIR = VeVLDR_T_EngCoolantTemp_AD;
    }

    /* End of Switch: '<S901>/Switch' */

    /* Outputs for Atomic SubSystem: '<S901>/EdgeRising1' */
    /* Logic: '<S932>/OR1' incorporates:
     *  UnitDelay: '<S932>/Unit Delay'
     */
    rtb_AND_bb = !VLDR_ac_DW.UnitDelay_DSTATE_iyu;

    /* Update for UnitDelay: '<S932>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_iyu = VeVLDR_b_HTSoV_StkOpn_Diag_En_BD;

    /* End of Outputs for SubSystem: '<S901>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S901>/EdgeRising2' */
    /* Logic: '<S933>/OR1' incorporates:
     *  UnitDelay: '<S933>/Unit Delay'
     */
    rtb_OR1_e4 = !VLDR_ac_DW.UnitDelay_DSTATE_bcl;

    /* Update for UnitDelay: '<S933>/Unit Delay' incorporates:
     *  UnitDelay: '<S901>/Unit Delay3'
     */
    VLDR_ac_DW.UnitDelay_DSTATE_bcl = VLDR_ac_DW.UnitDelay3_DSTATE_i;

    /* Outputs for Atomic SubSystem: '<S901>/EdgeRising1' */
    /* Logic: '<S901>/Logical9' incorporates:
     *  Logic: '<S932>/AND'
     *  Logic: '<S933>/AND'
     *  UnitDelay: '<S901>/Unit Delay3'
     */
    VeVLDR_b_Reset_Latch_App2 = (((VeVLDR_b_HTSoV_StkOpn_Diag_En_BD) &&
        rtb_AND_bb) || ((VLDR_ac_DW.UnitDelay3_DSTATE_i) && rtb_OR1_e4));

    /* End of Outputs for SubSystem: '<S901>/EdgeRising1' */
    /* End of Outputs for SubSystem: '<S901>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S942>/Signal Latch On With Reset' */
    /* Logic: '<S901>/Logical1' incorporates:
     *  Logic: '<S946>/NOT'
     */
    rtb_TmpSignalConversionAtVeR_go = !VeVLDR_b_Reset_Latch_App2;

    /* Logic: '<S946>/OR1' incorporates:
     *  Logic: '<S901>/Logical1'
     *  Logic: '<S901>/Logical2'
     *  Logic: '<S946>/OR'
     *  UnitDelay: '<S946>/Unit Delay'
     */
    rtb_AND_bb = (((VeVLDR_b_HTSoV_StkOpn_Diag_En_BD) &&
                   rtb_TmpSignalConversionAtVeR_go) ||
                  (rtb_TmpSignalConversionAtVeR_go &&
                   (VLDR_ac_DW.UnitDelay_DSTATE_d0u)));

    /* Update for UnitDelay: '<S946>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_d0u = rtb_AND_bb;

    /* End of Outputs for SubSystem: '<S942>/Signal Latch On With Reset' */

    /* Switch: '<S942>/Switch1' */
    if (rtb_AND_bb)
    {
        /* Switch: '<S942>/Switch1' incorporates:
         *  UnitDelay: '<S942>/Unit Delay1'
         */
        VeVLDR_T_EngCoolantTemp_Latched = VLDR_ac_DW.UnitDelay1_DSTATE_m;
    }
    else
    {
        /* Switch: '<S942>/Switch1' */
        VeVLDR_T_EngCoolantTemp_Latched = rtb_TmpSignalConversionAtVePMIR;
    }

    /* End of Switch: '<S942>/Switch1' */

    /* RelationalOperator: '<S901>/Comparison4' incorporates:
     *  Constant: '<S934>/KeVLDR_T_ECT_Diff'
     *  Sum: '<S901>/Sum2'
     */
    rtb_OR1_e4 = ((rtb_TmpSignalConversionAtVePMIR -
                   VeVLDR_T_EngCoolantTemp_Latched) > KeVLDR_T_ECT_Diff);

    /* Outputs for Atomic SubSystem: '<S901>/Turn On Delay Time1' */
    /* Outputs for Atomic SubSystem: '<S945>/EdgeRising' */
    /* Logic: '<S949>/AND' incorporates:
     *  Logic: '<S949>/OR1'
     *  UnitDelay: '<S949>/Unit Delay'
     */
    rtb_AND_bb = (rtb_OR1_e4 && (!VLDR_ac_DW.UnitDelay_DSTATE_jw));

    /* Update for UnitDelay: '<S949>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_jw = rtb_OR1_e4;

    /* End of Outputs for SubSystem: '<S945>/EdgeRising' */

    /* Switch: '<S945>/Switch1' incorporates:
     *  Logic: '<S945>/OR'
     *  Logic: '<S945>/OR1'
     */
    if ((!rtb_OR1_e4) || rtb_AND_bb)
    {
        /* Switch: '<S945>/Switch1' incorporates:
         *  Constant: '<S945>/Constant Value1'
         */
        rtb_TmpSignalConversionAtVePMIR = 0.0F;
    }
    else
    {
        /* Switch: '<S945>/Switch1' incorporates:
         *  Constant: '<S937>/KeVLDR_t_StkOpnFailSym_App2Deb'
         *  Constant: '<S939>/KeVLDR_t_StkOpnFailSym_dt'
         *  MinMax: '<S945>/Minimum'
         *  Sum: '<S945>/Summation'
         *  UnitDelay: '<S945>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVePMIR = fminf(KeVLDR_t_StkOpnFailSym_App2Deb,
            KeVLDR_t_StkOpnFailSym_dt + VLDR_ac_DW.UnitDelay_DSTATE_kh);
    }

    /* End of Switch: '<S945>/Switch1' */

    /* Update for UnitDelay: '<S945>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_kh = rtb_TmpSignalConversionAtVePMIR;

    /* End of Outputs for SubSystem: '<S901>/Turn On Delay Time1' */

    /* Outputs for Atomic SubSystem: '<S901>/Timer Retrigger Reset Trigger Enabled1' */
    /* Outputs for Atomic SubSystem: '<S943>/EdgeRising' */
    /* Logic: '<S947>/OR1' incorporates:
     *  UnitDelay: '<S947>/Unit Delay'
     */
    rtb_AND_bb = !VLDR_ac_DW.UnitDelay_DSTATE_pn;

    /* Update for UnitDelay: '<S947>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_pn = VeVLDR_b_Reset_Latch_App2;

    /* Switch: '<S943>/Switch1' incorporates:
     *  Logic: '<S947>/AND'
     *  Switch: '<S943>/Switch2'
     */
    if ((VeVLDR_b_Reset_Latch_App2) && rtb_AND_bb)
    {
        /* Switch: '<S943>/Switch1' incorporates:
         *  Constant: '<S940>/KeVLDR_t_StkOpn_Diff_Delay2'
         */
        rtb_Switch1_lv = KeVLDR_t_StkOpn_Diff_Delay2;
    }
    else if (VeVLDR_b_HTSoV_StkOpn_Diag_En_BD)
    {
        /* Switch: '<S943>/Switch2' incorporates:
         *  Constant: '<S939>/KeVLDR_t_StkOpnFailSym_dt'
         *  Constant: '<S943>/Constant Value4'
         *  MinMax: '<S943>/Maximum'
         *  Sum: '<S943>/Subtraction'
         *  Switch: '<S943>/Switch1'
         *  UnitDelay: '<S943>/Unit Delay'
         */
        rtb_Switch1_lv = fmaxf(VLDR_ac_DW.UnitDelay_DSTATE_dh -
                               KeVLDR_t_StkOpnFailSym_dt, 0.0F);
    }
    else
    {
        /* Switch: '<S943>/Switch1' incorporates:
         *  Switch: '<S943>/Switch2'
         *  UnitDelay: '<S943>/Unit Delay'
         */
        rtb_Switch1_lv = VLDR_ac_DW.UnitDelay_DSTATE_dh;
    }

    /* End of Switch: '<S943>/Switch1' */
    /* End of Outputs for SubSystem: '<S943>/EdgeRising' */

    /* Update for UnitDelay: '<S943>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_dh = rtb_Switch1_lv;

    /* Logic: '<S901>/Logical3' incorporates:
     *  Constant: '<S943>/Constant Value2'
     *  RelationalOperator: '<S943>/Greater  Than1'
     */
    rtb_AND_bb = (rtb_Switch1_lv <= 0.0F);

    /* End of Outputs for SubSystem: '<S901>/Timer Retrigger Reset Trigger Enabled1' */

    /* Outputs for Atomic SubSystem: '<S901>/Turn On Delay Time1' */
    /* Logic: '<S901>/Logical7' incorporates:
     *  Constant: '<S937>/KeVLDR_t_StkOpnFailSym_App2Deb'
     *  Logic: '<S945>/AND'
     *  RelationalOperator: '<S945>/Greater  Than'
     */
    rtb_OR1_e4 = ((rtb_OR1_e4 && (rtb_TmpSignalConversionAtVePMIR >=
                    KeVLDR_t_StkOpnFailSym_App2Deb)) && rtb_AND_bb);

    /* End of Outputs for SubSystem: '<S901>/Turn On Delay Time1' */

    /* Outputs for Atomic SubSystem: '<S901>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S944>/EdgeRising' */
    /* Logic: '<S948>/AND' incorporates:
     *  Logic: '<S948>/OR1'
     *  UnitDelay: '<S948>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeT_cs = (rtb_OR1_e4 &&
        (!VLDR_ac_DW.UnitDelay_DSTATE_lu));

    /* Update for UnitDelay: '<S948>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_lu = rtb_OR1_e4;

    /* End of Outputs for SubSystem: '<S944>/EdgeRising' */

    /* Logic: '<S944>/OR1' incorporates:
     *  Logic: '<S901>/Logical10'
     */
    rtb_Logical44 = !rtb_OR1_e4;

    /* Switch: '<S944>/Switch1' incorporates:
     *  Logic: '<S944>/OR'
     *  Logic: '<S944>/OR1'
     */
    if (rtb_Logical44 || rtb_TmpSignalConversionAtVeT_cs)
    {
        /* Switch: '<S944>/Switch1' incorporates:
         *  Constant: '<S944>/Constant Value1'
         */
        rtb_TmpSignalConversionAtVePMIR = 0.0F;
    }
    else
    {
        /* Switch: '<S944>/Switch1' incorporates:
         *  Constant: '<S938>/KeVLDR_t_StkOpnFailSym_Deb_Time'
         *  Constant: '<S939>/KeVLDR_t_StkOpnFailSym_dt'
         *  MinMax: '<S944>/Minimum'
         *  Sum: '<S944>/Summation'
         *  UnitDelay: '<S944>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVePMIR = fminf(KeVLDR_t_StkOpnFailSym_Deb_Time,
            KeVLDR_t_StkOpnFailSym_dt + VLDR_ac_DW.UnitDelay_DSTATE_mx);
    }

    /* End of Switch: '<S944>/Switch1' */

    /* Logic: '<S944>/AND' incorporates:
     *  Constant: '<S938>/KeVLDR_t_StkOpnFailSym_Deb_Time'
     *  RelationalOperator: '<S944>/Greater  Than'
     */
    VeVLDR_b_HTSoV_StkOpn_Diag_FailSym = (rtb_OR1_e4 &&
        (rtb_TmpSignalConversionAtVePMIR >= KeVLDR_t_StkOpnFailSym_Deb_Time));

    /* Update for UnitDelay: '<S944>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_mx = rtb_TmpSignalConversionAtVePMIR;

    /* End of Outputs for SubSystem: '<S901>/Turn On Delay Time' */

    /* Logic: '<S902>/AND2' incorporates:
     *  Constant: '<S953>/KeVLDR_b_HTSoV_StkOpn_Flt'
     */
    VeVLDR_b_HTSoV_StkOpn_Flt = ((VeVLDR_b_HTSoV_StkOpn_Diag_FailSym) &&
        (KeVLDR_b_HTSoV_StkOpn_Flt));

    /* Outputs for Atomic SubSystem: '<S955>/EdgeFalling1' */
    /* Logic: '<S957>/AND' incorporates:
     *  UnitDelay: '<S957>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeT_cs = (rtb_Logical41_a &&
        (VLDR_ac_DW.UnitDelay_DSTATE_azi));

    /* Update for UnitDelay: '<S957>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_azi = rtb_AND_or;

    /* End of Outputs for SubSystem: '<S955>/EdgeFalling1' */

    /* Logic: '<S955>/Logical5' */
    rtb_AND_or = (rtb_TmpSignalConversionAtVeT_nu ||
                  rtb_TmpSignalConversionAtVeT_cs);

    /* Logic: '<S956>/Fail Counter Reset' incorporates:
     *  UnitDelay: '<S956>/Unit Delay'
     *  UnitDelay: '<S956>/Unit Delay1'
     */
    rtb_TmpSignalConversionAtVeT_nu = ((rtb_AND_or ||
        (VLDR_ac_DW.UnitDelay_DSTATE_gc)) || (VLDR_ac_DW.UnitDelay1_DSTATE_a0));

    /* Outputs for Atomic SubSystem: '<S956>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S956>/Counter Reset  Enabled ' */
    /* Switch: '<S963>/Switch1' incorporates:
     *  Logic: '<S956>/NOT6'
     *  Switch: '<S963>/Switch2'
     *  Switch: '<S964>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeT_nu)
    {
        /* Switch: '<S963>/Switch1' incorporates:
         *  Constant: '<S963>/Constant Value2'
         */
        VeVLDR_Cnt_HTSoV_StkOpn_FailCnt = 0U;

        /* Switch: '<S964>/Switch1' incorporates:
         *  Constant: '<S964>/Constant Value2'
         */
        VeVLDR_Cnt_HTSoV_StkOpn_SmpCnt = 0U;
    }
    else
    {
        if (rtb_Logical6_j && (VeVLDR_b_HTSoV_StkOpn_Flt))
        {
            /* Switch: '<S963>/Switch2' incorporates:
             *  Constant: '<S963>/Constant Value1'
             *  Sum: '<S963>/Subtraction'
             *  Switch: '<S963>/Switch1'
             *  UnitDelay: '<S963>/Unit Delay'
             */
            VeVLDR_Cnt_HTSoV_StkOpn_FailCnt = (uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_f4) + 1U);
        }
        else
        {
            /* Switch: '<S963>/Switch1' incorporates:
             *  Switch: '<S963>/Switch2'
             *  UnitDelay: '<S963>/Unit Delay'
             */
            VeVLDR_Cnt_HTSoV_StkOpn_FailCnt = VLDR_ac_DW.UnitDelay_DSTATE_f4;
        }

        /* Switch: '<S964>/Switch2' */
        if (rtb_Logical6_j)
        {
            /* Switch: '<S964>/Switch1' incorporates:
             *  Constant: '<S964>/Constant Value1'
             *  Sum: '<S964>/Subtraction'
             *  Switch: '<S964>/Switch2'
             *  UnitDelay: '<S964>/Unit Delay'
             */
            VeVLDR_Cnt_HTSoV_StkOpn_SmpCnt = (uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_n5l) + 1U);
        }
        else
        {
            /* Switch: '<S964>/Switch1' incorporates:
             *  Switch: '<S964>/Switch2'
             *  UnitDelay: '<S964>/Unit Delay'
             */
            VeVLDR_Cnt_HTSoV_StkOpn_SmpCnt = VLDR_ac_DW.UnitDelay_DSTATE_n5l;
        }

        /* End of Switch: '<S964>/Switch2' */
    }

    /* End of Switch: '<S963>/Switch1' */
    /* End of Outputs for SubSystem: '<S956>/Counter Reset  Enabled 1' */

    /* Update for UnitDelay: '<S963>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_f4 = VeVLDR_Cnt_HTSoV_StkOpn_FailCnt;

    /* End of Outputs for SubSystem: '<S956>/Counter Reset  Enabled ' */

    /* Outputs for Atomic SubSystem: '<S956>/Counter Reset  Enabled 1' */
    /* Update for UnitDelay: '<S964>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_n5l = VeVLDR_Cnt_HTSoV_StkOpn_SmpCnt;

    /* End of Outputs for SubSystem: '<S956>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S956>/Greater Than or Equal ' incorporates:
     *  Constant: '<S950>/KeVLDR_Cnt_HTSoV_StkOpn_FailCnt'
     */
    rtb_Logical6_j = (VeVLDR_Cnt_HTSoV_StkOpn_FailCnt >=
                      KeVLDR_Cnt_HTSoV_StkOpn_FailCnt);

    /* Logic: '<S956>/NOT5' incorporates:
     *  Constant: '<S951>/KeVLDR_Cnt_HTSoV_StkOpn_SmpCnt'
     *  Logic: '<S956>/NOT3'
     *  RelationalOperator: '<S956>/Less Than  or Equal'
     */
    rtb_TmpSignalConversionAtVeT_nu = ((VeVLDR_Cnt_HTSoV_StkOpn_SmpCnt >=
        KeVLDR_Cnt_HTSoV_StkOpn_SmpCnt) && (!rtb_Logical6_j));

    /* Switch: '<S969>/Switch1' incorporates:
     *  Constant: '<S962>/Constant Value'
     *  DataStoreWrite: '<S902>/Data Store Write3'
     *  Switch: '<S968>/Switch1'
     */
    if (rtb_VM_Conditional_Signal_PostC)
    {
        VLDR_ac_DW.NeVLDR_Cnt_HTSoV_StkOpn_MFOP = 0U;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeT_nu)
        {
            /* MinMax: '<S962>/Minimum2' incorporates:
             *  DataStoreRead: '<S902>/Data Store Read1'
             *  Switch: '<S968>/Switch1'
             */
            if (VeVLDR_Cnt_HTSoV_StkOpn_FailCnt >
                    VLDR_ac_DW.NeVLDR_Cnt_HTSoV_StkOpn_MFOP)
            {
                /* DataStoreWrite: '<S902>/Data Store Write3' incorporates:
                 *  Switch: '<S968>/Switch1'
                 */
                VLDR_ac_DW.NeVLDR_Cnt_HTSoV_StkOpn_MFOP =
                    VeVLDR_Cnt_HTSoV_StkOpn_FailCnt;
            }

            /* End of MinMax: '<S962>/Minimum2' */
        }
    }

    /* End of Switch: '<S969>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S955>/Fail' */
    VLDR_ac_Fail(rtb_Logical6_j, &VLDR_ac_B.VariantMergeForOutportVeVLDR__h);

    /* End of Outputs for SubSystem: '<S955>/Fail' */

    /* Outputs for Enabled SubSystem: '<S955>/Init' */
    VLDR_ac_Init_a(rtb_AND_or, &VLDR_ac_B.VariantMergeForOutportVeVLDR__h);

    /* End of Outputs for SubSystem: '<S955>/Init' */

    /* Outputs for Enabled SubSystem: '<S955>/Pass' */
    VLDR_ac_Pass(rtb_TmpSignalConversionAtVeT_nu,
                 &VLDR_ac_B.VariantMergeForOutportVeVLDR__h);

    /* End of Outputs for SubSystem: '<S955>/Pass' */

    /* VariantMerge generated from: '<S836>/HTSoV_StkOpn_FltDtct' incorporates:
     *  Constant: '<S958>/Constant'
     *  RelationalOperator: '<S955>/Relational Operator'
     *  VariantMerge generated from: '<S836>/VeVLDR_e_FaultSts_CoolantVlvB_StkOpn'
     */
    VLDR_ac_B.VariantMergeForOutportHTSoV_S_h = (((uint32)
        VLDR_ac_B.VariantMergeForOutportVeVLDR__h) == CeDFIB_e_Fail);

    /* Logic: '<S901>/Logical8' */
    rtb_AND_bb = (rtb_Logical44 && rtb_AND_bb);

    /* Update for UnitDelay: '<S838>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_bc = VLDR_ac_B.VariantMergeForOutportHTSoV_S_h;

    /* Update for UnitDelay: '<S886>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_eg = rtb_TmpSignalConversionAtVeTMIR;

    /* Update for UnitDelay: '<S886>/Unit Delay1' */
    VLDR_ac_DW.UnitDelay1_DSTATE_bi = rtb_TmpSignalConversionAtVeTHDR;

    /* Update for UnitDelay: '<S838>/Unit Delay1' */
    VLDR_ac_DW.UnitDelay1_DSTATE_g = VLDR_ac_B.VariantMergeForOutportHTSoV_Stk;

    /* Update for UnitDelay: '<S941>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_o1 = VeVLDR_T_EngCoolantTemp_Fltr;

    /* Update for UnitDelay: '<S942>/Unit Delay1' */
    VLDR_ac_DW.UnitDelay1_DSTATE_m = VeVLDR_T_EngCoolantTemp_Latched;

    /* Update for UnitDelay: '<S901>/Unit Delay3' */
    VLDR_ac_DW.UnitDelay3_DSTATE_i = rtb_AND_bb;

    /* Update for UnitDelay: '<S956>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_gc = rtb_TmpSignalConversionAtVeT_nu;

    /* Update for UnitDelay: '<S956>/Unit Delay1' */
    VLDR_ac_DW.UnitDelay1_DSTATE_a0 = rtb_Logical6_j;

    /* End of Outputs for SubSystem: '<S836>/HTSoV_Diag_Enable' */
#else

    /* Outputs for Atomic SubSystem: '<S836>/HTSoV_Default_Diag' */
    /* VariantMerge generated from: '<S836>/HTSoV_StkCls_XYEnbl' incorporates:
     *  Constant: '<S837>/FALSE Constant'
     */
    VLDR_ac_B.VariantMergeForOutportHTSoV_S_d = false;

    /* VariantMerge generated from: '<S836>/HTSoV_StkOpn_XYEnbl' incorporates:
     *  Constant: '<S837>/FALSE Constant1'
     */
    VLDR_ac_B.VariantMergeForOutportHTSoV_S_b = false;

    /* VariantMerge generated from: '<S836>/HTSoV_StkCls_FltDtct' incorporates:
     *  Constant: '<S837>/FALSE Constant2'
     */
    VLDR_ac_B.VariantMergeForOutportHTSoV_Stk = false;

    /* VariantMerge generated from: '<S836>/HTSoV_StkOpn_FltDtct' incorporates:
     *  Constant: '<S837>/FALSE Constant3'
     */
    VLDR_ac_B.VariantMergeForOutportHTSoV_S_h = false;

    /* VariantMerge generated from: '<S836>/VeVLDR_e_FaultSts_CoolantVlvB_StkOpn' incorporates:
     *  Constant: '<S839>/Constant'
     */
    VLDR_ac_B.VariantMergeForOutportVeVLDR__h = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S836>/VeVLDR_e_FaultSts_CoolantVlvB_StkClsd' incorporates:
     *  Constant: '<S840>/Constant'
     */
    VLDR_ac_B.VariantMergeForOutportVeVLDR__o = CeDFIB_e_Init;

    /* End of Outputs for SubSystem: '<S836>/HTSoV_Default_Diag' */
#endif

    /* End of Outputs for SubSystem: '<S15>/HTSoV_Diag' */

    /* Logic: '<S980>/Logical1' incorporates:
     *  Logic: '<S978>/Logical2'
     *  Logic: '<S981>/Logical1'
     *  Logic: '<S981>/Logical2'
     *  Logic: '<S981>/Logical3'
     *  Logic: '<S982>/Logical1'
     *  RelationalOperator: '<S982>/Comparison1'
     *  RelationalOperator: '<S982>/Comparison3'
     */
#if Rte_SysCon_Variant_VLDR_1

    VLDR_ac_B.VariantMerge_For_Variant_Source[0] =
        !rtb_VariantMergeForOutportDFI_o;
    VLDR_ac_B.VariantMerge_For_Variant_Source[1] = ((!rtb_Comparison4_i) ||
        (!rtb_Logical12_f3));

    /* Logic: '<S982>/Logical1' incorporates:
     *  Constant: '<S987>/KeVLDR_Pct_EXV_Max_PosRq'
     *  Constant: '<S988>/KeVLDR_Pct_EXV_Min_PosRq'
     */
    rtb_Logical1_pzo = ((rtb_TmpSignalConversionAtVeR_co <
                         KeVLDR_Pct_EXV_Max_PosRq) &&
                        (rtb_TmpSignalConversionAtVeR_co >
                         KeVLDR_Pct_EXV_Min_PosRq));

    /* Logic: '<S978>/Logical2' */
    rtb_Logical2_fw = !rtb_Logical1_pzo;

#endif

    /* End of Logic: '<S980>/Logical1' */

    /* SignalConversion generated from: '<S4>/PSA_AD' */
#if (Rte_SysCon_Variant_VLDR_1 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_2 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_3 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_4 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_5 && Rte_SysCon_Variant_VLDR_7) || (Rte_SysCon_Variant_VLDR_6 && Rte_SysCon_Variant_VLDR_7)

    /* UnitDelay: '<S1168>/Unit Delay' */
    rtb_UnitDelay_id = VLDR_ac_B.Switch6;

#elif !Rte_SysCon_Variant_VLDR_7 || (!Rte_SysCon_Variant_VLDR_1 && !Rte_SysCon_Variant_VLDR_2 && !Rte_SysCon_Variant_VLDR_3 && !Rte_SysCon_Variant_VLDR_4 && !Rte_SysCon_Variant_VLDR_5 && !Rte_SysCon_Variant_VLDR_6)

    /* UnitDelay: '<S1168>/Unit Delay' incorporates:
     *  SignalConversion generated from: '<S4>/PSA_AD'
     */
    rtb_UnitDelay_id = false;

#endif

    /* End of SignalConversion generated from: '<S4>/PSA_AD' */

    /* Logic: '<S978>/Logical1' incorporates:
     *  Logic: '<S978>/Logical3'
     *  Logic: '<S979>/Logical1'
     *  Logic: '<S979>/Logical2'
     *  Logic: '<S979>/Logical3'
     *  Logic: '<S983>/Logical4'
     *  Logic: '<S994>/Logical4'
     *  RelationalOperator: '<S983>/Comparison1'
     *  RelationalOperator: '<S983>/Comparison2'
     *  RelationalOperator: '<S983>/Comparison4'
     *  RelationalOperator: '<S993>/Comparison4'
     *  RelationalOperator: '<S994>/Comparison1'
     *  RelationalOperator: '<S994>/Comparison2'
     *  RelationalOperator: '<S994>/Comparison4'
     *  SignalConversion generated from: '<S970>/Variant Source'
     *  Switch: '<S983>/Switch'
     *  Switch: '<S994>/Switch'
     *  UnitDelay: '<S983>/Unit Delay'
     *  UnitDelay: '<S994>/Unit Delay'
     */
#if Rte_SysCon_Variant_VLDR_1

    /* Outputs for Atomic SubSystem: '<S979>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S994>/EdgeRising' */
    /* Outputs for Atomic SubSystem: '<S979>/Stop Watch Reset Enabled1' */
    /* Outputs for Atomic SubSystem: '<S979>/Stop Watch Reset Enabled' */
    /* Outputs for Atomic SubSystem: '<S978>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S983>/EdgeRising' */
    /* Outputs for Atomic SubSystem: '<S978>/Stop Watch Reset Enabled1' */
    /* Outputs for Atomic SubSystem: '<S978>/Stop Watch Reset Enabled' */
    rtb_TmpSignalConversionAtVeR_go = !rtb_UnitDelay_id;

    /* Switch: '<S985>/Switch1' incorporates:
     *  Switch: '<S985>/Switch2'
     */
    if (rtb_Logical2_fw || rtb_TmpSignalConversionAtVeR_go)
    {
        /* Switch: '<S985>/Switch1' incorporates:
         *  Constant: '<S985>/Constant Value2'
         */
        rtb_Switch1_ja = 0.0F;
    }
    else if (rtb_Logical1_pzo)
    {
        /* Switch: '<S985>/Switch2' incorporates:
         *  Constant: '<S978>/Constant Value1'
         *  Sum: '<S985>/Subtraction'
         *  Switch: '<S985>/Switch1'
         *  UnitDelay: '<S985>/Unit Delay'
         */
        rtb_Switch1_ja = VLDR_ac_DW.UnitDelay_DSTATE_ih + 0.025F;
    }
    else
    {
        /* Switch: '<S985>/Switch1' incorporates:
         *  Switch: '<S985>/Switch2'
         *  UnitDelay: '<S985>/Unit Delay'
         */
        rtb_Switch1_ja = VLDR_ac_DW.UnitDelay_DSTATE_ih;
    }

    /* End of Switch: '<S985>/Switch1' */

    /* Update for UnitDelay: '<S985>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_ih = rtb_Switch1_ja;

    /* RelationalOperator: '<S983>/Comparison1' incorporates:
     *  Constant: '<S991>/KeVLDR_t_IUMPR_EXVperf_MinConsecTime_CmdOn'
     */
    rtb_Logical2_fw = (rtb_Switch1_ja >
                       KeVLDR_t_IUMPR_EXVperf_MinConsecTime_CmdOn);

    /* Switch: '<S986>/Switch1' incorporates:
     *  Switch: '<S986>/Switch2'
     */
    if (rtb_TmpSignalConversionAtVeR_go)
    {
        /* Switch: '<S986>/Switch1' incorporates:
         *  Constant: '<S986>/Constant Value2'
         */
        rtb_Switch1_ncz = 0.0F;
    }
    else if (rtb_Logical1_pzo)
    {
        /* Switch: '<S986>/Switch2' incorporates:
         *  Constant: '<S978>/Constant Value2'
         *  Sum: '<S986>/Subtraction'
         *  Switch: '<S986>/Switch1'
         *  UnitDelay: '<S986>/Unit Delay'
         */
        rtb_Switch1_ncz = VLDR_ac_DW.UnitDelay_DSTATE_ae + 0.025F;
    }
    else
    {
        /* Switch: '<S986>/Switch1' incorporates:
         *  Switch: '<S986>/Switch2'
         *  UnitDelay: '<S986>/Unit Delay'
         */
        rtb_Switch1_ncz = VLDR_ac_DW.UnitDelay_DSTATE_ae;
    }

    /* End of Switch: '<S986>/Switch1' */

    /* Update for UnitDelay: '<S986>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_ae = rtb_Switch1_ncz;

    /* Logic: '<S989>/AND' incorporates:
     *  Logic: '<S989>/OR1'
     *  UnitDelay: '<S989>/Unit Delay'
     */
    rtb_Logical1_pzo = (rtb_Logical2_fw && (!VLDR_ac_DW.UnitDelay_DSTATE_fa));

    /* Update for UnitDelay: '<S989>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_fa = rtb_Logical2_fw;
    if (rtb_TmpSignalConversionAtVeR_go)
    {
        /* Switch: '<S983>/Switch' incorporates:
         *  Constant: '<S983>/Constant Value5'
         */
        rtb_Switch1_ja = 0.0F;
    }
    else
    {
        /* Switch: '<S983>/Switch' incorporates:
         *  Sum: '<S983>/Sum'
         *  Switch: '<S983>/Switch1'
         */
        rtb_Switch1_ja = ((float32)(rtb_Logical1_pzo ? 1.0F : 0.0F)) +
            VLDR_ac_DW.UnitDelay_DSTATE;
    }

    /* Logic: '<S984>/OR1' incorporates:
     *  Constant: '<S990>/KeVLDR_Cnt_IUMPR_EXVperf_MinConsecCnt_CmdOn'
     *  Constant: '<S992>/KeVLDR_t_IUMPR_EXVperf_MinCumlTime_CmdOn'
     *  Logic: '<S984>/NOT'
     *  Logic: '<S984>/OR'
     *  UnitDelay: '<S984>/Unit Delay'
     */
    VLDR_ac_B.VariantMerge_For_Variant_Source[2] = (((rtb_Switch1_ncz >=
        KeVLDR_t_IUMPR_EXVperf_MinCumlTime_CmdOn) || (rtb_Switch1_ja >=
        KeVLDR_Cnt_IUMPR_EXVperf_MinConsecCnt_CmdOn)) ||
        ((!rtb_TmpSignalConversionAtVeR_go) && (VLDR_ac_DW.UnitDelay_DSTATE_g2)));

    /* Update for UnitDelay: '<S984>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_g2 = VLDR_ac_B.VariantMerge_For_Variant_Source[2];

    /* RelationalOperator: '<S993>/Comparison4' incorporates:
     *  Constant: '<S998>/Constant'
     *  SignalConversion generated from: '<S1>/VeTHMR_e_BatThrmlSt'
     */
    rtb_VariantMergeForOutportDFI_o = (((uint32)rtb_TmpSignalConversionAtVeTH_j)
        == CeTHMR_e_ActiveCooling);

    /* Switch: '<S996>/Switch1' */
    if ((!rtb_VariantMergeForOutportDFI_o) || rtb_TmpSignalConversionAtVeR_go)
    {
        /* Switch: '<S996>/Switch1' incorporates:
         *  Constant: '<S996>/Constant Value2'
         */
        rtb_Switch1_ncz = 0.0F;
    }
    else
    {
        /* Switch: '<S996>/Switch1' incorporates:
         *  Constant: '<S979>/Constant Value1'
         *  Sum: '<S996>/Subtraction'
         *  Switch: '<S996>/Switch2'
         *  UnitDelay: '<S996>/Unit Delay'
         */
        rtb_Switch1_ncz = VLDR_ac_DW.UnitDelay_DSTATE_kx + 0.025F;
    }

    /* End of Switch: '<S996>/Switch1' */

    /* Update for UnitDelay: '<S996>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_kx = rtb_Switch1_ncz;

    /* RelationalOperator: '<S994>/Comparison1' incorporates:
     *  Constant: '<S1001>/KeVLDR_t_IUMPR_EXV_presSens_MinConsecTime_CmdOn'
     */
    rtb_Logical2_fw = (rtb_Switch1_ncz >
                       KeVLDR_t_IUMPR_EXV_presSens_MinConsecTime_CmdOn);

    /* Switch: '<S997>/Switch1' incorporates:
     *  Switch: '<S997>/Switch2'
     */
    if (rtb_TmpSignalConversionAtVeR_go)
    {
        /* Switch: '<S997>/Switch1' incorporates:
         *  Constant: '<S997>/Constant Value2'
         */
        rtb_TmpSignalConversionAtVeR_co = 0.0F;
    }
    else if (rtb_VariantMergeForOutportDFI_o)
    {
        /* Switch: '<S997>/Switch2' incorporates:
         *  Constant: '<S979>/Constant Value2'
         *  Sum: '<S997>/Subtraction'
         *  Switch: '<S997>/Switch1'
         *  UnitDelay: '<S997>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeR_co = VLDR_ac_DW.UnitDelay_DSTATE_dg +
            0.025F;
    }
    else
    {
        /* Switch: '<S997>/Switch1' incorporates:
         *  Switch: '<S997>/Switch2'
         *  UnitDelay: '<S997>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeR_co = VLDR_ac_DW.UnitDelay_DSTATE_dg;
    }

    /* End of Switch: '<S997>/Switch1' */

    /* Update for UnitDelay: '<S997>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_dg = rtb_TmpSignalConversionAtVeR_co;

    /* Logic: '<S999>/AND' incorporates:
     *  Logic: '<S999>/OR1'
     *  UnitDelay: '<S999>/Unit Delay'
     */
    rtb_VariantMergeForOutportDFI_o = (rtb_Logical2_fw &&
        (!VLDR_ac_DW.UnitDelay_DSTATE_nk));

    /* Update for UnitDelay: '<S999>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_nk = rtb_Logical2_fw;
    if (rtb_TmpSignalConversionAtVeR_go)
    {
        /* Switch: '<S994>/Switch' incorporates:
         *  Constant: '<S994>/Constant Value5'
         */
        rtb_Switch1_ncz = 0.0F;
    }
    else
    {
        /* Switch: '<S994>/Switch' incorporates:
         *  Sum: '<S994>/Sum'
         *  Switch: '<S994>/Switch1'
         */
        rtb_Switch1_ncz = ((float32)(rtb_VariantMergeForOutportDFI_o ? 1.0F :
                            0.0F)) + VLDR_ac_DW.UnitDelay_DSTATE_f;
    }

    /* Logic: '<S995>/OR1' incorporates:
     *  Constant: '<S1000>/KeVLDR_Cnt_IUMPR_EXV_presSens_MinConsecCnt_CmdOn'
     *  Constant: '<S1002>/KeVLDR_t_IUMPR_EXV_presSens_MinCumlTime_CmdOn'
     *  Logic: '<S995>/NOT'
     *  Logic: '<S995>/OR'
     *  UnitDelay: '<S995>/Unit Delay'
     */
    VLDR_ac_B.VariantMerge_For_Variant_Source[3] =
        (((rtb_TmpSignalConversionAtVeR_co >=
           KeVLDR_t_IUMPR_EXV_presSens_MinCumlTime_CmdOn) || (rtb_Switch1_ncz >=
           KeVLDR_Cnt_IUMPR_EXV_presSens_MinConsecCnt_CmdOn)) ||
         ((!rtb_TmpSignalConversionAtVeR_go) && (VLDR_ac_DW.UnitDelay_DSTATE_f4g)));

    /* Update for UnitDelay: '<S995>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_f4g = VLDR_ac_B.VariantMerge_For_Variant_Source
        [3];

    /* End of Outputs for SubSystem: '<S979>/Stop Watch Reset Enabled' */
    /* End of Outputs for SubSystem: '<S979>/Stop Watch Reset Enabled1' */
    /* End of Outputs for SubSystem: '<S994>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S979>/Signal Latch On With Reset' */
#else

    /* VariantMerge generated from: '<S970>/Variant Source' incorporates:
     *  Constant: '<S977>/FALSE Constant'
     *  SignalConversion generated from: '<S970>/Variant Source'
     */
    VLDR_ac_B.VariantMerge_For_Variant_Source[0] = false;
    VLDR_ac_B.VariantMerge_For_Variant_Source[1] = false;
    VLDR_ac_B.VariantMerge_For_Variant_Source[2] = false;
    VLDR_ac_B.VariantMerge_For_Variant_Source[3] = false;

#endif

    /* End of Logic: '<S978>/Logical1' */
    /* End of Outputs for SubSystem: '<S978>/Stop Watch Reset Enabled' */
    /* End of Outputs for SubSystem: '<S978>/Stop Watch Reset Enabled1' */
    /* End of Outputs for SubSystem: '<S983>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S978>/Signal Latch On With Reset' */

    /* Logic: '<S1007>/Logical1' incorporates:
     *  Logic: '<S1005>/Logical1'
     *  Logic: '<S1005>/Logical2'
     *  Logic: '<S1005>/Logical3'
     *  Logic: '<S1006>/Logical1'
     *  Logic: '<S1006>/Logical2'
     *  Logic: '<S1006>/Logical3'
     *  Logic: '<S1008>/Logical1'
     *  Logic: '<S1008>/Logical2'
     *  Logic: '<S1008>/Logical9'
     *  Logic: '<S1009>/Logical1'
     *  Logic: '<S1009>/Logical2'
     *  Logic: '<S1009>/Logical3'
     *  Logic: '<S1010>/Logical1'
     *  Logic: '<S1011>/Logical4'
     *  Logic: '<S1022>/Logical4'
     *  RelationalOperator: '<S1010>/Comparison1'
     *  RelationalOperator: '<S1010>/Comparison3'
     *  RelationalOperator: '<S1011>/Comparison1'
     *  RelationalOperator: '<S1011>/Comparison2'
     *  RelationalOperator: '<S1011>/Comparison4'
     *  RelationalOperator: '<S1021>/Comparison4'
     *  RelationalOperator: '<S1022>/Comparison1'
     *  RelationalOperator: '<S1022>/Comparison2'
     *  RelationalOperator: '<S1022>/Comparison4'
     *  SignalConversion generated from: '<S971>/Variant Source'
     *  Switch: '<S1011>/Switch'
     *  Switch: '<S1022>/Switch'
     *  UnitDelay: '<S1011>/Unit Delay'
     *  UnitDelay: '<S1022>/Unit Delay'
     */
#if Rte_SysCon_Variant_VLDR_4

    /* Outputs for Atomic SubSystem: '<S1006>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S1022>/EdgeRising' */
    /* Outputs for Atomic SubSystem: '<S1006>/Stop Watch Reset Enabled1' */
    /* Outputs for Atomic SubSystem: '<S1006>/Stop Watch Reset Enabled' */
    /* Outputs for Atomic SubSystem: '<S1005>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S1011>/EdgeRising' */
    /* Outputs for Atomic SubSystem: '<S1005>/Stop Watch Reset Enabled1' */
    /* Outputs for Atomic SubSystem: '<S1005>/Stop Watch Reset Enabled' */
    VLDR_ac_B.VariantMerge_For_Variant_Sour_h[0] =
        !rtb_VariantMergeForOutportDF_ko;
    VLDR_ac_B.VariantMerge_For_Variant_Sour_h[1] = ((!rtb_AND_po) ||
        (!rtb_UnitDelay_lwd));
    VLDR_ac_B.VariantMerge_For_Variant_Sour_h[2] = ((!rtb_UnitDelay1_e) ||
        (!rtb_Logical12_c5));

    /* Logic: '<S1010>/Logical1' incorporates:
     *  Constant: '<S1015>/KeVLDR_Pct_EXV_Max_PosRq'
     *  Constant: '<S1016>/KeVLDR_Pct_EXV_Min_PosRq'
     */
    rtb_Logical2_fw = ((rtb_TmpSignalConversionAtVeRC_i <
                        KeVLDR_Pct_EXV_Max_PosRq) &&
                       (rtb_TmpSignalConversionAtVeRC_i >
                        KeVLDR_Pct_EXV_Min_PosRq));

    /* Logic: '<S1005>/Logical1' */
    rtb_VariantMergeForOutportDF_ko = !rtb_UnitDelay_id;

    /* Switch: '<S1013>/Switch1' */
    if ((!rtb_Logical2_fw) || rtb_VariantMergeForOutportDF_ko)
    {
        /* Switch: '<S1013>/Switch1' incorporates:
         *  Constant: '<S1013>/Constant Value2'
         */
        rtb_Switch1_mq = 0.0F;
    }
    else
    {
        /* Switch: '<S1013>/Switch1' incorporates:
         *  Constant: '<S1005>/Constant Value1'
         *  Sum: '<S1013>/Subtraction'
         *  Switch: '<S1013>/Switch2'
         *  UnitDelay: '<S1013>/Unit Delay'
         */
        rtb_Switch1_mq = VLDR_ac_DW.UnitDelay_DSTATE_m + 0.025F;
    }

    /* End of Switch: '<S1013>/Switch1' */

    /* Update for UnitDelay: '<S1013>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_m = rtb_Switch1_mq;

    /* RelationalOperator: '<S1011>/Comparison1' incorporates:
     *  Constant: '<S1019>/KeVLDR_t_IUMPR_EXVperf_MinConsecTime_CmdOn'
     */
    rtb_Logical1_pzo = (rtb_Switch1_mq >
                        KeVLDR_t_IUMPR_EXVperf_MinConsecTime_CmdOn);

    /* Switch: '<S1014>/Switch1' incorporates:
     *  Switch: '<S1014>/Switch2'
     */
    if (rtb_VariantMergeForOutportDF_ko)
    {
        /* Switch: '<S1014>/Switch1' incorporates:
         *  Constant: '<S1014>/Constant Value2'
         */
        rtb_Switch1_fq = 0.0F;
    }
    else if (rtb_Logical2_fw)
    {
        /* Switch: '<S1014>/Switch2' incorporates:
         *  Constant: '<S1005>/Constant Value2'
         *  Sum: '<S1014>/Subtraction'
         *  Switch: '<S1014>/Switch1'
         *  UnitDelay: '<S1014>/Unit Delay'
         */
        rtb_Switch1_fq = VLDR_ac_DW.UnitDelay_DSTATE_at + 0.025F;
    }
    else
    {
        /* Switch: '<S1014>/Switch1' incorporates:
         *  Switch: '<S1014>/Switch2'
         *  UnitDelay: '<S1014>/Unit Delay'
         */
        rtb_Switch1_fq = VLDR_ac_DW.UnitDelay_DSTATE_at;
    }

    /* End of Switch: '<S1014>/Switch1' */

    /* Update for UnitDelay: '<S1014>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_at = rtb_Switch1_fq;

    /* Logic: '<S1017>/AND' incorporates:
     *  Logic: '<S1017>/OR1'
     *  UnitDelay: '<S1017>/Unit Delay'
     */
    rtb_Logical2_fw = (rtb_Logical1_pzo && (!VLDR_ac_DW.UnitDelay_DSTATE_p4g));

    /* Update for UnitDelay: '<S1017>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_p4g = rtb_Logical1_pzo;
    if (rtb_VariantMergeForOutportDF_ko)
    {
        /* Switch: '<S1011>/Switch' incorporates:
         *  Constant: '<S1011>/Constant Value5'
         */
        rtb_Switch1_mq = 0.0F;
    }
    else
    {
        /* Switch: '<S1011>/Switch' incorporates:
         *  Sum: '<S1011>/Sum'
         *  Switch: '<S1011>/Switch1'
         */
        rtb_Switch1_mq = ((float32)(rtb_Logical2_fw ? 1.0F : 0.0F)) +
            VLDR_ac_DW.UnitDelay_DSTATE_e;
    }

    /* Logic: '<S1012>/OR1' incorporates:
     *  Constant: '<S1018>/KeVLDR_Cnt_IUMPR_EXVperf_MinConsecCnt_CmdOn'
     *  Constant: '<S1020>/KeVLDR_t_IUMPR_EXVperf_MinCumlTime_CmdOn'
     *  Logic: '<S1012>/NOT'
     *  Logic: '<S1012>/OR'
     *  UnitDelay: '<S1012>/Unit Delay'
     */
    VLDR_ac_B.VariantMerge_For_Variant_Sour_h[3] = (((rtb_Switch1_fq >=
        KeVLDR_t_IUMPR_EXVperf_MinCumlTime_CmdOn) || (rtb_Switch1_mq >=
        KeVLDR_Cnt_IUMPR_EXVperf_MinConsecCnt_CmdOn)) ||
        ((!rtb_VariantMergeForOutportDF_ko) && (VLDR_ac_DW.UnitDelay_DSTATE_auv)));

    /* Update for UnitDelay: '<S1012>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_auv = VLDR_ac_B.VariantMerge_For_Variant_Sour_h
        [3];

    /* RelationalOperator: '<S1021>/Comparison4' incorporates:
     *  Constant: '<S1026>/Constant'
     *  SignalConversion generated from: '<S1>/VeTHMR_e_BatThrmlSt'
     */
    rtb_Logical2_fw = (((uint32)rtb_TmpSignalConversionAtVeTH_j) ==
                       CeTHMR_e_ActiveCooling);

    /* Logic: '<S1006>/Logical1' */
    rtb_VariantMergeForOutportDF_ko = !rtb_UnitDelay_id;

    /* Switch: '<S1024>/Switch1' */
    if ((!rtb_Logical2_fw) || rtb_VariantMergeForOutportDF_ko)
    {
        /* Switch: '<S1024>/Switch1' incorporates:
         *  Constant: '<S1024>/Constant Value2'
         */
        rtb_Switch1_fq = 0.0F;
    }
    else
    {
        /* Switch: '<S1024>/Switch1' incorporates:
         *  Constant: '<S1006>/Constant Value1'
         *  Sum: '<S1024>/Subtraction'
         *  Switch: '<S1024>/Switch2'
         *  UnitDelay: '<S1024>/Unit Delay'
         */
        rtb_Switch1_fq = VLDR_ac_DW.UnitDelay_DSTATE_ax + 0.025F;
    }

    /* End of Switch: '<S1024>/Switch1' */

    /* Update for UnitDelay: '<S1024>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_ax = rtb_Switch1_fq;

    /* RelationalOperator: '<S1022>/Comparison1' incorporates:
     *  Constant: '<S1029>/KeVLDR_t_IUMPR_EXV_presSens_MinConsecTime_CmdOn'
     */
    rtb_Logical1_pzo = (rtb_Switch1_fq >
                        KeVLDR_t_IUMPR_EXV_presSens_MinConsecTime_CmdOn);

    /* Switch: '<S1025>/Switch1' incorporates:
     *  Switch: '<S1025>/Switch2'
     */
    if (rtb_VariantMergeForOutportDF_ko)
    {
        /* Switch: '<S1025>/Switch1' incorporates:
         *  Constant: '<S1025>/Constant Value2'
         */
        rtb_TmpSignalConversionAtVeRC_i = 0.0F;
    }
    else if (rtb_Logical2_fw)
    {
        /* Switch: '<S1025>/Switch2' incorporates:
         *  Constant: '<S1006>/Constant Value2'
         *  Sum: '<S1025>/Subtraction'
         *  Switch: '<S1025>/Switch1'
         *  UnitDelay: '<S1025>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeRC_i = VLDR_ac_DW.UnitDelay_DSTATE_kf +
            0.025F;
    }
    else
    {
        /* Switch: '<S1025>/Switch1' incorporates:
         *  Switch: '<S1025>/Switch2'
         *  UnitDelay: '<S1025>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeRC_i = VLDR_ac_DW.UnitDelay_DSTATE_kf;
    }

    /* End of Switch: '<S1025>/Switch1' */

    /* Update for UnitDelay: '<S1025>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_kf = rtb_TmpSignalConversionAtVeRC_i;

    /* Logic: '<S1027>/AND' incorporates:
     *  Logic: '<S1027>/OR1'
     *  UnitDelay: '<S1027>/Unit Delay'
     */
    rtb_Logical2_fw = (rtb_Logical1_pzo && (!VLDR_ac_DW.UnitDelay_DSTATE_l2));

    /* Update for UnitDelay: '<S1027>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_l2 = rtb_Logical1_pzo;
    if (rtb_VariantMergeForOutportDF_ko)
    {
        /* Switch: '<S1022>/Switch' incorporates:
         *  Constant: '<S1022>/Constant Value5'
         */
        rtb_Switch1_fq = 0.0F;
    }
    else
    {
        /* Switch: '<S1022>/Switch' incorporates:
         *  Sum: '<S1022>/Sum'
         *  Switch: '<S1022>/Switch1'
         */
        rtb_Switch1_fq = ((float32)(rtb_Logical2_fw ? 1.0F : 0.0F)) +
            VLDR_ac_DW.UnitDelay_DSTATE_l;
    }

    /* Logic: '<S1023>/OR1' incorporates:
     *  Constant: '<S1028>/KeVLDR_Cnt_IUMPR_EXV_presSens_MinConsecCnt_CmdOn'
     *  Constant: '<S1030>/KeVLDR_t_IUMPR_EXV_presSens_MinCumlTime_CmdOn'
     *  Logic: '<S1023>/NOT'
     *  Logic: '<S1023>/OR'
     *  UnitDelay: '<S1023>/Unit Delay'
     */
    VLDR_ac_B.VariantMerge_For_Variant_Sour_h[4] =
        (((rtb_TmpSignalConversionAtVeRC_i >=
           KeVLDR_t_IUMPR_EXV_presSens_MinCumlTime_CmdOn) || (rtb_Switch1_fq >=
           KeVLDR_Cnt_IUMPR_EXV_presSens_MinConsecCnt_CmdOn)) ||
         ((!rtb_VariantMergeForOutportDF_ko) && (VLDR_ac_DW.UnitDelay_DSTATE_dt)));

    /* Update for UnitDelay: '<S1023>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_dt = VLDR_ac_B.VariantMerge_For_Variant_Sour_h[4];

    /* End of Outputs for SubSystem: '<S1006>/Stop Watch Reset Enabled' */
    /* End of Outputs for SubSystem: '<S1006>/Stop Watch Reset Enabled1' */
    /* End of Outputs for SubSystem: '<S1022>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S1006>/Signal Latch On With Reset' */
#else

    /* VariantMerge generated from: '<S971>/Variant Source' incorporates:
     *  Constant: '<S1004>/FALSE Constant'
     *  SignalConversion generated from: '<S971>/Variant Source'
     */
    VLDR_ac_B.VariantMerge_For_Variant_Sour_h[0] = false;
    VLDR_ac_B.VariantMerge_For_Variant_Sour_h[1] = false;
    VLDR_ac_B.VariantMerge_For_Variant_Sour_h[2] = false;
    VLDR_ac_B.VariantMerge_For_Variant_Sour_h[3] = false;
    VLDR_ac_B.VariantMerge_For_Variant_Sour_h[4] = false;

#endif

    /* End of Logic: '<S1007>/Logical1' */
    /* End of Outputs for SubSystem: '<S1005>/Stop Watch Reset Enabled' */
    /* End of Outputs for SubSystem: '<S1005>/Stop Watch Reset Enabled1' */
    /* End of Outputs for SubSystem: '<S1011>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S1005>/Signal Latch On With Reset' */

    /* S-Function (sfix_bitop): '<S1048>/Bitwise Operator1' incorporates:
     *  Constant: '<S1048>/Constant1'
     *  Constant: '<S1048>/Constant2'
     *  Constant: '<S1049>/Constant1'
     *  Constant: '<S1049>/Constant2'
     *  Constant: '<S1050>/Constant1'
     *  Constant: '<S1050>/Constant2'
     *  Constant: '<S1051>/Constant1'
     *  Constant: '<S1051>/Constant2'
     *  Constant: '<S1052>/Constant1'
     *  Constant: '<S1052>/Constant2'
     *  Constant: '<S1053>/Constant1'
     *  Constant: '<S1053>/Constant2'
     *  Constant: '<S1054>/KeVLDR_b_IUMPR_HTCV_Perf_CktErr_Enbl'
     *  Constant: '<S1055>/KeVLDR_b_IUMPR_HTCV_Perf_CktHi_Enbl'
     *  Constant: '<S1056>/KeVLDR_b_IUMPR_HTCV_Perf_CktLo_Enbl'
     *  Constant: '<S1057>/KeVLDR_b_IUMPR_HTCV_Perf_FdbkCktHi_Enbl'
     *  Constant: '<S1058>/KeVLDR_b_IUMPR_HTCV_Perf_FdbkCktLo_Enbl'
     *  Constant: '<S1059>/KeVLDR_b_IUMPR_HTCV_Perf_ThrmlRly_Enbl'
     *  Constant: '<S1060>/Constant1'
     *  Constant: '<S1060>/Constant2'
     *  Constant: '<S1061>/Constant1'
     *  Constant: '<S1061>/Constant2'
     *  Constant: '<S1062>/Constant1'
     *  Constant: '<S1062>/Constant2'
     *  Constant: '<S1063>/Constant1'
     *  Constant: '<S1063>/Constant2'
     *  Constant: '<S1064>/Constant1'
     *  Constant: '<S1064>/Constant2'
     *  Constant: '<S1065>/Constant1'
     *  Constant: '<S1065>/Constant2'
     *  Constant: '<S1066>/KeVLDR_b_IUMPR_HTCV_Leak_BTIS_Rat_Enbl'
     *  Constant: '<S1067>/KeVLDR_b_IUMPR_HTCV_Leak_BTOS_Rat_Enbl'
     *  Constant: '<S1068>/KeVLDR_b_IUMPR_HTCV_Leak_CktErr_Enbl'
     *  Constant: '<S1069>/KeVLDR_b_IUMPR_HTCV_Leak_CktHi_Enbl'
     *  Constant: '<S1070>/KeVLDR_b_IUMPR_HTCV_Leak_CktLo_Enbl'
     *  Constant: '<S1071>/KeVLDR_b_IUMPR_HTCV_Leak_LTAP_Rat_Enbl'
     *  DataStoreRead: '<S1048>/StatusByte_CoolantVlvA_CktHi'
     *  DataStoreRead: '<S1049>/StatusByte_CoolantVlvA_CktLo'
     *  DataStoreRead: '<S1050>/StatusByte_CoolantVlvA_Ckt'
     *  DataStoreRead: '<S1051>/StatusByte_CoolantVlvA_FdbkCktHi'
     *  DataStoreRead: '<S1052>/StatusByte_CoolantVlvA_FdbkCktLo'
     *  DataStoreRead: '<S1053>/StatusByte_ThrmlRlyCtrlCkt'
     *  DataStoreRead: '<S1060>/StatusByte_BattCoolPmpATempSnsrPerf'
     *  DataStoreRead: '<S1061>/StatusByte_CoolOutTempSnsCkt'
     *  DataStoreRead: '<S1065>/StatusByte_HB_CT_SnsrPerf'
     *  Logic: '<S1033>/Logical1'
     *  Logic: '<S1033>/Logical3'
     *  Logic: '<S1034>/Logical'
     *  Logic: '<S1034>/Logical1'
     *  Logic: '<S1034>/Logical2'
     *  Logic: '<S1034>/Logical3'
     *  Logic: '<S1034>/Logical5'
     *  Logic: '<S1034>/Logical6'
     *  Logic: '<S1034>/Logical7'
     *  Logic: '<S1035>/Logical'
     *  Logic: '<S1035>/Logical1'
     *  Logic: '<S1035>/Logical2'
     *  Logic: '<S1035>/Logical3'
     *  Logic: '<S1035>/Logical4'
     *  Logic: '<S1035>/Logical5'
     *  Logic: '<S1035>/Logical6'
     *  Logic: '<S1036>/Logical4'
     *  Logic: '<S1040>/Logical'
     *  Logic: '<S1048>/Logical Operator'
     *  Logic: '<S1049>/Logical Operator'
     *  Logic: '<S1050>/Logical Operator'
     *  Logic: '<S1051>/Logical Operator'
     *  Logic: '<S1052>/Logical Operator'
     *  Logic: '<S1053>/Logical Operator'
     *  Logic: '<S1060>/Logical Operator'
     *  Logic: '<S1061>/Logical Operator'
     *  Logic: '<S1062>/Logical Operator'
     *  Logic: '<S1063>/Logical Operator'
     *  Logic: '<S1064>/Logical Operator'
     *  Logic: '<S1065>/Logical Operator'
     *  RelationalOperator: '<S1036>/Comparison1'
     *  RelationalOperator: '<S1036>/Comparison2'
     *  RelationalOperator: '<S1036>/Comparison4'
     *  RelationalOperator: '<S1040>/Comparison1'
     *  RelationalOperator: '<S1040>/Comparison2'
     *  RelationalOperator: '<S1040>/Comparison3'
     *  RelationalOperator: '<S1048>/Relational Operator1'
     *  RelationalOperator: '<S1048>/Relational Operator2'
     *  RelationalOperator: '<S1049>/Relational Operator1'
     *  RelationalOperator: '<S1049>/Relational Operator2'
     *  RelationalOperator: '<S1050>/Relational Operator1'
     *  RelationalOperator: '<S1050>/Relational Operator2'
     *  RelationalOperator: '<S1051>/Relational Operator1'
     *  RelationalOperator: '<S1051>/Relational Operator2'
     *  RelationalOperator: '<S1052>/Relational Operator1'
     *  RelationalOperator: '<S1052>/Relational Operator2'
     *  RelationalOperator: '<S1053>/Relational Operator1'
     *  RelationalOperator: '<S1053>/Relational Operator2'
     *  RelationalOperator: '<S1060>/Relational Operator1'
     *  RelationalOperator: '<S1060>/Relational Operator2'
     *  RelationalOperator: '<S1061>/Relational Operator1'
     *  RelationalOperator: '<S1061>/Relational Operator2'
     *  RelationalOperator: '<S1062>/Relational Operator1'
     *  RelationalOperator: '<S1062>/Relational Operator2'
     *  RelationalOperator: '<S1063>/Relational Operator1'
     *  RelationalOperator: '<S1063>/Relational Operator2'
     *  RelationalOperator: '<S1064>/Relational Operator1'
     *  RelationalOperator: '<S1064>/Relational Operator2'
     *  RelationalOperator: '<S1065>/Relational Operator1'
     *  RelationalOperator: '<S1065>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S1048>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1049>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1049>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1050>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1050>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1051>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1051>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1052>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1052>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1053>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1053>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1060>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1060>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1061>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1061>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1062>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1062>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1063>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1063>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1064>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1064>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1065>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1065>/Bitwise Operator2'
     *  SignalConversion generated from: '<S972>/Variant Source'
     *  Switch: '<S1036>/Switch'
     *  UnitDelay: '<S1036>/Unit Delay'
     */
#if Rte_SysCon_Variant_VLDR_2

    /* Outputs for Atomic SubSystem: '<S1033>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S1036>/EdgeRising' */
    /* Outputs for Atomic SubSystem: '<S1033>/Stop Watch Reset Enabled1' */
    /* Outputs for Atomic SubSystem: '<S1033>/Stop Watch Reset Enabled' */
    rtb_VariantMergeForOutportDFI_0 = ((sint32)
        VLDR_ac_DW.StatusByte_CoolantVlvA_Ckt) & 1;
    tmpRead_f = ((uint32)VLDR_ac_DW.StatusByte_CoolantVlvA_Ckt) & 64U;
    rtb_VariantMergeForOutportDFI_1 = ((sint32)
        VLDR_ac_DW.StatusByte_CoolantVlvA_CktLo) & 1;
    rtb_UnitDelay_ly_tmp = ((uint32)VLDR_ac_DW.StatusByte_CoolantVlvA_CktLo) &
        64U;
    rtb_VariantMergeForOutportDFI_3 = ((sint32)
        VLDR_ac_DW.StatusByte_CoolantVlvA_CktHi) & 1;
    rtb_VariantMergeForOutportDFI_2 = ((uint32)
        VLDR_ac_DW.StatusByte_CoolantVlvA_CktHi) & 64U;
    VLDR_ac_B.VariantMerge_For_Variant_Sou_hy[0] =
        ((((((((rtb_VariantMergeForOutportDFI_0 > 0) && (tmpRead_f == 0U)) &&
              (KeVLDR_b_IUMPR_HTCV_Perf_CktErr_Enbl)) ||
             (((rtb_VariantMergeForOutportDFI_1 > 0) && (rtb_UnitDelay_ly_tmp ==
                0U)) && (KeVLDR_b_IUMPR_HTCV_Perf_CktLo_Enbl))) ||
            (((rtb_VariantMergeForOutportDFI_3 > 0) &&
              (rtb_VariantMergeForOutportDFI_2 == 0U)) &&
             (KeVLDR_b_IUMPR_HTCV_Perf_CktHi_Enbl))) || ((((((sint32)
                VLDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 1) > 0) && ((((uint32)
                VLDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 64U) == 0U)) &&
            (KeVLDR_b_IUMPR_HTCV_Perf_ThrmlRly_Enbl))) || ((((((sint32)
               VLDR_ac_DW.StatusByte_CoolantVlvA_FdbkCktL) & 1) > 0) &&
            ((((uint32)VLDR_ac_DW.StatusByte_CoolantVlvA_FdbkCktL) & 64U) == 0U))
           && (KeVLDR_b_IUMPR_HTCV_Perf_FdbkCktLo_Enbl))) || ((((((sint32)
              VLDR_ac_DW.StatusByte_CoolantVlvA_FdbkCktH) & 1) > 0) &&
           ((((uint32)VLDR_ac_DW.StatusByte_CoolantVlvA_FdbkCktH) & 64U) == 0U))
          && (KeVLDR_b_IUMPR_HTCV_Perf_FdbkCktHi_Enbl)));
    VLDR_ac_B.VariantMerge_For_Variant_Sou_hy[1] =
        ((((((((rtb_VariantMergeForOutportDFI_0 > 0) && (tmpRead_f == 0U)) &&
              (KeVLDR_b_IUMPR_HTCV_Leak_CktErr_Enbl)) ||
             (((rtb_VariantMergeForOutportDFI_1 > 0) && (rtb_UnitDelay_ly_tmp ==
                0U)) && (KeVLDR_b_IUMPR_HTCV_Leak_CktLo_Enbl))) ||
            (((rtb_VariantMergeForOutportDFI_3 > 0) &&
              (rtb_VariantMergeForOutportDFI_2 == 0U)) &&
             (KeVLDR_b_IUMPR_HTCV_Leak_CktHi_Enbl))) || ((((((sint32)
                VLDR_ac_DW.StatusByte_HB_CT_SnsrPerf) & 1) > 0) && ((((uint32)
                VLDR_ac_DW.StatusByte_HB_CT_SnsrPerf) & 64U) == 0U)) &&
            (KeVLDR_b_IUMPR_HTCV_Leak_BTIS_Rat_Enbl))) || ((((((sint32)
               VLDR_ac_DW.StatusByte_CoolOutTempSnsCkt) & 1) > 0) && ((((uint32)
               VLDR_ac_DW.StatusByte_CoolOutTempSnsCkt) & 64U) == 0U)) &&
           (KeVLDR_b_IUMPR_HTCV_Leak_BTOS_Rat_Enbl))) || ((((((sint32)
              VLDR_ac_DW.StatusByte_BattCoolPmpATempSnsr) & 1) > 0) &&
           ((((uint32)VLDR_ac_DW.StatusByte_BattCoolPmpATempSnsr) & 64U) == 0U))
          && (KeVLDR_b_IUMPR_HTCV_Leak_LTAP_Rat_Enbl)));

    /* Logic: '<S1040>/Logical' incorporates:
     *  Constant: '<S1045>/KeVLDR_Pct_IUMPR_HTCV_Stop_PWM'
     *  Constant: '<S1046>/KeVLDR_Pct_IUMPR_HTCV_TwrdsBatt_PWM'
     *  Constant: '<S1047>/KeVLDR_Pct_IUMPR_HTCV_TwrdsCab_PWM'
     *  Constant: '<S1048>/Constant1'
     *  Constant: '<S1048>/Constant2'
     *  Constant: '<S1049>/Constant1'
     *  Constant: '<S1049>/Constant2'
     *  Constant: '<S1050>/Constant1'
     *  Constant: '<S1050>/Constant2'
     *  Constant: '<S1051>/Constant1'
     *  Constant: '<S1051>/Constant2'
     *  Constant: '<S1052>/Constant1'
     *  Constant: '<S1052>/Constant2'
     *  Constant: '<S1053>/Constant1'
     *  Constant: '<S1053>/Constant2'
     *  Constant: '<S1054>/KeVLDR_b_IUMPR_HTCV_Perf_CktErr_Enbl'
     *  Constant: '<S1055>/KeVLDR_b_IUMPR_HTCV_Perf_CktHi_Enbl'
     *  Constant: '<S1056>/KeVLDR_b_IUMPR_HTCV_Perf_CktLo_Enbl'
     *  Constant: '<S1057>/KeVLDR_b_IUMPR_HTCV_Perf_FdbkCktHi_Enbl'
     *  Constant: '<S1058>/KeVLDR_b_IUMPR_HTCV_Perf_FdbkCktLo_Enbl'
     *  Constant: '<S1059>/KeVLDR_b_IUMPR_HTCV_Perf_ThrmlRly_Enbl'
     *  Constant: '<S1060>/Constant1'
     *  Constant: '<S1060>/Constant2'
     *  Constant: '<S1061>/Constant1'
     *  Constant: '<S1061>/Constant2'
     *  Constant: '<S1062>/Constant1'
     *  Constant: '<S1062>/Constant2'
     *  Constant: '<S1063>/Constant1'
     *  Constant: '<S1063>/Constant2'
     *  Constant: '<S1064>/Constant1'
     *  Constant: '<S1064>/Constant2'
     *  Constant: '<S1065>/Constant1'
     *  Constant: '<S1065>/Constant2'
     *  Constant: '<S1066>/KeVLDR_b_IUMPR_HTCV_Leak_BTIS_Rat_Enbl'
     *  Constant: '<S1067>/KeVLDR_b_IUMPR_HTCV_Leak_BTOS_Rat_Enbl'
     *  Constant: '<S1068>/KeVLDR_b_IUMPR_HTCV_Leak_CktErr_Enbl'
     *  Constant: '<S1069>/KeVLDR_b_IUMPR_HTCV_Leak_CktHi_Enbl'
     *  Constant: '<S1070>/KeVLDR_b_IUMPR_HTCV_Leak_CktLo_Enbl'
     *  Constant: '<S1071>/KeVLDR_b_IUMPR_HTCV_Leak_LTAP_Rat_Enbl'
     *  DataStoreRead: '<S1048>/StatusByte_CoolantVlvA_CktHi'
     *  DataStoreRead: '<S1049>/StatusByte_CoolantVlvA_CktLo'
     *  DataStoreRead: '<S1050>/StatusByte_CoolantVlvA_Ckt'
     *  DataStoreRead: '<S1051>/StatusByte_CoolantVlvA_FdbkCktHi'
     *  DataStoreRead: '<S1052>/StatusByte_CoolantVlvA_FdbkCktLo'
     *  DataStoreRead: '<S1053>/StatusByte_ThrmlRlyCtrlCkt'
     *  DataStoreRead: '<S1060>/StatusByte_BattCoolPmpATempSnsrPerf'
     *  DataStoreRead: '<S1061>/StatusByte_CoolOutTempSnsCkt'
     *  DataStoreRead: '<S1065>/StatusByte_HB_CT_SnsrPerf'
     */
    rtb_Logical2_fw = (((rtb_TmpSignalConversionAtVeTAIR !=
                         KeVLDR_Pct_IUMPR_HTCV_TwrdsBatt_PWM) ||
                        (rtb_TmpSignalConversionAtVeTAIR !=
                         KeVLDR_Pct_IUMPR_HTCV_TwrdsCab_PWM)) ||
                       (rtb_TmpSignalConversionAtVeTAIR !=
                        KeVLDR_Pct_IUMPR_HTCV_Stop_PWM));

    /* Logic: '<S1033>/Logical1' */
    rtb_VariantMergeForOutportDF_ko = !rtb_UnitDelay_id;

    /* Switch: '<S1038>/Switch1' */
    if (rtb_Logical2_fw || rtb_VariantMergeForOutportDF_ko)
    {
        /* Switch: '<S1038>/Switch1' incorporates:
         *  Constant: '<S1038>/Constant Value2'
         */
        rtb_Switch1_ln = 0.0F;
    }
    else
    {
        /* Switch: '<S1038>/Switch1' incorporates:
         *  Constant: '<S1033>/Constant Value1'
         *  Sum: '<S1038>/Subtraction'
         *  Switch: '<S1038>/Switch2'
         *  UnitDelay: '<S1038>/Unit Delay'
         */
        rtb_Switch1_ln = VLDR_ac_DW.UnitDelay_DSTATE_hc + 0.025F;
    }

    /* End of Switch: '<S1038>/Switch1' */

    /* Update for UnitDelay: '<S1038>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_hc = rtb_Switch1_ln;

    /* RelationalOperator: '<S1036>/Comparison1' incorporates:
     *  Constant: '<S1043>/KeVLDR_t_IUMPR_HTCV_MinConsecTime_CmdOn'
     */
    rtb_Logical1_pzo = (rtb_Switch1_ln > KeVLDR_t_IUMPR_HTCV_MinConsecTime_CmdOn);

    /* Switch: '<S1039>/Switch1' incorporates:
     *  Logic: '<S1033>/Logical4'
     *  Switch: '<S1039>/Switch2'
     */
    if (rtb_VariantMergeForOutportDF_ko)
    {
        /* Switch: '<S1039>/Switch1' incorporates:
         *  Constant: '<S1039>/Constant Value2'
         */
        rtb_TmpSignalConversionAtVeTAIR = 0.0F;
    }
    else if (!rtb_Logical2_fw)
    {
        /* Switch: '<S1039>/Switch2' incorporates:
         *  Constant: '<S1033>/Constant Value2'
         *  Sum: '<S1039>/Subtraction'
         *  Switch: '<S1039>/Switch1'
         *  UnitDelay: '<S1039>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeTAIR = VLDR_ac_DW.UnitDelay_DSTATE_iy +
            0.025F;
    }
    else
    {
        /* Switch: '<S1039>/Switch1' incorporates:
         *  Switch: '<S1039>/Switch2'
         *  UnitDelay: '<S1039>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeTAIR = VLDR_ac_DW.UnitDelay_DSTATE_iy;
    }

    /* End of Switch: '<S1039>/Switch1' */

    /* Update for UnitDelay: '<S1039>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_iy = rtb_TmpSignalConversionAtVeTAIR;

    /* Logic: '<S1041>/AND' incorporates:
     *  Logic: '<S1041>/OR1'
     *  UnitDelay: '<S1041>/Unit Delay'
     */
    rtb_Logical2_fw = (rtb_Logical1_pzo && (!VLDR_ac_DW.UnitDelay_DSTATE_cl));

    /* Update for UnitDelay: '<S1041>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_cl = rtb_Logical1_pzo;
    if (rtb_VariantMergeForOutportDF_ko)
    {
        /* Switch: '<S1036>/Switch' incorporates:
         *  Constant: '<S1036>/Constant Value5'
         */
        rtb_Switch1_ln = 0.0F;
    }
    else
    {
        /* Switch: '<S1036>/Switch' incorporates:
         *  Sum: '<S1036>/Sum'
         *  Switch: '<S1036>/Switch1'
         */
        rtb_Switch1_ln = ((float32)(rtb_Logical2_fw ? 1.0F : 0.0F)) +
            VLDR_ac_DW.UnitDelay_DSTATE_fw;
    }

    /* Logic: '<S1037>/OR1' incorporates:
     *  Constant: '<S1042>/KeVLDR_Cnt_IUMPR_HTCV_MinConsecCnt_CmdOn'
     *  Constant: '<S1044>/KeVLDR_t_IUMPR_HTCV_MinCumlTime_CmdOn'
     *  Logic: '<S1037>/NOT'
     *  Logic: '<S1037>/OR'
     *  UnitDelay: '<S1037>/Unit Delay'
     */
    VLDR_ac_B.VariantMerge_For_Variant_Sou_hy[2] =
        (((rtb_TmpSignalConversionAtVeTAIR >=
           KeVLDR_t_IUMPR_HTCV_MinCumlTime_CmdOn) || (rtb_Switch1_ln >=
           KeVLDR_Cnt_IUMPR_HTCV_MinConsecCnt_CmdOn)) ||
         ((!rtb_VariantMergeForOutportDF_ko) && (VLDR_ac_DW.UnitDelay_DSTATE_hlv)));

    /* Update for UnitDelay: '<S1037>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_hlv = VLDR_ac_B.VariantMerge_For_Variant_Sou_hy
        [2];

    /* End of Outputs for SubSystem: '<S1033>/Stop Watch Reset Enabled' */
    /* End of Outputs for SubSystem: '<S1033>/Stop Watch Reset Enabled1' */
    /* End of Outputs for SubSystem: '<S1036>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S1033>/Signal Latch On With Reset' */
#else

    /* VariantMerge generated from: '<S972>/Variant Source' incorporates:
     *  Constant: '<S1032>/FALSE Constant'
     *  SignalConversion generated from: '<S972>/Variant Source'
     */
    VLDR_ac_B.VariantMerge_For_Variant_Sou_hy[0] = false;
    VLDR_ac_B.VariantMerge_For_Variant_Sou_hy[1] = false;
    VLDR_ac_B.VariantMerge_For_Variant_Sou_hy[2] = false;

#endif

    /* End of S-Function (sfix_bitop): '<S1048>/Bitwise Operator1' */

    /* S-Function (sfix_bitop): '<S1093>/Bitwise Operator1' incorporates:
     *  Constant: '<S1085>/Constant1'
     *  Constant: '<S1085>/Constant2'
     *  Constant: '<S1086>/Constant1'
     *  Constant: '<S1086>/Constant2'
     *  Constant: '<S1087>/Constant1'
     *  Constant: '<S1087>/Constant2'
     *  Constant: '<S1088>/Constant1'
     *  Constant: '<S1088>/Constant2'
     *  Constant: '<S1089>/KeVLDR_b_IUMPR_HTSOV_SktOpn_CrktChkEnbl'
     *  Constant: '<S1090>/KeVLDR_b_IUMPR_HTSOV_SktOpn_CrktHiEnbl'
     *  Constant: '<S1091>/KeVLDR_b_IUMPR_HTSOV_SktOpn_CrktLoEnbl'
     *  Constant: '<S1092>/KeVLDR_b_IUMPR_HTSOV_StkOpn_StkClsdChk_Enbl'
     *  Constant: '<S1093>/Constant1'
     *  Constant: '<S1093>/Constant2'
     *  Constant: '<S1094>/Constant1'
     *  Constant: '<S1094>/Constant2'
     *  Constant: '<S1095>/Constant1'
     *  Constant: '<S1095>/Constant2'
     *  Constant: '<S1096>/Constant1'
     *  Constant: '<S1096>/Constant2'
     *  Constant: '<S1097>/KeVLDR_b_IUMPR_HTSOV_SktClsd_CrktHiEnbl'
     *  Constant: '<S1098>/KeVLDR_b_IUMPR_HTSOV_SktClsd_CrktLoEnbl'
     *  Constant: '<S1099>/KeVLDR_b_IUMPR_HTSOV_StkClsd_CrktChkEnbl'
     *  Constant: '<S1100>/KeVLDR_b_IUMPR_HTSOV_StkClsd_StkOpnChk_Enbl'
     *  DataStoreRead: '<S1088>/StatusByte_CoolantVlvB_StkClsd'
     *  DataStoreRead: '<S1093>/StatusByte_CoolantVlvB_CktHi'
     *  DataStoreRead: '<S1094>/StatusByte_CoolantVlvB_CktLo'
     *  DataStoreRead: '<S1095>/StatusByte_CoolantVlvB_Ckt'
     *  DataStoreRead: '<S1096>/StatusByte_CoolantVlvB_StkOpn'
     *  Logic: '<S1074>/Logical1'
     *  Logic: '<S1074>/Logical3'
     *  Logic: '<S1074>/Logical5'
     *  Logic: '<S1074>/Logical6'
     *  Logic: '<S1075>/Logical'
     *  Logic: '<S1075>/Logical1'
     *  Logic: '<S1075>/Logical2'
     *  Logic: '<S1075>/Logical3'
     *  Logic: '<S1075>/Logical4'
     *  Logic: '<S1076>/Logical'
     *  Logic: '<S1076>/Logical1'
     *  Logic: '<S1076>/Logical2'
     *  Logic: '<S1076>/Logical3'
     *  Logic: '<S1076>/Logical4'
     *  Logic: '<S1077>/Logical4'
     *  Logic: '<S1085>/Logical Operator'
     *  Logic: '<S1086>/Logical Operator'
     *  Logic: '<S1087>/Logical Operator'
     *  Logic: '<S1088>/Logical Operator'
     *  Logic: '<S1093>/Logical Operator'
     *  Logic: '<S1094>/Logical Operator'
     *  Logic: '<S1095>/Logical Operator'
     *  Logic: '<S1096>/Logical Operator'
     *  RelationalOperator: '<S1077>/Comparison1'
     *  RelationalOperator: '<S1077>/Comparison2'
     *  RelationalOperator: '<S1077>/Comparison4'
     *  RelationalOperator: '<S1085>/Relational Operator1'
     *  RelationalOperator: '<S1085>/Relational Operator2'
     *  RelationalOperator: '<S1086>/Relational Operator1'
     *  RelationalOperator: '<S1086>/Relational Operator2'
     *  RelationalOperator: '<S1087>/Relational Operator1'
     *  RelationalOperator: '<S1087>/Relational Operator2'
     *  RelationalOperator: '<S1088>/Relational Operator1'
     *  RelationalOperator: '<S1088>/Relational Operator2'
     *  RelationalOperator: '<S1093>/Relational Operator1'
     *  RelationalOperator: '<S1093>/Relational Operator2'
     *  RelationalOperator: '<S1094>/Relational Operator1'
     *  RelationalOperator: '<S1094>/Relational Operator2'
     *  RelationalOperator: '<S1095>/Relational Operator1'
     *  RelationalOperator: '<S1095>/Relational Operator2'
     *  RelationalOperator: '<S1096>/Relational Operator1'
     *  RelationalOperator: '<S1096>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S1085>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1085>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1086>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1086>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1087>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1087>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1088>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1088>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1093>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1094>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1094>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1095>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1095>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1096>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1096>/Bitwise Operator2'
     *  SignalConversion generated from: '<S973>/Variant Source'
     *  Switch: '<S1077>/Switch'
     *  UnitDelay: '<S1077>/Unit Delay'
     */
#if Rte_SysCon_Variant_VLDR_3

    /* Outputs for Atomic SubSystem: '<S1074>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S1077>/EdgeRising' */
    /* Outputs for Atomic SubSystem: '<S1074>/Stop Watch Reset Enabled1' */
    /* Outputs for Atomic SubSystem: '<S1074>/Stop Watch Reset Enabled' */
    rtb_VariantMergeForOutportDFI_0 = ((sint32)
        VLDR_ac_DW.StatusByte_CoolantVlvB_Ckt) & 1;
    tmpRead_f = ((uint32)VLDR_ac_DW.StatusByte_CoolantVlvB_Ckt) & 64U;
    rtb_VariantMergeForOutportDFI_1 = ((sint32)
        VLDR_ac_DW.StatusByte_CoolantVlvB_CktLo) & 1;
    rtb_UnitDelay_ly_tmp = ((uint32)VLDR_ac_DW.StatusByte_CoolantVlvB_CktLo) &
        64U;
    rtb_VariantMergeForOutportDFI_3 = ((sint32)
        VLDR_ac_DW.StatusByte_CoolantVlvB_CktHi) & 1;
    rtb_VariantMergeForOutportDFI_2 = ((uint32)
        VLDR_ac_DW.StatusByte_CoolantVlvB_CktHi) & 64U;
    VLDR_ac_B.VariantMerge_For_Variant_So_hyk[0] = (((((((((sint32)
        VLDR_ac_DW.StatusByte_CoolantVlvB_StkOpn) & 1) > 0) && ((((uint32)
        VLDR_ac_DW.StatusByte_CoolantVlvB_StkOpn) & 64U) == 0U)) &&
        (KeVLDR_b_IUMPR_HTSOV_StkClsd_StkOpnChk_Enbl)) ||
        (((rtb_VariantMergeForOutportDFI_0 > 0) && (tmpRead_f == 0U)) &&
         (KeVLDR_b_IUMPR_HTSOV_StkClsd_CrktChkEnbl))) ||
        (((rtb_VariantMergeForOutportDFI_1 > 0) && (rtb_UnitDelay_ly_tmp == 0U))
         && (KeVLDR_b_IUMPR_HTSOV_SktClsd_CrktLoEnbl))) ||
        (((rtb_VariantMergeForOutportDFI_3 > 0) &&
          (rtb_VariantMergeForOutportDFI_2 == 0U)) &&
         (KeVLDR_b_IUMPR_HTSOV_SktClsd_CrktHiEnbl)));
    VLDR_ac_B.VariantMerge_For_Variant_So_hyk[1] = (((((((((sint32)
        VLDR_ac_DW.StatusByte_CoolantVlvB_StkClsd) & 1) > 0) && ((((uint32)
        VLDR_ac_DW.StatusByte_CoolantVlvB_StkClsd) & 64U) == 0U)) &&
        (KeVLDR_b_IUMPR_HTSOV_StkOpn_StkClsdChk_Enbl)) ||
        (((rtb_VariantMergeForOutportDFI_0 > 0) && (tmpRead_f == 0U)) &&
         (KeVLDR_b_IUMPR_HTSOV_SktOpn_CrktChkEnbl))) ||
        (((rtb_VariantMergeForOutportDFI_1 > 0) && (rtb_UnitDelay_ly_tmp == 0U))
         && (KeVLDR_b_IUMPR_HTSOV_SktOpn_CrktLoEnbl))) ||
        (((rtb_VariantMergeForOutportDFI_3 > 0) &&
          (rtb_VariantMergeForOutportDFI_2 == 0U)) &&
         (KeVLDR_b_IUMPR_HTSOV_SktOpn_CrktHiEnbl)));

    /* Logic: '<S1074>/Logical1' incorporates:
     *  Constant: '<S1085>/Constant1'
     *  Constant: '<S1085>/Constant2'
     *  Constant: '<S1086>/Constant1'
     *  Constant: '<S1086>/Constant2'
     *  Constant: '<S1087>/Constant1'
     *  Constant: '<S1087>/Constant2'
     *  Constant: '<S1088>/Constant1'
     *  Constant: '<S1088>/Constant2'
     *  Constant: '<S1089>/KeVLDR_b_IUMPR_HTSOV_SktOpn_CrktChkEnbl'
     *  Constant: '<S1090>/KeVLDR_b_IUMPR_HTSOV_SktOpn_CrktHiEnbl'
     *  Constant: '<S1091>/KeVLDR_b_IUMPR_HTSOV_SktOpn_CrktLoEnbl'
     *  Constant: '<S1092>/KeVLDR_b_IUMPR_HTSOV_StkOpn_StkClsdChk_Enbl'
     *  Constant: '<S1093>/Constant1'
     *  Constant: '<S1093>/Constant2'
     *  Constant: '<S1094>/Constant1'
     *  Constant: '<S1094>/Constant2'
     *  Constant: '<S1095>/Constant1'
     *  Constant: '<S1095>/Constant2'
     *  Constant: '<S1096>/Constant1'
     *  Constant: '<S1096>/Constant2'
     *  Constant: '<S1097>/KeVLDR_b_IUMPR_HTSOV_SktClsd_CrktHiEnbl'
     *  Constant: '<S1098>/KeVLDR_b_IUMPR_HTSOV_SktClsd_CrktLoEnbl'
     *  Constant: '<S1099>/KeVLDR_b_IUMPR_HTSOV_StkClsd_CrktChkEnbl'
     *  Constant: '<S1100>/KeVLDR_b_IUMPR_HTSOV_StkClsd_StkOpnChk_Enbl'
     *  DataStoreRead: '<S1088>/StatusByte_CoolantVlvB_StkClsd'
     *  DataStoreRead: '<S1093>/StatusByte_CoolantVlvB_CktHi'
     *  DataStoreRead: '<S1094>/StatusByte_CoolantVlvB_CktLo'
     *  DataStoreRead: '<S1095>/StatusByte_CoolantVlvB_Ckt'
     *  DataStoreRead: '<S1096>/StatusByte_CoolantVlvB_StkOpn'
     */
    rtb_TmpSignalConversionAtVeR_go = !rtb_UnitDelay_id;

    /* Switch: '<S1079>/Switch1' incorporates:
     *  Switch: '<S1080>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeR_go)
    {
        /* Switch: '<S1079>/Switch1' incorporates:
         *  Constant: '<S1079>/Constant Value2'
         */
        rtb_Switch1_bc = 0.0F;

        /* Switch: '<S1080>/Switch1' incorporates:
         *  Constant: '<S1080>/Constant Value2'
         */
        rtb_TmpSignalConversionAtVeTAIR = 0.0F;
    }
    else
    {
        /* Switch: '<S1079>/Switch1' incorporates:
         *  Constant: '<S1074>/Constant Value1'
         *  Sum: '<S1079>/Subtraction'
         *  Switch: '<S1079>/Switch2'
         *  UnitDelay: '<S1079>/Unit Delay'
         */
        rtb_Switch1_bc = VLDR_ac_DW.UnitDelay_DSTATE_px + 0.025F;

        /* Switch: '<S1080>/Switch1' incorporates:
         *  Constant: '<S1074>/Constant Value2'
         *  Sum: '<S1080>/Subtraction'
         *  Switch: '<S1080>/Switch2'
         *  UnitDelay: '<S1080>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeTAIR = VLDR_ac_DW.UnitDelay_DSTATE_ls +
            0.025F;
    }

    /* End of Switch: '<S1079>/Switch1' */

    /* Update for UnitDelay: '<S1079>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_px = rtb_Switch1_bc;

    /* RelationalOperator: '<S1077>/Comparison1' incorporates:
     *  Constant: '<S1083>/KeVLDR_t_IUMPR_HTSOV_MinConsecTime_CmdOn'
     */
    rtb_VariantMergeForOutportDF_ko = (rtb_Switch1_bc >
        KeVLDR_t_IUMPR_HTSOV_MinConsecTime_CmdOn);

    /* Update for UnitDelay: '<S1080>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_ls = rtb_TmpSignalConversionAtVeTAIR;

    /* Logic: '<S1081>/AND' incorporates:
     *  Logic: '<S1081>/OR1'
     *  UnitDelay: '<S1081>/Unit Delay'
     */
    rtb_Logical1_pzo = (rtb_VariantMergeForOutportDF_ko &&
                        (!VLDR_ac_DW.UnitDelay_DSTATE_g3));

    /* Update for UnitDelay: '<S1081>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_g3 = rtb_VariantMergeForOutportDF_ko;
    if (rtb_TmpSignalConversionAtVeR_go)
    {
        /* Switch: '<S1077>/Switch' incorporates:
         *  Constant: '<S1077>/Constant Value5'
         */
        rtb_Switch1_bc = 0.0F;
    }
    else
    {
        /* Switch: '<S1077>/Switch' incorporates:
         *  Sum: '<S1077>/Sum'
         *  Switch: '<S1077>/Switch1'
         */
        rtb_Switch1_bc = ((float32)(rtb_Logical1_pzo ? 1.0F : 0.0F)) +
            VLDR_ac_DW.UnitDelay_DSTATE_fz;
    }

    /* Logic: '<S1078>/OR1' incorporates:
     *  Constant: '<S1082>/KeVLDR_Cnt_IUMPR_HTSOV_MinConsecCnt_CmdOn'
     *  Constant: '<S1084>/KeVLDR_t_IUMPR_HTSOV_MinCumlTime_CmdOn'
     *  Logic: '<S1078>/NOT'
     *  Logic: '<S1078>/OR'
     *  UnitDelay: '<S1078>/Unit Delay'
     */
    VLDR_ac_B.VariantMerge_For_Variant_So_hyk[2] =
        (((rtb_TmpSignalConversionAtVeTAIR >=
           KeVLDR_t_IUMPR_HTSOV_MinCumlTime_CmdOn) || (rtb_Switch1_bc >=
           KeVLDR_Cnt_IUMPR_HTSOV_MinConsecCnt_CmdOn)) ||
         ((!rtb_TmpSignalConversionAtVeR_go) && (VLDR_ac_DW.UnitDelay_DSTATE_on)));

    /* Update for UnitDelay: '<S1078>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_on = VLDR_ac_B.VariantMerge_For_Variant_So_hyk[2];

    /* End of Outputs for SubSystem: '<S1074>/Stop Watch Reset Enabled' */
    /* End of Outputs for SubSystem: '<S1074>/Stop Watch Reset Enabled1' */
    /* End of Outputs for SubSystem: '<S1077>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S1074>/Signal Latch On With Reset' */
#else

    /* VariantMerge generated from: '<S973>/Variant Source' incorporates:
     *  Constant: '<S1073>/FALSE Constant'
     *  SignalConversion generated from: '<S973>/Variant Source'
     */
    VLDR_ac_B.VariantMerge_For_Variant_So_hyk[0] = false;
    VLDR_ac_B.VariantMerge_For_Variant_So_hyk[1] = false;
    VLDR_ac_B.VariantMerge_For_Variant_So_hyk[2] = false;

#endif

    /* End of S-Function (sfix_bitop): '<S1093>/Bitwise Operator1' */

    /* S-Function (sfix_bitop): '<S1107>/Bitwise Operator1' incorporates:
     *  Constant: '<S1117>/KeVLDR_b_LTSOV_PECTOS_Enb'
     *  Constant: '<S1118>/Constant1'
     *  Constant: '<S1118>/Constant2'
     *  Constant: '<S1119>/Constant1'
     *  Constant: '<S1119>/Constant2'
     *  Constant: '<S1120>/Constant1'
     *  Constant: '<S1120>/Constant2'
     *  Constant: '<S1121>/Constant1'
     *  Constant: '<S1121>/Constant2'
     *  Constant: '<S1122>/Constant1'
     *  Constant: '<S1122>/Constant2'
     *  Constant: '<S1123>/Constant1'
     *  Constant: '<S1123>/Constant2'
     *  Constant: '<S1124>/Constant1'
     *  Constant: '<S1124>/Constant2'
     *  Constant: '<S1125>/Constant1'
     *  Constant: '<S1125>/Constant2'
     *  Constant: '<S1126>/Constant1'
     *  Constant: '<S1126>/Constant2'
     *  Constant: '<S1127>/Constant1'
     *  Constant: '<S1127>/Constant2'
     *  Constant: '<S1128>/KeVLDR_b_LTSOV_PECTOS_Enb'
     *  DataStoreRead: '<S1118>/StatusByte_CT_SnsrCktHi'
     *  DataStoreRead: '<S1119>/StatusByte_CT_SnsrCktLo'
     *  DataStoreRead: '<S1120>/StatusByte_CT_SnsrPerf'
     *  DataStoreRead: '<S1121>/StatusByte_CoolOutTempSnsCkt'
     *  DataStoreRead: '<S1122>/StatusByte_HB_CT_SnsrPerf'
     *  DataStoreRead: '<S1123>/StatusByte_HybEvBatPacCoolCtrlVlvBPerfStkOff'
     *  DataStoreRead: '<S1124>/StatusByte_LosCommBECM_A'
     *  DataStoreRead: '<S1125>/StatusByte_MtrElect_CT_SnsrCktHi'
     *  DataStoreRead: '<S1126>/StatusByte_MtrElect_CT_SnsrCktLo'
     *  DataStoreRead: '<S1127>/StatusByte_MtrElect_CT_SnsrPerf'
     *  Inport: '<Root>/VeBRDR_b_HV_BTIS_FltDtct'
     *  Inport: '<Root>/VeBRDR_b_HV_BTOS_FltDtct'
     *  Inport: '<Root>/VePMIR_n_LTPsvPump2RPMAct'
     *  Inport: '<Root>/VeTHDR_b_PPCTIS_FltDtct'
     *  Inport: '<Root>/VeTRIR_b_HV_BatClntTmp_In_FA'
     *  Inport: '<Root>/VeTRIR_b_HV_BatClntTmp_Out_FA'
     *  Logic: '<S1103>/Logical1'
     *  Logic: '<S1103>/Logical12'
     *  Logic: '<S1103>/Logical14'
     *  Logic: '<S1103>/Logical15'
     *  Logic: '<S1103>/Logical2'
     *  Logic: '<S1103>/Logical3'
     *  Logic: '<S1104>/Logical1'
     *  Logic: '<S1104>/Logical12'
     *  Logic: '<S1104>/Logical14'
     *  Logic: '<S1104>/Logical2'
     *  Logic: '<S1104>/Logical20'
     *  Logic: '<S1104>/Logical5'
     *  Logic: '<S1105>/Logical1'
     *  Logic: '<S1105>/Logical2'
     *  Logic: '<S1105>/Logical3'
     *  Logic: '<S1106>/Logical1'
     *  Logic: '<S1106>/Logical2'
     *  Logic: '<S1106>/Logical3'
     *  Logic: '<S1107>/Logical Operator'
     *  Logic: '<S1108>/Logical Operator'
     *  Logic: '<S1109>/Logical Operator'
     *  Logic: '<S1110>/Logical Operator'
     *  Logic: '<S1111>/Logical Operator'
     *  Logic: '<S1112>/Logical Operator'
     *  Logic: '<S1113>/Logical Operator'
     *  Logic: '<S1114>/Logical Operator'
     *  Logic: '<S1115>/Logical Operator'
     *  Logic: '<S1116>/Logical Operator'
     *  Logic: '<S1118>/Logical Operator'
     *  Logic: '<S1119>/Logical Operator'
     *  Logic: '<S1120>/Logical Operator'
     *  Logic: '<S1121>/Logical Operator'
     *  Logic: '<S1122>/Logical Operator'
     *  Logic: '<S1123>/Logical Operator'
     *  Logic: '<S1124>/Logical Operator'
     *  Logic: '<S1125>/Logical Operator'
     *  Logic: '<S1126>/Logical Operator'
     *  Logic: '<S1127>/Logical Operator'
     *  Logic: '<S1130>/Logical4'
     *  Logic: '<S1140>/Logical4'
     *  RelationalOperator: '<S1107>/Relational Operator1'
     *  RelationalOperator: '<S1107>/Relational Operator2'
     *  RelationalOperator: '<S1108>/Relational Operator1'
     *  RelationalOperator: '<S1108>/Relational Operator2'
     *  RelationalOperator: '<S1109>/Relational Operator1'
     *  RelationalOperator: '<S1109>/Relational Operator2'
     *  RelationalOperator: '<S1110>/Relational Operator1'
     *  RelationalOperator: '<S1110>/Relational Operator2'
     *  RelationalOperator: '<S1111>/Relational Operator1'
     *  RelationalOperator: '<S1111>/Relational Operator2'
     *  RelationalOperator: '<S1112>/Relational Operator1'
     *  RelationalOperator: '<S1112>/Relational Operator2'
     *  RelationalOperator: '<S1113>/Relational Operator1'
     *  RelationalOperator: '<S1113>/Relational Operator2'
     *  RelationalOperator: '<S1114>/Relational Operator1'
     *  RelationalOperator: '<S1114>/Relational Operator2'
     *  RelationalOperator: '<S1115>/Relational Operator1'
     *  RelationalOperator: '<S1115>/Relational Operator2'
     *  RelationalOperator: '<S1116>/Relational Operator1'
     *  RelationalOperator: '<S1116>/Relational Operator2'
     *  RelationalOperator: '<S1118>/Relational Operator1'
     *  RelationalOperator: '<S1118>/Relational Operator2'
     *  RelationalOperator: '<S1119>/Relational Operator1'
     *  RelationalOperator: '<S1119>/Relational Operator2'
     *  RelationalOperator: '<S1120>/Relational Operator1'
     *  RelationalOperator: '<S1120>/Relational Operator2'
     *  RelationalOperator: '<S1121>/Relational Operator1'
     *  RelationalOperator: '<S1121>/Relational Operator2'
     *  RelationalOperator: '<S1122>/Relational Operator1'
     *  RelationalOperator: '<S1122>/Relational Operator2'
     *  RelationalOperator: '<S1123>/Relational Operator1'
     *  RelationalOperator: '<S1123>/Relational Operator2'
     *  RelationalOperator: '<S1124>/Relational Operator1'
     *  RelationalOperator: '<S1124>/Relational Operator2'
     *  RelationalOperator: '<S1125>/Relational Operator1'
     *  RelationalOperator: '<S1125>/Relational Operator2'
     *  RelationalOperator: '<S1126>/Relational Operator1'
     *  RelationalOperator: '<S1126>/Relational Operator2'
     *  RelationalOperator: '<S1127>/Relational Operator1'
     *  RelationalOperator: '<S1127>/Relational Operator2'
     *  RelationalOperator: '<S1129>/Comparison9'
     *  RelationalOperator: '<S1130>/Comparison1'
     *  RelationalOperator: '<S1130>/Comparison2'
     *  RelationalOperator: '<S1130>/Comparison4'
     *  RelationalOperator: '<S1139>/Comparison9'
     *  RelationalOperator: '<S1140>/Comparison1'
     *  RelationalOperator: '<S1140>/Comparison2'
     *  RelationalOperator: '<S1140>/Comparison4'
     *  S-Function (sfix_bitop): '<S1107>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1108>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1108>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1109>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1109>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1110>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1110>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1111>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1111>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1112>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1112>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1113>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1113>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1114>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1114>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1115>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1115>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1116>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1116>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1118>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1118>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1119>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1119>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1120>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1120>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1121>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1121>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1122>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1122>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1123>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1123>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1124>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1124>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1125>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1125>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1126>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1126>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1127>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1127>/Bitwise Operator2'
     *  SignalConversion generated from: '<S974>/Variant Source'
     *  Switch: '<S1130>/Switch'
     *  Switch: '<S1140>/Switch'
     *  UnitDelay: '<S1130>/Unit Delay'
     *  UnitDelay: '<S1140>/Unit Delay'
     */
#if Rte_SysCon_Variant_VLDR_5

    /* Outputs for Atomic SubSystem: '<S1106>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S1140>/EdgeRising' */
    /* Outputs for Atomic SubSystem: '<S1106>/Stop Watch Reset Enabled1' */
    /* Outputs for Atomic SubSystem: '<S1106>/Stop Watch Reset Enabled' */
    /* Outputs for Atomic SubSystem: '<S1105>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S1130>/EdgeRising' */
    /* Outputs for Atomic SubSystem: '<S1105>/Stop Watch Reset Enabled1' */
    /* Outputs for Atomic SubSystem: '<S1105>/Stop Watch Reset Enabled' */
    /* Outputs for Enabled SubSystem: '<S4>/LTSOV_Diagnostics' */
    /* Logic: '<S1107>/Logical Operator' incorporates:
     *  Constant: '<S1107>/Constant1'
     *  Constant: '<S1107>/Constant2'
     *  DataStoreRead: '<S1107>/StatusByte_CT_SnsrCktHi'
     */
    rtb_TmpSignalConversionAtVeR_go = (((((sint32)
        VLDR_ac_DW.StatusByte_CT_SnsrCktHi) & 1) > 0) && ((((uint32)
        VLDR_ac_DW.StatusByte_CT_SnsrCktHi) & 64U) == 0U));

    /* Logic: '<S1108>/Logical Operator' incorporates:
     *  Constant: '<S1108>/Constant1'
     *  Constant: '<S1108>/Constant2'
     *  DataStoreRead: '<S1108>/StatusByte_CT_SnsrCktLo'
     */
    rtb_VariantMergeForOutportDF_ko = (((((sint32)
        VLDR_ac_DW.StatusByte_CT_SnsrCktLo) & 1) > 0) && ((((uint32)
        VLDR_ac_DW.StatusByte_CT_SnsrCktLo) & 64U) == 0U));

    /* Logic: '<S1109>/Logical Operator' incorporates:
     *  Constant: '<S1109>/Constant1'
     *  Constant: '<S1109>/Constant2'
     *  DataStoreRead: '<S1109>/StatusByte_CT_SnsrPerf'
     */
    rtb_Logical1_pzo = (((((sint32)VLDR_ac_DW.StatusByte_CT_SnsrPerf) & 1) > 0) &&
                        ((((uint32)VLDR_ac_DW.StatusByte_CT_SnsrPerf) & 64U) ==
                         0U));

    /* Logic: '<S1110>/Logical Operator' incorporates:
     *  Constant: '<S1110>/Constant1'
     *  Constant: '<S1110>/Constant2'
     *  DataStoreRead: '<S1110>/StatusByte_CoolOutTempSnsCkt'
     */
    rtb_Logical2_fw = (((((sint32)VLDR_ac_DW.StatusByte_CoolOutTempSnsCkt) & 1) >
                        0) && ((((uint32)VLDR_ac_DW.StatusByte_CoolOutTempSnsCkt)
                         & 64U) == 0U));

    /* Logic: '<S1111>/Logical Operator' incorporates:
     *  Constant: '<S1111>/Constant1'
     *  Constant: '<S1111>/Constant2'
     *  DataStoreRead: '<S1111>/StatusByte_HB_CT_SnsrPerf'
     */
    rtb_VariantMergeForOutportDFI_o = (((((sint32)
        VLDR_ac_DW.StatusByte_HB_CT_SnsrPerf) & 1) > 0) && ((((uint32)
        VLDR_ac_DW.StatusByte_HB_CT_SnsrPerf) & 64U) == 0U));

    /* Logic: '<S1112>/Logical Operator' incorporates:
     *  Constant: '<S1112>/Constant1'
     *  Constant: '<S1112>/Constant2'
     *  DataStoreRead: '<S1112>/StatusByte_HybEvBatPacCoolCtrlVlvBStkOn'
     */
    rtb_Logical12_c5 = (((((sint32)VLDR_ac_DW.StatusByte_HybEvBatPacCoolCtr_d) &
                          1) > 0) && ((((uint32)
                           VLDR_ac_DW.StatusByte_HybEvBatPacCoolCtr_d) & 64U) ==
                         0U));

    /* Logic: '<S1113>/Logical Operator' incorporates:
     *  Constant: '<S1113>/Constant1'
     *  Constant: '<S1113>/Constant2'
     *  DataStoreRead: '<S1113>/StatusByte_LosCommBECM_A'
     */
    rtb_UnitDelay1_e = (((((sint32)VLDR_ac_DW.StatusByte_LosCommBECM_A) & 1) > 0)
                        && ((((uint32)VLDR_ac_DW.StatusByte_LosCommBECM_A) & 64U)
                            == 0U));

    /* Logic: '<S1114>/Logical Operator' incorporates:
     *  Constant: '<S1114>/Constant1'
     *  Constant: '<S1114>/Constant2'
     *  DataStoreRead: '<S1114>/StatusByte_MtrElect_CT_SnsrCktHi'
     */
    rtb_Logical12_f3 = (((((sint32)VLDR_ac_DW.StatusByte_MtrElect_CT_SnsrCktH) &
                          1) > 0) && ((((uint32)
                           VLDR_ac_DW.StatusByte_MtrElect_CT_SnsrCktH) & 64U) ==
                         0U));

    /* Logic: '<S1115>/Logical Operator' incorporates:
     *  Constant: '<S1115>/Constant1'
     *  Constant: '<S1115>/Constant2'
     *  DataStoreRead: '<S1115>/StatusByte_MtrElect_CT_SnsrCktLo'
     */
    rtb_Comparison4_i = (((((sint32)VLDR_ac_DW.StatusByte_MtrElect_CT_SnsrCktL)
                           & 1) > 0) && ((((uint32)
                            VLDR_ac_DW.StatusByte_MtrElect_CT_SnsrCktL) & 64U) ==
                          0U));

    /* Logic: '<S1116>/Logical Operator' incorporates:
     *  Constant: '<S1116>/Constant1'
     *  Constant: '<S1116>/Constant2'
     *  DataStoreRead: '<S1116>/StatusByte_MtrElect_CT_SnsrPerf'
     */
    rtb_TmpSignalConversionAtVeTHDR = (((((sint32)
        VLDR_ac_DW.StatusByte_MtrElect_CT_SnsrPerf) & 1) > 0) && ((((uint32)
        VLDR_ac_DW.StatusByte_MtrElect_CT_SnsrPerf) & 64U) == 0U));
    (void)Rte_Read_VeTHDR_b_PPCTIS_FltDtct_Value(&rtb_Logical24_pk);
    (void)Rte_Read_VeBRDR_b_HV_BTOS_FltDtct_Value(&rtb_NOT4);
    (void)Rte_Read_VeBRDR_b_HV_BTIS_FltDtct_Value(&rtb_Logical2_nq);
    (void)Rte_Read_VeTRIR_b_HV_BatClntTmp_Out_FA_Value(&rtb_OR1_dx);
    (void)Rte_Read_VeTRIR_b_HV_BatClntTmp_In_FA_Value(&rtb_AND_ck);

    /* Outputs for Enabled SubSystem: '<S4>/LTSOV_Diagnostics' incorporates:
     *  EnablePort: '<S18>/Enable'
     */

    /* Logic: '<S1217>/Logical2' incorporates:
     *  Constant: '<S1222>/KeVLDR_b_LTSOV_BTIS_BTOS_Ovrd'
     *  Inport: '<Root>/VeBRDR_b_HV_BTIS_FltDtct'
     *  Inport: '<Root>/VeBRDR_b_HV_BTOS_FltDtct'
     *  Inport: '<Root>/VeTHDR_b_PPCTIS_FltDtct'
     *  Inport: '<Root>/VeTRIR_b_HV_BatClntTmp_In_FA'
     *  Inport: '<Root>/VeTRIR_b_HV_BatClntTmp_Out_FA'
     *  Logic: '<S1217>/Logical1'
     *  Logic: '<S1217>/Logical11'
     *  Logic: '<S1217>/Logical23'
     *  Logic: '<S1217>/Logical25'
     *  Logic: '<S1217>/Logical7'
     *  Logic: '<S1217>/Logical8'
     *  Logic: '<S1217>/Logical9'
     */
    rtb_Logical2_nq = ((((!rtb_AND_ck) && (!rtb_Logical2_nq)) && ((!rtb_OR1_dx) &&
                         (!rtb_NOT4))) || (KeVLDR_b_LTSOV_BTIS_BTOS_Ovrd));

    /* Logic: '<S1218>/NOT4' */
    rtb_NOT4 = (rtb_VM_Conditional_Signal_DsblD ||
                rtb_VM_Conditional_Signal_PostC);

    /* Switch: '<S1221>/Switch' incorporates:
     *  Constant: '<S1317>/KeVLDR_b_LTSOV_PECTOS_Enb'
     *  Inport: '<Root>/VeTMIR_T_OnBrdChrg_ClntTmpIn'
     *  Logic: '<S1221>/Logical'
     *  Logic: '<S1221>/Logical1'
     */
    if ((KeVLDR_b_LTSOV_PECTOS_Enb) && (rtb_Logical24_pk || (VLDR_ac_B.Switch16)))
    {
        (void)Rte_Read_VeTMIR_T_OnBrdChrg_ClntTmpIn_Value(&rtb_Switch1_mp);

        /* Switch: '<S1221>/Switch' incorporates:
         *  Constant: '<S1316>/KeVLDR_T_PECTOS_PPCTIS_Delta'
         *  Inport: '<Root>/VeTMIR_T_OnBrdChrg_ClntTmpIn'
         *  Sum: '<S1221>/Sum2'
         */
        VeVLDR_T_ClntTmp = rtb_Switch1_mp - KeVLDR_T_PECTOS_PPCTIS_Delta;
    }
    else
    {
        /* Switch: '<S1221>/Switch' incorporates:
         *  Inport: '<Root>/VeTMIR_T_PsvPmpClnt_TmpIn'
         */
        (void)Rte_Read_VeTMIR_T_PsvPmpClnt_TmpIn_Value((&(VeVLDR_T_ClntTmp)));
    }

    /* End of Switch: '<S1221>/Switch' */

    /* Abs: '<S1221>/Abs' incorporates:
     *  Sum: '<S1221>/Sum'
     */
    VeVLDR_T_Diff_BTIS_ClntTmp = fabsf(VeVLDR_T_ClntTmp -
        rtb_TmpSignalConversionAtVeTR_a);

    /* S-Function (fcgen): '<S18>/Function-Call Generator' incorporates:
     *  SubSystem: '<S18>/LTSOV_StuckOn'
     */
    /* Logic: '<S1269>/Logical24' incorporates:
     *  Constant: '<S1281>/HeVLDR_b_LTSOV_ON'
     *  RelationalOperator: '<S1269>/Comparison5'
     *  UnitDelay: '<S1269>/Unit Delay3'
     */
    rtb_Logical24_pk = ((rtb_TmpSignalConversionAtVeRC_e == HeVLDR_b_LTSOV_ON) ||
                        (VLDR_ac_DW.UnitDelay3_DSTATE_j));

    /* Outputs for Atomic SubSystem: '<S1269>/Signal Latch On With Reset' */
    /* Logic: '<S1294>/OR1' incorporates:
     *  Constant: '<S1280>/HeVLDR_b_LTSOV_OFF'
     *  Constant: '<S1281>/HeVLDR_b_LTSOV_ON'
     *  Logic: '<S1269>/Logical22'
     *  Logic: '<S1294>/NOT'
     *  Logic: '<S1294>/OR'
     *  RelationalOperator: '<S1269>/Comparison2'
     *  RelationalOperator: '<S1269>/Comparison4'
     *  UnitDelay: '<S1269>/Unit Delay2'
     *  UnitDelay: '<S1294>/Unit Delay'
     */
    rtb_OR1_dx = (((rtb_TmpSignalConversionAtVeRC_e == HeVLDR_b_LTSOV_OFF) &&
                   (VLDR_ac_DW.UnitDelay2_DSTATE_h == HeVLDR_b_LTSOV_ON)) ||
                  ((!rtb_Logical24_pk) && (VLDR_ac_DW.UnitDelay_DSTATE_erv)));

    /* Update for UnitDelay: '<S1294>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_erv = rtb_OR1_dx;

    /* End of Outputs for SubSystem: '<S1269>/Signal Latch On With Reset' */

    /* Switch: '<S1295>/Switch1' incorporates:
     *  Switch: '<S1295>/Switch2'
     */
    if (rtb_Logical24_pk)
    {
        /* Switch: '<S1295>/Switch1' incorporates:
         *  Constant: '<S1295>/InitValue'
         */
        rtb_Switch1_mp = 0.0F;
    }
    else
    {
        if (rtb_OR1_dx)
        {
            /* Switch: '<S1295>/Switch2' incorporates:
             *  Constant: '<S18>/TaskTime_0_025s'
             */
            rtb_TmpSignalConversionAtVeRCVR = 0.025F;
        }
        else
        {
            /* Switch: '<S1295>/Switch2' incorporates:
             *  Constant: '<S1295>/InitValue1'
             */
            rtb_TmpSignalConversionAtVeRCVR = 0.0F;
        }

        /* Switch: '<S1295>/Switch1' incorporates:
         *  Sum: '<S1295>/Subtraction'
         *  UnitDelay: '<S1295>/Unit Delay'
         */
        rtb_Switch1_mp = rtb_TmpSignalConversionAtVeRCVR +
            VLDR_ac_DW.UnitDelay_DSTATE_d5;
    }

    /* End of Switch: '<S1295>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S18>/Function-Call Generator' */
    (void)Rte_Read_VePMIR_n_LTPsvPump2RPMAct_Value(&rtb_Switch1_mh);

    /* S-Function (fcgen): '<S18>/Function-Call Generator' incorporates:
     *  SubSystem: '<S18>/LTSOV_StuckOn'
     */
    /* RelationalOperator: '<S1295>/Greater  Than1' incorporates:
     *  Constant: '<S1292>/KeVLDR_t_StkOn_CntrTime1'
     *  Inport: '<Root>/VePMIR_n_LTPsvPump2RPMAct'
     */
    VeVLDR_b_WaitTimeEnable_StkOn = (rtb_Switch1_mp > KeVLDR_t_StkOn_CntrTime1);

    /* End of Outputs for S-Function (fcgen): '<S18>/Function-Call Generator' */

    /* S-Function (fcgen): '<S18>/Function-Call Generator' incorporates:
     *  SubSystem: '<S18>/LTSOV_StuckOff'
     */
    /* S-Function (sfix_bitop): '<S1277>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S1277>/StatusByte_HybEvBatPacCoolCtrlVlv2CtrlCktLo'
     *  S-Function (sfix_bitop): '<S1231>/Bitwise Operator2'
     */
    rtb_VariantMergeForOutportDFI_0 = ((sint32)
        VLDR_ac_DW.StatusByte_HybEvBatPacCoolCtr_p) & 1;

    /* S-Function (sfix_bitop): '<S1277>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S1277>/StatusByte_HybEvBatPacCoolCtrlVlv2CtrlCktLo'
     *  S-Function (sfix_bitop): '<S1231>/Bitwise Operator1'
     */
    tmpRead_f = ((uint32)VLDR_ac_DW.StatusByte_HybEvBatPacCoolCtr_p) & 64U;

    /* S-Function (sfix_bitop): '<S1276>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S1276>/StatusByte_HybEvBatPacCoolCtrlVlv2CtrlCktHi'
     *  S-Function (sfix_bitop): '<S1230>/Bitwise Operator2'
     */
    rtb_VariantMergeForOutportDFI_1 = ((sint32)
        VLDR_ac_DW.StatusByte_HybEvBatPacCoolCtrlV) & 1;

    /* S-Function (sfix_bitop): '<S1276>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S1276>/StatusByte_HybEvBatPacCoolCtrlVlv2CtrlCktHi'
     *  S-Function (sfix_bitop): '<S1230>/Bitwise Operator1'
     */
    rtb_UnitDelay_ly_tmp = ((uint32)VLDR_ac_DW.StatusByte_HybEvBatPacCoolCtrlV)
        & 64U;

    /* S-Function (sfix_bitop): '<S1275>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S1275>/StatusByte_CommBusOff'
     *  S-Function (sfix_bitop): '<S1229>/Bitwise Operator2'
     */
    rtb_VariantMergeForOutportDFI_3 = ((sint32)VLDR_ac_DW.StatusByte_CommBusOff)
        & 1;

    /* S-Function (sfix_bitop): '<S1275>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S1275>/StatusByte_CommBusOff'
     *  S-Function (sfix_bitop): '<S1229>/Bitwise Operator1'
     */
    rtb_VariantMergeForOutportDFI_2 = ((uint32)VLDR_ac_DW.StatusByte_CommBusOff)
        & 64U;

    /* S-Function (sfix_bitop): '<S1279>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S1279>/StatusByte_MtrElect_CoolPumBCtrlPerf'
     *  S-Function (sfix_bitop): '<S1233>/Bitwise Operator2'
     */
    rtb_Comparison4_mj_tmp_0 = ((sint32)
        VLDR_ac_DW.StatusByte_MtrElect_CoolPumBCtr) & 1;

    /* S-Function (sfix_bitop): '<S1279>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S1279>/StatusByte_MtrElect_CoolPumBCtrlPerf'
     *  S-Function (sfix_bitop): '<S1233>/Bitwise Operator1'
     */
    rtb_VariantMergeForOutportDFI_4 = ((uint32)
        VLDR_ac_DW.StatusByte_MtrElect_CoolPumBCtr) & 64U;

    /* Logic: '<S1269>/Logical11' incorporates:
     *  Constant: '<S1275>/Constant1'
     *  Constant: '<S1275>/Constant2'
     *  Constant: '<S1276>/Constant1'
     *  Constant: '<S1276>/Constant2'
     *  Constant: '<S1277>/Constant1'
     *  Constant: '<S1277>/Constant2'
     *  Constant: '<S1279>/Constant1'
     *  Constant: '<S1279>/Constant2'
     *  Constant: '<S1285>/KeVLDR_b_LTSOV_StckOn_CANBusOff_Ovrd'
     *  Constant: '<S1286>/KeVLDR_b_LTSOV_StkOn_CirHigh_Ovrd'
     *  Constant: '<S1287>/KeVLDR_b_LTSOV_StkOn_CirLow_Ovrd'
     *  Constant: '<S1288>/KeVLDR_b_LTSOV_StkOn_CoolPumB_perf_Ovrd'
     *  Logic: '<S1269>/Logical16'
     *  Logic: '<S1269>/Logical17'
     *  Logic: '<S1269>/Logical2'
     *  Logic: '<S1269>/Logical3'
     *  Logic: '<S1269>/Logical4'
     *  Logic: '<S1269>/Logical5'
     *  Logic: '<S1269>/Logical7'
     *  Logic: '<S1269>/Logical8'
     *  Logic: '<S1275>/Logical Operator'
     *  Logic: '<S1276>/Logical Operator'
     *  Logic: '<S1277>/Logical Operator'
     *  Logic: '<S1279>/Logical Operator'
     *  RelationalOperator: '<S1275>/Relational Operator1'
     *  RelationalOperator: '<S1275>/Relational Operator2'
     *  RelationalOperator: '<S1276>/Relational Operator1'
     *  RelationalOperator: '<S1276>/Relational Operator2'
     *  RelationalOperator: '<S1277>/Relational Operator1'
     *  RelationalOperator: '<S1277>/Relational Operator2'
     *  RelationalOperator: '<S1279>/Relational Operator1'
     *  RelationalOperator: '<S1279>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S1275>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1275>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1276>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1276>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1277>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1277>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1279>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1279>/Bitwise Operator2'
     */
    rtb_UnitDelay_lwd = ((((((rtb_VariantMergeForOutportDFI_0 <= 0) ||
        (tmpRead_f != 0U)) || (KeVLDR_b_LTSOV_StkOn_CirLow_Ovrd)) &&
                           (((rtb_VariantMergeForOutportDFI_1 <= 0) ||
        (rtb_UnitDelay_ly_tmp != 0U)) || (KeVLDR_b_LTSOV_StkOn_CirHigh_Ovrd))) &&
                          (((rtb_VariantMergeForOutportDFI_3 <= 0) ||
                            (rtb_VariantMergeForOutportDFI_2 != 0U)) ||
                           (KeVLDR_b_LTSOV_StckOn_CANBusOff_Ovrd))) &&
                         (((rtb_Comparison4_mj_tmp_0 <= 0) ||
                           (rtb_VariantMergeForOutportDFI_4 != 0U)) ||
                          (KeVLDR_b_LTSOV_StkOn_CoolPumB_perf_Ovrd)));

    /* End of Outputs for S-Function (fcgen): '<S18>/Function-Call Generator' */

    /* S-Function (fcgen): '<S18>/Function-Call Generator' incorporates:
     *  SubSystem: '<S18>/LTSOV_StuckOff'
     */
    /* Logic: '<S1269>/Logical13' incorporates:
     *  Logic: '<S1223>/Logical13'
     */
    rtb_AND_po = !VLDR_ac_B.Switch16;

    /* Logic: '<S1269>/Logical14' incorporates:
     *  Logic: '<S1223>/Logical14'
     */
    rtb_TmpSignalConversionAtVeTMIR = !VLDR_ac_B.Switch17;

    /* Logic: '<S1269>/Logical6' incorporates:
     *  Constant: '<S1274>/Constant1'
     *  Constant: '<S1274>/Constant2'
     *  Constant: '<S1278>/Constant1'
     *  Constant: '<S1278>/Constant2'
     *  Constant: '<S1282>/KeVLDR_U_SysVltLwrLim'
     *  Constant: '<S1283>/KeVLDR_U_SysVltUprLim'
     *  Constant: '<S1284>/KeVLDR_b_LTSOV_PECTOS_Enb'
     *  Constant: '<S1289>/KeVLDR_b_LTSOV_StkOn_LTPP2_ChkEnbl_Ovrd'
     *  Constant: '<S1290>/KeVLDR_b_LTSOV_StkOn_StkOff_Ovrd'
     *  Constant: '<S1291>/KeVLDR_n_LTSOV_StkOn_LTPP2_MinSpd'
     *  DataStoreRead: '<S1274>/StatusByte_CT_SnsrPerf'
     *  DataStoreRead: '<S1278>/StatusByte_MtrElect_CT_SnsrPerf'
     *  Logic: '<S1269>/Logical1'
     *  Logic: '<S1269>/Logical10'
     *  Logic: '<S1269>/Logical12'
     *  Logic: '<S1269>/Logical13'
     *  Logic: '<S1269>/Logical14'
     *  Logic: '<S1269>/Logical15'
     *  Logic: '<S1269>/Logical18'
     *  Logic: '<S1269>/Logical19'
     *  Logic: '<S1269>/Logical20'
     *  Logic: '<S1269>/Logical21'
     *  Logic: '<S1269>/Logical9'
     *  Logic: '<S1274>/Logical Operator'
     *  Logic: '<S1278>/Logical Operator'
     *  RelationalOperator: '<S1269>/Comparison1'
     *  RelationalOperator: '<S1269>/Comparison3'
     *  RelationalOperator: '<S1269>/Comparison6'
     *  RelationalOperator: '<S1274>/Relational Operator1'
     *  RelationalOperator: '<S1274>/Relational Operator2'
     *  RelationalOperator: '<S1278>/Relational Operator1'
     *  RelationalOperator: '<S1278>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S1274>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1274>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1278>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1278>/Bitwise Operator2'
     */
    VeVLDR_b_LTSOV_StkOn_Diag_En = ((((((((((rtb_VM_Conditional_Signal_BF1_S <
        KeVLDR_U_SysVltUprLim) && (rtb_VM_Conditional_Signal_BF1_S >
        KeVLDR_U_SysVltLwrLim)) && (VeVLDR_b_WaitTimeEnable_StkOn)) &&
        (((((((sint32)VLDR_ac_DW.StatusByte_MtrElect_CT_SnsrPerf) & 1) <= 0) ||
           ((((uint32)VLDR_ac_DW.StatusByte_MtrElect_CT_SnsrPerf) & 64U) != 0U))
          && rtb_AND_po) || (((((((sint32)VLDR_ac_DW.StatusByte_CT_SnsrPerf) & 1)
        <= 0) || ((((uint32)VLDR_ac_DW.StatusByte_CT_SnsrPerf) & 64U) != 0U)) &&
        rtb_TmpSignalConversionAtVeTMIR) && (KeVLDR_b_LTSOV_PECTOS_Enb)))) && ((
        !VLDR_ac_B.RelationalOperator) || (KeVLDR_b_LTSOV_StkOn_StkOff_Ovrd))) &&
        rtb_Logical2_nq) && (rtb_TmpSignalConversionAtVeCPDR ||
        (KeVLDR_b_LTSOV_StkOn_LTPP2_ChkEnbl_Ovrd))) && (rtb_Switch1_mh >
        KeVLDR_n_LTSOV_StkOn_LTPP2_MinSpd)) && rtb_UnitDelay_lwd) &&
        rtb_TmpSignalConversionAtVeDFIR);

    /* RelationalOperator: '<S1301>/Relational Operator3' incorporates:
     *  Constant: '<S1301>/Constant3'
     *  DataStoreRead: '<S1271>/Data Store Read2'
     *  S-Function (sfix_bitop): '<S1301>/Bitwise Operator2'
     */
    rtb_OR1_dx = ((((uint32)VLDR_ac_DW.StatusByte_HybEvBatPacCoolCtr_d) & 64U) ==
                  0U);

    /* Outputs for Atomic SubSystem: '<S1301>/EdgeFalling1' */
    /* Logic: '<S1301>/Logical Operator' incorporates:
     *  Logic: '<S1303>/OR1'
     */
    rtb_AND_ck = !rtb_OR1_dx;

    /* End of Outputs for SubSystem: '<S1301>/EdgeFalling1' */

    /* Logic: '<S1301>/Logical1' incorporates:
     *  Constant: '<S1299>/Calib'
     *  Constant: '<S1300>/KeVLDR_b_LTSOV_StkOn_XYEnbl'
     *  Constant: '<S1301>/Constant1'
     *  DataStoreRead: '<S1271>/Data Store Read2'
     *  Logic: '<S1271>/AND1'
     *  Logic: '<S1301>/Logical Operator'
     *  Logic: '<S1301>/Logical10'
     *  Logic: '<S1301>/Logical12'
     *  RelationalOperator: '<S1301>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S1301>/Bitwise Operator3'
     */
    rtb_Logical24_pk = (((VeVLDR_b_LTSOV_StkOn_Diag_En) &&
                         (KeVLDR_b_LTSOV_StkOn_XYEnbl)) &&
                        ((!KeVLDR_b_HybEvBatPacCoolCtrlVlvBStkOn_LtchEnbl) ||
                         (((((uint32)VLDR_ac_DW.StatusByte_HybEvBatPacCoolCtr_d)
                            & 1U) == 0U) || rtb_AND_ck)));

    /* Outputs for Atomic SubSystem: '<S1301>/EdgeFalling1' */
    /* Logic: '<S1303>/AND' incorporates:
     *  UnitDelay: '<S1303>/Unit Delay'
     */
    rtb_AND_ck = (rtb_AND_ck && (VLDR_ac_DW.UnitDelay_DSTATE_kr));

    /* Update for UnitDelay: '<S1303>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_kr = rtb_OR1_dx;

    /* End of Outputs for SubSystem: '<S1301>/EdgeFalling1' */

    /* Logic: '<S1301>/Logical5' */
    rtb_OR1_dx = (rtb_NOT4 || rtb_AND_ck);

    /* Logic: '<S1302>/Fail Counter Reset' incorporates:
     *  UnitDelay: '<S1302>/Unit Delay'
     *  UnitDelay: '<S1302>/Unit Delay1'
     */
    rtb_AND_ck = ((rtb_OR1_dx || (VLDR_ac_DW.UnitDelay_DSTATE_bm)) ||
                  (VLDR_ac_DW.UnitDelay1_DSTATE_f));

    /* Outputs for Atomic SubSystem: '<S1302>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S1302>/Counter Reset  Enabled ' */
    /* Switch: '<S1309>/Switch1' incorporates:
     *  Constant: '<S1296>/KeVLDR_T_BTIS_ClntTmp_StkOn_DiffLim'
     *  Logic: '<S1302>/NOT6'
     *  RelationalOperator: '<S1270>/Comparison2'
     *  Switch: '<S1309>/Switch2'
     *  Switch: '<S1310>/Switch1'
     */
    if (rtb_AND_ck)
    {
        /* Switch: '<S1309>/Switch1' incorporates:
         *  Constant: '<S1309>/Constant Value2'
         */
        VeVLDR_Cnt_LTSOV_StkOn_FailCnt = 0U;

        /* Switch: '<S1310>/Switch1' incorporates:
         *  Constant: '<S1310>/Constant Value2'
         */
        VeVLDR_Cnt_LTSOV_StkOn_SmpCnt = 0U;
    }
    else
    {
        if (rtb_Logical24_pk && (VeVLDR_T_Diff_BTIS_ClntTmp >
                                 KeVLDR_T_BTIS_ClntTmp_StkOn_DiffLim))
        {
            /* Switch: '<S1309>/Switch2' incorporates:
             *  Constant: '<S1309>/Constant Value1'
             *  Sum: '<S1309>/Subtraction'
             *  Switch: '<S1309>/Switch1'
             *  UnitDelay: '<S1309>/Unit Delay'
             */
            VeVLDR_Cnt_LTSOV_StkOn_FailCnt = (uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_axf) + 1U);
        }
        else
        {
            /* Switch: '<S1309>/Switch1' incorporates:
             *  Switch: '<S1309>/Switch2'
             *  UnitDelay: '<S1309>/Unit Delay'
             */
            VeVLDR_Cnt_LTSOV_StkOn_FailCnt = VLDR_ac_DW.UnitDelay_DSTATE_axf;
        }

        /* Switch: '<S1310>/Switch2' */
        if (rtb_Logical24_pk)
        {
            /* Switch: '<S1310>/Switch1' incorporates:
             *  Constant: '<S1310>/Constant Value1'
             *  Sum: '<S1310>/Subtraction'
             *  Switch: '<S1310>/Switch2'
             *  UnitDelay: '<S1310>/Unit Delay'
             */
            VeVLDR_Cnt_LTSOV_StkOn_SmpCnt = (uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_al) + 1U);
        }
        else
        {
            /* Switch: '<S1310>/Switch1' incorporates:
             *  Switch: '<S1310>/Switch2'
             *  UnitDelay: '<S1310>/Unit Delay'
             */
            VeVLDR_Cnt_LTSOV_StkOn_SmpCnt = VLDR_ac_DW.UnitDelay_DSTATE_al;
        }

        /* End of Switch: '<S1310>/Switch2' */
    }

    /* End of Switch: '<S1309>/Switch1' */
    /* End of Outputs for SubSystem: '<S1302>/Counter Reset  Enabled 1' */

    /* Update for UnitDelay: '<S1309>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_axf = VeVLDR_Cnt_LTSOV_StkOn_FailCnt;

    /* End of Outputs for SubSystem: '<S1302>/Counter Reset  Enabled ' */

    /* Outputs for Atomic SubSystem: '<S1302>/Counter Reset  Enabled 1' */
    /* Update for UnitDelay: '<S1310>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_al = VeVLDR_Cnt_LTSOV_StkOn_SmpCnt;

    /* End of Outputs for SubSystem: '<S1302>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S1302>/Greater Than or Equal ' incorporates:
     *  Constant: '<S1297>/KeVLDR_Cnt_LTSOV_StkOn_FailCnt'
     */
    rtb_Logical24_pk = (VeVLDR_Cnt_LTSOV_StkOn_FailCnt >=
                        KeVLDR_Cnt_LTSOV_StkOn_FailCnt);

    /* Logic: '<S1302>/NOT5' incorporates:
     *  Constant: '<S1298>/KeVLDR_Cnt_LTSOV_StkOn_SmpCnt'
     *  Logic: '<S1302>/NOT3'
     *  RelationalOperator: '<S1302>/Less Than  or Equal'
     */
    rtb_AND_ck = ((VeVLDR_Cnt_LTSOV_StkOn_SmpCnt >=
                   KeVLDR_Cnt_LTSOV_StkOn_SmpCnt) && (!rtb_Logical24_pk));

    /* Switch: '<S1315>/Switch1' incorporates:
     *  Constant: '<S1308>/Constant Value'
     *  DataStoreWrite: '<S1271>/Data Store Write'
     *  Switch: '<S1314>/Switch1'
     */
    if (rtb_VM_Conditional_Signal_PostC)
    {
        VLDR_ac_DW.NeVLDR_Cnt_LTSOV_StkOn_MFOP = 0U;
    }
    else
    {
        if (rtb_AND_ck)
        {
            /* MinMax: '<S1308>/Minimum2' incorporates:
             *  DataStoreRead: '<S1271>/Data Store Read1'
             *  Switch: '<S1314>/Switch1'
             */
            if (VeVLDR_Cnt_LTSOV_StkOn_FailCnt >
                    VLDR_ac_DW.NeVLDR_Cnt_LTSOV_StkOn_MFOP)
            {
                /* DataStoreWrite: '<S1271>/Data Store Write' incorporates:
                 *  Switch: '<S1314>/Switch1'
                 */
                VLDR_ac_DW.NeVLDR_Cnt_LTSOV_StkOn_MFOP =
                    VeVLDR_Cnt_LTSOV_StkOn_FailCnt;
            }

            /* End of MinMax: '<S1308>/Minimum2' */
        }
    }

    /* End of Switch: '<S1315>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S1301>/Fail' */
    VLDR_ac_Fail(rtb_Logical24_pk, &VLDR_ac_B.Merge_n);

    /* End of Outputs for SubSystem: '<S1301>/Fail' */

    /* Outputs for Enabled SubSystem: '<S1301>/Init' */
    VLDR_ac_Init_a(rtb_OR1_dx, &VLDR_ac_B.Merge_n);

    /* End of Outputs for SubSystem: '<S1301>/Init' */

    /* Outputs for Enabled SubSystem: '<S1301>/Pass' */
    VLDR_ac_Pass(rtb_AND_ck, &VLDR_ac_B.Merge_n);

    /* End of Outputs for SubSystem: '<S1301>/Pass' */

    /* RelationalOperator: '<S1295>/Greater  Than2' incorporates:
     *  Constant: '<S1293>/KeVLDR_t_StkOn_CntrTime2'
     */
    rtb_OR1_dx = (rtb_Switch1_mp > KeVLDR_t_StkOn_CntrTime2);

    /* RelationalOperator: '<S1269>/Relational Operator2' incorporates:
     *  Merge: '<S1301>/Merge'
     *  RelationalOperator: '<S1269>/Relational Operator1'
     *  RelationalOperator: '<S1301>/Relational Operator'
     */
    VariantMergeForOutportEEXV_Pr_k = VLDR_ac_B.Merge_n;

    /* Update for UnitDelay: '<S1269>/Unit Delay3' incorporates:
     *  Constant: '<S1272>/Constant'
     *  Constant: '<S1273>/Constant'
     *  Logic: '<S1269>/Logical32'
     *  Logic: '<S1269>/Logical38'
     *  RelationalOperator: '<S1269>/Relational Operator1'
     *  RelationalOperator: '<S1269>/Relational Operator2'
     */
    VLDR_ac_DW.UnitDelay3_DSTATE_j = (((((uint32)VariantMergeForOutportEEXV_Pr_k)
        == CeDFIB_e_Pass) || (((uint32)VariantMergeForOutportEEXV_Pr_k) ==
        CeDFIB_e_Fail)) || rtb_OR1_dx);

    /* Update for UnitDelay: '<S1269>/Unit Delay2' */
    VLDR_ac_DW.UnitDelay2_DSTATE_h = rtb_TmpSignalConversionAtVeRC_e;

    /* Switch: '<S1295>/Switch3' */
    if (rtb_OR1_dx)
    {
        /* Update for UnitDelay: '<S1295>/Unit Delay' incorporates:
         *  Constant: '<S1293>/KeVLDR_t_StkOn_CntrTime2'
         */
        VLDR_ac_DW.UnitDelay_DSTATE_d5 = KeVLDR_t_StkOn_CntrTime2;
    }
    else
    {
        /* Update for UnitDelay: '<S1295>/Unit Delay' */
        VLDR_ac_DW.UnitDelay_DSTATE_d5 = rtb_Switch1_mp;
    }

    /* End of Switch: '<S1295>/Switch3' */

    /* Update for UnitDelay: '<S1302>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_bm = rtb_AND_ck;

    /* Update for UnitDelay: '<S1302>/Unit Delay1' */
    VLDR_ac_DW.UnitDelay1_DSTATE_f = rtb_Logical24_pk;

    /* S-Function (fcgen): '<S18>/Function-Call Generator' incorporates:
     *  SubSystem: '<S18>/LTSOV_StuckOff'
     */
    /* Logic: '<S1223>/Logical24' incorporates:
     *  Constant: '<S1234>/HeVLDR_b_LTSOV_OFF'
     *  RelationalOperator: '<S1223>/Comparison4'
     *  UnitDelay: '<S1223>/Unit Delay1'
     */
    rtb_Logical24_pk = ((rtb_TmpSignalConversionAtVeRC_e == HeVLDR_b_LTSOV_OFF) ||
                        (VLDR_ac_DW.UnitDelay1_DSTATE_pv));

    /* Outputs for Atomic SubSystem: '<S1223>/Signal Latch On With Reset' */
    /* Logic: '<S1247>/OR1' incorporates:
     *  Constant: '<S1234>/HeVLDR_b_LTSOV_OFF'
     *  Constant: '<S1235>/HeVLDR_b_LTSOV_ON'
     *  Logic: '<S1223>/Logical22'
     *  Logic: '<S1247>/NOT'
     *  Logic: '<S1247>/OR'
     *  RelationalOperator: '<S1223>/Comparison2'
     *  RelationalOperator: '<S1223>/Comparison9'
     *  UnitDelay: '<S1223>/Unit Delay2'
     *  UnitDelay: '<S1247>/Unit Delay'
     */
    rtb_OR1_dx = (((rtb_TmpSignalConversionAtVeRC_e == HeVLDR_b_LTSOV_ON) &&
                   (VLDR_ac_DW.UnitDelay2_DSTATE == HeVLDR_b_LTSOV_OFF)) ||
                  ((!rtb_Logical24_pk) && (VLDR_ac_DW.UnitDelay_DSTATE_n0)));

    /* Update for UnitDelay: '<S1247>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_n0 = rtb_OR1_dx;

    /* End of Outputs for SubSystem: '<S1223>/Signal Latch On With Reset' */

    /* Switch: '<S1248>/Switch1' incorporates:
     *  Switch: '<S1248>/Switch2'
     */
    if (rtb_Logical24_pk)
    {
        /* Switch: '<S1248>/Switch1' incorporates:
         *  Constant: '<S1248>/InitValue'
         */
        rtb_Switch1_mh = 0.0F;
    }
    else
    {
        if (rtb_OR1_dx)
        {
            /* Switch: '<S1248>/Switch2' incorporates:
             *  Constant: '<S18>/TaskTime_0_025s'
             */
            rtb_TmpSignalConversionAtVeRCVR = 0.025F;
        }
        else
        {
            /* Switch: '<S1248>/Switch2' incorporates:
             *  Constant: '<S1248>/InitValue1'
             */
            rtb_TmpSignalConversionAtVeRCVR = 0.0F;
        }

        /* Switch: '<S1248>/Switch1' incorporates:
         *  Sum: '<S1248>/Subtraction'
         *  UnitDelay: '<S1248>/Unit Delay'
         */
        rtb_Switch1_mh = rtb_TmpSignalConversionAtVeRCVR +
            VLDR_ac_DW.UnitDelay_DSTATE_dj;
    }

    /* End of Switch: '<S1248>/Switch1' */

    /* RelationalOperator: '<S1248>/Greater  Than1' incorporates:
     *  Constant: '<S1245>/KeVLDR_t_StkOff_CntrTime1'
     */
    VeVLDR_b_WaitTimeEnable_StkOff = (rtb_Switch1_mh > KeVLDR_t_StkOff_CntrTime1);

    /* Logic: '<S1223>/Logical11' incorporates:
     *  Constant: '<S1229>/Constant1'
     *  Constant: '<S1229>/Constant2'
     *  Constant: '<S1230>/Constant1'
     *  Constant: '<S1230>/Constant2'
     *  Constant: '<S1231>/Constant1'
     *  Constant: '<S1231>/Constant2'
     *  Constant: '<S1233>/Constant1'
     *  Constant: '<S1233>/Constant2'
     *  Constant: '<S1239>/KeVLDR_b_LTSOV_StckOff_CANBusOff_Ovrd'
     *  Constant: '<S1240>/KeVLDR_b_LTSOV_StkOff_CirHigh_Ovrd'
     *  Constant: '<S1241>/KeVLDR_b_LTSOV_StkOff_CirLow_Ovrd'
     *  Constant: '<S1242>/KeVLDR_b_LTSOV_StkOff_CoolPumB_perf_Ovrd'
     *  Logic: '<S1223>/Logical16'
     *  Logic: '<S1223>/Logical17'
     *  Logic: '<S1223>/Logical2'
     *  Logic: '<S1223>/Logical3'
     *  Logic: '<S1223>/Logical4'
     *  Logic: '<S1223>/Logical5'
     *  Logic: '<S1223>/Logical7'
     *  Logic: '<S1223>/Logical8'
     *  Logic: '<S1229>/Logical Operator'
     *  Logic: '<S1230>/Logical Operator'
     *  Logic: '<S1231>/Logical Operator'
     *  Logic: '<S1233>/Logical Operator'
     *  RelationalOperator: '<S1229>/Relational Operator1'
     *  RelationalOperator: '<S1229>/Relational Operator2'
     *  RelationalOperator: '<S1230>/Relational Operator1'
     *  RelationalOperator: '<S1230>/Relational Operator2'
     *  RelationalOperator: '<S1231>/Relational Operator1'
     *  RelationalOperator: '<S1231>/Relational Operator2'
     *  RelationalOperator: '<S1233>/Relational Operator1'
     *  RelationalOperator: '<S1233>/Relational Operator2'
     */
    rtb_OR1_dx = ((((((rtb_VariantMergeForOutportDFI_0 <= 0) || (tmpRead_f != 0U))
                     || (KeVLDR_b_LTSOV_StkOff_CirLow_Ovrd)) &&
                    (((rtb_VariantMergeForOutportDFI_1 <= 0) ||
                      (rtb_UnitDelay_ly_tmp != 0U)) ||
                     (KeVLDR_b_LTSOV_StkOff_CirHigh_Ovrd))) &&
                   (((rtb_VariantMergeForOutportDFI_3 <= 0) ||
                     (rtb_VariantMergeForOutportDFI_2 != 0U)) ||
                    (KeVLDR_b_LTSOV_StckOff_CANBusOff_Ovrd))) &&
                  (((rtb_Comparison4_mj_tmp_0 <= 0) ||
                    (rtb_VariantMergeForOutportDFI_4 != 0U)) ||
                   (KeVLDR_b_LTSOV_StkOff_CoolPumB_perf_Ovrd)));

    /* End of Outputs for S-Function (fcgen): '<S18>/Function-Call Generator' */

    /* S-Function (fcgen): '<S18>/Function-Call Generator' incorporates:
     *  SubSystem: '<S18>/LTSOV_StuckOn'
     */
    /* Logic: '<S1223>/Logical6' incorporates:
     *  Constant: '<S1228>/Constant1'
     *  Constant: '<S1228>/Constant2'
     *  Constant: '<S1232>/Constant1'
     *  Constant: '<S1232>/Constant2'
     *  Constant: '<S1236>/KeVLDR_U_SysVltLwrLim'
     *  Constant: '<S1237>/KeVLDR_U_SysVltUprLim'
     *  Constant: '<S1238>/KeVLDR_b_LTSOV_PECTOS_Enb'
     *  Constant: '<S1243>/KeVLDR_b_LTSOV_StkOff_LTPP2_ChkEnbl_Ovrd'
     *  Constant: '<S1244>/KeVLDR_b_LTSOV_StkOff_StkOn_Ovrd'
     *  Constant: '<S1304>/Constant'
     *  DataStoreRead: '<S1228>/StatusByte_CT_SnsrPerf'
     *  DataStoreRead: '<S1232>/StatusByte_MtrElect_CT_SnsrPerf'
     *  Logic: '<S1223>/Logical1'
     *  Logic: '<S1223>/Logical10'
     *  Logic: '<S1223>/Logical12'
     *  Logic: '<S1223>/Logical15'
     *  Logic: '<S1223>/Logical18'
     *  Logic: '<S1223>/Logical19'
     *  Logic: '<S1223>/Logical20'
     *  Logic: '<S1223>/Logical21'
     *  Logic: '<S1223>/Logical9'
     *  Logic: '<S1228>/Logical Operator'
     *  Logic: '<S1232>/Logical Operator'
     *  RelationalOperator: '<S1223>/Comparison1'
     *  RelationalOperator: '<S1223>/Comparison3'
     *  RelationalOperator: '<S1228>/Relational Operator1'
     *  RelationalOperator: '<S1228>/Relational Operator2'
     *  RelationalOperator: '<S1232>/Relational Operator1'
     *  RelationalOperator: '<S1232>/Relational Operator2'
     *  RelationalOperator: '<S1301>/Relational Operator'
     *  S-Function (sfix_bitop): '<S1228>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1228>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1232>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1232>/Bitwise Operator2'
     */
    VeVLDR_b_LTSOV_StkOff_Diag_En = (((((((((rtb_VM_Conditional_Signal_BF1_S <
        KeVLDR_U_SysVltUprLim) && (rtb_VM_Conditional_Signal_BF1_S >
        KeVLDR_U_SysVltLwrLim)) && (VeVLDR_b_WaitTimeEnable_StkOff)) &&
        (((((((sint32)VLDR_ac_DW.StatusByte_MtrElect_CT_SnsrPerf) & 1) <= 0) ||
           ((((uint32)VLDR_ac_DW.StatusByte_MtrElect_CT_SnsrPerf) & 64U) != 0U))
          && rtb_AND_po) || (((((((sint32)VLDR_ac_DW.StatusByte_CT_SnsrPerf) & 1)
        <= 0) || ((((uint32)VLDR_ac_DW.StatusByte_CT_SnsrPerf) & 64U) != 0U)) &&
        rtb_TmpSignalConversionAtVeTMIR) && (KeVLDR_b_LTSOV_PECTOS_Enb)))) &&
        ((((uint32)VariantMergeForOutportEEXV_Pr_k) != CeDFIB_e_Fail) ||
         (KeVLDR_b_LTSOV_StkOff_StkOn_Ovrd))) && rtb_Logical2_nq) &&
        (rtb_TmpSignalConversionAtVeCPDR ||
         (KeVLDR_b_LTSOV_StkOff_LTPP2_ChkEnbl_Ovrd))) && rtb_OR1_dx) &&
        rtb_TmpSignalConversionAtVeDFIR);

    /* RelationalOperator: '<S1254>/Relational Operator3' incorporates:
     *  Constant: '<S1254>/Constant3'
     *  DataStoreRead: '<S1225>/Data Store Read2'
     *  S-Function (sfix_bitop): '<S1254>/Bitwise Operator2'
     */
    rtb_Logical24_pk = ((((uint32)VLDR_ac_DW.StatusByte_HybEvBatPacCoolCtr_n) &
                         64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S1254>/EdgeFalling1' */
    /* Logic: '<S1254>/Logical Operator' incorporates:
     *  Logic: '<S1256>/OR1'
     */
    rtb_Logical2_nq = !rtb_Logical24_pk;

    /* End of Outputs for SubSystem: '<S1254>/EdgeFalling1' */

    /* Logic: '<S1254>/Logical1' incorporates:
     *  Constant: '<S1252>/Calib'
     *  Constant: '<S1253>/KeVLDR_b_LTSOV_StkOff_XYEnbl'
     *  Constant: '<S1254>/Constant1'
     *  DataStoreRead: '<S1225>/Data Store Read2'
     *  Logic: '<S1225>/AND1'
     *  Logic: '<S1254>/Logical Operator'
     *  Logic: '<S1254>/Logical10'
     *  Logic: '<S1254>/Logical12'
     *  RelationalOperator: '<S1254>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S1254>/Bitwise Operator3'
     */
    rtb_TmpSignalConversionAtVeCPDR = (((VeVLDR_b_LTSOV_StkOff_Diag_En) &&
        (KeVLDR_b_LTSOV_StkOff_XYEnbl)) &&
        ((!KeVLDR_b_HybEvBatPacCoolCtrlVlvBPerfStkOff_LtchEnbl) || (((((uint32)
        VLDR_ac_DW.StatusByte_HybEvBatPacCoolCtr_n) & 1U) == 0U) ||
        rtb_Logical2_nq)));

    /* Outputs for Atomic SubSystem: '<S1254>/EdgeFalling1' */
    /* Logic: '<S1256>/AND' incorporates:
     *  UnitDelay: '<S1256>/Unit Delay'
     */
    rtb_Logical2_nq = (rtb_Logical2_nq && (VLDR_ac_DW.UnitDelay_DSTATE_co));

    /* Update for UnitDelay: '<S1256>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_co = rtb_Logical24_pk;

    /* End of Outputs for SubSystem: '<S1254>/EdgeFalling1' */

    /* Logic: '<S1254>/Logical5' */
    rtb_Logical24_pk = (rtb_NOT4 || rtb_Logical2_nq);

    /* Logic: '<S1255>/Fail Counter Reset' incorporates:
     *  UnitDelay: '<S1255>/Unit Delay'
     *  UnitDelay: '<S1255>/Unit Delay1'
     */
    rtb_NOT4 = ((rtb_Logical24_pk || (VLDR_ac_DW.UnitDelay_DSTATE_kfk)) ||
                (VLDR_ac_DW.UnitDelay1_DSTATE_ah));

    /* Outputs for Atomic SubSystem: '<S1255>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S1255>/Counter Reset  Enabled ' */
    /* Switch: '<S1262>/Switch1' incorporates:
     *  Constant: '<S1249>/KeVLDR_T_BTIS_ClntTmp_StkOff_DiffLim'
     *  Logic: '<S1255>/NOT6'
     *  RelationalOperator: '<S1224>/Comparison1'
     *  Switch: '<S1262>/Switch2'
     *  Switch: '<S1263>/Switch1'
     */
    if (rtb_NOT4)
    {
        /* Switch: '<S1262>/Switch1' incorporates:
         *  Constant: '<S1262>/Constant Value2'
         */
        VeVLDR_Cnt_LTSOV_StkOff_FailCnt = 0U;

        /* Switch: '<S1263>/Switch1' incorporates:
         *  Constant: '<S1263>/Constant Value2'
         */
        VeVLDR_Cnt_LTSOV_StkOff_SmpCnt = 0U;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeCPDR && (VeVLDR_T_Diff_BTIS_ClntTmp <=
                KeVLDR_T_BTIS_ClntTmp_StkOff_DiffLim))
        {
            /* Switch: '<S1262>/Switch2' incorporates:
             *  Constant: '<S1262>/Constant Value1'
             *  Sum: '<S1262>/Subtraction'
             *  Switch: '<S1262>/Switch1'
             *  UnitDelay: '<S1262>/Unit Delay'
             */
            VeVLDR_Cnt_LTSOV_StkOff_FailCnt = (uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_az) + 1U);
        }
        else
        {
            /* Switch: '<S1262>/Switch1' incorporates:
             *  Switch: '<S1262>/Switch2'
             *  UnitDelay: '<S1262>/Unit Delay'
             */
            VeVLDR_Cnt_LTSOV_StkOff_FailCnt = VLDR_ac_DW.UnitDelay_DSTATE_az;
        }

        /* Switch: '<S1263>/Switch2' */
        if (rtb_TmpSignalConversionAtVeCPDR)
        {
            /* Switch: '<S1263>/Switch1' incorporates:
             *  Constant: '<S1263>/Constant Value1'
             *  Sum: '<S1263>/Subtraction'
             *  Switch: '<S1263>/Switch2'
             *  UnitDelay: '<S1263>/Unit Delay'
             */
            VeVLDR_Cnt_LTSOV_StkOff_SmpCnt = (uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_or) + 1U);
        }
        else
        {
            /* Switch: '<S1263>/Switch1' incorporates:
             *  Switch: '<S1263>/Switch2'
             *  UnitDelay: '<S1263>/Unit Delay'
             */
            VeVLDR_Cnt_LTSOV_StkOff_SmpCnt = VLDR_ac_DW.UnitDelay_DSTATE_or;
        }

        /* End of Switch: '<S1263>/Switch2' */
    }

    /* End of Switch: '<S1262>/Switch1' */
    /* End of Outputs for SubSystem: '<S1255>/Counter Reset  Enabled 1' */

    /* Update for UnitDelay: '<S1262>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_az = VeVLDR_Cnt_LTSOV_StkOff_FailCnt;

    /* End of Outputs for SubSystem: '<S1255>/Counter Reset  Enabled ' */

    /* Outputs for Atomic SubSystem: '<S1255>/Counter Reset  Enabled 1' */
    /* Update for UnitDelay: '<S1263>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_or = VeVLDR_Cnt_LTSOV_StkOff_SmpCnt;

    /* End of Outputs for SubSystem: '<S1255>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S1255>/Greater Than or Equal ' incorporates:
     *  Constant: '<S1250>/KeVLDR_Cnt_LTSOV_StkOff_FailCnt'
     */
    rtb_TmpSignalConversionAtVeCPDR = (VeVLDR_Cnt_LTSOV_StkOff_FailCnt >=
        KeVLDR_Cnt_LTSOV_StkOff_FailCnt);

    /* Logic: '<S1255>/NOT5' incorporates:
     *  Constant: '<S1251>/KeVLDR_Cnt_LTSOV_StkOff_SmpCnt'
     *  Logic: '<S1255>/NOT3'
     *  RelationalOperator: '<S1255>/Less Than  or Equal'
     */
    rtb_NOT4 = ((VeVLDR_Cnt_LTSOV_StkOff_SmpCnt >=
                 KeVLDR_Cnt_LTSOV_StkOff_SmpCnt) &&
                (!rtb_TmpSignalConversionAtVeCPDR));

    /* Switch: '<S1268>/Switch1' incorporates:
     *  Constant: '<S1261>/Constant Value'
     *  DataStoreWrite: '<S1225>/Data Store Write1'
     *  Switch: '<S1267>/Switch1'
     */
    if (rtb_VM_Conditional_Signal_PostC)
    {
        VLDR_ac_DW.NeVLDR_Cnt_LTSOV_StkOff_MFOP = 0U;
    }
    else
    {
        if (rtb_NOT4)
        {
            /* MinMax: '<S1261>/Minimum2' incorporates:
             *  DataStoreRead: '<S1225>/Data Store Read'
             *  Switch: '<S1267>/Switch1'
             */
            if (VeVLDR_Cnt_LTSOV_StkOff_FailCnt >
                    VLDR_ac_DW.NeVLDR_Cnt_LTSOV_StkOff_MFOP)
            {
                /* DataStoreWrite: '<S1225>/Data Store Write1' incorporates:
                 *  Switch: '<S1267>/Switch1'
                 */
                VLDR_ac_DW.NeVLDR_Cnt_LTSOV_StkOff_MFOP =
                    VeVLDR_Cnt_LTSOV_StkOff_FailCnt;
            }

            /* End of MinMax: '<S1261>/Minimum2' */
        }
    }

    /* End of Switch: '<S1268>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S1254>/Fail' */
    VLDR_ac_Fail(rtb_TmpSignalConversionAtVeCPDR, &VLDR_ac_B.Merge);

    /* End of Outputs for SubSystem: '<S1254>/Fail' */

    /* Outputs for Enabled SubSystem: '<S1254>/Init' */
    VLDR_ac_Init_a(rtb_Logical24_pk, &VLDR_ac_B.Merge);

    /* End of Outputs for SubSystem: '<S1254>/Init' */

    /* Outputs for Enabled SubSystem: '<S1254>/Pass' */
    VLDR_ac_Pass(rtb_NOT4, &VLDR_ac_B.Merge);

    /* End of Outputs for SubSystem: '<S1254>/Pass' */

    /* RelationalOperator: '<S1254>/Relational Operator' incorporates:
     *  Merge: '<S1254>/Merge'
     *  RelationalOperator: '<S1223>/Relational Operator1'
     *  RelationalOperator: '<S1223>/Relational Operator2'
     */
    VariantMergeForOutportEEXV_Pr_k = VLDR_ac_B.Merge;

    /* RelationalOperator: '<S1254>/Relational Operator' incorporates:
     *  Constant: '<S1257>/Constant'
     */
    VLDR_ac_B.RelationalOperator = (((uint32)VariantMergeForOutportEEXV_Pr_k) ==
        CeDFIB_e_Fail);

    /* RelationalOperator: '<S1248>/Greater  Than2' incorporates:
     *  Constant: '<S1246>/KeVLDR_t_StkOff_CntrTime2'
     */
    rtb_Logical24_pk = (rtb_Switch1_mh > KeVLDR_t_StkOff_CntrTime2);

    /* Update for UnitDelay: '<S1223>/Unit Delay1' incorporates:
     *  Constant: '<S1226>/Constant'
     *  Constant: '<S1227>/Constant'
     *  Logic: '<S1223>/Logical32'
     *  Logic: '<S1223>/Logical38'
     *  RelationalOperator: '<S1223>/Relational Operator1'
     *  RelationalOperator: '<S1223>/Relational Operator2'
     */
    VLDR_ac_DW.UnitDelay1_DSTATE_pv = (((((uint32)
        VariantMergeForOutportEEXV_Pr_k) == CeDFIB_e_Pass) || (((uint32)
        VariantMergeForOutportEEXV_Pr_k) == CeDFIB_e_Fail)) || rtb_Logical24_pk);

    /* Update for UnitDelay: '<S1223>/Unit Delay2' */
    VLDR_ac_DW.UnitDelay2_DSTATE = rtb_TmpSignalConversionAtVeRC_e;

    /* Switch: '<S1248>/Switch3' */
    if (rtb_Logical24_pk)
    {
        /* Update for UnitDelay: '<S1248>/Unit Delay' incorporates:
         *  Constant: '<S1246>/KeVLDR_t_StkOff_CntrTime2'
         */
        VLDR_ac_DW.UnitDelay_DSTATE_dj = KeVLDR_t_StkOff_CntrTime2;
    }
    else
    {
        /* Update for UnitDelay: '<S1248>/Unit Delay' */
        VLDR_ac_DW.UnitDelay_DSTATE_dj = rtb_Switch1_mh;
    }

    /* End of Switch: '<S1248>/Switch3' */

    /* Update for UnitDelay: '<S1255>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_kfk = rtb_NOT4;

    /* Update for UnitDelay: '<S1255>/Unit Delay1' */
    VLDR_ac_DW.UnitDelay1_DSTATE_ah = rtb_TmpSignalConversionAtVeCPDR;

    /* End of Outputs for S-Function (fcgen): '<S18>/Function-Call Generator' */
    VLDR_ac_B.VariantMerge_For_Variant_S_hykj[0] = ((((((!rtb_OR1_dx) ||
        rtb_VariantMergeForOutportDFI_o) || rtb_Logical2_fw) || rtb_UnitDelay1_e)
        || rtb_Logical12_c5) || (((rtb_TmpSignalConversionAtVeTHDR ||
        rtb_Comparison4_i) || rtb_Logical12_f3) || (((rtb_Logical1_pzo ||
        rtb_VariantMergeForOutportDF_ko) || rtb_TmpSignalConversionAtVeR_go) &&
        (KeVLDR_b_LTSOV_PECTOS_Enb))));
    VLDR_ac_B.VariantMerge_For_Variant_S_hykj[1] = ((((((!rtb_UnitDelay_lwd) ||
        (((((sint32)VLDR_ac_DW.StatusByte_HB_CT_SnsrPerf) & 1) > 0) &&
         ((((uint32)VLDR_ac_DW.StatusByte_HB_CT_SnsrPerf) & 64U) == 0U))) ||
        (((((sint32)VLDR_ac_DW.StatusByte_CoolOutTempSnsCkt) & 1) > 0) &&
         ((((uint32)VLDR_ac_DW.StatusByte_CoolOutTempSnsCkt) & 64U) == 0U))) ||
        (((((sint32)VLDR_ac_DW.StatusByte_LosCommBECM_A) & 1) > 0) && ((((uint32)
        VLDR_ac_DW.StatusByte_LosCommBECM_A) & 64U) == 0U))) || (((((sint32)
        VLDR_ac_DW.StatusByte_HybEvBatPacCoolCtr_n) & 1) > 0) && ((((uint32)
        VLDR_ac_DW.StatusByte_HybEvBatPacCoolCtr_n) & 64U) == 0U))) ||
        ((((((((sint32)VLDR_ac_DW.StatusByte_MtrElect_CT_SnsrPerf) & 1) > 0) &&
            ((((uint32)VLDR_ac_DW.StatusByte_MtrElect_CT_SnsrPerf) & 64U) == 0U))
           || (((((sint32)VLDR_ac_DW.StatusByte_MtrElect_CT_SnsrCktL) & 1) > 0) &&
               ((((uint32)VLDR_ac_DW.StatusByte_MtrElect_CT_SnsrCktL) & 64U) ==
                0U))) || (((((sint32)VLDR_ac_DW.StatusByte_MtrElect_CT_SnsrCktH)
                            & 1) > 0) && ((((uint32)
        VLDR_ac_DW.StatusByte_MtrElect_CT_SnsrCktH) & 64U) == 0U))) ||
         ((((((((sint32)VLDR_ac_DW.StatusByte_CT_SnsrPerf) & 1) > 0) &&
             ((((uint32)VLDR_ac_DW.StatusByte_CT_SnsrPerf) & 64U) == 0U)) ||
            (((((sint32)VLDR_ac_DW.StatusByte_CT_SnsrCktLo) & 1) > 0) &&
             ((((uint32)VLDR_ac_DW.StatusByte_CT_SnsrCktLo) & 64U) == 0U))) ||
           (((((sint32)VLDR_ac_DW.StatusByte_CT_SnsrCktHi) & 1) > 0) &&
            ((((uint32)VLDR_ac_DW.StatusByte_CT_SnsrCktHi) & 64U) == 0U))) &&
          (KeVLDR_b_LTSOV_PECTOS_Enb))));

    /* RelationalOperator: '<S1129>/Comparison9' incorporates:
     *  Constant: '<S1117>/KeVLDR_b_LTSOV_PECTOS_Enb'
     *  Constant: '<S1118>/Constant1'
     *  Constant: '<S1118>/Constant2'
     *  Constant: '<S1119>/Constant1'
     *  Constant: '<S1119>/Constant2'
     *  Constant: '<S1120>/Constant1'
     *  Constant: '<S1120>/Constant2'
     *  Constant: '<S1121>/Constant1'
     *  Constant: '<S1121>/Constant2'
     *  Constant: '<S1122>/Constant1'
     *  Constant: '<S1122>/Constant2'
     *  Constant: '<S1123>/Constant1'
     *  Constant: '<S1123>/Constant2'
     *  Constant: '<S1124>/Constant1'
     *  Constant: '<S1124>/Constant2'
     *  Constant: '<S1125>/Constant1'
     *  Constant: '<S1125>/Constant2'
     *  Constant: '<S1126>/Constant1'
     *  Constant: '<S1126>/Constant2'
     *  Constant: '<S1127>/Constant1'
     *  Constant: '<S1127>/Constant2'
     *  Constant: '<S1128>/KeVLDR_b_LTSOV_PECTOS_Enb'
     *  Constant: '<S1134>/HeVLDR_b_LTSOV_ON'
     *  DataStoreRead: '<S1118>/StatusByte_CT_SnsrCktHi'
     *  DataStoreRead: '<S1119>/StatusByte_CT_SnsrCktLo'
     *  DataStoreRead: '<S1120>/StatusByte_CT_SnsrPerf'
     *  DataStoreRead: '<S1121>/StatusByte_CoolOutTempSnsCkt'
     *  DataStoreRead: '<S1122>/StatusByte_HB_CT_SnsrPerf'
     *  DataStoreRead: '<S1123>/StatusByte_HybEvBatPacCoolCtrlVlvBPerfStkOff'
     *  DataStoreRead: '<S1124>/StatusByte_LosCommBECM_A'
     *  DataStoreRead: '<S1125>/StatusByte_MtrElect_CT_SnsrCktHi'
     *  DataStoreRead: '<S1126>/StatusByte_MtrElect_CT_SnsrCktLo'
     *  DataStoreRead: '<S1127>/StatusByte_MtrElect_CT_SnsrPerf'
     */
    rtb_NOT4 = (rtb_TmpSignalConversionAtVeRC_e == HeVLDR_b_LTSOV_ON);

    /* Logic: '<S1105>/Logical1' */
    rtb_TmpSignalConversionAtVeCPDR = !rtb_UnitDelay_id;

    /* Switch: '<S1132>/Switch1' */
    if ((!rtb_NOT4) || rtb_TmpSignalConversionAtVeCPDR)
    {
        /* Switch: '<S1132>/Switch1' incorporates:
         *  Constant: '<S1132>/Constant Value2'
         */
        rtb_Switch1_mh = 0.0F;
    }
    else
    {
        /* Switch: '<S1132>/Switch1' incorporates:
         *  Constant: '<S1105>/Constant Value1'
         *  Sum: '<S1132>/Subtraction'
         *  Switch: '<S1132>/Switch2'
         *  UnitDelay: '<S1132>/Unit Delay'
         */
        rtb_Switch1_mh = VLDR_ac_DW.UnitDelay_DSTATE_nt + 0.025F;
    }

    /* End of Switch: '<S1132>/Switch1' */

    /* Update for UnitDelay: '<S1132>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_nt = rtb_Switch1_mh;

    /* RelationalOperator: '<S1130>/Comparison1' incorporates:
     *  Constant: '<S1137>/KeVLDR_t_IUMPR_LTSOV_StkOff_MinConsecTime_CmdOn'
     */
    rtb_Logical24_pk = (rtb_Switch1_mh >
                        KeVLDR_t_IUMPR_LTSOV_StkOff_MinConsecTime_CmdOn);

    /* Switch: '<S1133>/Switch1' incorporates:
     *  Switch: '<S1133>/Switch2'
     */
    if (rtb_TmpSignalConversionAtVeCPDR)
    {
        /* Switch: '<S1133>/Switch1' incorporates:
         *  Constant: '<S1133>/Constant Value2'
         */
        rtb_Switch1_mp = 0.0F;
    }
    else if (rtb_NOT4)
    {
        /* Switch: '<S1133>/Switch2' incorporates:
         *  Constant: '<S1105>/Constant Value2'
         *  Sum: '<S1133>/Subtraction'
         *  Switch: '<S1133>/Switch1'
         *  UnitDelay: '<S1133>/Unit Delay'
         */
        rtb_Switch1_mp = VLDR_ac_DW.UnitDelay_DSTATE_n5 + 0.025F;
    }
    else
    {
        /* Switch: '<S1133>/Switch1' incorporates:
         *  Switch: '<S1133>/Switch2'
         *  UnitDelay: '<S1133>/Unit Delay'
         */
        rtb_Switch1_mp = VLDR_ac_DW.UnitDelay_DSTATE_n5;
    }

    /* End of Switch: '<S1133>/Switch1' */

    /* Update for UnitDelay: '<S1133>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_n5 = rtb_Switch1_mp;

    /* Logic: '<S1135>/AND' incorporates:
     *  Logic: '<S1135>/OR1'
     *  UnitDelay: '<S1135>/Unit Delay'
     */
    rtb_NOT4 = (rtb_Logical24_pk && (!VLDR_ac_DW.UnitDelay_DSTATE_hq));

    /* Update for UnitDelay: '<S1135>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_hq = rtb_Logical24_pk;
    if (rtb_TmpSignalConversionAtVeCPDR)
    {
        /* Switch: '<S1130>/Switch' incorporates:
         *  Constant: '<S1130>/Constant Value5'
         */
        rtb_Switch1_mh = 0.0F;
    }
    else
    {
        /* Switch: '<S1130>/Switch' incorporates:
         *  Sum: '<S1130>/Sum'
         *  Switch: '<S1130>/Switch1'
         */
        rtb_Switch1_mh = ((float32)(rtb_NOT4 ? 1.0F : 0.0F)) +
            VLDR_ac_DW.UnitDelay_DSTATE_n;
    }

    /* Logic: '<S1131>/OR1' incorporates:
     *  Constant: '<S1136>/KeVLDR_Cnt_IUMPR_LTSOV_StkOff_MinConsecCnt_CmdOn'
     *  Constant: '<S1138>/KeVLDR_t_IUMPR_LTSOV_StkOff_MinCumlTime_CmdOn'
     *  Logic: '<S1131>/NOT'
     *  Logic: '<S1131>/OR'
     *  UnitDelay: '<S1131>/Unit Delay'
     */
    VLDR_ac_B.VariantMerge_For_Variant_S_hykj[2] = (((rtb_Switch1_mp >=
        KeVLDR_t_IUMPR_LTSOV_StkOff_MinCumlTime_CmdOn) || (rtb_Switch1_mh >=
        KeVLDR_Cnt_IUMPR_LTSOV_StkOff_MinConsecCnt_CmdOn)) ||
        ((!rtb_TmpSignalConversionAtVeCPDR) && (VLDR_ac_DW.UnitDelay_DSTATE_fy)));

    /* Update for UnitDelay: '<S1131>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_fy = VLDR_ac_B.VariantMerge_For_Variant_S_hykj[2];

    /* RelationalOperator: '<S1139>/Comparison9' incorporates:
     *  Constant: '<S1144>/HeVLDR_b_LTSOV_OFF'
     */
    rtb_Logical24_pk = (rtb_TmpSignalConversionAtVeRC_e == HeVLDR_b_LTSOV_OFF);

    /* Logic: '<S1106>/Logical1' */
    rtb_TmpSignalConversionAtVeRC_e = !rtb_UnitDelay_id;

    /* Switch: '<S1142>/Switch1' */
    if ((!rtb_Logical24_pk) || rtb_TmpSignalConversionAtVeRC_e)
    {
        /* Switch: '<S1142>/Switch1' incorporates:
         *  Constant: '<S1142>/Constant Value2'
         */
        rtb_Switch1_mp = 0.0F;
    }
    else
    {
        /* Switch: '<S1142>/Switch1' incorporates:
         *  Constant: '<S1106>/Constant Value1'
         *  Sum: '<S1142>/Subtraction'
         *  Switch: '<S1142>/Switch2'
         *  UnitDelay: '<S1142>/Unit Delay'
         */
        rtb_Switch1_mp = VLDR_ac_DW.UnitDelay_DSTATE_a5 + 0.025F;
    }

    /* End of Switch: '<S1142>/Switch1' */

    /* Update for UnitDelay: '<S1142>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_a5 = rtb_Switch1_mp;

    /* RelationalOperator: '<S1140>/Comparison1' incorporates:
     *  Constant: '<S1147>/KeVLDR_t_IUMPR_LTSOV_StkOn_MinConsecTime_CmdOn'
     */
    rtb_TmpSignalConversionAtVeCPDR = (rtb_Switch1_mp >
        KeVLDR_t_IUMPR_LTSOV_StkOn_MinConsecTime_CmdOn);

    /* Switch: '<S1143>/Switch1' incorporates:
     *  Switch: '<S1143>/Switch2'
     */
    if (rtb_TmpSignalConversionAtVeRC_e)
    {
        /* Switch: '<S1143>/Switch1' incorporates:
         *  Constant: '<S1143>/Constant Value2'
         */
        rtb_TmpSignalConversionAtVeTR_a = 0.0F;
    }
    else if (rtb_Logical24_pk)
    {
        /* Switch: '<S1143>/Switch2' incorporates:
         *  Constant: '<S1106>/Constant Value2'
         *  Sum: '<S1143>/Subtraction'
         *  Switch: '<S1143>/Switch1'
         *  UnitDelay: '<S1143>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeTR_a = VLDR_ac_DW.UnitDelay_DSTATE_k4 +
            0.025F;
    }
    else
    {
        /* Switch: '<S1143>/Switch1' incorporates:
         *  Switch: '<S1143>/Switch2'
         *  UnitDelay: '<S1143>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeTR_a = VLDR_ac_DW.UnitDelay_DSTATE_k4;
    }

    /* End of Switch: '<S1143>/Switch1' */

    /* Update for UnitDelay: '<S1143>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_k4 = rtb_TmpSignalConversionAtVeTR_a;

    /* Logic: '<S1145>/AND' incorporates:
     *  Logic: '<S1145>/OR1'
     *  UnitDelay: '<S1145>/Unit Delay'
     */
    rtb_Logical24_pk = (rtb_TmpSignalConversionAtVeCPDR &&
                        (!VLDR_ac_DW.UnitDelay_DSTATE_abv));

    /* Update for UnitDelay: '<S1145>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_abv = rtb_TmpSignalConversionAtVeCPDR;
    if (rtb_TmpSignalConversionAtVeRC_e)
    {
        /* Switch: '<S1140>/Switch' incorporates:
         *  Constant: '<S1140>/Constant Value5'
         */
        rtb_Switch1_mp = 0.0F;
    }
    else
    {
        /* Switch: '<S1140>/Switch' incorporates:
         *  Sum: '<S1140>/Sum'
         *  Switch: '<S1140>/Switch1'
         */
        rtb_Switch1_mp = ((float32)(rtb_Logical24_pk ? 1.0F : 0.0F)) +
            VLDR_ac_DW.UnitDelay_DSTATE_i;
    }

    /* Logic: '<S1141>/OR1' incorporates:
     *  Constant: '<S1146>/KeVLDR_Cnt_IUMPR_LTSOV_StkOn_MinConsecCnt_CmdOn'
     *  Constant: '<S1148>/KeVLDR_t_IUMPR_LTSOV_StkOn_MinCumlTime_CmdOn'
     *  Logic: '<S1141>/NOT'
     *  Logic: '<S1141>/OR'
     *  UnitDelay: '<S1141>/Unit Delay'
     */
    VLDR_ac_B.VariantMerge_For_Variant_S_hykj[3] =
        (((rtb_TmpSignalConversionAtVeTR_a >=
           KeVLDR_t_IUMPR_LTSOV_StkOn_MinCumlTime_CmdOn) || (rtb_Switch1_mp >=
           KeVLDR_Cnt_IUMPR_LTSOV_StkOn_MinConsecCnt_CmdOn)) ||
         ((!rtb_TmpSignalConversionAtVeRC_e) && (VLDR_ac_DW.UnitDelay_DSTATE_gx)));

    /* Update for UnitDelay: '<S1141>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_gx = VLDR_ac_B.VariantMerge_For_Variant_S_hykj[3];

    /* End of Outputs for SubSystem: '<S4>/LTSOV_Diagnostics' */
    /* End of Outputs for SubSystem: '<S1106>/Stop Watch Reset Enabled' */
    /* End of Outputs for SubSystem: '<S1106>/Stop Watch Reset Enabled1' */
    /* End of Outputs for SubSystem: '<S1140>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S1106>/Signal Latch On With Reset' */
#else

    /* VariantMerge generated from: '<S974>/Variant Source' incorporates:
     *  Constant: '<S1102>/FALSE Constant'
     *  SignalConversion generated from: '<S974>/Variant Source'
     */
    VLDR_ac_B.VariantMerge_For_Variant_S_hykj[0] = false;
    VLDR_ac_B.VariantMerge_For_Variant_S_hykj[1] = false;
    VLDR_ac_B.VariantMerge_For_Variant_S_hykj[2] = false;
    VLDR_ac_B.VariantMerge_For_Variant_S_hykj[3] = false;

#endif

    /* End of S-Function (sfix_bitop): '<S1107>/Bitwise Operator1' */
    /* End of Outputs for SubSystem: '<S1105>/Stop Watch Reset Enabled' */
    /* End of Outputs for SubSystem: '<S1105>/Stop Watch Reset Enabled1' */
    /* End of Outputs for SubSystem: '<S1130>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S1105>/Signal Latch On With Reset' */

    /* Outputs for Atomic SubSystem: '<S19>/OEXV' */
#if Rte_SysCon_Variant_VLDR_6

    /* Outputs for Atomic SubSystem: '<S1318>/OEXV_Diag_Enable' */

    /* S-Function (sfix_bitop): '<S1338>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S1338>/StatusByte_ThrmlRlyCtrlCkt'
     *  S-Function (sfix_bitop): '<S1385>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1445>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1518>/Bitwise Operator2'
     */
    rtb_VariantMergeForOutportDFI_0 = ((sint32)
        VLDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 1;

    /* S-Function (sfix_bitop): '<S1338>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S1338>/StatusByte_ThrmlRlyCtrlCkt'
     *  S-Function (sfix_bitop): '<S1385>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1445>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1518>/Bitwise Operator1'
     */
    tmpRead_f = ((uint32)VLDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 64U;

    /* S-Function (sfix_bitop): '<S1336>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S1336>/StatusByte_LIN2_BusOff'
     *  S-Function (sfix_bitop): '<S1383>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1442>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1516>/Bitwise Operator2'
     */
    rtb_VariantMergeForOutportDFI_1 = ((sint32)VLDR_ac_DW.StatusByte_LIN2_BusOff)
        & 1;

    /* S-Function (sfix_bitop): '<S1336>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S1336>/StatusByte_LIN2_BusOff'
     *  S-Function (sfix_bitop): '<S1383>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1442>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1516>/Bitwise Operator1'
     */
    rtb_UnitDelay_ly_tmp = ((uint32)VLDR_ac_DW.StatusByte_LIN2_BusOff) & 64U;

    /* S-Function (sfix_bitop): '<S1337>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S1337>/StatusByte_LostCommACRefrigExpVlvActD'
     *  S-Function (sfix_bitop): '<S1384>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1443>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1517>/Bitwise Operator2'
     */
    rtb_VariantMergeForOutportDFI_3 = ((sint32)
        VLDR_ac_DW.StatusByte_LostCommACRefrigEx_c) & 1;

    /* S-Function (sfix_bitop): '<S1337>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S1337>/StatusByte_LostCommACRefrigExpVlvActD'
     *  S-Function (sfix_bitop): '<S1384>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1443>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1517>/Bitwise Operator1'
     */
    rtb_VariantMergeForOutportDFI_2 = ((uint32)
        VLDR_ac_DW.StatusByte_LostCommACRefrigEx_c) & 64U;

    /* VariantMerge generated from: '<S1318>/DFIR_OEXV_PerfDiag' incorporates:
     *  Constant: '<S1336>/Constant1'
     *  Constant: '<S1336>/Constant2'
     *  Constant: '<S1337>/Constant1'
     *  Constant: '<S1337>/Constant2'
     *  Constant: '<S1338>/Constant1'
     *  Constant: '<S1338>/Constant2'
     *  Constant: '<S1345>/KeVLDR_b_OEXV_PerfDiag_LIN2BusOff_Ovrd'
     *  Constant: '<S1346>/KeVLDR_b_OEXV_PerfDiag_LOC_Ovrd'
     *  Constant: '<S1347>/KeVLDR_b_OEXV_PerfDiag_ThrmlRlyErr_Ovrd'
     *  Logic: '<S1330>/Logical18'
     *  Logic: '<S1330>/Logical2'
     *  Logic: '<S1330>/Logical21'
     *  Logic: '<S1330>/Logical3'
     *  Logic: '<S1330>/Logical4'
     *  Logic: '<S1330>/Logical5'
     *  Logic: '<S1330>/Logical9'
     *  Logic: '<S1336>/Logical Operator'
     *  Logic: '<S1337>/Logical Operator'
     *  Logic: '<S1338>/Logical Operator'
     *  RelationalOperator: '<S1336>/Relational Operator1'
     *  RelationalOperator: '<S1336>/Relational Operator2'
     *  RelationalOperator: '<S1337>/Relational Operator1'
     *  RelationalOperator: '<S1337>/Relational Operator2'
     *  RelationalOperator: '<S1338>/Relational Operator1'
     *  RelationalOperator: '<S1338>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S1336>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1336>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1337>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1337>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1338>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1338>/Bitwise Operator2'
     */
    rtb_VariantMergeForOutportDFIR_ = (((((rtb_VariantMergeForOutportDFI_0 <= 0)
        || (tmpRead_f != 0U)) || (KeVLDR_b_OEXV_PerfDiag_ThrmlRlyErr_Ovrd)) &&
        (((rtb_VariantMergeForOutportDFI_1 <= 0) || (rtb_UnitDelay_ly_tmp != 0U))
         || (KeVLDR_b_OEXV_PerfDiag_LIN2BusOff_Ovrd))) &&
        (((rtb_VariantMergeForOutportDFI_3 <= 0) ||
          (rtb_VariantMergeForOutportDFI_2 != 0U)) ||
         (KeVLDR_b_OEXV_PerfDiag_LOC_Ovrd)));

    /* RelationalOperator: '<S1330>/Comparison4' incorporates:
     *  Constant: '<S1335>/Constant'
     *  SignalConversion generated from: '<S1>/VeTAIR_e_OEXV_CalStat'
     */
    rtb_Comparison4_k = (((uint32)rtb_TmpSignalConversionAtVeT_cz) !=
                         CeTAIR_e_EXV_Calibration_Complete);

    /* Outputs for Atomic SubSystem: '<S1330>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S1350>/EdgeRising' */
    /* Logic: '<S1352>/AND' incorporates:
     *  Logic: '<S1352>/OR1'
     *  UnitDelay: '<S1352>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeRC_e = (rtb_Comparison4_k &&
        (!VLDR_ac_DW.UnitDelay_DSTATE_dk));

    /* Update for UnitDelay: '<S1352>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_dk = rtb_Comparison4_k;

    /* End of Outputs for SubSystem: '<S1350>/EdgeRising' */

    /* Switch: '<S1350>/Switch1' incorporates:
     *  Constant: '<S1340>/KeVLDR_Cnt_OEXV_Max_Referencing_Time'
     *  Constant: '<S1350>/Constant Value'
     *  Logic: '<S1350>/OR'
     *  Logic: '<S1350>/OR1'
     *  MinMax: '<S1350>/Minimum'
     *  Sum: '<S1350>/Summation'
     *  UnitDelay: '<S1350>/Unit Delay'
     */
    if ((!rtb_Comparison4_k) || rtb_TmpSignalConversionAtVeRC_e)
    {
        /* Switch: '<S1350>/Switch1' incorporates:
         *  Constant: '<S1350>/Constant Value1'
         */
        rtb_Switch1_dj = 0U;
    }
    else if (KeVLDR_Cnt_OEXV_Max_Referencing_Time < ((uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_kl) + 1U)))
    {
        /* MinMax: '<S1350>/Minimum' incorporates:
         *  Constant: '<S1340>/KeVLDR_Cnt_OEXV_Max_Referencing_Time'
         *  Switch: '<S1350>/Switch1'
         */
        rtb_Switch1_dj = KeVLDR_Cnt_OEXV_Max_Referencing_Time;
    }
    else
    {
        /* Switch: '<S1350>/Switch1' incorporates:
         *  Constant: '<S1350>/Constant Value'
         *  MinMax: '<S1350>/Minimum'
         *  Sum: '<S1350>/Summation'
         *  UnitDelay: '<S1350>/Unit Delay'
         */
        rtb_Switch1_dj = (uint16)(((uint32)VLDR_ac_DW.UnitDelay_DSTATE_kl) + 1U);
    }

    /* End of Switch: '<S1350>/Switch1' */
    /* End of Outputs for SubSystem: '<S1330>/Turn On Delay Sample' */

    /* Inport: '<Root>/VeTAIR_b_OEXV_PosAct_FA' */
    (void)Rte_Read_VeTAIR_b_OEXV_PosAct_FA_Value(&rtb_Logical11);

    /* Outputs for Atomic SubSystem: '<S1330>/Turn On Delay Sample' */
    /* Update for UnitDelay: '<S1350>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_kl = rtb_Switch1_dj;

    /* Logic: '<S1325>/NOT4' incorporates:
     *  Constant: '<S1333>/Constant'
     *  Constant: '<S1334>/Constant'
     *  Constant: '<S1340>/KeVLDR_Cnt_OEXV_Max_Referencing_Time'
     *  Constant: '<S1343>/KeVLDR_U_SysVltLwrLim'
     *  Constant: '<S1344>/KeVLDR_U_SysVltUprLim'
     *  Logic: '<S1330>/Logical10'
     *  Logic: '<S1330>/Logical6'
     *  Logic: '<S1330>/Logical8'
     *  Logic: '<S1350>/AND'
     *  RelationalOperator: '<S1330>/Comparison2'
     *  RelationalOperator: '<S1330>/Comparison4'
     *  RelationalOperator: '<S1330>/Comparison5'
     *  RelationalOperator: '<S1330>/Comparison6'
     *  RelationalOperator: '<S1330>/Comparison8'
     *  RelationalOperator: '<S1350>/Greater  Than'
     *  SignalConversion generated from: '<S1>/VeTAIR_e_OEXV_CalStat'
     */
    rtb_TmpSignalConversionAtVeRC_e = ((((((rtb_VM_Conditional_Signal_BF1_S <
        KeVLDR_U_SysVltUprLim) && (rtb_VM_Conditional_Signal_BF1_S >
        KeVLDR_U_SysVltLwrLim)) && rtb_TmpSignalConversionAtVeDFIR) && (((uint32)
        rtb_TmpSignalConversionAtVePMTR) != CePMTR_e_DISBL_All_Thrml)) &&
        rtb_VariantMergeForOutportDFIR_) && ((((uint32)
        rtb_TmpSignalConversionAtVeT_cz) == CeTAIR_e_EXV_Calibration_Complete) ||
        (rtb_Comparison4_k && (rtb_Switch1_dj >=
        KeVLDR_Cnt_OEXV_Max_Referencing_Time))));

    /* End of Outputs for SubSystem: '<S1330>/Turn On Delay Sample' */

    /* Logic: '<S1330>/Logical11' */
    rtb_Logical11 = (rtb_TmpSignalConversionAtVeRC_e && rtb_Logical11);

    /* Outputs for Atomic SubSystem: '<S1330>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S1351>/EdgeRising' */
    /* Logic: '<S1353>/AND' incorporates:
     *  Logic: '<S1353>/OR1'
     *  UnitDelay: '<S1353>/Unit Delay'
     */
    rtb_Comparison4_k = (rtb_Logical11 && (!VLDR_ac_DW.UnitDelay_DSTATE_lp0));

    /* Update for UnitDelay: '<S1353>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_lp0 = rtb_Logical11;

    /* End of Outputs for SubSystem: '<S1351>/EdgeRising' */

    /* Switch: '<S1351>/Switch1' incorporates:
     *  Logic: '<S1351>/OR'
     *  Logic: '<S1351>/OR1'
     */
    if ((!rtb_Logical11) || rtb_Comparison4_k)
    {
        /* Switch: '<S1351>/Switch1' incorporates:
         *  Constant: '<S1351>/Constant Value1'
         */
        rtb_TmpSignalConversionAtVeTR_a = 0.0F;
    }
    else
    {
        /* Switch: '<S1351>/Switch1' incorporates:
         *  Constant: '<S1339>/Calib'
         *  Constant: '<S1348>/KeVLDR_t_OEXV_FA_WaitTime'
         *  MinMax: '<S1351>/Minimum'
         *  Sum: '<S1351>/Summation'
         *  UnitDelay: '<S1351>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeTR_a = fminf(KeVLDR_t_OEXV_FA_WaitTime,
            HeVLDR_t_MedTED + VLDR_ac_DW.UnitDelay_DSTATE_hn);
    }

    /* End of Switch: '<S1351>/Switch1' */
    /* End of Outputs for SubSystem: '<S1330>/Turn On Delay Time' */

    /* Inport: '<Root>/VeTAIR_Pct_OEXV_PosAct' */
    (void)Rte_Read_VeTAIR_Pct_OEXV_PosAct_Value(&rtb_Switch1_p);

    /* Outputs for Atomic SubSystem: '<S1330>/Turn On Delay Time' */
    /* Logic: '<S1351>/AND' incorporates:
     *  Constant: '<S1348>/KeVLDR_t_OEXV_FA_WaitTime'
     *  RelationalOperator: '<S1351>/Greater  Than'
     */
    rtb_Logical11 = (rtb_Logical11 && (rtb_TmpSignalConversionAtVeTR_a >=
                      KeVLDR_t_OEXV_FA_WaitTime));

    /* Update for UnitDelay: '<S1351>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_hn = rtb_TmpSignalConversionAtVeTR_a;

    /* End of Outputs for SubSystem: '<S1330>/Turn On Delay Time' */

    /* Logic: '<S1330>/Logical7' incorporates:
     *  Constant: '<S1341>/KeVLDR_Pct_OEXV_Max_PosRq'
     *  Constant: '<S1342>/KeVLDR_Pct_OEXV_Min_PosRq'
     *  Constant: '<S1349>/Calib'
     *  Logic: '<S1330>/Logical1'
     *  Logic: '<S1330>/Logical12'
     *  Logic: '<S1330>/Logical13'
     *  RelationalOperator: '<S1330>/Comparison1'
     *  RelationalOperator: '<S1330>/Comparison3'
     */
    VeVLDR_b_OEXV_PerfDiag_En = ((((rtb_TmpSignalConversionAtVeRC_g <
        KeVLDR_Pct_OEXV_Max_PosRq) && (rtb_TmpSignalConversionAtVeRC_g >
        KeVLDR_Pct_OEXV_Min_PosRq)) && rtb_TmpSignalConversionAtVeRC_e) ||
        ((KeVLDR_b_OEXV_PerfDiagPerfCndsOV_En) && rtb_Logical11));

    /* S-Function (sfix_bitop): '<S1362>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S1332>/Data Store Read2'
     *  S-Function (sfix_bitop): '<S1434>/Bitwise Operator1'
     */
    rtb_VariantMergeForOutportDFI_4 = ((uint32)
        VLDR_ac_DW.StatusByte_AC_RefrigExpVlvActD_) & 64U;

    /* RelationalOperator: '<S1362>/Relational Operator3' incorporates:
     *  Constant: '<S1362>/Constant3'
     *  S-Function (sfix_bitop): '<S1362>/Bitwise Operator2'
     */
    rtb_Logical24_pk = (rtb_VariantMergeForOutportDFI_4 == 0U);

    /* Logic: '<S1362>/Logical1' incorporates:
     *  Constant: '<S1361>/Calib'
     *  Constant: '<S1362>/Constant1'
     *  DataStoreRead: '<S1332>/Data Store Read2'
     *  Logic: '<S1362>/Logical Operator'
     *  Logic: '<S1362>/Logical10'
     *  Logic: '<S1362>/Logical12'
     *  RelationalOperator: '<S1362>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S1362>/Bitwise Operator3'
     */
    rtb_Comparison4_k = ((VeVLDR_b_OEXV_PerfDiag_En) &&
                         ((!KeVLDR_b_AC_RefrigExpVlvActD_CntrlCktPerf_LtchEnbl) ||
                          (((((uint32)VLDR_ac_DW.StatusByte_AC_RefrigExpVlvActD_)
        & 1U) == 0U) || (!rtb_Logical24_pk))));

    /* Sum: '<S1331>/Sum1' */
    VeVLDR_Pct_OEXV_PerfDiag_PstnDiff = rtb_Switch1_p -
        rtb_TmpSignalConversionAtVeRC_g;

    /* RelationalOperator: '<S1331>/Comparison1' incorporates:
     *  Abs: '<S1331>/Abs'
     *  Constant: '<S1355>/KeVLDR_Pct_OEXV_PerfDiag_PstnDiffMax'
     */
    rtb_TmpSignalConversionAtVeCPDR = (fabsf(VeVLDR_Pct_OEXV_PerfDiag_PstnDiff) >=
        KeVLDR_Pct_OEXV_PerfDiag_PstnDiffMax);

    /* Outputs for Atomic SubSystem: '<S1331>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S1357>/EdgeRising' */
    /* Logic: '<S1358>/AND' incorporates:
     *  Logic: '<S1358>/OR1'
     *  UnitDelay: '<S1358>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeRC_e = (rtb_TmpSignalConversionAtVeCPDR &&
        (!VLDR_ac_DW.UnitDelay_DSTATE_ab));

    /* Update for UnitDelay: '<S1358>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_ab = rtb_TmpSignalConversionAtVeCPDR;

    /* End of Outputs for SubSystem: '<S1357>/EdgeRising' */

    /* Switch: '<S1357>/Switch1' incorporates:
     *  Constant: '<S1354>/KeVLDR_Cnt_OEXV_Position_Wait_Time'
     *  Constant: '<S1357>/Constant Value'
     *  Logic: '<S1357>/OR'
     *  Logic: '<S1357>/OR1'
     *  MinMax: '<S1357>/Minimum'
     *  Sum: '<S1357>/Summation'
     *  UnitDelay: '<S1357>/Unit Delay'
     */
    if ((!rtb_TmpSignalConversionAtVeCPDR) || rtb_TmpSignalConversionAtVeRC_e)
    {
        /* Switch: '<S1357>/Switch1' incorporates:
         *  Constant: '<S1357>/Constant Value1'
         */
        rtb_Switch1_dj = 0U;
    }
    else if (KeVLDR_Cnt_OEXV_Position_Wait_Time < ((uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_er) + 1U)))
    {
        /* MinMax: '<S1357>/Minimum' incorporates:
         *  Constant: '<S1354>/KeVLDR_Cnt_OEXV_Position_Wait_Time'
         *  Switch: '<S1357>/Switch1'
         */
        rtb_Switch1_dj = KeVLDR_Cnt_OEXV_Position_Wait_Time;
    }
    else
    {
        /* Switch: '<S1357>/Switch1' incorporates:
         *  Constant: '<S1357>/Constant Value'
         *  MinMax: '<S1357>/Minimum'
         *  Sum: '<S1357>/Summation'
         *  UnitDelay: '<S1357>/Unit Delay'
         */
        rtb_Switch1_dj = (uint16)(((uint32)VLDR_ac_DW.UnitDelay_DSTATE_er) + 1U);
    }

    /* End of Switch: '<S1357>/Switch1' */

    /* Update for UnitDelay: '<S1357>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_er = rtb_Switch1_dj;

    /* End of Outputs for SubSystem: '<S1331>/Turn On Delay Sample' */

    /* Logic: '<S1325>/NOT4' */
    rtb_TmpSignalConversionAtVeRC_e = (rtb_VM_Conditional_Signal_DsblD ||
        rtb_VM_Conditional_Signal_PostC);

    /* Outputs for Atomic SubSystem: '<S1362>/EdgeFalling1' */
    /* Logic: '<S1364>/AND' incorporates:
     *  Logic: '<S1364>/OR1'
     *  UnitDelay: '<S1364>/Unit Delay'
     */
    rtb_NOT4 = ((!rtb_Logical24_pk) && (VLDR_ac_DW.UnitDelay_DSTATE_nd));

    /* Update for UnitDelay: '<S1364>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_nd = rtb_Logical24_pk;

    /* End of Outputs for SubSystem: '<S1362>/EdgeFalling1' */

    /* Logic: '<S1362>/Logical5' */
    rtb_NOT4 = (rtb_TmpSignalConversionAtVeRC_e || rtb_NOT4);

    /* Logic: '<S1363>/Fail Counter Reset' incorporates:
     *  UnitDelay: '<S1363>/Unit Delay'
     *  UnitDelay: '<S1363>/Unit Delay1'
     */
    rtb_Logical24_pk = ((rtb_NOT4 || (VLDR_ac_DW.UnitDelay_DSTATE_c5)) ||
                        (VLDR_ac_DW.UnitDelay1_DSTATE_mc));

    /* Outputs for Atomic SubSystem: '<S1363>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S1363>/Counter Reset  Enabled ' */
    /* Switch: '<S1370>/Switch1' incorporates:
     *  Constant: '<S1354>/KeVLDR_Cnt_OEXV_Position_Wait_Time'
     *  Constant: '<S1356>/KeVLDR_b_OEXV_PosActFA_Enbl'
     *  Logic: '<S1331>/Logical1'
     *  Logic: '<S1331>/Logical18'
     *  Logic: '<S1357>/AND'
     *  Logic: '<S1363>/NOT6'
     *  RelationalOperator: '<S1357>/Greater  Than'
     *  Switch: '<S1370>/Switch2'
     *  Switch: '<S1371>/Switch1'
     */
    if (rtb_Logical24_pk)
    {
        /* Switch: '<S1370>/Switch1' incorporates:
         *  Constant: '<S1370>/Constant Value2'
         */
        VeVLDR_Cnt_OEXV_PerfDiag_FailCnt = 0U;

        /* Switch: '<S1371>/Switch1' incorporates:
         *  Constant: '<S1371>/Constant Value2'
         */
        VeVLDR_Cnt_OEXV_PerfDiag_SmpCnt = 0U;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S1331>/Turn On Delay Sample' */
        if (rtb_Comparison4_k && ((rtb_TmpSignalConversionAtVeCPDR &&
                                   (rtb_Switch1_dj >=
                                    KeVLDR_Cnt_OEXV_Position_Wait_Time)) ||
                                  (rtb_Logical11 && (KeVLDR_b_OEXV_PosActFA_Enbl))))
        {
            /* Switch: '<S1370>/Switch2' incorporates:
             *  Constant: '<S1370>/Constant Value1'
             *  Sum: '<S1370>/Subtraction'
             *  Switch: '<S1370>/Switch1'
             *  UnitDelay: '<S1370>/Unit Delay'
             */
            VeVLDR_Cnt_OEXV_PerfDiag_FailCnt = (uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_e2) + 1U);
        }
        else
        {
            /* Switch: '<S1370>/Switch1' incorporates:
             *  Switch: '<S1370>/Switch2'
             *  UnitDelay: '<S1370>/Unit Delay'
             */
            VeVLDR_Cnt_OEXV_PerfDiag_FailCnt = VLDR_ac_DW.UnitDelay_DSTATE_e2;
        }

        /* End of Outputs for SubSystem: '<S1331>/Turn On Delay Sample' */

        /* Switch: '<S1371>/Switch2' */
        if (rtb_Comparison4_k)
        {
            /* Switch: '<S1371>/Switch1' incorporates:
             *  Constant: '<S1371>/Constant Value1'
             *  Sum: '<S1371>/Subtraction'
             *  Switch: '<S1371>/Switch2'
             *  UnitDelay: '<S1371>/Unit Delay'
             */
            VeVLDR_Cnt_OEXV_PerfDiag_SmpCnt = (uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_ol) + 1U);
        }
        else
        {
            /* Switch: '<S1371>/Switch1' incorporates:
             *  Switch: '<S1371>/Switch2'
             *  UnitDelay: '<S1371>/Unit Delay'
             */
            VeVLDR_Cnt_OEXV_PerfDiag_SmpCnt = VLDR_ac_DW.UnitDelay_DSTATE_ol;
        }

        /* End of Switch: '<S1371>/Switch2' */
    }

    /* End of Switch: '<S1370>/Switch1' */
    /* End of Outputs for SubSystem: '<S1363>/Counter Reset  Enabled 1' */

    /* Update for UnitDelay: '<S1370>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_e2 = VeVLDR_Cnt_OEXV_PerfDiag_FailCnt;

    /* End of Outputs for SubSystem: '<S1363>/Counter Reset  Enabled ' */

    /* Outputs for Atomic SubSystem: '<S1363>/Counter Reset  Enabled 1' */
    /* Update for UnitDelay: '<S1371>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_ol = VeVLDR_Cnt_OEXV_PerfDiag_SmpCnt;

    /* End of Outputs for SubSystem: '<S1363>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S1363>/Greater Than or Equal ' incorporates:
     *  Constant: '<S1359>/KeVLDR_Cnt_OEXV_PerfDiag_FailCnt'
     */
    rtb_TmpSignalConversionAtVeCPDR = (VeVLDR_Cnt_OEXV_PerfDiag_FailCnt >=
        KeVLDR_Cnt_OEXV_PerfDiag_FailCnt);

    /* Logic: '<S1363>/NOT5' incorporates:
     *  Constant: '<S1360>/KeVLDR_Cnt_OEXV_PerfDiag_SmpCnt'
     *  Logic: '<S1363>/NOT3'
     *  RelationalOperator: '<S1363>/Less Than  or Equal'
     */
    rtb_Logical24_pk = ((VeVLDR_Cnt_OEXV_PerfDiag_SmpCnt >=
                         KeVLDR_Cnt_OEXV_PerfDiag_SmpCnt) &&
                        (!rtb_TmpSignalConversionAtVeCPDR));

    /* Switch: '<S1376>/Switch1' incorporates:
     *  Constant: '<S1369>/Constant Value'
     *  DataStoreWrite: '<S1332>/Data Store Write1'
     *  Switch: '<S1375>/Switch1'
     */
    if (rtb_VM_Conditional_Signal_PostC)
    {
        VLDR_ac_DW.NeVLDR_Cnt_OEXV_PerfDiag_MFOP = 0U;
    }
    else
    {
        if (rtb_Logical24_pk)
        {
            /* MinMax: '<S1369>/Minimum2' incorporates:
             *  DataStoreRead: '<S1332>/Data Store Read1'
             *  Switch: '<S1375>/Switch1'
             */
            if (VeVLDR_Cnt_OEXV_PerfDiag_FailCnt >
                    VLDR_ac_DW.NeVLDR_Cnt_OEXV_PerfDiag_MFOP)
            {
                /* DataStoreWrite: '<S1332>/Data Store Write1' incorporates:
                 *  Switch: '<S1375>/Switch1'
                 */
                VLDR_ac_DW.NeVLDR_Cnt_OEXV_PerfDiag_MFOP =
                    VeVLDR_Cnt_OEXV_PerfDiag_FailCnt;
            }

            /* End of MinMax: '<S1369>/Minimum2' */
        }
    }

    /* End of Switch: '<S1376>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S1362>/Fail' */
    VLDR_ac_Fail(rtb_TmpSignalConversionAtVeCPDR,
                 &VLDR_ac_B.VariantMergeForOutportVeVLDR_e_);

    /* End of Outputs for SubSystem: '<S1362>/Fail' */

    /* Outputs for Enabled SubSystem: '<S1362>/Init' */
    VLDR_ac_Init_a(rtb_NOT4, &VLDR_ac_B.VariantMergeForOutportVeVLDR_e_);

    /* End of Outputs for SubSystem: '<S1362>/Init' */

    /* Outputs for Enabled SubSystem: '<S1362>/Pass' */
    VLDR_ac_Pass(rtb_Logical24_pk, &VLDR_ac_B.VariantMergeForOutportVeVLDR_e_);

    /* End of Outputs for SubSystem: '<S1362>/Pass' */

    /* VariantMerge generated from: '<S1318>/OEXV_PerfDiag_FltDtct' incorporates:
     *  Constant: '<S1365>/Constant'
     *  RelationalOperator: '<S1362>/Relational Operator'
     *  VariantMerge generated from: '<S1318>/VeVLDR_e_FaultSts_AC_RefrigExpVlvActD_CntrlCktPerf'
     */
    VLDR_ac_B.VariantMergeForOutportOEXV_Perf = (((uint32)
        VLDR_ac_B.VariantMergeForOutportVeVLDR_e_) == CeDFIB_e_Fail);

    /* RelationalOperator: '<S1377>/Comparison2' incorporates:
     *  Constant: '<S1394>/KeVLDR_n_OEXV_CompSpdThr'
     */
    rtb_Logical11 = (rtb_TmpSignalConversionAtVeT_dk >= KeVLDR_n_OEXV_CompSpdThr);

    /* Outputs for Atomic SubSystem: '<S1377>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S1396>/EdgeRising' */
    /* Logic: '<S1397>/AND' incorporates:
     *  Logic: '<S1397>/OR1'
     *  UnitDelay: '<S1397>/Unit Delay'
     */
    rtb_Comparison4_k = (rtb_Logical11 && (!VLDR_ac_DW.UnitDelay_DSTATE_hl));

    /* Update for UnitDelay: '<S1397>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_hl = rtb_Logical11;

    /* End of Outputs for SubSystem: '<S1396>/EdgeRising' */

    /* Switch: '<S1396>/Switch1' incorporates:
     *  Logic: '<S1396>/OR'
     *  Logic: '<S1396>/OR1'
     */
    if ((!rtb_Logical11) || rtb_Comparison4_k)
    {
        /* Switch: '<S1396>/Switch1' incorporates:
         *  Constant: '<S1396>/Constant Value1'
         */
        rtb_Switch1_p = 0.0F;
    }
    else
    {
        /* Switch: '<S1396>/Switch1' incorporates:
         *  Constant: '<S1387>/Calib'
         *  Constant: '<S1395>/KeVLDR_t_OEXV_Comp_Run_Time'
         *  MinMax: '<S1396>/Minimum'
         *  Sum: '<S1396>/Summation'
         *  UnitDelay: '<S1396>/Unit Delay'
         */
        rtb_Switch1_p = fminf(KeVLDR_t_OEXV_Comp_Run_Time, HeVLDR_t_MedTED +
                              VLDR_ac_DW.UnitDelay_DSTATE_b);
    }

    /* End of Switch: '<S1396>/Switch1' */

    /* Update for UnitDelay: '<S1396>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_b = rtb_Switch1_p;

    /* End of Outputs for SubSystem: '<S1377>/Turn On Delay Time' */

    /* Rounding: '<S1380>/Rounding2' incorporates:
     *  Constant: '<S1419>/HeVLDR_K_OEXV_RefPress_Gain'
     *  Product: '<S1380>/Product'
     */
    VeVLDR_p_OEXV_PressRawData = roundf(rtb_TmpSignalConversionAtVeTA_b *
        HeVLDR_K_OEXV_RefPress_Gain);

    /* S-Function (sfix_bitop): '<S1382>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S1382>/StatusByte_AC_RefrigPresSnsrDCktPerf'
     *  S-Function (sfix_bitop): '<S1404>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1494>/Bitwise Operator2'
     */
    rtb_VM_Conditional_Signal_CPV_e = ((uint32)
        VLDR_ac_DW.StatusByte_AC_RefrigPresSnsrD_b) & 64U;

    /* Outputs for Atomic SubSystem: '<S1377>/Turn On Delay Time' */
    /* Logic: '<S1377>/Logical6' incorporates:
     *  Constant: '<S1381>/Constant'
     *  Constant: '<S1382>/Constant1'
     *  Constant: '<S1382>/Constant2'
     *  Constant: '<S1383>/Constant1'
     *  Constant: '<S1383>/Constant2'
     *  Constant: '<S1384>/Constant1'
     *  Constant: '<S1384>/Constant2'
     *  Constant: '<S1385>/Constant1'
     *  Constant: '<S1385>/Constant2'
     *  Constant: '<S1386>/HeVLDR_p_OEXV_RefPress_ShrtHigh'
     *  Constant: '<S1388>/KeVLDR_U_SysVltLwrLim'
     *  Constant: '<S1389>/KeVLDR_U_SysVltUprLim'
     *  Constant: '<S1390>/KeVLDR_b_OEXV_PressElctrDiag_LIN2BusOff_Ovrd'
     *  Constant: '<S1391>/KeVLDR_b_OEXV_PressElctrDiag_LOC_Ovrd'
     *  Constant: '<S1392>/KeVLDR_b_OEXV_PressElctrDiag_PressSens_Ovrd'
     *  Constant: '<S1393>/KeVLDR_b_OEXV_PressElctrDiag_ThrmlRlyErr_Ovrd'
     *  Constant: '<S1395>/KeVLDR_t_OEXV_Comp_Run_Time'
     *  DataStoreRead: '<S1382>/StatusByte_AC_RefrigPresSnsrDCktPerf'
     *  Logic: '<S1377>/Logical1'
     *  Logic: '<S1377>/Logical18'
     *  Logic: '<S1377>/Logical2'
     *  Logic: '<S1377>/Logical21'
     *  Logic: '<S1377>/Logical3'
     *  Logic: '<S1377>/Logical4'
     *  Logic: '<S1377>/Logical5'
     *  Logic: '<S1377>/Logical7'
     *  Logic: '<S1377>/Logical8'
     *  Logic: '<S1377>/Logical9'
     *  Logic: '<S1382>/Logical Operator'
     *  Logic: '<S1383>/Logical Operator'
     *  Logic: '<S1384>/Logical Operator'
     *  Logic: '<S1385>/Logical Operator'
     *  Logic: '<S1396>/AND'
     *  RelationalOperator: '<S1377>/Comparison1'
     *  RelationalOperator: '<S1377>/Comparison3'
     *  RelationalOperator: '<S1377>/Comparison4'
     *  RelationalOperator: '<S1377>/Comparison8'
     *  RelationalOperator: '<S1382>/Relational Operator1'
     *  RelationalOperator: '<S1382>/Relational Operator2'
     *  RelationalOperator: '<S1383>/Relational Operator1'
     *  RelationalOperator: '<S1383>/Relational Operator2'
     *  RelationalOperator: '<S1384>/Relational Operator1'
     *  RelationalOperator: '<S1384>/Relational Operator2'
     *  RelationalOperator: '<S1385>/Relational Operator1'
     *  RelationalOperator: '<S1385>/Relational Operator2'
     *  RelationalOperator: '<S1396>/Greater  Than'
     *  S-Function (sfix_bitop): '<S1382>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1382>/Bitwise Operator2'
     */
    VeVLDR_b_OEXV_PrsElctrFlt_DiagEn = (((((((((rtb_VM_Conditional_Signal_BF1_S <
        KeVLDR_U_SysVltUprLim) && (rtb_VM_Conditional_Signal_BF1_S >
        KeVLDR_U_SysVltLwrLim)) && (((uint32)rtb_TmpSignalConversionAtVePMTR) !=
        CePMTR_e_DISBL_All_Thrml)) && (((rtb_VariantMergeForOutportDFI_0 <= 0) ||
        (tmpRead_f != 0U)) || (KeVLDR_b_OEXV_PressElctrDiag_ThrmlRlyErr_Ovrd))) &&
        (((rtb_VariantMergeForOutportDFI_1 <= 0) || (rtb_UnitDelay_ly_tmp != 0U))
         || (KeVLDR_b_OEXV_PressElctrDiag_LIN2BusOff_Ovrd))) &&
        (((rtb_VariantMergeForOutportDFI_3 <= 0) ||
          (rtb_VariantMergeForOutportDFI_2 != 0U)) ||
         (KeVLDR_b_OEXV_PressElctrDiag_LOC_Ovrd))) && ((((((sint32)
        VLDR_ac_DW.StatusByte_AC_RefrigPresSnsrD_b) & 1) <= 0) ||
        (rtb_VM_Conditional_Signal_CPV_e != 0U)) ||
        (KeVLDR_b_OEXV_PressElctrDiag_PressSens_Ovrd))) && ((rtb_Logical11 &&
        (rtb_Switch1_p >= KeVLDR_t_OEXV_Comp_Run_Time)) ||
        (VeVLDR_p_OEXV_PressRawData != HeVLDR_p_OEXV_RefPress_ShrtHigh))) &&
        rtb_TmpSignalConversionAtVeDFIR);

    /* End of Outputs for SubSystem: '<S1377>/Turn On Delay Time' */

    /* RelationalOperator: '<S1404>/Relational Operator3' incorporates:
     *  Constant: '<S1404>/Constant3'
     */
    rtb_Comparison4_k = (rtb_VM_Conditional_Signal_CPV_e == 0U);

    /* Outputs for Atomic SubSystem: '<S1404>/EdgeFalling1' */
    /* Logic: '<S1404>/Logical Operator' incorporates:
     *  Logic: '<S1406>/OR1'
     */
    rtb_VariantMergeForOutportDF_ko = !rtb_Comparison4_k;

    /* End of Outputs for SubSystem: '<S1404>/EdgeFalling1' */

    /* S-Function (sfix_bitop): '<S1404>/Bitwise Operator3' incorporates:
     *  DataStoreRead: '<S1379>/Data Store Read1'
     *  S-Function (sfix_bitop): '<S1494>/Bitwise Operator3'
     */
    VeVLDR_b_EEXV_PrsElctrFlt_DiagE = ((uint32)
        VLDR_ac_DW.StatusByte_AC_RefrigPresSnsrD_b) & 1U;

    /* Logic: '<S1404>/Logical1' incorporates:
     *  Constant: '<S1402>/Calib'
     *  Constant: '<S1403>/KeVLDR_b_OEXV_PressElctrFlt_XYEnbl'
     *  Constant: '<S1404>/Constant1'
     *  Logic: '<S1379>/AND1'
     *  Logic: '<S1404>/Logical Operator'
     *  Logic: '<S1404>/Logical10'
     *  Logic: '<S1404>/Logical12'
     *  RelationalOperator: '<S1404>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S1404>/Bitwise Operator3'
     */
    rtb_Logical11 = (((VeVLDR_b_OEXV_PrsElctrFlt_DiagEn) &&
                      (KeVLDR_b_OEXV_PressElctrFlt_XYEnbl)) &&
                     ((!KeVLDR_b_AC_RefrigPresSnsrDCkt_LtchEnbl) ||
                      ((VeVLDR_b_EEXV_PrsElctrFlt_DiagE == 0U) ||
                       rtb_VariantMergeForOutportDF_ko)));

    /* VariantMerge generated from: '<S1318>/OEXV_PressShrtHigh' incorporates:
     *  Constant: '<S1398>/HeVLDR_p_OEXV_RefPress_ShrtHigh'
     *  RelationalOperator: '<S1378>/Comparison1'
     */
    VLDR_ac_B.VariantMergeForOutportOEXV_Pr_b = (VeVLDR_p_OEXV_PressRawData ==
        HeVLDR_p_OEXV_RefPress_ShrtHigh);

    /* Outputs for Atomic SubSystem: '<S1404>/EdgeFalling1' */
    /* Logic: '<S1406>/AND' incorporates:
     *  UnitDelay: '<S1406>/Unit Delay'
     */
    rtb_NOT4 = (rtb_VariantMergeForOutportDF_ko &&
                (VLDR_ac_DW.UnitDelay_DSTATE_oj));

    /* Update for UnitDelay: '<S1406>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_oj = rtb_Comparison4_k;

    /* End of Outputs for SubSystem: '<S1404>/EdgeFalling1' */

    /* Logic: '<S1404>/Logical5' */
    rtb_Comparison4_k = (rtb_TmpSignalConversionAtVeRC_e || rtb_NOT4);

    /* Logic: '<S1405>/Fail Counter Reset' incorporates:
     *  UnitDelay: '<S1405>/Unit Delay'
     *  UnitDelay: '<S1405>/Unit Delay1'
     */
    rtb_NOT4 = ((rtb_Comparison4_k || (VLDR_ac_DW.UnitDelay_DSTATE_eu)) ||
                (VLDR_ac_DW.UnitDelay1_DSTATE_oi));

    /* Outputs for Atomic SubSystem: '<S1405>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S1405>/Counter Reset  Enabled ' */
    /* Switch: '<S1412>/Switch1' incorporates:
     *  Constant: '<S1399>/HeVLDR_p_OEXV_RefPress_ShrtLow'
     *  Logic: '<S1378>/Logical18'
     *  Logic: '<S1405>/NOT6'
     *  RelationalOperator: '<S1378>/Comparison8'
     *  Switch: '<S1412>/Switch2'
     *  Switch: '<S1413>/Switch1'
     */
    if (rtb_NOT4)
    {
        /* Switch: '<S1412>/Switch1' incorporates:
         *  Constant: '<S1412>/Constant Value2'
         */
        VeVLDR_Cnt_OEXVPrsElFlt_FailCnt = 0U;

        /* Switch: '<S1413>/Switch1' incorporates:
         *  Constant: '<S1413>/Constant Value2'
         */
        VeVLDR_Cnt_OEXVPrsElFlt_SmpCnt = 0U;
    }
    else
    {
        if (rtb_Logical11 && ((VeVLDR_p_OEXV_PressRawData ==
                               HeVLDR_p_OEXV_RefPress_ShrtLow) ||
                              (VLDR_ac_B.VariantMergeForOutportOEXV_Pr_b)))
        {
            /* Switch: '<S1412>/Switch2' incorporates:
             *  Constant: '<S1412>/Constant Value1'
             *  Sum: '<S1412>/Subtraction'
             *  Switch: '<S1412>/Switch1'
             *  UnitDelay: '<S1412>/Unit Delay'
             */
            VeVLDR_Cnt_OEXVPrsElFlt_FailCnt = (uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_nl) + 1U);
        }
        else
        {
            /* Switch: '<S1412>/Switch1' incorporates:
             *  Switch: '<S1412>/Switch2'
             *  UnitDelay: '<S1412>/Unit Delay'
             */
            VeVLDR_Cnt_OEXVPrsElFlt_FailCnt = VLDR_ac_DW.UnitDelay_DSTATE_nl;
        }

        /* Switch: '<S1413>/Switch2' */
        if (rtb_Logical11)
        {
            /* Switch: '<S1413>/Switch1' incorporates:
             *  Constant: '<S1413>/Constant Value1'
             *  Sum: '<S1413>/Subtraction'
             *  Switch: '<S1413>/Switch2'
             *  UnitDelay: '<S1413>/Unit Delay'
             */
            VeVLDR_Cnt_OEXVPrsElFlt_SmpCnt = (uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_nt5) + 1U);
        }
        else
        {
            /* Switch: '<S1413>/Switch1' incorporates:
             *  Switch: '<S1413>/Switch2'
             *  UnitDelay: '<S1413>/Unit Delay'
             */
            VeVLDR_Cnt_OEXVPrsElFlt_SmpCnt = VLDR_ac_DW.UnitDelay_DSTATE_nt5;
        }

        /* End of Switch: '<S1413>/Switch2' */
    }

    /* End of Switch: '<S1412>/Switch1' */
    /* End of Outputs for SubSystem: '<S1405>/Counter Reset  Enabled 1' */

    /* Update for UnitDelay: '<S1412>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_nl = VeVLDR_Cnt_OEXVPrsElFlt_FailCnt;

    /* End of Outputs for SubSystem: '<S1405>/Counter Reset  Enabled ' */

    /* Outputs for Atomic SubSystem: '<S1405>/Counter Reset  Enabled 1' */
    /* Update for UnitDelay: '<S1413>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_nt5 = VeVLDR_Cnt_OEXVPrsElFlt_SmpCnt;

    /* End of Outputs for SubSystem: '<S1405>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S1405>/Greater Than or Equal ' incorporates:
     *  Constant: '<S1400>/KeVLDR_Cnt_OEXV_PressElctrFlt_FailCnt'
     */
    rtb_NOT4 = (VeVLDR_Cnt_OEXVPrsElFlt_FailCnt >=
                KeVLDR_Cnt_OEXV_PressElctrFlt_FailCnt);

    /* Logic: '<S1405>/NOT5' incorporates:
     *  Constant: '<S1401>/KeVLDR_Cnt_OEXV_PressElctrFlt_SmpCnt'
     *  Logic: '<S1405>/NOT3'
     *  RelationalOperator: '<S1405>/Less Than  or Equal'
     */
    rtb_Logical2_nq = ((VeVLDR_Cnt_OEXVPrsElFlt_SmpCnt >=
                        KeVLDR_Cnt_OEXV_PressElctrFlt_SmpCnt) && (!rtb_NOT4));

    /* Switch: '<S1418>/Switch1' incorporates:
     *  Constant: '<S1411>/Constant Value'
     *  DataStoreWrite: '<S1379>/Data Store Write1'
     *  Switch: '<S1417>/Switch1'
     */
    if (rtb_VM_Conditional_Signal_PostC)
    {
        VLDR_ac_DW.NeVLDR_Cnt_OEXV_PressElctrFlt_M = 0U;
    }
    else
    {
        if (rtb_Logical2_nq)
        {
            /* MinMax: '<S1411>/Minimum2' incorporates:
             *  DataStoreRead: '<S1379>/Data Store Read2'
             *  Switch: '<S1417>/Switch1'
             */
            if (VeVLDR_Cnt_OEXVPrsElFlt_FailCnt >
                    VLDR_ac_DW.NeVLDR_Cnt_OEXV_PressElctrFlt_M)
            {
                /* DataStoreWrite: '<S1379>/Data Store Write1' incorporates:
                 *  Switch: '<S1417>/Switch1'
                 */
                VLDR_ac_DW.NeVLDR_Cnt_OEXV_PressElctrFlt_M =
                    VeVLDR_Cnt_OEXVPrsElFlt_FailCnt;
            }

            /* End of MinMax: '<S1411>/Minimum2' */
        }
    }

    /* End of Switch: '<S1418>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S1404>/Fail' */
    VLDR_ac_Fail(rtb_NOT4, &VLDR_ac_B.VariantMergeForOutportVeVLDR__a);

    /* End of Outputs for SubSystem: '<S1404>/Fail' */

    /* Outputs for Enabled SubSystem: '<S1404>/Init' */
    VLDR_ac_Init_a(rtb_Comparison4_k, &VLDR_ac_B.VariantMergeForOutportVeVLDR__a);

    /* End of Outputs for SubSystem: '<S1404>/Init' */

    /* Outputs for Enabled SubSystem: '<S1404>/Pass' */
    VLDR_ac_Pass(rtb_Logical2_nq, &VLDR_ac_B.VariantMergeForOutportVeVLDR__a);

    /* End of Outputs for SubSystem: '<S1404>/Pass' */

    /* VariantMerge generated from: '<S1318>/OEXV_PressElctrFlt_FltDtct' incorporates:
     *  Constant: '<S1407>/Constant'
     *  RelationalOperator: '<S1404>/Relational Operator'
     *  VariantMerge generated from: '<S1318>/VeVLDR_e_FaultSts_AC_RefrigPresSnsrDCkt'
     */
    VLDR_ac_B.VariantMergeForOutportOEXV_Pres = (((uint32)
        VLDR_ac_B.VariantMergeForOutportVeVLDR__a) == CeDFIB_e_Fail);

    /* VariantMerge generated from: '<S1318>/DFIR_OEXV_PressSensSNA' incorporates:
     *  Constant: '<S1435>/Constant1'
     *  Constant: '<S1435>/Constant2'
     *  Constant: '<S1436>/Constant1'
     *  Constant: '<S1436>/Constant2'
     *  Constant: '<S1437>/Constant1'
     *  Constant: '<S1437>/Constant2'
     *  Constant: '<S1438>/Constant1'
     *  Constant: '<S1438>/Constant2'
     *  Constant: '<S1442>/Constant1'
     *  Constant: '<S1442>/Constant2'
     *  Constant: '<S1443>/Constant1'
     *  Constant: '<S1443>/Constant2'
     *  Constant: '<S1445>/Constant1'
     *  Constant: '<S1445>/Constant2'
     *  Constant: '<S1455>/KeVLDR_b_OEXV_PressSens_LIN2BusOff_Ovrd'
     *  Constant: '<S1456>/KeVLDR_b_OEXV_PressSens_LOC_Ovrd'
     *  Constant: '<S1459>/KeVLDR_b_OEXV_PressSens_PressElctrFlt_Ovrd'
     *  Constant: '<S1460>/KeVLDR_b_OEXV_PressSens_PressSensAFlts_Ovrd'
     *  Constant: '<S1463>/KeVLDR_b_OEXV_PressSens_ThrmlRlyErr_Ovrd'
     *  DataStoreRead: '<S1435>/StatusByte_AC_RefrigPresSnsrAHi'
     *  DataStoreRead: '<S1436>/StatusByte_AC_RefrigPresSnsrALo'
     *  DataStoreRead: '<S1437>/StatusByte_AC_RefrigPresSnsrAPerf'
     *  DataStoreRead: '<S1438>/StatusByte_AC_RefrigPresSnsrDCkt'
     *  Logic: '<S1420>/Logical14'
     *  Logic: '<S1420>/Logical18'
     *  Logic: '<S1420>/Logical2'
     *  Logic: '<S1420>/Logical21'
     *  Logic: '<S1420>/Logical23'
     *  Logic: '<S1420>/Logical24'
     *  Logic: '<S1420>/Logical25'
     *  Logic: '<S1420>/Logical26'
     *  Logic: '<S1420>/Logical27'
     *  Logic: '<S1420>/Logical3'
     *  Logic: '<S1420>/Logical31'
     *  Logic: '<S1420>/Logical40'
     *  Logic: '<S1420>/Logical7'
     *  Logic: '<S1420>/Logical8'
     *  Logic: '<S1435>/Logical Operator'
     *  Logic: '<S1436>/Logical Operator'
     *  Logic: '<S1437>/Logical Operator'
     *  Logic: '<S1438>/Logical Operator'
     *  Logic: '<S1442>/Logical Operator'
     *  Logic: '<S1443>/Logical Operator'
     *  Logic: '<S1445>/Logical Operator'
     *  RelationalOperator: '<S1435>/Relational Operator1'
     *  RelationalOperator: '<S1435>/Relational Operator2'
     *  RelationalOperator: '<S1436>/Relational Operator1'
     *  RelationalOperator: '<S1436>/Relational Operator2'
     *  RelationalOperator: '<S1437>/Relational Operator1'
     *  RelationalOperator: '<S1437>/Relational Operator2'
     *  RelationalOperator: '<S1438>/Relational Operator1'
     *  RelationalOperator: '<S1438>/Relational Operator2'
     *  RelationalOperator: '<S1442>/Relational Operator1'
     *  RelationalOperator: '<S1442>/Relational Operator2'
     *  RelationalOperator: '<S1443>/Relational Operator1'
     *  RelationalOperator: '<S1443>/Relational Operator2'
     *  RelationalOperator: '<S1445>/Relational Operator1'
     *  RelationalOperator: '<S1445>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S1435>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1435>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1436>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1436>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1437>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1437>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1438>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1438>/Bitwise Operator2'
     */
    rtb_Logical11 = (((((((rtb_VariantMergeForOutportDFI_0 <= 0) || (tmpRead_f
                           != 0U)) || (KeVLDR_b_OEXV_PressSens_ThrmlRlyErr_Ovrd))
                        && (((rtb_VariantMergeForOutportDFI_1 <= 0) ||
                          (rtb_UnitDelay_ly_tmp != 0U)) ||
                            (KeVLDR_b_OEXV_PressSens_LIN2BusOff_Ovrd))) &&
                       ((((((sint32)VLDR_ac_DW.StatusByte_AC_RefrigPresSnsrDCk)
                           & 1) <= 0) || ((((uint32)
                            VLDR_ac_DW.StatusByte_AC_RefrigPresSnsrDCk) & 64U)
                          != 0U)) || (KeVLDR_b_OEXV_PressSens_PressElctrFlt_Ovrd)))
                      && (((rtb_VariantMergeForOutportDFI_3 <= 0) ||
                           (rtb_VariantMergeForOutportDFI_2 != 0U)) ||
                          (KeVLDR_b_OEXV_PressSens_LOC_Ovrd))) && ((((((((sint32)
                            VLDR_ac_DW.StatusByte_AC_RefrigPresSnsrAPe) & 1) <=
                          0) || ((((uint32)
                            VLDR_ac_DW.StatusByte_AC_RefrigPresSnsrAPe) & 64U)
                          != 0U)) && (((((sint32)
                            VLDR_ac_DW.StatusByte_AC_RefrigPresSnsrALo) & 1) <=
                          0) || ((((uint32)
                            VLDR_ac_DW.StatusByte_AC_RefrigPresSnsrALo) & 64U)
                          != 0U))) && (((((sint32)
                           VLDR_ac_DW.StatusByte_AC_RefrigPresSnsrAHi) & 1) <= 0)
                        || ((((uint32)VLDR_ac_DW.StatusByte_AC_RefrigPresSnsrAHi)
                          & 64U) != 0U))) ||
                      (KeVLDR_b_OEXV_PressSens_PressSensAFlts_Ovrd)));

    /* UnitDelay: '<S1495>/Unit Delay1' incorporates:
     *  Constant: '<S1431>/Constant'
     *  Constant: '<S1448>/KeVLDR_U_SysVltLwrLim'
     *  Constant: '<S1449>/KeVLDR_U_SysVltUprLim'
     *  Logic: '<S1420>/Logical1'
     *  Logic: '<S1420>/Logical33'
     *  RelationalOperator: '<S1420>/Comparison1'
     *  RelationalOperator: '<S1420>/Comparison3'
     *  RelationalOperator: '<S1420>/Comparison8'
     */
    rtb_AND_ck = ((((((uint32)rtb_TmpSignalConversionAtVePMTR) !=
                     CePMTR_e_DISBL_All_Thrml) &&
                    ((rtb_VM_Conditional_Signal_BF1_S < KeVLDR_U_SysVltUprLim) &&
                     (rtb_VM_Conditional_Signal_BF1_S > KeVLDR_U_SysVltLwrLim)))
                   && rtb_Logical11) && rtb_TmpSignalConversionAtVeDFIR);

    /* S-Function (sfix_bitop): '<S1439>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S1439>/StatusByte_AC_RefrigTempSnsr4CktPerf'
     *  S-Function (sfix_bitop): '<S1515>/Bitwise Operator2'
     */
    rtb_Comparison4_mj_tmp_0 = ((sint32)
        VLDR_ac_DW.StatusByte_AC_RefrigTempSnsr4Ck) & 1;

    /* S-Function (sfix_bitop): '<S1439>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S1439>/StatusByte_AC_RefrigTempSnsr4CktPerf'
     *  S-Function (sfix_bitop): '<S1515>/Bitwise Operator1'
     */
    rtb_Comparison4_mj_tmp = ((uint32)VLDR_ac_DW.StatusByte_AC_RefrigTempSnsr4Ck)
        & 64U;

    /* S-Function (sfix_bitop): '<S1440>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S1440>/StatusByte_AC_RefrigTempSnsrDCkt'
     *  S-Function (sfix_bitop): '<S1534>/Bitwise Operator2'
     */
    rtb_Comparison4_mj_tmp_1 = ((uint32)
        VLDR_ac_DW.StatusByte_AC_RefrigTempSnsrDCk) & 64U;

    /* VariantMerge generated from: '<S1318>/DFIR_OEXV_PressSens' incorporates:
     *  Constant: '<S1434>/Constant1'
     *  Constant: '<S1434>/Constant2'
     *  Constant: '<S1439>/Constant1'
     *  Constant: '<S1439>/Constant2'
     *  Constant: '<S1440>/Constant1'
     *  Constant: '<S1440>/Constant2'
     *  Constant: '<S1441>/Constant1'
     *  Constant: '<S1441>/Constant2'
     *  Constant: '<S1444>/Constant1'
     *  Constant: '<S1444>/Constant2'
     *  Constant: '<S1454>/KeVLDR_b_OEXV_PressSens_EACPerf_Ovrd'
     *  Constant: '<S1457>/KeVLDR_b_OEXV_PressSens_LostCommEAC_Ovrd'
     *  Constant: '<S1458>/KeVLDR_b_OEXV_PressSens_PerfDiag_Ovrd'
     *  Constant: '<S1461>/KeVLDR_b_OEXV_PressSens_TempElctrFlt_Ovrd'
     *  Constant: '<S1462>/KeVLDR_b_OEXV_PressSens_TempSens_Ovrd'
     *  DataStoreRead: '<S1434>/StatusByte_AC_RefrigExpVlvActD_CntrlCktPerf'
     *  DataStoreRead: '<S1440>/StatusByte_AC_RefrigTempSnsrDCkt'
     *  DataStoreRead: '<S1441>/StatusByte_EACPerf'
     *  DataStoreRead: '<S1444>/StatusByte_LostCommEAC'
     *  Logic: '<S1420>/Logical10'
     *  Logic: '<S1420>/Logical11'
     *  Logic: '<S1420>/Logical12'
     *  Logic: '<S1420>/Logical17'
     *  Logic: '<S1420>/Logical19'
     *  Logic: '<S1420>/Logical20'
     *  Logic: '<S1420>/Logical22'
     *  Logic: '<S1420>/Logical29'
     *  Logic: '<S1420>/Logical30'
     *  Logic: '<S1420>/Logical35'
     *  Logic: '<S1420>/Logical4'
     *  Logic: '<S1420>/Logical5'
     *  Logic: '<S1420>/Logical9'
     *  Logic: '<S1434>/Logical Operator'
     *  Logic: '<S1439>/Logical Operator'
     *  Logic: '<S1440>/Logical Operator'
     *  Logic: '<S1441>/Logical Operator'
     *  Logic: '<S1444>/Logical Operator'
     *  RelationalOperator: '<S1434>/Relational Operator1'
     *  RelationalOperator: '<S1434>/Relational Operator2'
     *  RelationalOperator: '<S1439>/Relational Operator1'
     *  RelationalOperator: '<S1439>/Relational Operator2'
     *  RelationalOperator: '<S1440>/Relational Operator1'
     *  RelationalOperator: '<S1440>/Relational Operator2'
     *  RelationalOperator: '<S1441>/Relational Operator1'
     *  RelationalOperator: '<S1441>/Relational Operator2'
     *  RelationalOperator: '<S1444>/Relational Operator1'
     *  RelationalOperator: '<S1444>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S1434>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1439>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1439>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1440>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1440>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1441>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1441>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1444>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1444>/Bitwise Operator2'
     */
    rtb_Comparison4_k = ((((((((sint32)VLDR_ac_DW.StatusByte_EACPerf) & 1) <= 0)
                            || ((((uint32)VLDR_ac_DW.StatusByte_EACPerf) & 64U)
        != 0U)) || (KeVLDR_b_OEXV_PressSens_EACPerf_Ovrd)) && ((((((sint32)
        VLDR_ac_DW.StatusByte_LostCommEAC) & 1) <= 0) || ((((uint32)
        VLDR_ac_DW.StatusByte_LostCommEAC) & 64U) != 0U)) ||
                           (KeVLDR_b_OEXV_PressSens_LostCommEAC_Ovrd))) &&
                         ((((((((sint32)
        VLDR_ac_DW.StatusByte_AC_RefrigTempSnsrDCk) & 1) <= 0) ||
        (rtb_Comparison4_mj_tmp_1 != 0U)) ||
                            (KeVLDR_b_OEXV_PressSens_TempElctrFlt_Ovrd)) &&
                           ((((((sint32)
        VLDR_ac_DW.StatusByte_AC_RefrigExpVlvActD_) & 1) <= 0) ||
        (rtb_VariantMergeForOutportDFI_4 != 0U)) ||
                            (KeVLDR_b_OEXV_PressSens_PerfDiag_Ovrd))) &&
                          (((rtb_Comparison4_mj_tmp_0 <= 0) ||
                            (rtb_Comparison4_mj_tmp != 0U)) ||
                           (KeVLDR_b_OEXV_PressSens_TempSens_Ovrd))));

    /* Logic: '<S1420>/Logical6' incorporates:
     *  Constant: '<S1432>/Constant'
     *  Constant: '<S1433>/Constant'
     *  Constant: '<S1451>/KeVLDR_b_OEXV_ActCool_Disbl'
     *  Logic: '<S1420>/AND3'
     *  Logic: '<S1420>/Logical13'
     *  RelationalOperator: '<S1420>/Comparison4'
     *  RelationalOperator: '<S1420>/Comparison5'
     *  SignalConversion generated from: '<S1>/VeTAIR_e_CompStat'
     *  SignalConversion generated from: '<S1>/VeTHMR_e_BatThrmlSt'
     */
    VeVLDR_b_OEXV_PressSensLatch_En = (((rtb_Comparison4_k && ((((uint32)
        rtb_TmpSignalConversionAtVeTH_j) == CeTHMR_e_ActiveCooling) ||
        (KeVLDR_b_OEXV_ActCool_Disbl))) && (((uint32)
        rtb_TmpSignalConversionAtVeT_a5) != CeTAIR_e_Degraded)) &&
        (!rtb_TmpSignalConversionAtVeTA_i));

    /* Product: '<S1527>/Product' incorporates:
     *  Constant: '<S1424>/Constant Value1'
     *  Constant: '<S1446>/Calib'
     *  Product: '<S1424>/Multiplication3'
     */
    rtb_TmpSignalConversionAtVeTR_a = HeVLDR_t_MedTED / 2.0F;

    /* Product: '<S1424>/Multiplication2' incorporates:
     *  Constant: '<S1474>/KeVLDR_t_OEXV_FilterDeriv_CutOff'
     *  Product: '<S1424>/Multiplication4'
     *  Sum: '<S1424>/Summation'
     *  Sum: '<S1424>/Summation1'
     *  Sum: '<S1424>/Summation2'
     *  UnitDelay: '<S1424>/Unit Delay'
     *  UnitDelay: '<S1424>/Unit Delay1'
     */
    rtb_Switch1_p = ((rtb_TmpSignalConversionAtVeT_dk -
                      ((rtb_TmpSignalConversionAtVeTR_a -
                        KeVLDR_t_OEXV_FilterDeriv_CutOff) *
                       VLDR_ac_DW.UnitDelay1_DSTATE)) -
                     VLDR_ac_DW.UnitDelay_DSTATE_o) /
        (rtb_TmpSignalConversionAtVeTR_a + KeVLDR_t_OEXV_FilterDeriv_CutOff);

    /* Outputs for Atomic SubSystem: '<S1420>/Digital Lowpass Reset Enabled' */
    /* Product: '<S1527>/Product' incorporates:
     *  UnitDelay: '<S1425>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeTR_a = VLDR_ac_DW.UnitDelay_DSTATE_h;

    /* Switch: '<S1425>/Switch1' incorporates:
     *  Constant: '<S1475>/KeVLDR_t_OEXV_LPF_Coef'
     *  Product: '<S1425>/Multiplication'
     *  Sum: '<S1425>/Subtraction'
     *  Sum: '<S1425>/Summation'
     */
    VeVLDR_dn_CompAccelFilter_OEXV = ((rtb_Switch1_p -
        rtb_TmpSignalConversionAtVeTR_a) * KeVLDR_t_OEXV_LPF_Coef) +
        rtb_TmpSignalConversionAtVeTR_a;

    /* Update for UnitDelay: '<S1425>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_h = VeVLDR_dn_CompAccelFilter_OEXV;

    /* End of Outputs for SubSystem: '<S1420>/Digital Lowpass Reset Enabled' */

    /* RelationalOperator: '<S1420>/Comparison12' incorporates:
     *  Constant: '<S1464>/KeVLDR_dn_OEXV_CompAccelThr'
     */
    rtb_TmpSignalConversionAtVeTA_i = (VeVLDR_dn_CompAccelFilter_OEXV >=
        KeVLDR_dn_OEXV_CompAccelThr);

    /* Outputs for Atomic SubSystem: '<S1420>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S1478>/EdgeFalling1' */
    /* Logic: '<S1482>/AND' incorporates:
     *  Logic: '<S1482>/OR1'
     *  UnitDelay: '<S1482>/Unit Delay'
     */
    rtb_OR1_dx = ((!rtb_TmpSignalConversionAtVeTA_i) &&
                  (VLDR_ac_DW.UnitDelay_DSTATE_hx));

    /* Update for UnitDelay: '<S1482>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_hx = rtb_TmpSignalConversionAtVeTA_i;

    /* End of Outputs for SubSystem: '<S1478>/EdgeFalling1' */

    /* Switch: '<S1478>/Switch' */
    if (rtb_OR1_dx)
    {
        /* Switch: '<S1478>/Switch' incorporates:
         *  Constant: '<S1472>/KeVLDR_t_OEXV_CompAC_Time'
         */
        rtb_TmpSignalConversionAtVeTR_a = KeVLDR_t_OEXV_CompAC_Time;
    }
    else
    {
        /* Switch: '<S1478>/Switch' incorporates:
         *  Constant: '<S1446>/Calib'
         *  Constant: '<S1478>/Constant Value1'
         *  MinMax: '<S1478>/Minimum'
         *  Sum: '<S1478>/Summation'
         *  UnitDelay: '<S1478>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeTR_a = fmaxf(VLDR_ac_DW.UnitDelay_DSTATE_ow -
            HeVLDR_t_MedTED, 0.0F);
    }

    /* End of Switch: '<S1478>/Switch' */

    /* Logic: '<S1478>/AND' incorporates:
     *  Constant: '<S1478>/Constant Value2'
     *  RelationalOperator: '<S1478>/Greater  Than'
     */
    VeVLDR_b_CompAcc_OEXV = (rtb_TmpSignalConversionAtVeTA_i ||
        (rtb_TmpSignalConversionAtVeTR_a > 0.0F));

    /* Update for UnitDelay: '<S1478>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_ow = rtb_TmpSignalConversionAtVeTR_a;

    /* End of Outputs for SubSystem: '<S1420>/Turn Off Delay Time' */

    /* Outputs for Atomic SubSystem: '<S1420>/Hysteresis1' */
    /* Switch: '<S1447>/Switch1' incorporates:
     *  Constant: '<S1468>/KeVLDR_n_OEXV_SpdThrshld_RSP_Diag'
     *  RelationalOperator: '<S1447>/Greater  Than'
     */
    if (rtb_TmpSignalConversionAtVeT_dk > KeVLDR_n_OEXV_SpdThrshld_RSP_Diag)
    {
        /* Switch: '<S1447>/Switch1' incorporates:
         *  Constant: '<S1447>/Constant Value'
         */
        rtb_TmpSignalConversionAtVeR_go = true;
    }
    else
    {
        /* Switch: '<S1447>/Switch1' incorporates:
         *  Constant: '<S1467>/KeVLDR_n_OEXV_SpdThrshld_LSP_Diag'
         *  RelationalOperator: '<S1447>/Greater  Than1'
         *  UnitDelay: '<S1447>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeR_go = ((rtb_TmpSignalConversionAtVeT_dk >=
            KeVLDR_n_OEXV_SpdThrshld_LSP_Diag) &&
            (VLDR_ac_DW.UnitDelay_DSTATE_jz2));
    }

    /* End of Switch: '<S1447>/Switch1' */

    /* Update for UnitDelay: '<S1447>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_jz2 = rtb_TmpSignalConversionAtVeR_go;

    /* End of Outputs for SubSystem: '<S1420>/Hysteresis1' */

    /* RelationalOperator: '<S1420>/Comparison2' incorporates:
     *  Constant: '<S1466>/KeVLDR_n_OEXV_LowCompSpd'
     */
    rtb_OR1_dx = (rtb_TmpSignalConversionAtVeT_dk > KeVLDR_n_OEXV_LowCompSpd);

    /* Outputs for Atomic SubSystem: '<S1420>/EdgeRising2' */
    /* Logic: '<S1427>/AND' incorporates:
     *  Logic: '<S1427>/OR1'
     *  UnitDelay: '<S1427>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeTA_i = (rtb_OR1_dx &&
        (!VLDR_ac_DW.UnitDelay_DSTATE_nn));

    /* Update for UnitDelay: '<S1427>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_nn = rtb_OR1_dx;

    /* End of Outputs for SubSystem: '<S1420>/EdgeRising2' */

    /* Logic: '<S1420>/AND7' incorporates:
     *  Constant: '<S1450>/KeVLDR_b_OEXV_AccelCheckEnbl'
     */
    rtb_OR1_dx = ((VeVLDR_b_CompAcc_OEXV) && (KeVLDR_b_OEXV_AccelCheckEnbl));

    /* Outputs for Atomic SubSystem: '<S1420>/EdgeRising4' */
    /* Logic: '<S1428>/AND' incorporates:
     *  Logic: '<S1428>/OR1'
     *  UnitDelay: '<S1428>/Unit Delay'
     */
    rtb_VariantMergeForOutportDF_ko = (rtb_OR1_dx &&
        (!VLDR_ac_DW.UnitDelay_DSTATE_gz));

    /* Update for UnitDelay: '<S1428>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_gz = rtb_OR1_dx;

    /* End of Outputs for SubSystem: '<S1420>/EdgeRising4' */

    /* Logic: '<S1420>/Logical28' incorporates:
     *  Logic: '<S1420>/AND8'
     */
    rtb_TmpSignalConversionAtVeTA_i = ((rtb_TmpSignalConversionAtVeTA_i ||
        rtb_VariantMergeForOutportDF_ko) && (VeVLDR_b_OEXV_PressSensLatch_En));

    /* Switch: '<S1481>/Switch1' */
    if (rtb_TmpSignalConversionAtVeTA_i)
    {
        /* Product: '<S1527>/Product' incorporates:
         *  Constant: '<S1481>/InitValue'
         */
        rtb_TmpSignalConversionAtVeTR_a = 0.0F;
    }
    else
    {
        /* Product: '<S1527>/Product' incorporates:
         *  Constant: '<S1446>/Calib'
         *  Sum: '<S1481>/Subtraction'
         *  Switch: '<S1481>/Switch2'
         *  UnitDelay: '<S1481>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeTR_a = HeVLDR_t_MedTED +
            VLDR_ac_DW.UnitDelay_DSTATE_p;
    }

    /* End of Switch: '<S1481>/Switch1' */

    /* RelationalOperator: '<S1481>/Greater  Than1' incorporates:
     *  Constant: '<S1470>/KeVLDR_t_OEXV_CntrTime1'
     */
    VeVLDR_b_WaitTimeEnable_OEXV = (rtb_TmpSignalConversionAtVeTR_a >
        KeVLDR_t_OEXV_CntrTime1);

    /* RelationalOperator: '<S1420>/Comparison13' incorporates:
     *  Constant: '<S1465>/KeVLDR_n_OEXV_InitCompSpd'
     */
    rtb_VariantMergeForOutportDF_ko = (rtb_TmpSignalConversionAtVeT_dk <
        KeVLDR_n_OEXV_InitCompSpd);

    /* Outputs for Atomic SubSystem: '<S1420>/Turn On Delay Time1' */
    /* Outputs for Atomic SubSystem: '<S1480>/EdgeRising' */
    /* Logic: '<S1484>/AND' incorporates:
     *  Logic: '<S1484>/OR1'
     *  UnitDelay: '<S1484>/Unit Delay'
     */
    rtb_OR1_dx = (rtb_VariantMergeForOutportDF_ko &&
                  (!VLDR_ac_DW.UnitDelay_DSTATE_el));

    /* Update for UnitDelay: '<S1484>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_el = rtb_VariantMergeForOutportDF_ko;

    /* End of Outputs for SubSystem: '<S1480>/EdgeRising' */

    /* Switch: '<S1480>/Switch1' incorporates:
     *  Logic: '<S1480>/OR'
     *  Logic: '<S1480>/OR1'
     */
    if ((!rtb_VariantMergeForOutportDF_ko) || rtb_OR1_dx)
    {
        /* Switch: '<S1480>/Switch1' incorporates:
         *  Constant: '<S1480>/Constant Value1'
         */
        rtb_TmpSignalConversionAtVeTAIR = 0.0F;
    }
    else
    {
        /* Switch: '<S1480>/Switch1' incorporates:
         *  Constant: '<S1446>/Calib'
         *  Constant: '<S1469>/KeVLDR_t_OEXV_CmpSpdTm'
         *  MinMax: '<S1480>/Minimum'
         *  Sum: '<S1480>/Summation'
         *  UnitDelay: '<S1480>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeTAIR = fminf(KeVLDR_t_OEXV_CmpSpdTm,
            HeVLDR_t_MedTED + VLDR_ac_DW.UnitDelay_DSTATE_d);
    }

    /* End of Switch: '<S1480>/Switch1' */
    /* End of Outputs for SubSystem: '<S1420>/Turn On Delay Time1' */

    /* Inport: '<Root>/VeTAIR_b_OEXV_RefPress_FA' */
    (void)Rte_Read_VeTAIR_b_OEXV_RefPress_FA_Value(&rtb_Logical41);

    /* Outputs for Atomic SubSystem: '<S1420>/Turn On Delay Time1' */
    /* Update for UnitDelay: '<S1480>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_d = rtb_TmpSignalConversionAtVeTAIR;

    /* End of Outputs for SubSystem: '<S1420>/Turn On Delay Time1' */

    /* UnitDelay: '<S1535>/Unit Delay' incorporates:
     *  Constant: '<S1471>/KeVLDR_t_OEXV_CntrTime2'
     *  RelationalOperator: '<S1481>/Greater  Than2'
     */
    rtb_OR1_dx = (rtb_TmpSignalConversionAtVeTR_a > KeVLDR_t_OEXV_CntrTime2);

    /* Logic: '<S1420>/AND5' incorporates:
     *  Constant: '<S1452>/KeVLDR_b_OEXV_CheckEnbl'
     *  Logic: '<S1420>/Logical36'
     *  Logic: '<S1420>/Logical37'
     *  UnitDelay: '<S1420>/Unit Delay3'
     */
    rtb_Logical1_pzo = (rtb_VariantMergeForOutportDF_ko ||
                        (((VLDR_ac_DW.UnitDelay3_DSTATE) || rtb_OR1_dx) &&
                         (KeVLDR_b_OEXV_CheckEnbl)));

    /* Outputs for Atomic SubSystem: '<S1420>/EdgeRising1' */
    /* Logic: '<S1426>/OR1' incorporates:
     *  UnitDelay: '<S1426>/Unit Delay'
     */
    rtb_Logical2_fw = !VLDR_ac_DW.UnitDelay_DSTATE_kw;

    /* Update for UnitDelay: '<S1426>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_kw = rtb_Logical1_pzo;

    /* Outputs for Atomic SubSystem: '<S1420>/Signal Latch On With Reset1' */
    /* Outputs for Atomic SubSystem: '<S1420>/Turn On Delay Time1' */
    /* Logic: '<S1477>/OR1' incorporates:
     *  Constant: '<S1469>/KeVLDR_t_OEXV_CmpSpdTm'
     *  Logic: '<S1426>/AND'
     *  Logic: '<S1477>/NOT'
     *  Logic: '<S1477>/OR'
     *  Logic: '<S1480>/AND'
     *  RelationalOperator: '<S1480>/Greater  Than'
     *  UnitDelay: '<S1477>/Unit Delay'
     */
    rtb_VariantMergeForOutportDF_ko = ((rtb_VariantMergeForOutportDF_ko &&
        (rtb_TmpSignalConversionAtVeTAIR >= KeVLDR_t_OEXV_CmpSpdTm)) ||
        (((!rtb_Logical1_pzo) || (!rtb_Logical2_fw)) &&
         (VLDR_ac_DW.UnitDelay_DSTATE_ox)));

    /* End of Outputs for SubSystem: '<S1420>/Turn On Delay Time1' */
    /* End of Outputs for SubSystem: '<S1420>/EdgeRising1' */

    /* Update for UnitDelay: '<S1477>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_ox = rtb_VariantMergeForOutportDF_ko;

    /* End of Outputs for SubSystem: '<S1420>/Signal Latch On With Reset1' */

    /* Logic: '<S1420>/Logical34' incorporates:
     *  Constant: '<S1453>/KeVLDR_b_OEXV_CmpSpd_Disbl'
     *  Logic: '<S1420>/AND4'
     *  Logic: '<S1420>/Logical39'
     *  UnitDelay: '<S1420>/Unit Delay1'
     */
    VeVLDR_b_OEXV_PressSensDiag_En = ((VeVLDR_b_OEXV_PressSensLatch_En) &&
        (((((VeVLDR_b_CompAcc_OEXV) && rtb_TmpSignalConversionAtVeR_go) &&
           (VeVLDR_b_WaitTimeEnable_OEXV)) && (VLDR_ac_DW.UnitDelay1_DSTATE_p2))
         && (rtb_VariantMergeForOutportDF_ko || (KeVLDR_b_OEXV_CmpSpd_Disbl))));

    /* Logic: '<S1420>/Logical41' */
    rtb_Logical41 = (rtb_AND_ck && rtb_Logical41);

    /* Outputs for Atomic SubSystem: '<S1420>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S1479>/EdgeRising' */
    /* Logic: '<S1483>/AND' incorporates:
     *  Logic: '<S1483>/OR1'
     *  UnitDelay: '<S1483>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeR_go = (rtb_Logical41 &&
        (!VLDR_ac_DW.UnitDelay_DSTATE_j1));

    /* Update for UnitDelay: '<S1483>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_j1 = rtb_Logical41;

    /* End of Outputs for SubSystem: '<S1479>/EdgeRising' */

    /* Switch: '<S1479>/Switch1' incorporates:
     *  Logic: '<S1479>/OR'
     *  Logic: '<S1479>/OR1'
     */
    if ((!rtb_Logical41) || rtb_TmpSignalConversionAtVeR_go)
    {
        /* Switch: '<S1479>/Switch1' incorporates:
         *  Constant: '<S1479>/Constant Value1'
         */
        rtb_TmpSignalConversionAtVeTAIR = 0.0F;
    }
    else
    {
        /* Switch: '<S1479>/Switch1' incorporates:
         *  Constant: '<S1446>/Calib'
         *  Constant: '<S1473>/KeVLDR_t_OEXV_FA_WaitTime'
         *  MinMax: '<S1479>/Minimum'
         *  Sum: '<S1479>/Summation'
         *  UnitDelay: '<S1479>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeTAIR = fminf(KeVLDR_t_OEXV_FA_WaitTime,
            HeVLDR_t_MedTED + VLDR_ac_DW.UnitDelay_DSTATE_k);
    }

    /* End of Switch: '<S1479>/Switch1' */

    /* Logic: '<S1479>/AND' incorporates:
     *  Constant: '<S1473>/KeVLDR_t_OEXV_FA_WaitTime'
     *  RelationalOperator: '<S1479>/Greater  Than'
     */
    rtb_TmpSignalConversionAtVeR_go = (rtb_Logical41 &&
        (rtb_TmpSignalConversionAtVeTAIR >= KeVLDR_t_OEXV_FA_WaitTime));

    /* Update for UnitDelay: '<S1479>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_k = rtb_TmpSignalConversionAtVeTAIR;

    /* End of Outputs for SubSystem: '<S1420>/Turn On Delay Time' */

    /* Logic: '<S1420>/Logical16' incorporates:
     *  Constant: '<S1476>/Calib'
     *  Logic: '<S1420>/Logical42'
     *  Logic: '<S1420>/Logical43'
     */
    rtb_VariantMergeForOutportDF_ko = ((rtb_AND_ck &&
        (VeVLDR_b_OEXV_PressSensDiag_En)) ||
        ((KeVLDR_b_OEXV_PressSensRatPerfCndsOV_En) &&
         rtb_TmpSignalConversionAtVeR_go));

    /* RelationalOperator: '<S1494>/Relational Operator3' incorporates:
     *  Constant: '<S1494>/Constant3'
     */
    rtb_AND_ck = (rtb_VM_Conditional_Signal_CPV_e == 0U);

    /* Outputs for Atomic SubSystem: '<S1494>/EdgeFalling1' */
    /* Logic: '<S1494>/Logical Operator' incorporates:
     *  Logic: '<S1496>/OR1'
     */
    rtb_VariantMergeForOutportDFI_o = !rtb_AND_ck;

    /* End of Outputs for SubSystem: '<S1494>/EdgeFalling1' */

    /* Logic: '<S1494>/Logical1' incorporates:
     *  Constant: '<S1492>/Calib'
     *  Constant: '<S1493>/KeVLDR_b_OEXV_PressSens_XYEnbl'
     *  Constant: '<S1494>/Constant1'
     *  Logic: '<S1422>/AND1'
     *  Logic: '<S1494>/Logical Operator'
     *  Logic: '<S1494>/Logical10'
     *  Logic: '<S1494>/Logical12'
     *  RelationalOperator: '<S1494>/Relational Operator1'
     */
    rtb_Logical41 = ((rtb_VariantMergeForOutportDF_ko &&
                      (KeVLDR_b_OEXV_PressSens_XYEnbl)) &&
                     ((!KeVLDR_b_AC_RefrigPresSnsrDCktPerf_LtchEnbl) ||
                      ((VeVLDR_b_EEXV_PrsElctrFlt_DiagE == 0U) ||
                       rtb_VariantMergeForOutportDFI_o)));

    /* Switch: '<S1423>/Switch' */
    if (rtb_TmpSignalConversionAtVeTA_i)
    {
        /* Switch: '<S1423>/Switch' */
        VeVLDR_p_OEXV_PressLatch = rtb_TmpSignalConversionAtVeTA_b;
    }
    else
    {
        /* Switch: '<S1423>/Switch' incorporates:
         *  UnitDelay: '<S1423>/Unit Delay1'
         */
        VeVLDR_p_OEXV_PressLatch = VLDR_ac_DW.UnitDelay1_DSTATE_o;
    }

    /* End of Switch: '<S1423>/Switch' */

    /* Outputs for Enabled SubSystem: '<S1328>/Fail_Symptom' incorporates:
     *  EnablePort: '<S1421>/Enable'
     */
    if (rtb_VariantMergeForOutportDF_ko)
    {
        /* Abs: '<S1421>/Abs' incorporates:
         *  Sum: '<S1421>/Sum1'
         */
        VeVLDR_p_OEXV_Pres_Diff = fabsf(rtb_TmpSignalConversionAtVeTA_b -
            VeVLDR_p_OEXV_PressLatch);

        /* Lookup_n-D: '<S1489>/Vector' incorporates:
         *  SignalConversion generated from: '<S1>/VeTAIR_T_OEXV_RefTemp'
         */
        VeVLDR_p_OEXV_PressSens_Sat_Thr = look1_iflf_binlcapw
            (rtb_TmpSignalConversionAtVeTA_p, ((const float32 *)
              &(KxVLDR_p_OEXV_PressSens_Saturation[0])), ((const float32 *)
              &(KtVLDR_p_OEXV_PressSens_Saturation[0])), 6U);

        /* Logic: '<S1421>/Logical Operator' incorporates:
         *  Constant: '<S1485>/KeVLDR_b_OEXV_PressSens_Saturation_Enb'
         *  Constant: '<S1486>/KeVLDR_b_OEXV_Press_Delta_Enb'
         *  Constant: '<S1487>/KeVLDR_b_OEXV_RefPressFA_Enbl'
         *  Constant: '<S1488>/KeVLDR_p_OEXV_Press_Delta_Min'
         *  Logic: '<S1421>/Logical Operator1'
         *  Logic: '<S1421>/Logical Operator2'
         *  Logic: '<S1421>/Logical5'
         *  RelationalOperator: '<S1421>/Comparison1'
         *  RelationalOperator: '<S1421>/Comparison5'
         */
        VLDR_ac_B.LogicalOperator = ((((VeVLDR_p_OEXV_Pres_Diff <
            KeVLDR_p_OEXV_Press_Delta_Min) && (KeVLDR_b_OEXV_Press_Delta_Enb)) ||
            ((rtb_TmpSignalConversionAtVeTA_b > VeVLDR_p_OEXV_PressSens_Sat_Thr)
             && (KeVLDR_b_OEXV_PressSens_Saturation_Enb))) ||
            (rtb_TmpSignalConversionAtVeR_go && (KeVLDR_b_OEXV_RefPressFA_Enbl)));
    }

    /* End of Outputs for SubSystem: '<S1328>/Fail_Symptom' */

    /* Outputs for Atomic SubSystem: '<S1494>/EdgeFalling1' */
    /* Logic: '<S1496>/AND' incorporates:
     *  UnitDelay: '<S1496>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeR_go = (rtb_VariantMergeForOutportDFI_o &&
        (VLDR_ac_DW.UnitDelay_DSTATE_fg));

    /* Update for UnitDelay: '<S1496>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_fg = rtb_AND_ck;

    /* End of Outputs for SubSystem: '<S1494>/EdgeFalling1' */

    /* Logic: '<S1494>/Logical5' */
    rtb_TmpSignalConversionAtVeR_go = (rtb_TmpSignalConversionAtVeRC_e ||
        rtb_TmpSignalConversionAtVeR_go);

    /* Logic: '<S1495>/Fail Counter Reset' incorporates:
     *  UnitDelay: '<S1495>/Unit Delay'
     *  UnitDelay: '<S1495>/Unit Delay1'
     */
    rtb_AND_ck = ((rtb_TmpSignalConversionAtVeR_go ||
                   (VLDR_ac_DW.UnitDelay_DSTATE_ex)) ||
                  (VLDR_ac_DW.UnitDelay1_DSTATE_d));

    /* Outputs for Atomic SubSystem: '<S1495>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S1495>/Counter Reset  Enabled ' */
    /* Switch: '<S1502>/Switch1' incorporates:
     *  Logic: '<S1495>/NOT6'
     *  Switch: '<S1502>/Switch2'
     *  Switch: '<S1503>/Switch1'
     */
    if (rtb_AND_ck)
    {
        /* Switch: '<S1502>/Switch1' incorporates:
         *  Constant: '<S1502>/Constant Value2'
         */
        VeVLDR_Cnt_OEXV_PresSens_FailCnt = 0U;

        /* Switch: '<S1503>/Switch1' incorporates:
         *  Constant: '<S1503>/Constant Value2'
         */
        VeVLDR_Cnt_OEXV_PressSens_SmpCnt = 0U;
    }
    else
    {
        if (rtb_Logical41 && (VLDR_ac_B.LogicalOperator))
        {
            /* Switch: '<S1502>/Switch2' incorporates:
             *  Constant: '<S1502>/Constant Value1'
             *  Sum: '<S1502>/Subtraction'
             *  Switch: '<S1502>/Switch1'
             *  UnitDelay: '<S1502>/Unit Delay'
             */
            VeVLDR_Cnt_OEXV_PresSens_FailCnt = (uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_ot) + 1U);
        }
        else
        {
            /* Switch: '<S1502>/Switch1' incorporates:
             *  Switch: '<S1502>/Switch2'
             *  UnitDelay: '<S1502>/Unit Delay'
             */
            VeVLDR_Cnt_OEXV_PresSens_FailCnt = VLDR_ac_DW.UnitDelay_DSTATE_ot;
        }

        /* Switch: '<S1503>/Switch2' */
        if (rtb_Logical41)
        {
            /* Switch: '<S1503>/Switch1' incorporates:
             *  Constant: '<S1503>/Constant Value1'
             *  Sum: '<S1503>/Subtraction'
             *  Switch: '<S1503>/Switch2'
             *  UnitDelay: '<S1503>/Unit Delay'
             */
            VeVLDR_Cnt_OEXV_PressSens_SmpCnt = (uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_khj) + 1U);
        }
        else
        {
            /* Switch: '<S1503>/Switch1' incorporates:
             *  Switch: '<S1503>/Switch2'
             *  UnitDelay: '<S1503>/Unit Delay'
             */
            VeVLDR_Cnt_OEXV_PressSens_SmpCnt = VLDR_ac_DW.UnitDelay_DSTATE_khj;
        }

        /* End of Switch: '<S1503>/Switch2' */
    }

    /* End of Switch: '<S1502>/Switch1' */
    /* End of Outputs for SubSystem: '<S1495>/Counter Reset  Enabled 1' */

    /* Update for UnitDelay: '<S1502>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_ot = VeVLDR_Cnt_OEXV_PresSens_FailCnt;

    /* End of Outputs for SubSystem: '<S1495>/Counter Reset  Enabled ' */

    /* Outputs for Atomic SubSystem: '<S1495>/Counter Reset  Enabled 1' */
    /* Update for UnitDelay: '<S1503>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_khj = VeVLDR_Cnt_OEXV_PressSens_SmpCnt;

    /* End of Outputs for SubSystem: '<S1495>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S1495>/Greater Than or Equal ' incorporates:
     *  Constant: '<S1490>/KeVLDR_Cnt_OEXV_PressSens_FailCnt'
     */
    rtb_Logical41 = (VeVLDR_Cnt_OEXV_PresSens_FailCnt >=
                     KeVLDR_Cnt_OEXV_PressSens_FailCnt);

    /* Logic: '<S1495>/NOT5' incorporates:
     *  Constant: '<S1491>/KeVLDR_Cnt_OEXV_PressSens_SmpCnt'
     *  Logic: '<S1495>/NOT3'
     *  RelationalOperator: '<S1495>/Less Than  or Equal'
     */
    rtb_AND_ck = ((VeVLDR_Cnt_OEXV_PressSens_SmpCnt >=
                   KeVLDR_Cnt_OEXV_PressSens_SmpCnt) && (!rtb_Logical41));

    /* Switch: '<S1508>/Switch1' incorporates:
     *  Constant: '<S1501>/Constant Value'
     *  DataStoreWrite: '<S1422>/Data Store Write1'
     *  Switch: '<S1507>/Switch1'
     */
    if (rtb_VM_Conditional_Signal_PostC)
    {
        VLDR_ac_DW.NeVLDR_Cnt_OEXV_PressSens_MFOP = 0U;
    }
    else
    {
        if (rtb_AND_ck)
        {
            /* MinMax: '<S1501>/Minimum2' incorporates:
             *  DataStoreRead: '<S1422>/Data Store Read'
             *  Switch: '<S1507>/Switch1'
             */
            if (VeVLDR_Cnt_OEXV_PresSens_FailCnt >
                    VLDR_ac_DW.NeVLDR_Cnt_OEXV_PressSens_MFOP)
            {
                /* DataStoreWrite: '<S1422>/Data Store Write1' incorporates:
                 *  Switch: '<S1507>/Switch1'
                 */
                VLDR_ac_DW.NeVLDR_Cnt_OEXV_PressSens_MFOP =
                    VeVLDR_Cnt_OEXV_PresSens_FailCnt;
            }

            /* End of MinMax: '<S1501>/Minimum2' */
        }
    }

    /* End of Switch: '<S1508>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S1494>/Fail' */
    VLDR_ac_Fail(rtb_Logical41, &VLDR_ac_B.VariantMergeForOutportVeVLDR__e);

    /* End of Outputs for SubSystem: '<S1494>/Fail' */

    /* Outputs for Enabled SubSystem: '<S1494>/Init' */
    VLDR_ac_Init_a(rtb_TmpSignalConversionAtVeR_go,
                   &VLDR_ac_B.VariantMergeForOutportVeVLDR__e);

    /* End of Outputs for SubSystem: '<S1494>/Init' */

    /* Outputs for Enabled SubSystem: '<S1494>/Pass' */
    VLDR_ac_Pass(rtb_AND_ck, &VLDR_ac_B.VariantMergeForOutportVeVLDR__e);

    /* End of Outputs for SubSystem: '<S1494>/Pass' */

    /* RelationalOperator: '<S1494>/Relational Operator' incorporates:
     *  RelationalOperator: '<S1420>/Relational Operator1'
     *  RelationalOperator: '<S1420>/Relational Operator2'
     *  VariantMerge generated from: '<S1318>/VeVLDR_e_FaultSts_AC_RefrigPresSnsrDCktPerf'
     */
    VariantMergeForOutportEEXV_Pr_k = VLDR_ac_B.VariantMergeForOutportVeVLDR__e;

    /* VariantMerge generated from: '<S1318>/OEXV_PressSens_FltDtct' incorporates:
     *  Constant: '<S1497>/Constant'
     *  RelationalOperator: '<S1494>/Relational Operator'
     */
    VLDR_ac_B.VariantMergeForOutportOEXV_Pr_j = (((uint32)
        VariantMergeForOutportEEXV_Pr_k) == CeDFIB_e_Fail);

    /* Logic: '<S1420>/Logical15' incorporates:
     *  Constant: '<S1429>/Constant'
     *  Constant: '<S1430>/Constant'
     *  RelationalOperator: '<S1420>/Relational Operator1'
     *  RelationalOperator: '<S1420>/Relational Operator2'
     */
    rtb_TmpSignalConversionAtVeR_go = ((((uint32)VariantMergeForOutportEEXV_Pr_k)
        == CeDFIB_e_Pass) || (((uint32)VariantMergeForOutportEEXV_Pr_k) ==
        CeDFIB_e_Fail));

    /* Switch: '<S1481>/Switch3' */
    if (rtb_OR1_dx)
    {
        /* Switch: '<S1481>/Switch3' incorporates:
         *  Constant: '<S1471>/KeVLDR_t_OEXV_CntrTime2'
         */
        rtb_TmpSignalConversionAtVeTA_b = KeVLDR_t_OEXV_CntrTime2;
    }
    else
    {
        /* Switch: '<S1481>/Switch3' */
        rtb_TmpSignalConversionAtVeTA_b = rtb_TmpSignalConversionAtVeTR_a;
    }

    /* End of Switch: '<S1481>/Switch3' */

    /* Outputs for Atomic SubSystem: '<S1423>/EdgeFalling' */
    /* Logic: '<S1509>/AND' incorporates:
     *  Logic: '<S1509>/OR1'
     *  UnitDelay: '<S1509>/Unit Delay'
     */
    rtb_OR1_dx = ((!rtb_VariantMergeForOutportDF_ko) &&
                  (VLDR_ac_DW.UnitDelay_DSTATE_dw));

    /* Update for UnitDelay: '<S1509>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_dw = rtb_VariantMergeForOutportDF_ko;

    /* End of Outputs for SubSystem: '<S1423>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S1423>/Signal Latch On With Reset' */
    /* Logic: '<S1510>/OR1' incorporates:
     *  Logic: '<S1510>/NOT'
     *  Logic: '<S1510>/OR'
     *  UnitDelay: '<S1510>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeTA_i = (rtb_TmpSignalConversionAtVeTA_i ||
        ((!rtb_OR1_dx) && (VLDR_ac_DW.UnitDelay_DSTATE_k1)));

    /* Update for UnitDelay: '<S1510>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_k1 = rtb_TmpSignalConversionAtVeTA_i;

    /* End of Outputs for SubSystem: '<S1423>/Signal Latch On With Reset' */

    /* Logic: '<S1511>/Logical6' incorporates:
     *  Constant: '<S1514>/Constant'
     *  Constant: '<S1515>/Constant1'
     *  Constant: '<S1515>/Constant2'
     *  Constant: '<S1516>/Constant1'
     *  Constant: '<S1516>/Constant2'
     *  Constant: '<S1517>/Constant1'
     *  Constant: '<S1517>/Constant2'
     *  Constant: '<S1518>/Constant1'
     *  Constant: '<S1518>/Constant2'
     *  Constant: '<S1519>/KeVLDR_U_SysVltLwrLim'
     *  Constant: '<S1520>/KeVLDR_U_SysVltUprLim'
     *  Constant: '<S1521>/KeVLDR_b_OEXV_TempElctrDiag_LIN2BusOff_Ovrd'
     *  Constant: '<S1522>/KeVLDR_b_OEXV_TempElctrDiag_LOC_Ovrd'
     *  Constant: '<S1523>/KeVLDR_b_OEXV_TempElctrDiag_TempSens_Ovrd'
     *  Constant: '<S1524>/KeVLDR_b_OEXV_TempElctrDiag_ThrmlRlyErr_Ovrd'
     *  Logic: '<S1511>/Logical1'
     *  Logic: '<S1511>/Logical18'
     *  Logic: '<S1511>/Logical2'
     *  Logic: '<S1511>/Logical21'
     *  Logic: '<S1511>/Logical3'
     *  Logic: '<S1511>/Logical4'
     *  Logic: '<S1511>/Logical5'
     *  Logic: '<S1511>/Logical7'
     *  Logic: '<S1511>/Logical8'
     *  Logic: '<S1515>/Logical Operator'
     *  Logic: '<S1516>/Logical Operator'
     *  Logic: '<S1517>/Logical Operator'
     *  Logic: '<S1518>/Logical Operator'
     *  RelationalOperator: '<S1511>/Comparison1'
     *  RelationalOperator: '<S1511>/Comparison3'
     *  RelationalOperator: '<S1511>/Comparison8'
     *  RelationalOperator: '<S1515>/Relational Operator1'
     *  RelationalOperator: '<S1515>/Relational Operator2'
     *  RelationalOperator: '<S1516>/Relational Operator1'
     *  RelationalOperator: '<S1516>/Relational Operator2'
     *  RelationalOperator: '<S1517>/Relational Operator1'
     *  RelationalOperator: '<S1517>/Relational Operator2'
     *  RelationalOperator: '<S1518>/Relational Operator1'
     *  RelationalOperator: '<S1518>/Relational Operator2'
     */
    VeVLDR_b_OEXV_TmpElctrFlt_DiagEn = ((((((((rtb_VM_Conditional_Signal_BF1_S <
        KeVLDR_U_SysVltUprLim) && (rtb_VM_Conditional_Signal_BF1_S >
        KeVLDR_U_SysVltLwrLim)) && (((uint32)rtb_TmpSignalConversionAtVePMTR) !=
        CePMTR_e_DISBL_All_Thrml)) && (((rtb_VariantMergeForOutportDFI_0 <= 0) ||
        (tmpRead_f != 0U)) || (KeVLDR_b_OEXV_TempElctrDiag_ThrmlRlyErr_Ovrd))) &&
        (((rtb_VariantMergeForOutportDFI_1 <= 0) || (rtb_UnitDelay_ly_tmp != 0U))
         || (KeVLDR_b_OEXV_TempElctrDiag_LIN2BusOff_Ovrd))) &&
        (((rtb_VariantMergeForOutportDFI_3 <= 0) ||
          (rtb_VariantMergeForOutportDFI_2 != 0U)) ||
         (KeVLDR_b_OEXV_TempElctrDiag_LOC_Ovrd))) && (((rtb_Comparison4_mj_tmp_0
        <= 0) || (rtb_Comparison4_mj_tmp != 0U)) ||
        (KeVLDR_b_OEXV_TempElctrDiag_TempSens_Ovrd))) &&
        rtb_TmpSignalConversionAtVeDFIR);

    /* RelationalOperator: '<S1534>/Relational Operator3' incorporates:
     *  Constant: '<S1534>/Constant3'
     */
    rtb_VariantMergeForOutportDF_ko = (rtb_Comparison4_mj_tmp_1 == 0U);

    /* Outputs for Atomic SubSystem: '<S1534>/EdgeFalling1' */
    /* Logic: '<S1534>/Logical Operator' incorporates:
     *  Logic: '<S1536>/OR1'
     */
    rtb_VariantMergeForOutportDFI_o = !rtb_VariantMergeForOutportDF_ko;

    /* End of Outputs for SubSystem: '<S1534>/EdgeFalling1' */

    /* Logic: '<S1534>/Logical1' incorporates:
     *  Constant: '<S1532>/Calib'
     *  Constant: '<S1533>/KeVLDR_b_OEXV_TempElctrFlt_XYEnbl'
     *  Constant: '<S1534>/Constant1'
     *  DataStoreRead: '<S1513>/Data Store Read2'
     *  Logic: '<S1513>/AND1'
     *  Logic: '<S1534>/Logical Operator'
     *  Logic: '<S1534>/Logical10'
     *  Logic: '<S1534>/Logical12'
     *  RelationalOperator: '<S1534>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S1534>/Bitwise Operator3'
     */
    rtb_OR1_dx = (((VeVLDR_b_OEXV_TmpElctrFlt_DiagEn) &&
                   (KeVLDR_b_OEXV_TempElctrFlt_XYEnbl)) &&
                  ((!KeVLDR_b_AC_RefrigTempSnsrDCkt_LtchEnbl) || (((((uint32)
                       VLDR_ac_DW.StatusByte_AC_RefrigTempSnsrDCk) & 1U) == 0U) ||
                    rtb_VariantMergeForOutportDFI_o)));

    /* Rounding: '<S1527>/Rounding2' incorporates:
     *  Constant: '<S1528>/HeVLDR_K_OEXV_RefTemp_Gain'
     *  Constant: '<S1529>/HeVLDR_T_OEXV_RefTemp_Offset'
     *  Product: '<S1527>/Product'
     *  Sum: '<S1527>/Sum1'
     */
    VeVLDR_T_OEXV_TempRawData = roundf((rtb_TmpSignalConversionAtVeTA_p +
        HeVLDR_T_OEXV_RefTemp_Offset) * HeVLDR_K_OEXV_RefTemp_Gain);

    /* Outputs for Atomic SubSystem: '<S1534>/EdgeFalling1' */
    /* Logic: '<S1536>/AND' incorporates:
     *  UnitDelay: '<S1536>/Unit Delay'
     */
    rtb_Logical1_pzo = (rtb_VariantMergeForOutportDFI_o &&
                        (VLDR_ac_DW.UnitDelay_DSTATE_ogh));

    /* Update for UnitDelay: '<S1536>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_ogh = rtb_VariantMergeForOutportDF_ko;

    /* End of Outputs for SubSystem: '<S1534>/EdgeFalling1' */

    /* Logic: '<S1534>/Logical5' */
    rtb_TmpSignalConversionAtVeRC_e = (rtb_TmpSignalConversionAtVeRC_e ||
        rtb_Logical1_pzo);

    /* Logic: '<S1535>/Fail Counter Reset' incorporates:
     *  UnitDelay: '<S1535>/Unit Delay'
     *  UnitDelay: '<S1535>/Unit Delay1'
     */
    rtb_VariantMergeForOutportDF_ko = ((rtb_TmpSignalConversionAtVeRC_e ||
        (VLDR_ac_DW.UnitDelay_DSTATE_e1)) || (VLDR_ac_DW.UnitDelay1_DSTATE_k));

    /* Outputs for Atomic SubSystem: '<S1535>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S1535>/Counter Reset  Enabled ' */
    /* Switch: '<S1542>/Switch1' incorporates:
     *  Constant: '<S1525>/HeVLDR_T_OEXV_RefTemp_ShrtHigh'
     *  Constant: '<S1526>/HeVLDR_T_OEXV_RefTemp_ShrtLow'
     *  Logic: '<S1512>/Logical18'
     *  Logic: '<S1535>/NOT6'
     *  RelationalOperator: '<S1512>/Comparison1'
     *  RelationalOperator: '<S1512>/Comparison8'
     *  Switch: '<S1542>/Switch2'
     *  Switch: '<S1543>/Switch1'
     */
    if (rtb_VariantMergeForOutportDF_ko)
    {
        /* Switch: '<S1542>/Switch1' incorporates:
         *  Constant: '<S1542>/Constant Value2'
         */
        VeVLDR_Cnt_OEXV_TmpElFlt_FailCnt = 0U;

        /* Switch: '<S1543>/Switch1' incorporates:
         *  Constant: '<S1543>/Constant Value2'
         */
        VeVLDR_Cnt_OEXV_TmpElFlt_SmpCnt = 0U;
    }
    else
    {
        if (rtb_OR1_dx && ((VeVLDR_T_OEXV_TempRawData ==
                            HeVLDR_T_OEXV_RefTemp_ShrtLow) ||
                           (VeVLDR_T_OEXV_TempRawData ==
                            HeVLDR_T_OEXV_RefTemp_ShrtHigh)))
        {
            /* Switch: '<S1542>/Switch2' incorporates:
             *  Constant: '<S1542>/Constant Value1'
             *  Sum: '<S1542>/Subtraction'
             *  Switch: '<S1542>/Switch1'
             *  UnitDelay: '<S1542>/Unit Delay'
             */
            VeVLDR_Cnt_OEXV_TmpElFlt_FailCnt = (uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_is) + 1U);
        }
        else
        {
            /* Switch: '<S1542>/Switch1' incorporates:
             *  Switch: '<S1542>/Switch2'
             *  UnitDelay: '<S1542>/Unit Delay'
             */
            VeVLDR_Cnt_OEXV_TmpElFlt_FailCnt = VLDR_ac_DW.UnitDelay_DSTATE_is;
        }

        /* Switch: '<S1543>/Switch2' */
        if (rtb_OR1_dx)
        {
            /* Switch: '<S1543>/Switch1' incorporates:
             *  Constant: '<S1543>/Constant Value1'
             *  Sum: '<S1543>/Subtraction'
             *  Switch: '<S1543>/Switch2'
             *  UnitDelay: '<S1543>/Unit Delay'
             */
            VeVLDR_Cnt_OEXV_TmpElFlt_SmpCnt = (uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_og) + 1U);
        }
        else
        {
            /* Switch: '<S1543>/Switch1' incorporates:
             *  Switch: '<S1543>/Switch2'
             *  UnitDelay: '<S1543>/Unit Delay'
             */
            VeVLDR_Cnt_OEXV_TmpElFlt_SmpCnt = VLDR_ac_DW.UnitDelay_DSTATE_og;
        }

        /* End of Switch: '<S1543>/Switch2' */
    }

    /* End of Switch: '<S1542>/Switch1' */
    /* End of Outputs for SubSystem: '<S1535>/Counter Reset  Enabled 1' */

    /* Update for UnitDelay: '<S1542>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_is = VeVLDR_Cnt_OEXV_TmpElFlt_FailCnt;

    /* End of Outputs for SubSystem: '<S1535>/Counter Reset  Enabled ' */

    /* Outputs for Atomic SubSystem: '<S1535>/Counter Reset  Enabled 1' */
    /* Update for UnitDelay: '<S1543>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_og = VeVLDR_Cnt_OEXV_TmpElFlt_SmpCnt;

    /* End of Outputs for SubSystem: '<S1535>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S1535>/Greater Than or Equal ' incorporates:
     *  Constant: '<S1530>/KeVLDR_Cnt_OEXV_TempElctrFlt_FailCnt'
     */
    rtb_OR1_dx = (VeVLDR_Cnt_OEXV_TmpElFlt_FailCnt >=
                  KeVLDR_Cnt_OEXV_TempElctrFlt_FailCnt);

    /* Logic: '<S1535>/NOT5' incorporates:
     *  Constant: '<S1531>/KeVLDR_Cnt_OEXV_TempElctrFlt_SmpCnt'
     *  Logic: '<S1535>/NOT3'
     *  RelationalOperator: '<S1535>/Less Than  or Equal'
     */
    rtb_VariantMergeForOutportDF_ko = ((VeVLDR_Cnt_OEXV_TmpElFlt_SmpCnt >=
        KeVLDR_Cnt_OEXV_TempElctrFlt_SmpCnt) && (!rtb_OR1_dx));

    /* Switch: '<S1548>/Switch1' incorporates:
     *  Constant: '<S1541>/Constant Value'
     *  DataStoreWrite: '<S1513>/Data Store Write1'
     *  Switch: '<S1547>/Switch1'
     */
    if (rtb_VM_Conditional_Signal_PostC)
    {
        VLDR_ac_DW.NeVLDR_Cnt_OEXV_TempElctrFlt_MF = 0U;
    }
    else
    {
        if (rtb_VariantMergeForOutportDF_ko)
        {
            /* MinMax: '<S1541>/Minimum2' incorporates:
             *  DataStoreRead: '<S1513>/Data Store Read1'
             *  Switch: '<S1547>/Switch1'
             */
            if (VeVLDR_Cnt_OEXV_TmpElFlt_FailCnt >
                    VLDR_ac_DW.NeVLDR_Cnt_OEXV_TempElctrFlt_MF)
            {
                /* DataStoreWrite: '<S1513>/Data Store Write1' incorporates:
                 *  Switch: '<S1547>/Switch1'
                 */
                VLDR_ac_DW.NeVLDR_Cnt_OEXV_TempElctrFlt_MF =
                    VeVLDR_Cnt_OEXV_TmpElFlt_FailCnt;
            }

            /* End of MinMax: '<S1541>/Minimum2' */
        }
    }

    /* End of Switch: '<S1548>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S1534>/Fail' */
    VLDR_ac_Fail(rtb_OR1_dx, &VLDR_ac_B.VariantMergeForOutportVeVLDR__b);

    /* End of Outputs for SubSystem: '<S1534>/Fail' */

    /* Outputs for Enabled SubSystem: '<S1534>/Init' */
    VLDR_ac_Init_a(rtb_TmpSignalConversionAtVeRC_e,
                   &VLDR_ac_B.VariantMergeForOutportVeVLDR__b);

    /* End of Outputs for SubSystem: '<S1534>/Init' */

    /* Outputs for Enabled SubSystem: '<S1534>/Pass' */
    VLDR_ac_Pass(rtb_VariantMergeForOutportDF_ko,
                 &VLDR_ac_B.VariantMergeForOutportVeVLDR__b);

    /* End of Outputs for SubSystem: '<S1534>/Pass' */

    /* VariantMerge generated from: '<S1318>/OEXV_TempElctrFlt_FltDtct' incorporates:
     *  Constant: '<S1537>/Constant'
     *  RelationalOperator: '<S1534>/Relational Operator'
     *  VariantMerge generated from: '<S1318>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrDCkt'
     */
    VLDR_ac_B.VariantMergeForOutportOEXV_Temp = (((uint32)
        VLDR_ac_B.VariantMergeForOutportVeVLDR__b) == CeDFIB_e_Fail);

    /* Update for UnitDelay: '<S1363>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_c5 = rtb_Logical24_pk;

    /* Update for UnitDelay: '<S1363>/Unit Delay1' */
    VLDR_ac_DW.UnitDelay1_DSTATE_mc = rtb_TmpSignalConversionAtVeCPDR;

    /* Update for UnitDelay: '<S1405>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_eu = rtb_Logical2_nq;

    /* Update for UnitDelay: '<S1405>/Unit Delay1' */
    VLDR_ac_DW.UnitDelay1_DSTATE_oi = rtb_NOT4;

    /* Update for UnitDelay: '<S1424>/Unit Delay1' */
    VLDR_ac_DW.UnitDelay1_DSTATE = rtb_Switch1_p;

    /* Update for UnitDelay: '<S1424>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_o = rtb_TmpSignalConversionAtVeT_dk;

    /* Update for UnitDelay: '<S1481>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_p = rtb_TmpSignalConversionAtVeTA_b;

    /* Update for UnitDelay: '<S1420>/Unit Delay1' */
    VLDR_ac_DW.UnitDelay1_DSTATE_p2 = rtb_TmpSignalConversionAtVeTA_i;

    /* Update for UnitDelay: '<S1420>/Unit Delay3' */
    VLDR_ac_DW.UnitDelay3_DSTATE = rtb_TmpSignalConversionAtVeR_go;

    /* Update for UnitDelay: '<S1423>/Unit Delay1' */
    VLDR_ac_DW.UnitDelay1_DSTATE_o = VeVLDR_p_OEXV_PressLatch;

    /* Update for UnitDelay: '<S1495>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_ex = rtb_AND_ck;

    /* Update for UnitDelay: '<S1495>/Unit Delay1' */
    VLDR_ac_DW.UnitDelay1_DSTATE_d = rtb_Logical41;

    /* Update for UnitDelay: '<S1535>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_e1 = rtb_VariantMergeForOutportDF_ko;

    /* Update for UnitDelay: '<S1535>/Unit Delay1' */
    VLDR_ac_DW.UnitDelay1_DSTATE_k = rtb_OR1_dx;

    /* End of Outputs for SubSystem: '<S1318>/OEXV_Diag_Enable' */
#else

    /* Outputs for Atomic SubSystem: '<S1318>/OEXV_Default_Diag' */
    /* VariantMerge generated from: '<S1318>/OEXV_PressElctrFlt_FltDtct' incorporates:
     *  Constant: '<S1319>/FALSE Constant'
     */
    VLDR_ac_B.VariantMergeForOutportOEXV_Pres = false;

    /* VariantMerge generated from: '<S1318>/OEXV_TempElctrFlt_FltDtct' incorporates:
     *  Constant: '<S1319>/FALSE Constant1'
     */
    VLDR_ac_B.VariantMergeForOutportOEXV_Temp = false;

    /* VariantMerge generated from: '<S1318>/OEXV_PerfDiag_FltDtct' incorporates:
     *  Constant: '<S1319>/FALSE Constant2'
     */
    VLDR_ac_B.VariantMergeForOutportOEXV_Perf = false;

    /* VariantMerge generated from: '<S1318>/OEXV_PressSens_FltDtct' incorporates:
     *  Constant: '<S1319>/FALSE Constant3'
     */
    VLDR_ac_B.VariantMergeForOutportOEXV_Pr_j = false;

    /* VariantMerge generated from: '<S1318>/OEXV_PressShrtHigh' incorporates:
     *  Constant: '<S1319>/FALSE Constant4'
     */
    VLDR_ac_B.VariantMergeForOutportOEXV_Pr_b = false;

    /* VariantMerge generated from: '<S1318>/DFIR_OEXV_PerfDiag' incorporates:
     *  Constant: '<S1319>/FALSE Constant5'
     */
    rtb_VariantMergeForOutportDFIR_ = false;

    /* VariantMerge generated from: '<S1318>/DFIR_OEXV_PressSensSNA' incorporates:
     *  Constant: '<S1319>/FALSE Constant6'
     */
    rtb_Logical11 = false;

    /* VariantMerge generated from: '<S1318>/DFIR_OEXV_PressSens' incorporates:
     *  Constant: '<S1319>/FALSE Constant7'
     */
    rtb_Comparison4_k = false;

    /* VariantMerge generated from: '<S1318>/VeVLDR_e_FaultSts_AC_RefrigPresSnsrDCkt' incorporates:
     *  Constant: '<S1321>/Constant'
     */
    VLDR_ac_B.VariantMergeForOutportVeVLDR__a = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S1318>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrDCkt' incorporates:
     *  Constant: '<S1322>/Constant'
     */
    VLDR_ac_B.VariantMergeForOutportVeVLDR__b = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S1318>/VeVLDR_e_FaultSts_AC_RefrigExpVlvActD_CntrlCktPerf' incorporates:
     *  Constant: '<S1323>/Constant'
     */
    VLDR_ac_B.VariantMergeForOutportVeVLDR_e_ = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S1318>/VeVLDR_e_FaultSts_AC_RefrigPresSnsrDCktPerf' incorporates:
     *  Constant: '<S1324>/Constant'
     */
    VLDR_ac_B.VariantMergeForOutportVeVLDR__e = CeDFIB_e_Init;

    /* End of Outputs for SubSystem: '<S1318>/OEXV_Default_Diag' */
#endif

    /* End of Outputs for SubSystem: '<S19>/OEXV' */

    /* Logic: '<S1151>/Logical1' incorporates:
     *  Logic: '<S1152>/Logical1'
     *  Logic: '<S1152>/Logical2'
     *  Logic: '<S1152>/Logical3'
     *  Logic: '<S1153>/Logical1'
     *  Logic: '<S1153>/Logical2'
     *  Logic: '<S1153>/Logical3'
     *  Logic: '<S1154>/Logical1'
     *  Logic: '<S1154>/Logical2'
     *  Logic: '<S1154>/Logical3'
     *  Logic: '<S1155>/Logical4'
     *  Logic: '<S1156>/Logical1'
     *  Logic: '<S1166>/Logical4'
     *  RelationalOperator: '<S1155>/Comparison1'
     *  RelationalOperator: '<S1155>/Comparison2'
     *  RelationalOperator: '<S1155>/Comparison4'
     *  RelationalOperator: '<S1156>/Comparison1'
     *  RelationalOperator: '<S1156>/Comparison3'
     *  RelationalOperator: '<S1166>/Comparison1'
     *  RelationalOperator: '<S1166>/Comparison2'
     *  RelationalOperator: '<S1166>/Comparison4'
     *  RelationalOperator: '<S1167>/Comparison4'
     *  SignalConversion generated from: '<S975>/Variant Source'
     *  Switch: '<S1155>/Switch'
     *  Switch: '<S1166>/Switch'
     *  UnitDelay: '<S1155>/Unit Delay'
     *  UnitDelay: '<S1166>/Unit Delay'
     */
#if Rte_SysCon_Variant_VLDR_6

    /* Outputs for Atomic SubSystem: '<S1154>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S1166>/EdgeRising' */
    /* Outputs for Atomic SubSystem: '<S1154>/Stop Watch Reset Enabled1' */
    /* Outputs for Atomic SubSystem: '<S1154>/Stop Watch Reset Enabled' */
    /* Outputs for Atomic SubSystem: '<S1153>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S1155>/EdgeRising' */
    /* Outputs for Atomic SubSystem: '<S1153>/Stop Watch Reset Enabled1' */
    /* Outputs for Atomic SubSystem: '<S1153>/Stop Watch Reset Enabled' */
    VLDR_ac_B.VariantMerge_For_Variant__hykjh[0] =
        !rtb_VariantMergeForOutportDFIR_;
    VLDR_ac_B.VariantMerge_For_Variant__hykjh[1] = ((!rtb_Comparison4_k) ||
        (!rtb_Logical11));

    /* Logic: '<S1156>/Logical1' incorporates:
     *  Constant: '<S1164>/KeVLDR_Pct_EXV_Max_PosRq'
     *  Constant: '<S1165>/KeVLDR_Pct_EXV_Min_PosRq'
     */
    rtb_Comparison4_k = ((rtb_TmpSignalConversionAtVeRC_g <
                          KeVLDR_Pct_EXV_Max_PosRq) &&
                         (rtb_TmpSignalConversionAtVeRC_g >
                          KeVLDR_Pct_EXV_Min_PosRq));

    /* Logic: '<S1153>/Logical1' */
    rtb_VariantMergeForOutportDFIR_ = !rtb_UnitDelay_id;

    /* Switch: '<S1158>/Switch1' */
    if ((!rtb_Comparison4_k) || rtb_VariantMergeForOutportDFIR_)
    {
        /* Switch: '<S1158>/Switch1' incorporates:
         *  Constant: '<S1158>/Constant Value2'
         */
        rtb_Switch1_d = 0.0F;
    }
    else
    {
        /* Switch: '<S1158>/Switch1' incorporates:
         *  Constant: '<S1153>/Constant Value1'
         *  Sum: '<S1158>/Subtraction'
         *  Switch: '<S1158>/Switch2'
         *  UnitDelay: '<S1158>/Unit Delay'
         */
        rtb_Switch1_d = VLDR_ac_DW.UnitDelay_DSTATE_g4 + 0.025F;
    }

    /* End of Switch: '<S1158>/Switch1' */

    /* Update for UnitDelay: '<S1158>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_g4 = rtb_Switch1_d;

    /* RelationalOperator: '<S1155>/Comparison1' incorporates:
     *  Constant: '<S1162>/KeVLDR_t_IUMPR_EXVperf_MinConsecTime_CmdOn'
     */
    rtb_Logical11 = (rtb_Switch1_d > KeVLDR_t_IUMPR_EXVperf_MinConsecTime_CmdOn);

    /* Switch: '<S1159>/Switch1' incorporates:
     *  Switch: '<S1159>/Switch2'
     */
    if (rtb_VariantMergeForOutportDFIR_)
    {
        /* Switch: '<S1159>/Switch1' incorporates:
         *  Constant: '<S1159>/Constant Value2'
         */
        rtb_Switch1_mb = 0.0F;
    }
    else if (rtb_Comparison4_k)
    {
        /* Switch: '<S1159>/Switch2' incorporates:
         *  Constant: '<S1153>/Constant Value2'
         *  Sum: '<S1159>/Subtraction'
         *  Switch: '<S1159>/Switch1'
         *  UnitDelay: '<S1159>/Unit Delay'
         */
        rtb_Switch1_mb = VLDR_ac_DW.UnitDelay_DSTATE_jr + 0.025F;
    }
    else
    {
        /* Switch: '<S1159>/Switch1' incorporates:
         *  Switch: '<S1159>/Switch2'
         *  UnitDelay: '<S1159>/Unit Delay'
         */
        rtb_Switch1_mb = VLDR_ac_DW.UnitDelay_DSTATE_jr;
    }

    /* End of Switch: '<S1159>/Switch1' */

    /* Update for UnitDelay: '<S1159>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_jr = rtb_Switch1_mb;

    /* Logic: '<S1160>/AND' incorporates:
     *  Logic: '<S1160>/OR1'
     *  UnitDelay: '<S1160>/Unit Delay'
     */
    rtb_Comparison4_k = (rtb_Logical11 && (!VLDR_ac_DW.UnitDelay_DSTATE_hy));

    /* Update for UnitDelay: '<S1160>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_hy = rtb_Logical11;
    if (rtb_VariantMergeForOutportDFIR_)
    {
        /* Switch: '<S1155>/Switch' incorporates:
         *  Constant: '<S1155>/Constant Value5'
         */
        rtb_Switch1_d = 0.0F;
    }
    else
    {
        /* Switch: '<S1155>/Switch' incorporates:
         *  Sum: '<S1155>/Sum'
         *  Switch: '<S1155>/Switch1'
         */
        rtb_Switch1_d = ((float32)(rtb_Comparison4_k ? 1.0F : 0.0F)) +
            VLDR_ac_DW.UnitDelay_DSTATE_j;
    }

    /* Logic: '<S1157>/OR1' incorporates:
     *  Constant: '<S1161>/KeVLDR_Cnt_IUMPR_EXVperf_MinConsecCnt_CmdOn'
     *  Constant: '<S1163>/KeVLDR_t_IUMPR_EXVperf_MinCumlTime_CmdOn'
     *  Logic: '<S1157>/NOT'
     *  Logic: '<S1157>/OR'
     *  UnitDelay: '<S1157>/Unit Delay'
     */
    VLDR_ac_B.VariantMerge_For_Variant__hykjh[2] = (((rtb_Switch1_mb >=
        KeVLDR_t_IUMPR_EXVperf_MinCumlTime_CmdOn) || (rtb_Switch1_d >=
        KeVLDR_Cnt_IUMPR_EXVperf_MinConsecCnt_CmdOn)) ||
        ((!rtb_VariantMergeForOutportDFIR_) && (VLDR_ac_DW.UnitDelay_DSTATE_cz)));

    /* Update for UnitDelay: '<S1157>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_cz = VLDR_ac_B.VariantMerge_For_Variant__hykjh[2];

    /* RelationalOperator: '<S1167>/Comparison4' incorporates:
     *  Constant: '<S1175>/Constant'
     *  SignalConversion generated from: '<S1>/VeTHMR_e_BatThrmlSt'
     */
    rtb_VariantMergeForOutportDFIR_ = (((uint32)rtb_TmpSignalConversionAtVeTH_j)
        == CeTHMR_e_ActiveCooling);

    /* Logic: '<S1154>/Logical1' */
    rtb_UnitDelay_id = !rtb_UnitDelay_id;

    /* Switch: '<S1169>/Switch1' */
    if ((!rtb_VariantMergeForOutportDFIR_) || rtb_UnitDelay_id)
    {
        /* Switch: '<S1169>/Switch1' incorporates:
         *  Constant: '<S1169>/Constant Value2'
         */
        rtb_Switch1_mb = 0.0F;
    }
    else
    {
        /* Switch: '<S1169>/Switch1' incorporates:
         *  Constant: '<S1154>/Constant Value1'
         *  Sum: '<S1169>/Subtraction'
         *  Switch: '<S1169>/Switch2'
         *  UnitDelay: '<S1169>/Unit Delay'
         */
        rtb_Switch1_mb = VLDR_ac_DW.UnitDelay_DSTATE_a + 0.025F;
    }

    /* End of Switch: '<S1169>/Switch1' */

    /* Update for UnitDelay: '<S1169>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_a = rtb_Switch1_mb;

    /* RelationalOperator: '<S1166>/Comparison1' incorporates:
     *  Constant: '<S1173>/KeVLDR_t_IUMPR_EXV_presSens_MinConsecTime_CmdOn'
     */
    rtb_Logical11 = (rtb_Switch1_mb >
                     KeVLDR_t_IUMPR_EXV_presSens_MinConsecTime_CmdOn);

    /* Switch: '<S1170>/Switch1' incorporates:
     *  Switch: '<S1170>/Switch2'
     */
    if (rtb_UnitDelay_id)
    {
        /* Switch: '<S1170>/Switch1' incorporates:
         *  Constant: '<S1170>/Constant Value2'
         */
        rtb_TmpSignalConversionAtVeT_dk = 0.0F;
    }
    else if (rtb_VariantMergeForOutportDFIR_)
    {
        /* Switch: '<S1170>/Switch2' incorporates:
         *  Constant: '<S1154>/Constant Value2'
         *  Sum: '<S1170>/Subtraction'
         *  Switch: '<S1170>/Switch1'
         *  UnitDelay: '<S1170>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeT_dk = VLDR_ac_DW.UnitDelay_DSTATE_g + 0.025F;
    }
    else
    {
        /* Switch: '<S1170>/Switch1' incorporates:
         *  Switch: '<S1170>/Switch2'
         *  UnitDelay: '<S1170>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeT_dk = VLDR_ac_DW.UnitDelay_DSTATE_g;
    }

    /* End of Switch: '<S1170>/Switch1' */

    /* Update for UnitDelay: '<S1170>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_g = rtb_TmpSignalConversionAtVeT_dk;

    /* Logic: '<S1171>/AND' incorporates:
     *  Logic: '<S1171>/OR1'
     *  UnitDelay: '<S1171>/Unit Delay'
     */
    rtb_VariantMergeForOutportDFIR_ = (rtb_Logical11 &&
        (!VLDR_ac_DW.UnitDelay_DSTATE_fzt));

    /* Update for UnitDelay: '<S1171>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_fzt = rtb_Logical11;
    if (rtb_UnitDelay_id)
    {
        /* Switch: '<S1166>/Switch' incorporates:
         *  Constant: '<S1166>/Constant Value5'
         */
        rtb_Switch1_mb = 0.0F;
    }
    else
    {
        /* Switch: '<S1166>/Switch' incorporates:
         *  Sum: '<S1166>/Sum'
         *  Switch: '<S1166>/Switch1'
         */
        rtb_Switch1_mb = ((float32)(rtb_VariantMergeForOutportDFIR_ ? 1.0F :
                           0.0F)) + VLDR_ac_DW.UnitDelay_DSTATE_jz;
    }

    /* Logic: '<S1168>/OR1' incorporates:
     *  Constant: '<S1172>/KeVLDR_Cnt_IUMPR_EXV_presSens_MinConsecCnt_CmdOn'
     *  Constant: '<S1174>/KeVLDR_t_IUMPR_EXV_presSens_MinCumlTime_CmdOn'
     *  Logic: '<S1168>/NOT'
     *  Logic: '<S1168>/OR'
     *  UnitDelay: '<S1168>/Unit Delay'
     */
    VLDR_ac_B.VariantMerge_For_Variant__hykjh[3] =
        (((rtb_TmpSignalConversionAtVeT_dk >=
           KeVLDR_t_IUMPR_EXV_presSens_MinCumlTime_CmdOn) || (rtb_Switch1_mb >=
           KeVLDR_Cnt_IUMPR_EXV_presSens_MinConsecCnt_CmdOn)) ||
         ((!rtb_UnitDelay_id) && (VLDR_ac_DW.UnitDelay_DSTATE_jg)));

    /* Update for UnitDelay: '<S1168>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_jg = VLDR_ac_B.VariantMerge_For_Variant__hykjh[3];

    /* End of Outputs for SubSystem: '<S1154>/Stop Watch Reset Enabled' */
    /* End of Outputs for SubSystem: '<S1154>/Stop Watch Reset Enabled1' */
    /* End of Outputs for SubSystem: '<S1166>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S1154>/Signal Latch On With Reset' */
#else

    /* VariantMerge generated from: '<S975>/Variant Source' incorporates:
     *  Constant: '<S1150>/FALSE Constant'
     *  SignalConversion generated from: '<S975>/Variant Source'
     */
    VLDR_ac_B.VariantMerge_For_Variant__hykjh[0] = false;
    VLDR_ac_B.VariantMerge_For_Variant__hykjh[1] = false;
    VLDR_ac_B.VariantMerge_For_Variant__hykjh[2] = false;
    VLDR_ac_B.VariantMerge_For_Variant__hykjh[3] = false;

#endif

    /* End of Logic: '<S1151>/Logical1' */
    /* End of Outputs for SubSystem: '<S1153>/Stop Watch Reset Enabled' */
    /* End of Outputs for SubSystem: '<S1153>/Stop Watch Reset Enabled1' */
    /* End of Outputs for SubSystem: '<S1155>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S1153>/Signal Latch On With Reset' */
#if Rte_SysCon_Variant_VLDR_10

    /* Outputs for Enabled SubSystem: '<S4>/LTR_Diag' */
    /* Inport: '<Root>/VeTAIR_b_LTR_BypsVlv_ActlPstn_FA' */
    (void)Rte_Read_VeTAIR_b_LTR_BypsVlv_ActlPstn_FA_Value(&rtb_Logical3_oe);

    /* Outputs for Enabled SubSystem: '<S4>/LTR_Diag' incorporates:
     *  EnablePort: '<S17>/Enable'
     */

    /* S-Function (sfix_bitop): '<S1182>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S1182>/StatusByte_HB_PSC_CtrlValBCktPerf'
     *  S-Function (sfix_bitop): '<S1202>/Bitwise Operator2'
     */
    tmpRead_f = ((uint32)VLDR_ac_DW.StatusByte_HB_PSC_CtrlValBCktPe) & 64U;

    /* UnitDelay: '<S1204>/Unit Delay' incorporates:
     *  Constant: '<S1180>/Constant1'
     *  Constant: '<S1180>/Constant2'
     *  Constant: '<S1181>/Constant1'
     *  Constant: '<S1181>/Constant2'
     *  Constant: '<S1182>/Constant1'
     *  Constant: '<S1182>/Constant2'
     *  Constant: '<S1186>/KeVLDR_b_LTR_PerfDiag_LIN1BusOff_Ovrd'
     *  Constant: '<S1187>/KeVLDR_b_LTR_PerfDiag_LOC_Ovrd'
     *  Constant: '<S1188>/KeVLDR_b_LTR_PerfDiag_SysVolt_Ovrd'
     *  DataStoreRead: '<S1180>/StatusByte_LIN1_BusOff'
     *  DataStoreRead: '<S1181>/StatusByte_LostCommHB_PSCCooCtrlVlvB'
     *  DataStoreRead: '<S1182>/StatusByte_HB_PSC_CtrlValBCktPerf'
     *  Logic: '<S1176>/Logical1'
     *  Logic: '<S1176>/Logical18'
     *  Logic: '<S1176>/Logical21'
     *  Logic: '<S1176>/Logical4'
     *  Logic: '<S1176>/Logical5'
     *  Logic: '<S1176>/Logical6'
     *  Logic: '<S1176>/Logical7'
     *  Logic: '<S1180>/Logical Operator'
     *  Logic: '<S1181>/Logical Operator'
     *  Logic: '<S1182>/Logical Operator'
     *  RelationalOperator: '<S1180>/Relational Operator1'
     *  RelationalOperator: '<S1180>/Relational Operator2'
     *  RelationalOperator: '<S1181>/Relational Operator1'
     *  RelationalOperator: '<S1181>/Relational Operator2'
     *  RelationalOperator: '<S1182>/Relational Operator1'
     *  RelationalOperator: '<S1182>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S1180>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1180>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1181>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1181>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1182>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1182>/Bitwise Operator2'
     */
    rtb_TmpSignalConversionAtVeDFIR = ((((((rtb_TmpSignalConversionAtVeDFIR ||
        (KeVLDR_b_LTR_PerfDiag_SysVolt_Ovrd)) && rtb_Logical1) && rtb_Logical28)
        && ((((((sint32)VLDR_ac_DW.StatusByte_LIN1_BusOff) & 1) <= 0) ||
             ((((uint32)VLDR_ac_DW.StatusByte_LIN1_BusOff) & 64U) != 0U)) ||
            (KeVLDR_b_LTR_PerfDiag_LIN1BusOff_Ovrd))) && ((((((sint32)
        VLDR_ac_DW.StatusByte_LostCommHB_PSCCooCtr) & 1) <= 0) || ((((uint32)
        VLDR_ac_DW.StatusByte_LostCommHB_PSCCooCtr) & 64U) != 0U)) ||
        (KeVLDR_b_LTR_PerfDiag_LOC_Ovrd))) && (((((sint32)
        VLDR_ac_DW.StatusByte_HB_PSC_CtrlValBCktPe) & 1) <= 0) || (tmpRead_f !=
        0U)));

    /* Logic: '<S1176>/Logical3' */
    rtb_Logical3_oe = (rtb_TmpSignalConversionAtVeDFIR && rtb_Logical3_oe);

    /* Outputs for Atomic SubSystem: '<S1176>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S1191>/EdgeRising' */
    /* Logic: '<S1192>/AND' incorporates:
     *  Logic: '<S1192>/OR1'
     *  UnitDelay: '<S1192>/Unit Delay'
     */
    rtb_Logical1 = (rtb_Logical3_oe && (!VLDR_ac_DW.UnitDelay_DSTATE_bl));

    /* Update for UnitDelay: '<S1192>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_bl = rtb_Logical3_oe;

    /* End of Outputs for SubSystem: '<S1191>/EdgeRising' */

    /* Switch: '<S1191>/Switch1' incorporates:
     *  Logic: '<S1191>/OR'
     *  Logic: '<S1191>/OR1'
     */
    if ((!rtb_Logical3_oe) || rtb_Logical1)
    {
        /* Switch: '<S1191>/Switch1' incorporates:
         *  Constant: '<S1191>/Constant Value1'
         */
        rtb_TmpSignalConversionAtVeT_dk = 0.0F;
    }
    else
    {
        /* Switch: '<S1191>/Switch1' incorporates:
         *  Constant: '<S1183>/Calib'
         *  Constant: '<S1189>/KeVLDR_t_LTR_FA_WaitTime'
         *  MinMax: '<S1191>/Minimum'
         *  Sum: '<S1191>/Summation'
         *  UnitDelay: '<S1191>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeT_dk = fminf(KeVLDR_t_LTR_FA_WaitTime,
            HeVLDR_t_MedTED + VLDR_ac_DW.UnitDelay_DSTATE_pr);
    }

    /* End of Switch: '<S1191>/Switch1' */
    /* End of Outputs for SubSystem: '<S1176>/Turn On Delay Time' */

    /* Inport: '<Root>/VeTAIR_Pct_LTR_BypsVlv_ActlPstn' */
    (void)Rte_Read_VeTAIR_Pct_LTR_BypsVlv_ActlPstn_Value(&tmpRead_g);

    /* Outputs for Atomic SubSystem: '<S1176>/Turn On Delay Time' */
    /* Logic: '<S1191>/AND' incorporates:
     *  Constant: '<S1189>/KeVLDR_t_LTR_FA_WaitTime'
     *  RelationalOperator: '<S1191>/Greater  Than'
     */
    rtb_Logical3_oe = (rtb_Logical3_oe && (rtb_TmpSignalConversionAtVeT_dk >=
                        KeVLDR_t_LTR_FA_WaitTime));

    /* Update for UnitDelay: '<S1191>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_pr = rtb_TmpSignalConversionAtVeT_dk;

    /* End of Outputs for SubSystem: '<S1176>/Turn On Delay Time' */

    /* Logic: '<S1176>/Logical9' incorporates:
     *  Constant: '<S1184>/KeVLDR_Pct_LTRVlv_PstnCmnd_Max'
     *  Constant: '<S1185>/KeVLDR_Pct_LTRVlv_PstnCmnd_Min'
     *  Constant: '<S1190>/Calib'
     *  Logic: '<S1176>/Logical10'
     *  Logic: '<S1176>/Logical11'
     *  Logic: '<S1176>/Logical2'
     *  RelationalOperator: '<S1176>/Comparison2'
     *  RelationalOperator: '<S1176>/Comparison4'
     */
    VeVLDR_b_LTR_PerfDiag_En = ((((rtb_TmpSignalConversionAtVeR_mt <
        KeVLDR_Pct_LTRVlv_PstnCmnd_Max) && (rtb_TmpSignalConversionAtVeR_mt >
        KeVLDR_Pct_LTRVlv_PstnCmnd_Min)) && rtb_TmpSignalConversionAtVeDFIR) ||
        ((KeVLDR_b_LTR_DiagPerfCndsOV_En) && rtb_Logical3_oe));

    /* RelationalOperator: '<S1202>/Relational Operator3' incorporates:
     *  Constant: '<S1202>/Constant3'
     */
    rtb_Logical28 = (tmpRead_f == 0U);

    /* Outputs for Atomic SubSystem: '<S1202>/EdgeFalling1' */
    /* Logic: '<S1202>/Logical Operator' incorporates:
     *  Logic: '<S1204>/OR1'
     */
    rtb_TmpSignalConversionAtVeRC_e = !rtb_Logical28;

    /* End of Outputs for SubSystem: '<S1202>/EdgeFalling1' */

    /* Logic: '<S1202>/Logical1' incorporates:
     *  Constant: '<S1200>/Calib'
     *  Constant: '<S1201>/KeVLDR_b_LTR_PerfDiag_XYEnbl'
     *  Constant: '<S1202>/Constant1'
     *  DataStoreRead: '<S1179>/Data Store Read2'
     *  Logic: '<S1179>/AND1'
     *  Logic: '<S1202>/Logical Operator'
     *  Logic: '<S1202>/Logical10'
     *  Logic: '<S1202>/Logical12'
     *  RelationalOperator: '<S1202>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S1202>/Bitwise Operator3'
     */
    rtb_TmpSignalConversionAtVeDFIR = (((VeVLDR_b_LTR_PerfDiag_En) &&
        (KeVLDR_b_LTR_PerfDiag_XYEnbl)) &&
        ((!KeVLDR_b_HB_PSC_CtrlValBCktPerf_LtchEnbl) || (((((uint32)
        VLDR_ac_DW.StatusByte_HB_PSC_CtrlValBCktPe) & 1U) == 0U) ||
        rtb_TmpSignalConversionAtVeRC_e)));

    /* RelationalOperator: '<S1178>/Comparison1' incorporates:
     *  Abs: '<S1178>/Abs'
     *  Constant: '<S1194>/KeVLDR_Pct_LTR_PerfDiag_PstnDiffMax'
     *  Sum: '<S1178>/Sum1'
     */
    rtb_Logical1 = (fabsf(rtb_TmpSignalConversionAtVeR_mt - tmpRead_g) >=
                    KeVLDR_Pct_LTR_PerfDiag_PstnDiffMax);

    /* Outputs for Atomic SubSystem: '<S1178>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S1196>/EdgeRising' */
    /* Logic: '<S1197>/AND' incorporates:
     *  Logic: '<S1197>/OR1'
     *  UnitDelay: '<S1197>/Unit Delay'
     */
    rtb_UnitDelay_id = (rtb_Logical1 && (!VLDR_ac_DW.UnitDelay_DSTATE_grj));

    /* Update for UnitDelay: '<S1197>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_grj = rtb_Logical1;

    /* End of Outputs for SubSystem: '<S1196>/EdgeRising' */

    /* Switch: '<S1196>/Switch1' incorporates:
     *  Constant: '<S1193>/KeVLDR_Cnt_LTR_Position_Wait_Time'
     *  Constant: '<S1196>/Constant Value'
     *  Logic: '<S1196>/OR'
     *  Logic: '<S1196>/OR1'
     *  MinMax: '<S1196>/Minimum'
     *  Sum: '<S1196>/Summation'
     *  UnitDelay: '<S1196>/Unit Delay'
     */
    if ((!rtb_Logical1) || rtb_UnitDelay_id)
    {
        /* Switch: '<S1196>/Switch1' incorporates:
         *  Constant: '<S1196>/Constant Value1'
         */
        rtb_Switch1_dj = 0U;
    }
    else if (KeVLDR_Cnt_LTR_Position_Wait_Time < ((uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_jb) + 1U)))
    {
        /* MinMax: '<S1196>/Minimum' incorporates:
         *  Constant: '<S1193>/KeVLDR_Cnt_LTR_Position_Wait_Time'
         *  Switch: '<S1196>/Switch1'
         */
        rtb_Switch1_dj = KeVLDR_Cnt_LTR_Position_Wait_Time;
    }
    else
    {
        /* Switch: '<S1196>/Switch1' incorporates:
         *  Constant: '<S1196>/Constant Value'
         *  MinMax: '<S1196>/Minimum'
         *  Sum: '<S1196>/Summation'
         *  UnitDelay: '<S1196>/Unit Delay'
         */
        rtb_Switch1_dj = (uint16)(((uint32)VLDR_ac_DW.UnitDelay_DSTATE_jb) + 1U);
    }

    /* End of Switch: '<S1196>/Switch1' */

    /* Update for UnitDelay: '<S1196>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_jb = rtb_Switch1_dj;

    /* End of Outputs for SubSystem: '<S1178>/Turn On Delay Sample' */

    /* Outputs for Atomic SubSystem: '<S1202>/EdgeFalling1' */
    /* Logic: '<S1204>/AND' incorporates:
     *  UnitDelay: '<S1204>/Unit Delay'
     */
    rtb_UnitDelay_id = (rtb_TmpSignalConversionAtVeRC_e &&
                        (VLDR_ac_DW.UnitDelay_DSTATE_gr));

    /* Update for UnitDelay: '<S1204>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_gr = rtb_Logical28;

    /* End of Outputs for SubSystem: '<S1202>/EdgeFalling1' */

    /* Logic: '<S1202>/Logical5' incorporates:
     *  Logic: '<S1177>/NOT4'
     */
    rtb_VM_Conditional_Signal_DsblD = ((rtb_VM_Conditional_Signal_DsblD ||
        rtb_VM_Conditional_Signal_PostC) || rtb_UnitDelay_id);

    /* Logic: '<S1203>/Fail Counter Reset' incorporates:
     *  UnitDelay: '<S1203>/Unit Delay'
     *  UnitDelay: '<S1203>/Unit Delay1'
     */
    rtb_Logical28 = ((rtb_VM_Conditional_Signal_DsblD ||
                      (VLDR_ac_DW.UnitDelay_DSTATE_ab4)) ||
                     (VLDR_ac_DW.UnitDelay1_DSTATE_d4));

    /* Outputs for Atomic SubSystem: '<S1203>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S1203>/Counter Reset  Enabled ' */
    /* Switch: '<S1210>/Switch1' incorporates:
     *  Constant: '<S1193>/KeVLDR_Cnt_LTR_Position_Wait_Time'
     *  Constant: '<S1195>/KeVLDR_b_LTR_PosActFA_Enbl'
     *  Logic: '<S1178>/Logical1'
     *  Logic: '<S1178>/Logical18'
     *  Logic: '<S1196>/AND'
     *  Logic: '<S1203>/NOT6'
     *  RelationalOperator: '<S1196>/Greater  Than'
     *  Switch: '<S1210>/Switch2'
     *  Switch: '<S1211>/Switch1'
     */
    if (rtb_Logical28)
    {
        /* Switch: '<S1210>/Switch1' incorporates:
         *  Constant: '<S1210>/Constant Value2'
         */
        VeVLDR_Cnt_LTR_PerfDiag_FailCnt = 0U;

        /* Switch: '<S1211>/Switch1' incorporates:
         *  Constant: '<S1211>/Constant Value2'
         */
        VeVLDR_Cnt_LTR_PerfDiag_SmpCnt = 0U;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S1178>/Turn On Delay Sample' */
        if (rtb_TmpSignalConversionAtVeDFIR && ((rtb_Logical1 && (rtb_Switch1_dj
               >= KeVLDR_Cnt_LTR_Position_Wait_Time)) || (rtb_Logical3_oe &&
                (KeVLDR_b_LTR_PosActFA_Enbl))))
        {
            /* Switch: '<S1210>/Switch2' incorporates:
             *  Constant: '<S1210>/Constant Value1'
             *  Sum: '<S1210>/Subtraction'
             *  Switch: '<S1210>/Switch1'
             *  UnitDelay: '<S1210>/Unit Delay'
             */
            VeVLDR_Cnt_LTR_PerfDiag_FailCnt = (uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_mi) + 1U);
        }
        else
        {
            /* Switch: '<S1210>/Switch1' incorporates:
             *  Switch: '<S1210>/Switch2'
             *  UnitDelay: '<S1210>/Unit Delay'
             */
            VeVLDR_Cnt_LTR_PerfDiag_FailCnt = VLDR_ac_DW.UnitDelay_DSTATE_mi;
        }

        /* End of Outputs for SubSystem: '<S1178>/Turn On Delay Sample' */

        /* Switch: '<S1211>/Switch2' */
        if (rtb_TmpSignalConversionAtVeDFIR)
        {
            /* Switch: '<S1211>/Switch1' incorporates:
             *  Constant: '<S1211>/Constant Value1'
             *  Sum: '<S1211>/Subtraction'
             *  Switch: '<S1211>/Switch2'
             *  UnitDelay: '<S1211>/Unit Delay'
             */
            VeVLDR_Cnt_LTR_PerfDiag_SmpCnt = (uint16)(((uint32)
                VLDR_ac_DW.UnitDelay_DSTATE_m2) + 1U);
        }
        else
        {
            /* Switch: '<S1211>/Switch1' incorporates:
             *  Switch: '<S1211>/Switch2'
             *  UnitDelay: '<S1211>/Unit Delay'
             */
            VeVLDR_Cnt_LTR_PerfDiag_SmpCnt = VLDR_ac_DW.UnitDelay_DSTATE_m2;
        }

        /* End of Switch: '<S1211>/Switch2' */
    }

    /* End of Switch: '<S1210>/Switch1' */
    /* End of Outputs for SubSystem: '<S1203>/Counter Reset  Enabled 1' */

    /* Update for UnitDelay: '<S1210>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_mi = VeVLDR_Cnt_LTR_PerfDiag_FailCnt;

    /* End of Outputs for SubSystem: '<S1203>/Counter Reset  Enabled ' */

    /* Outputs for Atomic SubSystem: '<S1203>/Counter Reset  Enabled 1' */
    /* Update for UnitDelay: '<S1211>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_m2 = VeVLDR_Cnt_LTR_PerfDiag_SmpCnt;

    /* End of Outputs for SubSystem: '<S1203>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S1203>/Greater Than or Equal ' incorporates:
     *  Constant: '<S1198>/KeVLDR_Cnt_LTR_PerfDiag_FailCnt'
     */
    rtb_Logical3_oe = (VeVLDR_Cnt_LTR_PerfDiag_FailCnt >=
                       KeVLDR_Cnt_LTR_PerfDiag_FailCnt);

    /* Logic: '<S1203>/NOT5' incorporates:
     *  Constant: '<S1199>/KeVLDR_Cnt_LTR_PerfDiag_SmpCnt'
     *  Logic: '<S1203>/NOT3'
     *  RelationalOperator: '<S1203>/Less Than  or Equal'
     */
    rtb_TmpSignalConversionAtVeDFIR = ((VeVLDR_Cnt_LTR_PerfDiag_SmpCnt >=
        KeVLDR_Cnt_LTR_PerfDiag_SmpCnt) && (!rtb_Logical3_oe));

    /* Switch: '<S1216>/Switch1' incorporates:
     *  Constant: '<S1209>/Constant Value'
     *  DataStoreWrite: '<S1179>/Data Store Write1'
     *  Switch: '<S1215>/Switch1'
     */
    if (rtb_VM_Conditional_Signal_PostC)
    {
        VLDR_ac_DW.NeVLDR_Cnt_LTR_PerfDiag_MFOP = 0U;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeDFIR)
        {
            /* MinMax: '<S1209>/Minimum2' incorporates:
             *  DataStoreRead: '<S1179>/Data Store Read'
             *  Switch: '<S1215>/Switch1'
             */
            if (VeVLDR_Cnt_LTR_PerfDiag_FailCnt >
                    VLDR_ac_DW.NeVLDR_Cnt_LTR_PerfDiag_MFOP)
            {
                /* DataStoreWrite: '<S1179>/Data Store Write1' incorporates:
                 *  Switch: '<S1215>/Switch1'
                 */
                VLDR_ac_DW.NeVLDR_Cnt_LTR_PerfDiag_MFOP =
                    VeVLDR_Cnt_LTR_PerfDiag_FailCnt;
            }

            /* End of MinMax: '<S1209>/Minimum2' */
        }
    }

    /* End of Switch: '<S1216>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S1202>/Fail' */
    VLDR_ac_Fail(rtb_Logical3_oe, &VLDR_ac_B.Merge_d);

    /* End of Outputs for SubSystem: '<S1202>/Fail' */

    /* Outputs for Enabled SubSystem: '<S1202>/Init' */
    VLDR_ac_Init_a(rtb_VM_Conditional_Signal_DsblD, &VLDR_ac_B.Merge_d);

    /* End of Outputs for SubSystem: '<S1202>/Init' */

    /* Outputs for Enabled SubSystem: '<S1202>/Pass' */
    VLDR_ac_Pass(rtb_TmpSignalConversionAtVeDFIR, &VLDR_ac_B.Merge_d);

    /* End of Outputs for SubSystem: '<S1202>/Pass' */

    /* Update for UnitDelay: '<S1203>/Unit Delay' */
    VLDR_ac_DW.UnitDelay_DSTATE_ab4 = rtb_TmpSignalConversionAtVeDFIR;

    /* Update for UnitDelay: '<S1203>/Unit Delay1' */
    VLDR_ac_DW.UnitDelay1_DSTATE_d4 = rtb_Logical3_oe;

    /* End of Outputs for SubSystem: '<S4>/LTR_Diag' */
#endif

    /* Update for UnitDelay: '<S983>/Unit Delay' incorporates:
     *  UnitDelay: '<S994>/Unit Delay'
     */
#if Rte_SysCon_Variant_VLDR_1

    VLDR_ac_DW.UnitDelay_DSTATE = rtb_Switch1_ja;
    VLDR_ac_DW.UnitDelay_DSTATE_f = rtb_Switch1_ncz;

#endif

    /* End of Update for UnitDelay: '<S983>/Unit Delay' */

    /* Update for UnitDelay: '<S1011>/Unit Delay' incorporates:
     *  UnitDelay: '<S1022>/Unit Delay'
     */
#if Rte_SysCon_Variant_VLDR_4

    VLDR_ac_DW.UnitDelay_DSTATE_e = rtb_Switch1_mq;
    VLDR_ac_DW.UnitDelay_DSTATE_l = rtb_Switch1_fq;

#endif

    /* End of Update for UnitDelay: '<S1011>/Unit Delay' */

    /* Update for UnitDelay: '<S1036>/Unit Delay' */
#if Rte_SysCon_Variant_VLDR_2

    VLDR_ac_DW.UnitDelay_DSTATE_fw = rtb_Switch1_ln;

#endif

    /* End of Update for UnitDelay: '<S1036>/Unit Delay' */

    /* Update for UnitDelay: '<S1077>/Unit Delay' */
#if Rte_SysCon_Variant_VLDR_3

    VLDR_ac_DW.UnitDelay_DSTATE_fz = rtb_Switch1_bc;

#endif

    /* End of Update for UnitDelay: '<S1077>/Unit Delay' */

    /* Update for UnitDelay: '<S1130>/Unit Delay' incorporates:
     *  UnitDelay: '<S1140>/Unit Delay'
     */
#if Rte_SysCon_Variant_VLDR_5

    VLDR_ac_DW.UnitDelay_DSTATE_n = rtb_Switch1_mh;
    VLDR_ac_DW.UnitDelay_DSTATE_i = rtb_Switch1_mp;

#endif

    /* End of Update for UnitDelay: '<S1130>/Unit Delay' */

    /* Update for UnitDelay: '<S1155>/Unit Delay' incorporates:
     *  UnitDelay: '<S1166>/Unit Delay'
     */
#if Rte_SysCon_Variant_VLDR_6

    VLDR_ac_DW.UnitDelay_DSTATE_j = rtb_Switch1_d;
    VLDR_ac_DW.UnitDelay_DSTATE_jz = rtb_Switch1_mb;

#endif

    /* End of Update for UnitDelay: '<S1155>/Unit Delay' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Output'
     */
    /* Outport: '<Root>/VeVLDR_b_EEXV_PerfDiag_FltDtct' incorporates:
     *  Gain: '<S1603>/Gain'
     *  SignalConversion generated from: '<S1>/VeVLDR_b_EEXV_PerfDiag_FltDtct'
     */
    (void)Rte_Write_VeVLDR_b_EEXV_PerfDiag_FltDtct_Value
        (VLDR_ac_B.VariantMergeForOutportEEXV_Perf);

    /* Outport: '<Root>/VeVLDR_b_EEXV_PressElctrFlt_FltDtct' incorporates:
     *  Gain: '<S1586>/Gain'
     *  SignalConversion generated from: '<S1>/VeVLDR_b_EEXV_PressElctrFlt_FltDtct'
     */
    (void)Rte_Write_VeVLDR_b_EEXV_PressElctrFlt_FltDtct_Value
        (VLDR_ac_B.VariantMergeForOutportEEXV_Pres);

    /* Outport: '<Root>/VeVLDR_b_EEXV_PressSens_FltDtct' incorporates:
     *  Gain: '<S1604>/Gain'
     *  SignalConversion generated from: '<S1>/VeVLDR_b_EEXV_PressSens_FltDtct'
     */
    (void)Rte_Write_VeVLDR_b_EEXV_PressSens_FltDtct_Value
        (VLDR_ac_B.VariantMergeForOutportEEXV_Pr_k);

    /* Outport: '<Root>/VeVLDR_b_EEXV_PressShrtHigh' incorporates:
     *  Gain: '<S1605>/Gain'
     *  SignalConversion generated from: '<S1>/VeVLDR_b_EEXV_PressShrtHigh'
     */
    (void)Rte_Write_VeVLDR_b_EEXV_PressShrtHigh_Value
        (VLDR_ac_B.VariantMergeForOutportEEXV_Pr_a);

    /* Outport: '<Root>/VeVLDR_b_EEXV_TempElctrFlt_FltDtct' incorporates:
     *  Gain: '<S1587>/Gain'
     *  SignalConversion generated from: '<S1>/VeVLDR_b_EEXV_TempElctrFlt_FltDtct'
     */
    (void)Rte_Write_VeVLDR_b_EEXV_TempElctrFlt_FltDtct_Value
        (VLDR_ac_B.VariantMergeForOutportEEXV_Temp);

    /* Outport: '<Root>/VeVLDR_b_EXV_PerfDiag_FltDtct' incorporates:
     *  Gain: '<S1623>/Gain'
     *  SignalConversion generated from: '<S1>/VeVLDR_b_EXV_PerfDiag_FltDtct'
     */
    (void)Rte_Write_VeVLDR_b_EXV_PerfDiag_FltDtct_Value
        (VLDR_ac_B.VariantMergeForOutportEXV_PerfD);

    /* Outport: '<Root>/VeVLDR_b_EXV_PressElctrFlt_FltDtct' incorporates:
     *  Gain: '<S1621>/Gain'
     *  SignalConversion generated from: '<S1>/VeVLDR_b_EXV_PressElctrFlt_FltDtct'
     */
    (void)Rte_Write_VeVLDR_b_EXV_PressElctrFlt_FltDtct_Value
        (VLDR_ac_B.VariantMergeForOutportEXV_Press);

    /* Outport: '<Root>/VeVLDR_b_EXV_PressSens_FltDtct' incorporates:
     *  Gain: '<S1624>/Gain'
     *  SignalConversion generated from: '<S1>/VeVLDR_b_EXV_PressSens_FltDtct'
     */
    (void)Rte_Write_VeVLDR_b_EXV_PressSens_FltDtct_Value
        (VLDR_ac_B.VariantMergeForOutportEXV_Pre_k);

    /* Outport: '<Root>/VeVLDR_b_EXV_PressShrtHigh' incorporates:
     *  Gain: '<S1602>/Gain'
     *  SignalConversion generated from: '<S1>/VeVLDR_b_EXV_PressShrtHigh'
     */
    (void)Rte_Write_VeVLDR_b_EXV_PressShrtHigh_Value
        (VLDR_ac_B.VariantMergeForOutportEXV_Pre_b);

    /* Outport: '<Root>/VeVLDR_b_EXV_TempElctrFlt_FltDtct' incorporates:
     *  Gain: '<S1622>/Gain'
     *  SignalConversion generated from: '<S1>/VeVLDR_b_EXV_TempElctrFlt_FltDtct'
     */
    (void)Rte_Write_VeVLDR_b_EXV_TempElctrFlt_FltDtct_Value
        (VLDR_ac_B.VariantMergeForOutportEXV_TempE);

    /* Outport: '<Root>/VeVLDR_b_EXV_TempSens_FltDtct' incorporates:
     *  Gain: '<S1625>/Gain'
     *  SignalConversion generated from: '<S1>/VeVLDR_b_EXV_TempSens_FltDtct'
     */
    (void)Rte_Write_VeVLDR_b_EXV_TempSens_FltDtct_Value
        (VLDR_ac_B.VariantMergeForOutportEXV_TempS);

    /* Switch: '<S1627>/Switch' incorporates:
     *  Constant: '<S1633>/KeVLDR_b_HTCV_Leak_Enable_SD'
     */
    if (KeVLDR_b_HTCV_Leak_Enable_SD)
    {
        /* Outport: '<Root>/VeVLDR_b_HCTV_Leak_FltDtct' incorporates:
         *  Constant: '<S1632>/KeVLDR_b_HTCV_Leak_Enable_D'
         *  SignalConversion generated from: '<S1>/VeVLDR_b_HCTV_Leak_FltDtct'
         */
        (void)Rte_Write_VeVLDR_b_HCTV_Leak_FltDtct_Value
            (KeVLDR_b_HTCV_Leak_Enable_D);
    }
    else
    {
        /* Outport: '<Root>/VeVLDR_b_HCTV_Leak_FltDtct' incorporates:
         *  SignalConversion generated from: '<S1>/VeVLDR_b_HCTV_Leak_FltDtct'
         */
        (void)Rte_Write_VeVLDR_b_HCTV_Leak_FltDtct_Value
            (VeVLDR_b_HCTV_Leak_FltDtct_B4D);
    }

    /* End of Switch: '<S1627>/Switch' */

    /* Switch: '<S1628>/Switch' incorporates:
     *  Constant: '<S1635>/KeVLDR_b_HTCV_LkEnbl_SD'
     */
    if (KeVLDR_b_HTCV_LkEnbl_SD)
    {
        /* Outport: '<Root>/VeVLDR_b_HTCV_Leak_DiagEnbl' incorporates:
         *  Constant: '<S1634>/KeVLDR_b_HTCV_LkEnbl_D'
         *  SignalConversion generated from: '<S1>/VeVLDR_b_HTCV_Leak_DiagEnbl'
         */
        (void)Rte_Write_VeVLDR_b_HTCV_Leak_DiagEnbl_Value(KeVLDR_b_HTCV_LkEnbl_D);
    }
    else
    {
        /* Outport: '<Root>/VeVLDR_b_HTCV_Leak_DiagEnbl' incorporates:
         *  SignalConversion generated from: '<S1>/VeVLDR_b_HTCV_Leak_DiagEnbl'
         */
        (void)Rte_Write_VeVLDR_b_HTCV_Leak_DiagEnbl_Value
            (VeVLDR_b_HCTV_Leak_DiagEnbl);
    }

    /* End of Switch: '<S1628>/Switch' */

    /* Switch: '<S1626>/Switch' incorporates:
     *  Constant: '<S1631>/KeVLDR_b_HTCV_Stck_FltDtct_SD'
     */
    if (KeVLDR_b_HTCV_Stck_FltDtct_SD)
    {
        /* Outport: '<Root>/VeVLDR_b_HTCV_Stck_FltDtct' incorporates:
         *  Constant: '<S1630>/KeVLDR_b_HTCV_Stck_FltDtct_D'
         *  SignalConversion generated from: '<S1>/VeVLDR_b_HTCV_Stck_FltDtct'
         */
        (void)Rte_Write_VeVLDR_b_HTCV_Stck_FltDtct_Value
            (KeVLDR_b_HTCV_Stck_FltDtct_D);
    }
    else
    {
        /* Outport: '<Root>/VeVLDR_b_HTCV_Stck_FltDtct' incorporates:
         *  SignalConversion generated from: '<S1>/VeVLDR_b_HTCV_Stck_FltDtct'
         */
        (void)Rte_Write_VeVLDR_b_HTCV_Stck_FltDtct_Value
            (VLDR_ac_B.VariantMergeForOutportHTCV_Stck);
    }

    /* End of Switch: '<S1626>/Switch' */

    /* Outport: '<Root>/VeVLDR_b_HTSoV_StkCls_FltDtct' incorporates:
     *  Gain: '<S1607>/Gain'
     *  SignalConversion generated from: '<S1>/VeVLDR_b_HTSoV_StkCls_FltDtct'
     */
    (void)Rte_Write_VeVLDR_b_HTSoV_StkCls_FltDtct_Value
        (VLDR_ac_B.VariantMergeForOutportHTSoV_Stk);

    /* Outport: '<Root>/VeVLDR_b_HTSoV_StkCls_XYEnbl' incorporates:
     *  Gain: '<S1585>/Gain'
     *  SignalConversion generated from: '<S1>/VeVLDR_b_HTSoV_StkCls_XYEnbl'
     */
    (void)Rte_Write_VeVLDR_b_HTSoV_StkCls_XYEnbl_Value
        (VLDR_ac_B.VariantMergeForOutportHTSoV_S_d);

    /* Outport: '<Root>/VeVLDR_b_HTSoV_StkOpn_FltDtct' incorporates:
     *  Gain: '<S1618>/Gain'
     *  SignalConversion generated from: '<S1>/VeVLDR_b_HTSoV_StkOpn_FltDtct'
     */
    (void)Rte_Write_VeVLDR_b_HTSoV_StkOpn_FltDtct_Value
        (VLDR_ac_B.VariantMergeForOutportHTSoV_S_h);

    /* Outport: '<Root>/VeVLDR_b_HTSoV_StkOpn_XYEnbl' incorporates:
     *  Gain: '<S1596>/Gain'
     *  SignalConversion generated from: '<S1>/VeVLDR_b_HTSoV_StkOpn_XYEnbl'
     */
    (void)Rte_Write_VeVLDR_b_HTSoV_StkOpn_XYEnbl_Value
        (VLDR_ac_B.VariantMergeForOutportHTSoV_S_b);

    /* Outport: '<Root>/VeVLDR_b_IUMPR_EEXV_PerfDiag' incorporates:
     *  Gain: '<S1612>/Gain'
     *  SignalConversion generated from: '<S1>/VeVLDR_b_IUMPR_EEXV_PerfDiag'
     */
    (void)Rte_Write_VeVLDR_b_IUMPR_EEXV_PerfDiag_Value
        (VLDR_ac_B.VariantMerge_For_Variant_Source[0]);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Diagnostic'
     */
    /* Outport: '<Root>/VeVLDR_b_IUMPR_EEXV_PressSensRat' incorporates:
     *  SignalConversion generated from: '<S1>/VeVLDR_b_IUMPR_EEXV_PressSensRat'
     *  SignalConversion generated from: '<S4>/IUMPR_EEXV_PressSensRat'
     */
    (void)Rte_Write_VeVLDR_b_IUMPR_EEXV_PressSensRat_Value
        (VLDR_ac_B.VariantMerge_For_Variant_Source[1]);

    /* Outport: '<Root>/VeVLDR_b_IUMPR_EEXV_perf_MinCmdThrshld_Met' incorporates:
     *  SignalConversion generated from: '<S1>/VeVLDR_b_IUMPR_EEXV_perf_MinCmdThrshld_Met'
     *  SignalConversion generated from: '<S4>/IUMPR_EEXV_perf_MinCmdThrshld_Met'
     */
    (void)Rte_Write_VeVLDR_b_IUMPR_EEXV_perf_MinCmdThrshld_Met_Value
        (VLDR_ac_B.VariantMerge_For_Variant_Source[2]);

    /* Outport: '<Root>/VeVLDR_b_IUMPR_EEXV_presSens_MinCmdThrshld_Met' incorporates:
     *  SignalConversion generated from: '<S1>/VeVLDR_b_IUMPR_EEXV_presSens_MinCmdThrshld_Met'
     *  SignalConversion generated from: '<S4>/IUMPR_EEXV_presSens_MinCmdThrshld_Met'
     */
    (void)Rte_Write_VeVLDR_b_IUMPR_EEXV_presSens_MinCmdThrshld_Met_Value
        (VLDR_ac_B.VariantMerge_For_Variant_Source[3]);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Output'
     */
    /* Outport: '<Root>/VeVLDR_b_IUMPR_EXV_PerfDiag' incorporates:
     *  Gain: '<S1588>/Gain'
     *  SignalConversion generated from: '<S1>/VeVLDR_b_IUMPR_EXV_PerfDiag'
     */
    (void)Rte_Write_VeVLDR_b_IUMPR_EXV_PerfDiag_Value
        (VLDR_ac_B.VariantMerge_For_Variant_Sour_h[0]);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Diagnostic'
     */
    /* Outport: '<Root>/VeVLDR_b_IUMPR_EXV_PressSensRat' incorporates:
     *  SignalConversion generated from: '<S1>/VeVLDR_b_IUMPR_EXV_PressSensRat'
     *  SignalConversion generated from: '<S4>/IUMPR_EXV_PressSensRat'
     */
    (void)Rte_Write_VeVLDR_b_IUMPR_EXV_PressSensRat_Value
        (VLDR_ac_B.VariantMerge_For_Variant_Sour_h[2]);

    /* Outport: '<Root>/VeVLDR_b_IUMPR_EXV_TempSensRat' incorporates:
     *  SignalConversion generated from: '<S1>/VeVLDR_b_IUMPR_EXV_TempSensRat'
     *  SignalConversion generated from: '<S4>/IUMPR_EXV_TempSensRat'
     */
    (void)Rte_Write_VeVLDR_b_IUMPR_EXV_TempSensRat_Value
        (VLDR_ac_B.VariantMerge_For_Variant_Sour_h[1]);

    /* Outport: '<Root>/VeVLDR_b_IUMPR_EXV_perf_MinCmdThrshld_Met' incorporates:
     *  SignalConversion generated from: '<S1>/VeVLDR_b_IUMPR_EXV_perf_MinCmdThrshld_Met'
     *  SignalConversion generated from: '<S4>/IUMPR_EXV_perf_MinCmdThrshld_Met'
     */
    (void)Rte_Write_VeVLDR_b_IUMPR_EXV_perf_MinCmdThrshld_Met_Value
        (VLDR_ac_B.VariantMerge_For_Variant_Sour_h[3]);

    /* Outport: '<Root>/VeVLDR_b_IUMPR_EXV_presSens_MinCmdThrshld_Met' incorporates:
     *  SignalConversion generated from: '<S1>/VeVLDR_b_IUMPR_EXV_presSens_MinCmdThrshld_Met'
     *  SignalConversion generated from: '<S4>/IUMPR_EXV_presSens_MinCmdThrshld_Met'
     */
    (void)Rte_Write_VeVLDR_b_IUMPR_EXV_presSens_MinCmdThrshld_Met_Value
        (VLDR_ac_B.VariantMerge_For_Variant_Sour_h[4]);

    /* Outport: '<Root>/VeVLDR_b_IUMPR_HTCV_Leak' incorporates:
     *  SignalConversion generated from: '<S1>/VeVLDR_b_IUMPR_HTCV_Leak'
     *  SignalConversion generated from: '<S4>/IUMPR_HTCV_Leak'
     */
    (void)Rte_Write_VeVLDR_b_IUMPR_HTCV_Leak_Value
        (VLDR_ac_B.VariantMerge_For_Variant_Sou_hy[1]);

    /* Outport: '<Root>/VeVLDR_b_IUMPR_HTCV_MinCmdThrshld_Met' incorporates:
     *  SignalConversion generated from: '<S1>/VeVLDR_b_IUMPR_HTCV_MinCmdThrshld_Met'
     *  SignalConversion generated from: '<S4>/IUMPR_HTCV_MinCmdThrshld_Met'
     */
    (void)Rte_Write_VeVLDR_b_IUMPR_HTCV_MinCmdThrshld_Met_Value
        (VLDR_ac_B.VariantMerge_For_Variant_Sou_hy[2]);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Output'
     */
    /* Outport: '<Root>/VeVLDR_b_IUMPR_HTCV_Perf' incorporates:
     *  Gain: '<S1597>/Gain'
     *  SignalConversion generated from: '<S1>/VeVLDR_b_IUMPR_HTCV_Perf'
     */
    (void)Rte_Write_VeVLDR_b_IUMPR_HTCV_Perf_Value
        (VLDR_ac_B.VariantMerge_For_Variant_Sou_hy[0]);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Diagnostic'
     */
    /* Outport: '<Root>/VeVLDR_b_IUMPR_HTSOV_MinCmdThrshld_Met' incorporates:
     *  SignalConversion generated from: '<S1>/VeVLDR_b_IUMPR_HTSOV_MinCmdThrshld_Met'
     *  SignalConversion generated from: '<S4>/IUMPR_HTSOV_MinCmdThrshld_Met'
     */
    (void)Rte_Write_VeVLDR_b_IUMPR_HTSOV_MinCmdThrshld_Met_Value
        (VLDR_ac_B.VariantMerge_For_Variant_So_hyk[2]);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Output'
     */
    /* Switch: '<S1636>/Switch' incorporates:
     *  Constant: '<S1639>/KeVLDR_b_IUMPR_HTSOV_StkClsd_SD'
     */
    if (KeVLDR_b_IUMPR_HTSOV_StkClsd_SD)
    {
        /* Outport: '<Root>/VeVLDR_b_IUMPR_HTSOV_StkClsd' incorporates:
         *  Constant: '<S1638>/KeVLDR_b_IUMPR_HTSOV_StkClsd_D'
         *  SignalConversion generated from: '<S1>/VeVLDR_b_IUMPR_HTSOV_StkClsd'
         */
        (void)Rte_Write_VeVLDR_b_IUMPR_HTSOV_StkClsd_Value
            (KeVLDR_b_IUMPR_HTSOV_StkClsd_D);
    }
    else
    {
        /* Outport: '<Root>/VeVLDR_b_IUMPR_HTSOV_StkClsd' incorporates:
         *  SignalConversion generated from: '<S1>/VeVLDR_b_IUMPR_HTSOV_StkClsd'
         */
        (void)Rte_Write_VeVLDR_b_IUMPR_HTSOV_StkClsd_Value
            (VLDR_ac_B.VariantMerge_For_Variant_So_hyk[0]);
    }

    /* End of Switch: '<S1636>/Switch' */

    /* Switch: '<S1637>/Switch' incorporates:
     *  Constant: '<S1641>/KeVLDR_b_IUMPR_HTSOV_StkOpn_SD'
     */
    if (KeVLDR_b_IUMPR_HTSOV_StkOpn_SD)
    {
        /* Outport: '<Root>/VeVLDR_b_IUMPR_HTSOV_StkOpn' incorporates:
         *  Constant: '<S1640>/KeVLDR_b_IUMPR_HTSOV_StkOpn_D'
         *  SignalConversion generated from: '<S1>/VeVLDR_b_IUMPR_HTSOV_StkOpn'
         */
        (void)Rte_Write_VeVLDR_b_IUMPR_HTSOV_StkOpn_Value
            (KeVLDR_b_IUMPR_HTSOV_StkOpn_D);
    }
    else
    {
        /* Outputs for Function Call SubSystem: '<S1>/Diagnostic' */
        /* Outport: '<Root>/VeVLDR_b_IUMPR_HTSOV_StkOpn' incorporates:
         *  SignalConversion generated from: '<S1>/VeVLDR_b_IUMPR_HTSOV_StkOpn'
         *  SignalConversion generated from: '<S4>/IUMPR_StkOpn'
         */
        (void)Rte_Write_VeVLDR_b_IUMPR_HTSOV_StkOpn_Value
            (VLDR_ac_B.VariantMerge_For_Variant_So_hyk[1]);

        /* End of Outputs for SubSystem: '<S1>/Diagnostic' */
    }

    /* End of Switch: '<S1637>/Switch' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Diagnostic'
     */
    /* Outport: '<Root>/VeVLDR_b_IUMPR_LTSOV_StkOff_MinCmdThrshld_Met' incorporates:
     *  SignalConversion generated from: '<S1>/VeVLDR_b_IUMPR_LTSOV_StkOff_MinCmdThrshld_Met'
     *  SignalConversion generated from: '<S4>/IUMPR_LTSOV_StkOff_MinCmdThrshld_Met'
     */
    (void)Rte_Write_VeVLDR_b_IUMPR_LTSOV_StkOff_MinCmdThrshld_Met_Value
        (VLDR_ac_B.VariantMerge_For_Variant_S_hykj[2]);

    /* Outport: '<Root>/VeVLDR_b_IUMPR_LTSOV_StkOn_MinCmdThrshld_Met' incorporates:
     *  SignalConversion generated from: '<S1>/VeVLDR_b_IUMPR_LTSOV_StkOn_MinCmdThrshld_Met'
     *  SignalConversion generated from: '<S4>/IUMPR_LTSOV_StkOn_MinCmdThrshld_Met'
     */
    (void)Rte_Write_VeVLDR_b_IUMPR_LTSOV_StkOn_MinCmdThrshld_Met_Value
        (VLDR_ac_B.VariantMerge_For_Variant_S_hykj[3]);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Output'
     */
    /* Outport: '<Root>/VeVLDR_b_IUMPR_LTSOV_StuckOff' incorporates:
     *  Gain: '<S1591>/Gain'
     *  SignalConversion generated from: '<S1>/VeVLDR_b_IUMPR_LTSOV_StuckOff'
     */
    (void)Rte_Write_VeVLDR_b_IUMPR_LTSOV_StuckOff_Value
        (VLDR_ac_B.VariantMerge_For_Variant_S_hykj[0]);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Diagnostic'
     */
    /* Outport: '<Root>/VeVLDR_b_IUMPR_LTSOV_StuckOn' incorporates:
     *  SignalConversion generated from: '<S1>/VeVLDR_b_IUMPR_LTSOV_StuckOn'
     *  SignalConversion generated from: '<S4>/IUMPR_LTSOV_StuckOn'
     */
    (void)Rte_Write_VeVLDR_b_IUMPR_LTSOV_StuckOn_Value
        (VLDR_ac_B.VariantMerge_For_Variant_S_hykj[1]);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Output'
     */
    /* Outport: '<Root>/VeVLDR_b_IUMPR_OEXV_PerfDiag' incorporates:
     *  Gain: '<S1616>/Gain'
     *  SignalConversion generated from: '<S1>/VeVLDR_b_IUMPR_OEXV_PerfDiag'
     */
    (void)Rte_Write_VeVLDR_b_IUMPR_OEXV_PerfDiag_Value
        (VLDR_ac_B.VariantMerge_For_Variant__hykjh[0]);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Diagnostic'
     */
    /* Outport: '<Root>/VeVLDR_b_IUMPR_OEXV_PressSensRat' incorporates:
     *  SignalConversion generated from: '<S1>/VeVLDR_b_IUMPR_OEXV_PressSensRat'
     *  SignalConversion generated from: '<S4>/IUMPR_OEXV_PressSensRat'
     */
    (void)Rte_Write_VeVLDR_b_IUMPR_OEXV_PressSensRat_Value
        (VLDR_ac_B.VariantMerge_For_Variant__hykjh[1]);

    /* Outport: '<Root>/VeVLDR_b_IUMPR_OEXV_perf_MinCmdThrshld_Met' incorporates:
     *  SignalConversion generated from: '<S1>/VeVLDR_b_IUMPR_OEXV_perf_MinCmdThrshld_Met'
     *  SignalConversion generated from: '<S4>/IUMPR_OEXV_perf_MinCmdThrshld_Met'
     */
    (void)Rte_Write_VeVLDR_b_IUMPR_OEXV_perf_MinCmdThrshld_Met_Value
        (VLDR_ac_B.VariantMerge_For_Variant__hykjh[2]);

    /* Outport: '<Root>/VeVLDR_b_IUMPR_OEXV_presSens_MinCmdThrshld_Met' incorporates:
     *  SignalConversion generated from: '<S1>/VeVLDR_b_IUMPR_OEXV_presSens_MinCmdThrshld_Met'
     *  SignalConversion generated from: '<S4>/IUMPR_OEXV_presSens_MinCmdThrshld_Met'
     */
    (void)Rte_Write_VeVLDR_b_IUMPR_OEXV_presSens_MinCmdThrshld_Met_Value
        (VLDR_ac_B.VariantMerge_For_Variant__hykjh[3]);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Output'
     */
    /* Outport: '<Root>/VeVLDR_b_OEXV_PerfDiag_FltDtct' incorporates:
     *  Gain: '<S1609>/Gain'
     *  SignalConversion generated from: '<S1>/VeVLDR_b_OEXV_PerfDiag_FltDtct'
     */
    (void)Rte_Write_VeVLDR_b_OEXV_PerfDiag_FltDtct_Value
        (VLDR_ac_B.VariantMergeForOutportOEXV_Perf);

    /* Outport: '<Root>/VeVLDR_b_OEXV_PressElctrFlt_FltDtct' incorporates:
     *  Gain: '<S1606>/Gain'
     *  SignalConversion generated from: '<S1>/VeVLDR_b_OEXV_PressElctrFlt_FltDtct'
     */
    (void)Rte_Write_VeVLDR_b_OEXV_PressElctrFlt_FltDtct_Value
        (VLDR_ac_B.VariantMergeForOutportOEXV_Pres);

    /* Outport: '<Root>/VeVLDR_b_OEXV_PressSens_FltDtct' incorporates:
     *  Gain: '<S1610>/Gain'
     *  SignalConversion generated from: '<S1>/VeVLDR_b_OEXV_PressSens_FltDtct'
     */
    (void)Rte_Write_VeVLDR_b_OEXV_PressSens_FltDtct_Value
        (VLDR_ac_B.VariantMergeForOutportOEXV_Pr_j);

    /* Outport: '<Root>/VeVLDR_b_OEXV_PressShrtHigh' incorporates:
     *  Gain: '<S1611>/Gain'
     *  SignalConversion generated from: '<S1>/VeVLDR_b_OEXV_PressShrtHigh'
     */
    (void)Rte_Write_VeVLDR_b_OEXV_PressShrtHigh_Value
        (VLDR_ac_B.VariantMergeForOutportOEXV_Pr_b);

    /* Outport: '<Root>/VeVLDR_b_OEXV_TempElctrFlt_FltDtct' incorporates:
     *  Gain: '<S1608>/Gain'
     *  SignalConversion generated from: '<S1>/VeVLDR_b_OEXV_TempElctrFlt_FltDtct'
     */
    (void)Rte_Write_VeVLDR_b_OEXV_TempElctrFlt_FltDtct_Value
        (VLDR_ac_B.VariantMergeForOutportOEXV_Temp);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeVLDR_e_FaultSts_AC_RefrigExpVlvActCtrCktPerf' incorporates:
     *  SignalConversion generated from: '<S1>/VeVLDR_e_FaultSts_AC_RefrigExpVlvActCtrCktPerf'
     *  VariantMerge generated from: '<S392>/VeVLDR_e_FaultSts_AC_RefrigExpVlvActCtrCktPerf'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_AC_RefrigExpVlvActCtrCktPerf_Value
        (VLDR_ac_B.VariantMergeForOutportVeVLDR_h4);

    /* Outport: '<Root>/VeVLDR_e_FaultSts_AC_RefrigExpVlvActD_CntrlCktPerf' incorporates:
     *  SignalConversion generated from: '<S1>/VeVLDR_e_FaultSts_AC_RefrigExpVlvActD_CntrlCktPerf'
     *  VariantMerge generated from: '<S1318>/VeVLDR_e_FaultSts_AC_RefrigExpVlvActD_CntrlCktPerf'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_AC_RefrigExpVlvActD_CntrlCktPerf_Value
        (VLDR_ac_B.VariantMergeForOutportVeVLDR_e_);

    /* Outport: '<Root>/VeVLDR_e_FaultSts_AC_RefrigExpVlvAct_C_CntrlCktPerf' incorporates:
     *  SignalConversion generated from: '<S1>/VeVLDR_e_FaultSts_AC_RefrigExpVlvAct_C_CntrlCktPerf'
     *  VariantMerge generated from: '<S161>/VeVLDR_e_FaultSts_AC_RefrigExpVlvAct_C_CntrlCktPerf'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_AC_RefrigExpVlvAct_C_CntrlCktPerf_Value
        (VLDR_ac_B.VariantMergeForOutportVeVLDR_lh);

    /* Outport: '<Root>/VeVLDR_e_FaultSts_AC_RefrigPresSnsrCCkt' incorporates:
     *  SignalConversion generated from: '<S1>/VeVLDR_e_FaultSts_AC_RefrigPresSnsrCCkt'
     *  VariantMerge generated from: '<S161>/VeVLDR_e_FaultSts_AC_RefrigPresSnsrCCkt'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_AC_RefrigPresSnsrCCkt_Value
        (VLDR_ac_B.VariantMergeForOutportVeVLDR__j);

    /* Outport: '<Root>/VeVLDR_e_FaultSts_AC_RefrigPresSnsrCCktPerf' incorporates:
     *  SignalConversion generated from: '<S1>/VeVLDR_e_FaultSts_AC_RefrigPresSnsrCCktPerf'
     *  VariantMerge generated from: '<S161>/VeVLDR_e_FaultSts_AC_RefrigPresSnsrCCktPerf'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_AC_RefrigPresSnsrCCktPerf_Value
        (VLDR_ac_B.VariantMergeForOutportVeVLDR_gf);

    /* Outport: '<Root>/VeVLDR_e_FaultSts_AC_RefrigPresSnsrDCkt' incorporates:
     *  SignalConversion generated from: '<S1>/VeVLDR_e_FaultSts_AC_RefrigPresSnsrDCkt'
     *  VariantMerge generated from: '<S1318>/VeVLDR_e_FaultSts_AC_RefrigPresSnsrDCkt'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_AC_RefrigPresSnsrDCkt_Value
        (VLDR_ac_B.VariantMergeForOutportVeVLDR__a);

    /* Outport: '<Root>/VeVLDR_e_FaultSts_AC_RefrigPresSnsrDCktPerf' incorporates:
     *  SignalConversion generated from: '<S1>/VeVLDR_e_FaultSts_AC_RefrigPresSnsrDCktPerf'
     *  VariantMerge generated from: '<S1318>/VeVLDR_e_FaultSts_AC_RefrigPresSnsrDCktPerf'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_AC_RefrigPresSnsrDCktPerf_Value
        (VLDR_ac_B.VariantMergeForOutportVeVLDR__e);

    /* Outport: '<Root>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrACkt' incorporates:
     *  SignalConversion generated from: '<S1>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrACkt'
     *  VariantMerge generated from: '<S392>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrACkt'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_AC_RefrigTempSnsrACkt_Value
        (VLDR_ac_B.VariantMergeForOutportVeVLDR_ho);

    /* Outport: '<Root>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrAPerf' incorporates:
     *  SignalConversion generated from: '<S1>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrAPerf'
     *  VariantMerge generated from: '<S392>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrAPerf'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_AC_RefrigTempSnsrAPerf_Value
        (VLDR_ac_B.VariantMergeForOutportVeVLDR__n);

    /* Outport: '<Root>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrBCkt' incorporates:
     *  SignalConversion generated from: '<S1>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrBCkt'
     *  VariantMerge generated from: '<S392>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrBCkt'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_AC_RefrigTempSnsrBCkt_Value
        (VLDR_ac_B.VariantMergeForOutportVeVLDR__l);

    /* Outport: '<Root>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrBPerf' incorporates:
     *  SignalConversion generated from: '<S1>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrBPerf'
     *  VariantMerge generated from: '<S392>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrBPerf'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_AC_RefrigTempSnsrBPerf_Value
        (VLDR_ac_B.VariantMergeForOutportVeVLDR__g);

    /* Outport: '<Root>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrCCkt' incorporates:
     *  SignalConversion generated from: '<S1>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrCCkt'
     *  VariantMerge generated from: '<S161>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrCCkt'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_AC_RefrigTempSnsrCCkt_Value
        (VLDR_ac_B.VariantMergeForOutportVeVLDR_i2);

    /* Outport: '<Root>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrDCkt' incorporates:
     *  SignalConversion generated from: '<S1>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrDCkt'
     *  VariantMerge generated from: '<S1318>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrDCkt'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_AC_RefrigTempSnsrDCkt_Value
        (VLDR_ac_B.VariantMergeForOutportVeVLDR__b);

    /* Outport: '<Root>/VeVLDR_e_FaultSts_CoolantVlvA_Perf' incorporates:
     *  SignalConversion generated from: '<S1>/VeVLDR_e_FaultSts_CoolantVlvA_Perf'
     *  VariantMerge generated from: '<S699>/VeVLDR_e_FaultSts_CoolantVlvA_Perf'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_CoolantVlvA_Perf_Value
        (VLDR_ac_B.VariantMergeForOutportVeVLDR__i);

    /* Outport: '<Root>/VeVLDR_e_FaultSts_CoolantVlvA_StkOpn' incorporates:
     *  SignalConversion generated from: '<S1>/VeVLDR_e_FaultSts_CoolantVlvA_StkOpn'
     *  VariantMerge generated from: '<S699>/VeVLDR_e_FaultSts_CoolantVlvA_StkOpn'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_CoolantVlvA_StkOpn_Value
        (VLDR_ac_B.VariantMergeForOutportVeVLDR__c);

    /* Outport: '<Root>/VeVLDR_e_FaultSts_CoolantVlvB_StkClsd' incorporates:
     *  SignalConversion generated from: '<S1>/VeVLDR_e_FaultSts_CoolantVlvB_StkClsd'
     *  VariantMerge generated from: '<S836>/VeVLDR_e_FaultSts_CoolantVlvB_StkClsd'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_CoolantVlvB_StkClsd_Value
        (VLDR_ac_B.VariantMergeForOutportVeVLDR__o);

    /* Outport: '<Root>/VeVLDR_e_FaultSts_CoolantVlvB_StkOpn' incorporates:
     *  SignalConversion generated from: '<S1>/VeVLDR_e_FaultSts_CoolantVlvB_StkOpn'
     *  VariantMerge generated from: '<S836>/VeVLDR_e_FaultSts_CoolantVlvB_StkOpn'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_CoolantVlvB_StkOpn_Value
        (VLDR_ac_B.VariantMergeForOutportVeVLDR__h);

    /* SignalConversion generated from: '<S1>/VeVLDR_e_FaultSts_EngCoolbypsVlvDPerf' */
#if Rte_SysCon_Variant_VLDR_12

    /* Outport: '<Root>/VeVLDR_e_FaultSts_EngCoolbypsVlvDPerf' incorporates:
     *  Merge: '<S28>/Merge'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_EngCoolbypsVlvDPerf_Value
        (VLDR_ac_B.Merge_j);

#endif

    /* End of SignalConversion generated from: '<S1>/VeVLDR_e_FaultSts_EngCoolbypsVlvDPerf' */

    /* SignalConversion generated from: '<S1>/VeVLDR_e_FaultSts_HB_PSC_CtrlValACktPerf' */
#if Rte_SysCon_Variant_VLDR_8

    /* Outport: '<Root>/VeVLDR_e_FaultSts_HB_PSC_CtrlValACktPerf' incorporates:
     *  Merge: '<S100>/Merge'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_HB_PSC_CtrlValACktPerf_Value
        (VLDR_ac_B.Merge_b);

#endif

    /* End of SignalConversion generated from: '<S1>/VeVLDR_e_FaultSts_HB_PSC_CtrlValACktPerf' */

    /* SignalConversion generated from: '<S1>/VeVLDR_e_FaultSts_HB_PSC_CtrlValBCktPerf' */
#if Rte_SysCon_Variant_VLDR_10

    /* Outport: '<Root>/VeVLDR_e_FaultSts_HB_PSC_CtrlValBCktPerf' incorporates:
     *  Merge: '<S1202>/Merge'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_HB_PSC_CtrlValBCktPerf_Value
        (VLDR_ac_B.Merge_d);

#endif

    /* End of SignalConversion generated from: '<S1>/VeVLDR_e_FaultSts_HB_PSC_CtrlValBCktPerf' */

    /* SignalConversion generated from: '<S1>/VeVLDR_e_FaultSts_HB_PSC_CtrlValCCktPerf' */
#if Rte_SysCon_Variant_VLDR_11

    /* Outport: '<Root>/VeVLDR_e_FaultSts_HB_PSC_CtrlValCCktPerf' incorporates:
     *  Merge: '<S821>/Merge'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_HB_PSC_CtrlValCCktPerf_Value
        (VLDR_ac_B.Merge_o);

#endif

    /* End of SignalConversion generated from: '<S1>/VeVLDR_e_FaultSts_HB_PSC_CtrlValCCktPerf' */

    /* SignalConversion generated from: '<S1>/VeVLDR_e_FaultSts_HybEvBatPacCoolCtrlVlvBPerfStkOff' incorporates:
     *  SignalConversion generated from: '<S1>/VeVLDR_e_FaultSts_HybEvBatPacCoolCtrlVlvBStkOn'
     */
#if Rte_SysCon_Variant_VLDR_5

    /* Outport: '<Root>/VeVLDR_e_FaultSts_HybEvBatPacCoolCtrlVlvBPerfStkOff' incorporates:
     *  Merge: '<S1254>/Merge'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_HybEvBatPacCoolCtrlVlvBPerfStkOff_Value
        (VLDR_ac_B.Merge);

    /* Outport: '<Root>/VeVLDR_e_FaultSts_HybEvBatPacCoolCtrlVlvBStkOn' incorporates:
     *  Merge: '<S1301>/Merge'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_HybEvBatPacCoolCtrlVlvBStkOn_Value
        (VLDR_ac_B.Merge_n);

#endif

    /* End of SignalConversion generated from: '<S1>/VeVLDR_e_FaultSts_HybEvBatPacCoolCtrlVlvBPerfStkOff' */

    /* SignalConversion generated from: '<S1>/VeVLDR_e_FaultSts_HybPropSysCoolCntrlVal_E_Perf' */
#if Rte_SysCon_Variant_VLDR_15

    /* Outport: '<Root>/VeVLDR_e_FaultSts_HybPropSysCoolCntrlVal_E_Perf' incorporates:
     *  Merge: '<S65>/Merge'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_HybPropSysCoolCntrlVal_E_Perf_Value
        (VLDR_ac_B.Merge_a);

#endif

    /* End of SignalConversion generated from: '<S1>/VeVLDR_e_FaultSts_HybPropSysCoolCntrlVal_E_Perf' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
}

/* Output function */
FUNC(void, VLDR_CODE) VLDR_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/VLDR_PwrOff'
     */
    /* Outport: '<Root>/NeVLDR_Cnt_CPV_PerfDiag_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeVLDR_Cnt_CPV_PerfDiag_MFOP'
     */
    (void)Rte_Write_NeVLDR_Cnt_CPV_PerfDiag_MFOP_NeVLDR_Cnt_CPV_PerfDiag_MFOP
        (VLDR_ac_DW.NeVLDR_Cnt_CPV_PerfDiag_MFOP);

    /* Outport: '<Root>/NeVLDR_Cnt_CabVlvOpeng_Err_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeVLDR_Cnt_CabVlvOpeng_Err_MFOP'
     */
    (void)
        Rte_Write_NeVLDR_Cnt_CabVlvOpeng_Err_MFOP_NeVLDR_Cnt_CabVlvOpeng_Err_MFOP
        (VLDR_ac_DW.NeVLDR_Cnt_CabVlvOpeng_Err_MFOP);

    /* Outport: '<Root>/NeVLDR_Cnt_EEXV_PerfDiag_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeVLDR_Cnt_EEXV_PerfDiag_MFOP'
     */
    (void)Rte_Write_NeVLDR_Cnt_EEXV_PerfDiag_MFOP_NeVLDR_Cnt_EEXV_PerfDiag_MFOP
        (VLDR_ac_DW.NeVLDR_Cnt_EEXV_PerfDiag_MFOP);

    /* Outport: '<Root>/NeVLDR_Cnt_EEXV_PressElctrFlt_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeVLDR_Cnt_EEXV_PressElctrFlt_MFOP'
     */
    (void)
        Rte_Write_NeVLDR_Cnt_EEXV_PressElctrFlt_MFOP_NeVLDR_Cnt_EEXV_PressElctrFlt_MFOP
        (VLDR_ac_DW.NeVLDR_Cnt_EEXV_PressElctrFlt_M);

    /* Outport: '<Root>/NeVLDR_Cnt_EEXV_PressSens_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeVLDR_Cnt_EEXV_PressSens_MFOP'
     */
    (void)
        Rte_Write_NeVLDR_Cnt_EEXV_PressSens_MFOP_NeVLDR_Cnt_EEXV_PressSens_MFOP
        (VLDR_ac_DW.NeVLDR_Cnt_EEXV_PressSens_MFOP);

    /* Outport: '<Root>/NeVLDR_Cnt_EEXV_TempElctrFlt_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeVLDR_Cnt_EEXV_TempElctrFlt_MFOP'
     */
    (void)
        Rte_Write_NeVLDR_Cnt_EEXV_TempElctrFlt_MFOP_NeVLDR_Cnt_EEXV_TempElctrFlt_MFOP
        (VLDR_ac_DW.NeVLDR_Cnt_EEXV_TempElctrFlt_MF);

    /* Outport: '<Root>/NeVLDR_Cnt_EXV_PerfDiag_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeVLDR_Cnt_EXV_PerfDiag_MFOP'
     */
    (void)Rte_Write_NeVLDR_Cnt_EXV_PerfDiag_MFOP_NeVLDR_Cnt_EXV_PerfDiag_MFOP
        (VLDR_ac_DW.NeVLDR_Cnt_EXV_PerfDiag_MFOP);

    /* Outport: '<Root>/NeVLDR_Cnt_EXV_PressElctrFlt_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeVLDR_Cnt_EXV_PressElctrFlt_MFOP'
     */
    (void)
        Rte_Write_NeVLDR_Cnt_EXV_PressElctrFlt_MFOP_NeVLDR_Cnt_EXV_PressElctrFlt_MFOP
        (VLDR_ac_DW.NeVLDR_Cnt_EXV_PressElctrFlt_MF);

    /* Outport: '<Root>/NeVLDR_Cnt_EXV_PressSens_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeVLDR_Cnt_EXV_PressSens_MFOP'
     */
    (void)Rte_Write_NeVLDR_Cnt_EXV_PressSens_MFOP_NeVLDR_Cnt_EXV_PressSens_MFOP
        (VLDR_ac_DW.NeVLDR_Cnt_EXV_PressSens_MFOP);

    /* Outport: '<Root>/NeVLDR_Cnt_EXV_TempElctrFlt_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeVLDR_Cnt_EXV_TempElctrFlt_MFOP'
     */
    (void)
        Rte_Write_NeVLDR_Cnt_EXV_TempElctrFlt_MFOP_NeVLDR_Cnt_EXV_TempElctrFlt_MFOP
        (VLDR_ac_DW.NeVLDR_Cnt_EXV_TempElctrFlt_MFO);

    /* Outport: '<Root>/NeVLDR_Cnt_EXV_TempSens_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeVLDR_Cnt_EXV_TempSens_MFOP'
     */
    (void)Rte_Write_NeVLDR_Cnt_EXV_TempSens_MFOP_NeVLDR_Cnt_EXV_TempSens_MFOP
        (VLDR_ac_DW.NeVLDR_Cnt_EXV_TempSens_MFOP);

    /* Outport: '<Root>/NeVLDR_Cnt_HCTV_Leak_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeVLDR_Cnt_HCTV_Leak_MFOP'
     */
    (void)Rte_Write_NeVLDR_Cnt_HCTV_Leak_MFOP_NeVLDR_Cnt_HCTV_Leak_MFOP
        (VLDR_ac_DW.NeVLDR_Cnt_HCTV_Leak_MFOP);

    /* Outport: '<Root>/NeVLDR_Cnt_HTL_PerfDiag_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeVLDR_Cnt_HTL_PerfDiag_MFOP'
     */
    (void)Rte_Write_NeVLDR_Cnt_HTL_PerfDiag_MFOP_NeVLDR_Cnt_HTL_PerfDiag_MFOP
        (VLDR_ac_DW.NeVLDR_Cnt_HTL_PerfDiag_MFOP);

    /* Outport: '<Root>/NeVLDR_Cnt_HTSoV_StkCls_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeVLDR_Cnt_HTSoV_StkCls_MFOP'
     */
    (void)Rte_Write_NeVLDR_Cnt_HTSoV_StkCls_MFOP_NeVLDR_Cnt_HTSoV_StkCls_MFOP
        (VLDR_ac_DW.NeVLDR_Cnt_HTSoV_StkCls_MFOP);

    /* Outport: '<Root>/NeVLDR_Cnt_HTSoV_StkOpn_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeVLDR_Cnt_HTSoV_StkOpn_MFOP'
     */
    (void)Rte_Write_NeVLDR_Cnt_HTSoV_StkOpn_MFOP_NeVLDR_Cnt_HTSoV_StkOpn_MFOP
        (VLDR_ac_DW.NeVLDR_Cnt_HTSoV_StkOpn_MFOP);

    /* Outport: '<Root>/NeVLDR_Cnt_LTR_PerfDiag_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeVLDR_Cnt_LTR_PerfDiag_MFOP'
     */
    (void)Rte_Write_NeVLDR_Cnt_LTR_PerfDiag_MFOP_NeVLDR_Cnt_LTR_PerfDiag_MFOP
        (VLDR_ac_DW.NeVLDR_Cnt_LTR_PerfDiag_MFOP);

    /* Outport: '<Root>/NeVLDR_Cnt_LTSOV_StkOff_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeVLDR_Cnt_LTSOV_StkOff_MFOP'
     */
    (void)Rte_Write_NeVLDR_Cnt_LTSOV_StkOff_MFOP_NeVLDR_Cnt_LTSOV_StkOff_MFOP
        (VLDR_ac_DW.NeVLDR_Cnt_LTSOV_StkOff_MFOP);

    /* Outport: '<Root>/NeVLDR_Cnt_LTSOV_StkOn_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeVLDR_Cnt_LTSOV_StkOn_MFOP'
     */
    (void)Rte_Write_NeVLDR_Cnt_LTSOV_StkOn_MFOP_NeVLDR_Cnt_LTSOV_StkOn_MFOP
        (VLDR_ac_DW.NeVLDR_Cnt_LTSOV_StkOn_MFOP);

    /* Outport: '<Root>/NeVLDR_Cnt_OEXV_PerfDiag_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeVLDR_Cnt_OEXV_PerfDiag_MFOP'
     */
    (void)Rte_Write_NeVLDR_Cnt_OEXV_PerfDiag_MFOP_NeVLDR_Cnt_OEXV_PerfDiag_MFOP
        (VLDR_ac_DW.NeVLDR_Cnt_OEXV_PerfDiag_MFOP);

    /* Outport: '<Root>/NeVLDR_Cnt_OEXV_PressElctrFlt_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeVLDR_Cnt_OEXV_PressElctrFlt_MFOP'
     */
    (void)
        Rte_Write_NeVLDR_Cnt_OEXV_PressElctrFlt_MFOP_NeVLDR_Cnt_OEXV_PressElctrFlt_MFOP
        (VLDR_ac_DW.NeVLDR_Cnt_OEXV_PressElctrFlt_M);

    /* Outport: '<Root>/NeVLDR_Cnt_OEXV_PressSens_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeVLDR_Cnt_OEXV_PressSens_MFOP'
     */
    (void)
        Rte_Write_NeVLDR_Cnt_OEXV_PressSens_MFOP_NeVLDR_Cnt_OEXV_PressSens_MFOP
        (VLDR_ac_DW.NeVLDR_Cnt_OEXV_PressSens_MFOP);

    /* Outport: '<Root>/NeVLDR_Cnt_OEXV_TempElctrFlt_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeVLDR_Cnt_OEXV_TempElctrFlt_MFOP'
     */
    (void)
        Rte_Write_NeVLDR_Cnt_OEXV_TempElctrFlt_MFOP_NeVLDR_Cnt_OEXV_TempElctrFlt_MFOP
        (VLDR_ac_DW.NeVLDR_Cnt_OEXV_TempElctrFlt_MF);

    /* Outport: '<Root>/NeVLDR_Cnt_CPV2_PerfDiag_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeVLDR_Cnt_OEXV_TempElctrFlt_MFOP1'
     */
    (void)Rte_Write_NeVLDR_Cnt_CPV2_PerfDiag_MFOP_NeVLDR_Cnt_CPV2_PerfDiag_MFOP
        (VLDR_ac_DW.NeVLDR_Cnt_CPV2_PerfDiag_MFOP);

    /* Outport: '<Root>/NeVLDR_Cnt_BHV_PerfDiag_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeVLDR_Cnt_BHV_PerfDiag_MFOP'
     */
    (void)Rte_Write_NeVLDR_Cnt_BHV_PerfDiag_MFOP_NeVLDR_Cnt_BHV_PerfDiag_MFOP
        (VLDR_ac_DW.NeVLDR_Cnt_BHV_PerfDiag_MFOP);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Output function */
FUNC(void, VLDR_CODE) VLDR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/VLDR_PwrOn'
     */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/DSM_Init'
     */
    /* DataStoreWrite: '<S1642>/NeVLDR_Cnt_BHV_PerfDiag_MFOP' incorporates:
     *  Inport: '<Root>/NeVLDR_Cnt_BHV_PerfDiag_MFOP_PM_In'
     */
    (void)Rte_Read_NeVLDR_Cnt_BHV_PerfDiag_MFOP_Rx_NeVLDR_Cnt_BHV_PerfDiag_MFOP(
        &VLDR_ac_DW.NeVLDR_Cnt_BHV_PerfDiag_MFOP);

    /* DataStoreWrite: '<S1642>/NeVLDR_Cnt_CPV_PerfDiag_MFOP1' incorporates:
     *  Inport: '<Root>/NeVLDR_Cnt_CPV2_PerfDiag_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeVLDR_Cnt_CPV2_PerfDiag_MFOP_Rx_NeVLDR_Cnt_CPV2_PerfDiag_MFOP(
        &VLDR_ac_DW.NeVLDR_Cnt_CPV2_PerfDiag_MFOP);

    /* DataStoreWrite: '<S1642>/NeVLDR_Cnt_OEXV_TempElctrFlt_MFOP' incorporates:
     *  Inport: '<Root>/NeVLDR_Cnt_OEXV_TempElctrFlt_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeVLDR_Cnt_OEXV_TempElctrFlt_MFOP_Rx_NeVLDR_Cnt_OEXV_TempElctrFlt_MFOP
        (&VLDR_ac_DW.NeVLDR_Cnt_OEXV_TempElctrFlt_MF);

    /* DataStoreWrite: '<S1642>/NeVLDR_Cnt_OEXV_PressSens_MFOP' incorporates:
     *  Inport: '<Root>/NeVLDR_Cnt_OEXV_PressSens_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeVLDR_Cnt_OEXV_PressSens_MFOP_Rx_NeVLDR_Cnt_OEXV_PressSens_MFOP
        (&VLDR_ac_DW.NeVLDR_Cnt_OEXV_PressSens_MFOP);

    /* DataStoreWrite: '<S1642>/NeVLDR_Cnt_OEXV_PressElctrFlt_MFOP' incorporates:
     *  Inport: '<Root>/NeVLDR_Cnt_OEXV_PressElctrFlt_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeVLDR_Cnt_OEXV_PressElctrFlt_MFOP_Rx_NeVLDR_Cnt_OEXV_PressElctrFlt_MFOP
        (&VLDR_ac_DW.NeVLDR_Cnt_OEXV_PressElctrFlt_M);

    /* DataStoreWrite: '<S1642>/NeVLDR_Cnt_OEXV_PerfDiag_MFOP' incorporates:
     *  Inport: '<Root>/NeVLDR_Cnt_OEXV_PerfDiag_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeVLDR_Cnt_OEXV_PerfDiag_MFOP_Rx_NeVLDR_Cnt_OEXV_PerfDiag_MFOP(
        &VLDR_ac_DW.NeVLDR_Cnt_OEXV_PerfDiag_MFOP);

    /* DataStoreWrite: '<S1642>/NeVLDR_Cnt_LTSOV_StkOn_MFOP' incorporates:
     *  Inport: '<Root>/NeVLDR_Cnt_LTSOV_StkOn_MFOP_PM_In'
     */
    (void)Rte_Read_NeVLDR_Cnt_LTSOV_StkOn_MFOP_Rx_NeVLDR_Cnt_LTSOV_StkOn_MFOP
        (&VLDR_ac_DW.NeVLDR_Cnt_LTSOV_StkOn_MFOP);

    /* DataStoreWrite: '<S1642>/NeVLDR_Cnt_LTSOV_StkOff_MFOP' incorporates:
     *  Inport: '<Root>/NeVLDR_Cnt_LTSOV_StkOff_MFOP_PM_In'
     */
    (void)Rte_Read_NeVLDR_Cnt_LTSOV_StkOff_MFOP_Rx_NeVLDR_Cnt_LTSOV_StkOff_MFOP(
        &VLDR_ac_DW.NeVLDR_Cnt_LTSOV_StkOff_MFOP);

    /* DataStoreWrite: '<S1642>/NeVLDR_Cnt_LTR_PerfDiag_MFOP' incorporates:
     *  Inport: '<Root>/NeVLDR_Cnt_LTR_PerfDiag_MFOP_PM_In'
     */
    (void)Rte_Read_NeVLDR_Cnt_LTR_PerfDiag_MFOP_Rx_NeVLDR_Cnt_LTR_PerfDiag_MFOP(
        &VLDR_ac_DW.NeVLDR_Cnt_LTR_PerfDiag_MFOP);

    /* DataStoreWrite: '<S1642>/NeVLDR_Cnt_HTSoV_StkOpn_MFOP' incorporates:
     *  Inport: '<Root>/NeVLDR_Cnt_HTSoV_StkOpn_MFOP_PM_In'
     */
    (void)Rte_Read_NeVLDR_Cnt_HTSoV_StkOpn_MFOP_Rx_NeVLDR_Cnt_HTSoV_StkOpn_MFOP(
        &VLDR_ac_DW.NeVLDR_Cnt_HTSoV_StkOpn_MFOP);

    /* DataStoreWrite: '<S1642>/NeVLDR_Cnt_HTSoV_StkCls_MFOP' incorporates:
     *  Inport: '<Root>/NeVLDR_Cnt_HTSoV_StkCls_MFOP_PM_In'
     */
    (void)Rte_Read_NeVLDR_Cnt_HTSoV_StkCls_MFOP_Rx_NeVLDR_Cnt_HTSoV_StkCls_MFOP(
        &VLDR_ac_DW.NeVLDR_Cnt_HTSoV_StkCls_MFOP);

    /* DataStoreWrite: '<S1642>/NeVLDR_Cnt_HTL_PerfDiag_MFOP' incorporates:
     *  Inport: '<Root>/NeVLDR_Cnt_HTL_PerfDiag_MFOP_PM_In'
     */
    (void)Rte_Read_NeVLDR_Cnt_HTL_PerfDiag_MFOP_Rx_NeVLDR_Cnt_HTL_PerfDiag_MFOP(
        &VLDR_ac_DW.NeVLDR_Cnt_HTL_PerfDiag_MFOP);

    /* DataStoreWrite: '<S1642>/NeVLDR_Cnt_HCTV_Leak_MFOP' incorporates:
     *  Inport: '<Root>/NeVLDR_Cnt_HCTV_Leak_MFOP_PM_In'
     */
    (void)Rte_Read_NeVLDR_Cnt_HCTV_Leak_MFOP_Rx_NeVLDR_Cnt_HCTV_Leak_MFOP
        (&VLDR_ac_DW.NeVLDR_Cnt_HCTV_Leak_MFOP);

    /* DataStoreWrite: '<S1642>/NeVLDR_Cnt_EXV_TempSens_MFOP' incorporates:
     *  Inport: '<Root>/NeVLDR_Cnt_EXV_TempSens_MFOP_PM_In'
     */
    (void)Rte_Read_NeVLDR_Cnt_EXV_TempSens_MFOP_Rx_NeVLDR_Cnt_EXV_TempSens_MFOP(
        &VLDR_ac_DW.NeVLDR_Cnt_EXV_TempSens_MFOP);

    /* DataStoreWrite: '<S1642>/NeVLDR_Cnt_EXV_TempElctrFlt_MFOP' incorporates:
     *  Inport: '<Root>/NeVLDR_Cnt_EXV_TempElctrFlt_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeVLDR_Cnt_EXV_TempElctrFlt_MFOP_Rx_NeVLDR_Cnt_EXV_TempElctrFlt_MFOP
        (&VLDR_ac_DW.NeVLDR_Cnt_EXV_TempElctrFlt_MFO);

    /* DataStoreWrite: '<S1642>/NeVLDR_Cnt_EXV_PressSens_MFOP' incorporates:
     *  Inport: '<Root>/NeVLDR_Cnt_EXV_PressSens_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeVLDR_Cnt_EXV_PressSens_MFOP_Rx_NeVLDR_Cnt_EXV_PressSens_MFOP(
        &VLDR_ac_DW.NeVLDR_Cnt_EXV_PressSens_MFOP);

    /* DataStoreWrite: '<S1642>/NeVLDR_Cnt_EXV_PressElctrFlt_MFOP' incorporates:
     *  Inport: '<Root>/NeVLDR_Cnt_EXV_PressElctrFlt_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeVLDR_Cnt_EXV_PressElctrFlt_MFOP_Rx_NeVLDR_Cnt_EXV_PressElctrFlt_MFOP
        (&VLDR_ac_DW.NeVLDR_Cnt_EXV_PressElctrFlt_MF);

    /* DataStoreWrite: '<S1642>/NeVLDR_Cnt_EXV_PerfDiag_MFOP' incorporates:
     *  Inport: '<Root>/NeVLDR_Cnt_EXV_PerfDiag_MFOP_PM_In'
     */
    (void)Rte_Read_NeVLDR_Cnt_EXV_PerfDiag_MFOP_Rx_NeVLDR_Cnt_EXV_PerfDiag_MFOP(
        &VLDR_ac_DW.NeVLDR_Cnt_EXV_PerfDiag_MFOP);

    /* DataStoreWrite: '<S1642>/NeVLDR_Cnt_EEXV_TempElctrFlt_MFOP' incorporates:
     *  Inport: '<Root>/NeVLDR_Cnt_EEXV_TempElctrFlt_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeVLDR_Cnt_EEXV_TempElctrFlt_MFOP_Rx_NeVLDR_Cnt_EEXV_TempElctrFlt_MFOP
        (&VLDR_ac_DW.NeVLDR_Cnt_EEXV_TempElctrFlt_MF);

    /* DataStoreWrite: '<S1642>/NeVLDR_Cnt_EEXV_PressSens_MFOP' incorporates:
     *  Inport: '<Root>/NeVLDR_Cnt_EEXV_PressSens_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeVLDR_Cnt_EEXV_PressSens_MFOP_Rx_NeVLDR_Cnt_EEXV_PressSens_MFOP
        (&VLDR_ac_DW.NeVLDR_Cnt_EEXV_PressSens_MFOP);

    /* DataStoreWrite: '<S1642>/NeVLDR_Cnt_EEXV_PressElctrFlt_MFOP' incorporates:
     *  Inport: '<Root>/NeVLDR_Cnt_EEXV_PressElctrFlt_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeVLDR_Cnt_EEXV_PressElctrFlt_MFOP_Rx_NeVLDR_Cnt_EEXV_PressElctrFlt_MFOP
        (&VLDR_ac_DW.NeVLDR_Cnt_EEXV_PressElctrFlt_M);

    /* DataStoreWrite: '<S1642>/NeVLDR_Cnt_EEXV_PerfDiag_MFOP' incorporates:
     *  Inport: '<Root>/NeVLDR_Cnt_EEXV_PerfDiag_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeVLDR_Cnt_EEXV_PerfDiag_MFOP_Rx_NeVLDR_Cnt_EEXV_PerfDiag_MFOP(
        &VLDR_ac_DW.NeVLDR_Cnt_EEXV_PerfDiag_MFOP);

    /* DataStoreWrite: '<S1642>/NeVLDR_Cnt_CabVlvOpeng_Err_MFOP' incorporates:
     *  Inport: '<Root>/NeVLDR_Cnt_CabVlvOpeng_Err_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeVLDR_Cnt_CabVlvOpeng_Err_MFOP_Rx_NeVLDR_Cnt_CabVlvOpeng_Err_MFOP
        (&VLDR_ac_DW.NeVLDR_Cnt_CabVlvOpeng_Err_MFOP);

    /* DataStoreWrite: '<S1642>/NeVLDR_Cnt_CPV_PerfDiag_MFOP' incorporates:
     *  Inport: '<Root>/NeVLDR_Cnt_CPV_PerfDiag_MFOP_PM_In'
     */
    (void)Rte_Read_NeVLDR_Cnt_CPV_PerfDiag_MFOP_Rx_NeVLDR_Cnt_CPV_PerfDiag_MFOP(
        &VLDR_ac_DW.NeVLDR_Cnt_CPV_PerfDiag_MFOP);

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S1643>/VeVLDR_b_HTCV_Leak_DiagEnbl_Out_Init' */
    VLDR_ac_B.OutportBufferForVeVLDR_b_HTCV_L = false;

    /* SignalConversion generated from: '<S1643>/VeVLDR_b_IUMPR_HTSOV_StkClsd_Out_Init' */
    VLDR_ac_B.OutportBufferForVeVLDR_b_IUMPR_ = false;

    /* SignalConversion generated from: '<S1643>/VeVLDR_b_IUMPR_HTSOV_StkOpn_Out_Init' */
    VLDR_ac_B.OutportBufferForVeVLDR_b_IUMP_g = false;

    /* SignalConversion generated from: '<S1643>/VeVLDR_b_IUMPR_HTCV_Perf_Out_Init' */
    VLDR_ac_B.OutportBufferForVeVLDR_b_IUMP_k = false;

    /* SignalConversion generated from: '<S1643>/VeVLDR_b_IUMPR_HTCV_Leak_Out_Init' */
    VLDR_ac_B.OutportBufferForVeVLDR_b_IUMP_l = false;

    /* SignalConversion generated from: '<S1643>/VeVLDR_b_IUMPR_HTSOV_MinCmdThrshld_Met_Out_Init' */
    VLDR_ac_B.OutportBufferForVeVLDR_b_IUMP_f = false;

    /* SignalConversion generated from: '<S1643>/VeVLDR_b_IUMPR_HTCV_MinCmdThrshld_Met_Out_Init' */
    VLDR_ac_B.OutportBufferForVeVLDR_b_IUMP_a = false;

    /* SignalConversion generated from: '<S1643>/VeVLDR_b_HTSoV_StkCls_XYEnbl_Out_Init' */
    VLDR_ac_B.OutportBufferForVeVLDR_b_HTSoV_ = false;

    /* SignalConversion generated from: '<S1643>/VeVLDR_b_HTSoV_StkOpn_XYEnbl_Out_Init' */
    VLDR_ac_B.OutportBufferForVeVLDR_b_HTSo_d = false;

    /* SignalConversion generated from: '<S1643>/VeVLDR_b_HTSoV_StkCls_FltDtct_Out_Init' */
    VLDR_ac_B.OutportBufferForVeVLDR_b_HTSo_o = false;

    /* SignalConversion generated from: '<S1643>/VeVLDR_b_HTSoV_StkOpn_FltDtct_Out_Init' */
    VLDR_ac_B.OutportBufferForVeVLDR_b_HTSo_b = false;

    /* SignalConversion generated from: '<S1643>/VeVLDR_b_HTCV_Stck_FltDtct_Out_Init' */
    VLDR_ac_B.OutportBufferForVeVLDR_b_HTCV_S = false;

    /* SignalConversion generated from: '<S1643>/VeVLDR_b_HCTV_Leak_FltDtct_Out_Init' */
    VLDR_ac_B.OutportBufferForVeVLDR_b_HCTV_L = false;

    /* SignalConversion generated from: '<S1643>/VeVLDR_b_EXV_PressElctrFlt_FltDtct_Out_Init' */
    VLDR_ac_B.OutportBufferForVeVLDR_b_EXV_Pr = false;

    /* SignalConversion generated from: '<S1643>/VeVLDR_b_EXV_TempElctrFlt_FltDtct_Out_Init' */
    VLDR_ac_B.OutportBufferForVeVLDR_b_EXV_Te = false;

    /* SignalConversion generated from: '<S1643>/VeVLDR_b_EXV_PerfDiag_FltDtct_Out_Init' */
    VLDR_ac_B.OutportBufferForVeVLDR_b_EXV_Pe = false;

    /* SignalConversion generated from: '<S1643>/VeVLDR_b_EXV_PressSens_FltDtct_Out_Init' */
    VLDR_ac_B.OutportBufferForVeVLDR_b_EXV__i = false;

    /* SignalConversion generated from: '<S1643>/VeVLDR_b_EXV_TempSens_FltDtct_Out_Init' */
    VLDR_ac_B.OutportBufferForVeVLDR_b_EXV__n = false;

    /* SignalConversion generated from: '<S1643>/VeVLDR_b_IUMPR_EXV_PerfDiag_Out_Init' */
    VLDR_ac_B.OutportBufferForVeVLDR_b_IUMP_e = false;

    /* SignalConversion generated from: '<S1643>/VeVLDR_b_IUMPR_EXV_TempSensRat_Out_Init' */
    VLDR_ac_B.OutportBufferForVeVLDR_b_IUMP_i = false;

    /* SignalConversion generated from: '<S1643>/VeVLDR_b_IUMPR_EXV_PressSensRat_Out_Init' */
    VLDR_ac_B.OutportBufferForVeVLDR_b_IUMP_d = false;

    /* SignalConversion generated from: '<S1643>/VeVLDR_b_IUMPR_LTSOV_StuckOff_Out_Init' */
    VLDR_ac_B.OutportBufferForVeVLDR_b_IUM_aj = false;

    /* SignalConversion generated from: '<S1643>/VeVLDR_b_IUMPR_LTSOV_StuckOn_Out_Init' */
    VLDR_ac_B.OutportBufferForVeVLDR_b_IUMP_n = false;

    /* SignalConversion generated from: '<S1643>/VeVLDR_b_IUMPR_EXV_perf_MinCmdThrshld_Met_Out_Init' */
    VLDR_ac_B.OutportBufferForVeVLDR_b_IUMP_c = false;

    /* SignalConversion generated from: '<S1643>/VeVLDR_b_IUMPR_EXV_presSens_MinCmdThrshld_Met_Out_Init' */
    VLDR_ac_B.OutportBufferForVeVLDR_b_IUMP_p = false;

    /* SignalConversion generated from: '<S1643>/VeVLDR_b_IUMPR_LTSOV_StkOff_MinCmdThrshld_Met_Out_Init' */
    VLDR_ac_B.OutportBufferForVeVLDR_b_IUM_pw = false;

    /* SignalConversion generated from: '<S1643>/VeVLDR_b_IUMPR_LTSOV_StkOn_MinCmdThrshld_Met_Out_Init' */
    VLDR_ac_B.OutportBufferForVeVLDR_b_IUM_is = false;

    /* SignalConversion generated from: '<S1643>/VeVLDR_b_EXV_PressShrtHigh_Out_Init' */
    VLDR_ac_B.OutportBufferForVeVLDR_b_EXV__o = false;

    /* SignalConversion generated from: '<S1643>/VeVLDR_b_EEXV_PressElctrFlt_FltDtct_Out_Init' */
    VLDR_ac_B.OutportBufferForVeVLDR_b_EEXV_P = false;

    /* SignalConversion generated from: '<S1643>/VeVLDR_b_EEXV_TempElctrFlt_FltDtct_Out_Init' */
    VLDR_ac_B.OutportBufferForVeVLDR_b_EEXV_T = false;

    /* SignalConversion generated from: '<S1643>/VeVLDR_b_EEXV_PerfDiag_FltDtct_Out_Init' */
    VLDR_ac_B.OutportBufferForVeVLDR_b_EEXV_j = false;

    /* SignalConversion generated from: '<S1643>/VeVLDR_b_EEXV_PressSens_FltDtct_Out_Init' */
    VLDR_ac_B.OutportBufferForVeVLDR_b_EEX_jz = false;

    /* SignalConversion generated from: '<S1643>/VeVLDR_b_EEXV_PressShrtHigh_Out_Init' */
    VLDR_ac_B.OutportBufferForVeVLDR_b_EEXV_f = false;

    /* SignalConversion generated from: '<S1643>/VeVLDR_b_OEXV_PressElctrFlt_FltDtct_Out_Init' */
    VLDR_ac_B.OutportBufferForVeVLDR_b_OEXV_P = false;

    /* SignalConversion generated from: '<S1643>/VeVLDR_b_OEXV_TempElctrFlt_FltDtct_Out_Init' */
    VLDR_ac_B.OutportBufferForVeVLDR_b_OEXV_T = false;

    /* SignalConversion generated from: '<S1643>/VeVLDR_b_OEXV_PerfDiag_FltDtct_Out_Init' */
    VLDR_ac_B.OutportBufferForVeVLDR_b_OEXV_k = false;

    /* SignalConversion generated from: '<S1643>/VeVLDR_b_OEXV_PressSens_FltDtct_Out_Init' */
    VLDR_ac_B.OutportBufferForVeVLDR_b_OEXV_p = false;

    /* SignalConversion generated from: '<S1643>/VeVLDR_b_OEXV_PressShrtHigh_Out_Init' */
    VLDR_ac_B.OutportBufferForVeVLDR_b_OEXV_e = false;

    /* SignalConversion generated from: '<S1643>/VeVLDR_b_IUMPR_EEXV_PerfDiag_Out_Init' */
    VLDR_ac_B.OutportBufferForVeVLDR_b_IUM_cv = false;

    /* SignalConversion generated from: '<S1643>/VeVLDR_b_IUMPR_EEXV_PressSensRat_Out_Init' */
    VLDR_ac_B.OutportBufferForVeVLDR_b_IUM_a5 = false;

    /* SignalConversion generated from: '<S1643>/VeVLDR_b_IUMPR_EEXV_perf_MinCmdThrshld_Met_Out_Init' */
    VLDR_ac_B.OutportBufferForVeVLDR_b_IUM_fu = false;

    /* SignalConversion generated from: '<S1643>/VeVLDR_b_IUMPR_EEXV_presSens_MinCmdThrshld_Met_Out_Init' */
    VLDR_ac_B.OutportBufferForVeVLDR_b_IUM_ij = false;

    /* SignalConversion generated from: '<S1643>/VeVLDR_b_IUMPR_OEXV_PerfDiag_Out_Init' */
    VLDR_ac_B.OutportBufferForVeVLDR_b_IUM_eg = false;

    /* SignalConversion generated from: '<S1643>/VeVLDR_b_IUMPR_OEXV_PressSensRat_Out_Init' */
    VLDR_ac_B.OutportBufferForVeVLDR_b_IUMP_m = false;

    /* SignalConversion generated from: '<S1643>/VeVLDR_b_IUMPR_OEXV_perf_MinCmdThrshld_Met_Out_Init' */
    VLDR_ac_B.OutportBufferForVeVLDR_b_IUM_pr = false;

    /* SignalConversion generated from: '<S1643>/VeVLDR_b_IUMPR_OEXV_presSens_MinCmdThrshld_Met_Out_Init' */
    VLDR_ac_B.OutportBufferForVeVLDR_b_IUM_ak = false;

    /* SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_HB_PSC_CtrlValACktPerf' incorporates:
     *  Constant: '<S1644>/Constant'
     */
    VLDR_ac_B.OutportBufferForVeVLDR_e_FaultS = VLDR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_AC_RefrigExpVlvAct_C_CntrlCktPerf' incorporates:
     *  Constant: '<S1645>/Constant'
     */
    VLDR_ac_B.OutportBufferForVeVLDR_e_Faul_o = VLDR_ac_ConstB.Constant_d;

    /* SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_AC_RefrigPresSnsrCCkt' incorporates:
     *  Constant: '<S1646>/Constant'
     */
    VLDR_ac_B.OutportBufferForVeVLDR_e_Faul_c = VLDR_ac_ConstB.Constant_a;

    /* SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_AC_RefrigPresSnsrCCktPerf' incorporates:
     *  Constant: '<S1647>/Constant'
     */
    VLDR_ac_B.OutportBufferForVeVLDR_e_Faul_j = VLDR_ac_ConstB.Constant_c;

    /* SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrCCkt' incorporates:
     *  Constant: '<S1648>/Constant'
     */
    VLDR_ac_B.OutportBufferForVeVLDR_e_Faul_m = VLDR_ac_ConstB.Constant_g;

    /* SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_CoolantVlvA_StkOpn' incorporates:
     *  Constant: '<S1649>/Constant'
     */
    VLDR_ac_B.OutportBufferForVeVLDR_e_Faul_k = VLDR_ac_ConstB.Constant_b;

    /* SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_CoolantVlvA_Perf' incorporates:
     *  Constant: '<S1650>/Constant'
     */
    VLDR_ac_B.OutportBufferForVeVLDR_e_Fau_cg = VLDR_ac_ConstB.Constant_i;

    /* SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_HB_PSC_CtrlValCCktPerf' incorporates:
     *  Constant: '<S1651>/Constant'
     */
    VLDR_ac_B.OutportBufferForVeVLDR_e_Fau_cx = VLDR_ac_ConstB.Constant_gv;

    /* SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_CoolantVlvB_StkClsd' incorporates:
     *  Constant: '<S1652>/Constant'
     */
    VLDR_ac_B.OutportBufferForVeVLDR_e_Fau_m4 = VLDR_ac_ConstB.Constant_k;

    /* SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_CoolantVlvB_StkOpn' incorporates:
     *  Constant: '<S1653>/Constant'
     */
    VLDR_ac_B.OutportBufferForVeVLDR_e_Faul_h = VLDR_ac_ConstB.Constant_f;

    /* SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_HB_PSC_CtrlValBCktPerf' incorporates:
     *  Constant: '<S1654>/Constant'
     */
    VLDR_ac_B.OutportBufferForVeVLDR_e_Faul_g = VLDR_ac_ConstB.Constant_k2;

    /* SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_HybEvBatPacCoolCtrlVlvBPerfStkOff' incorporates:
     *  Constant: '<S1655>/Constant'
     */
    VLDR_ac_B.OutportBufferForVeVLDR_e_Faul_b = VLDR_ac_ConstB.Constant_ay;

    /* SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_HybEvBatPacCoolCtrlVlvBStkOn' incorporates:
     *  Constant: '<S1656>/Constant'
     */
    VLDR_ac_B.OutportBufferForVeVLDR_e_Faul_d = VLDR_ac_ConstB.Constant_cu;

    /* SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_AC_RefrigExpVlvActD_CntrlCktPerf' incorporates:
     *  Constant: '<S1657>/Constant'
     */
    VLDR_ac_B.OutportBufferForVeVLDR_e_Fau_bh = VLDR_ac_ConstB.Constant_ax;

    /* SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_AC_RefrigPresSnsrDCkt' incorporates:
     *  Constant: '<S1658>/Constant'
     */
    VLDR_ac_B.OutportBufferForVeVLDR_e_Fau_dp = VLDR_ac_ConstB.Constant_fz;

    /* SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_AC_RefrigPresSnsrDCktPerf' incorporates:
     *  Constant: '<S1659>/Constant'
     */
    VLDR_ac_B.OutportBufferForVeVLDR_e_Faul_p = VLDR_ac_ConstB.Constant_bs;

    /* SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrDCkt' incorporates:
     *  Constant: '<S1660>/Constant'
     */
    VLDR_ac_B.OutportBufferForVeVLDR_e_Faul_e = VLDR_ac_ConstB.Constant_bl;

    /* SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_AC_RefrigExpVlvActCtrCktPerf' incorporates:
     *  Constant: '<S1661>/Constant'
     */
    VLDR_ac_B.OutportBufferForVeVLDR_e_Fau_mr = VLDR_ac_ConstB.Constant_dn;

    /* SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrBCkt' incorporates:
     *  Constant: '<S1662>/Constant'
     */
    VLDR_ac_B.OutportBufferForVeVLDR_e_Fau_m3 = VLDR_ac_ConstB.Constant_al;

    /* SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrBPerf' incorporates:
     *  Constant: '<S1663>/Constant'
     */
    VLDR_ac_B.OutportBufferForVeVLDR_e_Fau_jo = VLDR_ac_ConstB.Constant_m;

    /* SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrACkt' incorporates:
     *  Constant: '<S1664>/Constant'
     */
    VLDR_ac_B.OutportBufferForVeVLDR_e_Fau_ds = VLDR_ac_ConstB.Constant_dx;

    /* SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrAPerf' incorporates:
     *  Constant: '<S1665>/Constant'
     */
    VLDR_ac_B.OutportBufferForVeVLDR_e_Fau_h1 = VLDR_ac_ConstB.Constant_p;

    /* SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_EngCoolbypsVlvDPerf' incorporates:
     *  Constant: '<S1666>/Constant'
     */
    VLDR_ac_B.OutportBufferForVeVLDR_e_Fau_j1 = VLDR_ac_ConstB.Constant_px;

    /* SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_HybPropSysCoolCntrlVal_E_Perf' incorporates:
     *  Constant: '<S1667>/Constant'
     */
    VLDR_ac_B.OutportBufferForVeVLDR_e_Fau_ep = VLDR_ac_ConstB.Constant_bb;

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */

    /* Outport: '<Root>/VeVLDR_e_FaultSts_AC_RefrigExpVlvActCtrCktPerf' incorporates:
     *  SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_AC_RefrigExpVlvActCtrCktPerf'
     *  SignalConversion generated from: '<S3>/R_VeVLDR_e_FaultSts_AC_RefrigExpVlvActCtrCktPerf'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_AC_RefrigExpVlvActCtrCktPerf_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_e_Fau_mr);

    /* Outport: '<Root>/VeVLDR_e_FaultSts_AC_RefrigExpVlvActD_CntrlCktPerf' incorporates:
     *  SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_AC_RefrigExpVlvActD_CntrlCktPerf'
     *  SignalConversion generated from: '<S3>/R_VeVLDR_e_FaultSts_AC_RefrigExpVlvActD_CntrlCktPerf'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_AC_RefrigExpVlvActD_CntrlCktPerf_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_e_Fau_bh);

    /* Outport: '<Root>/VeVLDR_e_FaultSts_AC_RefrigExpVlvAct_C_CntrlCktPerf' incorporates:
     *  SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_AC_RefrigExpVlvAct_C_CntrlCktPerf'
     *  SignalConversion generated from: '<S3>/R_VeVLDR_e_FaultSts_AC_RefrigExpVlvAct_C_CntrlCktPerf'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_AC_RefrigExpVlvAct_C_CntrlCktPerf_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_e_Faul_o);

    /* Outport: '<Root>/VeVLDR_e_FaultSts_AC_RefrigPresSnsrCCkt' incorporates:
     *  SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_AC_RefrigPresSnsrCCkt'
     *  SignalConversion generated from: '<S3>/R_VeVLDR_e_FaultSts_AC_RefrigPresSnsrCCkt'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_AC_RefrigPresSnsrCCkt_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_e_Faul_c);

    /* Outport: '<Root>/VeVLDR_e_FaultSts_AC_RefrigPresSnsrCCktPerf' incorporates:
     *  SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_AC_RefrigPresSnsrCCktPerf'
     *  SignalConversion generated from: '<S3>/R_VeVLDR_e_FaultSts_AC_RefrigPresSnsrCCktPerf'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_AC_RefrigPresSnsrCCktPerf_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_e_Faul_j);

    /* Outport: '<Root>/VeVLDR_e_FaultSts_AC_RefrigPresSnsrDCkt' incorporates:
     *  SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_AC_RefrigPresSnsrDCkt'
     *  SignalConversion generated from: '<S3>/R_VeVLDR_e_FaultSts_AC_RefrigPresSnsrDCkt'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_AC_RefrigPresSnsrDCkt_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_e_Fau_dp);

    /* Outport: '<Root>/VeVLDR_e_FaultSts_AC_RefrigPresSnsrDCktPerf' incorporates:
     *  SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_AC_RefrigPresSnsrDCktPerf'
     *  SignalConversion generated from: '<S3>/R_VeVLDR_e_FaultSts_AC_RefrigPresSnsrDCktPerf'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_AC_RefrigPresSnsrDCktPerf_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_e_Faul_p);

    /* Outport: '<Root>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrACkt' incorporates:
     *  SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrACkt'
     *  SignalConversion generated from: '<S3>/R_VeVLDR_e_FaultSts_AC_RefrigTempSnsrACkt'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_AC_RefrigTempSnsrACkt_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_e_Fau_ds);

    /* Outport: '<Root>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrAPerf' incorporates:
     *  SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrAPerf'
     *  SignalConversion generated from: '<S3>/R_VeVLDR_e_FaultSts_AC_RefrigTempSnsrAPerf'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_AC_RefrigTempSnsrAPerf_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_e_Fau_h1);

    /* Outport: '<Root>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrBCkt' incorporates:
     *  SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrBCkt'
     *  SignalConversion generated from: '<S3>/R_VeVLDR_e_FaultSts_AC_RefrigTempSnsrBCkt'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_AC_RefrigTempSnsrBCkt_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_e_Fau_m3);

    /* Outport: '<Root>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrBPerf' incorporates:
     *  SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrBPerf'
     *  SignalConversion generated from: '<S3>/R_VeVLDR_e_FaultSts_AC_RefrigTempSnsrBPerf'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_AC_RefrigTempSnsrBPerf_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_e_Fau_jo);

    /* Outport: '<Root>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrCCkt' incorporates:
     *  SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrCCkt'
     *  SignalConversion generated from: '<S3>/R_VeVLDR_e_FaultSts_AC_RefrigTempSnsrCCkt'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_AC_RefrigTempSnsrCCkt_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_e_Faul_m);

    /* Outport: '<Root>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrDCkt' incorporates:
     *  SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrDCkt'
     *  SignalConversion generated from: '<S3>/R_VeVLDR_e_FaultSts_AC_RefrigTempSnsrDCkt'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_AC_RefrigTempSnsrDCkt_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_e_Faul_e);

    /* Outport: '<Root>/VeVLDR_e_FaultSts_CoolantVlvA_Perf' incorporates:
     *  SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_CoolantVlvA_Perf'
     *  SignalConversion generated from: '<S3>/R_VeVLDR_e_FaultSts_CoolantVlvA_Perf'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_CoolantVlvA_Perf_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_e_Fau_cg);

    /* Outport: '<Root>/VeVLDR_e_FaultSts_CoolantVlvA_StkOpn' incorporates:
     *  SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_CoolantVlvA_StkOpn'
     *  SignalConversion generated from: '<S3>/R_VeVLDR_e_FaultSts_CoolantVlvA_StkOpn'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_CoolantVlvA_StkOpn_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_e_Faul_k);

    /* Outport: '<Root>/VeVLDR_e_FaultSts_CoolantVlvB_StkClsd' incorporates:
     *  SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_CoolantVlvB_StkClsd'
     *  SignalConversion generated from: '<S3>/R_VeVLDR_e_FaultSts_CoolantVlvB_StkClsd'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_CoolantVlvB_StkClsd_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_e_Fau_m4);

    /* Outport: '<Root>/VeVLDR_e_FaultSts_CoolantVlvB_StkOpn' incorporates:
     *  SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_CoolantVlvB_StkOpn'
     *  SignalConversion generated from: '<S3>/R_VeVLDR_e_FaultSts_CoolantVlvB_StkOpn'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_CoolantVlvB_StkOpn_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_e_Faul_h);

    /* Outport: '<Root>/VeVLDR_e_FaultSts_EngCoolbypsVlvDPerf' incorporates:
     *  SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_EngCoolbypsVlvDPerf'
     *  SignalConversion generated from: '<S3>/R_VeVLDR_e_FaultSts_EngCoolbypsVlvDPerf'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_EngCoolbypsVlvDPerf_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_e_Fau_j1);

    /* Outport: '<Root>/VeVLDR_e_FaultSts_HB_PSC_CtrlValACktPerf' incorporates:
     *  SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_HB_PSC_CtrlValACktPerf'
     *  SignalConversion generated from: '<S3>/R_VeVLDR_e_FaultSts_HB_PSC_CtrlValACktPerf'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_HB_PSC_CtrlValACktPerf_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_e_FaultS);

    /* Outport: '<Root>/VeVLDR_e_FaultSts_HB_PSC_CtrlValBCktPerf' incorporates:
     *  SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_HB_PSC_CtrlValBCktPerf'
     *  SignalConversion generated from: '<S3>/R_VeVLDR_e_FaultSts_HB_PSC_CtrlValBCktPerf'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_HB_PSC_CtrlValBCktPerf_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_e_Faul_g);

    /* Outport: '<Root>/VeVLDR_e_FaultSts_HB_PSC_CtrlValCCktPerf' incorporates:
     *  SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_HB_PSC_CtrlValCCktPerf'
     *  SignalConversion generated from: '<S3>/R_VeVLDR_e_FaultSts_HB_PSC_CtrlValCCktPerf'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_HB_PSC_CtrlValCCktPerf_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_e_Fau_cx);

    /* Outport: '<Root>/VeVLDR_e_FaultSts_HybEvBatPacCoolCtrlVlvBPerfStkOff' incorporates:
     *  SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_HybEvBatPacCoolCtrlVlvBPerfStkOff'
     *  SignalConversion generated from: '<S3>/R_VeVLDR_e_FaultSts_HybEvBatPacCoolCtrlVlvBPerfStkOff'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_HybEvBatPacCoolCtrlVlvBPerfStkOff_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_e_Faul_b);

    /* Outport: '<Root>/VeVLDR_e_FaultSts_HybEvBatPacCoolCtrlVlvBStkOn' incorporates:
     *  SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_HybEvBatPacCoolCtrlVlvBStkOn'
     *  SignalConversion generated from: '<S3>/R_VeVLDR_e_FaultSts_HybEvBatPacCoolCtrlVlvBStkOn'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_HybEvBatPacCoolCtrlVlvBStkOn_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_e_Faul_d);

    /* Outport: '<Root>/VeVLDR_e_FaultSts_HybPropSysCoolCntrlVal_E_Perf' incorporates:
     *  SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_HybPropSysCoolCntrlVal_E_Perf'
     *  SignalConversion generated from: '<S3>/R_VeVLDR_e_FaultSts_HybPropSysCoolCntrlVal_E_Perf'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_HybPropSysCoolCntrlVal_E_Perf_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_e_Fau_ep);

    /* Outport: '<Root>/VeVLDR_b_EEXV_PerfDiag_FltDtct' incorporates:
     *  SignalConversion generated from: '<S3>/VeVLDR_b_EEXV_PerfDiag_FltDtct_Out_Init'
     */
    (void)Rte_Write_VeVLDR_b_EEXV_PerfDiag_FltDtct_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_b_EEXV_j);

    /* Outport: '<Root>/VeVLDR_b_EEXV_PressElctrFlt_FltDtct' incorporates:
     *  SignalConversion generated from: '<S3>/VeVLDR_b_EEXV_PressElctrFlt_FltDtct_Out_Init'
     */
    (void)Rte_Write_VeVLDR_b_EEXV_PressElctrFlt_FltDtct_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_b_EEXV_P);

    /* Outport: '<Root>/VeVLDR_b_EEXV_PressSens_FltDtct' incorporates:
     *  SignalConversion generated from: '<S3>/VeVLDR_b_EEXV_PressSens_FltDtct_Out_Init'
     */
    (void)Rte_Write_VeVLDR_b_EEXV_PressSens_FltDtct_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_b_EEX_jz);

    /* Outport: '<Root>/VeVLDR_b_EEXV_PressShrtHigh' incorporates:
     *  SignalConversion generated from: '<S3>/VeVLDR_b_EEXV_PressShrtHigh_Out_Init'
     */
    (void)Rte_Write_VeVLDR_b_EEXV_PressShrtHigh_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_b_EEXV_f);

    /* Outport: '<Root>/VeVLDR_b_EEXV_TempElctrFlt_FltDtct' incorporates:
     *  SignalConversion generated from: '<S3>/VeVLDR_b_EEXV_TempElctrFlt_FltDtct_Out_Init'
     */
    (void)Rte_Write_VeVLDR_b_EEXV_TempElctrFlt_FltDtct_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_b_EEXV_T);

    /* Outport: '<Root>/VeVLDR_b_EXV_PerfDiag_FltDtct' incorporates:
     *  SignalConversion generated from: '<S3>/VeVLDR_b_EXV_PerfDiag_FltDtct_Out_Init'
     */
    (void)Rte_Write_VeVLDR_b_EXV_PerfDiag_FltDtct_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_b_EXV_Pe);

    /* Outport: '<Root>/VeVLDR_b_EXV_PressElctrFlt_FltDtct' incorporates:
     *  SignalConversion generated from: '<S3>/VeVLDR_b_EXV_PressElctrFlt_FltDtct_Out_Init'
     */
    (void)Rte_Write_VeVLDR_b_EXV_PressElctrFlt_FltDtct_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_b_EXV_Pr);

    /* Outport: '<Root>/VeVLDR_b_EXV_PressSens_FltDtct' incorporates:
     *  SignalConversion generated from: '<S3>/VeVLDR_b_EXV_PressSens_FltDtct_Out_Init'
     */
    (void)Rte_Write_VeVLDR_b_EXV_PressSens_FltDtct_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_b_EXV__i);

    /* Outport: '<Root>/VeVLDR_b_EXV_PressShrtHigh' incorporates:
     *  SignalConversion generated from: '<S3>/VeVLDR_b_EXV_PressShrtHigh_Out_Init'
     */
    (void)Rte_Write_VeVLDR_b_EXV_PressShrtHigh_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_b_EXV__o);

    /* Outport: '<Root>/VeVLDR_b_EXV_TempElctrFlt_FltDtct' incorporates:
     *  SignalConversion generated from: '<S3>/VeVLDR_b_EXV_TempElctrFlt_FltDtct_Out_Init'
     */
    (void)Rte_Write_VeVLDR_b_EXV_TempElctrFlt_FltDtct_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_b_EXV_Te);

    /* Outport: '<Root>/VeVLDR_b_EXV_TempSens_FltDtct' incorporates:
     *  SignalConversion generated from: '<S3>/VeVLDR_b_EXV_TempSens_FltDtct_Out_Init'
     */
    (void)Rte_Write_VeVLDR_b_EXV_TempSens_FltDtct_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_b_EXV__n);

    /* Outport: '<Root>/VeVLDR_b_HCTV_Leak_FltDtct' incorporates:
     *  SignalConversion generated from: '<S3>/VeVLDR_b_HCTV_Leak_FltDtct_Out_Init'
     */
    (void)Rte_Write_VeVLDR_b_HCTV_Leak_FltDtct_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_b_HCTV_L);

    /* Outport: '<Root>/VeVLDR_b_HTCV_Leak_DiagEnbl' incorporates:
     *  SignalConversion generated from: '<S3>/VeVLDR_b_HTCV_Leak_DiagEnbl_Out_Init'
     */
    (void)Rte_Write_VeVLDR_b_HTCV_Leak_DiagEnbl_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_b_HTCV_L);

    /* Outport: '<Root>/VeVLDR_b_HTCV_Stck_FltDtct' incorporates:
     *  SignalConversion generated from: '<S3>/VeVLDR_b_HTCV_Stck_FltDtct_Out_Init'
     */
    (void)Rte_Write_VeVLDR_b_HTCV_Stck_FltDtct_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_b_HTCV_S);

    /* Outport: '<Root>/VeVLDR_b_HTSoV_StkCls_FltDtct' incorporates:
     *  SignalConversion generated from: '<S3>/VeVLDR_b_HTSoV_StkCls_FltDtct_Out_Init'
     */
    (void)Rte_Write_VeVLDR_b_HTSoV_StkCls_FltDtct_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_b_HTSo_o);

    /* Outport: '<Root>/VeVLDR_b_HTSoV_StkCls_XYEnbl' incorporates:
     *  SignalConversion generated from: '<S3>/VeVLDR_b_HTSoV_StkCls_XYEnbl_Out_Init'
     */
    (void)Rte_Write_VeVLDR_b_HTSoV_StkCls_XYEnbl_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_b_HTSoV_);

    /* Outport: '<Root>/VeVLDR_b_HTSoV_StkOpn_FltDtct' incorporates:
     *  SignalConversion generated from: '<S3>/VeVLDR_b_HTSoV_StkOpn_FltDtct_Out_Init'
     */
    (void)Rte_Write_VeVLDR_b_HTSoV_StkOpn_FltDtct_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_b_HTSo_b);

    /* Outport: '<Root>/VeVLDR_b_HTSoV_StkOpn_XYEnbl' incorporates:
     *  SignalConversion generated from: '<S3>/VeVLDR_b_HTSoV_StkOpn_XYEnbl_Out_Init'
     */
    (void)Rte_Write_VeVLDR_b_HTSoV_StkOpn_XYEnbl_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_b_HTSo_d);

    /* Outport: '<Root>/VeVLDR_b_IUMPR_EEXV_PerfDiag' incorporates:
     *  SignalConversion generated from: '<S3>/VeVLDR_b_IUMPR_EEXV_PerfDiag_Out_Init'
     */
    (void)Rte_Write_VeVLDR_b_IUMPR_EEXV_PerfDiag_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_b_IUM_cv);

    /* Outport: '<Root>/VeVLDR_b_IUMPR_EEXV_PressSensRat' incorporates:
     *  SignalConversion generated from: '<S3>/VeVLDR_b_IUMPR_EEXV_PressSensRat_Out_Init'
     */
    (void)Rte_Write_VeVLDR_b_IUMPR_EEXV_PressSensRat_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_b_IUM_a5);

    /* Outport: '<Root>/VeVLDR_b_IUMPR_EEXV_perf_MinCmdThrshld_Met' incorporates:
     *  SignalConversion generated from: '<S3>/VeVLDR_b_IUMPR_EEXV_perf_MinCmdThrshld_Met_Out_Init'
     */
    (void)Rte_Write_VeVLDR_b_IUMPR_EEXV_perf_MinCmdThrshld_Met_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_b_IUM_fu);

    /* Outport: '<Root>/VeVLDR_b_IUMPR_EEXV_presSens_MinCmdThrshld_Met' incorporates:
     *  SignalConversion generated from: '<S3>/VeVLDR_b_IUMPR_EEXV_presSens_MinCmdThrshld_Met_Out_Init'
     */
    (void)Rte_Write_VeVLDR_b_IUMPR_EEXV_presSens_MinCmdThrshld_Met_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_b_IUM_ij);

    /* Outport: '<Root>/VeVLDR_b_IUMPR_EXV_PerfDiag' incorporates:
     *  SignalConversion generated from: '<S3>/VeVLDR_b_IUMPR_EXV_PerfDiag_Out_Init'
     */
    (void)Rte_Write_VeVLDR_b_IUMPR_EXV_PerfDiag_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_b_IUMP_e);

    /* Outport: '<Root>/VeVLDR_b_IUMPR_EXV_PressSensRat' incorporates:
     *  SignalConversion generated from: '<S3>/VeVLDR_b_IUMPR_EXV_PressSensRat_Out_Init'
     */
    (void)Rte_Write_VeVLDR_b_IUMPR_EXV_PressSensRat_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_b_IUMP_d);

    /* Outport: '<Root>/VeVLDR_b_IUMPR_EXV_TempSensRat' incorporates:
     *  SignalConversion generated from: '<S3>/VeVLDR_b_IUMPR_EXV_TempSensRat_Out_Init'
     */
    (void)Rte_Write_VeVLDR_b_IUMPR_EXV_TempSensRat_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_b_IUMP_i);

    /* Outport: '<Root>/VeVLDR_b_IUMPR_EXV_perf_MinCmdThrshld_Met' incorporates:
     *  SignalConversion generated from: '<S3>/VeVLDR_b_IUMPR_EXV_perf_MinCmdThrshld_Met_Out_Init'
     */
    (void)Rte_Write_VeVLDR_b_IUMPR_EXV_perf_MinCmdThrshld_Met_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_b_IUMP_c);

    /* Outport: '<Root>/VeVLDR_b_IUMPR_EXV_presSens_MinCmdThrshld_Met' incorporates:
     *  SignalConversion generated from: '<S3>/VeVLDR_b_IUMPR_EXV_presSens_MinCmdThrshld_Met_Out_Init'
     */
    (void)Rte_Write_VeVLDR_b_IUMPR_EXV_presSens_MinCmdThrshld_Met_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_b_IUMP_p);

    /* Outport: '<Root>/VeVLDR_b_IUMPR_HTCV_Leak' incorporates:
     *  SignalConversion generated from: '<S3>/VeVLDR_b_IUMPR_HTCV_Leak_Out_Init'
     */
    (void)Rte_Write_VeVLDR_b_IUMPR_HTCV_Leak_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_b_IUMP_l);

    /* Outport: '<Root>/VeVLDR_b_IUMPR_HTCV_MinCmdThrshld_Met' incorporates:
     *  SignalConversion generated from: '<S3>/VeVLDR_b_IUMPR_HTCV_MinCmdThrshld_Met_Out_Init'
     */
    (void)Rte_Write_VeVLDR_b_IUMPR_HTCV_MinCmdThrshld_Met_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_b_IUMP_a);

    /* Outport: '<Root>/VeVLDR_b_IUMPR_HTCV_Perf' incorporates:
     *  SignalConversion generated from: '<S3>/VeVLDR_b_IUMPR_HTCV_Perf_Out_Init'
     */
    (void)Rte_Write_VeVLDR_b_IUMPR_HTCV_Perf_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_b_IUMP_k);

    /* Outport: '<Root>/VeVLDR_b_IUMPR_HTSOV_MinCmdThrshld_Met' incorporates:
     *  SignalConversion generated from: '<S3>/VeVLDR_b_IUMPR_HTSOV_MinCmdThrshld_Met_Out_Init'
     */
    (void)Rte_Write_VeVLDR_b_IUMPR_HTSOV_MinCmdThrshld_Met_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_b_IUMP_f);

    /* Outport: '<Root>/VeVLDR_b_IUMPR_HTSOV_StkClsd' incorporates:
     *  SignalConversion generated from: '<S3>/VeVLDR_b_IUMPR_HTSOV_StkClsd_Out_Init'
     */
    (void)Rte_Write_VeVLDR_b_IUMPR_HTSOV_StkClsd_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_b_IUMPR_);

    /* Outport: '<Root>/VeVLDR_b_IUMPR_HTSOV_StkOpn' incorporates:
     *  SignalConversion generated from: '<S3>/VeVLDR_b_IUMPR_HTSOV_StkOpn_Out_Init'
     */
    (void)Rte_Write_VeVLDR_b_IUMPR_HTSOV_StkOpn_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_b_IUMP_g);

    /* Outport: '<Root>/VeVLDR_b_IUMPR_LTSOV_StkOff_MinCmdThrshld_Met' incorporates:
     *  SignalConversion generated from: '<S3>/VeVLDR_b_IUMPR_LTSOV_StkOff_MinCmdThrshld_Met_Out_Init'
     */
    (void)Rte_Write_VeVLDR_b_IUMPR_LTSOV_StkOff_MinCmdThrshld_Met_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_b_IUM_pw);

    /* Outport: '<Root>/VeVLDR_b_IUMPR_LTSOV_StkOn_MinCmdThrshld_Met' incorporates:
     *  SignalConversion generated from: '<S3>/VeVLDR_b_IUMPR_LTSOV_StkOn_MinCmdThrshld_Met_Out_Init'
     */
    (void)Rte_Write_VeVLDR_b_IUMPR_LTSOV_StkOn_MinCmdThrshld_Met_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_b_IUM_is);

    /* Outport: '<Root>/VeVLDR_b_IUMPR_LTSOV_StuckOff' incorporates:
     *  SignalConversion generated from: '<S3>/VeVLDR_b_IUMPR_LTSOV_StuckOff_Out_Init'
     */
    (void)Rte_Write_VeVLDR_b_IUMPR_LTSOV_StuckOff_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_b_IUM_aj);

    /* Outport: '<Root>/VeVLDR_b_IUMPR_LTSOV_StuckOn' incorporates:
     *  SignalConversion generated from: '<S3>/VeVLDR_b_IUMPR_LTSOV_StuckOn_Out_Init'
     */
    (void)Rte_Write_VeVLDR_b_IUMPR_LTSOV_StuckOn_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_b_IUMP_n);

    /* Outport: '<Root>/VeVLDR_b_IUMPR_OEXV_PerfDiag' incorporates:
     *  SignalConversion generated from: '<S3>/VeVLDR_b_IUMPR_OEXV_PerfDiag_Out_Init'
     */
    (void)Rte_Write_VeVLDR_b_IUMPR_OEXV_PerfDiag_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_b_IUM_eg);

    /* Outport: '<Root>/VeVLDR_b_IUMPR_OEXV_PressSensRat' incorporates:
     *  SignalConversion generated from: '<S3>/VeVLDR_b_IUMPR_OEXV_PressSensRat_Out_Init'
     */
    (void)Rte_Write_VeVLDR_b_IUMPR_OEXV_PressSensRat_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_b_IUMP_m);

    /* Outport: '<Root>/VeVLDR_b_IUMPR_OEXV_perf_MinCmdThrshld_Met' incorporates:
     *  SignalConversion generated from: '<S3>/VeVLDR_b_IUMPR_OEXV_perf_MinCmdThrshld_Met_Out_Init'
     */
    (void)Rte_Write_VeVLDR_b_IUMPR_OEXV_perf_MinCmdThrshld_Met_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_b_IUM_pr);

    /* Outport: '<Root>/VeVLDR_b_IUMPR_OEXV_presSens_MinCmdThrshld_Met' incorporates:
     *  SignalConversion generated from: '<S3>/VeVLDR_b_IUMPR_OEXV_presSens_MinCmdThrshld_Met_Out_Init'
     */
    (void)Rte_Write_VeVLDR_b_IUMPR_OEXV_presSens_MinCmdThrshld_Met_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_b_IUM_ak);

    /* Outport: '<Root>/VeVLDR_b_OEXV_PerfDiag_FltDtct' incorporates:
     *  SignalConversion generated from: '<S3>/VeVLDR_b_OEXV_PerfDiag_FltDtct_Out_Init'
     */
    (void)Rte_Write_VeVLDR_b_OEXV_PerfDiag_FltDtct_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_b_OEXV_k);

    /* Outport: '<Root>/VeVLDR_b_OEXV_PressElctrFlt_FltDtct' incorporates:
     *  SignalConversion generated from: '<S3>/VeVLDR_b_OEXV_PressElctrFlt_FltDtct_Out_Init'
     */
    (void)Rte_Write_VeVLDR_b_OEXV_PressElctrFlt_FltDtct_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_b_OEXV_P);

    /* Outport: '<Root>/VeVLDR_b_OEXV_PressSens_FltDtct' incorporates:
     *  SignalConversion generated from: '<S3>/VeVLDR_b_OEXV_PressSens_FltDtct_Out_Init'
     */
    (void)Rte_Write_VeVLDR_b_OEXV_PressSens_FltDtct_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_b_OEXV_p);

    /* Outport: '<Root>/VeVLDR_b_OEXV_PressShrtHigh' incorporates:
     *  SignalConversion generated from: '<S3>/VeVLDR_b_OEXV_PressShrtHigh_Out_Init'
     */
    (void)Rte_Write_VeVLDR_b_OEXV_PressShrtHigh_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_b_OEXV_e);

    /* Outport: '<Root>/VeVLDR_b_OEXV_TempElctrFlt_FltDtct' incorporates:
     *  SignalConversion generated from: '<S3>/VeVLDR_b_OEXV_TempElctrFlt_FltDtct_Out_Init'
     */
    (void)Rte_Write_VeVLDR_b_OEXV_TempElctrFlt_FltDtct_Value
        (VLDR_ac_B.OutportBufferForVeVLDR_b_OEXV_T);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, VLDR_CODE) VLDR_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/VLDR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_HB_PSC_CtrlValACktPerf' incorporates:
     *  Constant: '<S1644>/Constant'
     */
    VLDR_ac_B.OutportBufferForVeVLDR_e_FaultS = VLDR_ac_ConstB.Constant;

    /* SystemInitialize for SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_AC_RefrigExpVlvAct_C_CntrlCktPerf' incorporates:
     *  Constant: '<S1645>/Constant'
     */
    VLDR_ac_B.OutportBufferForVeVLDR_e_Faul_o = VLDR_ac_ConstB.Constant_d;

    /* SystemInitialize for SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_AC_RefrigPresSnsrCCkt' incorporates:
     *  Constant: '<S1646>/Constant'
     */
    VLDR_ac_B.OutportBufferForVeVLDR_e_Faul_c = VLDR_ac_ConstB.Constant_a;

    /* SystemInitialize for SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_AC_RefrigPresSnsrCCktPerf' incorporates:
     *  Constant: '<S1647>/Constant'
     */
    VLDR_ac_B.OutportBufferForVeVLDR_e_Faul_j = VLDR_ac_ConstB.Constant_c;

    /* SystemInitialize for SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrCCkt' incorporates:
     *  Constant: '<S1648>/Constant'
     */
    VLDR_ac_B.OutportBufferForVeVLDR_e_Faul_m = VLDR_ac_ConstB.Constant_g;

    /* SystemInitialize for SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_CoolantVlvA_StkOpn' incorporates:
     *  Constant: '<S1649>/Constant'
     */
    VLDR_ac_B.OutportBufferForVeVLDR_e_Faul_k = VLDR_ac_ConstB.Constant_b;

    /* SystemInitialize for SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_CoolantVlvA_Perf' incorporates:
     *  Constant: '<S1650>/Constant'
     */
    VLDR_ac_B.OutportBufferForVeVLDR_e_Fau_cg = VLDR_ac_ConstB.Constant_i;

    /* SystemInitialize for SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_HB_PSC_CtrlValCCktPerf' incorporates:
     *  Constant: '<S1651>/Constant'
     */
    VLDR_ac_B.OutportBufferForVeVLDR_e_Fau_cx = VLDR_ac_ConstB.Constant_gv;

    /* SystemInitialize for SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_CoolantVlvB_StkClsd' incorporates:
     *  Constant: '<S1652>/Constant'
     */
    VLDR_ac_B.OutportBufferForVeVLDR_e_Fau_m4 = VLDR_ac_ConstB.Constant_k;

    /* SystemInitialize for SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_CoolantVlvB_StkOpn' incorporates:
     *  Constant: '<S1653>/Constant'
     */
    VLDR_ac_B.OutportBufferForVeVLDR_e_Faul_h = VLDR_ac_ConstB.Constant_f;

    /* SystemInitialize for SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_HB_PSC_CtrlValBCktPerf' incorporates:
     *  Constant: '<S1654>/Constant'
     */
    VLDR_ac_B.OutportBufferForVeVLDR_e_Faul_g = VLDR_ac_ConstB.Constant_k2;

    /* SystemInitialize for SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_HybEvBatPacCoolCtrlVlvBPerfStkOff' incorporates:
     *  Constant: '<S1655>/Constant'
     */
    VLDR_ac_B.OutportBufferForVeVLDR_e_Faul_b = VLDR_ac_ConstB.Constant_ay;

    /* SystemInitialize for SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_HybEvBatPacCoolCtrlVlvBStkOn' incorporates:
     *  Constant: '<S1656>/Constant'
     */
    VLDR_ac_B.OutportBufferForVeVLDR_e_Faul_d = VLDR_ac_ConstB.Constant_cu;

    /* SystemInitialize for SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_AC_RefrigExpVlvActD_CntrlCktPerf' incorporates:
     *  Constant: '<S1657>/Constant'
     */
    VLDR_ac_B.OutportBufferForVeVLDR_e_Fau_bh = VLDR_ac_ConstB.Constant_ax;

    /* SystemInitialize for SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_AC_RefrigPresSnsrDCkt' incorporates:
     *  Constant: '<S1658>/Constant'
     */
    VLDR_ac_B.OutportBufferForVeVLDR_e_Fau_dp = VLDR_ac_ConstB.Constant_fz;

    /* SystemInitialize for SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_AC_RefrigPresSnsrDCktPerf' incorporates:
     *  Constant: '<S1659>/Constant'
     */
    VLDR_ac_B.OutportBufferForVeVLDR_e_Faul_p = VLDR_ac_ConstB.Constant_bs;

    /* SystemInitialize for SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrDCkt' incorporates:
     *  Constant: '<S1660>/Constant'
     */
    VLDR_ac_B.OutportBufferForVeVLDR_e_Faul_e = VLDR_ac_ConstB.Constant_bl;

    /* SystemInitialize for SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_AC_RefrigExpVlvActCtrCktPerf' incorporates:
     *  Constant: '<S1661>/Constant'
     */
    VLDR_ac_B.OutportBufferForVeVLDR_e_Fau_mr = VLDR_ac_ConstB.Constant_dn;

    /* SystemInitialize for SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrBCkt' incorporates:
     *  Constant: '<S1662>/Constant'
     */
    VLDR_ac_B.OutportBufferForVeVLDR_e_Fau_m3 = VLDR_ac_ConstB.Constant_al;

    /* SystemInitialize for SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrBPerf' incorporates:
     *  Constant: '<S1663>/Constant'
     */
    VLDR_ac_B.OutportBufferForVeVLDR_e_Fau_jo = VLDR_ac_ConstB.Constant_m;

    /* SystemInitialize for SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrACkt' incorporates:
     *  Constant: '<S1664>/Constant'
     */
    VLDR_ac_B.OutportBufferForVeVLDR_e_Fau_ds = VLDR_ac_ConstB.Constant_dx;

    /* SystemInitialize for SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrAPerf' incorporates:
     *  Constant: '<S1665>/Constant'
     */
    VLDR_ac_B.OutportBufferForVeVLDR_e_Fau_h1 = VLDR_ac_ConstB.Constant_p;

    /* SystemInitialize for SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_EngCoolbypsVlvDPerf' incorporates:
     *  Constant: '<S1666>/Constant'
     */
    VLDR_ac_B.OutportBufferForVeVLDR_e_Fau_j1 = VLDR_ac_ConstB.Constant_px;

    /* SystemInitialize for SignalConversion generated from: '<S1643>/VeVLDR_e_FaultSts_HybPropSysCoolCntrlVal_E_Perf' incorporates:
     *  Constant: '<S1667>/Constant'
     */
    VLDR_ac_B.OutportBufferForVeVLDR_e_Fau_ep = VLDR_ac_ConstB.Constant_bb;

    /* End of SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/VLDR_MedTED'
     */
    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Diagnostic'
     */
#if Rte_SysCon_Variant_VLDR_12
#endif

#if Rte_SysCon_Variant_VLDR_15
#endif

#if Rte_SysCon_Variant_VLDR_8
#endif

    /* SystemInitialize for Atomic SubSystem: '<S11>/EEXV' */
#if Rte_SysCon_Variant_VLDR_1
#endif

    /* End of SystemInitialize for SubSystem: '<S11>/EEXV' */

    /* SystemInitialize for Atomic SubSystem: '<S12>/EXV' */
#if Rte_SysCon_Variant_VLDR_4
#endif

    /* End of SystemInitialize for SubSystem: '<S12>/EXV' */

    /* SystemInitialize for Atomic SubSystem: '<S13>/HTCV_Diag' */
#if Rte_SysCon_Variant_VLDR_2
#endif

    /* End of SystemInitialize for SubSystem: '<S13>/HTCV_Diag' */
#if Rte_SysCon_Variant_VLDR_11
#endif

    /* SystemInitialize for Atomic SubSystem: '<S15>/HTSoV_Diag' */
#if Rte_SysCon_Variant_VLDR_3
#endif

    /* End of SystemInitialize for SubSystem: '<S15>/HTSoV_Diag' */
#if Rte_SysCon_Variant_VLDR_10
#endif

#if Rte_SysCon_Variant_VLDR_5
#endif

    /* SystemInitialize for Atomic SubSystem: '<S19>/OEXV' */
#if Rte_SysCon_Variant_VLDR_6

    /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
#endif

    /* End of SystemInitialize for SubSystem: '<S19>/OEXV' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* SystemInitialize for Outport: '<Root>/VeVLDR_e_FaultSts_HB_PSC_CtrlValACktPerf' incorporates:
     *  Merge: '<Root>/M_VeVLDR_e_FaultSts_HB_PSC_CtrlValACktPerf'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_HB_PSC_CtrlValACktPerf_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeVLDR_e_FaultSts_AC_RefrigExpVlvAct_C_CntrlCktPerf' incorporates:
     *  Merge: '<Root>/M_VeVLDR_e_FaultSts_AC_RefrigExpVlvAct_C_CntrlCktPerf'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_AC_RefrigExpVlvAct_C_CntrlCktPerf_Value
        (CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeVLDR_e_FaultSts_AC_RefrigPresSnsrCCkt' incorporates:
     *  Merge: '<Root>/M_VeVLDR_e_FaultSts_AC_RefrigPresSnsrCCkt'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_AC_RefrigPresSnsrCCkt_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeVLDR_e_FaultSts_AC_RefrigPresSnsrCCktPerf' incorporates:
     *  Merge: '<Root>/M_VeVLDR_e_FaultSts_AC_RefrigPresSnsrCCktPerf'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_AC_RefrigPresSnsrCCktPerf_Value
        (CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrCCkt' incorporates:
     *  Merge: '<Root>/M_VeVLDR_e_FaultSts_AC_RefrigTempSnsrCCkt'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_AC_RefrigTempSnsrCCkt_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeVLDR_e_FaultSts_CoolantVlvA_StkOpn' incorporates:
     *  Merge: '<Root>/M_VeVLDR_e_FaultSts_CoolantVlvA_StkOpn'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_CoolantVlvA_StkOpn_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeVLDR_e_FaultSts_CoolantVlvA_Perf' incorporates:
     *  Merge: '<Root>/M_VeVLDR_e_FaultSts_CoolantVlvA_Perf'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_CoolantVlvA_Perf_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeVLDR_e_FaultSts_HB_PSC_CtrlValCCktPerf' incorporates:
     *  Merge: '<Root>/M_VeVLDR_e_FaultSts_HB_PSC_CtrlValCCktPerf'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_HB_PSC_CtrlValCCktPerf_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeVLDR_e_FaultSts_CoolantVlvB_StkClsd' incorporates:
     *  Merge: '<Root>/M_VeVLDR_e_FaultSts_CoolantVlvB_StkClsd'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_CoolantVlvB_StkClsd_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeVLDR_e_FaultSts_CoolantVlvB_StkOpn' incorporates:
     *  Merge: '<Root>/M_VeVLDR_e_FaultSts_CoolantVlvB_StkOpn'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_CoolantVlvB_StkOpn_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeVLDR_e_FaultSts_HB_PSC_CtrlValBCktPerf' incorporates:
     *  Merge: '<Root>/M_VeVLDR_e_FaultSts_HB_PSC_CtrlValBCktPerf'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_HB_PSC_CtrlValBCktPerf_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeVLDR_e_FaultSts_HybEvBatPacCoolCtrlVlvBPerfStkOff' incorporates:
     *  Merge: '<Root>/M_VeVLDR_e_FaultSts_HybEvBatPacCoolCtrlVlvBPerfStkOff'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_HybEvBatPacCoolCtrlVlvBPerfStkOff_Value
        (CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeVLDR_e_FaultSts_HybEvBatPacCoolCtrlVlvBStkOn' incorporates:
     *  Merge: '<Root>/M_VeVLDR_e_FaultSts_HybEvBatPacCoolCtrlVlvBStkOn'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_HybEvBatPacCoolCtrlVlvBStkOn_Value
        (CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeVLDR_e_FaultSts_AC_RefrigExpVlvActD_CntrlCktPerf' incorporates:
     *  Merge: '<Root>/M_VeVLDR_e_FaultSts_AC_RefrigExpVlvActD_CntrlCktPerf'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_AC_RefrigExpVlvActD_CntrlCktPerf_Value
        (CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeVLDR_e_FaultSts_AC_RefrigPresSnsrDCkt' incorporates:
     *  Merge: '<Root>/M_VeVLDR_e_FaultSts_AC_RefrigPresSnsrDCkt'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_AC_RefrigPresSnsrDCkt_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeVLDR_e_FaultSts_AC_RefrigPresSnsrDCktPerf' incorporates:
     *  Merge: '<Root>/M_VeVLDR_e_FaultSts_AC_RefrigPresSnsrDCktPerf'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_AC_RefrigPresSnsrDCktPerf_Value
        (CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrDCkt' incorporates:
     *  Merge: '<Root>/M_VeVLDR_e_FaultSts_AC_RefrigTempSnsrDCkt'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_AC_RefrigTempSnsrDCkt_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeVLDR_e_FaultSts_AC_RefrigExpVlvActCtrCktPerf' incorporates:
     *  Merge: '<Root>/M_VeVLDR_e_FaultSts_AC_RefrigExpVlvActCtrCktPerf'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_AC_RefrigExpVlvActCtrCktPerf_Value
        (CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrBCkt' incorporates:
     *  Merge: '<Root>/M_VeVLDR_e_FaultSts_AC_RefrigTempSnsrBCkt'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_AC_RefrigTempSnsrBCkt_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrBPerf' incorporates:
     *  Merge: '<Root>/M_VeVLDR_e_FaultSts_AC_RefrigTempSnsrBPerf'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_AC_RefrigTempSnsrBPerf_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrACkt' incorporates:
     *  Merge: '<Root>/M_VeVLDR_e_FaultSts_AC_RefrigTempSnsrACkt'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_AC_RefrigTempSnsrACkt_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeVLDR_e_FaultSts_AC_RefrigTempSnsrAPerf' incorporates:
     *  Merge: '<Root>/M_VeVLDR_e_FaultSts_AC_RefrigTempSnsrAPerf'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_AC_RefrigTempSnsrAPerf_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeVLDR_e_FaultSts_EngCoolbypsVlvDPerf' incorporates:
     *  Merge: '<Root>/M_VeVLDR_e_FaultSts_AC_RefrigTempSnsrAPerf1'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_EngCoolbypsVlvDPerf_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeVLDR_e_FaultSts_HybPropSysCoolCntrlVal_E_Perf' incorporates:
     *  Merge: '<Root>/M_VeVLDR_e_FaultSts_HybPropSysCoolCntrlVal_E_Perf'
     */
    (void)Rte_Write_VeVLDR_e_FaultSts_HybPropSysCoolCntrlVal_E_Perf_Value
        (CeDFIB_e_Init);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
