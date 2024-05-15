/*
 * File: CDMR_ac.c
 *
 * Code generated for Simulink model 'CDMR_ac'.
 *
 * Model version                  : 9.138
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sun Apr  7 07:07:36 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CDMR_ac.h"

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2016a.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_CDMR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_CDMR_4

static volatile CONST(uint8, CDMR_VAR_INIT) HeCDMR_i_BCIMCommBusLIN_Slct = 1U;/* Referenced by: '<S215>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static volatile CONST(uint8, CDMR_VAR_INIT) HeCDMR_i_CPIMCommBusLIN_Slct = 3U;/* Referenced by: '<S216>/Calib' */

#endif

#if (Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4) || (Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4)

static volatile CONST(float32, CDMR_VAR_INIT) HeCDMR_t_MedTEH = 0.1F;/* Referenced by:
                                                                      * '<S473>/Calib'
                                                                      * '<S593>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_CDMR_4

static volatile CONST(uint16, CDMR_VAR_INIT) KeCDMR_Cnt_BCIM_Fail = 50U;/* Referenced by: '<S290>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static volatile CONST(uint16, CDMR_VAR_INIT) KeCDMR_Cnt_BCIM_Pass = 60U;/* Referenced by: '<S291>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_1 && Rte_SysCon_Variant_CDMR_4

static volatile CONST(uint16, CDMR_VAR_INIT) KeCDMR_Cnt_ButtonStkDTC_Fail = 50U;/* Referenced by: '<S232>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_1 && Rte_SysCon_Variant_CDMR_4

static volatile CONST(uint16, CDMR_VAR_INIT) KeCDMR_Cnt_ButtonStkDTC_Pass = 70U;/* Referenced by: '<S233>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static volatile CONST(uint16, CDMR_VAR_INIT) KeCDMR_Cnt_ChgPrtLckFAHighFail =
    20U;                               /* Referenced by: '<S20>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static volatile CONST(uint16, CDMR_VAR_INIT) KeCDMR_Cnt_ChgPrtLckFAHighSmpl =
    21U;                               /* Referenced by: '<S21>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static volatile CONST(uint16, CDMR_VAR_INIT) KeCDMR_Cnt_ChgPrtLckFALowFail = 20U;/* Referenced by: '<S22>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static volatile CONST(uint16, CDMR_VAR_INIT) KeCDMR_Cnt_ChgPrtLckFALowSmpl = 21U;/* Referenced by: '<S23>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static volatile CONST(uint16, CDMR_VAR_INIT) KeCDMR_Cnt_ChrgOT_Fail = 20U;/* Referenced by: '<S397>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static volatile CONST(uint16, CDMR_VAR_INIT) KeCDMR_Cnt_ChrgOT_Pass = 20U;/* Referenced by: '<S398>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static volatile CONST(uint16, CDMR_VAR_INIT) KeCDMR_Cnt_ChrgPortLock_DTC = 1400U;/* Referenced by: '<S146>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static volatile CONST(uint16, CDMR_VAR_INIT) KeCDMR_Cnt_ChrgPortLock_SmpCnt =
    1401U;                             /* Referenced by: '<S147>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static volatile CONST(uint16, CDMR_VAR_INIT) KeCDMR_Cnt_ChrgPortUnlock_DTC =
    1400U;                             /* Referenced by: '<S187>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static volatile CONST(uint16, CDMR_VAR_INIT) KeCDMR_Cnt_ChrgPortUnlock_SmpCnt =
    1401U;                             /* Referenced by: '<S188>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static volatile CONST(uint16, CDMR_VAR_INIT) KeCDMR_Cnt_ColorMismatch_Fail = 50U;/* Referenced by: '<S336>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static volatile CONST(uint16, CDMR_VAR_INIT) KeCDMR_Cnt_ColorMismatch_Pass = 12U;/* Referenced by: '<S337>/Calib' */

#endif

#if (Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4) || (Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4)

static volatile CONST(uint16, CDMR_VAR_INIT) KeCDMR_Cnt_DigCommFailLmt = 20U;/* Referenced by:
                                                                      * '<S481>/Calib'
                                                                      * '<S601>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_CDMR_4

static volatile CONST(uint16, CDMR_VAR_INIT) KeCDMR_Cnt_LINClrDbnc_BCIM = 8U;/* Referenced by: '<S311>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static volatile CONST(uint16, CDMR_VAR_INIT) KeCDMR_Cnt_LINColorDbncTime = 4U;/* Referenced by:
                                                                      * '<S360>/Calib'
                                                                      * '<S373>/Calib'
                                                                      * '<S380>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_CDMR_4

static volatile CONST(uint16, CDMR_VAR_INIT) KeCDMR_Cnt_LINColorSignalStableTime
    = 3U;                              /* Referenced by: '<S381>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

static volatile CONST(uint16, CDMR_VAR_INIT)
    KeCDMR_Cnt_PwrOutletPanelMod1DigCommBus_Fail = 20U;/* Referenced by: '<S548>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

static volatile CONST(uint16, CDMR_VAR_INIT)
    KeCDMR_Cnt_PwrOutletPanelMod1DigCommBus_Smpl = 21U;/* Referenced by: '<S549>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

static volatile CONST(uint16, CDMR_VAR_INIT)
    KeCDMR_Cnt_PwrOutletPanelMod1InACPwrCktPerf_Fail = 20U;/* Referenced by: '<S550>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

static volatile CONST(uint16, CDMR_VAR_INIT)
    KeCDMR_Cnt_PwrOutletPanelMod1InACPwrCktPerf_Smpl = 21U;/* Referenced by: '<S551>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

static volatile CONST(uint16, CDMR_VAR_INIT)
    KeCDMR_Cnt_PwrOutletPanelMod1LmpCntrl_Fail = 20U;/* Referenced by: '<S552>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

static volatile CONST(uint16, CDMR_VAR_INIT)
    KeCDMR_Cnt_PwrOutletPanelMod1LmpCntrl_Smpl = 21U;/* Referenced by: '<S553>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

static volatile CONST(uint16, CDMR_VAR_INIT)
    KeCDMR_Cnt_PwrOutletPanelMod1Perf_Fail = 20U;/* Referenced by: '<S554>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

static volatile CONST(uint16, CDMR_VAR_INIT)
    KeCDMR_Cnt_PwrOutletPanelMod1Perf_Smpl = 21U;/* Referenced by: '<S555>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

static volatile CONST(uint16, CDMR_VAR_INIT)
    KeCDMR_Cnt_PwrOutletPanelMod2DigCommBus_Fail = 20U;/* Referenced by: '<S427>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

static volatile CONST(uint16, CDMR_VAR_INIT)
    KeCDMR_Cnt_PwrOutletPanelMod2DigCommBus_Smpl = 21U;/* Referenced by: '<S428>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

static volatile CONST(uint16, CDMR_VAR_INIT)
    KeCDMR_Cnt_PwrOutletPanelMod2InACPwrCktPerf_Fail = 20U;/* Referenced by: '<S429>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

static volatile CONST(uint16, CDMR_VAR_INIT)
    KeCDMR_Cnt_PwrOutletPanelMod2InACPwrCktPerf_Smpl = 21U;/* Referenced by: '<S430>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

static volatile CONST(uint16, CDMR_VAR_INIT)
    KeCDMR_Cnt_PwrOutletPanelMod2LmpCntrl_Fail = 20U;/* Referenced by: '<S431>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

static volatile CONST(uint16, CDMR_VAR_INIT)
    KeCDMR_Cnt_PwrOutletPanelMod2LmpCntrl_Smpl = 21U;/* Referenced by: '<S432>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

static volatile CONST(uint16, CDMR_VAR_INIT)
    KeCDMR_Cnt_PwrOutletPanelMod2Perf_Fail = 20U;/* Referenced by: '<S433>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

static volatile CONST(uint16, CDMR_VAR_INIT)
    KeCDMR_Cnt_PwrOutletPanelMod2Perf_Smpl = 21U;/* Referenced by: '<S434>/Calib' */

#endif

#if (Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4) || (Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4)

static volatile CONST(uint16, CDMR_VAR_INIT) KeCDMR_Cnt_SPP_LEDFdbckDbncTime =
    1U;                                /* Referenced by:
                                        * '<S467>/Calib'
                                        * '<S587>/Calib'
                                        */

#endif

#if (Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4) || (Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4)

static volatile CONST(float32, CDMR_VAR_INIT)
    KeCDMR_I_IDCMACOutCurrentChckThrsld = 12.5F;/* Referenced by:
                                                 * '<S474>/Calib'
                                                 * '<S594>/Calib'
                                                 */

#endif

#if (Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4) || (Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4)

static volatile CONST(float32, CDMR_VAR_INIT) KeCDMR_Pct_ACOutCurrL1DiffLmt =
    20.0F;                             /* Referenced by:
                                        * '<S475>/Calib'
                                        * '<S595>/Calib'
                                        */

#endif

#if (Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4) || (Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4)

static volatile CONST(float32, CDMR_VAR_INIT) KeCDMR_U_ACOutVoltageL1DtctThrshld
    = 30.0F;                           /* Referenced by:
                                        * '<S472>/Calib'
                                        * '<S592>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_CDMR_4

static volatile CONST(boolean, CDMR_VAR_INIT) KeCDMR_b_ActvnBCIM5Led = 1;/* Referenced by: '<S312>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static volatile CONST(boolean, CDMR_VAR_INIT)
    KeCDMR_b_BatChaCouTemATooHig_LtchEnbl = 1;/* Referenced by: '<S399>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_1 && Rte_SysCon_Variant_CDMR_4

static volatile CONST(boolean, CDMR_VAR_INIT) KeCDMR_b_BatChrgModSwStk_LtchEnbl =
    1;                                 /* Referenced by: '<S234>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static volatile CONST(boolean, CDMR_VAR_INIT)
    KeCDMR_b_BattChrgPrtLckCktLo_LtchEnbl = 1;/* Referenced by: '<S24>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static volatile CONST(boolean, CDMR_VAR_INIT)
    KeCDMR_b_BattChrgPrtLckCkttHi_LtchEnbl = 1;/* Referenced by: '<S25>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_1 && Rte_SysCon_Variant_CDMR_4

static volatile CONST(boolean, CDMR_VAR_INIT) KeCDMR_b_ButtonStuckFailEn = 1;/* Referenced by: '<S235>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static volatile CONST(boolean, CDMR_VAR_INIT) KeCDMR_b_ChargingSystemSts_Ovrd =
    0;                                 /* Referenced by: '<S217>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static volatile CONST(boolean, CDMR_VAR_INIT) KeCDMR_b_ChrgPortLK_FltDtct_Ovrd =
    0;                                 /* Referenced by: '<S257>/Calib' */

#endif

static volatile CONST(boolean, CDMR_VAR_INIT) KeCDMR_b_ChrgPortLK_FltDtct_Val =
    0;                                 /* Referenced by:
                                        * '<S258>/Calib'
                                        * '<S678>/Calib'
                                        */

#if Rte_SysCon_Variant_CDMR_4

static volatile CONST(boolean, CDMR_VAR_INIT)
    KeCDMR_b_ChrgPortLckCtrlCktPerf_LtchEnbl = 1;/* Referenced by: '<S148>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static volatile CONST(boolean, CDMR_VAR_INIT)
    KeCDMR_b_ChrgPortULCtrlCktPerf_LtchEnbl = 1;/* Referenced by: '<S189>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static volatile CONST(boolean, CDMR_VAR_INIT) KeCDMR_b_ChrgPortUL_FltDtct_Ovrd =
    0;                                 /* Referenced by: '<S259>/Calib' */

#endif

static volatile CONST(boolean, CDMR_VAR_INIT) KeCDMR_b_ChrgPortUL_FltDtct_Val =
    0;                                 /* Referenced by:
                                        * '<S260>/Calib'
                                        * '<S679>/Calib'
                                        */

#if Rte_SysCon_Variant_CDMR_4

static volatile CONST(boolean, CDMR_VAR_INIT) KeCDMR_b_ChrgPrtLckFailEn = 1;/* Referenced by: '<S26>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static volatile CONST(boolean, CDMR_VAR_INIT) KeCDMR_b_ChrgPrtLckHi_Ovrd = 0;/* Referenced by: '<S261>/Calib' */

#endif

static volatile CONST(boolean, CDMR_VAR_INIT) KeCDMR_b_ChrgPrtLckHi_Val = 0;/* Referenced by:
                                                                      * '<S262>/Calib'
                                                                      * '<S680>/Calib'
                                                                      */

#if Rte_SysCon_Variant_CDMR_4

static volatile CONST(boolean, CDMR_VAR_INIT) KeCDMR_b_ChrgPrtLckLow_Ovrd = 0;/* Referenced by: '<S263>/Calib' */

#endif

static volatile CONST(boolean, CDMR_VAR_INIT) KeCDMR_b_ChrgPrtLckLow_Val = 0;/* Referenced by:
                                                                      * '<S264>/Calib'
                                                                      * '<S681>/Calib'
                                                                      */

#if Rte_SysCon_Variant_CDMR_4

static volatile CONST(boolean, CDMR_VAR_INIT) KeCDMR_b_DsblDiagFailSafe_Ovrd = 0;/* Referenced by: '<S218>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static volatile CONST(boolean, CDMR_VAR_INIT) KeCDMR_b_DsblDiagFailSafe_Val = 0;/* Referenced by: '<S219>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static volatile CONST(boolean, CDMR_VAR_INIT) KeCDMR_b_EnblDemature_Lock = 1;/* Referenced by: '<S149>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static volatile CONST(boolean, CDMR_VAR_INIT) KeCDMR_b_EnblDemature_ULock = 1;/* Referenced by: '<S190>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

static volatile CONST(boolean, CDMR_VAR_INIT)
    KeCDMR_b_Enbl_PwrOutletPanelMod1DigCommBus = 1;/* Referenced by: '<S567>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

static volatile CONST(boolean, CDMR_VAR_INIT)
    KeCDMR_b_Enbl_PwrOutletPanelMod1InACPwrCktPerf = 1;/* Referenced by: '<S574>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

static volatile CONST(boolean, CDMR_VAR_INIT)
    KeCDMR_b_Enbl_PwrOutletPanelMod1LmpCntrl = 1;/* Referenced by: '<S572>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

static volatile CONST(boolean, CDMR_VAR_INIT)
    KeCDMR_b_Enbl_PwrOutletPanelMod1Perf = 1;/* Referenced by: '<S565>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

static volatile CONST(boolean, CDMR_VAR_INIT)
    KeCDMR_b_Enbl_PwrOutletPanelMod2DigCommBus = 1;/* Referenced by: '<S447>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

static volatile CONST(boolean, CDMR_VAR_INIT)
    KeCDMR_b_Enbl_PwrOutletPanelMod2InACPwrCktPerf = 1;/* Referenced by: '<S454>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

static volatile CONST(boolean, CDMR_VAR_INIT)
    KeCDMR_b_Enbl_PwrOutletPanelMod2LmpCntrl = 1;/* Referenced by: '<S452>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

static volatile CONST(boolean, CDMR_VAR_INIT)
    KeCDMR_b_Enbl_PwrOutletPanelMod2Perf = 1;/* Referenced by: '<S445>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static volatile CONST(boolean, CDMR_VAR_INIT) KeCDMR_b_HBridgeFaultDiagEnbl = 0;/* Referenced by: '<S174>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static volatile CONST(boolean, CDMR_VAR_INIT) KeCDMR_b_IUMPR_ChrgPortLock_Ovrd =
    0;                                 /* Referenced by: '<S265>/Calib' */

#endif

static volatile CONST(boolean, CDMR_VAR_INIT) KeCDMR_b_IUMPR_ChrgPortLock_Val =
    0;                                 /* Referenced by:
                                        * '<S266>/Calib'
                                        * '<S682>/Calib'
                                        */

#if Rte_SysCon_Variant_CDMR_4

static volatile CONST(boolean, CDMR_VAR_INIT) KeCDMR_b_IUMPR_ChrgPortULock_Ovrd =
    0;                                 /* Referenced by: '<S267>/Calib' */

#endif

static volatile CONST(boolean, CDMR_VAR_INIT) KeCDMR_b_IUMPR_ChrgPortULock_Val =
    0;                                 /* Referenced by:
                                        * '<S268>/Calib'
                                        * '<S683>/Calib'
                                        */

#if Rte_SysCon_Variant_CDMR_4

static volatile CONST(boolean, CDMR_VAR_INIT) KeCDMR_b_IUMPR_DeviceCmdOnLK_Ovrd =
    0;                                 /* Referenced by: '<S269>/Calib' */

#endif

static volatile CONST(boolean, CDMR_VAR_INIT) KeCDMR_b_IUMPR_DeviceCmdOnLK_Val =
    0;                                 /* Referenced by:
                                        * '<S270>/Calib'
                                        * '<S684>/Calib'
                                        */

#if Rte_SysCon_Variant_CDMR_4

static volatile CONST(boolean, CDMR_VAR_INIT) KeCDMR_b_IUMPR_DeviceCmdOnUL_Ovrd =
    0;                                 /* Referenced by: '<S271>/Calib' */

#endif

static volatile CONST(boolean, CDMR_VAR_INIT) KeCDMR_b_IUMPR_DeviceCmdOnUL_Val =
    0;                                 /* Referenced by:
                                        * '<S272>/Calib'
                                        * '<S685>/Calib'
                                        */

#if Rte_SysCon_Variant_CDMR_1 && Rte_SysCon_Variant_CDMR_4

static volatile CONST(boolean, CDMR_VAR_INIT) KeCDMR_b_IgnBtnCond = 0;/* Referenced by: '<S236>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static volatile CONST(boolean, CDMR_VAR_INIT)
    KeCDMR_b_IsDiagGlobalConditionsValid_Ovrd = 0;/* Referenced by: '<S220>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static volatile CONST(boolean, CDMR_VAR_INIT)
    KeCDMR_b_IsDiagGlobalConditionsValid_Val = 0;/* Referenced by: '<S221>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static volatile CONST(boolean, CDMR_VAR_INIT)
    KeCDMR_b_Module_Failure_BCIM_LtchEnbl = 1;/* Referenced by: '<S292>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static volatile CONST(boolean, CDMR_VAR_INIT)
    KeCDMR_b_Module_Failure_CPIM_LtchEnbl = 1;/* Referenced by: '<S338>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static volatile CONST(boolean, CDMR_VAR_INIT) KeCDMR_b_PluggedIn = 1;/* Referenced by: '<S339>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static volatile CONST(boolean, CDMR_VAR_INIT) KeCDMR_b_PluggedIn_Ovrd = 0;/* Referenced by: '<S222>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static volatile CONST(boolean, CDMR_VAR_INIT) KeCDMR_b_PluggedIn_Val = 0;/* Referenced by: '<S223>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static volatile CONST(boolean, CDMR_VAR_INIT) KeCDMR_b_PostCodeClrDiagDsbl_Ovrd =
    0;                                 /* Referenced by: '<S224>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static volatile CONST(boolean, CDMR_VAR_INIT) KeCDMR_b_PostCodeClrDiagDsbl_Val =
    0;                                 /* Referenced by: '<S225>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

static volatile CONST(boolean, CDMR_VAR_INIT)
    KeCDMR_b_PwrOutletPanelMod1DigCommBus_LatchEnbl = 0;/* Referenced by: '<S556>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

static volatile CONST(boolean, CDMR_VAR_INIT)
    KeCDMR_b_PwrOutletPanelMod1InACPwrCktPerf_LatchEnbl = 0;/* Referenced by: '<S557>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

static volatile CONST(boolean, CDMR_VAR_INIT)
    KeCDMR_b_PwrOutletPanelMod1LmpCntrl_LatchEnbl = 0;/* Referenced by: '<S558>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

static volatile CONST(boolean, CDMR_VAR_INIT)
    KeCDMR_b_PwrOutletPanelMod1Perf_LatchEnbl = 0;/* Referenced by: '<S559>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

static volatile CONST(boolean, CDMR_VAR_INIT)
    KeCDMR_b_PwrOutletPanelMod2DigCommBus_LatchEnbl = 0;/* Referenced by: '<S435>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

static volatile CONST(boolean, CDMR_VAR_INIT)
    KeCDMR_b_PwrOutletPanelMod2InACPwrCktPerf_LatchEnbl = 0;/* Referenced by: '<S436>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

static volatile CONST(boolean, CDMR_VAR_INIT)
    KeCDMR_b_PwrOutletPanelMod2LmpCntrl_LatchEnbl = 0;/* Referenced by: '<S437>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

static volatile CONST(boolean, CDMR_VAR_INIT)
    KeCDMR_b_PwrOutletPanelMod2Perf_LatchEnbl = 0;/* Referenced by: '<S438>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static volatile CONST(boolean, CDMR_VAR_INIT) KeCDMR_b_SnsronLINBus = 0;/* Referenced by: '<S400>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static volatile CONST(boolean, CDMR_VAR_INIT) KeCDMR_b_ULck_Lck_DTC_HBridgeFlt =
    0;                                 /* Referenced by: '<S175>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static volatile CONST(TeOBCR_e_ChargingSystemSts, CDMR_VAR_INIT)
    KeCDMR_e_ChargingSystemSts_Val = CeOBCR_e_NotCharging;/* Referenced by: '<S226>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static volatile CONST(TeOBCR_e_ChrgPortLockType, CDMR_VAR_INIT)
    KeCDMR_e_ChrgPortLock_Type = CeOBCR_e_ChrgPortLock_TypeA;/* Referenced by: '<S12>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static volatile CONST(TeOFCR_e_CPIMType, CDMR_VAR_INIT) KeCDMR_e_SelectCPIMType =
    CeOFCR_e_CPIMType_A;               /* Referenced by: '<S340>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_1 && Rte_SysCon_Variant_CDMR_4

static volatile CONST(float32, CDMR_VAR_INIT) KeCDMR_t_ButtonFaultMonitor =
    900.0F;                            /* Referenced by: '<S237>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_1 && Rte_SysCon_Variant_CDMR_4

static volatile CONST(float32, CDMR_VAR_INIT) KeCDMR_t_ButtonRaster = 0.1F;/* Referenced by: '<S238>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static volatile CONST(float32, CDMR_VAR_INIT) KeCDMR_t_ChrgPrt_IUMPR_LongTmr =
    10.0F;                             /* Referenced by: '<S62>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static volatile CONST(float32, CDMR_VAR_INIT) KeCDMR_t_ChrgPrt_IUMPR_ShrtTmr =
    2.0F;                              /* Referenced by: '<S63>/Calib' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static volatile CONST(float32, CDMR_VAR_INIT) KeCDMR_t_IUMPR_CP_dT = 0.025F;/* Referenced by: '<S64>/Calib' */

#endif

#if (Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4) || (Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4)

static volatile CONST(float32, CDMR_VAR_INIT) KeCDMR_t_PPCurrSnsrFltThrshld =
    1.0F;                              /* Referenced by:
                                        * '<S476>/Calib'
                                        * '<S596>/Calib'
                                        */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_CDMR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CDMR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_CDMR_1 && Rte_SysCon_Variant_CDMR_4

static VAR(uint16, CDMR_VAR_INIT) VeCDMR_Cnt_BatChrgModSwStk_FailCnt;/* '<S250>/Switch1' */

#endif

#if Rte_SysCon_Variant_CDMR_1 && Rte_SysCon_Variant_CDMR_4

static VAR(uint16, CDMR_VAR_INIT) VeCDMR_Cnt_BatChrgModSwStk_MFOP;/* '<S256>/Switch1' */

#endif

#if Rte_SysCon_Variant_CDMR_1 && Rte_SysCon_Variant_CDMR_4

static VAR(uint16, CDMR_VAR_INIT) VeCDMR_Cnt_BatChrgModSwStk_SmpCnt;/* '<S251>/Switch1' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(uint16, CDMR_VAR_INIT) VeCDMR_Cnt_BattChrgPrtLckCktHi_FailCnt;/* '<S51>/Switch1' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(uint16, CDMR_VAR_INIT) VeCDMR_Cnt_BattChrgPrtLckCktHi_SmpCnt;/* '<S52>/Switch1' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(uint16, CDMR_VAR_INIT) VeCDMR_Cnt_BattChrgPrtLckCktLo_FailCnt;/* '<S37>/Switch1' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(uint16, CDMR_VAR_INIT) VeCDMR_Cnt_BattChrgPrtLckCktLo_SmpCnt;/* '<S38>/Switch1' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(uint16, CDMR_VAR_INIT) VeCDMR_Cnt_ChrgPortLck_FailCnt;/* '<S160>/Switch1' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(uint16, CDMR_VAR_INIT) VeCDMR_Cnt_ChrgPortLck_SmpCnt;/* '<S161>/Switch1' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(uint16, CDMR_VAR_INIT) VeCDMR_Cnt_ChrgPortUL_FailCnt;/* '<S201>/Switch1' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(uint16, CDMR_VAR_INIT) VeCDMR_Cnt_ChrgPortUL_SmpCnt;/* '<S202>/Switch1' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(uint16, CDMR_VAR_INIT) VeCDMR_Cnt_InternalFailureBCIM_FailCnt;/* '<S302>/Switch1' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(uint16, CDMR_VAR_INIT) VeCDMR_Cnt_InternalFailureBCIM_SmpCnt;/* '<S303>/Switch1' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(uint16, CDMR_VAR_INIT) VeCDMR_Cnt_InternalFailureCPIM_FailCnt;/* '<S351>/Switch1' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(uint16, CDMR_VAR_INIT) VeCDMR_Cnt_InternalFailureCPIM_SmpCnt;/* '<S352>/Switch1' */

#endif

#if Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

static VAR(uint16, CDMR_VAR_INIT)
    VeCDMR_Cnt_PwrOutletPanelMod1DigCommBus_FailCnt;/* '<S610>/Switch1' */

#endif

#if Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

static VAR(uint16, CDMR_VAR_INIT) VeCDMR_Cnt_PwrOutletPanelMod1DigCommBus_SmpCnt;/* '<S611>/Switch1' */

#endif

#if Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

static VAR(uint16, CDMR_VAR_INIT)
    VeCDMR_Cnt_PwrOutletPanelMod1InACPwrCktPerf_FailCnt;/* '<S624>/Switch1' */

#endif

#if Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

static VAR(uint16, CDMR_VAR_INIT)
    VeCDMR_Cnt_PwrOutletPanelMod1InACPwrCktPerf_SmpCnt;/* '<S625>/Switch1' */

#endif

#if Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

static VAR(uint16, CDMR_VAR_INIT) VeCDMR_Cnt_PwrOutletPanelMod1LmpCntrl_FailCnt;/* '<S638>/Switch1' */

#endif

#if Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

static VAR(uint16, CDMR_VAR_INIT) VeCDMR_Cnt_PwrOutletPanelMod1LmpCntrl_SmpCnt;/* '<S639>/Switch1' */

#endif

#if Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

static VAR(uint16, CDMR_VAR_INIT) VeCDMR_Cnt_PwrOutletPanelMod1Perf_FailCnt;/* '<S652>/Switch1' */

#endif

#if Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

static VAR(uint16, CDMR_VAR_INIT) VeCDMR_Cnt_PwrOutletPanelMod1Perf_SmpCnt;/* '<S653>/Switch1' */

#endif

#if Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

static VAR(uint16, CDMR_VAR_INIT)
    VeCDMR_Cnt_PwrOutletPanelMod2DigCommBus_FailCnt;/* '<S490>/Switch1' */

#endif

#if Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

static VAR(uint16, CDMR_VAR_INIT) VeCDMR_Cnt_PwrOutletPanelMod2DigCommBus_SmpCnt;/* '<S491>/Switch1' */

#endif

#if Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

static VAR(uint16, CDMR_VAR_INIT)
    VeCDMR_Cnt_PwrOutletPanelMod2InACPwrCktPerf_FailCnt;/* '<S504>/Switch1' */

#endif

#if Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

static VAR(uint16, CDMR_VAR_INIT)
    VeCDMR_Cnt_PwrOutletPanelMod2InACPwrCktPerf_SmpCnt;/* '<S505>/Switch1' */

#endif

#if Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

static VAR(uint16, CDMR_VAR_INIT) VeCDMR_Cnt_PwrOutletPanelMod2LmpCntrl_FailCnt;/* '<S518>/Switch1' */

#endif

#if Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

static VAR(uint16, CDMR_VAR_INIT) VeCDMR_Cnt_PwrOutletPanelMod2LmpCntrl_SmpCnt;/* '<S519>/Switch1' */

#endif

#if Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

static VAR(uint16, CDMR_VAR_INIT) VeCDMR_Cnt_PwrOutletPanelMod2Perf_FailCnt;/* '<S532>/Switch1' */

#endif

#if Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

static VAR(uint16, CDMR_VAR_INIT) VeCDMR_Cnt_PwrOutletPanelMod2Perf_SmpCnt;/* '<S533>/Switch1' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(uint16, CDMR_VAR_INIT) VeCDMR_Cnt_ThermalSensor_FailCnt;/* '<S411>/Switch1' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(uint16, CDMR_VAR_INIT) VeCDMR_Cnt_ThermalSensor_SmpCnt;/* '<S412>/Switch1' */

#endif

#if Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

static VAR(float32, CDMR_VAR_INIT) VeCDMR_Pct_PP1_L1_CurrPct;/* '<S425>/Product' */

#endif

#if Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

static VAR(float32, CDMR_VAR_INIT) VeCDMR_Pct_PP2_L1_CurrPct;/* '<S546>/Product' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_BCIMColorIndMismatch;/* '<S318>/AND' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_BCIMFaultTest4;/* '<S275>/Logical11' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_BCIM_Ind1Mismatch;/* '<S313>/AND' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_BCIM_Ind1_Fault;/* '<S276>/Logical8' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_BCIM_Ind2Mismatch;/* '<S314>/AND' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_BCIM_Ind2_Fault;/* '<S276>/Logical7' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_BCIM_Ind3Mismatch;/* '<S315>/AND' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_BCIM_Ind3_Fault;/* '<S276>/Logical9' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_BCIM_Ind4Mismatch;/* '<S316>/AND' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_BCIM_Ind4_Fault;/* '<S276>/Logical1' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_BCIM_Ind5Mismatch;/* '<S317>/AND' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_BCIM_Ind5_Fault;/* '<S276>/Logical4' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_BCIM_LINBus_LOC;/* '<S275>/Logical6' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_BCIM_Mismatch;/* '<S276>/Logical3' */

#endif

#if Rte_SysCon_Variant_CDMR_1 && Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_BatChrgModSwStk_En;/* '<S227>/NOT4' */

#endif

#if Rte_SysCon_Variant_CDMR_1 && Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_BatChrgModSwStk_FltDtct;/* '<S241>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_BlueMismatch;/* '<S282>/Logical Operator2' */

#endif

#if Rte_SysCon_Variant_CDMR_1 && Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_ButtonStuck;/* '<S240>/AND' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_CPIM_BlueLED_Fault;/* '<S282>/Logical9' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_CPIM_GreenLED_Fault;/* '<S282>/Logical7' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_CPIM_Icon1_Mismatch;/* '<S374>/AND' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_CPIM_Icon2_Mismatch;/* '<S375>/AND' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_CPIM_Ind1_Fault;/* '<S280>/Logical8' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_CPIM_Ind2_Fault;/* '<S280>/Logical7' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_CPIM_Ind3_Fault;/* '<S280>/Logical9' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_CPIM_Ind4_Fault;/* '<S280>/Logical1' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_CPIM_Ind5_Fault;/* '<S280>/Logical2' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_CPIM_LINBus_LOC;/* '<S279>/Logical6' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_CPIM_RedLED_Fault;/* '<S282>/Logical8' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_ChrgPortLck_FltDtct;/* '<S152>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_ChrgPortUL_Flt;/* '<S193>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_FaultTest4;/* '<S279>/Logical11' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_FiveLED_Mismatch;/* '<S280>/Logical3' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_FltDtct_BCIMInternal;/* '<S294>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_FltDtct_CPIMInternal;/* '<S343>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_FltDtct_ThermalSensor;/* '<S403>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_GreenMismatch;/* '<S282>/Logical Operator1' */

#endif

#if Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_IDCML1EnoughACCurrnt;/* '<S425>/Relational Operator6' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_IUMPR_DeviceCmd_LK;/* '<S65>/Gain' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_IUMPR_DeviceCmd_UL;/* '<S66>/Gain' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_Ind1Mismatch;/* '<S366>/AND' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_Ind2Mismatch;/* '<S361>/AND' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_Ind3Mismatch;/* '<S362>/AND' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_Ind4Mismatch;/* '<S363>/AND' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_Ind5Mismatch;/* '<S364>/AND' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_Ind_ColorMismatch;/* '<S365>/AND' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_LINfaultTest1;/* '<S8>/NOT2' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_LockDTCSet;/* '<S13>/Switch1' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_OneLED_ClrMismatch;/* '<S282>/Logical3' */

#endif

#if Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_PP1ButtonPressedLatched;/* '<S482>/OR1' */

#endif

#if Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_PP1L1CrrntDifflLmtExcdd;/* '<S425>/Relational Operator5' */

#endif

#if Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_PP1L1CurrentSensorFaulty;/* '<S425>/AND2' */

#endif

#if Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_PP2ButtonPressedLatched;/* '<S602>/OR1' */

#endif

#if Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_PP2L1CrrntDifflLmtExcdd;/* '<S546>/Relational Operator5' */

#endif

#if Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_PP2L1CurrentSensorFaulty;/* '<S546>/AND2' */

#endif

#if Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_PPHWInput_PulseDetected;/* '<S547>/Unit Delay4' */

#endif

#if Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT)
    VeCDMR_b_PwrOutletPanelMod1DigCommBus_EnableCheck;/* '<S540>/AND' */

#endif

#if Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT)
    VeCDMR_b_PwrOutletPanelMod1DigCommBus_FaultCheck;/* '<S547>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_PwrOutletPanelMod1DigCommBus_FltDtct;/* '<S560>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT)
    VeCDMR_b_PwrOutletPanelMod1InACPwrCktPerf_EnableCheck;/* '<S542>/AND' */

#endif

#if Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT)
    VeCDMR_b_PwrOutletPanelMod1InACPwrCktPerf_FaultCheck;/* '<S545>/OR2' */

#endif

#if Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT)
    VeCDMR_b_PwrOutletPanelMod1InACPwrCktPerf_FltDtct;/* '<S561>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT)
    VeCDMR_b_PwrOutletPanelMod1LmpCntrl_EnableCheck;/* '<S541>/AND' */

#endif

#if Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT)
    VeCDMR_b_PwrOutletPanelMod1LmpCntrl_FaultCheck;/* '<S544>/OR1' */

#endif

#if Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_PwrOutletPanelMod1LmpCntrl_FltDtct;/* '<S562>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_PwrOutletPanelMod1Perf_EnableCheck;/* '<S539>/AND' */

#endif

#if Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_PwrOutletPanelMod1Perf_FaultCheck;/* '<S546>/AND' */

#endif

#if Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_PwrOutletPanelMod1Perf_FltDtct;/* '<S563>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT)
    VeCDMR_b_PwrOutletPanelMod2DigCommBus_EnableCheck;/* '<S419>/AND' */

#endif

#if Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT)
    VeCDMR_b_PwrOutletPanelMod2DigCommBus_FaultCheck;/* '<S426>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_PwrOutletPanelMod2DigCommBus_FltDtct;/* '<S440>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT)
    VeCDMR_b_PwrOutletPanelMod2InACPwrCktPerf_EnableCheck;/* '<S421>/AND' */

#endif

#if Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT)
    VeCDMR_b_PwrOutletPanelMod2InACPwrCktPerf_FaultCheck;/* '<S424>/AND5' */

#endif

#if Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT)
    VeCDMR_b_PwrOutletPanelMod2InACPwrCktPerf_FltDtct;/* '<S441>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT)
    VeCDMR_b_PwrOutletPanelMod2LmpCntrl_EnableCheck;/* '<S420>/AND' */

#endif

#if Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT)
    VeCDMR_b_PwrOutletPanelMod2LmpCntrl_FaultCheck;/* '<S423>/OR1' */

#endif

#if Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_PwrOutletPanelMod2LmpCntrl_FltDtct;/* '<S442>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_PwrOutletPanelMod2Perf_EnableCheck;/* '<S418>/AND' */

#endif

#if Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_PwrOutletPanelMod2Perf_FaultCheck;/* '<S425>/AND' */

#endif

#if Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_PwrOutletPanelMod2Perf_FltDtct;/* '<S443>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_RedMismatch;/* '<S282>/Logical Operator' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_TempSens_RstCond;/* '<S283>/Logical2' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_ThermSensFltORLOC;/* '<S283>/Logical4' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_TurnOffCPIMBulbs;/* '<S279>/Logical12' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_TypeA_EnableCond_Lock;/* '<S14>/Logical11' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_TypeA_Fault_Test3;/* '<S14>/Comparison8' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_TypeA_Fault_Test4;/* '<S14>/Logical10' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_TypeB_EnableCond_Lock;/* '<S15>/Logical11' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_TypeB_EnableCond_UL;/* '<S15>/Logical28' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_TypeB_Fault_Test12;/* '<S15>/Logical3' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_TypeB_Fault_Test5;/* '<S15>/Logical1' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_TypeB_Fault_Test9;/* '<S15>/Logical7' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_TypeC_Fault_Test4;/* '<S16>/Comparison4' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_TypeC_Fault_Test5;/* '<S16>/Logical5' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_TypeC_Fault_Test6;/* '<S16>/Comparison2' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_TypeC_Fault_Test7;/* '<S16>/Logical8' */

#endif

#if Rte_SysCon_Variant_CDMR_4

static VAR(boolean, CDMR_VAR_INIT) VeCDMR_b_UnlockDTCSet;/* '<S17>/Switch1' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CDMR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_CDMR
#include "MemMap.h"

CONST(ConstB_CDMR_ac_T, CDMR_VAR_INIT) CDMR_ac_ConstB =
{

#if Rte_SysCon_Variant_CDMR_4

    CeOBCR_e_NotCharging,              /* '<S686>/Constant' */

#define CONSTB_CDMR_AC_T_VARIANT_EXISTS
#endif

    CeDFIB_e_Init,                     /* '<S662>/Constant' */
    CeDFIB_e_Init,                     /* '<S663>/Constant' */
    CeDFIB_e_Init,                     /* '<S664>/Constant' */
    CeDFIB_e_Init,                     /* '<S665>/Constant' */
    CeDFIB_e_Init,                     /* '<S666>/Constant' */
    CeDFIB_e_Init,                     /* '<S667>/Constant' */
    CeDFIB_e_Init,                     /* '<S668>/Constant' */
    CeDFIB_e_Init,                     /* '<S669>/Constant' */
    CeDFIB_e_Init,                     /* '<S670>/Constant' */
    CeDFIB_e_Init,                     /* '<S671>/Constant' */
    CeDFIB_e_Init,                     /* '<S672>/Constant' */
    CeDFIB_e_Init,                     /* '<S673>/Constant' */
    CeDFIB_e_Init,                     /* '<S674>/Constant' */
    CeDFIB_e_Init,                     /* '<S675>/Constant' */
    CeDFIB_e_Init,                     /* '<S676>/Constant' */
    CeDFIB_e_Init                      /* '<S677>/Constant' */
};

#define STOP_SEC_CONST_UNSPECIFIED_CDMR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CDMR
#include "MemMap.h"

VAR(B_CDMR_ac_T, CDMR_VAR_INIT) CDMR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CDMR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CDMR
#include "MemMap.h"

VAR(DW_CDMR_ac_T, CDMR_VAR_INIT) CDMR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CDMR
#include "MemMap.h"
#if Rte_SysCon_Variant_CDMR_4

static FUNC(void, CDMR_CODE_LOCAL) CDMR_ac_Fail(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, CDMR_VAR_INIT)
    rty_FaultSts);

#endif

#if Rte_SysCon_Variant_CDMR_4

static FUNC(void, CDMR_CODE_LOCAL) CDMR_ac_Init_b(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, CDMR_VAR_INIT)
    rty_FaultSts);

#endif

#if Rte_SysCon_Variant_CDMR_4

static FUNC(void, CDMR_CODE_LOCAL) CDMR_ac_Pass(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, CDMR_VAR_INIT)
    rty_FaultSts);

#endif

/*
 * Output and update for enable system:
 *    '<S28>/Fail'
 *    '<S29>/Fail'
 *    '<S152>/Fail'
 *    '<S193>/Fail'
 *    '<S241>/Fail'
 *    '<S294>/Fail'
 *    '<S343>/Fail'
 *    '<S403>/Fail'
 *    '<S560>/Fail'
 *    '<S561>/Fail'
 *    ...
 */
#if Rte_SysCon_Variant_CDMR_4

static FUNC(void, CDMR_CODE_LOCAL) CDMR_ac_Fail(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, CDMR_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S28>/Fail' incorporates:
     *  EnablePort: '<S33>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S33>/FaultSts' incorporates:
         *  Constant: '<S39>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Fail;
    }

    /* End of Outputs for SubSystem: '<S28>/Fail' */
}

#endif

/*
 * Output and update for enable system:
 *    '<S28>/Init'
 *    '<S29>/Init'
 *    '<S152>/Init'
 *    '<S193>/Init'
 *    '<S241>/Init'
 *    '<S294>/Init'
 *    '<S343>/Init'
 *    '<S403>/Init'
 *    '<S560>/Init'
 *    '<S561>/Init'
 *    ...
 */
#if Rte_SysCon_Variant_CDMR_4

static FUNC(void, CDMR_CODE_LOCAL) CDMR_ac_Init_b(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, CDMR_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S28>/Init' incorporates:
     *  EnablePort: '<S34>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S34>/FaultSts' incorporates:
         *  Constant: '<S40>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Init;
    }

    /* End of Outputs for SubSystem: '<S28>/Init' */
}

#endif

/*
 * Output and update for enable system:
 *    '<S28>/Pass'
 *    '<S29>/Pass'
 *    '<S152>/Pass'
 *    '<S193>/Pass'
 *    '<S241>/Pass'
 *    '<S294>/Pass'
 *    '<S343>/Pass'
 *    '<S403>/Pass'
 *    '<S560>/Pass'
 *    '<S561>/Pass'
 *    ...
 */
#if Rte_SysCon_Variant_CDMR_4

static FUNC(void, CDMR_CODE_LOCAL) CDMR_ac_Pass(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, CDMR_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S28>/Pass' incorporates:
     *  EnablePort: '<S35>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S35>/FaultSts' incorporates:
         *  Constant: '<S41>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Pass;
    }

    /* End of Outputs for SubSystem: '<S28>/Pass' */
}

#endif

/* Model step function for TID1 */
#if Rte_SysCon_Variant_CDMR_4

FUNC(void, CDMR_CODE) CDMR_MedTED(void) /* Explicit Task: MedTED */
{

#if Rte_SysCon_Variant_CDMR_4

    TeOBCR_e_ChargingSystemSts tmpRead;

#endif

#if Rte_SysCon_Variant_CDMR_4

    sint16 tmpRead_0;

#endif

#if Rte_SysCon_Variant_CDMR_4

    uint16 rtb_DataTypeConversion;

#endif

#if Rte_SysCon_Variant_CDMR_4

    boolean rtb_LogicalOperator_mu;

#endif

#if Rte_SysCon_Variant_CDMR_4

    boolean rtb_RelationalOperator3_n;

#endif

#if Rte_SysCon_Variant_CDMR_4

    boolean rtb_Logical1_kl;

#endif

#if Rte_SysCon_Variant_CDMR_4

    boolean rtb_AND_oh;

#endif

#if Rte_SysCon_Variant_CDMR_4

    boolean rtb_Switch1_o3q;

#endif

#if Rte_SysCon_Variant_CDMR_4

    boolean rtb_UnitDelay_o42;

#endif

#if Rte_SysCon_Variant_CDMR_4

    boolean rtb_Comparison9_m;

#endif

#if Rte_SysCon_Variant_CDMR_4

    boolean rtb_Logical14;

#endif

#if Rte_SysCon_Variant_CDMR_4

    boolean rtb_Comparison10_o;

#endif

#if Rte_SysCon_Variant_CDMR_4

    boolean rtb_RelationalOperator3_d;

#endif

#if Rte_SysCon_Variant_CDMR_4

    boolean rtb_Logical1_pv;

#endif

#if Rte_SysCon_Variant_CDMR_4

    boolean rtb_TmpSignalConversionAtVeCITR_b_ChrgPo;

#endif

#if Rte_SysCon_Variant_CDMR_4

    boolean rtb_TmpSignalConversionAtVeCITR_b_PortLo;

#endif

#if Rte_SysCon_Variant_CDMR_4

    boolean rtb_TmpSignalConversionAtVeCITR_b_HBridg;

#endif

#if Rte_SysCon_Variant_CDMR_4

    boolean rtb_TmpSignalConversionAtVeCITR_b_Chrg_b;

#endif

#if Rte_SysCon_Variant_CDMR_4

    boolean rtb_TmpSignalConversionAtVeCITR_b_Chrg_i;

#endif

#if Rte_SysCon_Variant_CDMR_4

    boolean rtb_Comparison9_g;

#endif

#if Rte_SysCon_Variant_CDMR_4

    boolean rtb_Comparison10_j;

#endif

#if Rte_SysCon_Variant_CDMR_4

    boolean rtb_RelationalOperator3_jx;

#endif

#if Rte_SysCon_Variant_CDMR_4

    boolean rtb_Logical5_ko;

#endif

#if Rte_SysCon_Variant_CDMR_4

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Stat_p;

#endif

#if Rte_SysCon_Variant_CDMR_4

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Stat_n;

#endif

#if Rte_SysCon_Variant_CDMR_4

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Status;

#endif

#if Rte_SysCon_Variant_CDMR_4

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Stat_m;

#endif

#if Rte_SysCon_Variant_CDMR_4

    TeCITR_e_ChrgPortLck_FailSts rtb_TmpSignalConversionAtVeCITR_e_CPIM_C;

#endif

#if Rte_SysCon_Variant_CDMR_4

    TeOBCR_e_ChrgPort_Req rtb_TmpSignalConversionAtVeOBCR_e_ChrgPo;

#endif

#if Rte_SysCon_Variant_CDMR_4

    TeOBCR_e_ChrgPortLock_Sts rtb_TmpSignalConversionAtVeCITR_e_ChrgPo;

#endif

#if Rte_SysCon_Variant_CDMR_4

    boolean VeCDMR_b_TypeB_EnableCond_Lock_tmp;

#endif

#if Rte_SysCon_Variant_CDMR_4

    boolean rtb_Logical1_hi_tmp;

#endif

#if Rte_SysCon_Variant_CDMR_4

    boolean VeCDMR_b_TypeB_Fault_Test9_tmp;

#endif

#if Rte_SysCon_Variant_CDMR_4

    boolean VeCDMR_b_TypeC_Fault_Test5_tmp;

#endif

#if Rte_SysCon_Variant_CDMR_4

    boolean VeCDMR_b_TypeC_Fault_Test5_tmp_0;

#endif

#if Rte_SysCon_Variant_CDMR_4

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
    /* Outputs for Function Call SubSystem: '<Root>/CDMR_MedTED' */
    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommCPIM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommCPIM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommCPIM_Value
        (&CDMR_ac_DW.StatusByte_LostCommCPIM);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LIN3_BusOff' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LIN3_BusOff'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LIN3_BusOff_Value
        (&CDMR_ac_DW.StatusByte_LIN3_BusOff);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LIN2_BusOff' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LIN2_BusOff'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LIN2_BusOff_Value
        (&CDMR_ac_DW.StatusByte_LIN2_BusOff);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LIN1_BusOff' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LIN1_BusOff'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LIN1_BusOff_Value
        (&CDMR_ac_DW.StatusByte_LIN1_BusOff);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommBCM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommBCM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommBCM_Value
        (&CDMR_ac_DW.StatusByte_LostCommBCM);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_HiSpdCANCommBus' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HiSpdCANCommBus'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HiSpdCANCommBus_Value
        (&CDMR_ac_DW.StatusByte_HiSpdCANCommBus);

    /* End of Outputs for SubSystem: '<Root>/CDMR_MedTED' */

    /* Inport: '<Root>/VeCITR_d_ChrgPortHbridgeFlt' */
    (void)Rte_Read_VeCITR_d_ChrgPortHbridgeFlt_Value(&tmpRead_0);

    /* Outputs for Function Call SubSystem: '<Root>/CDMR_MedTED' */
    /* SignalConversion generated from: '<S1>/VeOBCR_e_ChrgPort_Req' incorporates:
     *  Inport: '<Root>/VeOBCR_e_ChrgPort_Req'
     */
    (void)Rte_Read_VeOBCR_e_ChrgPort_Req_Value
        (&rtb_TmpSignalConversionAtVeOBCR_e_ChrgPo);

    /* SignalConversion generated from: '<S1>/VeCITR_b_PortLockBCM_Cmd' incorporates:
     *  Inport: '<Root>/VeCITR_b_PortLockBCM_Cmd'
     */
    (void)Rte_Read_VeCITR_b_PortLockBCM_Cmd_Value
        (&rtb_TmpSignalConversionAtVeCITR_b_PortLo);

    /* SignalConversion generated from: '<S1>/VeCITR_b_ChrgPortLockSts' incorporates:
     *  Inport: '<Root>/VeCITR_b_ChrgPortLockSts'
     */
    (void)Rte_Read_VeCITR_b_ChrgPortLockSts_Value
        (&rtb_TmpSignalConversionAtVeCITR_b_ChrgPo);

    /* SignalConversion generated from: '<S1>/VeCITR_e_ChrgPortLock_StsB' incorporates:
     *  Inport: '<Root>/VeCITR_e_ChrgPortLock_StsB'
     */
    (void)Rte_Read_VeCITR_e_ChrgPortLock_StsB_Value
        (&rtb_TmpSignalConversionAtVeCITR_e_ChrgPo);

    /* SignalConversion generated from: '<S1>/VeCITR_b_ChrgPortLock_StsC' incorporates:
     *  Inport: '<Root>/VeCITR_b_ChrgPortLock_StsC'
     */
    (void)Rte_Read_VeCITR_b_ChrgPortLock_StsC_Value
        (&rtb_TmpSignalConversionAtVeCITR_b_Chrg_b);

    /* SignalConversion generated from: '<S1>/VeCITR_b_ChrgPortLock_StsC_FA' incorporates:
     *  Inport: '<Root>/VeCITR_b_ChrgPortLock_StsC_FA'
     */
    (void)Rte_Read_VeCITR_b_ChrgPortLock_StsC_FA_Value
        (&rtb_TmpSignalConversionAtVeCITR_b_Chrg_i);

    /* SignalConversion generated from: '<S1>/VeCITR_b_HBridge_ChrgPortLck_Cal' incorporates:
     *  Inport: '<Root>/VeCITR_b_HBridge_ChrgPortLck_Cal'
     */
    (void)Rte_Read_VeCITR_b_HBridge_ChrgPortLck_Cal_Value
        (&rtb_TmpSignalConversionAtVeCITR_b_HBridg);

    /* DataTypeConversion: '<S1>/Data Type Conversion' */
    rtb_DataTypeConversion = (uint16)tmpRead_0;

    /* SignalConversion generated from: '<S1>/VeCITR_e_CPIM_ChrgPortLock_FailSts' incorporates:
     *  Inport: '<Root>/VeCITR_e_CPIM_ChrgPortLock_FailSts'
     */
    (void)Rte_Read_VeCITR_e_CPIM_ChrgPortLock_FailSts_Value
        (&rtb_TmpSignalConversionAtVeCITR_e_CPIM_C);

    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_ChrgPortLckCtrlCktPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_ChrgPortLckCtrlCktPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_ChrgPortLckCtrlCktPerf_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Status);

    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_ChrgPortULCtrlCktPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_ChrgPortULCtrlCktPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_ChrgPortULCtrlCktPerf_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Stat_m);

    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_BattChrgPrtLckCkttHi' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BattChrgPrtLckCkttHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BattChrgPrtLckCkttHi_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Stat_p);

    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_BattChrgPrtLckCktLo' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BattChrgPrtLckCktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BattChrgPrtLckCktLo_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Stat_n);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Charging_Port'
     */

    /* Logic: '<S8>/NOT2' incorporates:
     *  Logic: '<S16>/Logical Operator'
     */
    VeCDMR_b_LINfaultTest1 = ((CDMR_ac_B.MultiportSwitch) ||
        (CDMR_ac_B.LogicalOperator));

    /* Logic: '<S14>/Logical Operator' incorporates:
     *  Constant: '<S26>/Calib'
     *  Logic: '<S8>/NOT4'
     *  Logic: '<S8>/NOT7'
     */
    rtb_LogicalOperator_mu = (((!VeCDMR_b_LINfaultTest1) &&
        (KeCDMR_b_ChrgPrtLckFailEn)) && (CDMR_ac_B.Switch3_c));

    /* RelationalOperator: '<S29>/Relational Operator3' incorporates:
     *  Constant: '<S29>/Constant3'
     *  S-Function (sfix_bitop): '<S29>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_n = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_p) & 64U) == 0U);

    /* Logic: '<S29>/Logical1' incorporates:
     *  Constant: '<S25>/Calib'
     *  Constant: '<S29>/Constant1'
     *  Logic: '<S29>/Logical Operator'
     *  Logic: '<S29>/Logical10'
     *  Logic: '<S29>/Logical12'
     *  RelationalOperator: '<S29>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S29>/Bitwise Operator3'
     */
    rtb_Logical1_kl = (rtb_LogicalOperator_mu &&
                       ((!KeCDMR_b_BattChrgPrtLckCkttHi_LtchEnbl) || (((((uint32)
                            rtb_TmpSignalConversionAtVeDMAB_y_Stat_p) & 1U) ==
                          0U) || (!rtb_RelationalOperator3_n))));

    /* Logic: '<S27>/NOT4' incorporates:
     *  Logic: '<S150>/NOT4'
     *  Logic: '<S191>/NOT4'
     */
    rtb_Logical5_ko = ((CDMR_ac_B.Switch4) || (CDMR_ac_B.Switch22));

    /* Outputs for Atomic SubSystem: '<S29>/EdgeFalling1' */
    /* Logic: '<S45>/AND' incorporates:
     *  Logic: '<S45>/OR1'
     *  UnitDelay: '<S45>/Unit Delay'
     */
    rtb_AND_oh = ((!rtb_RelationalOperator3_n) &&
                  (CDMR_ac_DW.UnitDelay_DSTATE_pz));

    /* Update for UnitDelay: '<S45>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_pz = rtb_RelationalOperator3_n;

    /* End of Outputs for SubSystem: '<S29>/EdgeFalling1' */

    /* Logic: '<S29>/Logical5' incorporates:
     *  Logic: '<S27>/NOT4'
     */
    rtb_RelationalOperator3_n = (rtb_Logical5_ko || rtb_AND_oh);

    /* Outputs for Atomic SubSystem: '<S44>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S44>/Counter Reset  Enabled ' */
    /* Switch: '<S51>/Switch1' incorporates:
     *  Constant: '<S19>/Constant'
     *  Logic: '<S44>/Fail Counter Reset'
     *  Logic: '<S44>/NOT6'
     *  RelationalOperator: '<S8>/Greater  Than2'
     *  SignalConversion generated from: '<S1>/VeCITR_e_CPIM_ChrgPortLock_FailSts'
     *  Switch: '<S51>/Switch2'
     *  Switch: '<S52>/Switch1'
     *  UnitDelay: '<S44>/Unit Delay'
     *  UnitDelay: '<S44>/Unit Delay1'
     */
    if ((rtb_RelationalOperator3_n || (CDMR_ac_DW.UnitDelay_DSTATE_it)) ||
            (CDMR_ac_DW.UnitDelay1_DSTATE_j))
    {
        /* Switch: '<S51>/Switch1' incorporates:
         *  Constant: '<S51>/Constant Value2'
         */
        VeCDMR_Cnt_BattChrgPrtLckCktHi_FailCnt = 0U;

        /* Switch: '<S52>/Switch1' incorporates:
         *  Constant: '<S52>/Constant Value2'
         */
        VeCDMR_Cnt_BattChrgPrtLckCktHi_SmpCnt = 0U;
    }
    else
    {
        if (rtb_Logical1_kl && (((uint32)
                                 rtb_TmpSignalConversionAtVeCITR_e_CPIM_C) ==
                                CeCITR_e_CPIMLock_CktHiFailure))
        {
            /* Switch: '<S51>/Switch1' incorporates:
             *  Constant: '<S51>/Constant Value1'
             *  Sum: '<S51>/Subtraction'
             *  Switch: '<S51>/Switch2'
             *  UnitDelay: '<S51>/Unit Delay'
             */
            VeCDMR_Cnt_BattChrgPrtLckCktHi_FailCnt = (uint16)(((uint32)
                VeCDMR_Cnt_BattChrgPrtLckCktHi_FailCnt) + 1U);
        }

        /* Switch: '<S52>/Switch2' */
        if (rtb_Logical1_kl)
        {
            /* Switch: '<S52>/Switch1' incorporates:
             *  Constant: '<S52>/Constant Value1'
             *  Sum: '<S52>/Subtraction'
             *  Switch: '<S52>/Switch2'
             *  UnitDelay: '<S52>/Unit Delay'
             */
            VeCDMR_Cnt_BattChrgPrtLckCktHi_SmpCnt = (uint16)(((uint32)
                VeCDMR_Cnt_BattChrgPrtLckCktHi_SmpCnt) + 1U);
        }

        /* End of Switch: '<S52>/Switch2' */
    }

    /* End of Switch: '<S51>/Switch1' */
    /* End of Outputs for SubSystem: '<S44>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S44>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S44>/Greater Than or Equal ' incorporates:
     *  Constant: '<S20>/Calib'
     */
    CDMR_ac_DW.UnitDelay1_DSTATE_j = (VeCDMR_Cnt_BattChrgPrtLckCktHi_FailCnt >=
        KeCDMR_Cnt_ChgPrtLckFAHighFail);

    /* Logic: '<S44>/NOT5' incorporates:
     *  Constant: '<S21>/Calib'
     *  Logic: '<S44>/NOT3'
     *  RelationalOperator: '<S44>/Less Than  or Equal'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_it = ((VeCDMR_Cnt_BattChrgPrtLckCktHi_SmpCnt >=
        KeCDMR_Cnt_ChgPrtLckFAHighSmpl) && (!CDMR_ac_DW.UnitDelay1_DSTATE_j));

    /* Switch: '<S57>/Switch1' incorporates:
     *  Constant: '<S50>/Constant Value'
     *  DataStoreWrite: '<S8>/Data Store Write3'
     *  Switch: '<S56>/Switch1'
     */
    if (CDMR_ac_B.Switch22)
    {
        CDMR_ac_DW.NeCDMR_Cnt_ChgPrtLckFailHMFOP = 0U;
    }
    else
    {
        if (CDMR_ac_DW.UnitDelay_DSTATE_it)
        {
            /* MinMax: '<S50>/Minimum2' incorporates:
             *  DataStoreRead: '<S8>/Data Store Read3'
             *  Switch: '<S56>/Switch1'
             */
            if (VeCDMR_Cnt_BattChrgPrtLckCktHi_FailCnt >
                    CDMR_ac_DW.NeCDMR_Cnt_ChgPrtLckFailHMFOP)
            {
                /* DataStoreWrite: '<S8>/Data Store Write3' incorporates:
                 *  Switch: '<S56>/Switch1'
                 */
                CDMR_ac_DW.NeCDMR_Cnt_ChgPrtLckFailHMFOP =
                    VeCDMR_Cnt_BattChrgPrtLckCktHi_FailCnt;
            }

            /* End of MinMax: '<S50>/Minimum2' */
        }
    }

    /* End of Switch: '<S57>/Switch1' */

    /* RelationalOperator: '<S28>/Relational Operator3' incorporates:
     *  Constant: '<S28>/Constant3'
     *  S-Function (sfix_bitop): '<S28>/Bitwise Operator2'
     */
    rtb_Logical1_kl = ((((uint32)rtb_TmpSignalConversionAtVeDMAB_y_Stat_n) & 64U)
                       == 0U);

    /* Outputs for Atomic SubSystem: '<S28>/EdgeFalling1' */
    /* Logic: '<S28>/Logical Operator' incorporates:
     *  Logic: '<S31>/OR1'
     */
    rtb_AND_oh = !rtb_Logical1_kl;

    /* End of Outputs for SubSystem: '<S28>/EdgeFalling1' */

    /* Logic: '<S28>/Logical1' incorporates:
     *  Constant: '<S24>/Calib'
     *  Constant: '<S28>/Constant1'
     *  Logic: '<S28>/Logical Operator'
     *  Logic: '<S28>/Logical10'
     *  Logic: '<S28>/Logical12'
     *  RelationalOperator: '<S28>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S28>/Bitwise Operator3'
     */
    rtb_LogicalOperator_mu = (rtb_LogicalOperator_mu &&
        ((!KeCDMR_b_BattChrgPrtLckCktLo_LtchEnbl) || (((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_n) & 1U) == 0U) || rtb_AND_oh)));

    /* Outputs for Atomic SubSystem: '<S28>/EdgeFalling1' */
    /* Logic: '<S31>/AND' incorporates:
     *  UnitDelay: '<S31>/Unit Delay'
     */
    rtb_AND_oh = (rtb_AND_oh && (CDMR_ac_DW.UnitDelay_DSTATE_gs));

    /* Update for UnitDelay: '<S31>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_gs = rtb_Logical1_kl;

    /* End of Outputs for SubSystem: '<S28>/EdgeFalling1' */

    /* Logic: '<S28>/Logical5' incorporates:
     *  Logic: '<S27>/NOT4'
     */
    rtb_Logical1_kl = (rtb_Logical5_ko || rtb_AND_oh);

    /* Outputs for Atomic SubSystem: '<S30>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S30>/Counter Reset  Enabled ' */
    /* Switch: '<S37>/Switch1' incorporates:
     *  Constant: '<S18>/Constant'
     *  Logic: '<S30>/Fail Counter Reset'
     *  Logic: '<S30>/NOT6'
     *  RelationalOperator: '<S8>/Greater  Than'
     *  SignalConversion generated from: '<S1>/VeCITR_e_CPIM_ChrgPortLock_FailSts'
     *  Switch: '<S37>/Switch2'
     *  Switch: '<S38>/Switch1'
     *  UnitDelay: '<S30>/Unit Delay'
     *  UnitDelay: '<S30>/Unit Delay1'
     */
    if ((rtb_Logical1_kl || (CDMR_ac_DW.UnitDelay_DSTATE_ow)) ||
            (CDMR_ac_DW.UnitDelay1_DSTATE_pc))
    {
        /* Switch: '<S37>/Switch1' incorporates:
         *  Constant: '<S37>/Constant Value2'
         */
        VeCDMR_Cnt_BattChrgPrtLckCktLo_FailCnt = 0U;

        /* Switch: '<S38>/Switch1' incorporates:
         *  Constant: '<S38>/Constant Value2'
         */
        VeCDMR_Cnt_BattChrgPrtLckCktLo_SmpCnt = 0U;
    }
    else
    {
        if (rtb_LogicalOperator_mu && (((uint32)
                rtb_TmpSignalConversionAtVeCITR_e_CPIM_C) ==
                CeCITR_e_CPIMLock_CktLowFailure))
        {
            /* Switch: '<S37>/Switch1' incorporates:
             *  Constant: '<S37>/Constant Value1'
             *  Sum: '<S37>/Subtraction'
             *  Switch: '<S37>/Switch2'
             *  UnitDelay: '<S37>/Unit Delay'
             */
            VeCDMR_Cnt_BattChrgPrtLckCktLo_FailCnt = (uint16)(((uint32)
                VeCDMR_Cnt_BattChrgPrtLckCktLo_FailCnt) + 1U);
        }

        /* Switch: '<S38>/Switch2' */
        if (rtb_LogicalOperator_mu)
        {
            /* Switch: '<S38>/Switch1' incorporates:
             *  Constant: '<S38>/Constant Value1'
             *  Sum: '<S38>/Subtraction'
             *  Switch: '<S38>/Switch2'
             *  UnitDelay: '<S38>/Unit Delay'
             */
            VeCDMR_Cnt_BattChrgPrtLckCktLo_SmpCnt = (uint16)(((uint32)
                VeCDMR_Cnt_BattChrgPrtLckCktLo_SmpCnt) + 1U);
        }

        /* End of Switch: '<S38>/Switch2' */
    }

    /* End of Switch: '<S37>/Switch1' */
    /* End of Outputs for SubSystem: '<S30>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S30>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S30>/Greater Than or Equal ' incorporates:
     *  Constant: '<S22>/Calib'
     */
    CDMR_ac_DW.UnitDelay1_DSTATE_pc = (VeCDMR_Cnt_BattChrgPrtLckCktLo_FailCnt >=
        KeCDMR_Cnt_ChgPrtLckFALowFail);

    /* Logic: '<S30>/NOT5' incorporates:
     *  Constant: '<S23>/Calib'
     *  Logic: '<S30>/NOT3'
     *  RelationalOperator: '<S30>/Less Than  or Equal'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_ow = ((VeCDMR_Cnt_BattChrgPrtLckCktLo_SmpCnt >=
        KeCDMR_Cnt_ChgPrtLckFALowSmpl) && (!CDMR_ac_DW.UnitDelay1_DSTATE_pc));

    /* Switch: '<S43>/Switch1' incorporates:
     *  Constant: '<S36>/Constant Value'
     *  DataStoreWrite: '<S8>/Data Store Write5'
     *  Switch: '<S42>/Switch1'
     */
    if (CDMR_ac_B.Switch22)
    {
        CDMR_ac_DW.NeCDMR_Cnt_ChgPrtLckFailLMFOP = 0U;
    }
    else
    {
        if (CDMR_ac_DW.UnitDelay_DSTATE_ow)
        {
            /* MinMax: '<S36>/Minimum2' incorporates:
             *  DataStoreRead: '<S8>/Data Store Read5'
             *  Switch: '<S42>/Switch1'
             */
            if (VeCDMR_Cnt_BattChrgPrtLckCktLo_FailCnt >
                    CDMR_ac_DW.NeCDMR_Cnt_ChgPrtLckFailLMFOP)
            {
                /* DataStoreWrite: '<S8>/Data Store Write5' incorporates:
                 *  Switch: '<S42>/Switch1'
                 */
                CDMR_ac_DW.NeCDMR_Cnt_ChgPrtLckFailLMFOP =
                    VeCDMR_Cnt_BattChrgPrtLckCktLo_FailCnt;
            }

            /* End of MinMax: '<S36>/Minimum2' */
        }
    }

    /* End of Switch: '<S43>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S28>/Fail' */
    CDMR_ac_Fail(CDMR_ac_DW.UnitDelay1_DSTATE_pc, &CDMR_ac_B.Merge_j);

    /* End of Outputs for SubSystem: '<S28>/Fail' */

    /* Outputs for Enabled SubSystem: '<S28>/Init' */
    CDMR_ac_Init_b(rtb_Logical1_kl, &CDMR_ac_B.Merge_j);

    /* End of Outputs for SubSystem: '<S28>/Init' */

    /* Outputs for Enabled SubSystem: '<S28>/Pass' */
    CDMR_ac_Pass(CDMR_ac_DW.UnitDelay_DSTATE_ow, &CDMR_ac_B.Merge_j);

    /* End of Outputs for SubSystem: '<S28>/Pass' */

    /* RelationalOperator: '<S28>/Relational Operator' incorporates:
     *  Constant: '<S32>/Constant'
     *  Merge: '<S28>/Merge'
     */
    rtb_LogicalOperator_mu = (((uint32)CDMR_ac_B.Merge_j) == CeDFIB_e_Fail);

    /* Outputs for Enabled SubSystem: '<S29>/Fail' */
    CDMR_ac_Fail(CDMR_ac_DW.UnitDelay1_DSTATE_j, &CDMR_ac_B.Merge_k);

    /* End of Outputs for SubSystem: '<S29>/Fail' */

    /* Outputs for Enabled SubSystem: '<S29>/Init' */
    CDMR_ac_Init_b(rtb_RelationalOperator3_n, &CDMR_ac_B.Merge_k);

    /* End of Outputs for SubSystem: '<S29>/Init' */

    /* Outputs for Enabled SubSystem: '<S29>/Pass' */
    CDMR_ac_Pass(CDMR_ac_DW.UnitDelay_DSTATE_it, &CDMR_ac_B.Merge_k);

    /* End of Outputs for SubSystem: '<S29>/Pass' */

    /* RelationalOperator: '<S29>/Relational Operator' incorporates:
     *  Constant: '<S46>/Constant'
     *  Merge: '<S29>/Merge'
     */
    rtb_RelationalOperator3_n = (((uint32)CDMR_ac_B.Merge_k) == CeDFIB_e_Fail);

    /* Logic: '<S10>/Logical Operator' incorporates:
     *  Constant: '<S10>/Constant1'
     *  Constant: '<S10>/Constant2'
     *  DataStoreRead: '<S10>/StatusByte_LostCommBCM'
     *  RelationalOperator: '<S10>/Relational Operator1'
     *  RelationalOperator: '<S10>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S10>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S10>/Bitwise Operator2'
     */
    rtb_Logical1_kl = (((((sint32)CDMR_ac_DW.StatusByte_LostCommBCM) & 1) > 0) &&
                       ((((uint32)CDMR_ac_DW.StatusByte_LostCommBCM) & 64U) ==
                        0U));

    /* Logic: '<S14>/Logical Operator' incorporates:
     *  Constant: '<S9>/Constant1'
     *  Constant: '<S9>/Constant2'
     *  DataStoreRead: '<S9>/StatusByte_HiSpdCANCommBus'
     *  Logic: '<S15>/Logical Operator'
     *  Logic: '<S9>/Logical Operator'
     *  RelationalOperator: '<S9>/Relational Operator1'
     *  RelationalOperator: '<S9>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S9>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S9>/Bitwise Operator2'
     */
    rtb_AND_oh = (rtb_Logical1_kl || (((((sint32)
                      CDMR_ac_DW.StatusByte_HiSpdCANCommBus) & 1) > 0) &&
                   ((((uint32)CDMR_ac_DW.StatusByte_HiSpdCANCommBus) & 64U) ==
                    0U)));

    /* Logic: '<S14>/Logical11' incorporates:
     *  Logic: '<S14>/Logical Operator'
     *  Logic: '<S14>/Logical1'
     */
    VeCDMR_b_TypeA_EnableCond_Lock = (((CDMR_ac_B.Switch20) && (!rtb_AND_oh)) &&
        (CDMR_ac_B.Switch3_c));

    /* Switch: '<S184>/Switch1' incorporates:
     *  Constant: '<S12>/Calib'
     *  Constant: '<S138>/Constant'
     *  RelationalOperator: '<S13>/Comparison12'
     */
    rtb_Switch1_o3q = (((uint32)KeCDMR_e_ChrgPortLock_Type) ==
                       CeOBCR_e_ChrgPortLock_TypeA);

    /* Logic: '<S15>/Logical21' incorporates:
     *  Constant: '<S174>/Calib'
     *  Logic: '<S15>/Logical23'
     *  Logic: '<S15>/Logical25'
     *  Logic: '<S15>/Logical26'
     *  Logic: '<S15>/Logical27'
     *  RelationalOperator: '<S15>/Comparison7'
     *  RelationalOperator: '<S15>/Comparison8'
     */
    rtb_RelationalOperator3_jx = ((((sint32)rtb_DataTypeConversion) == 0) ||
        ((((sint32)rtb_DataTypeConversion) == 1) &&
         (KeCDMR_b_HBridgeFaultDiagEnbl)));

    /* Logic: '<S15>/Logical22' incorporates:
     *  Constant: '<S175>/Calib'
     *  Logic: '<S15>/Logical18'
     *  Logic: '<S15>/Logical20'
     *  Logic: '<S15>/Logical21'
     */
    VeCDMR_b_TypeB_EnableCond_Lock_tmp = (rtb_RelationalOperator3_jx ||
        (KeCDMR_b_ULck_Lck_DTC_HBridgeFlt));

    /* Logic: '<S15>/Logical11' incorporates:
     *  Logic: '<S15>/Logical22'
     *  Logic: '<S15>/Logical4'
     */
    VeCDMR_b_TypeB_EnableCond_Lock = ((((CDMR_ac_B.Switch3_c) &&
        (CDMR_ac_B.Switch20)) && VeCDMR_b_TypeB_EnableCond_Lock_tmp) &&
        (!rtb_AND_oh));

    /* RelationalOperator: '<S13>/Comparison9' incorporates:
     *  Constant: '<S139>/Constant'
     */
    rtb_Comparison9_m = (((uint32)KeCDMR_e_ChrgPortLock_Type) ==
                         CeOBCR_e_ChrgPortLock_TypeB);

    /* Logic: '<S16>/Logical14' incorporates:
     *  Logic: '<S16>/Logical1'
     *  Logic: '<S16>/Logical13'
     */
    rtb_Logical14 = ((CDMR_ac_B.Switch20) && ((CDMR_ac_B.Switch3_c) &&
                      (!VeCDMR_b_LINfaultTest1)));

    /* RelationalOperator: '<S13>/Comparison10' incorporates:
     *  Constant: '<S137>/Constant'
     */
    rtb_Comparison10_o = (((uint32)KeCDMR_e_ChrgPortLock_Type) ==
                          CeOBCR_e_ChrgPortLock_TypeC);

    /* RelationalOperator: '<S152>/Relational Operator3' incorporates:
     *  Constant: '<S152>/Constant3'
     *  S-Function (sfix_bitop): '<S152>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_d = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Status) & 64U) == 0U);

    /* Switch: '<S143>/Switch1' incorporates:
     *  Switch: '<S143>/Switch2'
     *  Switch: '<S143>/Switch3'
     */
    if (rtb_Switch1_o3q)
    {
        rtb_UnitDelay_o42 = VeCDMR_b_TypeA_EnableCond_Lock;
    }
    else if (rtb_Comparison9_m)
    {
        /* Switch: '<S143>/Switch2' */
        rtb_UnitDelay_o42 = VeCDMR_b_TypeB_EnableCond_Lock;
    }
    else
    {
        rtb_UnitDelay_o42 = (rtb_Comparison10_o && rtb_Logical14);
    }

    /* End of Switch: '<S143>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S152>/EdgeFalling1' */
    /* Logic: '<S152>/Logical Operator' incorporates:
     *  Logic: '<S154>/OR1'
     */
    rtb_Logical1_hi_tmp = !rtb_RelationalOperator3_d;

    /* End of Outputs for SubSystem: '<S152>/EdgeFalling1' */

    /* Logic: '<S152>/Logical1' incorporates:
     *  Constant: '<S148>/Calib'
     *  Constant: '<S152>/Constant1'
     *  Logic: '<S152>/Logical Operator'
     *  Logic: '<S152>/Logical10'
     *  Logic: '<S152>/Logical12'
     *  RelationalOperator: '<S152>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S152>/Bitwise Operator3'
     */
    rtb_Logical1_pv = (rtb_UnitDelay_o42 &&
                       ((!KeCDMR_b_ChrgPortLckCtrlCktPerf_LtchEnbl) ||
                        (((((uint32)rtb_TmpSignalConversionAtVeDMAB_y_Status) &
                           1U) == 0U) || rtb_Logical1_hi_tmp)));

    /* RelationalOperator: '<S14>/Comparison8' incorporates:
     *  Constant: '<S167>/Constant'
     */
    VeCDMR_b_TypeA_Fault_Test3 = (((uint32)
        rtb_TmpSignalConversionAtVeOBCR_e_ChrgPo) == CeOBCR_e_LockInlet);

    /* Logic: '<S14>/Logical10' incorporates:
     *  Logic: '<S14>/Logical9'
     */
    VeCDMR_b_TypeA_Fault_Test4 = (((VeCDMR_b_TypeA_Fault_Test3) &&
        rtb_TmpSignalConversionAtVeCITR_b_PortLo) &&
        (!rtb_TmpSignalConversionAtVeCITR_b_ChrgPo));

    /* Logic: '<S15>/Logical15' incorporates:
     *  Logic: '<S15>/Logical12'
     */
    VeCDMR_b_TypeB_Fault_Test9_tmp = (rtb_TmpSignalConversionAtVeCITR_b_PortLo ||
        rtb_TmpSignalConversionAtVeCITR_b_HBridg);

    /* Logic: '<S15>/Logical7' incorporates:
     *  Constant: '<S172>/Constant'
     *  Constant: '<S173>/Constant'
     *  Logic: '<S15>/Logical15'
     *  RelationalOperator: '<S15>/Comparison4'
     *  RelationalOperator: '<S15>/Comparison5'
     */
    VeCDMR_b_TypeB_Fault_Test9 = ((((((uint32)
        rtb_TmpSignalConversionAtVeOBCR_e_ChrgPo) == CeOBCR_e_LockInlet) &&
        VeCDMR_b_TypeB_Fault_Test9_tmp) && (((uint32)
        rtb_TmpSignalConversionAtVeCITR_e_ChrgPo) != CeOBCR_e_InletLocked)) &&
        VeCDMR_b_TypeB_EnableCond_Lock_tmp);

    /* RelationalOperator: '<S16>/Comparison4' incorporates:
     *  Constant: '<S177>/Constant'
     */
    VeCDMR_b_TypeC_Fault_Test4 = (((uint32)
        rtb_TmpSignalConversionAtVeOBCR_e_ChrgPo) == CeOBCR_e_LockInlet);

    /* Logic: '<S16>/Logical2' incorporates:
     *  Logic: '<S16>/Logical3'
     */
    rtb_TmpSignalConversionAtVeCITR_b_Chrg_i =
        !rtb_TmpSignalConversionAtVeCITR_b_Chrg_i;

    /* Logic: '<S16>/Logical4' incorporates:
     *  Logic: '<S16>/Logical7'
     */
    VeCDMR_b_TypeC_Fault_Test5_tmp = !CDMR_ac_B.MultiportSwitch;

    /* Logic: '<S16>/Logical10' incorporates:
     *  Logic: '<S16>/Logical9'
     */
    VeCDMR_b_TypeC_Fault_Test5_tmp_0 = !CDMR_ac_B.LogicalOperator;

    /* Logic: '<S16>/Logical12' incorporates:
     *  Logic: '<S17>/Logical3'
     *  Switch: '<S185>/Switch1'
     *  Switch: '<S185>/Switch2'
     *  Switch: '<S185>/Switch3'
     */
    rtb_UnitDelay_o42 = !rtb_TmpSignalConversionAtVeCITR_b_Chrg_b;

    /* Logic: '<S16>/Logical5' incorporates:
     *  Logic: '<S16>/Logical10'
     *  Logic: '<S16>/Logical12'
     *  Logic: '<S16>/Logical2'
     *  Logic: '<S16>/Logical4'
     */
    VeCDMR_b_TypeC_Fault_Test5 = (((((VeCDMR_b_TypeC_Fault_Test4) &&
        rtb_UnitDelay_o42) && rtb_TmpSignalConversionAtVeCITR_b_Chrg_i) &&
        VeCDMR_b_TypeC_Fault_Test5_tmp) && VeCDMR_b_TypeC_Fault_Test5_tmp_0);

    /* Switch: '<S142>/Switch1' incorporates:
     *  Switch: '<S142>/Switch2'
     *  Switch: '<S144>/Switch1'
     *  Switch: '<S144>/Switch2'
     */
    if (rtb_Switch1_o3q)
    {
        /* Switch: '<S142>/Switch1' */
        VeCDMR_b_LockDTCSet = VeCDMR_b_TypeA_Fault_Test4;
    }
    else if (rtb_Comparison9_m)
    {
        /* Switch: '<S142>/Switch1' incorporates:
         *  Switch: '<S142>/Switch2'
         */
        VeCDMR_b_LockDTCSet = VeCDMR_b_TypeB_Fault_Test9;

        /* RelationalOperator: '<S17>/Comparison12' incorporates:
         *  Constant: '<S141>/Constant'
         *  RelationalOperator: '<S13>/Comparison4'
         *  Switch: '<S144>/Switch2'
         */
        rtb_TmpSignalConversionAtVeCITR_b_ChrgPo = (((uint32)
            rtb_TmpSignalConversionAtVeCITR_e_ChrgPo) == CeOBCR_e_InletLocked);
    }
    else
    {
        /* Switch: '<S142>/Switch1' incorporates:
         *  Switch: '<S142>/Switch2'
         *  Switch: '<S142>/Switch3'
         */
        VeCDMR_b_LockDTCSet = (rtb_Comparison10_o && (VeCDMR_b_TypeC_Fault_Test5));

        /* RelationalOperator: '<S17>/Comparison12' incorporates:
         *  Switch: '<S144>/Switch2'
         *  Switch: '<S144>/Switch3'
         */
        rtb_TmpSignalConversionAtVeCITR_b_ChrgPo = (rtb_Comparison10_o &&
            rtb_TmpSignalConversionAtVeCITR_b_Chrg_b);
    }

    /* End of Switch: '<S142>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S13>/Signal Latch On With Reset' */
    /* Logic: '<S151>/OR1' incorporates:
     *  Constant: '<S140>/Constant'
     *  Logic: '<S13>/Logical'
     *  Logic: '<S151>/NOT'
     *  Logic: '<S151>/OR'
     *  RelationalOperator: '<S13>/Comparison1'
     *  UnitDelay: '<S151>/Unit Delay'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_gb = ((VeCDMR_b_LockDTCSet) || (((((uint32)
        rtb_TmpSignalConversionAtVeOBCR_e_ChrgPo) != CeOBCR_e_LockInlet) ||
        (!rtb_TmpSignalConversionAtVeCITR_b_ChrgPo)) &&
        (CDMR_ac_DW.UnitDelay_DSTATE_gb)));

    /* End of Outputs for SubSystem: '<S13>/Signal Latch On With Reset' */

    /* Switch: '<S13>/Switch1' incorporates:
     *  Constant: '<S149>/Calib'
     */
    if (KeCDMR_b_EnblDemature_Lock)
    {
        /* Switch: '<S13>/Switch1' incorporates:
         *  UnitDelay: '<S151>/Unit Delay'
         */
        VeCDMR_b_LockDTCSet = CDMR_ac_DW.UnitDelay_DSTATE_gb;
    }

    /* End of Switch: '<S13>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S152>/EdgeFalling1' */
    /* Logic: '<S154>/AND' incorporates:
     *  UnitDelay: '<S154>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCITR_b_ChrgPo = (rtb_Logical1_hi_tmp &&
        (CDMR_ac_DW.UnitDelay_DSTATE_gg));

    /* Update for UnitDelay: '<S154>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_gg = rtb_RelationalOperator3_d;

    /* End of Outputs for SubSystem: '<S152>/EdgeFalling1' */

    /* Logic: '<S152>/Logical5' */
    rtb_TmpSignalConversionAtVeCITR_b_ChrgPo = (rtb_Logical5_ko ||
        rtb_TmpSignalConversionAtVeCITR_b_ChrgPo);

    /* Outputs for Atomic SubSystem: '<S153>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S153>/Counter Reset  Enabled ' */
    /* Switch: '<S160>/Switch1' incorporates:
     *  Logic: '<S153>/Fail Counter Reset'
     *  Logic: '<S153>/NOT6'
     *  Switch: '<S160>/Switch2'
     *  Switch: '<S161>/Switch1'
     *  UnitDelay: '<S153>/Unit Delay'
     *  UnitDelay: '<S153>/Unit Delay1'
     */
    if ((rtb_TmpSignalConversionAtVeCITR_b_ChrgPo ||
            (CDMR_ac_DW.UnitDelay_DSTATE_ln)) ||
            (CDMR_ac_DW.UnitDelay1_DSTATE_fc))
    {
        /* Switch: '<S160>/Switch1' incorporates:
         *  Constant: '<S160>/Constant Value2'
         */
        VeCDMR_Cnt_ChrgPortLck_FailCnt = 0U;

        /* Switch: '<S161>/Switch1' incorporates:
         *  Constant: '<S161>/Constant Value2'
         */
        VeCDMR_Cnt_ChrgPortLck_SmpCnt = 0U;
    }
    else
    {
        if (rtb_Logical1_pv && (VeCDMR_b_LockDTCSet))
        {
            /* Switch: '<S160>/Switch1' incorporates:
             *  Constant: '<S160>/Constant Value1'
             *  Sum: '<S160>/Subtraction'
             *  Switch: '<S160>/Switch2'
             *  UnitDelay: '<S160>/Unit Delay'
             */
            VeCDMR_Cnt_ChrgPortLck_FailCnt = (uint16)(((uint32)
                VeCDMR_Cnt_ChrgPortLck_FailCnt) + 1U);
        }

        /* Switch: '<S161>/Switch2' */
        if (rtb_Logical1_pv)
        {
            /* Switch: '<S161>/Switch1' incorporates:
             *  Constant: '<S161>/Constant Value1'
             *  Sum: '<S161>/Subtraction'
             *  Switch: '<S161>/Switch2'
             *  UnitDelay: '<S161>/Unit Delay'
             */
            VeCDMR_Cnt_ChrgPortLck_SmpCnt = (uint16)(((uint32)
                VeCDMR_Cnt_ChrgPortLck_SmpCnt) + 1U);
        }

        /* End of Switch: '<S161>/Switch2' */
    }

    /* End of Switch: '<S160>/Switch1' */
    /* End of Outputs for SubSystem: '<S153>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S153>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S153>/Greater Than or Equal ' incorporates:
     *  Constant: '<S146>/Calib'
     */
    CDMR_ac_DW.UnitDelay1_DSTATE_fc = (VeCDMR_Cnt_ChrgPortLck_FailCnt >=
        KeCDMR_Cnt_ChrgPortLock_DTC);

    /* Logic: '<S153>/NOT5' incorporates:
     *  Constant: '<S147>/Calib'
     *  Logic: '<S153>/NOT3'
     *  RelationalOperator: '<S153>/Less Than  or Equal'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_ln = ((VeCDMR_Cnt_ChrgPortLck_SmpCnt >=
        KeCDMR_Cnt_ChrgPortLock_SmpCnt) && (!CDMR_ac_DW.UnitDelay1_DSTATE_fc));

    /* Switch: '<S166>/Switch1' incorporates:
     *  Constant: '<S159>/Constant Value'
     *  DataStoreWrite: '<S13>/Data Store Write2'
     *  Switch: '<S165>/Switch1'
     */
    if (CDMR_ac_B.Switch22)
    {
        CDMR_ac_DW.NeCDMR_Cnt_ChrgPortLock_MFOP = 0U;
    }
    else
    {
        if (CDMR_ac_DW.UnitDelay_DSTATE_ln)
        {
            /* MinMax: '<S159>/Minimum2' incorporates:
             *  DataStoreRead: '<S13>/Data Store Read2'
             *  Switch: '<S165>/Switch1'
             */
            if (VeCDMR_Cnt_ChrgPortLck_FailCnt >
                    CDMR_ac_DW.NeCDMR_Cnt_ChrgPortLock_MFOP)
            {
                /* DataStoreWrite: '<S13>/Data Store Write2' incorporates:
                 *  Switch: '<S165>/Switch1'
                 */
                CDMR_ac_DW.NeCDMR_Cnt_ChrgPortLock_MFOP =
                    VeCDMR_Cnt_ChrgPortLck_FailCnt;
            }

            /* End of MinMax: '<S159>/Minimum2' */
        }
    }

    /* End of Switch: '<S166>/Switch1' */

    /* Switch: '<S145>/Switch1' */
    if (!rtb_Switch1_o3q)
    {
        /* Switch: '<S145>/Switch2' */
        if (!rtb_Comparison9_m)
        {
            /* Switch: '<S145>/Switch1' incorporates:
             *  Switch: '<S145>/Switch2'
             *  Switch: '<S145>/Switch3'
             */
            rtb_AND_oh = (rtb_Comparison10_o && (VeCDMR_b_LINfaultTest1));
        }

        /* End of Switch: '<S145>/Switch2' */
    }

    /* End of Switch: '<S145>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/CDMR_MedTED' */

    /* Inport: '<Root>/VeCITR_b_ChrgPortLock_StsB_FA' */
    (void)Rte_Read_VeCITR_b_ChrgPortLock_StsB_FA_Value(&rtb_Comparison9_g);

    /* Inport: '<Root>/VeCANR_b_CBCLossComm_InKeyOff' */
    (void)Rte_Read_VeCANR_b_CBCLossComm_InKeyOff_VeCANR_b_CBCLossComm_InKeyOff
        (&rtb_Comparison10_j);

    /* Outputs for Function Call SubSystem: '<Root>/CDMR_MedTED' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Charging_Port'
     */
    /* Outputs for Enabled SubSystem: '<S152>/Fail' */
    CDMR_ac_Fail(CDMR_ac_DW.UnitDelay1_DSTATE_fc, &CDMR_ac_B.Merge_kp);

    /* End of Outputs for SubSystem: '<S152>/Fail' */

    /* Outputs for Enabled SubSystem: '<S152>/Init' */
    CDMR_ac_Init_b(rtb_TmpSignalConversionAtVeCITR_b_ChrgPo, &CDMR_ac_B.Merge_kp);

    /* End of Outputs for SubSystem: '<S152>/Init' */

    /* Outputs for Enabled SubSystem: '<S152>/Pass' */
    CDMR_ac_Pass(CDMR_ac_DW.UnitDelay_DSTATE_ln, &CDMR_ac_B.Merge_kp);

    /* End of Outputs for SubSystem: '<S152>/Pass' */

    /* RelationalOperator: '<S152>/Relational Operator' incorporates:
     *  Constant: '<S155>/Constant'
     *  Merge: '<S152>/Merge'
     */
    VeCDMR_b_ChrgPortLck_FltDtct = (((uint32)CDMR_ac_B.Merge_kp) ==
        CeDFIB_e_Fail);

    /* RelationalOperator: '<S17>/Comparison12' incorporates:
     *  Constant: '<S179>/Constant'
     */
    rtb_TmpSignalConversionAtVeCITR_b_ChrgPo = (((uint32)
        KeCDMR_e_ChrgPortLock_Type) == CeOBCR_e_ChrgPortLock_TypeA);

    /* Logic: '<S15>/Logical1' incorporates:
     *  Constant: '<S169>/Constant'
     *  Constant: '<S170>/Constant'
     *  Logic: '<S15>/Logical5'
     *  RelationalOperator: '<S15>/Comparison1'
     *  RelationalOperator: '<S15>/Comparison6'
     */
    VeCDMR_b_TypeB_Fault_Test5 = ((((uint32)
        rtb_TmpSignalConversionAtVeCITR_e_ChrgPo) != CeOBCR_e_InletLocked) &&
        ((((uint32)rtb_TmpSignalConversionAtVeOBCR_e_ChrgPo) ==
          CeOBCR_e_LockInlet) && VeCDMR_b_TypeB_Fault_Test9_tmp));

    /* Logic: '<S15>/Logical28' incorporates:
     *  Logic: '<S15>/Logical10'
     *  Logic: '<S15>/Logical13'
     *  Logic: '<S15>/Logical14'
     *  Logic: '<S15>/Logical23'
     *  Logic: '<S15>/Logical24'
     *  Logic: '<S15>/Logical6'
     *  Logic: '<S15>/Logical9'
     */
    VeCDMR_b_TypeB_EnableCond_UL = ((((((!VeCDMR_b_TypeB_Fault_Test5) &&
        (!rtb_Comparison9_g)) && (((!rtb_Logical1_kl) && (!rtb_Comparison10_j)) ||
        rtb_TmpSignalConversionAtVeCITR_b_HBridg)) &&
        (rtb_RelationalOperator3_jx ||
         (!rtb_TmpSignalConversionAtVeCITR_b_HBridg))) && (CDMR_ac_B.Switch3_c))
        && (CDMR_ac_B.Switch20));

    /* RelationalOperator: '<S17>/Comparison9' incorporates:
     *  Constant: '<S180>/Constant'
     */
    rtb_Comparison9_g = (((uint32)KeCDMR_e_ChrgPortLock_Type) ==
                         CeOBCR_e_ChrgPortLock_TypeB);

    /* RelationalOperator: '<S17>/Comparison10' incorporates:
     *  Constant: '<S178>/Constant'
     */
    rtb_Comparison10_j = (((uint32)KeCDMR_e_ChrgPortLock_Type) ==
                          CeOBCR_e_ChrgPortLock_TypeC);

    /* RelationalOperator: '<S193>/Relational Operator3' incorporates:
     *  Constant: '<S193>/Constant3'
     *  S-Function (sfix_bitop): '<S193>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_jx = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_m) & 64U) == 0U);

    /* Switch: '<S184>/Switch1' incorporates:
     *  Constant: '<S7>/FALSE Constant1'
     *  Switch: '<S184>/Switch2'
     *  Switch: '<S184>/Switch3'
     */
    if (rtb_TmpSignalConversionAtVeCITR_b_ChrgPo)
    {
        rtb_Logical14 = false;
    }
    else if (rtb_Comparison9_g)
    {
        /* Switch: '<S184>/Switch2' */
        rtb_Logical14 = VeCDMR_b_TypeB_EnableCond_UL;
    }
    else
    {
        rtb_Logical14 = (rtb_Comparison10_j && rtb_Logical14);
    }

    /* End of Switch: '<S184>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S193>/EdgeFalling1' */
    /* Logic: '<S193>/Logical Operator' incorporates:
     *  Logic: '<S195>/OR1'
     */
    rtb_Switch1_o3q = !rtb_RelationalOperator3_jx;

    /* End of Outputs for SubSystem: '<S193>/EdgeFalling1' */

    /* Logic: '<S193>/Logical1' incorporates:
     *  Constant: '<S189>/Calib'
     *  Constant: '<S193>/Constant1'
     *  Logic: '<S193>/Logical Operator'
     *  Logic: '<S193>/Logical10'
     *  Logic: '<S193>/Logical12'
     *  RelationalOperator: '<S193>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S193>/Bitwise Operator3'
     */
    rtb_Logical14 = (rtb_Logical14 && ((!KeCDMR_b_ChrgPortULCtrlCktPerf_LtchEnbl)
                      || (((((uint32)rtb_TmpSignalConversionAtVeDMAB_y_Stat_m) &
                            1U) == 0U) || rtb_Switch1_o3q)));

    /* Logic: '<S15>/Logical3' incorporates:
     *  Constant: '<S168>/Constant'
     *  Constant: '<S171>/Constant'
     *  Logic: '<S15>/Logical16'
     *  Logic: '<S15>/Logical2'
     *  RelationalOperator: '<S15>/Comparison2'
     *  RelationalOperator: '<S15>/Comparison3'
     */
    VeCDMR_b_TypeB_Fault_Test12 = ((((((uint32)
        rtb_TmpSignalConversionAtVeOBCR_e_ChrgPo) == CeOBCR_e_UnlockInlet) && ((
        !rtb_TmpSignalConversionAtVeCITR_b_PortLo) ||
        rtb_TmpSignalConversionAtVeCITR_b_HBridg)) && (((uint32)
        rtb_TmpSignalConversionAtVeCITR_e_ChrgPo) != CeOBCR_e_InletUnlocked)) &&
        VeCDMR_b_TypeB_EnableCond_Lock_tmp);

    /* RelationalOperator: '<S16>/Comparison2' incorporates:
     *  Constant: '<S176>/Constant'
     */
    VeCDMR_b_TypeC_Fault_Test6 = (((uint32)
        rtb_TmpSignalConversionAtVeOBCR_e_ChrgPo) == CeOBCR_e_UnlockInlet);

    /* Logic: '<S16>/Logical8' */
    VeCDMR_b_TypeC_Fault_Test7 = (((((VeCDMR_b_TypeC_Fault_Test6) &&
        rtb_TmpSignalConversionAtVeCITR_b_Chrg_b) &&
        rtb_TmpSignalConversionAtVeCITR_b_Chrg_i) &&
        VeCDMR_b_TypeC_Fault_Test5_tmp) && VeCDMR_b_TypeC_Fault_Test5_tmp_0);

    /* Switch: '<S183>/Switch1' incorporates:
     *  Switch: '<S183>/Switch2'
     *  Switch: '<S185>/Switch1'
     *  Switch: '<S185>/Switch2'
     */
    if (rtb_TmpSignalConversionAtVeCITR_b_ChrgPo)
    {
        /* Switch: '<S183>/Switch1' incorporates:
         *  Constant: '<S7>/FALSE Constant'
         */
        VeCDMR_b_UnlockDTCSet = false;

        /* UnitDelay: '<S109>/Unit Delay' */
        rtb_UnitDelay_o42 = false;
    }
    else if (rtb_Comparison9_g)
    {
        /* Switch: '<S183>/Switch1' incorporates:
         *  Switch: '<S183>/Switch2'
         */
        VeCDMR_b_UnlockDTCSet = VeCDMR_b_TypeB_Fault_Test12;

        /* UnitDelay: '<S109>/Unit Delay' incorporates:
         *  Constant: '<S182>/Constant'
         *  RelationalOperator: '<S17>/Comparison4'
         *  Switch: '<S185>/Switch2'
         */
        rtb_UnitDelay_o42 = (((uint32)rtb_TmpSignalConversionAtVeCITR_e_ChrgPo) ==
                             CeOBCR_e_InletUnlocked);
    }
    else
    {
        /* Switch: '<S183>/Switch1' incorporates:
         *  Switch: '<S183>/Switch2'
         *  Switch: '<S183>/Switch3'
         */
        VeCDMR_b_UnlockDTCSet = (rtb_Comparison10_j &&
            (VeCDMR_b_TypeC_Fault_Test7));

        /* Switch: '<S185>/Switch3' incorporates:
         *  Switch: '<S185>/Switch2'
         */
        if (!rtb_Comparison10_j)
        {
            /* UnitDelay: '<S109>/Unit Delay' incorporates:
             *  Constant: '<S17>/FALSE Constant2'
             *  Switch: '<S185>/Switch3'
             */
            rtb_UnitDelay_o42 = false;
        }
    }

    /* End of Switch: '<S183>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S17>/Signal Latch On With Reset' */
    /* Logic: '<S192>/OR1' incorporates:
     *  Constant: '<S181>/Constant'
     *  Logic: '<S17>/Logical'
     *  Logic: '<S192>/NOT'
     *  Logic: '<S192>/OR'
     *  RelationalOperator: '<S17>/Comparison1'
     *  UnitDelay: '<S192>/Unit Delay'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_b1 = ((VeCDMR_b_UnlockDTCSet) || (((((uint32)
        rtb_TmpSignalConversionAtVeOBCR_e_ChrgPo) != CeOBCR_e_UnlockInlet) ||
        (!rtb_UnitDelay_o42)) && (CDMR_ac_DW.UnitDelay_DSTATE_b1)));

    /* End of Outputs for SubSystem: '<S17>/Signal Latch On With Reset' */

    /* Switch: '<S17>/Switch1' incorporates:
     *  Constant: '<S190>/Calib'
     */
    if (KeCDMR_b_EnblDemature_ULock)
    {
        /* Switch: '<S17>/Switch1' */
        VeCDMR_b_UnlockDTCSet = CDMR_ac_DW.UnitDelay_DSTATE_b1;
    }

    /* End of Switch: '<S17>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S193>/EdgeFalling1' */
    /* Logic: '<S195>/AND' incorporates:
     *  UnitDelay: '<S195>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCITR_b_Chrg_b = (rtb_Switch1_o3q &&
        (CDMR_ac_DW.UnitDelay_DSTATE_nke));

    /* Update for UnitDelay: '<S195>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_nke = rtb_RelationalOperator3_jx;

    /* End of Outputs for SubSystem: '<S193>/EdgeFalling1' */

    /* Logic: '<S193>/Logical5' */
    rtb_Logical5_ko = (rtb_Logical5_ko ||
                       rtb_TmpSignalConversionAtVeCITR_b_Chrg_b);

    /* Outputs for Atomic SubSystem: '<S194>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S194>/Counter Reset  Enabled ' */
    /* Switch: '<S201>/Switch1' incorporates:
     *  Logic: '<S194>/Fail Counter Reset'
     *  Logic: '<S194>/NOT6'
     *  Switch: '<S201>/Switch2'
     *  Switch: '<S202>/Switch1'
     *  UnitDelay: '<S194>/Unit Delay'
     *  UnitDelay: '<S194>/Unit Delay1'
     */
    if ((rtb_Logical5_ko || (CDMR_ac_DW.UnitDelay_DSTATE_fb)) ||
            (CDMR_ac_DW.UnitDelay1_DSTATE_po))
    {
        /* Switch: '<S201>/Switch1' incorporates:
         *  Constant: '<S201>/Constant Value2'
         */
        VeCDMR_Cnt_ChrgPortUL_FailCnt = 0U;

        /* Switch: '<S202>/Switch1' incorporates:
         *  Constant: '<S202>/Constant Value2'
         */
        VeCDMR_Cnt_ChrgPortUL_SmpCnt = 0U;
    }
    else
    {
        if (rtb_Logical14 && (VeCDMR_b_UnlockDTCSet))
        {
            /* Switch: '<S201>/Switch1' incorporates:
             *  Constant: '<S201>/Constant Value1'
             *  Sum: '<S201>/Subtraction'
             *  Switch: '<S201>/Switch2'
             *  UnitDelay: '<S201>/Unit Delay'
             */
            VeCDMR_Cnt_ChrgPortUL_FailCnt = (uint16)(((uint32)
                VeCDMR_Cnt_ChrgPortUL_FailCnt) + 1U);
        }

        /* Switch: '<S202>/Switch2' */
        if (rtb_Logical14)
        {
            /* Switch: '<S202>/Switch1' incorporates:
             *  Constant: '<S202>/Constant Value1'
             *  Sum: '<S202>/Subtraction'
             *  Switch: '<S202>/Switch2'
             *  UnitDelay: '<S202>/Unit Delay'
             */
            VeCDMR_Cnt_ChrgPortUL_SmpCnt = (uint16)(((uint32)
                VeCDMR_Cnt_ChrgPortUL_SmpCnt) + 1U);
        }

        /* End of Switch: '<S202>/Switch2' */
    }

    /* End of Switch: '<S201>/Switch1' */
    /* End of Outputs for SubSystem: '<S194>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S194>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S194>/Greater Than or Equal ' incorporates:
     *  Constant: '<S187>/Calib'
     */
    CDMR_ac_DW.UnitDelay1_DSTATE_po = (VeCDMR_Cnt_ChrgPortUL_FailCnt >=
        KeCDMR_Cnt_ChrgPortUnlock_DTC);

    /* Logic: '<S194>/NOT5' incorporates:
     *  Constant: '<S188>/Calib'
     *  Logic: '<S194>/NOT3'
     *  RelationalOperator: '<S194>/Less Than  or Equal'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_fb = ((VeCDMR_Cnt_ChrgPortUL_SmpCnt >=
        KeCDMR_Cnt_ChrgPortUnlock_SmpCnt) && (!CDMR_ac_DW.UnitDelay1_DSTATE_po));

    /* Switch: '<S207>/Switch1' incorporates:
     *  Constant: '<S200>/Constant Value'
     *  DataStoreWrite: '<S17>/Data Store Write2'
     *  Switch: '<S206>/Switch1'
     */
    if (CDMR_ac_B.Switch22)
    {
        CDMR_ac_DW.NeCDMR_Cnt_ChrgPortUnlock_MFOP = 0U;
    }
    else
    {
        if (CDMR_ac_DW.UnitDelay_DSTATE_fb)
        {
            /* MinMax: '<S200>/Minimum2' incorporates:
             *  DataStoreRead: '<S17>/Data Store Read2'
             *  Switch: '<S206>/Switch1'
             */
            if (VeCDMR_Cnt_ChrgPortUL_FailCnt >
                    CDMR_ac_DW.NeCDMR_Cnt_ChrgPortUnlock_MFOP)
            {
                /* DataStoreWrite: '<S17>/Data Store Write2' incorporates:
                 *  Switch: '<S206>/Switch1'
                 */
                CDMR_ac_DW.NeCDMR_Cnt_ChrgPortUnlock_MFOP =
                    VeCDMR_Cnt_ChrgPortUL_FailCnt;
            }

            /* End of MinMax: '<S200>/Minimum2' */
        }
    }

    /* End of Switch: '<S207>/Switch1' */

    /* Switch: '<S186>/Switch1' incorporates:
     *  Switch: '<S186>/Switch2'
     */
    if (rtb_TmpSignalConversionAtVeCITR_b_ChrgPo)
    {
        /* Switch: '<S186>/Switch1' incorporates:
         *  Constant: '<S7>/FALSE Constant2'
         */
        rtb_Logical1_kl = false;
    }
    else
    {
        if (!rtb_Comparison9_g)
        {
            /* Switch: '<S186>/Switch1' incorporates:
             *  Switch: '<S186>/Switch2'
             *  Switch: '<S186>/Switch3'
             */
            rtb_Logical1_kl = (rtb_Comparison10_j && (VeCDMR_b_LINfaultTest1));
        }
    }

    /* End of Switch: '<S186>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S193>/Fail' */
    CDMR_ac_Fail(CDMR_ac_DW.UnitDelay1_DSTATE_po, &CDMR_ac_B.Merge_kf);

    /* End of Outputs for SubSystem: '<S193>/Fail' */

    /* Outputs for Enabled SubSystem: '<S193>/Init' */
    CDMR_ac_Init_b(rtb_Logical5_ko, &CDMR_ac_B.Merge_kf);

    /* End of Outputs for SubSystem: '<S193>/Init' */

    /* Outputs for Enabled SubSystem: '<S193>/Pass' */
    CDMR_ac_Pass(CDMR_ac_DW.UnitDelay_DSTATE_fb, &CDMR_ac_B.Merge_kf);

    /* End of Outputs for SubSystem: '<S193>/Pass' */

    /* RelationalOperator: '<S193>/Relational Operator' incorporates:
     *  Constant: '<S196>/Constant'
     *  Merge: '<S193>/Merge'
     */
    VeCDMR_b_ChrgPortUL_Flt = (((uint32)CDMR_ac_B.Merge_kf) == CeDFIB_e_Fail);

    /* RelationalOperator: '<S11>/Comparison1' incorporates:
     *  Constant: '<S59>/Constant'
     */
    rtb_Logical5_ko = (((uint32)rtb_TmpSignalConversionAtVeOBCR_e_ChrgPo) ==
                       CeOBCR_e_UnlockInlet);

    /* RelationalOperator: '<S11>/Comparison4' incorporates:
     *  Constant: '<S58>/Constant'
     */
    rtb_TmpSignalConversionAtVeCITR_b_ChrgPo = (((uint32)
        rtb_TmpSignalConversionAtVeOBCR_e_ChrgPo) == CeOBCR_e_LockInlet);

    /* Outputs for Atomic SubSystem: '<S84>/EdgeRising3' */
    /* Logic: '<S87>/OR1' incorporates:
     *  UnitDelay: '<S87>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCITR_b_Chrg_b = !CDMR_ac_DW.UnitDelay_DSTATE_am;

    /* Update for UnitDelay: '<S87>/Unit Delay' incorporates:
     *  Constant: '<S84>/TRUE Constant5'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_am = true;

    /* End of Outputs for SubSystem: '<S84>/EdgeRising3' */

    /* Outputs for Atomic SubSystem: '<S84>/EdgeRising1' */
    /* Logic: '<S86>/OR1' incorporates:
     *  UnitDelay: '<S86>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCITR_b_PortLo = !CDMR_ac_DW.UnitDelay_DSTATE_f0;

    /* Update for UnitDelay: '<S86>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_f0 = rtb_TmpSignalConversionAtVeCITR_b_ChrgPo;

    /* Outputs for Atomic SubSystem: '<S84>/EdgeRising3' */
    /* Logic: '<S84>/Logical Operator4' incorporates:
     *  Logic: '<S86>/AND'
     *  Logic: '<S87>/AND'
     */
    rtb_TmpSignalConversionAtVeCITR_b_Chrg_b =
        (rtb_TmpSignalConversionAtVeCITR_b_Chrg_b ||
         (rtb_TmpSignalConversionAtVeCITR_b_ChrgPo &&
          rtb_TmpSignalConversionAtVeCITR_b_PortLo));

    /* End of Outputs for SubSystem: '<S84>/EdgeRising3' */
    /* End of Outputs for SubSystem: '<S84>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S69>/Timer Retrigger Reset Trigger Enabled' */
    /* Outputs for Atomic SubSystem: '<S85>/EdgeRising_F2T' */
    /* Logic: '<S88>/OR1' incorporates:
     *  UnitDelay: '<S88>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCITR_b_PortLo = !CDMR_ac_DW.UnitDelay_DSTATE_c0;

    /* Update for UnitDelay: '<S88>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_c0 = rtb_TmpSignalConversionAtVeCITR_b_Chrg_b;

    /* Switch: '<S85>/Switch1' incorporates:
     *  Constant: '<S63>/Calib'
     *  Logic: '<S88>/AND'
     *  Switch: '<S85>/Switch2'
     *  UnitDelay: '<S85>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeCITR_b_Chrg_b &&
            rtb_TmpSignalConversionAtVeCITR_b_PortLo)
    {
        CDMR_ac_DW.UnitDelay_DSTATE_om = KeCDMR_t_ChrgPrt_IUMPR_ShrtTmr;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeCITR_b_ChrgPo)
        {
            /* UnitDelay: '<S85>/Unit Delay' incorporates:
             *  Constant: '<S64>/Calib'
             *  Constant: '<S85>/Constant Value4'
             *  MinMax: '<S85>/Maximum'
             *  Sum: '<S85>/Subtraction'
             *  Switch: '<S85>/Switch2'
             */
            CDMR_ac_DW.UnitDelay_DSTATE_om = fmaxf
                (CDMR_ac_DW.UnitDelay_DSTATE_om - KeCDMR_t_IUMPR_CP_dT, 0.0F);
        }
    }

    /* End of Switch: '<S85>/Switch1' */
    /* End of Outputs for SubSystem: '<S85>/EdgeRising_F2T' */

    /* Logic: '<S69>/Logical Operator2' incorporates:
     *  Constant: '<S85>/Constant Value2'
     *  Logic: '<S69>/Logical Operator1'
     *  RelationalOperator: '<S85>/Greater  Than1'
     *  UnitDelay: '<S85>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCITR_b_PortLo =
        (rtb_TmpSignalConversionAtVeCITR_b_ChrgPo &&
         (CDMR_ac_DW.UnitDelay_DSTATE_om <= 0.0F));

    /* End of Outputs for SubSystem: '<S69>/Timer Retrigger Reset Trigger Enabled' */

    /* Outputs for Atomic SubSystem: '<S60>/EdgeFalling' */
    /* Logic: '<S67>/AND' incorporates:
     *  Logic: '<S67>/OR1'
     *  UnitDelay: '<S67>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCITR_b_Chrg_b =
        ((!rtb_TmpSignalConversionAtVeCITR_b_PortLo) &&
         (CDMR_ac_DW.UnitDelay_DSTATE_es));

    /* Update for UnitDelay: '<S67>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_es = rtb_TmpSignalConversionAtVeCITR_b_PortLo;

    /* End of Outputs for SubSystem: '<S60>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S79>/EdgeRising3' */
    /* Logic: '<S82>/OR1' incorporates:
     *  UnitDelay: '<S82>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCITR_b_HBridg = !CDMR_ac_DW.UnitDelay_DSTATE_dg;

    /* Update for UnitDelay: '<S82>/Unit Delay' incorporates:
     *  Constant: '<S79>/TRUE Constant5'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_dg = true;

    /* End of Outputs for SubSystem: '<S79>/EdgeRising3' */

    /* Outputs for Atomic SubSystem: '<S79>/EdgeRising1' */
    /* Update for UnitDelay: '<S81>/Unit Delay' incorporates:
     *  Constant: '<S11>/FALSE Constant'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_fs = false;

    /* End of Outputs for SubSystem: '<S79>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S68>/Timer Retrigger Reset Trigger Enabled' */
    /* Outputs for Atomic SubSystem: '<S80>/EdgeRising_F2T' */
    /* Logic: '<S83>/OR1' incorporates:
     *  UnitDelay: '<S83>/Unit Delay'
     */
    rtb_Comparison9_g = !CDMR_ac_DW.UnitDelay_DSTATE_hyu;

    /* Outputs for Atomic SubSystem: '<S79>/EdgeRising3' */
    /* Update for UnitDelay: '<S83>/Unit Delay' incorporates:
     *  Logic: '<S82>/AND'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_hyu = rtb_TmpSignalConversionAtVeCITR_b_HBridg;

    /* Switch: '<S80>/Switch1' incorporates:
     *  Constant: '<S62>/Calib'
     *  Logic: '<S82>/AND'
     *  Logic: '<S83>/AND'
     *  Switch: '<S80>/Switch2'
     *  UnitDelay: '<S80>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeCITR_b_HBridg && rtb_Comparison9_g)
    {
        CDMR_ac_DW.UnitDelay_DSTATE_d = KeCDMR_t_ChrgPrt_IUMPR_LongTmr;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeCITR_b_ChrgPo)
        {
            /* UnitDelay: '<S80>/Unit Delay' incorporates:
             *  Constant: '<S64>/Calib'
             *  Constant: '<S80>/Constant Value4'
             *  MinMax: '<S80>/Maximum'
             *  Sum: '<S80>/Subtraction'
             *  Switch: '<S80>/Switch2'
             */
            CDMR_ac_DW.UnitDelay_DSTATE_d = fmaxf(CDMR_ac_DW.UnitDelay_DSTATE_d
                - KeCDMR_t_IUMPR_CP_dT, 0.0F);
        }
    }

    /* End of Switch: '<S80>/Switch1' */
    /* End of Outputs for SubSystem: '<S79>/EdgeRising3' */
    /* End of Outputs for SubSystem: '<S80>/EdgeRising_F2T' */
    /* End of Outputs for SubSystem: '<S68>/Timer Retrigger Reset Trigger Enabled' */

    /* Outputs for Atomic SubSystem: '<S75>/EdgeRising3' */
    /* Logic: '<S95>/AND' incorporates:
     *  Logic: '<S95>/OR1'
     *  UnitDelay: '<S95>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCITR_b_HBridg = !CDMR_ac_DW.UnitDelay_DSTATE_gk;

    /* Update for UnitDelay: '<S95>/Unit Delay' incorporates:
     *  Constant: '<S75>/TRUE Constant5'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_gk = true;

    /* End of Outputs for SubSystem: '<S75>/EdgeRising3' */

    /* Outputs for Atomic SubSystem: '<S75>/EdgeRising1' */
    /* Update for UnitDelay: '<S94>/Unit Delay' incorporates:
     *  Constant: '<S11>/FALSE Constant'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_dj = false;

    /* End of Outputs for SubSystem: '<S75>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S60>/Signal Latch On With Reset2' */
    /* Outputs for Atomic SubSystem: '<S68>/Timer Retrigger Reset Trigger Enabled' */
    /* Logic: '<S73>/OR1' incorporates:
     *  Constant: '<S80>/Constant Value2'
     *  Logic: '<S68>/Logical Operator1'
     *  Logic: '<S68>/Logical Operator2'
     *  Logic: '<S73>/OR'
     *  Logic: '<S75>/Logical Operator4'
     *  RelationalOperator: '<S80>/Greater  Than1'
     *  UnitDelay: '<S73>/Unit Delay'
     *  UnitDelay: '<S80>/Unit Delay'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_ft = ((rtb_TmpSignalConversionAtVeCITR_b_ChrgPo &&
        (CDMR_ac_DW.UnitDelay_DSTATE_d <= 0.0F)) ||
        ((!rtb_TmpSignalConversionAtVeCITR_b_HBridg) &&
         (CDMR_ac_DW.UnitDelay_DSTATE_ft)));

    /* End of Outputs for SubSystem: '<S68>/Timer Retrigger Reset Trigger Enabled' */
    /* End of Outputs for SubSystem: '<S60>/Signal Latch On With Reset2' */

    /* Outputs for Atomic SubSystem: '<S76>/EdgeRising3' */
    /* Logic: '<S97>/AND' incorporates:
     *  Logic: '<S97>/OR1'
     *  UnitDelay: '<S97>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCITR_b_HBridg = !CDMR_ac_DW.UnitDelay_DSTATE_iz;

    /* Update for UnitDelay: '<S97>/Unit Delay' incorporates:
     *  Constant: '<S76>/TRUE Constant5'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_iz = true;

    /* End of Outputs for SubSystem: '<S76>/EdgeRising3' */

    /* Outputs for Atomic SubSystem: '<S76>/EdgeRising1' */
    /* Update for UnitDelay: '<S96>/Unit Delay' incorporates:
     *  Constant: '<S11>/FALSE Constant'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_aq = false;

    /* End of Outputs for SubSystem: '<S76>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S60>/Signal Latch On With Reset1' */
    /* Logic: '<S72>/OR1' incorporates:
     *  Logic: '<S72>/OR'
     *  Logic: '<S76>/Logical Operator4'
     *  UnitDelay: '<S72>/Unit Delay'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_asx = (rtb_TmpSignalConversionAtVeCITR_b_PortLo ||
        ((!rtb_TmpSignalConversionAtVeCITR_b_HBridg) &&
         (CDMR_ac_DW.UnitDelay_DSTATE_asx)));

    /* End of Outputs for SubSystem: '<S60>/Signal Latch On With Reset1' */

    /* Outputs for Atomic SubSystem: '<S78>/EdgeRising3' */
    /* Logic: '<S101>/AND' incorporates:
     *  Logic: '<S101>/OR1'
     *  UnitDelay: '<S101>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCITR_b_PortLo = !CDMR_ac_DW.UnitDelay_DSTATE_kiv;

    /* Update for UnitDelay: '<S101>/Unit Delay' incorporates:
     *  Constant: '<S78>/TRUE Constant5'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_kiv = true;

    /* End of Outputs for SubSystem: '<S78>/EdgeRising3' */

    /* Outputs for Atomic SubSystem: '<S78>/EdgeRising1' */
    /* Update for UnitDelay: '<S100>/Unit Delay' incorporates:
     *  Constant: '<S11>/FALSE Constant'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_fi = false;

    /* End of Outputs for SubSystem: '<S78>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S60>/Signal Latch On With Reset' */
    /* Logic: '<S71>/OR1' incorporates:
     *  Logic: '<S71>/OR'
     *  Logic: '<S78>/Logical Operator4'
     *  UnitDelay: '<S71>/Unit Delay'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_n5 = (rtb_TmpSignalConversionAtVeCITR_b_Chrg_b ||
        ((!rtb_TmpSignalConversionAtVeCITR_b_PortLo) &&
         (CDMR_ac_DW.UnitDelay_DSTATE_n5)));

    /* End of Outputs for SubSystem: '<S60>/Signal Latch On With Reset' */

    /* Logic: '<S60>/Logical Operator8' */
    rtb_TmpSignalConversionAtVeCITR_b_ChrgPo = ((CDMR_ac_DW.UnitDelay_DSTATE_n5)
        && rtb_TmpSignalConversionAtVeCITR_b_ChrgPo);

    /* Outputs for Atomic SubSystem: '<S89>/EdgeRising3' */
    /* Logic: '<S92>/OR1' incorporates:
     *  UnitDelay: '<S92>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCITR_b_Chrg_b = !CDMR_ac_DW.UnitDelay_DSTATE_h3;

    /* Update for UnitDelay: '<S92>/Unit Delay' incorporates:
     *  Constant: '<S89>/TRUE Constant5'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_h3 = true;

    /* End of Outputs for SubSystem: '<S89>/EdgeRising3' */

    /* Outputs for Atomic SubSystem: '<S89>/EdgeRising1' */
    /* Logic: '<S91>/OR1' incorporates:
     *  UnitDelay: '<S91>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCITR_b_PortLo = !CDMR_ac_DW.UnitDelay_DSTATE_b4;

    /* Update for UnitDelay: '<S91>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_b4 = rtb_TmpSignalConversionAtVeCITR_b_ChrgPo;

    /* Outputs for Atomic SubSystem: '<S89>/EdgeRising3' */
    /* Logic: '<S89>/Logical Operator4' incorporates:
     *  Logic: '<S91>/AND'
     *  Logic: '<S92>/AND'
     */
    rtb_TmpSignalConversionAtVeCITR_b_Chrg_b =
        (rtb_TmpSignalConversionAtVeCITR_b_Chrg_b ||
         (rtb_TmpSignalConversionAtVeCITR_b_ChrgPo &&
          rtb_TmpSignalConversionAtVeCITR_b_PortLo));

    /* End of Outputs for SubSystem: '<S89>/EdgeRising3' */
    /* End of Outputs for SubSystem: '<S89>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S70>/Timer Retrigger Reset Trigger Enabled' */
    /* Outputs for Atomic SubSystem: '<S90>/EdgeRising_F2T' */
    /* Logic: '<S93>/OR1' incorporates:
     *  UnitDelay: '<S93>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCITR_b_PortLo = !CDMR_ac_DW.UnitDelay_DSTATE_lr;

    /* Update for UnitDelay: '<S93>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_lr = rtb_TmpSignalConversionAtVeCITR_b_Chrg_b;

    /* Switch: '<S90>/Switch1' incorporates:
     *  Constant: '<S63>/Calib'
     *  Logic: '<S93>/AND'
     *  Switch: '<S90>/Switch2'
     *  UnitDelay: '<S90>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeCITR_b_Chrg_b &&
            rtb_TmpSignalConversionAtVeCITR_b_PortLo)
    {
        CDMR_ac_DW.UnitDelay_DSTATE_c = KeCDMR_t_ChrgPrt_IUMPR_ShrtTmr;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeCITR_b_ChrgPo)
        {
            /* UnitDelay: '<S90>/Unit Delay' incorporates:
             *  Constant: '<S64>/Calib'
             *  Constant: '<S90>/Constant Value4'
             *  MinMax: '<S90>/Maximum'
             *  Sum: '<S90>/Subtraction'
             *  Switch: '<S90>/Switch2'
             */
            CDMR_ac_DW.UnitDelay_DSTATE_c = fmaxf(CDMR_ac_DW.UnitDelay_DSTATE_c
                - KeCDMR_t_IUMPR_CP_dT, 0.0F);
        }
    }

    /* End of Switch: '<S90>/Switch1' */
    /* End of Outputs for SubSystem: '<S90>/EdgeRising_F2T' */
    /* End of Outputs for SubSystem: '<S70>/Timer Retrigger Reset Trigger Enabled' */

    /* Outputs for Atomic SubSystem: '<S77>/EdgeRising3' */
    /* Logic: '<S99>/AND' incorporates:
     *  Logic: '<S99>/OR1'
     *  UnitDelay: '<S99>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCITR_b_Chrg_b = !CDMR_ac_DW.UnitDelay_DSTATE_b3;

    /* Update for UnitDelay: '<S99>/Unit Delay' incorporates:
     *  Constant: '<S77>/TRUE Constant5'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_b3 = true;

    /* End of Outputs for SubSystem: '<S77>/EdgeRising3' */

    /* Outputs for Atomic SubSystem: '<S77>/EdgeRising1' */
    /* Update for UnitDelay: '<S98>/Unit Delay' incorporates:
     *  Constant: '<S11>/FALSE Constant'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_p0 = false;

    /* End of Outputs for SubSystem: '<S77>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S60>/Signal Latch On With Reset3' */
    /* Outputs for Atomic SubSystem: '<S70>/Timer Retrigger Reset Trigger Enabled' */
    /* Logic: '<S74>/OR1' incorporates:
     *  Constant: '<S90>/Constant Value2'
     *  Logic: '<S70>/Logical Operator1'
     *  Logic: '<S70>/Logical Operator2'
     *  Logic: '<S74>/OR'
     *  Logic: '<S77>/Logical Operator4'
     *  RelationalOperator: '<S90>/Greater  Than1'
     *  UnitDelay: '<S74>/Unit Delay'
     *  UnitDelay: '<S90>/Unit Delay'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_f5 = ((rtb_TmpSignalConversionAtVeCITR_b_ChrgPo &&
        (CDMR_ac_DW.UnitDelay_DSTATE_c <= 0.0F)) ||
        ((!rtb_TmpSignalConversionAtVeCITR_b_Chrg_b) &&
         (CDMR_ac_DW.UnitDelay_DSTATE_f5)));

    /* End of Outputs for SubSystem: '<S70>/Timer Retrigger Reset Trigger Enabled' */
    /* End of Outputs for SubSystem: '<S60>/Signal Latch On With Reset3' */

    /* Outputs for Atomic SubSystem: '<S119>/EdgeRising3' */
    /* Logic: '<S122>/OR1' incorporates:
     *  UnitDelay: '<S122>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCITR_b_ChrgPo = !CDMR_ac_DW.UnitDelay_DSTATE_hk;

    /* Update for UnitDelay: '<S122>/Unit Delay' incorporates:
     *  Constant: '<S119>/TRUE Constant5'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_hk = true;

    /* End of Outputs for SubSystem: '<S119>/EdgeRising3' */

    /* Outputs for Atomic SubSystem: '<S119>/EdgeRising1' */
    /* Logic: '<S121>/OR1' incorporates:
     *  UnitDelay: '<S121>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCITR_b_Chrg_b = !CDMR_ac_DW.UnitDelay_DSTATE_ba;

    /* Update for UnitDelay: '<S121>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_ba = rtb_Logical5_ko;

    /* Outputs for Atomic SubSystem: '<S119>/EdgeRising3' */
    /* Logic: '<S119>/Logical Operator4' incorporates:
     *  Logic: '<S121>/AND'
     *  Logic: '<S122>/AND'
     */
    rtb_TmpSignalConversionAtVeCITR_b_ChrgPo =
        (rtb_TmpSignalConversionAtVeCITR_b_ChrgPo || (rtb_Logical5_ko &&
          rtb_TmpSignalConversionAtVeCITR_b_Chrg_b));

    /* End of Outputs for SubSystem: '<S119>/EdgeRising3' */
    /* End of Outputs for SubSystem: '<S119>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S104>/Timer Retrigger Reset Trigger Enabled' */
    /* Outputs for Atomic SubSystem: '<S120>/EdgeRising_F2T' */
    /* Logic: '<S123>/OR1' incorporates:
     *  UnitDelay: '<S123>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCITR_b_Chrg_b = !CDMR_ac_DW.UnitDelay_DSTATE_gj;

    /* Update for UnitDelay: '<S123>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_gj = rtb_TmpSignalConversionAtVeCITR_b_ChrgPo;

    /* Switch: '<S120>/Switch1' incorporates:
     *  Constant: '<S63>/Calib'
     *  Logic: '<S123>/AND'
     *  Switch: '<S120>/Switch2'
     *  UnitDelay: '<S120>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeCITR_b_ChrgPo &&
            rtb_TmpSignalConversionAtVeCITR_b_Chrg_b)
    {
        CDMR_ac_DW.UnitDelay_DSTATE_o = KeCDMR_t_ChrgPrt_IUMPR_ShrtTmr;
    }
    else
    {
        if (rtb_Logical5_ko)
        {
            /* UnitDelay: '<S120>/Unit Delay' incorporates:
             *  Constant: '<S120>/Constant Value4'
             *  Constant: '<S64>/Calib'
             *  MinMax: '<S120>/Maximum'
             *  Sum: '<S120>/Subtraction'
             *  Switch: '<S120>/Switch2'
             */
            CDMR_ac_DW.UnitDelay_DSTATE_o = fmaxf(CDMR_ac_DW.UnitDelay_DSTATE_o
                - KeCDMR_t_IUMPR_CP_dT, 0.0F);
        }
    }

    /* End of Switch: '<S120>/Switch1' */
    /* End of Outputs for SubSystem: '<S120>/EdgeRising_F2T' */

    /* Logic: '<S104>/Logical Operator2' incorporates:
     *  Constant: '<S120>/Constant Value2'
     *  Logic: '<S104>/Logical Operator1'
     *  RelationalOperator: '<S120>/Greater  Than1'
     *  UnitDelay: '<S120>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCITR_b_Chrg_b = (rtb_Logical5_ko &&
        (CDMR_ac_DW.UnitDelay_DSTATE_o <= 0.0F));

    /* End of Outputs for SubSystem: '<S104>/Timer Retrigger Reset Trigger Enabled' */

    /* Outputs for Atomic SubSystem: '<S61>/EdgeFalling' */
    /* Logic: '<S102>/AND' incorporates:
     *  Logic: '<S102>/OR1'
     *  UnitDelay: '<S102>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCITR_b_ChrgPo =
        ((!rtb_TmpSignalConversionAtVeCITR_b_Chrg_b) &&
         (CDMR_ac_DW.UnitDelay_DSTATE_o4r));

    /* Update for UnitDelay: '<S102>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_o4r = rtb_TmpSignalConversionAtVeCITR_b_Chrg_b;

    /* End of Outputs for SubSystem: '<S61>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S114>/EdgeRising3' */
    /* Logic: '<S117>/OR1' incorporates:
     *  UnitDelay: '<S117>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCITR_b_PortLo = !CDMR_ac_DW.UnitDelay_DSTATE_dry;

    /* Update for UnitDelay: '<S117>/Unit Delay' incorporates:
     *  Constant: '<S114>/TRUE Constant5'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_dry = true;

    /* End of Outputs for SubSystem: '<S114>/EdgeRising3' */

    /* Outputs for Atomic SubSystem: '<S114>/EdgeRising1' */
    /* Update for UnitDelay: '<S116>/Unit Delay' incorporates:
     *  Constant: '<S11>/FALSE Constant1'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_mv = false;

    /* End of Outputs for SubSystem: '<S114>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S103>/Timer Retrigger Reset Trigger Enabled' */
    /* Outputs for Atomic SubSystem: '<S115>/EdgeRising_F2T' */
    /* Logic: '<S118>/OR1' incorporates:
     *  UnitDelay: '<S118>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCITR_b_HBridg = !CDMR_ac_DW.UnitDelay_DSTATE_nz;

    /* Outputs for Atomic SubSystem: '<S114>/EdgeRising3' */
    /* Update for UnitDelay: '<S118>/Unit Delay' incorporates:
     *  Logic: '<S117>/AND'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_nz = rtb_TmpSignalConversionAtVeCITR_b_PortLo;

    /* Switch: '<S115>/Switch1' incorporates:
     *  Constant: '<S62>/Calib'
     *  Logic: '<S117>/AND'
     *  Logic: '<S118>/AND'
     *  Switch: '<S115>/Switch2'
     *  UnitDelay: '<S115>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeCITR_b_PortLo &&
            rtb_TmpSignalConversionAtVeCITR_b_HBridg)
    {
        CDMR_ac_DW.UnitDelay_DSTATE_l = KeCDMR_t_ChrgPrt_IUMPR_LongTmr;
    }
    else
    {
        if (rtb_Logical5_ko)
        {
            /* UnitDelay: '<S115>/Unit Delay' incorporates:
             *  Constant: '<S115>/Constant Value4'
             *  Constant: '<S64>/Calib'
             *  MinMax: '<S115>/Maximum'
             *  Sum: '<S115>/Subtraction'
             *  Switch: '<S115>/Switch2'
             */
            CDMR_ac_DW.UnitDelay_DSTATE_l = fmaxf(CDMR_ac_DW.UnitDelay_DSTATE_l
                - KeCDMR_t_IUMPR_CP_dT, 0.0F);
        }
    }

    /* End of Switch: '<S115>/Switch1' */
    /* End of Outputs for SubSystem: '<S114>/EdgeRising3' */
    /* End of Outputs for SubSystem: '<S115>/EdgeRising_F2T' */
    /* End of Outputs for SubSystem: '<S103>/Timer Retrigger Reset Trigger Enabled' */

    /* Outputs for Atomic SubSystem: '<S110>/EdgeRising3' */
    /* Logic: '<S130>/AND' incorporates:
     *  Logic: '<S130>/OR1'
     *  UnitDelay: '<S130>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCITR_b_PortLo = !CDMR_ac_DW.UnitDelay_DSTATE_j2;

    /* Update for UnitDelay: '<S130>/Unit Delay' incorporates:
     *  Constant: '<S110>/TRUE Constant5'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_j2 = true;

    /* End of Outputs for SubSystem: '<S110>/EdgeRising3' */

    /* Outputs for Atomic SubSystem: '<S110>/EdgeRising1' */
    /* Update for UnitDelay: '<S129>/Unit Delay' incorporates:
     *  Constant: '<S11>/FALSE Constant1'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_nkg = false;

    /* End of Outputs for SubSystem: '<S110>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S61>/Signal Latch On With Reset2' */
    /* Outputs for Atomic SubSystem: '<S103>/Timer Retrigger Reset Trigger Enabled' */
    /* Logic: '<S108>/OR1' incorporates:
     *  Constant: '<S115>/Constant Value2'
     *  Logic: '<S103>/Logical Operator1'
     *  Logic: '<S103>/Logical Operator2'
     *  Logic: '<S108>/OR'
     *  Logic: '<S110>/Logical Operator4'
     *  RelationalOperator: '<S115>/Greater  Than1'
     *  UnitDelay: '<S108>/Unit Delay'
     *  UnitDelay: '<S115>/Unit Delay'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_lj = ((rtb_Logical5_ko &&
        (CDMR_ac_DW.UnitDelay_DSTATE_l <= 0.0F)) ||
        ((!rtb_TmpSignalConversionAtVeCITR_b_PortLo) &&
         (CDMR_ac_DW.UnitDelay_DSTATE_lj)));

    /* End of Outputs for SubSystem: '<S103>/Timer Retrigger Reset Trigger Enabled' */
    /* End of Outputs for SubSystem: '<S61>/Signal Latch On With Reset2' */

    /* Outputs for Atomic SubSystem: '<S111>/EdgeRising3' */
    /* Logic: '<S132>/AND' incorporates:
     *  Logic: '<S132>/OR1'
     *  UnitDelay: '<S132>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCITR_b_PortLo = !CDMR_ac_DW.UnitDelay_DSTATE_ngg;

    /* Update for UnitDelay: '<S132>/Unit Delay' incorporates:
     *  Constant: '<S111>/TRUE Constant5'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_ngg = true;

    /* End of Outputs for SubSystem: '<S111>/EdgeRising3' */

    /* Outputs for Atomic SubSystem: '<S111>/EdgeRising1' */
    /* Update for UnitDelay: '<S131>/Unit Delay' incorporates:
     *  Constant: '<S11>/FALSE Constant1'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_fev = false;

    /* End of Outputs for SubSystem: '<S111>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S61>/Signal Latch On With Reset1' */
    /* Logic: '<S107>/OR1' incorporates:
     *  Logic: '<S107>/OR'
     *  Logic: '<S111>/Logical Operator4'
     *  UnitDelay: '<S107>/Unit Delay'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_kw = (rtb_TmpSignalConversionAtVeCITR_b_Chrg_b ||
        ((!rtb_TmpSignalConversionAtVeCITR_b_PortLo) &&
         (CDMR_ac_DW.UnitDelay_DSTATE_kw)));

    /* End of Outputs for SubSystem: '<S61>/Signal Latch On With Reset1' */

    /* Outputs for Atomic SubSystem: '<S113>/EdgeRising3' */
    /* Logic: '<S136>/AND' incorporates:
     *  Logic: '<S136>/OR1'
     *  UnitDelay: '<S136>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCITR_b_Chrg_b = !CDMR_ac_DW.UnitDelay_DSTATE_p2;

    /* Update for UnitDelay: '<S136>/Unit Delay' incorporates:
     *  Constant: '<S113>/TRUE Constant5'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_p2 = true;

    /* End of Outputs for SubSystem: '<S113>/EdgeRising3' */

    /* Outputs for Atomic SubSystem: '<S113>/EdgeRising1' */
    /* Update for UnitDelay: '<S135>/Unit Delay' incorporates:
     *  Constant: '<S11>/FALSE Constant1'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_ejh = false;

    /* End of Outputs for SubSystem: '<S113>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S61>/Signal Latch On With Reset' */
    /* Logic: '<S106>/OR1' incorporates:
     *  Logic: '<S106>/OR'
     *  Logic: '<S113>/Logical Operator4'
     *  UnitDelay: '<S106>/Unit Delay'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_ce = (rtb_TmpSignalConversionAtVeCITR_b_ChrgPo ||
        ((!rtb_TmpSignalConversionAtVeCITR_b_Chrg_b) &&
         (CDMR_ac_DW.UnitDelay_DSTATE_ce)));

    /* End of Outputs for SubSystem: '<S61>/Signal Latch On With Reset' */

    /* Logic: '<S61>/Logical Operator8' */
    rtb_Logical5_ko = ((CDMR_ac_DW.UnitDelay_DSTATE_ce) && rtb_Logical5_ko);

    /* Outputs for Atomic SubSystem: '<S124>/EdgeRising3' */
    /* Logic: '<S127>/OR1' incorporates:
     *  UnitDelay: '<S127>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCITR_b_ChrgPo = !CDMR_ac_DW.UnitDelay_DSTATE_a0;

    /* Update for UnitDelay: '<S127>/Unit Delay' incorporates:
     *  Constant: '<S124>/TRUE Constant5'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_a0 = true;

    /* End of Outputs for SubSystem: '<S124>/EdgeRising3' */

    /* Outputs for Atomic SubSystem: '<S124>/EdgeRising1' */
    /* Logic: '<S126>/OR1' incorporates:
     *  UnitDelay: '<S126>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCITR_b_Chrg_b = !CDMR_ac_DW.UnitDelay_DSTATE_oh;

    /* Update for UnitDelay: '<S126>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_oh = rtb_Logical5_ko;

    /* Outputs for Atomic SubSystem: '<S124>/EdgeRising3' */
    /* Logic: '<S124>/Logical Operator4' incorporates:
     *  Logic: '<S126>/AND'
     *  Logic: '<S127>/AND'
     */
    rtb_TmpSignalConversionAtVeCITR_b_ChrgPo =
        (rtb_TmpSignalConversionAtVeCITR_b_ChrgPo || (rtb_Logical5_ko &&
          rtb_TmpSignalConversionAtVeCITR_b_Chrg_b));

    /* End of Outputs for SubSystem: '<S124>/EdgeRising3' */
    /* End of Outputs for SubSystem: '<S124>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S105>/Timer Retrigger Reset Trigger Enabled' */
    /* Outputs for Atomic SubSystem: '<S125>/EdgeRising_F2T' */
    /* Logic: '<S128>/OR1' incorporates:
     *  UnitDelay: '<S128>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCITR_b_Chrg_b = !CDMR_ac_DW.UnitDelay_DSTATE_nggo;

    /* Update for UnitDelay: '<S128>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_nggo = rtb_TmpSignalConversionAtVeCITR_b_ChrgPo;

    /* Switch: '<S125>/Switch1' incorporates:
     *  Constant: '<S63>/Calib'
     *  Logic: '<S128>/AND'
     *  Switch: '<S125>/Switch2'
     *  UnitDelay: '<S125>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeCITR_b_ChrgPo &&
            rtb_TmpSignalConversionAtVeCITR_b_Chrg_b)
    {
        CDMR_ac_DW.UnitDelay_DSTATE_e = KeCDMR_t_ChrgPrt_IUMPR_ShrtTmr;
    }
    else
    {
        if (rtb_Logical5_ko)
        {
            /* UnitDelay: '<S125>/Unit Delay' incorporates:
             *  Constant: '<S125>/Constant Value4'
             *  Constant: '<S64>/Calib'
             *  MinMax: '<S125>/Maximum'
             *  Sum: '<S125>/Subtraction'
             *  Switch: '<S125>/Switch2'
             */
            CDMR_ac_DW.UnitDelay_DSTATE_e = fmaxf(CDMR_ac_DW.UnitDelay_DSTATE_e
                - KeCDMR_t_IUMPR_CP_dT, 0.0F);
        }
    }

    /* End of Switch: '<S125>/Switch1' */
    /* End of Outputs for SubSystem: '<S125>/EdgeRising_F2T' */
    /* End of Outputs for SubSystem: '<S105>/Timer Retrigger Reset Trigger Enabled' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/CDMR_MedTED' */

    /* Inport: '<Root>/VeDFIR_b_IsDiagGlobalConditionsValid' */
    (void)Rte_Read_VeDFIR_b_IsDiagGlobalConditionsValid_Value
        (&CDMR_ac_B.Switch3_c);

    /* Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl' */
    (void)Rte_Read_VeDFIR_b_PostCodeClrDiagDsbl_Value(&CDMR_ac_B.Switch22);

    /* Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe' */
    (void)Rte_Read_VeDFIR_b_DsblDiagFailSafe_Value(&CDMR_ac_B.Switch4);

    /* Inport: '<Root>/VeOBCR_e_ChargingSystemSts' */
    (void)Rte_Read_VeOBCR_e_ChargingSystemSts_Value(&tmpRead);

    /* Inport: '<Root>/VeOBCR_b_PluggedIn' */
    (void)Rte_Read_VeOBCR_b_PluggedIn_Value(&CDMR_ac_B.Switch20);

    /* Outputs for Function Call SubSystem: '<Root>/CDMR_MedTED' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Charging_Port'
     */
    /* Outputs for Atomic SubSystem: '<S112>/EdgeRising3' */
    /* Logic: '<S134>/AND' incorporates:
     *  Logic: '<S134>/OR1'
     *  UnitDelay: '<S134>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCITR_b_ChrgPo = !CDMR_ac_DW.UnitDelay_DSTATE_ak;

    /* Update for UnitDelay: '<S134>/Unit Delay' incorporates:
     *  Constant: '<S112>/TRUE Constant5'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_ak = true;

    /* End of Outputs for SubSystem: '<S112>/EdgeRising3' */

    /* Outputs for Atomic SubSystem: '<S112>/EdgeRising1' */
    /* Update for UnitDelay: '<S133>/Unit Delay' incorporates:
     *  Constant: '<S11>/FALSE Constant1'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_c1 = false;

    /* End of Outputs for SubSystem: '<S112>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S61>/Signal Latch On With Reset3' */
    /* Outputs for Atomic SubSystem: '<S105>/Timer Retrigger Reset Trigger Enabled' */
    /* Logic: '<S109>/OR1' incorporates:
     *  Constant: '<S125>/Constant Value2'
     *  Logic: '<S105>/Logical Operator1'
     *  Logic: '<S105>/Logical Operator2'
     *  Logic: '<S109>/OR'
     *  Logic: '<S112>/Logical Operator4'
     *  RelationalOperator: '<S125>/Greater  Than1'
     *  UnitDelay: '<S109>/Unit Delay'
     *  UnitDelay: '<S125>/Unit Delay'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_lv = ((rtb_Logical5_ko &&
        (CDMR_ac_DW.UnitDelay_DSTATE_e <= 0.0F)) ||
        ((!rtb_TmpSignalConversionAtVeCITR_b_ChrgPo) &&
         (CDMR_ac_DW.UnitDelay_DSTATE_lv)));

    /* End of Outputs for SubSystem: '<S105>/Timer Retrigger Reset Trigger Enabled' */
    /* End of Outputs for SubSystem: '<S61>/Signal Latch On With Reset3' */

    /* Gain: '<S65>/Gain' incorporates:
     *  Logic: '<S60>/Logical Operator'
     *  Logic: '<S60>/Logical Operator5'
     *  UnitDelay: '<S73>/Unit Delay'
     */
    VeCDMR_b_IUMPR_DeviceCmd_LK = ((CDMR_ac_DW.UnitDelay_DSTATE_ft) ||
        ((CDMR_ac_DW.UnitDelay_DSTATE_asx) && (CDMR_ac_DW.UnitDelay_DSTATE_f5)));

    /* Gain: '<S66>/Gain' incorporates:
     *  Logic: '<S61>/Logical Operator'
     *  Logic: '<S61>/Logical Operator5'
     *  UnitDelay: '<S107>/Unit Delay'
     *  UnitDelay: '<S108>/Unit Delay'
     */
    VeCDMR_b_IUMPR_DeviceCmd_UL = ((CDMR_ac_DW.UnitDelay_DSTATE_lj) ||
        ((CDMR_ac_DW.UnitDelay_DSTATE_kw) && (CDMR_ac_DW.UnitDelay_DSTATE_lv)));

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Inputs'
     */
    /* Switch: '<S6>/Switch4' incorporates:
     *  Constant: '<S218>/Calib'
     */
    if (KeCDMR_b_DsblDiagFailSafe_Ovrd)
    {
        /* Switch: '<S6>/Switch4' incorporates:
         *  Constant: '<S219>/Calib'
         *  Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe'
         */
        CDMR_ac_B.Switch4 = KeCDMR_b_DsblDiagFailSafe_Val;
    }

    /* End of Switch: '<S6>/Switch4' */

    /* Switch: '<S6>/Switch22' incorporates:
     *  Constant: '<S224>/Calib'
     */
    if (KeCDMR_b_PostCodeClrDiagDsbl_Ovrd)
    {
        /* Switch: '<S6>/Switch22' incorporates:
         *  Constant: '<S225>/Calib'
         *  Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl'
         */
        CDMR_ac_B.Switch22 = KeCDMR_b_PostCodeClrDiagDsbl_Val;
    }

    /* End of Switch: '<S6>/Switch22' */

    /* Switch: '<S6>/Switch3' incorporates:
     *  Constant: '<S220>/Calib'
     */
    if (KeCDMR_b_IsDiagGlobalConditionsValid_Ovrd)
    {
        /* Switch: '<S6>/Switch3' incorporates:
         *  Constant: '<S221>/Calib'
         *  Inport: '<Root>/VeDFIR_b_IsDiagGlobalConditionsValid'
         */
        CDMR_ac_B.Switch3_c = KeCDMR_b_IsDiagGlobalConditionsValid_Val;
    }

    /* End of Switch: '<S6>/Switch3' */

    /* Switch: '<S6>/Switch20' incorporates:
     *  Constant: '<S222>/Calib'
     */
    if (KeCDMR_b_PluggedIn_Ovrd)
    {
        /* Switch: '<S6>/Switch20' incorporates:
         *  Constant: '<S223>/Calib'
         *  Inport: '<Root>/VeOBCR_b_PluggedIn'
         */
        CDMR_ac_B.Switch20 = KeCDMR_b_PluggedIn_Val;
    }

    /* End of Switch: '<S6>/Switch20' */

    /* MultiPortSwitch: '<S6>/Multiport Switch' incorporates:
     *  Constant: '<S216>/Calib'
     */
    switch (HeCDMR_i_CPIMCommBusLIN_Slct)
    {
      case 1:
        /* MultiPortSwitch: '<S6>/Multiport Switch' incorporates:
         *  Constant: '<S208>/Constant1'
         *  Constant: '<S208>/Constant2'
         *  DataStoreRead: '<S208>/StatusByte_LIN1_BusOff'
         *  Logic: '<S208>/Logical Operator'
         *  RelationalOperator: '<S208>/Relational Operator1'
         *  RelationalOperator: '<S208>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S208>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S208>/Bitwise Operator2'
         */
        CDMR_ac_B.MultiportSwitch = (((((sint32)
            CDMR_ac_DW.StatusByte_LIN1_BusOff) & 1) > 0) && ((((uint32)
            CDMR_ac_DW.StatusByte_LIN1_BusOff) & 64U) == 0U));
        break;

      case 2:
        /* MultiPortSwitch: '<S6>/Multiport Switch' incorporates:
         *  Constant: '<S211>/Constant1'
         *  Constant: '<S211>/Constant2'
         *  DataStoreRead: '<S211>/StatusByte_LIN2_BusOff'
         *  Logic: '<S211>/Logical Operator'
         *  RelationalOperator: '<S211>/Relational Operator1'
         *  RelationalOperator: '<S211>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S211>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S211>/Bitwise Operator2'
         */
        CDMR_ac_B.MultiportSwitch = (((((sint32)
            CDMR_ac_DW.StatusByte_LIN2_BusOff) & 1) > 0) && ((((uint32)
            CDMR_ac_DW.StatusByte_LIN2_BusOff) & 64U) == 0U));
        break;

      case 3:
        /* MultiPortSwitch: '<S6>/Multiport Switch' incorporates:
         *  Constant: '<S212>/Constant1'
         *  Constant: '<S212>/Constant2'
         *  DataStoreRead: '<S212>/StatusByte_LIN3_BusOff'
         *  Logic: '<S212>/Logical Operator'
         *  RelationalOperator: '<S212>/Relational Operator1'
         *  RelationalOperator: '<S212>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S212>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S212>/Bitwise Operator2'
         */
        CDMR_ac_B.MultiportSwitch = (((((sint32)
            CDMR_ac_DW.StatusByte_LIN3_BusOff) & 1) > 0) && ((((uint32)
            CDMR_ac_DW.StatusByte_LIN3_BusOff) & 64U) == 0U));
        break;

      default:
        /* MultiPortSwitch: '<S6>/Multiport Switch' incorporates:
         *  Constant: '<S6>/FALSE Constant'
         */
        CDMR_ac_B.MultiportSwitch = false;
        break;
    }

    /* End of MultiPortSwitch: '<S6>/Multiport Switch' */

    /* Logic: '<S214>/Logical Operator' incorporates:
     *  Constant: '<S214>/Constant1'
     *  Constant: '<S214>/Constant2'
     *  DataStoreRead: '<S214>/StatusByte_LostCommCPIM'
     *  RelationalOperator: '<S214>/Relational Operator1'
     *  RelationalOperator: '<S214>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S214>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S214>/Bitwise Operator2'
     */
    CDMR_ac_B.LogicalOperator = (((((sint32)CDMR_ac_DW.StatusByte_LostCommCPIM)
        & 1) > 0) && ((((uint32)CDMR_ac_DW.StatusByte_LostCommCPIM) & 64U) == 0U));

    /* MultiPortSwitch: '<S6>/Multiport Switch1' incorporates:
     *  Constant: '<S215>/Calib'
     */
    switch (HeCDMR_i_BCIMCommBusLIN_Slct)
    {
      case 1:
        /* MultiPortSwitch: '<S6>/Multiport Switch1' incorporates:
         *  Constant: '<S209>/Constant1'
         *  Constant: '<S209>/Constant2'
         *  DataStoreRead: '<S209>/StatusByte_LIN1_BusOff'
         *  Logic: '<S209>/Logical Operator'
         *  RelationalOperator: '<S209>/Relational Operator1'
         *  RelationalOperator: '<S209>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S209>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S209>/Bitwise Operator2'
         */
        rtb_Logical5_ko = (((((sint32)CDMR_ac_DW.StatusByte_LIN1_BusOff) & 1) >
                            0) && ((((uint32)CDMR_ac_DW.StatusByte_LIN1_BusOff)
                             & 64U) == 0U));
        break;

      case 2:
        /* MultiPortSwitch: '<S6>/Multiport Switch1' incorporates:
         *  Constant: '<S210>/Constant1'
         *  Constant: '<S210>/Constant2'
         *  DataStoreRead: '<S210>/StatusByte_LIN2_BusOff'
         *  Logic: '<S210>/Logical Operator'
         *  RelationalOperator: '<S210>/Relational Operator1'
         *  RelationalOperator: '<S210>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S210>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S210>/Bitwise Operator2'
         */
        rtb_Logical5_ko = (((((sint32)CDMR_ac_DW.StatusByte_LIN2_BusOff) & 1) >
                            0) && ((((uint32)CDMR_ac_DW.StatusByte_LIN2_BusOff)
                             & 64U) == 0U));
        break;

      case 3:
        /* MultiPortSwitch: '<S6>/Multiport Switch1' incorporates:
         *  Constant: '<S213>/Constant1'
         *  Constant: '<S213>/Constant2'
         *  DataStoreRead: '<S213>/StatusByte_LIN3_BusOff'
         *  Logic: '<S213>/Logical Operator'
         *  RelationalOperator: '<S213>/Relational Operator1'
         *  RelationalOperator: '<S213>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S213>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S213>/Bitwise Operator2'
         */
        rtb_Logical5_ko = (((((sint32)CDMR_ac_DW.StatusByte_LIN3_BusOff) & 1) >
                            0) && ((((uint32)CDMR_ac_DW.StatusByte_LIN3_BusOff)
                             & 64U) == 0U));
        break;

      default:
        /* MultiPortSwitch: '<S6>/Multiport Switch1' incorporates:
         *  Constant: '<S6>/FALSE Constant1'
         */
        rtb_Logical5_ko = false;
        break;
    }

    /* End of MultiPortSwitch: '<S6>/Multiport Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeCDMR_e_FaultSts_BattChrgPrtLckCktLo' incorporates:
     *  Merge: '<S28>/Merge'
     *  SignalConversion generated from: '<S1>/VeCDMR_e_FaultSts_BattChrgPrtLckCktLo'
     */
    (void)Rte_Write_VeCDMR_e_FaultSts_BattChrgPrtLckCktLo_Value
        (CDMR_ac_B.Merge_j);

    /* Outport: '<Root>/VeCDMR_e_FaultSts_BattChrgPrtLckCkttHi' incorporates:
     *  Merge: '<S29>/Merge'
     *  SignalConversion generated from: '<S1>/VeCDMR_e_FaultSts_BattChrgPrtLckCkttHi'
     */
    (void)Rte_Write_VeCDMR_e_FaultSts_BattChrgPrtLckCkttHi_Value
        (CDMR_ac_B.Merge_k);

    /* Outport: '<Root>/VeCDMR_e_FaultSts_ChrgPortLckCtrlCktPerf' incorporates:
     *  Merge: '<S152>/Merge'
     *  SignalConversion generated from: '<S1>/VeCDMR_e_FaultSts_ChrgPortLckCtrlCktPerf'
     */
    (void)Rte_Write_VeCDMR_e_FaultSts_ChrgPortLckCtrlCktPerf_Value
        (CDMR_ac_B.Merge_kp);

    /* Outport: '<Root>/VeCDMR_e_FaultSts_ChrgPortULCtrlCktPerf' incorporates:
     *  Merge: '<S193>/Merge'
     *  SignalConversion generated from: '<S1>/VeCDMR_e_FaultSts_ChrgPortULCtrlCktPerf'
     */
    (void)Rte_Write_VeCDMR_e_FaultSts_ChrgPortULCtrlCktPerf_Value
        (CDMR_ac_B.Merge_kf);

    /* Merge: '<Root>/BCIMCommBusFaultStatus_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/BCIMCommBusFaultStatus_write'
     * */
    Rte_IrvWrite_CDMR_MedTED_BCIMCommBusFaultStatus_write_IRV(rtb_Logical5_ko);

    /* Merge: '<Root>/CPIMCommBusFaultStatus_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/CPIMCommBusFaultStatus_write'
     * */
    Rte_IrvWrite_CDMR_MedTED_CPIMCommBusFaultStatus_write_IRV
        (CDMR_ac_B.MultiportSwitch);

    /* Merge: '<Root>/CPIMLostCommFaultStatus_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/CPIMLostCommFaultStatus_write'
     * */
    Rte_IrvWrite_CDMR_MedTED_CPIMLostCommFaultStatus_write_IRV
        (CDMR_ac_B.LogicalOperator);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Inputs'
     */
    /* Switch: '<S6>/Switch1' incorporates:
     *  Constant: '<S217>/Calib'
     *  Constant: '<S226>/Calib'
     */
    if (KeCDMR_b_ChargingSystemSts_Ovrd)
    {
        tmpRead = KeCDMR_e_ChargingSystemSts_Val;
    }

    /* Merge: '<Root>/ChargingSystemSts_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/ChargingSystemSts_write'
     *  Switch: '<S6>/Switch1'
     */
    Rte_IrvWrite_CDMR_MedTED_ChargingSystemSts_write_IRV(tmpRead);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Merge: '<Root>/ChgPrtLckHiDTC_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/ChgPrtLckHiDTC_write'
     * */
    Rte_IrvWrite_CDMR_MedTED_ChgPrtLckHiDTC_write_IRV(rtb_RelationalOperator3_n);

    /* Merge: '<Root>/ChgPrtLckLowDTC_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/ChgPrtLckLowDTC_write'
     * */
    Rte_IrvWrite_CDMR_MedTED_ChgPrtLckLowDTC_write_IRV(rtb_LogicalOperator_mu);

    /* Merge: '<Root>/ChrgPortLK_FltDtct_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/ChrgPortLK_FltDtct_write'
     * */
    Rte_IrvWrite_CDMR_MedTED_ChrgPortLK_FltDtct_write_IRV
        (VeCDMR_b_ChrgPortLck_FltDtct);

    /* Merge: '<Root>/ChrgPortUL_FltDtct_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/ChrgPortUL_FltDtct_write'
     * */
    Rte_IrvWrite_CDMR_MedTED_ChrgPortUL_FltDtct_write_IRV
        (VeCDMR_b_ChrgPortUL_Flt);

    /* Merge: '<Root>/DsblDiagFailSafe_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/DsblDiagFailSafe_write'
     * */
    Rte_IrvWrite_CDMR_MedTED_DsblDiagFailSafe_write_IRV(CDMR_ac_B.Switch4);

    /* Merge: '<Root>/IUMPRInhibit_P0CD2_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/IUMPRInhibit_P0CD2_write'
     * */
    Rte_IrvWrite_CDMR_MedTED_IUMPRInhibit_P0CD2_write_IRV(rtb_Logical1_kl);

    /* Merge: '<Root>/IUMPRInhibit_P0D94_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/IUMPRInhibit_P0D94_write'
     * */
    Rte_IrvWrite_CDMR_MedTED_IUMPRInhibit_P0D94_write_IRV(rtb_AND_oh);

    /* Merge: '<Root>/IUMPR_DeviceCmdOn_LK_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/IUMPR_DeviceCmdOn_LK_write'
     * */
    Rte_IrvWrite_CDMR_MedTED_IUMPR_DeviceCmdOn_LK_write_IRV
        (VeCDMR_b_IUMPR_DeviceCmd_LK);

    /* Merge: '<Root>/IUMPR_DeviceCmdOn_UL_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/IUMPR_DeviceCmdOn_UL_write'
     * */
    Rte_IrvWrite_CDMR_MedTED_IUMPR_DeviceCmdOn_UL_write_IRV
        (VeCDMR_b_IUMPR_DeviceCmd_UL);

    /* Merge: '<Root>/IsDiagGlobalConditionsValid_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/IsDiagGlobalConditionsValid_write'
     * */
    Rte_IrvWrite_CDMR_MedTED_IsDiagGlobalConditionsValid_write_IRV
        (CDMR_ac_B.Switch3_c);

    /* Merge: '<Root>/PluggedIn_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/PluggedIn_write'
     * */
    Rte_IrvWrite_CDMR_MedTED_PluggedIn_write_IRV(CDMR_ac_B.Switch20);

    /* Merge: '<Root>/PostCodeClrDiagDsbl_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/PostCodeClrDiagDsbl_write'
     * */
    Rte_IrvWrite_CDMR_MedTED_PostCodeClrDiagDsbl_write_IRV(CDMR_ac_B.Switch22);

    /* End of Outputs for SubSystem: '<Root>/CDMR_MedTED' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
#endif

}

#endif

/* Model step function for TID2 */
#if Rte_SysCon_Variant_CDMR_4

FUNC(void, CDMR_CODE) CDMR_MedTEH(void) /* Explicit Task: MedTEH */
{

#if Rte_SysCon_Variant_CDMR_4

    boolean rtb_RelationalOperator3_d;

#endif

#if Rte_SysCon_Variant_CDMR_4

    boolean rtb_AND_az;

#endif

#if Rte_SysCon_Variant_CDMR_4

    boolean rtb_Logical8_h;

#endif

#if Rte_SysCon_Variant_CDMR_4

    boolean rtb_Comparison2;

#endif

#if Rte_SysCon_Variant_CDMR_4

    boolean rtb_AND_h1;

#endif

#if Rte_SysCon_Variant_CDMR_4

    boolean rtb_Logical5_g;

#endif

#if (Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4) || (Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4)

    float32 rtb_Abs1_b;

#endif

#if Rte_SysCon_Variant_CDMR_4

    boolean rtb_UnitDelay_eu;

#endif

#if Rte_SysCon_Variant_CDMR_4

    boolean rtb_AND_cqs;

#endif

#if Rte_SysCon_Variant_CDMR_4

    boolean rtb_AND_hj3;

#endif

#if Rte_SysCon_Variant_CDMR_4

    boolean rtb_OR1_dh;

#endif

#if (Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4) || (Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4)

    boolean rtb_AND_am;

#endif

#if Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

    boolean rtb_AND_ks;

#endif

#if Rte_SysCon_Variant_CDMR_4

    boolean TmpSignalConversionAtTmpVM_FcnCallSubs_a;

#endif

#if Rte_SysCon_Variant_CDMR_4

    boolean TmpSignalConversionAtTmpVM_FcnCallSubs_i;

#endif

#if Rte_SysCon_Variant_CDMR_4

    boolean TmpSignalConversionAtTmpVM_FcnCallSubs_e;

#endif

#if Rte_SysCon_Variant_CDMR_4

    boolean TmpSignalConversionAtTmpVM_FcnCallSub_ad;

#endif

#if Rte_SysCon_Variant_CDMR_4

    boolean TmpSignalConversionAtTmpVM_FcnCallSubs_o;

#endif

#if Rte_SysCon_Variant_CDMR_4

    boolean TmpSignalConversionAtTmpVM_FcnCallSub_hv;

#endif

#if Rte_SysCon_Variant_CDMR_4

    boolean TmpSignalConversionAtTmpVM_FcnCallSub_c4;

#endif

#if Rte_SysCon_Variant_CDMR_4

    boolean TmpSignalConversionAtTmpVM_FcnCallSub_m3;

#endif

#if Rte_SysCon_Variant_CDMR_4

    boolean TmpSignalConversionAtTmpVM_FcnCallSu_m1k;

#endif

#if Rte_SysCon_Variant_CDMR_4

    boolean TmpSignalConversionAtTmpVM_FcnCallSub_iw;

#endif

#if Rte_SysCon_Variant_CDMR_4

    boolean TmpSignalConversionAtTmpVM_FcnCallSub_lp;

#endif

#if Rte_SysCon_Variant_CDMR_4

    boolean TmpSignalConversionAtTmpVM_FcnCallSub_ii;

#endif

#if Rte_SysCon_Variant_CDMR_4

    boolean TmpSignalConversionAtTmpVM_FcnCallSub_gz;

#endif

#if Rte_SysCon_Variant_CDMR_4

    boolean TmpSignalConversionAtTmpVM_FcnCallSub_du;

#endif

#if Rte_SysCon_Variant_CDMR_4

    TeOBCR_e_ChargingSystemSts TmpSignalConversionAtTmpVM_FcnCallSub_ka;

#endif

#if Rte_SysCon_Variant_CDMR_4

    TeCITR_e_BCIM_LED_Sts VeCDMR_b_BCIM_Ind1_Fault_tmp;

#endif

#if Rte_SysCon_Variant_CDMR_4

    TeCITR_e_CPIM_LED_Sts VeCDMR_b_CPIM_Ind1_Fault_tmp;

#endif

#if (Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4) || (Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4)

    uint32 VeCDMR_b_PwrOutletPanelMod1DigCommBus_En;

#endif

#if (Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4) || (Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4)

    uint32 VeCDMR_b_PwrOutletPanelMod1DigCommBus__0;

#endif

#if (Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4) || (Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4)

    uint32 VeCDMR_b_PwrOutletPanelMod1DigCommBus__1;

#endif

#if (Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4) || (Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4)

    uint32 VeCDMR_b_PwrOutletPanelMod1DigCommBus__2;

#endif

#if (Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4) || (Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4)

    TeVTLR_e_Led_Command rtb_RelationalOperator_n_tmp;

#endif

#if (Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4) || (Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4)

    TeCITR_e_CPIM_Indication VeCDMR_b_PwrOutletPanelMod1LmpCntrl_Faul;

#endif

#if (Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4) || (Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4)

    TeVTLR_e_Led_Command rtb_RelationalOperator6_d_tmp;

#endif

#if (Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4) || (Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4)

    TeCITR_e_CPIM_Indication VeCDMR_b_PwrOutletPanelMod1LmpCntrl_Fa_0;

#endif

#if (Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4) || (Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4)

    uint32 VeCDMR_b_PwrOutletPanelMod1DigCommBus__3;

#endif

#if (Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4) || (Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4)

    uint32 VeCDMR_b_PwrOutletPanelMod1DigCommBus__4;

#endif

#if Rte_SysCon_Variant_CDMR_4

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
#if Rte_SysCon_Variant_CDMR_1 && Rte_SysCon_Variant_CDMR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeCITR_b_ChrgPortButton_Sts'
     */
    (void)Rte_Read_VeCITR_b_ChrgPortButton_Sts_Value
        (&CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_i);

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeSCPR_b_ButtonActive_Door'
     */
    (void)Rte_Read_VeSCPR_b_ButtonActive_Door_Value
        (&CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_jr);

#elif !Rte_SysCon_Variant_CDMR_1 && Rte_SysCon_Variant_CDMR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
    CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_i = false;

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
    CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_jr = false;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Merge: '<Root>/DsblDiagFailSafe_IRV_Merge'
     */
    TmpSignalConversionAtTmpVM_FcnCallSubs_a =
        Rte_IrvRead_CDMR_MedTEH_DsblDiagFailSafe_write_IRV();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Merge: '<Root>/PostCodeClrDiagDsbl_IRV_Merge'
     */
    TmpSignalConversionAtTmpVM_FcnCallSubs_i =
        Rte_IrvRead_CDMR_MedTEH_PostCodeClrDiagDsbl_write_IRV();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Merge: '<Root>/CPIMCommBusFaultStatus_IRV_Merge'
     */
    TmpSignalConversionAtTmpVM_FcnCallSubs_e =
        Rte_IrvRead_CDMR_MedTEH_CPIMCommBusFaultStatus_write_IRV();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
#if Rte_SysCon_Variant_CDMR_1 && Rte_SysCon_Variant_CDMR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Merge: '<Root>/CPIMLostCommFaultStatus_IRV_Merge'
     */
    CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_ce =
        Rte_IrvRead_CDMR_MedTEH_CPIMLostCommFaultStatus_write_IRV();

#elif !Rte_SysCon_Variant_CDMR_1 && Rte_SysCon_Variant_CDMR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
    CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_ce = false;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Merge: '<Root>/IsDiagGlobalConditionsValid_IRV_Merge'
     */
    TmpSignalConversionAtTmpVM_FcnCallSub_ad =
        Rte_IrvRead_CDMR_MedTEH_IsDiagGlobalConditionsValid_write_IRV();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeOFCR_b_CPIM_RedLED_Cmd'
     */
    (void)Rte_Read_VeOFCR_b_CPIM_RedLED_Cmd_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_m);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeCITR_b_CPIM_RedLED_Sts'
     */
    (void)Rte_Read_VeCITR_b_CPIM_RedLED_Sts_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ns);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeOFCR_b_CPIM_GreenLED_Cmd'
     */
    (void)Rte_Read_VeOFCR_b_CPIM_GreenLED_Cmd_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_d);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeCITR_b_CPIM_GreenLED_Sts'
     */
    (void)Rte_Read_VeCITR_b_CPIM_GreenLED_Sts_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_f);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeOFCR_b_CPIM_BlueLED_Cmd'
     */
    (void)Rte_Read_VeOFCR_b_CPIM_BlueLED_Cmd_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_k);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeCITR_b_CPIM_BlueLED_Sts'
     */
    (void)Rte_Read_VeCITR_b_CPIM_BlueLED_Sts_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_le);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeCITR_e_CPIM_RedLED_FailSts'
     */
    (void)Rte_Read_VeCITR_e_CPIM_RedLED_FailSts_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_oe);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeCITR_e_CPIM_GreenLED_FailSts'
     */
    (void)Rte_Read_VeCITR_e_CPIM_GreenLED_FailSts_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_c3);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeCITR_e_CPIM_BlueLED_FailSts'
     */
    (void)Rte_Read_VeCITR_e_CPIM_BlueLED_FailSts_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fl);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeOFCR_e_CPIM_Ind1_Cmd'
     */
    (void)Rte_Read_VeOFCR_e_CPIM_Ind1_Cmd_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_oeb);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeCITR_e_CPIM_Ind1_Fdbk'
     */
    (void)Rte_Read_VeCITR_e_CPIM_Ind1_Fdbk_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_j5);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeOFCR_e_CPIM_Ind2_Cmd'
     */
    (void)Rte_Read_VeOFCR_e_CPIM_Ind2_Cmd_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ie);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeCITR_e_CPIM_Ind2_Fdbk'
     */
    (void)Rte_Read_VeCITR_e_CPIM_Ind2_Fdbk_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_nb);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeOFCR_e_CPIM_Ind3_Cmd'
     */
    (void)Rte_Read_VeOFCR_e_CPIM_Ind3_Cmd_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_pp);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeCITR_e_CPIM_Ind3_Fdbk'
     */
    (void)Rte_Read_VeCITR_e_CPIM_Ind3_Fdbk_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_k2);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeOFCR_e_CPIM_Ind4_Cmd'
     */
    (void)Rte_Read_VeOFCR_e_CPIM_Ind4_Cmd_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_b5);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeCITR_e_CPIM_Ind4_Fdbk'
     */
    (void)Rte_Read_VeCITR_e_CPIM_Ind4_Fdbk_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_gp);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeOFCR_e_CPIM_Ind5_Cmd'
     */
    (void)Rte_Read_VeOFCR_e_CPIM_Ind5_Cmd_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_jb);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeCITR_e_CPIM_Ind5_Fdbk'
     */
    (void)Rte_Read_VeCITR_e_CPIM_Ind5_Fdbk_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_aj);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeOFCR_e_CPIM_ColorInd_Cmd'
     */
    (void)Rte_Read_VeOFCR_e_CPIM_ColorInd_Cmd_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_lx);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeCITR_e_CPIM_Ind_Color_Fdbk'
     */
    (void)Rte_Read_VeCITR_e_CPIM_Ind_Color_Fdbk_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fo);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeCITR_e_CPIM_Ind1_FailSts'
     */
    (void)Rte_Read_VeCITR_e_CPIM_Ind1_FailSts_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_lo);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeCITR_e_CPIM_Ind2_FailSts'
     */
    (void)Rte_Read_VeCITR_e_CPIM_Ind2_FailSts_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_hh);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeCITR_e_CPIM_Ind3_FailSts'
     */
    (void)Rte_Read_VeCITR_e_CPIM_Ind3_FailSts_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_jt);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeCITR_e_CPIM_Ind4_FailSts'
     */
    (void)Rte_Read_VeCITR_e_CPIM_Ind4_FailSts_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_l5);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeCITR_e_CPIM_Ind5_FailSts'
     */
    (void)Rte_Read_VeCITR_e_CPIM_Ind5_FailSts_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_jc);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeCITR_b_CPIM_UnderVolt'
     */
    (void)Rte_Read_VeCITR_b_CPIM_UnderVolt_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ll);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeCITR_b_CPIM_OverTemp'
     */
    (void)Rte_Read_VeCITR_b_CPIM_OverTemp_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_f2);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeCITR_b_CPIM_LINParityErr'
     */
    (void)Rte_Read_VeCITR_b_CPIM_LINParityErr_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_kp);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeCITR_b_CPIM_LINChkSumErr'
     */
    (void)Rte_Read_VeCITR_b_CPIM_LINChkSumErr_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_p);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeCITR_b_CPIM_LINDataErr'
     */
    (void)Rte_Read_VeCITR_b_CPIM_LINDataErr_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ik);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Merge: '<Root>/PluggedIn_IRV_Merge'
     */
    TmpSignalConversionAtTmpVM_FcnCallSubs_o =
        Rte_IrvRead_CDMR_MedTEH_PluggedIn_write_IRV();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeCITR_e_BCIM_Ind1_FailSts'
     */
    (void)Rte_Read_VeCITR_e_BCIM_Ind1_FailSts_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_k2b);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeCITR_e_BCIM_Ind2_FailSts'
     */
    (void)Rte_Read_VeCITR_e_BCIM_Ind2_FailSts_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fn);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeCITR_e_BCIM_Ind3_FailSts'
     */
    (void)Rte_Read_VeCITR_e_BCIM_Ind3_FailSts_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ic);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeCITR_e_BCIM_Ind4_FailSts'
     */
    (void)Rte_Read_VeCITR_e_BCIM_Ind4_FailSts_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ls);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeCITR_e_BCIM_Ind5_FailSts'
     */
    (void)Rte_Read_VeCITR_e_BCIM_Ind5_FailSts_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_hs);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeCITR_b_BCIM_UnderVolt'
     */
    (void)Rte_Read_VeCITR_b_BCIM_UnderVolt_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ki);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeCITR_b_BCIM_OverTemp'
     */
    (void)Rte_Read_VeCITR_b_BCIM_OverTemp_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_e0);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeCITR_b_BCIM_LINParityErr'
     */
    (void)Rte_Read_VeCITR_b_BCIM_LINParityErr_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_c);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeCITR_b_BCIM_LINChkSumErr'
     */
    (void)Rte_Read_VeCITR_b_BCIM_LINChkSumErr_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_adb);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeCITR_b_BCIM_LINDataErr'
     */
    (void)Rte_Read_VeCITR_b_BCIM_LINDataErr_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_j);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeOFCR_b_ChrgPortOT_StopChrg'
     */
    (void)Rte_Read_VeOFCR_b_ChrgPortOT_StopChrg_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_h);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Merge: '<Root>/ChargingSystemSts_IRV_Merge'
     */
    TmpSignalConversionAtTmpVM_FcnCallSub_ka =
        Rte_IrvRead_CDMR_MedTEH_ChargingSystemSts_write_IRV();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeAATR_b_SCP_InletTemp_FA'
     */
    (void)Rte_Read_VeAATR_b_SCP_InletTemp_FA_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_lm);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeCITR_e_BCIM_Ind1_Fdbk'
     */
    (void)Rte_Read_VeCITR_e_BCIM_Ind1_Fdbk_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_nd);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeCITR_e_BCIM_Ind2_Fdbk'
     */
    (void)Rte_Read_VeCITR_e_BCIM_Ind2_Fdbk_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mb);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeCITR_e_BCIM_Ind3_Fdbk'
     */
    (void)Rte_Read_VeCITR_e_BCIM_Ind3_Fdbk_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_kd);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeCITR_e_BCIM_Ind4_Fdbk'
     */
    (void)Rte_Read_VeCITR_e_BCIM_Ind4_Fdbk_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_pv);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeCITR_e_BCIM_Ind5_Fdbk'
     */
    (void)Rte_Read_VeCITR_e_BCIM_Ind5_Fdbk_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_kj);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeOFCR_e_BCIM_Ind1_Set_St'
     */
    (void)Rte_Read_VeOFCR_e_BCIM_Ind1_Set_St_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ds);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeOFCR_e_BCIM_Ind2_Set_St'
     */
    (void)Rte_Read_VeOFCR_e_BCIM_Ind2_Set_St_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_li);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeOFCR_e_BCIM_Ind3_Set_St'
     */
    (void)Rte_Read_VeOFCR_e_BCIM_Ind3_Set_St_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_pt);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeOFCR_e_BCIM_Ind4_Set_St'
     */
    (void)Rte_Read_VeOFCR_e_BCIM_Ind4_Set_St_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_lpc);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeOFCR_e_BCIM_Ind5_Set_St'
     */
    (void)Rte_Read_VeOFCR_e_BCIM_Ind5_Set_St_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_pvt);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeOFCR_e_CPIM_Icon1_Cmd'
     */
    (void)Rte_Read_VeOFCR_e_CPIM_Icon1_Cmd_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_oz);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeOFCR_e_CPIM_Icon2_Cmd'
     */
    (void)Rte_Read_VeOFCR_e_CPIM_Icon2_Cmd_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_pn);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeCITR_e_CPIM_Icon1_Sts'
     */
    (void)Rte_Read_VeCITR_e_CPIM_Icon1_Sts_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_kr);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeCITR_e_CPIM_Icon2_Sts'
     */
    (void)Rte_Read_VeCITR_e_CPIM_Icon2_Sts_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fg);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeOBCR_b_ChrgSysFault'
     */
    (void)Rte_Read_VeOBCR_b_ChrgSysFault_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_m1);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeOFCR_e_BCIM_ColorInd_Cmd'
     */
    (void)Rte_Read_VeOFCR_e_BCIM_ColorInd_Cmd_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_io);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeCITR_e_BCIM_Ind_Color_Fdbk'
     */
    (void)Rte_Read_VeCITR_e_BCIM_Ind_Color_Fdbk_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_pi);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Merge: '<Root>/BCIMCommBusFaultStatus_IRV_Merge'
     */
    TmpSignalConversionAtTmpVM_FcnCallSub_hv =
        Rte_IrvRead_CDMR_MedTEH_BCIMCommBusFaultStatus_write_IRV();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeCITR_b_CPIM_Icon1_FailSts'
     */
    (void)Rte_Read_VeCITR_b_CPIM_Icon1_FailSts_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_br);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeCITR_b_CPIM_Icon2_FailSts'
     */
    (void)Rte_Read_VeCITR_b_CPIM_Icon2_FailSts_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cl);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Merge: '<Root>/ChgPrtLckLowDTC_IRV_Merge'
     */
    TmpSignalConversionAtTmpVM_FcnCallSub_c4 =
        Rte_IrvRead_CDMR_MedTEH_ChgPrtLckLowDTC_write_IRV();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Merge: '<Root>/ChgPrtLckHiDTC_IRV_Merge'
     */
    TmpSignalConversionAtTmpVM_FcnCallSub_m3 =
        Rte_IrvRead_CDMR_MedTEH_ChgPrtLckHiDTC_write_IRV();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Merge: '<Root>/ChrgPortUL_FltDtct_IRV_Merge'
     */
    TmpSignalConversionAtTmpVM_FcnCallSu_m1k =
        Rte_IrvRead_CDMR_MedTEH_ChrgPortUL_FltDtct_write_IRV();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Merge: '<Root>/ChrgPortLK_FltDtct_IRV_Merge'
     */
    TmpSignalConversionAtTmpVM_FcnCallSub_iw =
        Rte_IrvRead_CDMR_MedTEH_ChrgPortLK_FltDtct_write_IRV();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Merge: '<Root>/IUMPRInhibit_P0D94_IRV_Merge'
     */
    TmpSignalConversionAtTmpVM_FcnCallSub_lp =
        Rte_IrvRead_CDMR_MedTEH_IUMPRInhibit_P0D94_write_IRV();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Merge: '<Root>/IUMPRInhibit_P0CD2_IRV_Merge'
     */
    TmpSignalConversionAtTmpVM_FcnCallSub_ii =
        Rte_IrvRead_CDMR_MedTEH_IUMPRInhibit_P0CD2_write_IRV();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Merge: '<Root>/IUMPR_DeviceCmdOn_LK_IRV_Merge'
     */
    TmpSignalConversionAtTmpVM_FcnCallSub_gz =
        Rte_IrvRead_CDMR_MedTEH_IUMPR_DeviceCmdOn_LK_write_IRV();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Merge: '<Root>/IUMPR_DeviceCmdOn_UL_IRV_Merge'
     */
    TmpSignalConversionAtTmpVM_FcnCallSub_du =
        Rte_IrvRead_CDMR_MedTEH_IUMPR_DeviceCmdOn_UL_write_IRV();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommBCIM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommBCIM_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommCPIM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommCPIM_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_l);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
#if Rte_SysCon_Variant_CDMR_1 && Rte_SysCon_Variant_CDMR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BatChrgModSwStk'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BatChrgModSwStk_Value
        (&CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_a);

#elif !Rte_SysCon_Variant_CDMR_1 && Rte_SysCon_Variant_CDMR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
    CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_a = 0U;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_Module_Failure_CPIM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_Module_Failure_CPIM_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_n);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_Module_Failure_BCIM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_Module_Failure_BCIM_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_g);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BatChaCouTemATooHig'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BatChaCouTemATooHig_Value
        (&CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_b);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
#if Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeVTLR_e_TrunkSts'
     */
    (void)Rte_Read_VeVTLR_e_TrunkSts_Value
        (&CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallS_po2);

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_PwrOutletPanelMod1Perf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_PwrOutletPanelMod1Perf_Value
        (&CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_c);

#elif !Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

    /* RelationalOperator: '<S540>/Relational Operator' incorporates:
     *  VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120'
     */
    CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallS_po2 = CeVTLR_e_Inactive;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
#if Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeCITR_b_PP2ButtonSts'
     */
    (void)Rte_Read_VeCITR_b_PP2ButtonSts_Value
        (&CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_e);

#elif !Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
    CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_c = 0U;

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
    CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_e = false;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
#if (Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4) || (Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4)

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VePMDB_b_PwrPanSwStatus'
     */
    (void)Rte_Read_VePMDB_b_PwrPanSwStatus_Value
        (&CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_b);

#elif !Rte_SysCon_Variant_CDMR_2 && !Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
    CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_b = false;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
#if Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_PwrOutletPanelMod1DigCommBus'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_PwrOutletPanelMod1DigCommBus_Value
        (&CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_h);

#elif !Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
    CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_h = 0U;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
#if (Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4) || (Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4)

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VePMTR_e_ThrmlDevEnbl'
     */
    (void)Rte_Read_VePMTR_e_ThrmlDevEnbl_Value
        (&CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_f5);

#elif !Rte_SysCon_Variant_CDMR_2 && !Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
    CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_f5 =
        CePMTR_e_DISBL_All_Thrml;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
#if Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeCITR_e_PP_LED_A_Feedback'
     */
    (void)Rte_Read_VeCITR_e_PP_LED_A_Feedback_Value
        (&CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_fr);

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeCITR_e_PP_LED_B_Feedback'
     */
    (void)Rte_Read_VeCITR_e_PP_LED_B_Feedback_Value
        (&CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_fp);

#elif !Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
    CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_fr = CeCITR_e_CPIM_Ind_Off;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
#if Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeCITR_e_PP_LED_A_FailStatus'
     */
    (void)Rte_Read_VeCITR_e_PP_LED_A_FailStatus_Value
        (&CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_k);

#elif !Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
    CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_fp = CeCITR_e_CPIM_Ind_Off;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
#if Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeCITR_e_PP_LED_B_FailStatus'
     */
    (void)Rte_Read_VeCITR_e_PP_LED_B_FailStatus_Value
        (&CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_a1);

#elif !Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
    CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_k = CeCITR_e_CPIM_LEDNormal;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
#if Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeVTLR_e_PP1_LEDA_Cmd'
     */
    (void)Rte_Read_VeVTLR_e_PP1_LEDA_Cmd_Value
        (&CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_mw);

#elif !Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
    CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_a1 = CeCITR_e_CPIM_LEDNormal;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
#if Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeVTLR_e_PP1_LEDB_Cmd'
     */
    (void)Rte_Read_VeVTLR_e_PP1_LEDB_Cmd_Value
        (&CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_cg);

#elif !Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
    CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_mw = CeVTLR_e_Led_Off;

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
    CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_cg = CeVTLR_e_Led_Off;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
#if Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_PwrOutletPanelMod1LmpCntrl'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_PwrOutletPanelMod1LmpCntrl_Value
        (&CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_j);

#elif !Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
    CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_j = 0U;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
#if (Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4) || (Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4)

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeIDCR_U_ACOutVoltage1'
     */
    (void)Rte_Read_VeIDCR_U_ACOutVoltage1_Value
        (&CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSubsy);

#elif !Rte_SysCon_Variant_CDMR_2 && !Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
    CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSubsy = 0.0F;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
#if Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeCITR_b_PPACPresentSens1'
     */
    (void)Rte_Read_VeCITR_b_PPACPresentSens1_Value
        (&CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_po);

#elif !Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
    CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_po = false;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
#if Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_PwrOutletPanelMod1InACPwrCktPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_PwrOutletPanelMod1InACPwrCktPerf_Value
        (&CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_g);

#elif !Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
    CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_g = 0U;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
#if Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_PwrOutletPanelMod2Perf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_PwrOutletPanelMod2Perf_Value
        (&CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_o);

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeCITR_b_PPButtonSts'
     */
    (void)Rte_Read_VeCITR_b_PPButtonSts_Value
        (&CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_cx);

#elif !Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
    CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_o = 0U;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
#if Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_PwrOutletPanelMod2DigCommBus'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_PwrOutletPanelMod2DigCommBus_Value
        (&CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_jb);

#elif !Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
    CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_cx = false;

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
    CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_jb = 0U;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
#if Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeCITR_e_PP2_LED_A_Feedback'
     */
    (void)Rte_Read_VeCITR_e_PP2_LED_A_Feedback_Value
        (&CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_me);

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeCITR_e_PP2_LED_B_Feedback'
     */
    (void)Rte_Read_VeCITR_e_PP2_LED_B_Feedback_Value
        (&CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_mm);

#elif !Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
    CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_me = CeCITR_e_CPIM_Ind_Off;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
#if Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeCITR_e_PP2_LED_A_FailStatus'
     */
    (void)Rte_Read_VeCITR_e_PP2_LED_A_FailStatus_Value
        (&CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_js);

#elif !Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
    CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_mm = CeCITR_e_CPIM_Ind_Off;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
#if Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeCITR_e_PP2_LED_B_FailStatus'
     */
    (void)Rte_Read_VeCITR_e_PP2_LED_B_FailStatus_Value
        (&CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_ks);

#elif !Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
    CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_js = CeCITR_e_CPIM_LEDNormal;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
#if Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeVTLR_e_PP2_LEDA_Cmd'
     */
    (void)Rte_Read_VeVTLR_e_PP2_LEDA_Cmd_Value
        (&CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_ja);

#elif !Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
    CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_ks = CeCITR_e_CPIM_LEDNormal;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
#if Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeVTLR_e_PP2_LEDB_Cmd'
     */
    (void)Rte_Read_VeVTLR_e_PP2_LEDB_Cmd_Value
        (&CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_hj);

#elif !Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
    CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_ja = CeVTLR_e_Led_Off;

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
    CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_hj = CeVTLR_e_Led_Off;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
#if Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_PwrOutletPanelMod2LmpCntrl'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_PwrOutletPanelMod2LmpCntrl_Value
        (&CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_m);

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_PwrOutletPanelMod2InACPwrCktPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_PwrOutletPanelMod2InACPwrCktPerf_Value
        (&CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_f);

#elif !Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
    CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_m = 0U;

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
    CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_f = 0U;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
#if (Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4) || (Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4)

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeIDCR_I_ACOutCurrent1'
     */
    (void)Rte_Read_VeIDCR_I_ACOutCurrent1_Value
        (&CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_d);

#elif !Rte_SysCon_Variant_CDMR_2 && !Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
    CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_d = 0.0F;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
#if Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeCITR_I_PPCurrentDrawSens1'
     */
    (void)Rte_Read_VeCITR_I_PPCurrentDrawSens1_Value
        (&CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_n);

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeVTLR_e_FrunkSts'
     */
    (void)Rte_Read_VeVTLR_e_FrunkSts_Value
        (&CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_bl);

#elif !Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
    CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_n = 0.0F;

    /* RelationalOperator: '<S418>/Relational Operator' incorporates:
     *  VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120'
     */
    CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_bl = CeVTLR_e_Inactive_Frunk;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
#if (Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4) || (Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4)

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeVTLR_b_ACSw_Cmd'
     */
    (void)Rte_Read_VeVTLR_b_ACSw_Cmd_Value
        (&CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_a4);

#elif !Rte_SysCon_Variant_CDMR_2 && !Rte_SysCon_Variant_CDMR_3 && Rte_SysCon_Variant_CDMR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
    CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_a4 = false;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
#if Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeCITR_b_PP2ACPresentSens1'
     */
    (void)Rte_Read_VeCITR_b_PP2ACPresentSens1_Value
        (&CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_mx);

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' incorporates:
     *  Inport: '<Root>/VeCITR_I_PP2CurrentDrawSens1'
     */
    (void)Rte_Read_VeCITR_I_PP2CurrentDrawSens1_Value
        (&CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_p);

#elif !Rte_SysCon_Variant_CDMR_2 && Rte_SysCon_Variant_CDMR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
    CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_mx = false;

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120' */
    CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_p = 0.0F;

#endif

    /* Outputs for Function Call SubSystem: '<Root>/CDMR_MedTEH' */
    /* DataStoreWrite: '<S2>/DSW_StatusByte_LostCommBCIM' */
    CDMR_ac_DW.StatusByte_LostCommBCIM =
        CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys;

    /* DataStoreWrite: '<S2>/DSW_StatusByte_LostCommCPIM' */
    CDMR_ac_DW.StatusByte_LostCommCPIM =
        CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_l;

#if Rte_SysCon_Variant_CDMR_1

    /* S-Function (fcgen): '<S2>/FcnCallGen' */
    /* Outputs for Function Call SubSystem: '<S2>/ButtonDiag' */

    /* Logic: '<S227>/NOT4' incorporates:
     *  Constant: '<S235>/Calib'
     *  Constant: '<S236>/Calib'
     *  Logic: '<S227>/Logical1'
     *  Logic: '<S227>/NOT2'
     *  Logic: '<S227>/NOT7'
     */
    VeCDMR_b_BatChrgModSwStk_En = ((((KeCDMR_b_ButtonStuckFailEn) &&
        ((CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_jr) ||
         (KeCDMR_b_IgnBtnCond))) && TmpSignalConversionAtTmpVM_FcnCallSub_ad) &&
        ((!TmpSignalConversionAtTmpVM_FcnCallSubs_e) &&
         (!CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_ce)));

    /* Outputs for Atomic SubSystem: '<S227>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S240>/EdgeRising' */
    /* UnitDelay: '<S244>/Unit Delay' incorporates:
     *  UnitDelay: '<S242>/Unit Delay'
     */
    rtb_UnitDelay_eu = CDMR_ac_DW.UnitDelay_DSTATE_jsw;

    /* Update for UnitDelay: '<S242>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_jsw =
        CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_i;

    /* Switch: '<S240>/Switch1' incorporates:
     *  Constant: '<S237>/Calib'
     *  Constant: '<S238>/Calib'
     *  Constant: '<S240>/Constant Value1'
     *  Logic: '<S240>/OR'
     *  Logic: '<S240>/OR1'
     *  Logic: '<S242>/AND'
     *  Logic: '<S242>/OR1'
     *  MinMax: '<S240>/Minimum'
     *  Sum: '<S240>/Summation'
     *  UnitDelay: '<S240>/Unit Delay'
     */
    if ((!CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_i) ||
            ((CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_i) &&
             (!rtb_UnitDelay_eu)))
    {
        CDMR_ac_DW.UnitDelay_DSTATE_b = 0.0F;
    }
    else
    {
        CDMR_ac_DW.UnitDelay_DSTATE_b = fminf(KeCDMR_t_ButtonFaultMonitor,
            KeCDMR_t_ButtonRaster + CDMR_ac_DW.UnitDelay_DSTATE_b);
    }

    /* End of Switch: '<S240>/Switch1' */
    /* End of Outputs for SubSystem: '<S240>/EdgeRising' */

    /* Logic: '<S240>/AND' incorporates:
     *  Constant: '<S237>/Calib'
     *  RelationalOperator: '<S240>/Greater  Than'
     *  UnitDelay: '<S240>/Unit Delay'
     */
    VeCDMR_b_ButtonStuck = ((CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_i)
                            && (CDMR_ac_DW.UnitDelay_DSTATE_b >=
        KeCDMR_t_ButtonFaultMonitor));

    /* End of Outputs for SubSystem: '<S227>/Turn On Delay Time' */

    /* RelationalOperator: '<S241>/Relational Operator3' incorporates:
     *  Constant: '<S241>/Constant3'
     *  S-Function (sfix_bitop): '<S241>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_d = ((((uint32)
        CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_a) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S241>/EdgeFalling1' */
    /* Logic: '<S241>/Logical Operator' incorporates:
     *  Logic: '<S244>/OR1'
     */
    rtb_AND_az = !rtb_RelationalOperator3_d;

    /* End of Outputs for SubSystem: '<S241>/EdgeFalling1' */

    /* Logic: '<S241>/Logical1' incorporates:
     *  Constant: '<S234>/Calib'
     *  Constant: '<S241>/Constant1'
     *  Logic: '<S241>/Logical Operator'
     *  Logic: '<S241>/Logical10'
     *  Logic: '<S241>/Logical12'
     *  RelationalOperator: '<S241>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S241>/Bitwise Operator3'
     */
    rtb_UnitDelay_eu = ((VeCDMR_b_BatChrgModSwStk_En) &&
                        ((!KeCDMR_b_BatChrgModSwStk_LtchEnbl) || (((((uint32)
        CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_a) & 1U) == 0U) ||
                          rtb_AND_az)));

    /* Outputs for Atomic SubSystem: '<S241>/EdgeFalling1' */
    /* Logic: '<S244>/AND' incorporates:
     *  UnitDelay: '<S244>/Unit Delay'
     */
    rtb_AND_az = (rtb_AND_az && (CDMR_ac_DW.UnitDelay_DSTATE_lz));

    /* Update for UnitDelay: '<S244>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_lz = rtb_RelationalOperator3_d;

    /* End of Outputs for SubSystem: '<S241>/EdgeFalling1' */

    /* Logic: '<S241>/Logical5' incorporates:
     *  Logic: '<S239>/NOT4'
     */
    rtb_RelationalOperator3_d = ((TmpSignalConversionAtTmpVM_FcnCallSubs_a ||
        TmpSignalConversionAtTmpVM_FcnCallSubs_i) || rtb_AND_az);

    /* Outputs for Atomic SubSystem: '<S243>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S243>/Counter Reset  Enabled ' */
    /* Switch: '<S250>/Switch1' incorporates:
     *  Logic: '<S243>/Fail Counter Reset'
     *  Logic: '<S243>/NOT6'
     *  Switch: '<S250>/Switch2'
     *  Switch: '<S251>/Switch1'
     *  UnitDelay: '<S243>/Unit Delay'
     *  UnitDelay: '<S243>/Unit Delay1'
     */
    if ((rtb_RelationalOperator3_d || (CDMR_ac_DW.UnitDelay_DSTATE_nwo)) ||
            (CDMR_ac_DW.UnitDelay1_DSTATE_br))
    {
        /* Switch: '<S250>/Switch1' incorporates:
         *  Constant: '<S250>/Constant Value2'
         */
        VeCDMR_Cnt_BatChrgModSwStk_FailCnt = 0U;

        /* Switch: '<S251>/Switch1' incorporates:
         *  Constant: '<S251>/Constant Value2'
         */
        VeCDMR_Cnt_BatChrgModSwStk_SmpCnt = 0U;
    }
    else
    {
        if (rtb_UnitDelay_eu && (VeCDMR_b_ButtonStuck))
        {
            /* Switch: '<S250>/Switch1' incorporates:
             *  Constant: '<S250>/Constant Value1'
             *  Sum: '<S250>/Subtraction'
             *  Switch: '<S250>/Switch2'
             *  UnitDelay: '<S250>/Unit Delay'
             */
            VeCDMR_Cnt_BatChrgModSwStk_FailCnt = (uint16)(((uint32)
                VeCDMR_Cnt_BatChrgModSwStk_FailCnt) + 1U);
        }

        /* Switch: '<S251>/Switch2' */
        if (rtb_UnitDelay_eu)
        {
            /* Switch: '<S251>/Switch1' incorporates:
             *  Constant: '<S251>/Constant Value1'
             *  Sum: '<S251>/Subtraction'
             *  Switch: '<S251>/Switch2'
             *  UnitDelay: '<S251>/Unit Delay'
             */
            VeCDMR_Cnt_BatChrgModSwStk_SmpCnt = (uint16)(((uint32)
                VeCDMR_Cnt_BatChrgModSwStk_SmpCnt) + 1U);
        }

        /* End of Switch: '<S251>/Switch2' */
    }

    /* End of Switch: '<S250>/Switch1' */
    /* End of Outputs for SubSystem: '<S243>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S243>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S243>/Greater Than or Equal ' incorporates:
     *  Constant: '<S232>/Calib'
     */
    CDMR_ac_DW.UnitDelay1_DSTATE_br = (VeCDMR_Cnt_BatChrgModSwStk_FailCnt >=
        KeCDMR_Cnt_ButtonStkDTC_Fail);

    /* Logic: '<S243>/NOT5' incorporates:
     *  Constant: '<S233>/Calib'
     *  Logic: '<S243>/NOT3'
     *  RelationalOperator: '<S243>/Less Than  or Equal'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_nwo = ((VeCDMR_Cnt_BatChrgModSwStk_SmpCnt >=
        KeCDMR_Cnt_ButtonStkDTC_Pass) && (!CDMR_ac_DW.UnitDelay1_DSTATE_br));

    /* Outputs for Enabled SubSystem: '<S241>/Fail' */
    CDMR_ac_Fail(CDMR_ac_DW.UnitDelay1_DSTATE_br, &CDMR_ac_B.Merge_ms);

    /* End of Outputs for SubSystem: '<S241>/Fail' */

    /* Outputs for Enabled SubSystem: '<S241>/Init' */
    CDMR_ac_Init_b(rtb_RelationalOperator3_d, &CDMR_ac_B.Merge_ms);

    /* End of Outputs for SubSystem: '<S241>/Init' */

    /* Outputs for Enabled SubSystem: '<S241>/Pass' */
    CDMR_ac_Pass(CDMR_ac_DW.UnitDelay_DSTATE_nwo, &CDMR_ac_B.Merge_ms);

    /* End of Outputs for SubSystem: '<S241>/Pass' */

    /* RelationalOperator: '<S241>/Relational Operator' incorporates:
     *  Constant: '<S245>/Constant'
     *  Merge: '<S241>/Merge'
     */
    VeCDMR_b_BatChrgModSwStk_FltDtct = (((uint32)CDMR_ac_B.Merge_ms) ==
        CeDFIB_e_Fail);

    /* Switch: '<S256>/Switch1' incorporates:
     *  Logic: '<S227>/Logical Operator'
     *  Logic: '<S227>/Logical Operator1'
     *  Switch: '<S255>/Switch1'
     *  UnitDelay: '<S227>/Unit Delay4'
     */
    if (TmpSignalConversionAtTmpVM_FcnCallSubs_i ||
            (CDMR_ac_DW.UnitDelay4_DSTATE == 0.0))
    {
        /* Switch: '<S256>/Switch1' incorporates:
         *  Constant: '<S249>/Constant Value'
         */
        VeCDMR_Cnt_BatChrgModSwStk_MFOP = 0U;
    }
    else
    {
        if (CDMR_ac_DW.UnitDelay_DSTATE_nwo)
        {
            /* MinMax: '<S249>/Minimum2' incorporates:
             *  Switch: '<S255>/Switch1'
             *  UnitDelay: '<S227>/Unit Delay2'
             */
            if (VeCDMR_Cnt_BatChrgModSwStk_FailCnt >
                    VeCDMR_Cnt_BatChrgModSwStk_MFOP)
            {
                /* Switch: '<S256>/Switch1' incorporates:
                 *  Switch: '<S255>/Switch1'
                 */
                VeCDMR_Cnt_BatChrgModSwStk_MFOP =
                    VeCDMR_Cnt_BatChrgModSwStk_FailCnt;
            }

            /* End of MinMax: '<S249>/Minimum2' */
        }
    }

    /* End of Switch: '<S256>/Switch1' */

    /* Update for UnitDelay: '<S227>/Unit Delay4' incorporates:
     *  Constant: '<S227>/Constant'
     */
    CDMR_ac_DW.UnitDelay4_DSTATE = 1.0;

    /* End of Outputs for SubSystem: '<S2>/ButtonDiag' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
#endif

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/CPI_BCI_Diag'
     */

    /* Logic: '<S275>/Logical6' incorporates:
     *  Constant: '<S289>/Constant1'
     *  Constant: '<S289>/Constant2'
     *  DataStoreRead: '<S289>/StatusByte_LostCommBCIM'
     *  Logic: '<S289>/Logical Operator'
     *  RelationalOperator: '<S289>/Relational Operator1'
     *  RelationalOperator: '<S289>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S289>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S289>/Bitwise Operator2'
     */
    VeCDMR_b_BCIM_LINBus_LOC = (TmpSignalConversionAtTmpVM_FcnCallSub_hv ||
        (((((sint32)CDMR_ac_DW.StatusByte_LostCommBCIM) & 1) > 0) && ((((uint32)
        CDMR_ac_DW.StatusByte_LostCommBCIM) & 64U) == 0U)));

    /* RelationalOperator: '<S294>/Relational Operator3' incorporates:
     *  Constant: '<S294>/Constant3'
     *  S-Function (sfix_bitop): '<S294>/Bitwise Operator2'
     */
    rtb_AND_az = ((((uint32)CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_g)
                   & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S294>/EdgeFalling1' */
    /* Logic: '<S294>/Logical Operator' incorporates:
     *  Logic: '<S296>/OR1'
     */
    rtb_Logical5_g = !rtb_AND_az;

    /* End of Outputs for SubSystem: '<S294>/EdgeFalling1' */

    /* Logic: '<S294>/Logical1' incorporates:
     *  Constant: '<S292>/Calib'
     *  Constant: '<S294>/Constant1'
     *  Logic: '<S275>/Logical8'
     *  Logic: '<S275>/NOT1'
     *  Logic: '<S294>/Logical Operator'
     *  Logic: '<S294>/Logical10'
     *  Logic: '<S294>/Logical12'
     *  RelationalOperator: '<S294>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S294>/Bitwise Operator3'
     */
    rtb_UnitDelay_eu = (((!VeCDMR_b_BCIM_LINBus_LOC) &&
                         TmpSignalConversionAtTmpVM_FcnCallSub_ad) &&
                        ((!KeCDMR_b_Module_Failure_BCIM_LtchEnbl) || (((((uint32)
        CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_g) & 1U) == 0U) ||
                          rtb_Logical5_g)));

    /* UnitDelay: '<S405>/Unit Delay' incorporates:
     *  Logic: '<S275>/Logical4'
     */
    TmpSignalConversionAtTmpVM_FcnCallSub_hv =
        (((((CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ki) ||
            (CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_e0)) ||
           (CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_c)) ||
          (CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_adb)) ||
         (CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_j));

    /* RelationalOperator: '<S276>/Comparison7' incorporates:
     *  RelationalOperator: '<S276>/Comparison6'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120'
     */
    VeCDMR_b_BCIM_Ind1_Fault_tmp =
        CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_k2b;

    /* Logic: '<S276>/Logical8' incorporates:
     *  Constant: '<S309>/Constant'
     *  Constant: '<S310>/Constant'
     *  RelationalOperator: '<S276>/Comparison6'
     *  RelationalOperator: '<S276>/Comparison7'
     */
    VeCDMR_b_BCIM_Ind1_Fault = ((CeCITR_e_BCIM_LEDOpen == ((uint32)
        VeCDMR_b_BCIM_Ind1_Fault_tmp)) || (((uint32)VeCDMR_b_BCIM_Ind1_Fault_tmp)
        == CeCITR_e_BCIM_LEDShort));

    /* RelationalOperator: '<S276>/Comparison4' incorporates:
     *  RelationalOperator: '<S276>/Comparison3'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120'
     */
    VeCDMR_b_BCIM_Ind1_Fault_tmp =
        CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fn;

    /* Logic: '<S276>/Logical7' incorporates:
     *  Constant: '<S309>/Constant'
     *  Constant: '<S310>/Constant'
     *  RelationalOperator: '<S276>/Comparison3'
     *  RelationalOperator: '<S276>/Comparison4'
     */
    VeCDMR_b_BCIM_Ind2_Fault = ((CeCITR_e_BCIM_LEDOpen == ((uint32)
        VeCDMR_b_BCIM_Ind1_Fault_tmp)) || (((uint32)VeCDMR_b_BCIM_Ind1_Fault_tmp)
        == CeCITR_e_BCIM_LEDShort));

    /* RelationalOperator: '<S276>/Comparison9' incorporates:
     *  RelationalOperator: '<S276>/Comparison8'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120'
     */
    VeCDMR_b_BCIM_Ind1_Fault_tmp =
        CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ic;

    /* Logic: '<S276>/Logical9' incorporates:
     *  Constant: '<S309>/Constant'
     *  Constant: '<S310>/Constant'
     *  RelationalOperator: '<S276>/Comparison8'
     *  RelationalOperator: '<S276>/Comparison9'
     */
    VeCDMR_b_BCIM_Ind3_Fault = ((CeCITR_e_BCIM_LEDOpen == ((uint32)
        VeCDMR_b_BCIM_Ind1_Fault_tmp)) || (((uint32)VeCDMR_b_BCIM_Ind1_Fault_tmp)
        == CeCITR_e_BCIM_LEDShort));

    /* RelationalOperator: '<S276>/Comparison14' incorporates:
     *  RelationalOperator: '<S276>/Comparison13'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120'
     */
    VeCDMR_b_BCIM_Ind1_Fault_tmp =
        CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ls;

    /* Logic: '<S276>/Logical1' incorporates:
     *  Constant: '<S309>/Constant'
     *  Constant: '<S310>/Constant'
     *  RelationalOperator: '<S276>/Comparison13'
     *  RelationalOperator: '<S276>/Comparison14'
     */
    VeCDMR_b_BCIM_Ind4_Fault = ((CeCITR_e_BCIM_LEDOpen == ((uint32)
        VeCDMR_b_BCIM_Ind1_Fault_tmp)) || (((uint32)VeCDMR_b_BCIM_Ind1_Fault_tmp)
        == CeCITR_e_BCIM_LEDShort));

    /* RelationalOperator: '<S276>/Comparison16' incorporates:
     *  RelationalOperator: '<S276>/Comparison15'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120'
     */
    VeCDMR_b_BCIM_Ind1_Fault_tmp =
        CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_hs;

    /* Logic: '<S276>/Logical4' incorporates:
     *  Constant: '<S309>/Constant'
     *  Constant: '<S310>/Constant'
     *  Constant: '<S312>/Calib'
     *  Logic: '<S276>/Logical2'
     *  RelationalOperator: '<S276>/Comparison15'
     *  RelationalOperator: '<S276>/Comparison16'
     */
    VeCDMR_b_BCIM_Ind5_Fault = (((CeCITR_e_BCIM_LEDOpen == ((uint32)
        VeCDMR_b_BCIM_Ind1_Fault_tmp)) || (((uint32)VeCDMR_b_BCIM_Ind1_Fault_tmp)
        == CeCITR_e_BCIM_LEDShort)) && (KeCDMR_b_ActvnBCIM5Led));

    /* Logic: '<S283>/Logical8' incorporates:
     *  Logic: '<S275>/Logical3'
     */
    rtb_Logical8_h = (((((VeCDMR_b_BCIM_Ind1_Fault) || (VeCDMR_b_BCIM_Ind2_Fault))
                        || (VeCDMR_b_BCIM_Ind3_Fault)) ||
                       (VeCDMR_b_BCIM_Ind4_Fault)) || (VeCDMR_b_BCIM_Ind5_Fault));

    /* Logic: '<S275>/Logical2' */
    rtb_RelationalOperator3_d = (TmpSignalConversionAtTmpVM_FcnCallSub_hv ||
        rtb_Logical8_h);

    /* RelationalOperator: '<S276>/Comparison2' incorporates:
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120'
     */
    rtb_Comparison2 = (CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ds !=
                       CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_nd);

    /* Outputs for Atomic SubSystem: '<S276>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S313>/EdgeRising' */
    /* Logic: '<S319>/AND' incorporates:
     *  Logic: '<S319>/OR1'
     *  UnitDelay: '<S319>/Unit Delay'
     */
    rtb_AND_cqs = (rtb_Comparison2 && (!CDMR_ac_DW.UnitDelay_DSTATE_dx));

    /* Update for UnitDelay: '<S319>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_dx = rtb_Comparison2;

    /* End of Outputs for SubSystem: '<S313>/EdgeRising' */

    /* Switch: '<S313>/Switch1' incorporates:
     *  Constant: '<S311>/Calib'
     *  Constant: '<S313>/Constant Value'
     *  Constant: '<S313>/Constant Value1'
     *  Logic: '<S313>/OR'
     *  Logic: '<S313>/OR1'
     *  MinMax: '<S313>/Minimum'
     *  Sum: '<S313>/Summation'
     *  UnitDelay: '<S313>/Unit Delay'
     */
    if ((!rtb_Comparison2) || rtb_AND_cqs)
    {
        CDMR_ac_DW.UnitDelay_DSTATE_bp = 0U;
    }
    else if (KeCDMR_Cnt_LINClrDbnc_BCIM < ((uint16)(((uint32)
                CDMR_ac_DW.UnitDelay_DSTATE_bp) + 1U)))
    {
        /* MinMax: '<S313>/Minimum' incorporates:
         *  Constant: '<S311>/Calib'
         */
        CDMR_ac_DW.UnitDelay_DSTATE_bp = KeCDMR_Cnt_LINClrDbnc_BCIM;
    }
    else
    {
        /* MinMax: '<S313>/Minimum' incorporates:
         *  Constant: '<S313>/Constant Value'
         *  Sum: '<S313>/Summation'
         *  UnitDelay: '<S313>/Unit Delay'
         */
        CDMR_ac_DW.UnitDelay_DSTATE_bp = (uint16)(((uint32)
            CDMR_ac_DW.UnitDelay_DSTATE_bp) + 1U);
    }

    /* End of Switch: '<S313>/Switch1' */

    /* Logic: '<S313>/AND' incorporates:
     *  Constant: '<S311>/Calib'
     *  RelationalOperator: '<S313>/Greater  Than'
     *  UnitDelay: '<S313>/Unit Delay'
     */
    VeCDMR_b_BCIM_Ind1Mismatch = (rtb_Comparison2 &&
        (CDMR_ac_DW.UnitDelay_DSTATE_bp >= KeCDMR_Cnt_LINClrDbnc_BCIM));

    /* End of Outputs for SubSystem: '<S276>/Turn On Delay Sample' */

    /* RelationalOperator: '<S276>/Comparison1' incorporates:
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120'
     */
    rtb_Comparison2 = (CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_li !=
                       CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mb);

    /* Outputs for Atomic SubSystem: '<S276>/Turn On Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S314>/EdgeRising' */
    /* Logic: '<S320>/AND' incorporates:
     *  Logic: '<S320>/OR1'
     *  UnitDelay: '<S320>/Unit Delay'
     */
    rtb_AND_cqs = (rtb_Comparison2 && (!CDMR_ac_DW.UnitDelay_DSTATE_dm));

    /* Update for UnitDelay: '<S320>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_dm = rtb_Comparison2;

    /* End of Outputs for SubSystem: '<S314>/EdgeRising' */

    /* Switch: '<S314>/Switch1' incorporates:
     *  Constant: '<S311>/Calib'
     *  Constant: '<S314>/Constant Value'
     *  Constant: '<S314>/Constant Value1'
     *  Logic: '<S314>/OR'
     *  Logic: '<S314>/OR1'
     *  MinMax: '<S314>/Minimum'
     *  Sum: '<S314>/Summation'
     *  UnitDelay: '<S314>/Unit Delay'
     */
    if ((!rtb_Comparison2) || rtb_AND_cqs)
    {
        CDMR_ac_DW.UnitDelay_DSTATE_hg = 0U;
    }
    else if (KeCDMR_Cnt_LINClrDbnc_BCIM < ((uint16)(((uint32)
                CDMR_ac_DW.UnitDelay_DSTATE_hg) + 1U)))
    {
        /* MinMax: '<S314>/Minimum' incorporates:
         *  Constant: '<S311>/Calib'
         */
        CDMR_ac_DW.UnitDelay_DSTATE_hg = KeCDMR_Cnt_LINClrDbnc_BCIM;
    }
    else
    {
        /* MinMax: '<S314>/Minimum' incorporates:
         *  Constant: '<S314>/Constant Value'
         *  Sum: '<S314>/Summation'
         *  UnitDelay: '<S314>/Unit Delay'
         */
        CDMR_ac_DW.UnitDelay_DSTATE_hg = (uint16)(((uint32)
            CDMR_ac_DW.UnitDelay_DSTATE_hg) + 1U);
    }

    /* End of Switch: '<S314>/Switch1' */

    /* Logic: '<S314>/AND' incorporates:
     *  Constant: '<S311>/Calib'
     *  RelationalOperator: '<S314>/Greater  Than'
     *  UnitDelay: '<S314>/Unit Delay'
     */
    VeCDMR_b_BCIM_Ind2Mismatch = (rtb_Comparison2 &&
        (CDMR_ac_DW.UnitDelay_DSTATE_hg >= KeCDMR_Cnt_LINClrDbnc_BCIM));

    /* End of Outputs for SubSystem: '<S276>/Turn On Delay Sample1' */

    /* RelationalOperator: '<S276>/Comparison5' incorporates:
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120'
     */
    rtb_Comparison2 = (CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_pt !=
                       CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_kd);

    /* Outputs for Atomic SubSystem: '<S276>/Turn On Delay Sample2' */
    /* Outputs for Atomic SubSystem: '<S315>/EdgeRising' */
    /* Logic: '<S321>/AND' incorporates:
     *  Logic: '<S321>/OR1'
     *  UnitDelay: '<S321>/Unit Delay'
     */
    rtb_AND_cqs = (rtb_Comparison2 && (!CDMR_ac_DW.UnitDelay_DSTATE_o2e));

    /* Update for UnitDelay: '<S321>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_o2e = rtb_Comparison2;

    /* End of Outputs for SubSystem: '<S315>/EdgeRising' */

    /* Switch: '<S315>/Switch1' incorporates:
     *  Constant: '<S311>/Calib'
     *  Constant: '<S315>/Constant Value'
     *  Constant: '<S315>/Constant Value1'
     *  Logic: '<S315>/OR'
     *  Logic: '<S315>/OR1'
     *  MinMax: '<S315>/Minimum'
     *  Sum: '<S315>/Summation'
     *  UnitDelay: '<S315>/Unit Delay'
     */
    if ((!rtb_Comparison2) || rtb_AND_cqs)
    {
        CDMR_ac_DW.UnitDelay_DSTATE_kf = 0U;
    }
    else if (KeCDMR_Cnt_LINClrDbnc_BCIM < ((uint16)(((uint32)
                CDMR_ac_DW.UnitDelay_DSTATE_kf) + 1U)))
    {
        /* MinMax: '<S315>/Minimum' incorporates:
         *  Constant: '<S311>/Calib'
         */
        CDMR_ac_DW.UnitDelay_DSTATE_kf = KeCDMR_Cnt_LINClrDbnc_BCIM;
    }
    else
    {
        /* MinMax: '<S315>/Minimum' incorporates:
         *  Constant: '<S315>/Constant Value'
         *  Sum: '<S315>/Summation'
         *  UnitDelay: '<S315>/Unit Delay'
         */
        CDMR_ac_DW.UnitDelay_DSTATE_kf = (uint16)(((uint32)
            CDMR_ac_DW.UnitDelay_DSTATE_kf) + 1U);
    }

    /* End of Switch: '<S315>/Switch1' */

    /* Logic: '<S315>/AND' incorporates:
     *  Constant: '<S311>/Calib'
     *  RelationalOperator: '<S315>/Greater  Than'
     *  UnitDelay: '<S315>/Unit Delay'
     */
    VeCDMR_b_BCIM_Ind3Mismatch = (rtb_Comparison2 &&
        (CDMR_ac_DW.UnitDelay_DSTATE_kf >= KeCDMR_Cnt_LINClrDbnc_BCIM));

    /* End of Outputs for SubSystem: '<S276>/Turn On Delay Sample2' */

    /* RelationalOperator: '<S276>/Comparison10' incorporates:
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120'
     */
    rtb_Comparison2 = (CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_lpc !=
                       CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_pv);

    /* Outputs for Atomic SubSystem: '<S276>/Turn On Delay Sample3' */
    /* Outputs for Atomic SubSystem: '<S316>/EdgeRising' */
    /* Logic: '<S322>/AND' incorporates:
     *  Logic: '<S322>/OR1'
     *  UnitDelay: '<S322>/Unit Delay'
     */
    rtb_AND_cqs = (rtb_Comparison2 && (!CDMR_ac_DW.UnitDelay_DSTATE_ez));

    /* Update for UnitDelay: '<S322>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_ez = rtb_Comparison2;

    /* End of Outputs for SubSystem: '<S316>/EdgeRising' */

    /* Switch: '<S316>/Switch1' incorporates:
     *  Constant: '<S311>/Calib'
     *  Constant: '<S316>/Constant Value'
     *  Constant: '<S316>/Constant Value1'
     *  Logic: '<S316>/OR'
     *  Logic: '<S316>/OR1'
     *  MinMax: '<S316>/Minimum'
     *  Sum: '<S316>/Summation'
     *  UnitDelay: '<S316>/Unit Delay'
     */
    if ((!rtb_Comparison2) || rtb_AND_cqs)
    {
        CDMR_ac_DW.UnitDelay_DSTATE_jm = 0U;
    }
    else if (KeCDMR_Cnt_LINClrDbnc_BCIM < ((uint16)(((uint32)
                CDMR_ac_DW.UnitDelay_DSTATE_jm) + 1U)))
    {
        /* MinMax: '<S316>/Minimum' incorporates:
         *  Constant: '<S311>/Calib'
         */
        CDMR_ac_DW.UnitDelay_DSTATE_jm = KeCDMR_Cnt_LINClrDbnc_BCIM;
    }
    else
    {
        /* MinMax: '<S316>/Minimum' incorporates:
         *  Constant: '<S316>/Constant Value'
         *  Sum: '<S316>/Summation'
         *  UnitDelay: '<S316>/Unit Delay'
         */
        CDMR_ac_DW.UnitDelay_DSTATE_jm = (uint16)(((uint32)
            CDMR_ac_DW.UnitDelay_DSTATE_jm) + 1U);
    }

    /* End of Switch: '<S316>/Switch1' */

    /* Logic: '<S316>/AND' incorporates:
     *  Constant: '<S311>/Calib'
     *  RelationalOperator: '<S316>/Greater  Than'
     *  UnitDelay: '<S316>/Unit Delay'
     */
    VeCDMR_b_BCIM_Ind4Mismatch = (rtb_Comparison2 &&
        (CDMR_ac_DW.UnitDelay_DSTATE_jm >= KeCDMR_Cnt_LINClrDbnc_BCIM));

    /* End of Outputs for SubSystem: '<S276>/Turn On Delay Sample3' */

    /* RelationalOperator: '<S276>/Comparison11' incorporates:
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120'
     */
    rtb_Comparison2 = (CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_pvt !=
                       CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_kj);

    /* Outputs for Atomic SubSystem: '<S276>/Turn On Delay Sample4' */
    /* Outputs for Atomic SubSystem: '<S317>/EdgeRising' */
    /* Logic: '<S323>/AND' incorporates:
     *  Logic: '<S323>/OR1'
     *  UnitDelay: '<S323>/Unit Delay'
     */
    rtb_AND_cqs = (rtb_Comparison2 && (!CDMR_ac_DW.UnitDelay_DSTATE_lc));

    /* Update for UnitDelay: '<S323>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_lc = rtb_Comparison2;

    /* End of Outputs for SubSystem: '<S317>/EdgeRising' */

    /* Switch: '<S317>/Switch1' incorporates:
     *  Constant: '<S311>/Calib'
     *  Constant: '<S317>/Constant Value'
     *  Constant: '<S317>/Constant Value1'
     *  Logic: '<S317>/OR'
     *  Logic: '<S317>/OR1'
     *  MinMax: '<S317>/Minimum'
     *  Sum: '<S317>/Summation'
     *  UnitDelay: '<S317>/Unit Delay'
     */
    if ((!rtb_Comparison2) || rtb_AND_cqs)
    {
        CDMR_ac_DW.UnitDelay_DSTATE_ap = 0U;
    }
    else if (KeCDMR_Cnt_LINClrDbnc_BCIM < ((uint16)(((uint32)
                CDMR_ac_DW.UnitDelay_DSTATE_ap) + 1U)))
    {
        /* MinMax: '<S317>/Minimum' incorporates:
         *  Constant: '<S311>/Calib'
         */
        CDMR_ac_DW.UnitDelay_DSTATE_ap = KeCDMR_Cnt_LINClrDbnc_BCIM;
    }
    else
    {
        /* MinMax: '<S317>/Minimum' incorporates:
         *  Constant: '<S317>/Constant Value'
         *  Sum: '<S317>/Summation'
         *  UnitDelay: '<S317>/Unit Delay'
         */
        CDMR_ac_DW.UnitDelay_DSTATE_ap = (uint16)(((uint32)
            CDMR_ac_DW.UnitDelay_DSTATE_ap) + 1U);
    }

    /* End of Switch: '<S317>/Switch1' */

    /* Logic: '<S317>/AND' incorporates:
     *  Constant: '<S311>/Calib'
     *  RelationalOperator: '<S317>/Greater  Than'
     *  UnitDelay: '<S317>/Unit Delay'
     */
    VeCDMR_b_BCIM_Ind5Mismatch = (rtb_Comparison2 &&
        (CDMR_ac_DW.UnitDelay_DSTATE_ap >= KeCDMR_Cnt_LINClrDbnc_BCIM));

    /* End of Outputs for SubSystem: '<S276>/Turn On Delay Sample4' */

    /* RelationalOperator: '<S276>/Comparison12' incorporates:
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120'
     */
    rtb_Comparison2 = (CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_io !=
                       CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_pi);

    /* Outputs for Atomic SubSystem: '<S276>/Turn On Delay Sample5' */
    /* Outputs for Atomic SubSystem: '<S318>/EdgeRising' */
    /* Logic: '<S324>/AND' incorporates:
     *  Logic: '<S324>/OR1'
     *  UnitDelay: '<S324>/Unit Delay'
     */
    rtb_AND_cqs = (rtb_Comparison2 && (!CDMR_ac_DW.UnitDelay_DSTATE_ng));

    /* Update for UnitDelay: '<S324>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_ng = rtb_Comparison2;

    /* End of Outputs for SubSystem: '<S318>/EdgeRising' */

    /* Switch: '<S318>/Switch1' incorporates:
     *  Constant: '<S311>/Calib'
     *  Constant: '<S318>/Constant Value'
     *  Constant: '<S318>/Constant Value1'
     *  Logic: '<S318>/OR'
     *  Logic: '<S318>/OR1'
     *  MinMax: '<S318>/Minimum'
     *  Sum: '<S318>/Summation'
     *  UnitDelay: '<S318>/Unit Delay'
     */
    if ((!rtb_Comparison2) || rtb_AND_cqs)
    {
        CDMR_ac_DW.UnitDelay_DSTATE_d2 = 0U;
    }
    else if (KeCDMR_Cnt_LINClrDbnc_BCIM < ((uint16)(((uint32)
                CDMR_ac_DW.UnitDelay_DSTATE_d2) + 1U)))
    {
        /* MinMax: '<S318>/Minimum' incorporates:
         *  Constant: '<S311>/Calib'
         */
        CDMR_ac_DW.UnitDelay_DSTATE_d2 = KeCDMR_Cnt_LINClrDbnc_BCIM;
    }
    else
    {
        /* MinMax: '<S318>/Minimum' incorporates:
         *  Constant: '<S318>/Constant Value'
         *  Sum: '<S318>/Summation'
         *  UnitDelay: '<S318>/Unit Delay'
         */
        CDMR_ac_DW.UnitDelay_DSTATE_d2 = (uint16)(((uint32)
            CDMR_ac_DW.UnitDelay_DSTATE_d2) + 1U);
    }

    /* End of Switch: '<S318>/Switch1' */

    /* Logic: '<S318>/AND' incorporates:
     *  Constant: '<S311>/Calib'
     *  RelationalOperator: '<S318>/Greater  Than'
     *  UnitDelay: '<S318>/Unit Delay'
     */
    VeCDMR_b_BCIMColorIndMismatch = (rtb_Comparison2 &&
        (CDMR_ac_DW.UnitDelay_DSTATE_d2 >= KeCDMR_Cnt_LINClrDbnc_BCIM));

    /* End of Outputs for SubSystem: '<S276>/Turn On Delay Sample5' */

    /* Switch: '<S276>/Switch22' incorporates:
     *  Constant: '<S312>/Calib'
     */
    if (KeCDMR_b_ActvnBCIM5Led)
    {
        rtb_Comparison2 = VeCDMR_b_BCIM_Ind5Mismatch;
    }
    else
    {
        rtb_Comparison2 = VeCDMR_b_BCIMColorIndMismatch;
    }

    /* End of Switch: '<S276>/Switch22' */

    /* Logic: '<S276>/Logical3' */
    VeCDMR_b_BCIM_Mismatch = (((((VeCDMR_b_BCIM_Ind1Mismatch) ||
        (VeCDMR_b_BCIM_Ind2Mismatch)) || (VeCDMR_b_BCIM_Ind3Mismatch)) ||
        (VeCDMR_b_BCIM_Ind4Mismatch)) || rtb_Comparison2);

    /* Outputs for Atomic SubSystem: '<S275>/EdgeFalling' */
    /* Logic: '<S287>/AND' incorporates:
     *  Logic: '<S287>/OR1'
     *  UnitDelay: '<S275>/Unit Delay'
     *  UnitDelay: '<S287>/Unit Delay'
     */
    rtb_Comparison2 = ((!CDMR_ac_DW.UnitDelay_DSTATE_e45) &&
                       (CDMR_ac_DW.UnitDelay_DSTATE_ae));

    /* Update for UnitDelay: '<S287>/Unit Delay' incorporates:
     *  UnitDelay: '<S275>/Unit Delay'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_ae = CDMR_ac_DW.UnitDelay_DSTATE_e45;

    /* End of Outputs for SubSystem: '<S275>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S275>/EdgeRising2' */
    /* Logic: '<S288>/OR1' incorporates:
     *  UnitDelay: '<S288>/Unit Delay'
     */
    rtb_AND_cqs = !CDMR_ac_DW.UnitDelay_DSTATE_c2;

    /* Update for UnitDelay: '<S288>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_c2 = TmpSignalConversionAtTmpVM_FcnCallSubs_o;

    /* Logic: '<S275>/Logical11' incorporates:
     *  Logic: '<S288>/AND'
     */
    VeCDMR_b_BCIMFaultTest4 = (rtb_Comparison2 ||
        (TmpSignalConversionAtTmpVM_FcnCallSubs_o && rtb_AND_cqs));

    /* End of Outputs for SubSystem: '<S275>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S275>/Signal Latch On With Reset' */
    /* Logic: '<S293>/OR1' incorporates:
     *  Logic: '<S293>/NOT'
     *  Logic: '<S293>/OR'
     *  UnitDelay: '<S293>/Unit Delay'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_pe = ((VeCDMR_b_BCIM_Mismatch) ||
        ((!VeCDMR_b_BCIMFaultTest4) && (CDMR_ac_DW.UnitDelay_DSTATE_pe)));

    /* End of Outputs for SubSystem: '<S275>/Signal Latch On With Reset' */

    /* Outputs for Atomic SubSystem: '<S294>/EdgeFalling1' */
    /* Logic: '<S296>/AND' incorporates:
     *  UnitDelay: '<S296>/Unit Delay'
     */
    rtb_Comparison2 = (rtb_Logical5_g && (CDMR_ac_DW.UnitDelay_DSTATE_ew));

    /* Update for UnitDelay: '<S296>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_ew = rtb_AND_az;

    /* End of Outputs for SubSystem: '<S294>/EdgeFalling1' */

    /* Logic: '<S275>/NOT4' incorporates:
     *  Logic: '<S341>/NOT4'
     *  Logic: '<S401>/NOT4'
     */
    rtb_Logical5_g = (TmpSignalConversionAtTmpVM_FcnCallSubs_a ||
                      TmpSignalConversionAtTmpVM_FcnCallSubs_i);

    /* Logic: '<S294>/Logical5' incorporates:
     *  Logic: '<S275>/NOT4'
     */
    rtb_AND_az = (rtb_Logical5_g || rtb_Comparison2);

    /* Outputs for Atomic SubSystem: '<S295>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S295>/Counter Reset  Enabled ' */
    /* Switch: '<S302>/Switch1' incorporates:
     *  Logic: '<S275>/Logical Operator'
     *  Logic: '<S295>/Fail Counter Reset'
     *  Logic: '<S295>/NOT6'
     *  Switch: '<S302>/Switch2'
     *  Switch: '<S303>/Switch1'
     *  UnitDelay: '<S293>/Unit Delay'
     *  UnitDelay: '<S295>/Unit Delay'
     *  UnitDelay: '<S295>/Unit Delay1'
     */
    if ((rtb_AND_az || (CDMR_ac_DW.UnitDelay_DSTATE_jfw)) ||
            (CDMR_ac_DW.UnitDelay1_DSTATE_h))
    {
        /* Switch: '<S302>/Switch1' incorporates:
         *  Constant: '<S302>/Constant Value2'
         */
        VeCDMR_Cnt_InternalFailureBCIM_FailCnt = 0U;

        /* Switch: '<S303>/Switch1' incorporates:
         *  Constant: '<S303>/Constant Value2'
         */
        VeCDMR_Cnt_InternalFailureBCIM_SmpCnt = 0U;
    }
    else
    {
        if (rtb_UnitDelay_eu && (rtb_RelationalOperator3_d ||
                                 (CDMR_ac_DW.UnitDelay_DSTATE_pe)))
        {
            /* Switch: '<S302>/Switch1' incorporates:
             *  Constant: '<S302>/Constant Value1'
             *  Sum: '<S302>/Subtraction'
             *  Switch: '<S302>/Switch2'
             *  UnitDelay: '<S302>/Unit Delay'
             */
            VeCDMR_Cnt_InternalFailureBCIM_FailCnt = (uint16)(((uint32)
                VeCDMR_Cnt_InternalFailureBCIM_FailCnt) + 1U);
        }

        /* Switch: '<S303>/Switch2' */
        if (rtb_UnitDelay_eu)
        {
            /* Switch: '<S303>/Switch1' incorporates:
             *  Constant: '<S303>/Constant Value1'
             *  Sum: '<S303>/Subtraction'
             *  Switch: '<S303>/Switch2'
             *  UnitDelay: '<S303>/Unit Delay'
             */
            VeCDMR_Cnt_InternalFailureBCIM_SmpCnt = (uint16)(((uint32)
                VeCDMR_Cnt_InternalFailureBCIM_SmpCnt) + 1U);
        }

        /* End of Switch: '<S303>/Switch2' */
    }

    /* End of Switch: '<S302>/Switch1' */
    /* End of Outputs for SubSystem: '<S295>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S295>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S295>/Greater Than or Equal ' incorporates:
     *  Constant: '<S290>/Calib'
     */
    CDMR_ac_DW.UnitDelay1_DSTATE_h = (VeCDMR_Cnt_InternalFailureBCIM_FailCnt >=
        KeCDMR_Cnt_BCIM_Fail);

    /* Logic: '<S295>/NOT5' incorporates:
     *  Constant: '<S291>/Calib'
     *  Logic: '<S295>/NOT3'
     *  RelationalOperator: '<S295>/Less Than  or Equal'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_jfw = ((VeCDMR_Cnt_InternalFailureBCIM_SmpCnt >=
        KeCDMR_Cnt_BCIM_Pass) && (!CDMR_ac_DW.UnitDelay1_DSTATE_h));

    /* Switch: '<S308>/Switch1' incorporates:
     *  Constant: '<S301>/Constant Value'
     *  DataStoreWrite: '<S275>/Data Store Write2'
     *  Switch: '<S307>/Switch1'
     */
    if (TmpSignalConversionAtTmpVM_FcnCallSubs_i)
    {
        CDMR_ac_DW.NeCDMR_Cnt_BCIMInternal_MFOP = 0U;
    }
    else
    {
        if (CDMR_ac_DW.UnitDelay_DSTATE_jfw)
        {
            /* MinMax: '<S301>/Minimum2' incorporates:
             *  DataStoreRead: '<S275>/Data Store Read2'
             *  Switch: '<S307>/Switch1'
             */
            if (VeCDMR_Cnt_InternalFailureBCIM_FailCnt >
                    CDMR_ac_DW.NeCDMR_Cnt_BCIMInternal_MFOP)
            {
                /* DataStoreWrite: '<S275>/Data Store Write2' incorporates:
                 *  Switch: '<S307>/Switch1'
                 */
                CDMR_ac_DW.NeCDMR_Cnt_BCIMInternal_MFOP =
                    VeCDMR_Cnt_InternalFailureBCIM_FailCnt;
            }

            /* End of MinMax: '<S301>/Minimum2' */
        }
    }

    /* End of Switch: '<S308>/Switch1' */

    /* Logic: '<S285>/AND' */
    rtb_UnitDelay_eu = rtb_Logical8_h;

    /* Logic: '<S275>/Logical7' incorporates:
     *  UnitDelay: '<S275>/Unit Delay'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_e45 = ((VeCDMR_b_BCIM_LINBus_LOC) ||
        rtb_RelationalOperator3_d);

    /* Outputs for Enabled SubSystem: '<S294>/Fail' */
    CDMR_ac_Fail(CDMR_ac_DW.UnitDelay1_DSTATE_h, &CDMR_ac_B.Merge_ni);

    /* End of Outputs for SubSystem: '<S294>/Fail' */

    /* Outputs for Enabled SubSystem: '<S294>/Init' */
    CDMR_ac_Init_b(rtb_AND_az, &CDMR_ac_B.Merge_ni);

    /* End of Outputs for SubSystem: '<S294>/Init' */

    /* Outputs for Enabled SubSystem: '<S294>/Pass' */
    CDMR_ac_Pass(CDMR_ac_DW.UnitDelay_DSTATE_jfw, &CDMR_ac_B.Merge_ni);

    /* End of Outputs for SubSystem: '<S294>/Pass' */

    /* RelationalOperator: '<S294>/Relational Operator' incorporates:
     *  Constant: '<S297>/Constant'
     *  Merge: '<S294>/Merge'
     */
    VeCDMR_b_FltDtct_BCIMInternal = (((uint32)CDMR_ac_B.Merge_ni) ==
        CeDFIB_e_Fail);

    /* Logic: '<S279>/Logical6' incorporates:
     *  Constant: '<S332>/Constant1'
     *  Constant: '<S332>/Constant2'
     *  DataStoreRead: '<S332>/StatusByte_LostCommCPIM'
     *  Logic: '<S332>/Logical Operator'
     *  RelationalOperator: '<S332>/Relational Operator1'
     *  RelationalOperator: '<S332>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S332>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S332>/Bitwise Operator2'
     */
    VeCDMR_b_CPIM_LINBus_LOC = (TmpSignalConversionAtTmpVM_FcnCallSubs_e ||
        (((((sint32)CDMR_ac_DW.StatusByte_LostCommCPIM) & 1) > 0) && ((((uint32)
        CDMR_ac_DW.StatusByte_LostCommCPIM) & 64U) == 0U)));

    /* RelationalOperator: '<S343>/Relational Operator3' incorporates:
     *  Constant: '<S343>/Constant3'
     *  S-Function (sfix_bitop): '<S343>/Bitwise Operator2'
     */
    rtb_Comparison2 = ((((uint32)
                         CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_n) &
                        64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S343>/EdgeFalling1' */
    /* Logic: '<S343>/Logical Operator' incorporates:
     *  Logic: '<S345>/OR1'
     */
    rtb_AND_cqs = !rtb_Comparison2;

    /* End of Outputs for SubSystem: '<S343>/EdgeFalling1' */

    /* Logic: '<S343>/Logical1' incorporates:
     *  Constant: '<S338>/Calib'
     *  Constant: '<S339>/Calib'
     *  Constant: '<S343>/Constant1'
     *  Logic: '<S279>/Logical Operator'
     *  Logic: '<S279>/Logical Operator1'
     *  Logic: '<S279>/Logical Operator2'
     *  Logic: '<S343>/Logical Operator'
     *  Logic: '<S343>/Logical10'
     *  Logic: '<S343>/Logical12'
     *  RelationalOperator: '<S343>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S343>/Bitwise Operator3'
     */
    rtb_AND_az = (((TmpSignalConversionAtTmpVM_FcnCallSub_ad &&
                    (!VeCDMR_b_CPIM_LINBus_LOC)) &&
                   (TmpSignalConversionAtTmpVM_FcnCallSubs_o &&
                    (KeCDMR_b_PluggedIn))) &&
                  ((!KeCDMR_b_Module_Failure_CPIM_LtchEnbl) || (((((uint32)
                       CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_n) & 1U)
                     == 0U) || rtb_AND_cqs)));

    /* Logic: '<S279>/Logical4' */
    TmpSignalConversionAtTmpVM_FcnCallSubs_e =
        (((((CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ll) ||
            (CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_f2)) ||
           (CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_kp)) ||
          (CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_p)) ||
         (CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ik));

    /* RelationalOperator: '<S280>/Comparison7' incorporates:
     *  RelationalOperator: '<S280>/Comparison6'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120'
     */
    VeCDMR_b_CPIM_Ind1_Fault_tmp =
        CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_lo;

    /* Logic: '<S280>/Logical8' incorporates:
     *  Constant: '<S358>/Constant'
     *  Constant: '<S359>/Constant'
     *  RelationalOperator: '<S280>/Comparison6'
     *  RelationalOperator: '<S280>/Comparison7'
     */
    VeCDMR_b_CPIM_Ind1_Fault = ((CeCITR_e_CPIM_LEDOpen == ((uint32)
        VeCDMR_b_CPIM_Ind1_Fault_tmp)) || (((uint32)VeCDMR_b_CPIM_Ind1_Fault_tmp)
        == CeCITR_e_CPIM_LEDShort));

    /* RelationalOperator: '<S280>/Comparison4' incorporates:
     *  RelationalOperator: '<S280>/Comparison3'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120'
     */
    VeCDMR_b_CPIM_Ind1_Fault_tmp =
        CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_hh;

    /* Logic: '<S280>/Logical7' incorporates:
     *  Constant: '<S358>/Constant'
     *  Constant: '<S359>/Constant'
     *  RelationalOperator: '<S280>/Comparison3'
     *  RelationalOperator: '<S280>/Comparison4'
     */
    VeCDMR_b_CPIM_Ind2_Fault = ((CeCITR_e_CPIM_LEDOpen == ((uint32)
        VeCDMR_b_CPIM_Ind1_Fault_tmp)) || (((uint32)VeCDMR_b_CPIM_Ind1_Fault_tmp)
        == CeCITR_e_CPIM_LEDShort));

    /* RelationalOperator: '<S280>/Comparison9' incorporates:
     *  RelationalOperator: '<S280>/Comparison8'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120'
     */
    VeCDMR_b_CPIM_Ind1_Fault_tmp =
        CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_jt;

    /* Logic: '<S280>/Logical9' incorporates:
     *  Constant: '<S358>/Constant'
     *  Constant: '<S359>/Constant'
     *  RelationalOperator: '<S280>/Comparison8'
     *  RelationalOperator: '<S280>/Comparison9'
     */
    VeCDMR_b_CPIM_Ind3_Fault = ((CeCITR_e_CPIM_LEDOpen == ((uint32)
        VeCDMR_b_CPIM_Ind1_Fault_tmp)) || (((uint32)VeCDMR_b_CPIM_Ind1_Fault_tmp)
        == CeCITR_e_CPIM_LEDShort));

    /* RelationalOperator: '<S280>/Comparison14' incorporates:
     *  RelationalOperator: '<S280>/Comparison13'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120'
     */
    VeCDMR_b_CPIM_Ind1_Fault_tmp =
        CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_l5;

    /* Logic: '<S280>/Logical1' incorporates:
     *  Constant: '<S358>/Constant'
     *  Constant: '<S359>/Constant'
     *  RelationalOperator: '<S280>/Comparison13'
     *  RelationalOperator: '<S280>/Comparison14'
     */
    VeCDMR_b_CPIM_Ind4_Fault = ((CeCITR_e_CPIM_LEDOpen == ((uint32)
        VeCDMR_b_CPIM_Ind1_Fault_tmp)) || (((uint32)VeCDMR_b_CPIM_Ind1_Fault_tmp)
        == CeCITR_e_CPIM_LEDShort));

    /* RelationalOperator: '<S280>/Comparison16' incorporates:
     *  RelationalOperator: '<S280>/Comparison15'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120'
     */
    VeCDMR_b_CPIM_Ind1_Fault_tmp =
        CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_jc;

    /* Logic: '<S280>/Logical2' incorporates:
     *  Constant: '<S358>/Constant'
     *  Constant: '<S359>/Constant'
     *  RelationalOperator: '<S280>/Comparison15'
     *  RelationalOperator: '<S280>/Comparison16'
     */
    VeCDMR_b_CPIM_Ind5_Fault = ((CeCITR_e_CPIM_LEDOpen == ((uint32)
        VeCDMR_b_CPIM_Ind1_Fault_tmp)) || (((uint32)VeCDMR_b_CPIM_Ind1_Fault_tmp)
        == CeCITR_e_CPIM_LEDShort));

    /* RelationalOperator: '<S280>/Comparison2' incorporates:
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120'
     */
    rtb_RelationalOperator3_d =
        (CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_oeb !=
         CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_j5);

    /* Outputs for Atomic SubSystem: '<S280>/Turn On Delay Sample6' */
    /* Outputs for Atomic SubSystem: '<S366>/EdgeRising' */
    /* Logic: '<S372>/AND' incorporates:
     *  Logic: '<S372>/OR1'
     *  UnitDelay: '<S372>/Unit Delay'
     */
    rtb_Logical8_h = (rtb_RelationalOperator3_d &&
                      (!CDMR_ac_DW.UnitDelay_DSTATE_oa));

    /* Update for UnitDelay: '<S372>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_oa = rtb_RelationalOperator3_d;

    /* End of Outputs for SubSystem: '<S366>/EdgeRising' */

    /* Switch: '<S366>/Switch1' incorporates:
     *  Constant: '<S360>/Calib'
     *  Constant: '<S366>/Constant Value'
     *  Constant: '<S366>/Constant Value1'
     *  Logic: '<S366>/OR'
     *  Logic: '<S366>/OR1'
     *  MinMax: '<S366>/Minimum'
     *  Sum: '<S366>/Summation'
     *  UnitDelay: '<S366>/Unit Delay'
     */
    if ((!rtb_RelationalOperator3_d) || rtb_Logical8_h)
    {
        CDMR_ac_DW.UnitDelay_DSTATE_nl = 0U;
    }
    else if (KeCDMR_Cnt_LINColorDbncTime < ((uint16)(((uint32)
                CDMR_ac_DW.UnitDelay_DSTATE_nl) + 1U)))
    {
        /* MinMax: '<S366>/Minimum' incorporates:
         *  Constant: '<S360>/Calib'
         */
        CDMR_ac_DW.UnitDelay_DSTATE_nl = KeCDMR_Cnt_LINColorDbncTime;
    }
    else
    {
        /* MinMax: '<S366>/Minimum' incorporates:
         *  Constant: '<S366>/Constant Value'
         *  Sum: '<S366>/Summation'
         *  UnitDelay: '<S366>/Unit Delay'
         */
        CDMR_ac_DW.UnitDelay_DSTATE_nl = (uint16)(((uint32)
            CDMR_ac_DW.UnitDelay_DSTATE_nl) + 1U);
    }

    /* End of Switch: '<S366>/Switch1' */

    /* Logic: '<S366>/AND' incorporates:
     *  Constant: '<S360>/Calib'
     *  RelationalOperator: '<S366>/Greater  Than'
     *  UnitDelay: '<S366>/Unit Delay'
     */
    VeCDMR_b_Ind1Mismatch = (rtb_RelationalOperator3_d &&
        (CDMR_ac_DW.UnitDelay_DSTATE_nl >= KeCDMR_Cnt_LINColorDbncTime));

    /* End of Outputs for SubSystem: '<S280>/Turn On Delay Sample6' */

    /* RelationalOperator: '<S280>/Comparison1' incorporates:
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120'
     */
    rtb_RelationalOperator3_d =
        (CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ie !=
         CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_nb);

    /* Outputs for Atomic SubSystem: '<S280>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S361>/EdgeRising' */
    /* Logic: '<S367>/AND' incorporates:
     *  Logic: '<S367>/OR1'
     *  UnitDelay: '<S367>/Unit Delay'
     */
    rtb_Logical8_h = (rtb_RelationalOperator3_d &&
                      (!CDMR_ac_DW.UnitDelay_DSTATE_asf));

    /* Update for UnitDelay: '<S367>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_asf = rtb_RelationalOperator3_d;

    /* End of Outputs for SubSystem: '<S361>/EdgeRising' */

    /* Switch: '<S361>/Switch1' incorporates:
     *  Constant: '<S360>/Calib'
     *  Constant: '<S361>/Constant Value'
     *  Constant: '<S361>/Constant Value1'
     *  Logic: '<S361>/OR'
     *  Logic: '<S361>/OR1'
     *  MinMax: '<S361>/Minimum'
     *  Sum: '<S361>/Summation'
     *  UnitDelay: '<S361>/Unit Delay'
     */
    if ((!rtb_RelationalOperator3_d) || rtb_Logical8_h)
    {
        CDMR_ac_DW.UnitDelay_DSTATE_fq = 0U;
    }
    else if (KeCDMR_Cnt_LINColorDbncTime < ((uint16)(((uint32)
                CDMR_ac_DW.UnitDelay_DSTATE_fq) + 1U)))
    {
        /* MinMax: '<S361>/Minimum' incorporates:
         *  Constant: '<S360>/Calib'
         */
        CDMR_ac_DW.UnitDelay_DSTATE_fq = KeCDMR_Cnt_LINColorDbncTime;
    }
    else
    {
        /* MinMax: '<S361>/Minimum' incorporates:
         *  Constant: '<S361>/Constant Value'
         *  Sum: '<S361>/Summation'
         *  UnitDelay: '<S361>/Unit Delay'
         */
        CDMR_ac_DW.UnitDelay_DSTATE_fq = (uint16)(((uint32)
            CDMR_ac_DW.UnitDelay_DSTATE_fq) + 1U);
    }

    /* End of Switch: '<S361>/Switch1' */

    /* Logic: '<S361>/AND' incorporates:
     *  Constant: '<S360>/Calib'
     *  RelationalOperator: '<S361>/Greater  Than'
     *  UnitDelay: '<S361>/Unit Delay'
     */
    VeCDMR_b_Ind2Mismatch = (rtb_RelationalOperator3_d &&
        (CDMR_ac_DW.UnitDelay_DSTATE_fq >= KeCDMR_Cnt_LINColorDbncTime));

    /* End of Outputs for SubSystem: '<S280>/Turn On Delay Sample' */

    /* RelationalOperator: '<S280>/Comparison5' incorporates:
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120'
     */
    rtb_RelationalOperator3_d =
        (CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_pp !=
         CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_k2);

    /* Outputs for Atomic SubSystem: '<S280>/Turn On Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S362>/EdgeRising' */
    /* Logic: '<S368>/AND' incorporates:
     *  Logic: '<S368>/OR1'
     *  UnitDelay: '<S368>/Unit Delay'
     */
    rtb_Logical8_h = (rtb_RelationalOperator3_d &&
                      (!CDMR_ac_DW.UnitDelay_DSTATE_df));

    /* Update for UnitDelay: '<S368>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_df = rtb_RelationalOperator3_d;

    /* End of Outputs for SubSystem: '<S362>/EdgeRising' */

    /* Switch: '<S362>/Switch1' incorporates:
     *  Constant: '<S360>/Calib'
     *  Constant: '<S362>/Constant Value'
     *  Constant: '<S362>/Constant Value1'
     *  Logic: '<S362>/OR'
     *  Logic: '<S362>/OR1'
     *  MinMax: '<S362>/Minimum'
     *  Sum: '<S362>/Summation'
     *  UnitDelay: '<S362>/Unit Delay'
     */
    if ((!rtb_RelationalOperator3_d) || rtb_Logical8_h)
    {
        CDMR_ac_DW.UnitDelay_DSTATE_bf = 0U;
    }
    else if (KeCDMR_Cnt_LINColorDbncTime < ((uint16)(((uint32)
                CDMR_ac_DW.UnitDelay_DSTATE_bf) + 1U)))
    {
        /* MinMax: '<S362>/Minimum' incorporates:
         *  Constant: '<S360>/Calib'
         */
        CDMR_ac_DW.UnitDelay_DSTATE_bf = KeCDMR_Cnt_LINColorDbncTime;
    }
    else
    {
        /* MinMax: '<S362>/Minimum' incorporates:
         *  Constant: '<S362>/Constant Value'
         *  Sum: '<S362>/Summation'
         *  UnitDelay: '<S362>/Unit Delay'
         */
        CDMR_ac_DW.UnitDelay_DSTATE_bf = (uint16)(((uint32)
            CDMR_ac_DW.UnitDelay_DSTATE_bf) + 1U);
    }

    /* End of Switch: '<S362>/Switch1' */

    /* Logic: '<S362>/AND' incorporates:
     *  Constant: '<S360>/Calib'
     *  RelationalOperator: '<S362>/Greater  Than'
     *  UnitDelay: '<S362>/Unit Delay'
     */
    VeCDMR_b_Ind3Mismatch = (rtb_RelationalOperator3_d &&
        (CDMR_ac_DW.UnitDelay_DSTATE_bf >= KeCDMR_Cnt_LINColorDbncTime));

    /* End of Outputs for SubSystem: '<S280>/Turn On Delay Sample1' */

    /* RelationalOperator: '<S280>/Comparison10' incorporates:
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120'
     */
    rtb_RelationalOperator3_d =
        (CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_b5 !=
         CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_gp);

    /* Outputs for Atomic SubSystem: '<S280>/Turn On Delay Sample2' */
    /* Outputs for Atomic SubSystem: '<S363>/EdgeRising' */
    /* Logic: '<S369>/AND' incorporates:
     *  Logic: '<S369>/OR1'
     *  UnitDelay: '<S369>/Unit Delay'
     */
    rtb_Logical8_h = (rtb_RelationalOperator3_d &&
                      (!CDMR_ac_DW.UnitDelay_DSTATE_pp));

    /* Update for UnitDelay: '<S369>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_pp = rtb_RelationalOperator3_d;

    /* End of Outputs for SubSystem: '<S363>/EdgeRising' */

    /* Switch: '<S363>/Switch1' incorporates:
     *  Constant: '<S360>/Calib'
     *  Constant: '<S363>/Constant Value'
     *  Constant: '<S363>/Constant Value1'
     *  Logic: '<S363>/OR'
     *  Logic: '<S363>/OR1'
     *  MinMax: '<S363>/Minimum'
     *  Sum: '<S363>/Summation'
     *  UnitDelay: '<S363>/Unit Delay'
     */
    if ((!rtb_RelationalOperator3_d) || rtb_Logical8_h)
    {
        CDMR_ac_DW.UnitDelay_DSTATE_nw = 0U;
    }
    else if (KeCDMR_Cnt_LINColorDbncTime < ((uint16)(((uint32)
                CDMR_ac_DW.UnitDelay_DSTATE_nw) + 1U)))
    {
        /* MinMax: '<S363>/Minimum' incorporates:
         *  Constant: '<S360>/Calib'
         */
        CDMR_ac_DW.UnitDelay_DSTATE_nw = KeCDMR_Cnt_LINColorDbncTime;
    }
    else
    {
        /* MinMax: '<S363>/Minimum' incorporates:
         *  Constant: '<S363>/Constant Value'
         *  Sum: '<S363>/Summation'
         *  UnitDelay: '<S363>/Unit Delay'
         */
        CDMR_ac_DW.UnitDelay_DSTATE_nw = (uint16)(((uint32)
            CDMR_ac_DW.UnitDelay_DSTATE_nw) + 1U);
    }

    /* End of Switch: '<S363>/Switch1' */

    /* Logic: '<S363>/AND' incorporates:
     *  Constant: '<S360>/Calib'
     *  RelationalOperator: '<S363>/Greater  Than'
     *  UnitDelay: '<S363>/Unit Delay'
     */
    VeCDMR_b_Ind4Mismatch = (rtb_RelationalOperator3_d &&
        (CDMR_ac_DW.UnitDelay_DSTATE_nw >= KeCDMR_Cnt_LINColorDbncTime));

    /* End of Outputs for SubSystem: '<S280>/Turn On Delay Sample2' */

    /* RelationalOperator: '<S280>/Comparison11' incorporates:
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120'
     */
    rtb_RelationalOperator3_d =
        (CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_jb !=
         CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_aj);

    /* Outputs for Atomic SubSystem: '<S280>/Turn On Delay Sample3' */
    /* Outputs for Atomic SubSystem: '<S364>/EdgeRising' */
    /* Logic: '<S370>/AND' incorporates:
     *  Logic: '<S370>/OR1'
     *  UnitDelay: '<S370>/Unit Delay'
     */
    rtb_Logical8_h = (rtb_RelationalOperator3_d &&
                      (!CDMR_ac_DW.UnitDelay_DSTATE_mss));

    /* Update for UnitDelay: '<S370>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_mss = rtb_RelationalOperator3_d;

    /* End of Outputs for SubSystem: '<S364>/EdgeRising' */

    /* Switch: '<S364>/Switch1' incorporates:
     *  Constant: '<S360>/Calib'
     *  Constant: '<S364>/Constant Value'
     *  Constant: '<S364>/Constant Value1'
     *  Logic: '<S364>/OR'
     *  Logic: '<S364>/OR1'
     *  MinMax: '<S364>/Minimum'
     *  Sum: '<S364>/Summation'
     *  UnitDelay: '<S364>/Unit Delay'
     */
    if ((!rtb_RelationalOperator3_d) || rtb_Logical8_h)
    {
        CDMR_ac_DW.UnitDelay_DSTATE_nj = 0U;
    }
    else if (KeCDMR_Cnt_LINColorDbncTime < ((uint16)(((uint32)
                CDMR_ac_DW.UnitDelay_DSTATE_nj) + 1U)))
    {
        /* MinMax: '<S364>/Minimum' incorporates:
         *  Constant: '<S360>/Calib'
         */
        CDMR_ac_DW.UnitDelay_DSTATE_nj = KeCDMR_Cnt_LINColorDbncTime;
    }
    else
    {
        /* MinMax: '<S364>/Minimum' incorporates:
         *  Constant: '<S364>/Constant Value'
         *  Sum: '<S364>/Summation'
         *  UnitDelay: '<S364>/Unit Delay'
         */
        CDMR_ac_DW.UnitDelay_DSTATE_nj = (uint16)(((uint32)
            CDMR_ac_DW.UnitDelay_DSTATE_nj) + 1U);
    }

    /* End of Switch: '<S364>/Switch1' */

    /* Logic: '<S364>/AND' incorporates:
     *  Constant: '<S360>/Calib'
     *  RelationalOperator: '<S364>/Greater  Than'
     *  UnitDelay: '<S364>/Unit Delay'
     */
    VeCDMR_b_Ind5Mismatch = (rtb_RelationalOperator3_d &&
        (CDMR_ac_DW.UnitDelay_DSTATE_nj >= KeCDMR_Cnt_LINColorDbncTime));

    /* End of Outputs for SubSystem: '<S280>/Turn On Delay Sample3' */

    /* RelationalOperator: '<S280>/Comparison12' incorporates:
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120'
     */
    rtb_RelationalOperator3_d =
        (CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_lx !=
         CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fo);

    /* Outputs for Atomic SubSystem: '<S280>/Turn On Delay Sample4' */
    /* Outputs for Atomic SubSystem: '<S365>/EdgeRising' */
    /* Logic: '<S371>/AND' incorporates:
     *  Logic: '<S371>/OR1'
     *  UnitDelay: '<S371>/Unit Delay'
     */
    rtb_Logical8_h = (rtb_RelationalOperator3_d &&
                      (!CDMR_ac_DW.UnitDelay_DSTATE_id));

    /* Update for UnitDelay: '<S371>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_id = rtb_RelationalOperator3_d;

    /* End of Outputs for SubSystem: '<S365>/EdgeRising' */

    /* Switch: '<S365>/Switch1' incorporates:
     *  Constant: '<S360>/Calib'
     *  Constant: '<S365>/Constant Value'
     *  Constant: '<S365>/Constant Value1'
     *  Logic: '<S365>/OR'
     *  Logic: '<S365>/OR1'
     *  MinMax: '<S365>/Minimum'
     *  Sum: '<S365>/Summation'
     *  UnitDelay: '<S365>/Unit Delay'
     */
    if ((!rtb_RelationalOperator3_d) || rtb_Logical8_h)
    {
        CDMR_ac_DW.UnitDelay_DSTATE_f = 0U;
    }
    else if (KeCDMR_Cnt_LINColorDbncTime < ((uint16)(((uint32)
                CDMR_ac_DW.UnitDelay_DSTATE_f) + 1U)))
    {
        /* MinMax: '<S365>/Minimum' incorporates:
         *  Constant: '<S360>/Calib'
         */
        CDMR_ac_DW.UnitDelay_DSTATE_f = KeCDMR_Cnt_LINColorDbncTime;
    }
    else
    {
        /* MinMax: '<S365>/Minimum' incorporates:
         *  Constant: '<S365>/Constant Value'
         *  Sum: '<S365>/Summation'
         *  UnitDelay: '<S365>/Unit Delay'
         */
        CDMR_ac_DW.UnitDelay_DSTATE_f = (uint16)(((uint32)
            CDMR_ac_DW.UnitDelay_DSTATE_f) + 1U);
    }

    /* End of Switch: '<S365>/Switch1' */

    /* Logic: '<S365>/AND' incorporates:
     *  Constant: '<S360>/Calib'
     *  RelationalOperator: '<S365>/Greater  Than'
     *  UnitDelay: '<S365>/Unit Delay'
     */
    VeCDMR_b_Ind_ColorMismatch = (rtb_RelationalOperator3_d &&
        (CDMR_ac_DW.UnitDelay_DSTATE_f >= KeCDMR_Cnt_LINColorDbncTime));

    /* End of Outputs for SubSystem: '<S280>/Turn On Delay Sample4' */

    /* Logic: '<S280>/Logical3' */
    VeCDMR_b_FiveLED_Mismatch = ((((((VeCDMR_b_Ind1Mismatch) ||
        (VeCDMR_b_Ind2Mismatch)) || (VeCDMR_b_Ind3Mismatch)) ||
        (VeCDMR_b_Ind4Mismatch)) || (VeCDMR_b_Ind5Mismatch)) ||
        (VeCDMR_b_Ind_ColorMismatch));

    /* RelationalOperator: '<S282>/Comparison7' incorporates:
     *  RelationalOperator: '<S282>/Comparison6'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120'
     */
    VeCDMR_b_CPIM_Ind1_Fault_tmp =
        CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_oe;

    /* Logic: '<S282>/Logical8' incorporates:
     *  Constant: '<S378>/Constant'
     *  Constant: '<S379>/Constant'
     *  RelationalOperator: '<S282>/Comparison6'
     *  RelationalOperator: '<S282>/Comparison7'
     */
    VeCDMR_b_CPIM_RedLED_Fault = ((CeCITR_e_CPIM_LEDOpen == ((uint32)
        VeCDMR_b_CPIM_Ind1_Fault_tmp)) || (((uint32)VeCDMR_b_CPIM_Ind1_Fault_tmp)
        == CeCITR_e_CPIM_LEDShort));

    /* RelationalOperator: '<S282>/Comparison4' incorporates:
     *  RelationalOperator: '<S282>/Comparison3'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120'
     */
    VeCDMR_b_CPIM_Ind1_Fault_tmp =
        CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_c3;

    /* Logic: '<S282>/Logical7' incorporates:
     *  Constant: '<S378>/Constant'
     *  Constant: '<S379>/Constant'
     *  RelationalOperator: '<S282>/Comparison3'
     *  RelationalOperator: '<S282>/Comparison4'
     */
    VeCDMR_b_CPIM_GreenLED_Fault = ((CeCITR_e_CPIM_LEDOpen == ((uint32)
        VeCDMR_b_CPIM_Ind1_Fault_tmp)) || (((uint32)VeCDMR_b_CPIM_Ind1_Fault_tmp)
        == CeCITR_e_CPIM_LEDShort));

    /* RelationalOperator: '<S282>/Comparison9' incorporates:
     *  RelationalOperator: '<S282>/Comparison8'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120'
     */
    VeCDMR_b_CPIM_Ind1_Fault_tmp =
        CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fl;

    /* Logic: '<S282>/Logical9' incorporates:
     *  Constant: '<S378>/Constant'
     *  Constant: '<S379>/Constant'
     *  RelationalOperator: '<S282>/Comparison8'
     *  RelationalOperator: '<S282>/Comparison9'
     */
    VeCDMR_b_CPIM_BlueLED_Fault = ((CeCITR_e_CPIM_LEDOpen == ((uint32)
        VeCDMR_b_CPIM_Ind1_Fault_tmp)) || (((uint32)VeCDMR_b_CPIM_Ind1_Fault_tmp)
        == CeCITR_e_CPIM_LEDShort));

    /* RelationalOperator: '<S282>/Relational Operator' incorporates:
     *  UnitDelay: '<S282>/Unit Delay'
     */
    rtb_RelationalOperator3_d =
        (CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_m ==
         CDMR_ac_DW.UnitDelay_DSTATE_g0m);

    /* Outputs for Atomic SubSystem: '<S282>/Turn On Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S383>/EdgeRising' */
    /* Logic: '<S389>/AND' incorporates:
     *  Logic: '<S389>/OR1'
     *  UnitDelay: '<S389>/Unit Delay'
     */
    rtb_Logical8_h = (rtb_RelationalOperator3_d &&
                      (!CDMR_ac_DW.UnitDelay_DSTATE_ai));

    /* Update for UnitDelay: '<S389>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_ai = rtb_RelationalOperator3_d;

    /* End of Outputs for SubSystem: '<S383>/EdgeRising' */

    /* Switch: '<S383>/Switch1' incorporates:
     *  Constant: '<S381>/Calib'
     *  Constant: '<S383>/Constant Value'
     *  Constant: '<S383>/Constant Value1'
     *  Logic: '<S383>/OR'
     *  Logic: '<S383>/OR1'
     *  MinMax: '<S383>/Minimum'
     *  Sum: '<S383>/Summation'
     *  UnitDelay: '<S383>/Unit Delay'
     */
    if ((!rtb_RelationalOperator3_d) || rtb_Logical8_h)
    {
        CDMR_ac_DW.UnitDelay_DSTATE_mf = 0U;
    }
    else if (KeCDMR_Cnt_LINColorSignalStableTime < ((uint16)(((uint32)
                CDMR_ac_DW.UnitDelay_DSTATE_mf) + 1U)))
    {
        /* MinMax: '<S383>/Minimum' incorporates:
         *  Constant: '<S381>/Calib'
         */
        CDMR_ac_DW.UnitDelay_DSTATE_mf = KeCDMR_Cnt_LINColorSignalStableTime;
    }
    else
    {
        /* MinMax: '<S383>/Minimum' incorporates:
         *  Constant: '<S383>/Constant Value'
         *  Sum: '<S383>/Summation'
         *  UnitDelay: '<S383>/Unit Delay'
         */
        CDMR_ac_DW.UnitDelay_DSTATE_mf = (uint16)(((uint32)
            CDMR_ac_DW.UnitDelay_DSTATE_mf) + 1U);
    }

    /* End of Switch: '<S383>/Switch1' */
    /* End of Outputs for SubSystem: '<S282>/Turn On Delay Sample1' */

    /* RelationalOperator: '<S282>/Comparison2' */
    rtb_Logical8_h = (CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_m !=
                      CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ns);

    /* Outputs for Atomic SubSystem: '<S282>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S382>/EdgeRising' */
    /* Logic: '<S388>/AND' incorporates:
     *  Logic: '<S388>/OR1'
     *  UnitDelay: '<S388>/Unit Delay'
     */
    rtb_AND_hj3 = (rtb_Logical8_h && (!CDMR_ac_DW.UnitDelay_DSTATE_ej));

    /* Update for UnitDelay: '<S388>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_ej = rtb_Logical8_h;

    /* End of Outputs for SubSystem: '<S382>/EdgeRising' */

    /* Switch: '<S382>/Switch1' incorporates:
     *  Constant: '<S380>/Calib'
     *  Constant: '<S382>/Constant Value'
     *  Constant: '<S382>/Constant Value1'
     *  Logic: '<S382>/OR'
     *  Logic: '<S382>/OR1'
     *  MinMax: '<S382>/Minimum'
     *  Sum: '<S382>/Summation'
     *  UnitDelay: '<S382>/Unit Delay'
     */
    if ((!rtb_Logical8_h) || rtb_AND_hj3)
    {
        CDMR_ac_DW.UnitDelay_DSTATE_js = 0U;
    }
    else if (KeCDMR_Cnt_LINColorDbncTime < ((uint16)(((uint32)
                CDMR_ac_DW.UnitDelay_DSTATE_js) + 1U)))
    {
        /* MinMax: '<S382>/Minimum' incorporates:
         *  Constant: '<S380>/Calib'
         */
        CDMR_ac_DW.UnitDelay_DSTATE_js = KeCDMR_Cnt_LINColorDbncTime;
    }
    else
    {
        /* MinMax: '<S382>/Minimum' incorporates:
         *  Constant: '<S382>/Constant Value'
         *  Sum: '<S382>/Summation'
         *  UnitDelay: '<S382>/Unit Delay'
         */
        CDMR_ac_DW.UnitDelay_DSTATE_js = (uint16)(((uint32)
            CDMR_ac_DW.UnitDelay_DSTATE_js) + 1U);
    }

    /* End of Switch: '<S382>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S282>/Turn On Delay Sample1' */
    /* Logic: '<S282>/Logical Operator' incorporates:
     *  Constant: '<S380>/Calib'
     *  Constant: '<S381>/Calib'
     *  Logic: '<S382>/AND'
     *  Logic: '<S383>/AND'
     *  RelationalOperator: '<S382>/Greater  Than'
     *  RelationalOperator: '<S383>/Greater  Than'
     *  UnitDelay: '<S382>/Unit Delay'
     *  UnitDelay: '<S383>/Unit Delay'
     */
    VeCDMR_b_RedMismatch = ((rtb_RelationalOperator3_d &&
        (CDMR_ac_DW.UnitDelay_DSTATE_mf >= KeCDMR_Cnt_LINColorSignalStableTime))
                            && (rtb_Logical8_h &&
        (CDMR_ac_DW.UnitDelay_DSTATE_js >= KeCDMR_Cnt_LINColorDbncTime)));

    /* End of Outputs for SubSystem: '<S282>/Turn On Delay Sample1' */
    /* End of Outputs for SubSystem: '<S282>/Turn On Delay Sample' */

    /* RelationalOperator: '<S282>/Relational Operator1' incorporates:
     *  UnitDelay: '<S282>/Unit Delay1'
     */
    rtb_RelationalOperator3_d =
        (CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_d ==
         CDMR_ac_DW.UnitDelay1_DSTATE_oz);

    /* Outputs for Atomic SubSystem: '<S282>/Turn On Delay Sample2' */
    /* Outputs for Atomic SubSystem: '<S384>/EdgeRising' */
    /* Logic: '<S390>/AND' incorporates:
     *  Logic: '<S390>/OR1'
     *  UnitDelay: '<S390>/Unit Delay'
     */
    rtb_Logical8_h = (rtb_RelationalOperator3_d &&
                      (!CDMR_ac_DW.UnitDelay_DSTATE_gq));

    /* Update for UnitDelay: '<S390>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_gq = rtb_RelationalOperator3_d;

    /* End of Outputs for SubSystem: '<S384>/EdgeRising' */

    /* Switch: '<S384>/Switch1' incorporates:
     *  Constant: '<S381>/Calib'
     *  Constant: '<S384>/Constant Value'
     *  Constant: '<S384>/Constant Value1'
     *  Logic: '<S384>/OR'
     *  Logic: '<S384>/OR1'
     *  MinMax: '<S384>/Minimum'
     *  Sum: '<S384>/Summation'
     *  UnitDelay: '<S384>/Unit Delay'
     */
    if ((!rtb_RelationalOperator3_d) || rtb_Logical8_h)
    {
        CDMR_ac_DW.UnitDelay_DSTATE_di = 0U;
    }
    else if (KeCDMR_Cnt_LINColorSignalStableTime < ((uint16)(((uint32)
                CDMR_ac_DW.UnitDelay_DSTATE_di) + 1U)))
    {
        /* MinMax: '<S384>/Minimum' incorporates:
         *  Constant: '<S381>/Calib'
         */
        CDMR_ac_DW.UnitDelay_DSTATE_di = KeCDMR_Cnt_LINColorSignalStableTime;
    }
    else
    {
        /* MinMax: '<S384>/Minimum' incorporates:
         *  Constant: '<S384>/Constant Value'
         *  Sum: '<S384>/Summation'
         *  UnitDelay: '<S384>/Unit Delay'
         */
        CDMR_ac_DW.UnitDelay_DSTATE_di = (uint16)(((uint32)
            CDMR_ac_DW.UnitDelay_DSTATE_di) + 1U);
    }

    /* End of Switch: '<S384>/Switch1' */
    /* End of Outputs for SubSystem: '<S282>/Turn On Delay Sample2' */

    /* RelationalOperator: '<S282>/Comparison1' */
    rtb_Logical8_h = (CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_d !=
                      CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_f);

    /* Outputs for Atomic SubSystem: '<S282>/Turn On Delay Sample3' */
    /* Outputs for Atomic SubSystem: '<S385>/EdgeRising' */
    /* Logic: '<S391>/AND' incorporates:
     *  Logic: '<S391>/OR1'
     *  UnitDelay: '<S391>/Unit Delay'
     */
    rtb_AND_hj3 = (rtb_Logical8_h && (!CDMR_ac_DW.UnitDelay_DSTATE_gu));

    /* Update for UnitDelay: '<S391>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_gu = rtb_Logical8_h;

    /* End of Outputs for SubSystem: '<S385>/EdgeRising' */

    /* Switch: '<S385>/Switch1' incorporates:
     *  Constant: '<S380>/Calib'
     *  Constant: '<S385>/Constant Value'
     *  Constant: '<S385>/Constant Value1'
     *  Logic: '<S385>/OR'
     *  Logic: '<S385>/OR1'
     *  MinMax: '<S385>/Minimum'
     *  Sum: '<S385>/Summation'
     *  UnitDelay: '<S385>/Unit Delay'
     */
    if ((!rtb_Logical8_h) || rtb_AND_hj3)
    {
        CDMR_ac_DW.UnitDelay_DSTATE_lm = 0U;
    }
    else if (KeCDMR_Cnt_LINColorDbncTime < ((uint16)(((uint32)
                CDMR_ac_DW.UnitDelay_DSTATE_lm) + 1U)))
    {
        /* MinMax: '<S385>/Minimum' incorporates:
         *  Constant: '<S380>/Calib'
         */
        CDMR_ac_DW.UnitDelay_DSTATE_lm = KeCDMR_Cnt_LINColorDbncTime;
    }
    else
    {
        /* MinMax: '<S385>/Minimum' incorporates:
         *  Constant: '<S385>/Constant Value'
         *  Sum: '<S385>/Summation'
         *  UnitDelay: '<S385>/Unit Delay'
         */
        CDMR_ac_DW.UnitDelay_DSTATE_lm = (uint16)(((uint32)
            CDMR_ac_DW.UnitDelay_DSTATE_lm) + 1U);
    }

    /* End of Switch: '<S385>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S282>/Turn On Delay Sample2' */
    /* Logic: '<S282>/Logical Operator1' incorporates:
     *  Constant: '<S380>/Calib'
     *  Constant: '<S381>/Calib'
     *  Logic: '<S384>/AND'
     *  Logic: '<S385>/AND'
     *  RelationalOperator: '<S384>/Greater  Than'
     *  RelationalOperator: '<S385>/Greater  Than'
     *  UnitDelay: '<S384>/Unit Delay'
     *  UnitDelay: '<S385>/Unit Delay'
     */
    VeCDMR_b_GreenMismatch = ((rtb_RelationalOperator3_d &&
        (CDMR_ac_DW.UnitDelay_DSTATE_di >= KeCDMR_Cnt_LINColorSignalStableTime))
        && (rtb_Logical8_h && (CDMR_ac_DW.UnitDelay_DSTATE_lm >=
        KeCDMR_Cnt_LINColorDbncTime)));

    /* End of Outputs for SubSystem: '<S282>/Turn On Delay Sample2' */
    /* End of Outputs for SubSystem: '<S282>/Turn On Delay Sample3' */

    /* RelationalOperator: '<S282>/Relational Operator2' incorporates:
     *  UnitDelay: '<S282>/Unit Delay2'
     */
    rtb_RelationalOperator3_d =
        (CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_k ==
         CDMR_ac_DW.UnitDelay2_DSTATE_n);

    /* Outputs for Atomic SubSystem: '<S282>/Turn On Delay Sample5' */
    /* Outputs for Atomic SubSystem: '<S387>/EdgeRising' */
    /* Logic: '<S393>/AND' incorporates:
     *  Logic: '<S393>/OR1'
     *  UnitDelay: '<S393>/Unit Delay'
     */
    rtb_Logical8_h = (rtb_RelationalOperator3_d &&
                      (!CDMR_ac_DW.UnitDelay_DSTATE_ok));

    /* Update for UnitDelay: '<S393>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_ok = rtb_RelationalOperator3_d;

    /* End of Outputs for SubSystem: '<S387>/EdgeRising' */

    /* Switch: '<S387>/Switch1' incorporates:
     *  Constant: '<S381>/Calib'
     *  Constant: '<S387>/Constant Value'
     *  Constant: '<S387>/Constant Value1'
     *  Logic: '<S387>/OR'
     *  Logic: '<S387>/OR1'
     *  MinMax: '<S387>/Minimum'
     *  Sum: '<S387>/Summation'
     *  UnitDelay: '<S387>/Unit Delay'
     */
    if ((!rtb_RelationalOperator3_d) || rtb_Logical8_h)
    {
        CDMR_ac_DW.UnitDelay_DSTATE_as = 0U;
    }
    else if (KeCDMR_Cnt_LINColorSignalStableTime < ((uint16)(((uint32)
                CDMR_ac_DW.UnitDelay_DSTATE_as) + 1U)))
    {
        /* MinMax: '<S387>/Minimum' incorporates:
         *  Constant: '<S381>/Calib'
         */
        CDMR_ac_DW.UnitDelay_DSTATE_as = KeCDMR_Cnt_LINColorSignalStableTime;
    }
    else
    {
        /* MinMax: '<S387>/Minimum' incorporates:
         *  Constant: '<S387>/Constant Value'
         *  Sum: '<S387>/Summation'
         *  UnitDelay: '<S387>/Unit Delay'
         */
        CDMR_ac_DW.UnitDelay_DSTATE_as = (uint16)(((uint32)
            CDMR_ac_DW.UnitDelay_DSTATE_as) + 1U);
    }

    /* End of Switch: '<S387>/Switch1' */
    /* End of Outputs for SubSystem: '<S282>/Turn On Delay Sample5' */

    /* RelationalOperator: '<S282>/Comparison5' */
    rtb_Logical8_h = (CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_k !=
                      CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_le);

    /* Outputs for Atomic SubSystem: '<S282>/Turn On Delay Sample4' */
    /* Outputs for Atomic SubSystem: '<S386>/EdgeRising' */
    /* Logic: '<S392>/AND' incorporates:
     *  Logic: '<S392>/OR1'
     *  UnitDelay: '<S392>/Unit Delay'
     */
    rtb_AND_hj3 = (rtb_Logical8_h && (!CDMR_ac_DW.UnitDelay_DSTATE_ib));

    /* Update for UnitDelay: '<S392>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_ib = rtb_Logical8_h;

    /* End of Outputs for SubSystem: '<S386>/EdgeRising' */

    /* Switch: '<S386>/Switch1' incorporates:
     *  Constant: '<S380>/Calib'
     *  Constant: '<S386>/Constant Value'
     *  Constant: '<S386>/Constant Value1'
     *  Logic: '<S386>/OR'
     *  Logic: '<S386>/OR1'
     *  MinMax: '<S386>/Minimum'
     *  Sum: '<S386>/Summation'
     *  UnitDelay: '<S386>/Unit Delay'
     */
    if ((!rtb_Logical8_h) || rtb_AND_hj3)
    {
        CDMR_ac_DW.UnitDelay_DSTATE_b2 = 0U;
    }
    else if (KeCDMR_Cnt_LINColorDbncTime < ((uint16)(((uint32)
                CDMR_ac_DW.UnitDelay_DSTATE_b2) + 1U)))
    {
        /* MinMax: '<S386>/Minimum' incorporates:
         *  Constant: '<S380>/Calib'
         */
        CDMR_ac_DW.UnitDelay_DSTATE_b2 = KeCDMR_Cnt_LINColorDbncTime;
    }
    else
    {
        /* MinMax: '<S386>/Minimum' incorporates:
         *  Constant: '<S386>/Constant Value'
         *  Sum: '<S386>/Summation'
         *  UnitDelay: '<S386>/Unit Delay'
         */
        CDMR_ac_DW.UnitDelay_DSTATE_b2 = (uint16)(((uint32)
            CDMR_ac_DW.UnitDelay_DSTATE_b2) + 1U);
    }

    /* End of Switch: '<S386>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S282>/Turn On Delay Sample5' */
    /* Logic: '<S282>/Logical Operator2' incorporates:
     *  Constant: '<S380>/Calib'
     *  Constant: '<S381>/Calib'
     *  Logic: '<S386>/AND'
     *  Logic: '<S387>/AND'
     *  RelationalOperator: '<S386>/Greater  Than'
     *  RelationalOperator: '<S387>/Greater  Than'
     *  UnitDelay: '<S386>/Unit Delay'
     *  UnitDelay: '<S387>/Unit Delay'
     */
    VeCDMR_b_BlueMismatch = ((rtb_RelationalOperator3_d &&
        (CDMR_ac_DW.UnitDelay_DSTATE_as >= KeCDMR_Cnt_LINColorSignalStableTime))
        && (rtb_Logical8_h && (CDMR_ac_DW.UnitDelay_DSTATE_b2 >=
        KeCDMR_Cnt_LINColorDbncTime)));

    /* End of Outputs for SubSystem: '<S282>/Turn On Delay Sample5' */
    /* End of Outputs for SubSystem: '<S282>/Turn On Delay Sample4' */

    /* Logic: '<S282>/Logical3' */
    VeCDMR_b_OneLED_ClrMismatch = (((VeCDMR_b_RedMismatch) ||
        (VeCDMR_b_GreenMismatch)) || (VeCDMR_b_BlueMismatch));

    /* If: '<S279>/If' incorporates:
     *  Constant: '<S330>/Constant'
     *  Constant: '<S331>/Constant'
     *  Constant: '<S340>/Calib'
     *  RelationalOperator: '<S279>/Comparison1'
     *  RelationalOperator: '<S279>/Comparison7'
     */
    if (((uint32)KeCDMR_e_SelectCPIMType) == CeOFCR_e_CPIMType_A)
    {
        /* Outputs for IfAction SubSystem: '<S279>/If Action Subsystem' incorporates:
         *  ActionPort: '<S333>/Action Port'
         */
        /* Logic: '<S283>/Logical8' incorporates:
         *  Inport: '<S333>/OneLED_ShortOROpen'
         *  Logic: '<S279>/Logical7'
         */
        rtb_Logical8_h = (((VeCDMR_b_CPIM_RedLED_Fault) ||
                           (VeCDMR_b_CPIM_GreenLED_Fault)) ||
                          (VeCDMR_b_CPIM_BlueLED_Fault));

        /* Merge: '<S279>/Merge1' incorporates:
         *  Inport: '<S333>/OneLED_Mismatch_Flt'
         */
        rtb_RelationalOperator3_d = VeCDMR_b_OneLED_ClrMismatch;

        /* End of Outputs for SubSystem: '<S279>/If Action Subsystem' */
    }
    else if (((uint32)KeCDMR_e_SelectCPIMType) == CeOFCR_e_CPIMType_B)
    {
        /* Outputs for IfAction SubSystem: '<S279>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S334>/Action Port'
         */
        /* Logic: '<S283>/Logical8' incorporates:
         *  Inport: '<S334>/FiveLED_ShortOROpen'
         *  Logic: '<S279>/Logical3'
         */
        rtb_Logical8_h = (((((VeCDMR_b_CPIM_Ind1_Fault) ||
                             (VeCDMR_b_CPIM_Ind2_Fault)) ||
                            (VeCDMR_b_CPIM_Ind3_Fault)) ||
                           (VeCDMR_b_CPIM_Ind4_Fault)) ||
                          (VeCDMR_b_CPIM_Ind5_Fault));

        /* Merge: '<S279>/Merge1' incorporates:
         *  Inport: '<S334>/FiveLED_Mismatch_Flt'
         */
        rtb_RelationalOperator3_d = VeCDMR_b_FiveLED_Mismatch;

        /* End of Outputs for SubSystem: '<S279>/If Action Subsystem1' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S279>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S335>/Action Port'
         */
        /* Logic: '<S283>/Logical8' incorporates:
         *  Constant: '<S335>/FALSE Constant'
         *  SignalConversion generated from: '<S335>/ShortOROpen_Flt'
         */
        rtb_Logical8_h = false;

        /* Merge: '<S279>/Merge1' incorporates:
         *  Constant: '<S335>/FALSE Constant1'
         *  SignalConversion generated from: '<S335>/Mismatch_Flt'
         */
        rtb_RelationalOperator3_d = false;

        /* End of Outputs for SubSystem: '<S279>/If Action Subsystem2' */
    }

    /* End of If: '<S279>/If' */

    /* Logic: '<S279>/Logical5' incorporates:
     *  Logic: '<S279>/Logical1'
     */
    rtb_AND_hj3 = ((VeCDMR_b_CPIM_LINBus_LOC) ||
                   (TmpSignalConversionAtTmpVM_FcnCallSubs_e || rtb_Logical8_h));

    /* Outputs for Atomic SubSystem: '<S279>/EdgeFalling' */
    /* Logic: '<S328>/AND' incorporates:
     *  Logic: '<S328>/OR1'
     *  UnitDelay: '<S279>/Unit Delay'
     *  UnitDelay: '<S328>/Unit Delay'
     */
    rtb_AND_h1 = ((!CDMR_ac_DW.UnitDelay_DSTATE_nc) &&
                  (CDMR_ac_DW.UnitDelay_DSTATE_der));

    /* Update for UnitDelay: '<S328>/Unit Delay' incorporates:
     *  UnitDelay: '<S279>/Unit Delay'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_der = CDMR_ac_DW.UnitDelay_DSTATE_nc;

    /* End of Outputs for SubSystem: '<S279>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S279>/EdgeRising2' */
    /* Logic: '<S329>/OR1' incorporates:
     *  UnitDelay: '<S329>/Unit Delay'
     */
    rtb_OR1_dh = !CDMR_ac_DW.UnitDelay_DSTATE_bi;

    /* Update for UnitDelay: '<S329>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_bi = TmpSignalConversionAtTmpVM_FcnCallSubs_o;

    /* Logic: '<S279>/Logical11' incorporates:
     *  Logic: '<S329>/AND'
     */
    VeCDMR_b_FaultTest4 = (rtb_AND_h1 ||
                           (TmpSignalConversionAtTmpVM_FcnCallSubs_o &&
                            rtb_OR1_dh));

    /* End of Outputs for SubSystem: '<S279>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S279>/Signal Latch On With Reset' */
    /* Logic: '<S342>/OR1' incorporates:
     *  Logic: '<S342>/NOT'
     *  Logic: '<S342>/OR'
     *  UnitDelay: '<S342>/Unit Delay'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_li = (rtb_RelationalOperator3_d ||
        ((!VeCDMR_b_FaultTest4) && (CDMR_ac_DW.UnitDelay_DSTATE_li)));

    /* End of Outputs for SubSystem: '<S279>/Signal Latch On With Reset' */

    /* Logic: '<S279>/Logical12' incorporates:
     *  UnitDelay: '<S342>/Unit Delay'
     */
    VeCDMR_b_TurnOffCPIMBulbs = (rtb_AND_hj3 || (CDMR_ac_DW.UnitDelay_DSTATE_li));

    /* RelationalOperator: '<S281>/Comparison2' incorporates:
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120'
     */
    rtb_RelationalOperator3_d =
        (CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_oz !=
         CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_kr);

    /* Outputs for Atomic SubSystem: '<S281>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S374>/EdgeRising' */
    /* Logic: '<S376>/AND' incorporates:
     *  Logic: '<S376>/OR1'
     *  UnitDelay: '<S376>/Unit Delay'
     */
    rtb_AND_h1 = (rtb_RelationalOperator3_d && (!CDMR_ac_DW.UnitDelay_DSTATE_ey));

    /* Update for UnitDelay: '<S376>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_ey = rtb_RelationalOperator3_d;

    /* End of Outputs for SubSystem: '<S374>/EdgeRising' */

    /* Switch: '<S374>/Switch1' incorporates:
     *  Constant: '<S373>/Calib'
     *  Constant: '<S374>/Constant Value'
     *  Constant: '<S374>/Constant Value1'
     *  Logic: '<S374>/OR'
     *  Logic: '<S374>/OR1'
     *  MinMax: '<S374>/Minimum'
     *  Sum: '<S374>/Summation'
     *  UnitDelay: '<S374>/Unit Delay'
     */
    if ((!rtb_RelationalOperator3_d) || rtb_AND_h1)
    {
        CDMR_ac_DW.UnitDelay_DSTATE_eg = 0U;
    }
    else if (KeCDMR_Cnt_LINColorDbncTime < ((uint16)(((uint32)
                CDMR_ac_DW.UnitDelay_DSTATE_eg) + 1U)))
    {
        /* MinMax: '<S374>/Minimum' incorporates:
         *  Constant: '<S373>/Calib'
         */
        CDMR_ac_DW.UnitDelay_DSTATE_eg = KeCDMR_Cnt_LINColorDbncTime;
    }
    else
    {
        /* MinMax: '<S374>/Minimum' incorporates:
         *  Constant: '<S374>/Constant Value'
         *  Sum: '<S374>/Summation'
         *  UnitDelay: '<S374>/Unit Delay'
         */
        CDMR_ac_DW.UnitDelay_DSTATE_eg = (uint16)(((uint32)
            CDMR_ac_DW.UnitDelay_DSTATE_eg) + 1U);
    }

    /* End of Switch: '<S374>/Switch1' */

    /* Logic: '<S374>/AND' incorporates:
     *  Constant: '<S373>/Calib'
     *  RelationalOperator: '<S374>/Greater  Than'
     *  UnitDelay: '<S374>/Unit Delay'
     */
    VeCDMR_b_CPIM_Icon1_Mismatch = (rtb_RelationalOperator3_d &&
        (CDMR_ac_DW.UnitDelay_DSTATE_eg >= KeCDMR_Cnt_LINColorDbncTime));

    /* End of Outputs for SubSystem: '<S281>/Turn On Delay Sample' */

    /* RelationalOperator: '<S281>/Comparison1' incorporates:
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120'
     */
    rtb_RelationalOperator3_d =
        (CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_pn !=
         CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fg);

    /* Outputs for Atomic SubSystem: '<S281>/Turn On Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S375>/EdgeRising' */
    /* Logic: '<S377>/AND' incorporates:
     *  Logic: '<S377>/OR1'
     *  UnitDelay: '<S377>/Unit Delay'
     */
    rtb_AND_h1 = (rtb_RelationalOperator3_d && (!CDMR_ac_DW.UnitDelay_DSTATE_gm));

    /* Update for UnitDelay: '<S377>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_gm = rtb_RelationalOperator3_d;

    /* End of Outputs for SubSystem: '<S375>/EdgeRising' */

    /* Switch: '<S375>/Switch1' incorporates:
     *  Constant: '<S373>/Calib'
     *  Constant: '<S375>/Constant Value'
     *  Constant: '<S375>/Constant Value1'
     *  Logic: '<S375>/OR'
     *  Logic: '<S375>/OR1'
     *  MinMax: '<S375>/Minimum'
     *  Sum: '<S375>/Summation'
     *  UnitDelay: '<S375>/Unit Delay'
     */
    if ((!rtb_RelationalOperator3_d) || rtb_AND_h1)
    {
        CDMR_ac_DW.UnitDelay_DSTATE_o4 = 0U;
    }
    else if (KeCDMR_Cnt_LINColorDbncTime < ((uint16)(((uint32)
                CDMR_ac_DW.UnitDelay_DSTATE_o4) + 1U)))
    {
        /* MinMax: '<S375>/Minimum' incorporates:
         *  Constant: '<S373>/Calib'
         */
        CDMR_ac_DW.UnitDelay_DSTATE_o4 = KeCDMR_Cnt_LINColorDbncTime;
    }
    else
    {
        /* MinMax: '<S375>/Minimum' incorporates:
         *  Constant: '<S375>/Constant Value'
         *  Sum: '<S375>/Summation'
         *  UnitDelay: '<S375>/Unit Delay'
         */
        CDMR_ac_DW.UnitDelay_DSTATE_o4 = (uint16)(((uint32)
            CDMR_ac_DW.UnitDelay_DSTATE_o4) + 1U);
    }

    /* End of Switch: '<S375>/Switch1' */

    /* Logic: '<S375>/AND' incorporates:
     *  Constant: '<S373>/Calib'
     *  RelationalOperator: '<S375>/Greater  Than'
     *  UnitDelay: '<S375>/Unit Delay'
     */
    VeCDMR_b_CPIM_Icon2_Mismatch = (rtb_RelationalOperator3_d &&
        (CDMR_ac_DW.UnitDelay_DSTATE_o4 >= KeCDMR_Cnt_LINColorDbncTime));

    /* End of Outputs for SubSystem: '<S281>/Turn On Delay Sample1' */

    /* Logic: '<S281>/Logical6' */
    rtb_RelationalOperator3_d = ((((VeCDMR_b_CPIM_Icon1_Mismatch) ||
        (VeCDMR_b_CPIM_Icon2_Mismatch)) ||
        (CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_br)) ||
        (CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cl));

    /* Outputs for Atomic SubSystem: '<S343>/EdgeFalling1' */
    /* Logic: '<S345>/AND' incorporates:
     *  UnitDelay: '<S345>/Unit Delay'
     */
    rtb_AND_cqs = (rtb_AND_cqs && (CDMR_ac_DW.UnitDelay_DSTATE_o44));

    /* Update for UnitDelay: '<S345>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_o44 = rtb_Comparison2;

    /* End of Outputs for SubSystem: '<S343>/EdgeFalling1' */

    /* Logic: '<S343>/Logical5' */
    rtb_Comparison2 = (rtb_Logical5_g || rtb_AND_cqs);

    /* Outputs for Atomic SubSystem: '<S344>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S344>/Counter Reset  Enabled ' */
    /* Switch: '<S351>/Switch1' incorporates:
     *  Logic: '<S279>/Logical8'
     *  Logic: '<S344>/Fail Counter Reset'
     *  Logic: '<S344>/NOT6'
     *  Switch: '<S351>/Switch2'
     *  Switch: '<S352>/Switch1'
     *  UnitDelay: '<S344>/Unit Delay'
     *  UnitDelay: '<S344>/Unit Delay1'
     */
    if ((rtb_Comparison2 || (CDMR_ac_DW.UnitDelay_DSTATE_ei)) ||
            (CDMR_ac_DW.UnitDelay1_DSTATE_a))
    {
        /* Switch: '<S351>/Switch1' incorporates:
         *  Constant: '<S351>/Constant Value2'
         */
        VeCDMR_Cnt_InternalFailureCPIM_FailCnt = 0U;

        /* Switch: '<S352>/Switch1' incorporates:
         *  Constant: '<S352>/Constant Value2'
         */
        VeCDMR_Cnt_InternalFailureCPIM_SmpCnt = 0U;
    }
    else
    {
        if (rtb_AND_az && ((VeCDMR_b_TurnOffCPIMBulbs) ||
                           rtb_RelationalOperator3_d))
        {
            /* Switch: '<S351>/Switch1' incorporates:
             *  Constant: '<S351>/Constant Value1'
             *  Sum: '<S351>/Subtraction'
             *  Switch: '<S351>/Switch2'
             *  UnitDelay: '<S351>/Unit Delay'
             */
            VeCDMR_Cnt_InternalFailureCPIM_FailCnt = (uint16)(((uint32)
                VeCDMR_Cnt_InternalFailureCPIM_FailCnt) + 1U);
        }

        /* Switch: '<S352>/Switch2' */
        if (rtb_AND_az)
        {
            /* Switch: '<S352>/Switch1' incorporates:
             *  Constant: '<S352>/Constant Value1'
             *  Sum: '<S352>/Subtraction'
             *  Switch: '<S352>/Switch2'
             *  UnitDelay: '<S352>/Unit Delay'
             */
            VeCDMR_Cnt_InternalFailureCPIM_SmpCnt = (uint16)(((uint32)
                VeCDMR_Cnt_InternalFailureCPIM_SmpCnt) + 1U);
        }

        /* End of Switch: '<S352>/Switch2' */
    }

    /* End of Switch: '<S351>/Switch1' */
    /* End of Outputs for SubSystem: '<S344>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S344>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S344>/Greater Than or Equal ' incorporates:
     *  Constant: '<S336>/Calib'
     */
    CDMR_ac_DW.UnitDelay1_DSTATE_a = (VeCDMR_Cnt_InternalFailureCPIM_FailCnt >=
        KeCDMR_Cnt_ColorMismatch_Fail);

    /* Logic: '<S344>/NOT5' incorporates:
     *  Constant: '<S337>/Calib'
     *  Logic: '<S344>/NOT3'
     *  RelationalOperator: '<S344>/Less Than  or Equal'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_ei = ((VeCDMR_Cnt_InternalFailureCPIM_SmpCnt >=
        KeCDMR_Cnt_ColorMismatch_Pass) && (!CDMR_ac_DW.UnitDelay1_DSTATE_a));

    /* Switch: '<S357>/Switch1' incorporates:
     *  Constant: '<S350>/Constant Value'
     *  DataStoreWrite: '<S279>/Data Store Write2'
     *  Switch: '<S356>/Switch1'
     */
    if (TmpSignalConversionAtTmpVM_FcnCallSubs_i)
    {
        CDMR_ac_DW.NeCDMR_Cnt_CPIMInternal_MFOP = 0U;
    }
    else
    {
        if (CDMR_ac_DW.UnitDelay_DSTATE_ei)
        {
            /* MinMax: '<S350>/Minimum2' incorporates:
             *  DataStoreRead: '<S279>/Data Store Read2'
             *  Switch: '<S356>/Switch1'
             */
            if (VeCDMR_Cnt_InternalFailureCPIM_FailCnt >
                    CDMR_ac_DW.NeCDMR_Cnt_CPIMInternal_MFOP)
            {
                /* DataStoreWrite: '<S279>/Data Store Write2' incorporates:
                 *  Switch: '<S356>/Switch1'
                 */
                CDMR_ac_DW.NeCDMR_Cnt_CPIMInternal_MFOP =
                    VeCDMR_Cnt_InternalFailureCPIM_FailCnt;
            }

            /* End of MinMax: '<S350>/Minimum2' */
        }
    }

    /* End of Switch: '<S357>/Switch1' */

    /* Logic: '<S326>/AND' */
    rtb_AND_az = rtb_Logical8_h;

    /* Outputs for Enabled SubSystem: '<S343>/Fail' */
    CDMR_ac_Fail(CDMR_ac_DW.UnitDelay1_DSTATE_a, &CDMR_ac_B.Merge_ns);

    /* End of Outputs for SubSystem: '<S343>/Fail' */

    /* Outputs for Enabled SubSystem: '<S343>/Init' */
    CDMR_ac_Init_b(rtb_Comparison2, &CDMR_ac_B.Merge_ns);

    /* End of Outputs for SubSystem: '<S343>/Init' */

    /* Outputs for Enabled SubSystem: '<S343>/Pass' */
    CDMR_ac_Pass(CDMR_ac_DW.UnitDelay_DSTATE_ei, &CDMR_ac_B.Merge_ns);

    /* End of Outputs for SubSystem: '<S343>/Pass' */

    /* RelationalOperator: '<S343>/Relational Operator' incorporates:
     *  Constant: '<S346>/Constant'
     *  Merge: '<S343>/Merge'
     */
    VeCDMR_b_FltDtct_CPIMInternal = (((uint32)CDMR_ac_B.Merge_ns) ==
        CeDFIB_e_Fail);

    /* Logic: '<S283>/Logical4' incorporates:
     *  Constant: '<S400>/Calib'
     *  Logic: '<S283>/Logical3'
     */
    VeCDMR_b_ThermSensFltORLOC = (((VeCDMR_b_CPIM_LINBus_LOC) &&
        (KeCDMR_b_SnsronLINBus)) ||
        (CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_lm));

    /* Outputs for Atomic SubSystem: '<S283>/EdgeFalling' */
    /* Logic: '<S394>/AND' incorporates:
     *  Logic: '<S394>/OR1'
     *  UnitDelay: '<S394>/Unit Delay'
     */
    rtb_Logical8_h = ((!TmpSignalConversionAtTmpVM_FcnCallSubs_o) &&
                      (CDMR_ac_DW.UnitDelay_DSTATE_kz));

    /* Update for UnitDelay: '<S394>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_kz = TmpSignalConversionAtTmpVM_FcnCallSubs_o;

    /* End of Outputs for SubSystem: '<S283>/EdgeFalling' */

    /* Logic: '<S283>/Logical2' incorporates:
     *  Constant: '<S396>/Constant'
     *  Logic: '<S283>/Logical7'
     *  RelationalOperator: '<S283>/Comparison1'
     *  UnitDelay: '<S283>/Unit Delay'
     */
    VeCDMR_b_TempSens_RstCond = (((((uint32)
        TmpSignalConversionAtTmpVM_FcnCallSub_ka) ==
        CeOBCR_e_ChargingSts_Complete) || rtb_Logical8_h) ||
        ((CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_m1) &&
         (CDMR_ac_DW.UnitDelay_DSTATE_juw)));

    /* Outputs for Atomic SubSystem: '<S283>/Signal Latch On With Reset' */
    /* Logic: '<S402>/OR1' incorporates:
     *  Constant: '<S395>/Constant'
     *  Logic: '<S402>/NOT'
     *  Logic: '<S402>/OR'
     *  RelationalOperator: '<S283>/Comparison4'
     *  UnitDelay: '<S402>/Unit Delay'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_hu = ((((uint32)
        TmpSignalConversionAtTmpVM_FcnCallSub_ka) ==
        CeOBCR_e_ChargingSts_Charging) || ((!VeCDMR_b_TempSens_RstCond) &&
        (CDMR_ac_DW.UnitDelay_DSTATE_hu)));

    /* End of Outputs for SubSystem: '<S283>/Signal Latch On With Reset' */

    /* Logic: '<S283>/Logical8' incorporates:
     *  Logic: '<S283>/Logical1'
     *  Logic: '<S283>/Logical6'
     *  UnitDelay: '<S402>/Unit Delay'
     */
    rtb_Logical8_h = (((TmpSignalConversionAtTmpVM_FcnCallSub_ad &&
                        (!TmpSignalConversionAtTmpVM_FcnCallSubs_e)) &&
                       (!VeCDMR_b_ThermSensFltORLOC)) &&
                      (CDMR_ac_DW.UnitDelay_DSTATE_hu));

    /* RelationalOperator: '<S403>/Relational Operator3' incorporates:
     *  Constant: '<S403>/Constant3'
     *  S-Function (sfix_bitop): '<S403>/Bitwise Operator2'
     */
    rtb_Comparison2 = ((((uint32)
                         CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_b) &
                        64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S403>/EdgeFalling1' */
    /* Logic: '<S403>/Logical Operator' incorporates:
     *  Logic: '<S405>/OR1'
     */
    rtb_AND_cqs = !rtb_Comparison2;

    /* End of Outputs for SubSystem: '<S403>/EdgeFalling1' */

    /* Logic: '<S403>/Logical1' incorporates:
     *  Constant: '<S399>/Calib'
     *  Constant: '<S403>/Constant1'
     *  Logic: '<S403>/Logical Operator'
     *  Logic: '<S403>/Logical10'
     *  Logic: '<S403>/Logical12'
     *  RelationalOperator: '<S403>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S403>/Bitwise Operator3'
     */
    TmpSignalConversionAtTmpVM_FcnCallSubs_o = (rtb_Logical8_h &&
        ((!KeCDMR_b_BatChaCouTemATooHig_LtchEnbl) || (((((uint32)
        CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_b) & 1U) == 0U) ||
        rtb_AND_cqs)));

    /* Outputs for Atomic SubSystem: '<S403>/EdgeFalling1' */
    /* Logic: '<S405>/AND' incorporates:
     *  UnitDelay: '<S405>/Unit Delay'
     */
    rtb_AND_cqs = (rtb_AND_cqs && (CDMR_ac_DW.UnitDelay_DSTATE_ki));

    /* Update for UnitDelay: '<S405>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_ki = rtb_Comparison2;

    /* End of Outputs for SubSystem: '<S403>/EdgeFalling1' */

    /* Logic: '<S403>/Logical5' */
    rtb_Logical5_g = (rtb_Logical5_g || rtb_AND_cqs);

    /* Outputs for Atomic SubSystem: '<S404>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S404>/Counter Reset  Enabled ' */
    /* Switch: '<S411>/Switch1' incorporates:
     *  Logic: '<S404>/Fail Counter Reset'
     *  Logic: '<S404>/NOT6'
     *  Switch: '<S411>/Switch2'
     *  Switch: '<S412>/Switch1'
     *  UnitDelay: '<S404>/Unit Delay'
     *  UnitDelay: '<S404>/Unit Delay1'
     */
    if ((rtb_Logical5_g || (CDMR_ac_DW.UnitDelay_DSTATE_pj)) ||
            (CDMR_ac_DW.UnitDelay1_DSTATE_b))
    {
        /* Switch: '<S411>/Switch1' incorporates:
         *  Constant: '<S411>/Constant Value2'
         */
        VeCDMR_Cnt_ThermalSensor_FailCnt = 0U;

        /* Switch: '<S412>/Switch1' incorporates:
         *  Constant: '<S412>/Constant Value2'
         */
        VeCDMR_Cnt_ThermalSensor_SmpCnt = 0U;
    }
    else
    {
        if (TmpSignalConversionAtTmpVM_FcnCallSubs_o &&
                (CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_h))
        {
            /* Switch: '<S411>/Switch1' incorporates:
             *  Constant: '<S411>/Constant Value1'
             *  Sum: '<S411>/Subtraction'
             *  Switch: '<S411>/Switch2'
             *  UnitDelay: '<S411>/Unit Delay'
             */
            VeCDMR_Cnt_ThermalSensor_FailCnt = (uint16)(((uint32)
                VeCDMR_Cnt_ThermalSensor_FailCnt) + 1U);
        }

        /* Switch: '<S412>/Switch2' */
        if (TmpSignalConversionAtTmpVM_FcnCallSubs_o)
        {
            /* Switch: '<S412>/Switch1' incorporates:
             *  Constant: '<S412>/Constant Value1'
             *  Sum: '<S412>/Subtraction'
             *  Switch: '<S412>/Switch2'
             *  UnitDelay: '<S412>/Unit Delay'
             */
            VeCDMR_Cnt_ThermalSensor_SmpCnt = (uint16)(((uint32)
                VeCDMR_Cnt_ThermalSensor_SmpCnt) + 1U);
        }

        /* End of Switch: '<S412>/Switch2' */
    }

    /* End of Switch: '<S411>/Switch1' */
    /* End of Outputs for SubSystem: '<S404>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S404>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S404>/Greater Than or Equal ' incorporates:
     *  Constant: '<S397>/Calib'
     */
    CDMR_ac_DW.UnitDelay1_DSTATE_b = (VeCDMR_Cnt_ThermalSensor_FailCnt >=
        KeCDMR_Cnt_ChrgOT_Fail);

    /* Logic: '<S404>/NOT5' incorporates:
     *  Constant: '<S398>/Calib'
     *  Logic: '<S404>/NOT3'
     *  RelationalOperator: '<S404>/Less Than  or Equal'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_pj = ((VeCDMR_Cnt_ThermalSensor_SmpCnt >=
        KeCDMR_Cnt_ChrgOT_Pass) && (!CDMR_ac_DW.UnitDelay1_DSTATE_b));

    /* Switch: '<S417>/Switch1' incorporates:
     *  Constant: '<S410>/Constant Value'
     *  DataStoreWrite: '<S283>/Data Store Write2'
     *  Switch: '<S416>/Switch1'
     */
    if (TmpSignalConversionAtTmpVM_FcnCallSubs_i)
    {
        CDMR_ac_DW.NeCDMR_Cnt_InletSensor_MFOP = 0U;
    }
    else
    {
        if (CDMR_ac_DW.UnitDelay_DSTATE_pj)
        {
            /* MinMax: '<S410>/Minimum2' incorporates:
             *  DataStoreRead: '<S283>/Data Store Read2'
             *  Switch: '<S416>/Switch1'
             */
            if (VeCDMR_Cnt_ThermalSensor_FailCnt >
                    CDMR_ac_DW.NeCDMR_Cnt_InletSensor_MFOP)
            {
                /* DataStoreWrite: '<S283>/Data Store Write2' incorporates:
                 *  Switch: '<S416>/Switch1'
                 */
                CDMR_ac_DW.NeCDMR_Cnt_InletSensor_MFOP =
                    VeCDMR_Cnt_ThermalSensor_FailCnt;
            }

            /* End of MinMax: '<S410>/Minimum2' */
        }
    }

    /* End of Switch: '<S417>/Switch1' */

    /* Logic: '<S283>/Logical5' incorporates:
     *  UnitDelay: '<S283>/Unit Delay'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_juw = !rtb_Logical8_h;

    /* Outputs for Enabled SubSystem: '<S403>/Fail' */
    CDMR_ac_Fail(CDMR_ac_DW.UnitDelay1_DSTATE_b, &CDMR_ac_B.Merge_l);

    /* End of Outputs for SubSystem: '<S403>/Fail' */

    /* Outputs for Enabled SubSystem: '<S403>/Init' */
    CDMR_ac_Init_b(rtb_Logical5_g, &CDMR_ac_B.Merge_l);

    /* End of Outputs for SubSystem: '<S403>/Init' */

    /* Outputs for Enabled SubSystem: '<S403>/Pass' */
    CDMR_ac_Pass(CDMR_ac_DW.UnitDelay_DSTATE_pj, &CDMR_ac_B.Merge_l);

    /* End of Outputs for SubSystem: '<S403>/Pass' */

    /* RelationalOperator: '<S403>/Relational Operator' incorporates:
     *  Constant: '<S406>/Constant'
     *  Merge: '<S403>/Merge'
     */
    VeCDMR_b_FltDtct_ThermalSensor = (((uint32)CDMR_ac_B.Merge_l) ==
        CeDFIB_e_Fail);

    /* Update for UnitDelay: '<S282>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_g0m =
        CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_m;

    /* Update for UnitDelay: '<S282>/Unit Delay1' */
    CDMR_ac_DW.UnitDelay1_DSTATE_oz =
        CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_d;

    /* Update for UnitDelay: '<S282>/Unit Delay2' */
    CDMR_ac_DW.UnitDelay2_DSTATE_n =
        CDMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_k;

    /* Update for UnitDelay: '<S279>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_nc = rtb_AND_hj3;

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/CDMO_FUNC'
     */
    /* Switch: '<S228>/Switch3' incorporates:
     *  Constant: '<S263>/Calib'
     */
    if (KeCDMR_b_ChrgPrtLckLow_Ovrd)
    {
        /* Switch: '<S228>/Switch3' incorporates:
         *  Constant: '<S264>/Calib'
         */
        TmpSignalConversionAtTmpVM_FcnCallSub_c4 = KeCDMR_b_ChrgPrtLckLow_Val;
    }

    /* End of Switch: '<S228>/Switch3' */

    /* Switch: '<S228>/Switch2' incorporates:
     *  Constant: '<S261>/Calib'
     */
    if (KeCDMR_b_ChrgPrtLckHi_Ovrd)
    {
        /* Switch: '<S228>/Switch2' incorporates:
         *  Constant: '<S262>/Calib'
         */
        TmpSignalConversionAtTmpVM_FcnCallSub_m3 = KeCDMR_b_ChrgPrtLckHi_Val;
    }

    /* End of Switch: '<S228>/Switch2' */

    /* Switch: '<S228>/Switch1' incorporates:
     *  Constant: '<S259>/Calib'
     */
    if (KeCDMR_b_ChrgPortUL_FltDtct_Ovrd)
    {
        /* Switch: '<S228>/Switch1' incorporates:
         *  Constant: '<S260>/Calib'
         */
        TmpSignalConversionAtTmpVM_FcnCallSu_m1k =
            KeCDMR_b_ChrgPortUL_FltDtct_Val;
    }

    /* End of Switch: '<S228>/Switch1' */

    /* Switch: '<S228>/Switch8' incorporates:
     *  Constant: '<S257>/Calib'
     */
    if (KeCDMR_b_ChrgPortLK_FltDtct_Ovrd)
    {
        /* Switch: '<S228>/Switch8' incorporates:
         *  Constant: '<S258>/Calib'
         */
        TmpSignalConversionAtTmpVM_FcnCallSub_iw =
            KeCDMR_b_ChrgPortLK_FltDtct_Val;
    }

    /* End of Switch: '<S228>/Switch8' */

    /* Switch: '<S228>/Switch9' incorporates:
     *  Constant: '<S265>/Calib'
     */
    if (KeCDMR_b_IUMPR_ChrgPortLock_Ovrd)
    {
        /* Gain: '<S274>/Gain' incorporates:
         *  Constant: '<S266>/Calib'
         */
        TmpSignalConversionAtTmpVM_FcnCallSub_lp =
            KeCDMR_b_IUMPR_ChrgPortLock_Val;
    }

    /* End of Switch: '<S228>/Switch9' */

    /* Switch: '<S228>/Switch10' incorporates:
     *  Constant: '<S267>/Calib'
     */
    if (KeCDMR_b_IUMPR_ChrgPortULock_Ovrd)
    {
        /* Gain: '<S273>/Gain' incorporates:
         *  Constant: '<S268>/Calib'
         */
        TmpSignalConversionAtTmpVM_FcnCallSub_ii =
            KeCDMR_b_IUMPR_ChrgPortULock_Val;
    }

    /* End of Switch: '<S228>/Switch10' */

    /* Switch: '<S228>/Switch6' incorporates:
     *  Constant: '<S269>/Calib'
     */
    if (KeCDMR_b_IUMPR_DeviceCmdOnLK_Ovrd)
    {
        /* Switch: '<S228>/Switch6' incorporates:
         *  Constant: '<S270>/Calib'
         */
        TmpSignalConversionAtTmpVM_FcnCallSub_gz =
            KeCDMR_b_IUMPR_DeviceCmdOnLK_Val;
    }

    /* End of Switch: '<S228>/Switch6' */

    /* Switch: '<S228>/Switch5' incorporates:
     *  Constant: '<S271>/Calib'
     */
    if (KeCDMR_b_IUMPR_DeviceCmdOnUL_Ovrd)
    {
        /* Switch: '<S228>/Switch5' incorporates:
         *  Constant: '<S272>/Calib'
         */
        TmpSignalConversionAtTmpVM_FcnCallSub_du =
            KeCDMR_b_IUMPR_DeviceCmdOnUL_Val;
    }

    /* End of Switch: '<S228>/Switch5' */
#if Rte_SysCon_Variant_CDMR_2

    /* Outputs for Function Call SubSystem: '<S2>/OnBoardTrunkPP_IDCM_Diag' */
    /* RelationalOperator: '<S231>/Comparison12' incorporates:
     *  Constant: '<S543>/Constant'
     *  VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120'
     */
    rtb_Comparison2 = (((uint32)
                        CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_f5) !=
                       CePMTR_e_DISBL_All_Thrml);

    /* S-Function (sfix_bitop): '<S570>/Bitwise Operator1' incorporates:
     *  S-Function (sfix_bitop): '<S560>/Bitwise Operator2'
     */
    VeCDMR_b_PwrOutletPanelMod1DigCommBus_En = ((uint32)
        CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_h) & 64U;

    /* S-Function (sfix_bitop): '<S570>/Bitwise Operator2' incorporates:
     *  S-Function (sfix_bitop): '<S560>/Bitwise Operator3'
     */
    VeCDMR_b_PwrOutletPanelMod1DigCommBus__0 = ((uint32)
        CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_h) & 1U;

    /* S-Function (sfix_bitop): '<S568>/Bitwise Operator1' incorporates:
     *  S-Function (sfix_bitop): '<S563>/Bitwise Operator2'
     */
    VeCDMR_b_PwrOutletPanelMod1DigCommBus__1 = ((uint32)
        CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_c) & 64U;

    /* S-Function (sfix_bitop): '<S568>/Bitwise Operator2' incorporates:
     *  S-Function (sfix_bitop): '<S563>/Bitwise Operator3'
     */
    VeCDMR_b_PwrOutletPanelMod1DigCommBus__2 = ((uint32)
        CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_c) & 1U;

    /* S-Function (sfix_bitop): '<S569>/Bitwise Operator1' incorporates:
     *  S-Function (sfix_bitop): '<S561>/Bitwise Operator2'
     */
    VeCDMR_b_PwrOutletPanelMod1DigCommBus__3 = ((uint32)
        CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_g) & 64U;

    /* S-Function (sfix_bitop): '<S569>/Bitwise Operator2' incorporates:
     *  S-Function (sfix_bitop): '<S561>/Bitwise Operator3'
     */
    VeCDMR_b_PwrOutletPanelMod1DigCommBus__4 = ((uint32)
        CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_g) & 1U;

    /* Logic: '<S540>/AND' incorporates:
     *  Constant: '<S566>/Constant'
     *  Constant: '<S567>/Calib'
     *  Constant: '<S568>/Constant1'
     *  Constant: '<S568>/Constant2'
     *  Constant: '<S569>/Constant1'
     *  Constant: '<S569>/Constant2'
     *  Constant: '<S570>/Constant1'
     *  Constant: '<S570>/Constant2'
     *  Logic: '<S540>/NOT'
     *  Logic: '<S540>/OR'
     *  Logic: '<S568>/Logical Operator'
     *  Logic: '<S569>/Logical Operator'
     *  Logic: '<S570>/Logical Operator'
     *  RelationalOperator: '<S540>/Relational Operator'
     *  RelationalOperator: '<S568>/Relational Operator1'
     *  RelationalOperator: '<S568>/Relational Operator2'
     *  RelationalOperator: '<S569>/Relational Operator1'
     *  RelationalOperator: '<S569>/Relational Operator2'
     *  RelationalOperator: '<S570>/Relational Operator1'
     *  RelationalOperator: '<S570>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S568>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S568>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S569>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S569>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S570>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S570>/Bitwise Operator2'
     */
    VeCDMR_b_PwrOutletPanelMod1DigCommBus_EnableCheck =
        (((((KeCDMR_b_Enbl_PwrOutletPanelMod1DigCommBus) && (((uint32)
              CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallS_po2) ==
             CeVTLR_e_Active)) && TmpSignalConversionAtTmpVM_FcnCallSub_ad) &&
          rtb_Comparison2) && ((((VeCDMR_b_PwrOutletPanelMod1DigCommBus__2 == 0U)
            || (VeCDMR_b_PwrOutletPanelMod1DigCommBus__1 != 0U)) &&
           ((VeCDMR_b_PwrOutletPanelMod1DigCommBus__0 == 0U) ||
            (VeCDMR_b_PwrOutletPanelMod1DigCommBus_En != 0U))) &&
          ((VeCDMR_b_PwrOutletPanelMod1DigCommBus__4 == 0U) ||
           (VeCDMR_b_PwrOutletPanelMod1DigCommBus__3 != 0U))));

    /* RelationalOperator: '<S560>/Relational Operator3' incorporates:
     *  Constant: '<S560>/Constant3'
     */
    rtb_Logical5_g = (VeCDMR_b_PwrOutletPanelMod1DigCommBus_En == 0U);

    /* Outputs for Atomic SubSystem: '<S560>/EdgeFalling1' */
    /* Logic: '<S560>/Logical Operator' incorporates:
     *  Logic: '<S604>/OR1'
     */
    rtb_AND_cqs = !rtb_Logical5_g;

    /* End of Outputs for SubSystem: '<S560>/EdgeFalling1' */

    /* Logic: '<S560>/Logical1' incorporates:
     *  Constant: '<S556>/Calib'
     *  Constant: '<S560>/Constant1'
     *  Logic: '<S560>/Logical Operator'
     *  Logic: '<S560>/Logical10'
     *  Logic: '<S560>/Logical12'
     *  RelationalOperator: '<S560>/Relational Operator1'
     */
    rtb_Logical8_h = ((VeCDMR_b_PwrOutletPanelMod1DigCommBus_EnableCheck) &&
                      ((!KeCDMR_b_PwrOutletPanelMod1DigCommBus_LatchEnbl) ||
                       ((VeCDMR_b_PwrOutletPanelMod1DigCommBus__0 == 0U) ||
                        rtb_AND_cqs)));

    /* UnitDelay: '<S547>/Unit Delay4' */
    VeCDMR_b_PPHWInput_PulseDetected = CDMR_ac_DW.UnitDelay4_DSTATE_j;

    /* Outputs for Atomic SubSystem: '<S547>/Signal Latch On With Reset2' */
    /* Logic: '<S602>/OR1' incorporates:
     *  Logic: '<S547>/OR'
     *  Logic: '<S602>/NOT'
     *  Logic: '<S602>/OR'
     *  UnitDelay: '<S602>/Unit Delay'
     */
    VeCDMR_b_PP2ButtonPressedLatched =
        ((CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_e) ||
         (((!VeCDMR_b_PPHWInput_PulseDetected) &&
           (!VeCDMR_b_PwrOutletPanelMod1DigCommBus_FaultCheck)) &&
          (VeCDMR_b_PP2ButtonPressedLatched)));

    /* End of Outputs for SubSystem: '<S547>/Signal Latch On With Reset2' */

    /* Outputs for Atomic SubSystem: '<S547>/Counter Reset Enabled ' */
    /* Switch: '<S599>/Switch' incorporates:
     *  Constant: '<S599>/Constant Value2'
     *  Logic: '<S547>/AND'
     *  Logic: '<S547>/NOT'
     *  Switch: '<S599>/Switch2'
     *  UnitDelay: '<S599>/Unit Delay'
     */
    if (VeCDMR_b_PPHWInput_PulseDetected)
    {
        CDMR_ac_DW.UnitDelay_DSTATE_nx = 0U;
    }
    else
    {
        if ((VeCDMR_b_PP2ButtonPressedLatched) &&
                (!CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_b))
        {
            /* UnitDelay: '<S599>/Unit Delay' incorporates:
             *  Constant: '<S599>/Constant Value1'
             *  Sum: '<S599>/Subtraction'
             *  Switch: '<S599>/Switch2'
             */
            CDMR_ac_DW.UnitDelay_DSTATE_nx = (uint16)(((uint32)
                CDMR_ac_DW.UnitDelay_DSTATE_nx) + 1U);
        }
    }

    /* End of Switch: '<S599>/Switch' */
    /* End of Outputs for SubSystem: '<S547>/Counter Reset Enabled ' */

    /* RelationalOperator: '<S547>/Relational Operator' incorporates:
     *  Constant: '<S601>/Calib'
     *  UnitDelay: '<S599>/Unit Delay'
     */
    VeCDMR_b_PwrOutletPanelMod1DigCommBus_FaultCheck =
        (CDMR_ac_DW.UnitDelay_DSTATE_nx >= KeCDMR_Cnt_DigCommFailLmt);

    /* Logic: '<S231>/NOT4' */
    TmpSignalConversionAtTmpVM_FcnCallSubs_o =
        (TmpSignalConversionAtTmpVM_FcnCallSubs_a ||
         TmpSignalConversionAtTmpVM_FcnCallSubs_i);

    /* Outputs for Atomic SubSystem: '<S560>/EdgeFalling1' */
    /* Logic: '<S604>/AND' incorporates:
     *  UnitDelay: '<S604>/Unit Delay'
     */
    rtb_AND_cqs = (rtb_AND_cqs && (CDMR_ac_DW.UnitDelay_DSTATE_ne));

    /* Update for UnitDelay: '<S604>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_ne = rtb_Logical5_g;

    /* End of Outputs for SubSystem: '<S560>/EdgeFalling1' */

    /* Logic: '<S560>/Logical5' incorporates:
     *  Logic: '<S231>/NOT4'
     */
    rtb_Logical5_g = (TmpSignalConversionAtTmpVM_FcnCallSubs_o || rtb_AND_cqs);

    /* Outputs for Atomic SubSystem: '<S603>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S603>/Counter Reset  Enabled ' */
    /* Switch: '<S610>/Switch1' incorporates:
     *  Logic: '<S603>/Fail Counter Reset'
     *  Logic: '<S603>/NOT6'
     *  Switch: '<S610>/Switch2'
     *  Switch: '<S611>/Switch1'
     *  UnitDelay: '<S603>/Unit Delay'
     *  UnitDelay: '<S603>/Unit Delay1'
     */
    if ((rtb_Logical5_g || (CDMR_ac_DW.UnitDelay_DSTATE_kb)) ||
            (CDMR_ac_DW.UnitDelay1_DSTATE_cp))
    {
        /* Switch: '<S610>/Switch1' incorporates:
         *  Constant: '<S610>/Constant Value2'
         */
        VeCDMR_Cnt_PwrOutletPanelMod1DigCommBus_FailCnt = 0U;

        /* Switch: '<S611>/Switch1' incorporates:
         *  Constant: '<S611>/Constant Value2'
         */
        VeCDMR_Cnt_PwrOutletPanelMod1DigCommBus_SmpCnt = 0U;
    }
    else
    {
        if (rtb_Logical8_h && (VeCDMR_b_PwrOutletPanelMod1DigCommBus_FaultCheck))
        {
            /* Switch: '<S610>/Switch1' incorporates:
             *  Constant: '<S610>/Constant Value1'
             *  Sum: '<S610>/Subtraction'
             *  Switch: '<S610>/Switch2'
             *  UnitDelay: '<S610>/Unit Delay'
             */
            VeCDMR_Cnt_PwrOutletPanelMod1DigCommBus_FailCnt = (uint16)(((uint32)
                VeCDMR_Cnt_PwrOutletPanelMod1DigCommBus_FailCnt) + 1U);
        }

        /* Switch: '<S611>/Switch2' */
        if (rtb_Logical8_h)
        {
            /* Switch: '<S611>/Switch1' incorporates:
             *  Constant: '<S611>/Constant Value1'
             *  Sum: '<S611>/Subtraction'
             *  Switch: '<S611>/Switch2'
             *  UnitDelay: '<S611>/Unit Delay'
             */
            VeCDMR_Cnt_PwrOutletPanelMod1DigCommBus_SmpCnt = (uint16)(((uint32)
                VeCDMR_Cnt_PwrOutletPanelMod1DigCommBus_SmpCnt) + 1U);
        }

        /* End of Switch: '<S611>/Switch2' */
    }

    /* End of Switch: '<S610>/Switch1' */
    /* End of Outputs for SubSystem: '<S603>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S603>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S603>/Greater Than or Equal ' incorporates:
     *  Constant: '<S548>/Calib'
     */
    CDMR_ac_DW.UnitDelay1_DSTATE_cp =
        (VeCDMR_Cnt_PwrOutletPanelMod1DigCommBus_FailCnt >=
         KeCDMR_Cnt_PwrOutletPanelMod1DigCommBus_Fail);

    /* Logic: '<S603>/NOT5' incorporates:
     *  Constant: '<S549>/Calib'
     *  Logic: '<S603>/NOT3'
     *  RelationalOperator: '<S603>/Less Than  or Equal'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_kb =
        ((VeCDMR_Cnt_PwrOutletPanelMod1DigCommBus_SmpCnt >=
          KeCDMR_Cnt_PwrOutletPanelMod1DigCommBus_Smpl) &&
         (!CDMR_ac_DW.UnitDelay1_DSTATE_cp));

    /* Switch: '<S616>/Switch1' incorporates:
     *  Constant: '<S609>/Constant Value'
     *  DataStoreWrite: '<S231>/Data Store Write2'
     *  Switch: '<S615>/Switch1'
     */
    if (TmpSignalConversionAtTmpVM_FcnCallSubs_i)
    {
        CDMR_ac_DW.NeCDMR_Cnt_PwrOutletPanelMod1DigCommBus_ = 0U;
    }
    else
    {
        if (CDMR_ac_DW.UnitDelay_DSTATE_kb)
        {
            /* MinMax: '<S609>/Minimum2' incorporates:
             *  DataStoreRead: '<S231>/Data Store Read2'
             *  Switch: '<S615>/Switch1'
             */
            if (VeCDMR_Cnt_PwrOutletPanelMod1DigCommBus_FailCnt >
                    CDMR_ac_DW.NeCDMR_Cnt_PwrOutletPanelMod1DigCommBus_)
            {
                /* DataStoreWrite: '<S231>/Data Store Write2' incorporates:
                 *  Switch: '<S615>/Switch1'
                 */
                CDMR_ac_DW.NeCDMR_Cnt_PwrOutletPanelMod1DigCommBus_ =
                    VeCDMR_Cnt_PwrOutletPanelMod1DigCommBus_FailCnt;
            }

            /* End of MinMax: '<S609>/Minimum2' */
        }
    }

    /* End of Switch: '<S616>/Switch1' */

    /* Logic: '<S539>/AND' incorporates:
     *  Constant: '<S564>/Constant'
     *  Constant: '<S565>/Calib'
     *  RelationalOperator: '<S539>/Relational Operator'
     */
    VeCDMR_b_PwrOutletPanelMod1Perf_EnableCheck =
        ((((KeCDMR_b_Enbl_PwrOutletPanelMod1Perf) &&
           TmpSignalConversionAtTmpVM_FcnCallSub_ad) && rtb_Comparison2) &&
         (((uint32)CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallS_po2) ==
          CeVTLR_e_Active));

    /* RelationalOperator: '<S563>/Relational Operator3' incorporates:
     *  Constant: '<S563>/Constant3'
     */
    rtb_Logical8_h = (VeCDMR_b_PwrOutletPanelMod1DigCommBus__1 == 0U);

    /* Outputs for Atomic SubSystem: '<S563>/EdgeFalling1' */
    /* Logic: '<S563>/Logical Operator' incorporates:
     *  Logic: '<S646>/OR1'
     */
    rtb_AND_hj3 = !rtb_Logical8_h;

    /* End of Outputs for SubSystem: '<S563>/EdgeFalling1' */

    /* Logic: '<S563>/Logical1' incorporates:
     *  Constant: '<S559>/Calib'
     *  Constant: '<S563>/Constant1'
     *  Logic: '<S563>/Logical Operator'
     *  Logic: '<S563>/Logical10'
     *  Logic: '<S563>/Logical12'
     *  RelationalOperator: '<S563>/Relational Operator1'
     */
    rtb_AND_cqs = ((VeCDMR_b_PwrOutletPanelMod1Perf_EnableCheck) &&
                   ((!KeCDMR_b_PwrOutletPanelMod1Perf_LatchEnbl) ||
                    ((VeCDMR_b_PwrOutletPanelMod1DigCommBus__2 == 0U) ||
                     rtb_AND_hj3)));

    /* Logic: '<S545>/OR2' incorporates:
     *  Constant: '<S592>/Calib'
     *  Logic: '<S545>/NOT'
     *  RelationalOperator: '<S545>/Relational Operator'
     */
    VeCDMR_b_PwrOutletPanelMod1InACPwrCktPerf_FaultCheck =
        (((CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSubsy >=
           KeCDMR_U_ACOutVoltageL1DtctThrshld) &&
          (CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_a4)) &&
         (!CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_mx));

    /* Abs: '<S546>/Abs1' incorporates:
     *  Sum: '<S546>/Add'
     */
    rtb_Abs1_b = fabsf(CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_d -
                       CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_p);

    /* Outputs for Atomic SubSystem: '<S546>/Protected Division' */
    /* Switch: '<S597>/Switch1' incorporates:
     *  Constant: '<S597>/Constant Value'
     *  Constant: '<S597>/Constant Value1'
     *  Constant: '<S597>/Constant Value2'
     *  Logic: '<S597>/AND'
     *  RelationalOperator: '<S597>/Greater Than or Equal '
     *  RelationalOperator: '<S597>/Not Equal'
     *  RelationalOperator: '<S597>/Not Equal1'
     *  Switch: '<S597>/Switch2'
     */
    if ((rtb_Abs1_b != 0.0F) &&
            (CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_d != 0.0F))
    {
        /* Switch: '<S597>/Switch1' incorporates:
         *  Product: '<S597>/Division'
         */
        rtb_Abs1_b /= CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_d;
    }
    else if (rtb_Abs1_b > 0.0F)
    {
        /* Switch: '<S597>/Switch2' incorporates:
         *  Constant: '<S597>/MAXFLOAT'
         *  Switch: '<S597>/Switch1'
         */
        rtb_Abs1_b = 3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S597>/Switch1' incorporates:
         *  Constant: '<S597>/Constant Value4'
         *  Switch: '<S597>/Switch2'
         *  Switch: '<S597>/Switch3'
         */
        rtb_Abs1_b = 0.0F;
    }

    /* End of Switch: '<S597>/Switch1' */
    /* End of Outputs for SubSystem: '<S546>/Protected Division' */

    /* Product: '<S546>/Product' incorporates:
     *  Constant: '<S546>/Constant1'
     */
    VeCDMR_Pct_PP2_L1_CurrPct = rtb_Abs1_b * 100.0F;

    /* Outputs for Atomic SubSystem: '<S546>/Stop Watch Reset Enabled' */
    /* Switch: '<S598>/Switch2' incorporates:
     *  Constant: '<S595>/Calib'
     *  Constant: '<S598>/Constant Value2'
     *  Logic: '<S546>/NOT'
     *  RelationalOperator: '<S546>/Relational Operator8'
     *  Switch: '<S598>/Switch'
     *  UnitDelay: '<S598>/Unit Delay'
     */
    if (VeCDMR_Pct_PP2_L1_CurrPct < KeCDMR_Pct_ACOutCurrL1DiffLmt)
    {
        CDMR_ac_DW.UnitDelay_DSTATE_h = 0.0F;
    }
    else
    {
        /* UnitDelay: '<S598>/Unit Delay' incorporates:
         *  Constant: '<S593>/Calib'
         *  Sum: '<S598>/Subtraction'
         *  Switch: '<S598>/Switch2'
         */
        CDMR_ac_DW.UnitDelay_DSTATE_h += HeCDMR_t_MedTEH;
    }

    /* End of Switch: '<S598>/Switch2' */
    /* End of Outputs for SubSystem: '<S546>/Stop Watch Reset Enabled' */

    /* RelationalOperator: '<S546>/Relational Operator5' incorporates:
     *  Constant: '<S596>/Calib'
     *  UnitDelay: '<S598>/Unit Delay'
     */
    VeCDMR_b_PP2L1CrrntDifflLmtExcdd = (CDMR_ac_DW.UnitDelay_DSTATE_h >
        KeCDMR_t_PPCurrSnsrFltThrshld);

    /* Logic: '<S546>/AND2' incorporates:
     *  Constant: '<S594>/Calib'
     *  RelationalOperator: '<S546>/Relational Operator6'
     */
    VeCDMR_b_PP2L1CurrentSensorFaulty = ((VeCDMR_b_PP2L1CrrntDifflLmtExcdd) &&
        (CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_d >
         KeCDMR_I_IDCMACOutCurrentChckThrsld));

    /* Logic: '<S546>/AND' */
    VeCDMR_b_PwrOutletPanelMod1Perf_FaultCheck =
        ((VeCDMR_b_PwrOutletPanelMod1InACPwrCktPerf_FaultCheck) ||
         (VeCDMR_b_PP2L1CurrentSensorFaulty));

    /* Outputs for Atomic SubSystem: '<S563>/EdgeFalling1' */
    /* Logic: '<S646>/AND' incorporates:
     *  UnitDelay: '<S646>/Unit Delay'
     */
    rtb_AND_hj3 = (rtb_AND_hj3 && (CDMR_ac_DW.UnitDelay_DSTATE_d3));

    /* Update for UnitDelay: '<S646>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_d3 = rtb_Logical8_h;

    /* End of Outputs for SubSystem: '<S563>/EdgeFalling1' */

    /* Logic: '<S563>/Logical5' incorporates:
     *  Logic: '<S231>/NOT4'
     */
    rtb_Logical8_h = (TmpSignalConversionAtTmpVM_FcnCallSubs_o || rtb_AND_hj3);

    /* Outputs for Atomic SubSystem: '<S645>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S645>/Counter Reset  Enabled ' */
    /* Switch: '<S652>/Switch1' incorporates:
     *  Logic: '<S645>/Fail Counter Reset'
     *  Logic: '<S645>/NOT6'
     *  Switch: '<S652>/Switch2'
     *  Switch: '<S653>/Switch1'
     *  UnitDelay: '<S645>/Unit Delay'
     *  UnitDelay: '<S645>/Unit Delay1'
     */
    if ((rtb_Logical8_h || (CDMR_ac_DW.UnitDelay_DSTATE_kn)) ||
            (CDMR_ac_DW.UnitDelay1_DSTATE_o))
    {
        /* Switch: '<S652>/Switch1' incorporates:
         *  Constant: '<S652>/Constant Value2'
         */
        VeCDMR_Cnt_PwrOutletPanelMod1Perf_FailCnt = 0U;

        /* Switch: '<S653>/Switch1' incorporates:
         *  Constant: '<S653>/Constant Value2'
         */
        VeCDMR_Cnt_PwrOutletPanelMod1Perf_SmpCnt = 0U;
    }
    else
    {
        if (rtb_AND_cqs && (VeCDMR_b_PwrOutletPanelMod1Perf_FaultCheck))
        {
            /* Switch: '<S652>/Switch1' incorporates:
             *  Constant: '<S652>/Constant Value1'
             *  Sum: '<S652>/Subtraction'
             *  Switch: '<S652>/Switch2'
             *  UnitDelay: '<S652>/Unit Delay'
             */
            VeCDMR_Cnt_PwrOutletPanelMod1Perf_FailCnt = (uint16)(((uint32)
                VeCDMR_Cnt_PwrOutletPanelMod1Perf_FailCnt) + 1U);
        }

        /* Switch: '<S653>/Switch2' */
        if (rtb_AND_cqs)
        {
            /* Switch: '<S653>/Switch1' incorporates:
             *  Constant: '<S653>/Constant Value1'
             *  Sum: '<S653>/Subtraction'
             *  Switch: '<S653>/Switch2'
             *  UnitDelay: '<S653>/Unit Delay'
             */
            VeCDMR_Cnt_PwrOutletPanelMod1Perf_SmpCnt = (uint16)(((uint32)
                VeCDMR_Cnt_PwrOutletPanelMod1Perf_SmpCnt) + 1U);
        }

        /* End of Switch: '<S653>/Switch2' */
    }

    /* End of Switch: '<S652>/Switch1' */
    /* End of Outputs for SubSystem: '<S645>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S645>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S645>/Greater Than or Equal ' incorporates:
     *  Constant: '<S554>/Calib'
     */
    CDMR_ac_DW.UnitDelay1_DSTATE_o = (VeCDMR_Cnt_PwrOutletPanelMod1Perf_FailCnt >=
        KeCDMR_Cnt_PwrOutletPanelMod1Perf_Fail);

    /* Logic: '<S645>/NOT5' incorporates:
     *  Constant: '<S555>/Calib'
     *  Logic: '<S645>/NOT3'
     *  RelationalOperator: '<S645>/Less Than  or Equal'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_kn = ((VeCDMR_Cnt_PwrOutletPanelMod1Perf_SmpCnt >=
        KeCDMR_Cnt_PwrOutletPanelMod1Perf_Smpl) &&
        (!CDMR_ac_DW.UnitDelay1_DSTATE_o));

    /* Switch: '<S658>/Switch1' incorporates:
     *  Constant: '<S651>/Constant Value'
     *  DataStoreWrite: '<S231>/Data Store Write4'
     *  Switch: '<S657>/Switch1'
     */
    if (TmpSignalConversionAtTmpVM_FcnCallSubs_i)
    {
        CDMR_ac_DW.NeCDMR_Cnt_PwrOutletPanelMod1Perf_MFOP = 0U;
    }
    else
    {
        if (CDMR_ac_DW.UnitDelay_DSTATE_kn)
        {
            /* MinMax: '<S651>/Minimum2' incorporates:
             *  DataStoreRead: '<S231>/Data Store Read3'
             *  Switch: '<S657>/Switch1'
             */
            if (VeCDMR_Cnt_PwrOutletPanelMod1Perf_FailCnt >
                    CDMR_ac_DW.NeCDMR_Cnt_PwrOutletPanelMod1Perf_MFOP)
            {
                /* DataStoreWrite: '<S231>/Data Store Write4' incorporates:
                 *  Switch: '<S657>/Switch1'
                 */
                CDMR_ac_DW.NeCDMR_Cnt_PwrOutletPanelMod1Perf_MFOP =
                    VeCDMR_Cnt_PwrOutletPanelMod1Perf_FailCnt;
            }

            /* End of MinMax: '<S651>/Minimum2' */
        }
    }

    /* End of Switch: '<S658>/Switch1' */

    /* Logic: '<S541>/AND' incorporates:
     *  Constant: '<S571>/Constant'
     *  Constant: '<S572>/Calib'
     *  RelationalOperator: '<S541>/Relational Operator'
     */
    VeCDMR_b_PwrOutletPanelMod1LmpCntrl_EnableCheck =
        ((((KeCDMR_b_Enbl_PwrOutletPanelMod1LmpCntrl) &&
           TmpSignalConversionAtTmpVM_FcnCallSub_ad) && (((uint32)
            CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallS_po2) ==
           CeVTLR_e_Active)) && rtb_Comparison2);

    /* RelationalOperator: '<S562>/Relational Operator3' incorporates:
     *  Constant: '<S562>/Constant3'
     *  S-Function (sfix_bitop): '<S562>/Bitwise Operator2'
     */
    rtb_AND_cqs = ((((uint32)CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_j)
                    & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S562>/EdgeFalling1' */
    /* Logic: '<S562>/Logical Operator' incorporates:
     *  Logic: '<S632>/OR1'
     */
    rtb_AND_h1 = !rtb_AND_cqs;

    /* End of Outputs for SubSystem: '<S562>/EdgeFalling1' */

    /* Logic: '<S562>/Logical1' incorporates:
     *  Constant: '<S558>/Calib'
     *  Constant: '<S562>/Constant1'
     *  Logic: '<S562>/Logical Operator'
     *  Logic: '<S562>/Logical10'
     *  Logic: '<S562>/Logical12'
     *  RelationalOperator: '<S562>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S562>/Bitwise Operator3'
     */
    rtb_AND_hj3 = ((VeCDMR_b_PwrOutletPanelMod1LmpCntrl_EnableCheck) &&
                   ((!KeCDMR_b_PwrOutletPanelMod1LmpCntrl_LatchEnbl) ||
                    (((((uint32)
                        CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_j) & 1U)
                      == 0U) || rtb_AND_h1)));

    /* RelationalOperator: '<S544>/Relational Operator' incorporates:
     *  RelationalOperator: '<S544>/Relational Operator7'
     *  RelationalOperator: '<S544>/Relational Operator8'
     *  VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120'
     */
    rtb_RelationalOperator_n_tmp =
        CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_ja;

    /* RelationalOperator: '<S544>/Relational Operator' incorporates:
     *  UnitDelay: '<S544>/Unit Delay'
     */
    rtb_OR1_dh = (rtb_RelationalOperator_n_tmp == CDMR_ac_DW.UnitDelay_DSTATE_bg);

    /* Outputs for Atomic SubSystem: '<S544>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S588>/EdgeRising' */
    /* Logic: '<S590>/AND' incorporates:
     *  Logic: '<S590>/OR1'
     *  UnitDelay: '<S590>/Unit Delay'
     */
    rtb_AND_am = (rtb_OR1_dh && (!CDMR_ac_DW.UnitDelay_DSTATE_ms));

    /* Update for UnitDelay: '<S590>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_ms = rtb_OR1_dh;

    /* End of Outputs for SubSystem: '<S588>/EdgeRising' */

    /* Switch: '<S588>/Switch1' incorporates:
     *  Constant: '<S587>/Calib'
     *  Constant: '<S588>/Constant Value'
     *  Constant: '<S588>/Constant Value1'
     *  Logic: '<S588>/OR'
     *  Logic: '<S588>/OR1'
     *  MinMax: '<S588>/Minimum'
     *  Sum: '<S588>/Summation'
     *  UnitDelay: '<S588>/Unit Delay'
     */
    if ((!rtb_OR1_dh) || rtb_AND_am)
    {
        CDMR_ac_DW.UnitDelay_DSTATE_g0 = 0U;
    }
    else if (KeCDMR_Cnt_SPP_LEDFdbckDbncTime < ((uint16)(((uint32)
                CDMR_ac_DW.UnitDelay_DSTATE_g0) + 1U)))
    {
        /* MinMax: '<S588>/Minimum' incorporates:
         *  Constant: '<S587>/Calib'
         */
        CDMR_ac_DW.UnitDelay_DSTATE_g0 = KeCDMR_Cnt_SPP_LEDFdbckDbncTime;
    }
    else
    {
        /* MinMax: '<S588>/Minimum' incorporates:
         *  Constant: '<S588>/Constant Value'
         *  Sum: '<S588>/Summation'
         *  UnitDelay: '<S588>/Unit Delay'
         */
        CDMR_ac_DW.UnitDelay_DSTATE_g0 = (uint16)(((uint32)
            CDMR_ac_DW.UnitDelay_DSTATE_g0) + 1U);
    }

    /* End of Switch: '<S588>/Switch1' */
    /* End of Outputs for SubSystem: '<S544>/Turn On Delay Sample' */

    /* RelationalOperator: '<S544>/Relational Operator6' incorporates:
     *  RelationalOperator: '<S544>/Relational Operator12'
     *  RelationalOperator: '<S544>/Relational Operator13'
     *  VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120'
     */
    rtb_RelationalOperator6_d_tmp =
        CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_hj;

    /* RelationalOperator: '<S544>/Relational Operator6' incorporates:
     *  UnitDelay: '<S544>/Unit Delay1'
     */
    rtb_AND_am = (rtb_RelationalOperator6_d_tmp ==
                  CDMR_ac_DW.UnitDelay1_DSTATE_ow);

    /* Outputs for Atomic SubSystem: '<S544>/Turn On Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S589>/EdgeRising' */
    /* Logic: '<S591>/AND' incorporates:
     *  Logic: '<S591>/OR1'
     *  UnitDelay: '<S591>/Unit Delay'
     */
    rtb_AND_ks = (rtb_AND_am && (!CDMR_ac_DW.UnitDelay_DSTATE_mz));

    /* Update for UnitDelay: '<S591>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_mz = rtb_AND_am;

    /* End of Outputs for SubSystem: '<S589>/EdgeRising' */

    /* Switch: '<S589>/Switch1' incorporates:
     *  Constant: '<S587>/Calib'
     *  Constant: '<S589>/Constant Value'
     *  Constant: '<S589>/Constant Value1'
     *  Logic: '<S589>/OR'
     *  Logic: '<S589>/OR1'
     *  MinMax: '<S589>/Minimum'
     *  Sum: '<S589>/Summation'
     *  UnitDelay: '<S589>/Unit Delay'
     */
    if ((!rtb_AND_am) || rtb_AND_ks)
    {
        CDMR_ac_DW.UnitDelay_DSTATE_oo = 0U;
    }
    else if (KeCDMR_Cnt_SPP_LEDFdbckDbncTime < ((uint16)(((uint32)
                CDMR_ac_DW.UnitDelay_DSTATE_oo) + 1U)))
    {
        /* MinMax: '<S589>/Minimum' incorporates:
         *  Constant: '<S587>/Calib'
         */
        CDMR_ac_DW.UnitDelay_DSTATE_oo = KeCDMR_Cnt_SPP_LEDFdbckDbncTime;
    }
    else
    {
        /* MinMax: '<S589>/Minimum' incorporates:
         *  Constant: '<S589>/Constant Value'
         *  Sum: '<S589>/Summation'
         *  UnitDelay: '<S589>/Unit Delay'
         */
        CDMR_ac_DW.UnitDelay_DSTATE_oo = (uint16)(((uint32)
            CDMR_ac_DW.UnitDelay_DSTATE_oo) + 1U);
    }

    /* End of Switch: '<S589>/Switch1' */
    /* End of Outputs for SubSystem: '<S544>/Turn On Delay Sample1' */

    /* RelationalOperator: '<S544>/Relational Operator2' incorporates:
     *  RelationalOperator: '<S544>/Relational Operator10'
     *  RelationalOperator: '<S544>/Relational Operator9'
     *  VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120'
     */
    VeCDMR_b_PwrOutletPanelMod1LmpCntrl_Faul =
        CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_me;

    /* RelationalOperator: '<S544>/Relational Operator1' incorporates:
     *  RelationalOperator: '<S544>/Relational Operator11'
     *  RelationalOperator: '<S544>/Relational Operator14'
     *  VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120'
     */
    VeCDMR_b_PwrOutletPanelMod1LmpCntrl_Fa_0 =
        CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_mm;

    /* Outputs for Atomic SubSystem: '<S544>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S544>/Turn On Delay Sample1' */
    /* Logic: '<S544>/OR1' incorporates:
     *  Constant: '<S575>/Constant'
     *  Constant: '<S576>/Constant'
     *  Constant: '<S577>/Constant'
     *  Constant: '<S578>/Constant'
     *  Constant: '<S579>/Constant'
     *  Constant: '<S580>/Constant'
     *  Constant: '<S581>/Constant'
     *  Constant: '<S582>/Constant'
     *  Constant: '<S583>/Constant'
     *  Constant: '<S584>/Constant'
     *  Constant: '<S585>/Constant'
     *  Constant: '<S586>/Constant'
     *  Constant: '<S587>/Calib'
     *  Logic: '<S544>/AND'
     *  Logic: '<S544>/AND1'
     *  Logic: '<S544>/AND2'
     *  Logic: '<S544>/AND3'
     *  Logic: '<S544>/AND4'
     *  Logic: '<S544>/AND5'
     *  Logic: '<S544>/OR'
     *  Logic: '<S544>/OR3'
     *  Logic: '<S544>/OR4'
     *  Logic: '<S544>/OR5'
     *  Logic: '<S544>/OR6'
     *  Logic: '<S588>/AND'
     *  Logic: '<S589>/AND'
     *  RelationalOperator: '<S544>/Relational Operator1'
     *  RelationalOperator: '<S544>/Relational Operator10'
     *  RelationalOperator: '<S544>/Relational Operator11'
     *  RelationalOperator: '<S544>/Relational Operator12'
     *  RelationalOperator: '<S544>/Relational Operator13'
     *  RelationalOperator: '<S544>/Relational Operator14'
     *  RelationalOperator: '<S544>/Relational Operator2'
     *  RelationalOperator: '<S544>/Relational Operator4'
     *  RelationalOperator: '<S544>/Relational Operator5'
     *  RelationalOperator: '<S544>/Relational Operator7'
     *  RelationalOperator: '<S544>/Relational Operator8'
     *  RelationalOperator: '<S544>/Relational Operator9'
     *  RelationalOperator: '<S588>/Greater  Than'
     *  RelationalOperator: '<S589>/Greater  Than'
     *  UnitDelay: '<S588>/Unit Delay'
     *  UnitDelay: '<S589>/Unit Delay'
     *  VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120'
     */
    VeCDMR_b_PwrOutletPanelMod1LmpCntrl_FaultCheck = ((((((uint32)
        VeCDMR_b_PwrOutletPanelMod1LmpCntrl_Faul) == CeCITR_e_CPIM_Ind_SNA) ||
        (((uint32)VeCDMR_b_PwrOutletPanelMod1LmpCntrl_Fa_0) ==
         CeCITR_e_CPIM_Ind_SNA)) || (((rtb_OR1_dh &&
        (CDMR_ac_DW.UnitDelay_DSTATE_g0 >= KeCDMR_Cnt_SPP_LEDFdbckDbncTime)) &&
        (((((uint32)rtb_RelationalOperator_n_tmp) == CeVTLR_e_Led_Off) &&
          (((uint32)VeCDMR_b_PwrOutletPanelMod1LmpCntrl_Faul) !=
           CeCITR_e_CPIM_Ind_Off)) || ((((uint32)rtb_RelationalOperator_n_tmp) ==
        CeVTLR_e_Led_On) && (((uint32)VeCDMR_b_PwrOutletPanelMod1LmpCntrl_Faul)
        != CeCITR_e_CPIM_Ind_On)))) || ((rtb_AND_am &&
        (CDMR_ac_DW.UnitDelay_DSTATE_oo >= KeCDMR_Cnt_SPP_LEDFdbckDbncTime)) &&
        (((((uint32)rtb_RelationalOperator6_d_tmp) == CeVTLR_e_Led_Off) &&
          (((uint32)VeCDMR_b_PwrOutletPanelMod1LmpCntrl_Fa_0) !=
           CeCITR_e_CPIM_Ind_Off)) || ((((uint32)rtb_RelationalOperator6_d_tmp) ==
        CeVTLR_e_Led_On) && (((uint32)VeCDMR_b_PwrOutletPanelMod1LmpCntrl_Fa_0)
        != CeCITR_e_CPIM_Ind_On)))))) || ((((uint32)
        CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_js) !=
        CeCITR_e_CPIM_LEDNormal) || (((uint32)
        CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_ks) !=
        CeCITR_e_CPIM_LEDNormal)));

    /* End of Outputs for SubSystem: '<S544>/Turn On Delay Sample1' */
    /* End of Outputs for SubSystem: '<S544>/Turn On Delay Sample' */

    /* Outputs for Atomic SubSystem: '<S562>/EdgeFalling1' */
    /* Logic: '<S632>/AND' incorporates:
     *  UnitDelay: '<S632>/Unit Delay'
     */
    rtb_AND_h1 = (rtb_AND_h1 && (CDMR_ac_DW.UnitDelay_DSTATE_os));

    /* Update for UnitDelay: '<S632>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_os = rtb_AND_cqs;

    /* End of Outputs for SubSystem: '<S562>/EdgeFalling1' */

    /* Logic: '<S562>/Logical5' incorporates:
     *  Logic: '<S231>/NOT4'
     */
    rtb_AND_cqs = (TmpSignalConversionAtTmpVM_FcnCallSubs_o || rtb_AND_h1);

    /* Outputs for Atomic SubSystem: '<S631>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S631>/Counter Reset  Enabled ' */
    /* Switch: '<S638>/Switch1' incorporates:
     *  Logic: '<S631>/Fail Counter Reset'
     *  Logic: '<S631>/NOT6'
     *  Switch: '<S638>/Switch2'
     *  Switch: '<S639>/Switch1'
     *  UnitDelay: '<S631>/Unit Delay'
     *  UnitDelay: '<S631>/Unit Delay1'
     */
    if ((rtb_AND_cqs || (CDMR_ac_DW.UnitDelay_DSTATE_oe)) ||
            (CDMR_ac_DW.UnitDelay1_DSTATE_f))
    {
        /* Switch: '<S638>/Switch1' incorporates:
         *  Constant: '<S638>/Constant Value2'
         */
        VeCDMR_Cnt_PwrOutletPanelMod1LmpCntrl_FailCnt = 0U;

        /* Switch: '<S639>/Switch1' incorporates:
         *  Constant: '<S639>/Constant Value2'
         */
        VeCDMR_Cnt_PwrOutletPanelMod1LmpCntrl_SmpCnt = 0U;
    }
    else
    {
        if (rtb_AND_hj3 && (VeCDMR_b_PwrOutletPanelMod1LmpCntrl_FaultCheck))
        {
            /* Switch: '<S638>/Switch1' incorporates:
             *  Constant: '<S638>/Constant Value1'
             *  Sum: '<S638>/Subtraction'
             *  Switch: '<S638>/Switch2'
             *  UnitDelay: '<S638>/Unit Delay'
             */
            VeCDMR_Cnt_PwrOutletPanelMod1LmpCntrl_FailCnt = (uint16)(((uint32)
                VeCDMR_Cnt_PwrOutletPanelMod1LmpCntrl_FailCnt) + 1U);
        }

        /* Switch: '<S639>/Switch2' */
        if (rtb_AND_hj3)
        {
            /* Switch: '<S639>/Switch1' incorporates:
             *  Constant: '<S639>/Constant Value1'
             *  Sum: '<S639>/Subtraction'
             *  Switch: '<S639>/Switch2'
             *  UnitDelay: '<S639>/Unit Delay'
             */
            VeCDMR_Cnt_PwrOutletPanelMod1LmpCntrl_SmpCnt = (uint16)(((uint32)
                VeCDMR_Cnt_PwrOutletPanelMod1LmpCntrl_SmpCnt) + 1U);
        }

        /* End of Switch: '<S639>/Switch2' */
    }

    /* End of Switch: '<S638>/Switch1' */
    /* End of Outputs for SubSystem: '<S631>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S631>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S631>/Greater Than or Equal ' incorporates:
     *  Constant: '<S552>/Calib'
     */
    CDMR_ac_DW.UnitDelay1_DSTATE_f =
        (VeCDMR_Cnt_PwrOutletPanelMod1LmpCntrl_FailCnt >=
         KeCDMR_Cnt_PwrOutletPanelMod1LmpCntrl_Fail);

    /* Logic: '<S631>/NOT5' incorporates:
     *  Constant: '<S553>/Calib'
     *  Logic: '<S631>/NOT3'
     *  RelationalOperator: '<S631>/Less Than  or Equal'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_oe =
        ((VeCDMR_Cnt_PwrOutletPanelMod1LmpCntrl_SmpCnt >=
          KeCDMR_Cnt_PwrOutletPanelMod1LmpCntrl_Smpl) &&
         (!CDMR_ac_DW.UnitDelay1_DSTATE_f));

    /* Switch: '<S644>/Switch1' incorporates:
     *  Constant: '<S637>/Constant Value'
     *  DataStoreWrite: '<S231>/Data Store Write5'
     *  Switch: '<S643>/Switch1'
     */
    if (TmpSignalConversionAtTmpVM_FcnCallSubs_i)
    {
        CDMR_ac_DW.NeCDMR_Cnt_PwrOutletPanelMod1LmpCntrl_MF = 0U;
    }
    else
    {
        if (CDMR_ac_DW.UnitDelay_DSTATE_oe)
        {
            /* MinMax: '<S637>/Minimum2' incorporates:
             *  DataStoreRead: '<S231>/Data Store Read5'
             *  Switch: '<S643>/Switch1'
             */
            if (VeCDMR_Cnt_PwrOutletPanelMod1LmpCntrl_FailCnt >
                    CDMR_ac_DW.NeCDMR_Cnt_PwrOutletPanelMod1LmpCntrl_MF)
            {
                /* DataStoreWrite: '<S231>/Data Store Write5' incorporates:
                 *  Switch: '<S643>/Switch1'
                 */
                CDMR_ac_DW.NeCDMR_Cnt_PwrOutletPanelMod1LmpCntrl_MF =
                    VeCDMR_Cnt_PwrOutletPanelMod1LmpCntrl_FailCnt;
            }

            /* End of MinMax: '<S637>/Minimum2' */
        }
    }

    /* End of Switch: '<S644>/Switch1' */

    /* Logic: '<S542>/AND' incorporates:
     *  Constant: '<S573>/Constant'
     *  Constant: '<S574>/Calib'
     *  RelationalOperator: '<S542>/Relational Operator'
     */
    VeCDMR_b_PwrOutletPanelMod1InACPwrCktPerf_EnableCheck =
        ((((KeCDMR_b_Enbl_PwrOutletPanelMod1InACPwrCktPerf) &&
           TmpSignalConversionAtTmpVM_FcnCallSub_ad) && (((uint32)
            CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallS_po2) ==
           CeVTLR_e_Active)) && rtb_Comparison2);

    /* RelationalOperator: '<S561>/Relational Operator3' incorporates:
     *  Constant: '<S561>/Constant3'
     */
    rtb_AND_hj3 = (VeCDMR_b_PwrOutletPanelMod1DigCommBus__3 == 0U);

    /* Outputs for Atomic SubSystem: '<S561>/EdgeFalling1' */
    /* Logic: '<S561>/Logical Operator' incorporates:
     *  Logic: '<S618>/OR1'
     */
    rtb_AND_h1 = !rtb_AND_hj3;

    /* End of Outputs for SubSystem: '<S561>/EdgeFalling1' */

    /* Logic: '<S561>/Logical1' incorporates:
     *  Constant: '<S557>/Calib'
     *  Constant: '<S561>/Constant1'
     *  Logic: '<S561>/Logical Operator'
     *  Logic: '<S561>/Logical10'
     *  Logic: '<S561>/Logical12'
     *  RelationalOperator: '<S561>/Relational Operator1'
     */
    rtb_Comparison2 = ((VeCDMR_b_PwrOutletPanelMod1InACPwrCktPerf_EnableCheck) &&
                       ((!KeCDMR_b_PwrOutletPanelMod1InACPwrCktPerf_LatchEnbl) ||
                        ((VeCDMR_b_PwrOutletPanelMod1DigCommBus__4 == 0U) ||
                         rtb_AND_h1)));

    /* Outputs for Atomic SubSystem: '<S561>/EdgeFalling1' */
    /* Logic: '<S618>/AND' incorporates:
     *  UnitDelay: '<S618>/Unit Delay'
     */
    rtb_AND_h1 = (rtb_AND_h1 && (CDMR_ac_DW.UnitDelay_DSTATE_apa));

    /* Update for UnitDelay: '<S618>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_apa = rtb_AND_hj3;

    /* End of Outputs for SubSystem: '<S561>/EdgeFalling1' */

    /* Logic: '<S561>/Logical5' incorporates:
     *  Logic: '<S231>/NOT4'
     */
    TmpSignalConversionAtTmpVM_FcnCallSubs_o =
        (TmpSignalConversionAtTmpVM_FcnCallSubs_o || rtb_AND_h1);

    /* Outputs for Atomic SubSystem: '<S617>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S617>/Counter Reset  Enabled ' */
    /* Switch: '<S624>/Switch1' incorporates:
     *  Logic: '<S617>/Fail Counter Reset'
     *  Logic: '<S617>/NOT6'
     *  Switch: '<S624>/Switch2'
     *  Switch: '<S625>/Switch1'
     *  UnitDelay: '<S617>/Unit Delay'
     *  UnitDelay: '<S617>/Unit Delay1'
     */
    if ((TmpSignalConversionAtTmpVM_FcnCallSubs_o ||
            (CDMR_ac_DW.UnitDelay_DSTATE_ep)) || (CDMR_ac_DW.UnitDelay1_DSTATE_e))
    {
        /* Switch: '<S624>/Switch1' incorporates:
         *  Constant: '<S624>/Constant Value2'
         */
        VeCDMR_Cnt_PwrOutletPanelMod1InACPwrCktPerf_FailCnt = 0U;

        /* Switch: '<S625>/Switch1' incorporates:
         *  Constant: '<S625>/Constant Value2'
         */
        VeCDMR_Cnt_PwrOutletPanelMod1InACPwrCktPerf_SmpCnt = 0U;
    }
    else
    {
        if (rtb_Comparison2 &&
                (VeCDMR_b_PwrOutletPanelMod1InACPwrCktPerf_FaultCheck))
        {
            /* Switch: '<S624>/Switch1' incorporates:
             *  Constant: '<S624>/Constant Value1'
             *  Sum: '<S624>/Subtraction'
             *  Switch: '<S624>/Switch2'
             *  UnitDelay: '<S624>/Unit Delay'
             */
            VeCDMR_Cnt_PwrOutletPanelMod1InACPwrCktPerf_FailCnt = (uint16)
                (((uint32)VeCDMR_Cnt_PwrOutletPanelMod1InACPwrCktPerf_FailCnt) +
                 1U);
        }

        /* Switch: '<S625>/Switch2' */
        if (rtb_Comparison2)
        {
            /* Switch: '<S625>/Switch1' incorporates:
             *  Constant: '<S625>/Constant Value1'
             *  Sum: '<S625>/Subtraction'
             *  Switch: '<S625>/Switch2'
             *  UnitDelay: '<S625>/Unit Delay'
             */
            VeCDMR_Cnt_PwrOutletPanelMod1InACPwrCktPerf_SmpCnt = (uint16)
                (((uint32)VeCDMR_Cnt_PwrOutletPanelMod1InACPwrCktPerf_SmpCnt) +
                 1U);
        }

        /* End of Switch: '<S625>/Switch2' */
    }

    /* End of Switch: '<S624>/Switch1' */
    /* End of Outputs for SubSystem: '<S617>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S617>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S617>/Greater Than or Equal ' incorporates:
     *  Constant: '<S550>/Calib'
     */
    CDMR_ac_DW.UnitDelay1_DSTATE_e =
        (VeCDMR_Cnt_PwrOutletPanelMod1InACPwrCktPerf_FailCnt >=
         KeCDMR_Cnt_PwrOutletPanelMod1InACPwrCktPerf_Fail);

    /* Logic: '<S617>/NOT5' incorporates:
     *  Constant: '<S551>/Calib'
     *  Logic: '<S617>/NOT3'
     *  RelationalOperator: '<S617>/Less Than  or Equal'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_ep =
        ((VeCDMR_Cnt_PwrOutletPanelMod1InACPwrCktPerf_SmpCnt >=
          KeCDMR_Cnt_PwrOutletPanelMod1InACPwrCktPerf_Smpl) &&
         (!CDMR_ac_DW.UnitDelay1_DSTATE_e));

    /* Switch: '<S630>/Switch1' incorporates:
     *  Constant: '<S623>/Constant Value'
     *  DataStoreWrite: '<S231>/Data Store Write7'
     *  Switch: '<S629>/Switch1'
     */
    if (TmpSignalConversionAtTmpVM_FcnCallSubs_i)
    {
        CDMR_ac_DW.NeCDMR_Cnt_PwrOutletPanelMod1InACPwrCktP = 0U;
    }
    else
    {
        if (CDMR_ac_DW.UnitDelay_DSTATE_ep)
        {
            /* MinMax: '<S623>/Minimum2' incorporates:
             *  DataStoreRead: '<S231>/Data Store Read7'
             *  Switch: '<S629>/Switch1'
             */
            if (VeCDMR_Cnt_PwrOutletPanelMod1InACPwrCktPerf_FailCnt >
                    CDMR_ac_DW.NeCDMR_Cnt_PwrOutletPanelMod1InACPwrCktP)
            {
                /* DataStoreWrite: '<S231>/Data Store Write7' incorporates:
                 *  Switch: '<S629>/Switch1'
                 */
                CDMR_ac_DW.NeCDMR_Cnt_PwrOutletPanelMod1InACPwrCktP =
                    VeCDMR_Cnt_PwrOutletPanelMod1InACPwrCktPerf_FailCnt;
            }

            /* End of MinMax: '<S623>/Minimum2' */
        }
    }

    /* End of Switch: '<S630>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S547>/EdgeRising2' */
    /* Logic: '<S600>/AND' incorporates:
     *  Logic: '<S600>/OR1'
     *  UnitDelay: '<S547>/Unit Delay4'
     *  UnitDelay: '<S600>/Unit Delay'
     */
    CDMR_ac_DW.UnitDelay4_DSTATE_j =
        ((CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_b) &&
         (!CDMR_ac_DW.UnitDelay_DSTATE_dr));

    /* Update for UnitDelay: '<S600>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_dr =
        CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_b;

    /* End of Outputs for SubSystem: '<S547>/EdgeRising2' */

    /* Outputs for Enabled SubSystem: '<S560>/Fail' */
    CDMR_ac_Fail(CDMR_ac_DW.UnitDelay1_DSTATE_cp, &CDMR_ac_B.Merge_m4);

    /* End of Outputs for SubSystem: '<S560>/Fail' */

    /* Outputs for Enabled SubSystem: '<S560>/Init' */
    CDMR_ac_Init_b(rtb_Logical5_g, &CDMR_ac_B.Merge_m4);

    /* End of Outputs for SubSystem: '<S560>/Init' */

    /* Outputs for Enabled SubSystem: '<S560>/Pass' */
    CDMR_ac_Pass(CDMR_ac_DW.UnitDelay_DSTATE_kb, &CDMR_ac_B.Merge_m4);

    /* End of Outputs for SubSystem: '<S560>/Pass' */

    /* RelationalOperator: '<S560>/Relational Operator' incorporates:
     *  Constant: '<S605>/Constant'
     *  Merge: '<S560>/Merge'
     */
    VeCDMR_b_PwrOutletPanelMod1DigCommBus_FltDtct = (((uint32)CDMR_ac_B.Merge_m4)
        == CeDFIB_e_Fail);

    /* Outputs for Enabled SubSystem: '<S561>/Fail' */
    CDMR_ac_Fail(CDMR_ac_DW.UnitDelay1_DSTATE_e, &CDMR_ac_B.Merge_c);

    /* End of Outputs for SubSystem: '<S561>/Fail' */

    /* Outputs for Enabled SubSystem: '<S561>/Init' */
    CDMR_ac_Init_b(TmpSignalConversionAtTmpVM_FcnCallSubs_o, &CDMR_ac_B.Merge_c);

    /* End of Outputs for SubSystem: '<S561>/Init' */

    /* Outputs for Enabled SubSystem: '<S561>/Pass' */
    CDMR_ac_Pass(CDMR_ac_DW.UnitDelay_DSTATE_ep, &CDMR_ac_B.Merge_c);

    /* End of Outputs for SubSystem: '<S561>/Pass' */

    /* RelationalOperator: '<S561>/Relational Operator' incorporates:
     *  Constant: '<S619>/Constant'
     *  Merge: '<S561>/Merge'
     */
    VeCDMR_b_PwrOutletPanelMod1InACPwrCktPerf_FltDtct = (((uint32)
        CDMR_ac_B.Merge_c) == CeDFIB_e_Fail);

    /* Outputs for Enabled SubSystem: '<S562>/Fail' */
    CDMR_ac_Fail(CDMR_ac_DW.UnitDelay1_DSTATE_f, &CDMR_ac_B.Merge_cm);

    /* End of Outputs for SubSystem: '<S562>/Fail' */

    /* Outputs for Enabled SubSystem: '<S562>/Init' */
    CDMR_ac_Init_b(rtb_AND_cqs, &CDMR_ac_B.Merge_cm);

    /* End of Outputs for SubSystem: '<S562>/Init' */

    /* Outputs for Enabled SubSystem: '<S562>/Pass' */
    CDMR_ac_Pass(CDMR_ac_DW.UnitDelay_DSTATE_oe, &CDMR_ac_B.Merge_cm);

    /* End of Outputs for SubSystem: '<S562>/Pass' */

    /* RelationalOperator: '<S562>/Relational Operator' incorporates:
     *  Constant: '<S633>/Constant'
     *  Merge: '<S562>/Merge'
     */
    VeCDMR_b_PwrOutletPanelMod1LmpCntrl_FltDtct = (((uint32)CDMR_ac_B.Merge_cm) ==
        CeDFIB_e_Fail);

    /* Outputs for Enabled SubSystem: '<S563>/Fail' */
    CDMR_ac_Fail(CDMR_ac_DW.UnitDelay1_DSTATE_o, &CDMR_ac_B.Merge_a);

    /* End of Outputs for SubSystem: '<S563>/Fail' */

    /* Outputs for Enabled SubSystem: '<S563>/Init' */
    CDMR_ac_Init_b(rtb_Logical8_h, &CDMR_ac_B.Merge_a);

    /* End of Outputs for SubSystem: '<S563>/Init' */

    /* Outputs for Enabled SubSystem: '<S563>/Pass' */
    CDMR_ac_Pass(CDMR_ac_DW.UnitDelay_DSTATE_kn, &CDMR_ac_B.Merge_a);

    /* End of Outputs for SubSystem: '<S563>/Pass' */

    /* RelationalOperator: '<S563>/Relational Operator' incorporates:
     *  Constant: '<S647>/Constant'
     *  Merge: '<S563>/Merge'
     */
    VeCDMR_b_PwrOutletPanelMod1Perf_FltDtct = (((uint32)CDMR_ac_B.Merge_a) ==
        CeDFIB_e_Fail);

    /* Update for UnitDelay: '<S544>/Unit Delay' incorporates:
     *  VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_bg =
        CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_ja;

    /* Update for UnitDelay: '<S544>/Unit Delay1' incorporates:
     *  VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120'
     */
    CDMR_ac_DW.UnitDelay1_DSTATE_ow =
        CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_hj;

    /* End of Outputs for SubSystem: '<S2>/OnBoardTrunkPP_IDCM_Diag' */
#endif

#if Rte_SysCon_Variant_CDMR_3

    /* Outputs for Function Call SubSystem: '<S2>/OnBoardFrunkPPDiag' */

    /* RelationalOperator: '<S230>/Comparison12' incorporates:
     *  Constant: '<S422>/Constant'
     *  VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120'
     */
    rtb_Logical5_g = (((uint32)
                       CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_f5) !=
                      CePMTR_e_DISBL_All_Thrml);

    /* Logic: '<S418>/AND' incorporates:
     *  Constant: '<S444>/Constant'
     *  Constant: '<S445>/Calib'
     *  RelationalOperator: '<S418>/Relational Operator'
     */
    VeCDMR_b_PwrOutletPanelMod2Perf_EnableCheck =
        ((((KeCDMR_b_Enbl_PwrOutletPanelMod2Perf) &&
           TmpSignalConversionAtTmpVM_FcnCallSub_ad) && (((uint32)
            CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_bl) ==
           CeVTLR_e_Active_Frunk)) && rtb_Logical5_g);

    /* S-Function (sfix_bitop): '<S443>/Bitwise Operator2' incorporates:
     *  S-Function (sfix_bitop): '<S448>/Bitwise Operator1'
     */
    VeCDMR_b_PwrOutletPanelMod1DigCommBus_En = ((uint32)
        CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_o) & 64U;

    /* RelationalOperator: '<S443>/Relational Operator3' incorporates:
     *  Constant: '<S443>/Constant3'
     *  S-Function (sfix_bitop): '<S443>/Bitwise Operator2'
     */
    rtb_Comparison2 = (VeCDMR_b_PwrOutletPanelMod1DigCommBus_En == 0U);

    /* Outputs for Atomic SubSystem: '<S443>/EdgeFalling1' */
    /* Logic: '<S443>/Logical Operator' incorporates:
     *  Logic: '<S526>/OR1'
     */
    rtb_AND_cqs = !rtb_Comparison2;

    /* End of Outputs for SubSystem: '<S443>/EdgeFalling1' */

    /* S-Function (sfix_bitop): '<S443>/Bitwise Operator3' incorporates:
     *  S-Function (sfix_bitop): '<S448>/Bitwise Operator2'
     */
    VeCDMR_b_PwrOutletPanelMod1DigCommBus__0 = ((uint32)
        CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_o) & 1U;

    /* Logic: '<S443>/Logical1' incorporates:
     *  Constant: '<S438>/Calib'
     *  Constant: '<S443>/Constant1'
     *  Logic: '<S443>/Logical Operator'
     *  Logic: '<S443>/Logical10'
     *  Logic: '<S443>/Logical12'
     *  RelationalOperator: '<S443>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S443>/Bitwise Operator3'
     */
    rtb_Logical8_h = ((VeCDMR_b_PwrOutletPanelMod2Perf_EnableCheck) &&
                      ((!KeCDMR_b_PwrOutletPanelMod2Perf_LatchEnbl) ||
                       ((VeCDMR_b_PwrOutletPanelMod1DigCommBus__0 == 0U) ||
                        rtb_AND_cqs)));

    /* Logic: '<S424>/AND5' incorporates:
     *  Constant: '<S472>/Calib'
     *  Logic: '<S424>/NOT2'
     *  RelationalOperator: '<S424>/Relational Operator7'
     */
    VeCDMR_b_PwrOutletPanelMod2InACPwrCktPerf_FaultCheck =
        (((CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSubsy >
           KeCDMR_U_ACOutVoltageL1DtctThrshld) &&
          (CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_a4)) &&
         (!CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_po));

    /* Abs: '<S425>/Abs1' incorporates:
     *  Sum: '<S425>/Add'
     */
    rtb_Abs1_b = fabsf(CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_d -
                       CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_n);

    /* Outputs for Atomic SubSystem: '<S425>/Protected Division1' */
    /* Switch: '<S477>/Switch1' incorporates:
     *  Constant: '<S477>/Constant Value'
     *  Constant: '<S477>/Constant Value1'
     *  Constant: '<S477>/Constant Value2'
     *  Logic: '<S477>/AND'
     *  RelationalOperator: '<S477>/Greater Than or Equal '
     *  RelationalOperator: '<S477>/Not Equal'
     *  RelationalOperator: '<S477>/Not Equal1'
     *  Switch: '<S477>/Switch2'
     */
    if ((rtb_Abs1_b != 0.0F) &&
            (CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_d != 0.0F))
    {
        /* Switch: '<S477>/Switch1' incorporates:
         *  Product: '<S477>/Division'
         */
        rtb_Abs1_b /= CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_d;
    }
    else if (rtb_Abs1_b > 0.0F)
    {
        /* Switch: '<S477>/Switch2' incorporates:
         *  Constant: '<S477>/MAXFLOAT'
         *  Switch: '<S477>/Switch1'
         */
        rtb_Abs1_b = 3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S477>/Switch1' incorporates:
         *  Constant: '<S477>/Constant Value4'
         *  Switch: '<S477>/Switch2'
         *  Switch: '<S477>/Switch3'
         */
        rtb_Abs1_b = 0.0F;
    }

    /* End of Switch: '<S477>/Switch1' */
    /* End of Outputs for SubSystem: '<S425>/Protected Division1' */

    /* Product: '<S425>/Product' incorporates:
     *  Constant: '<S425>/Constant1'
     */
    VeCDMR_Pct_PP1_L1_CurrPct = rtb_Abs1_b * 100.0F;

    /* Outputs for Atomic SubSystem: '<S425>/Stop Watch Reset Enabled' */
    /* Switch: '<S478>/Switch2' incorporates:
     *  Constant: '<S475>/Calib'
     *  Constant: '<S478>/Constant Value2'
     *  Logic: '<S425>/NOT2'
     *  RelationalOperator: '<S425>/Relational Operator8'
     *  Switch: '<S478>/Switch'
     *  UnitDelay: '<S478>/Unit Delay'
     */
    if (VeCDMR_Pct_PP1_L1_CurrPct < KeCDMR_Pct_ACOutCurrL1DiffLmt)
    {
        CDMR_ac_DW.UnitDelay_DSTATE = 0.0F;
    }
    else
    {
        /* UnitDelay: '<S478>/Unit Delay' incorporates:
         *  Constant: '<S473>/Calib'
         *  Sum: '<S478>/Subtraction'
         *  Switch: '<S478>/Switch2'
         */
        CDMR_ac_DW.UnitDelay_DSTATE += HeCDMR_t_MedTEH;
    }

    /* End of Switch: '<S478>/Switch2' */
    /* End of Outputs for SubSystem: '<S425>/Stop Watch Reset Enabled' */

    /* RelationalOperator: '<S425>/Relational Operator5' incorporates:
     *  Constant: '<S476>/Calib'
     *  UnitDelay: '<S478>/Unit Delay'
     */
    VeCDMR_b_PP1L1CrrntDifflLmtExcdd = (CDMR_ac_DW.UnitDelay_DSTATE >
        KeCDMR_t_PPCurrSnsrFltThrshld);

    /* RelationalOperator: '<S425>/Relational Operator6' incorporates:
     *  Constant: '<S474>/Calib'
     */
    VeCDMR_b_IDCML1EnoughACCurrnt =
        (CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_d >
         KeCDMR_I_IDCMACOutCurrentChckThrsld);

    /* Logic: '<S425>/AND2' */
    VeCDMR_b_PP1L1CurrentSensorFaulty = ((VeCDMR_b_PP1L1CrrntDifflLmtExcdd) &&
        (VeCDMR_b_IDCML1EnoughACCurrnt));

    /* Logic: '<S425>/AND' */
    VeCDMR_b_PwrOutletPanelMod2Perf_FaultCheck =
        ((VeCDMR_b_PwrOutletPanelMod2InACPwrCktPerf_FaultCheck) ||
         (VeCDMR_b_PP1L1CurrentSensorFaulty));

    /* Logic: '<S439>/NOT4' */
    TmpSignalConversionAtTmpVM_FcnCallSubs_o =
        (TmpSignalConversionAtTmpVM_FcnCallSubs_a ||
         TmpSignalConversionAtTmpVM_FcnCallSubs_i);

    /* Outputs for Atomic SubSystem: '<S443>/EdgeFalling1' */
    /* Logic: '<S526>/AND' incorporates:
     *  UnitDelay: '<S526>/Unit Delay'
     */
    TmpSignalConversionAtTmpVM_FcnCallSubs_a = (rtb_AND_cqs &&
        (CDMR_ac_DW.UnitDelay_DSTATE_k0));

    /* Update for UnitDelay: '<S526>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_k0 = rtb_Comparison2;

    /* End of Outputs for SubSystem: '<S443>/EdgeFalling1' */

    /* Logic: '<S443>/Logical5' incorporates:
     *  Logic: '<S439>/NOT4'
     */
    TmpSignalConversionAtTmpVM_FcnCallSubs_a =
        (TmpSignalConversionAtTmpVM_FcnCallSubs_o ||
         TmpSignalConversionAtTmpVM_FcnCallSubs_a);

    /* Outputs for Atomic SubSystem: '<S525>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S525>/Counter Reset  Enabled ' */
    /* Switch: '<S532>/Switch1' incorporates:
     *  Logic: '<S525>/Fail Counter Reset'
     *  Logic: '<S525>/NOT6'
     *  Switch: '<S532>/Switch2'
     *  Switch: '<S533>/Switch1'
     *  UnitDelay: '<S525>/Unit Delay'
     *  UnitDelay: '<S525>/Unit Delay1'
     */
    if ((TmpSignalConversionAtTmpVM_FcnCallSubs_a ||
            (CDMR_ac_DW.UnitDelay_DSTATE_n0)) || (CDMR_ac_DW.UnitDelay1_DSTATE))
    {
        /* Switch: '<S532>/Switch1' incorporates:
         *  Constant: '<S532>/Constant Value2'
         */
        VeCDMR_Cnt_PwrOutletPanelMod2Perf_FailCnt = 0U;

        /* Switch: '<S533>/Switch1' incorporates:
         *  Constant: '<S533>/Constant Value2'
         */
        VeCDMR_Cnt_PwrOutletPanelMod2Perf_SmpCnt = 0U;
    }
    else
    {
        if (rtb_Logical8_h && (VeCDMR_b_PwrOutletPanelMod2Perf_FaultCheck))
        {
            /* Switch: '<S532>/Switch1' incorporates:
             *  Constant: '<S532>/Constant Value1'
             *  Sum: '<S532>/Subtraction'
             *  Switch: '<S532>/Switch2'
             *  UnitDelay: '<S532>/Unit Delay'
             */
            VeCDMR_Cnt_PwrOutletPanelMod2Perf_FailCnt = (uint16)(((uint32)
                VeCDMR_Cnt_PwrOutletPanelMod2Perf_FailCnt) + 1U);
        }

        /* Switch: '<S533>/Switch2' */
        if (rtb_Logical8_h)
        {
            /* Switch: '<S533>/Switch1' incorporates:
             *  Constant: '<S533>/Constant Value1'
             *  Sum: '<S533>/Subtraction'
             *  Switch: '<S533>/Switch2'
             *  UnitDelay: '<S533>/Unit Delay'
             */
            VeCDMR_Cnt_PwrOutletPanelMod2Perf_SmpCnt = (uint16)(((uint32)
                VeCDMR_Cnt_PwrOutletPanelMod2Perf_SmpCnt) + 1U);
        }

        /* End of Switch: '<S533>/Switch2' */
    }

    /* End of Switch: '<S532>/Switch1' */
    /* End of Outputs for SubSystem: '<S525>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S525>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S525>/Greater Than or Equal ' incorporates:
     *  Constant: '<S433>/Calib'
     */
    CDMR_ac_DW.UnitDelay1_DSTATE = (VeCDMR_Cnt_PwrOutletPanelMod2Perf_FailCnt >=
        KeCDMR_Cnt_PwrOutletPanelMod2Perf_Fail);

    /* Logic: '<S525>/NOT5' incorporates:
     *  Constant: '<S434>/Calib'
     *  Logic: '<S525>/NOT3'
     *  RelationalOperator: '<S525>/Less Than  or Equal'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_n0 = ((VeCDMR_Cnt_PwrOutletPanelMod2Perf_SmpCnt >=
        KeCDMR_Cnt_PwrOutletPanelMod2Perf_Smpl) &&
        (!CDMR_ac_DW.UnitDelay1_DSTATE));

    /* Switch: '<S538>/Switch1' incorporates:
     *  Constant: '<S531>/Constant Value'
     *  DataStoreWrite: '<S230>/Data Store Write1'
     *  Switch: '<S537>/Switch1'
     */
    if (TmpSignalConversionAtTmpVM_FcnCallSubs_i)
    {
        CDMR_ac_DW.NeCDMR_Cnt_PwrOutletPanelMod2Perf_MFOP = 0U;
    }
    else
    {
        if (CDMR_ac_DW.UnitDelay_DSTATE_n0)
        {
            /* MinMax: '<S531>/Minimum2' incorporates:
             *  DataStoreRead: '<S230>/Data Store Read1'
             *  Switch: '<S537>/Switch1'
             */
            if (VeCDMR_Cnt_PwrOutletPanelMod2Perf_FailCnt >
                    CDMR_ac_DW.NeCDMR_Cnt_PwrOutletPanelMod2Perf_MFOP)
            {
                /* DataStoreWrite: '<S230>/Data Store Write1' incorporates:
                 *  Switch: '<S537>/Switch1'
                 */
                CDMR_ac_DW.NeCDMR_Cnt_PwrOutletPanelMod2Perf_MFOP =
                    VeCDMR_Cnt_PwrOutletPanelMod2Perf_FailCnt;
            }

            /* End of MinMax: '<S531>/Minimum2' */
        }
    }

    /* End of Switch: '<S538>/Switch1' */

    /* S-Function (sfix_bitop): '<S450>/Bitwise Operator1' incorporates:
     *  S-Function (sfix_bitop): '<S442>/Bitwise Operator2'
     */
    VeCDMR_b_PwrOutletPanelMod1DigCommBus__1 = ((uint32)
        CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_m) & 64U;

    /* S-Function (sfix_bitop): '<S450>/Bitwise Operator2' incorporates:
     *  S-Function (sfix_bitop): '<S442>/Bitwise Operator3'
     */
    VeCDMR_b_PwrOutletPanelMod1DigCommBus__2 = ((uint32)
        CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_m) & 1U;

    /* S-Function (sfix_bitop): '<S449>/Bitwise Operator1' incorporates:
     *  S-Function (sfix_bitop): '<S441>/Bitwise Operator2'
     */
    VeCDMR_b_PwrOutletPanelMod1DigCommBus__3 = ((uint32)
        CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_f) & 64U;

    /* S-Function (sfix_bitop): '<S449>/Bitwise Operator2' incorporates:
     *  S-Function (sfix_bitop): '<S441>/Bitwise Operator3'
     */
    VeCDMR_b_PwrOutletPanelMod1DigCommBus__4 = ((uint32)
        CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_f) & 1U;

    /* Logic: '<S419>/AND' incorporates:
     *  Constant: '<S446>/Constant'
     *  Constant: '<S447>/Calib'
     *  Constant: '<S448>/Constant1'
     *  Constant: '<S448>/Constant2'
     *  Constant: '<S449>/Constant1'
     *  Constant: '<S449>/Constant2'
     *  Constant: '<S450>/Constant1'
     *  Constant: '<S450>/Constant2'
     *  Logic: '<S419>/NOT'
     *  Logic: '<S419>/OR'
     *  Logic: '<S448>/Logical Operator'
     *  Logic: '<S449>/Logical Operator'
     *  Logic: '<S450>/Logical Operator'
     *  RelationalOperator: '<S419>/Relational Operator'
     *  RelationalOperator: '<S448>/Relational Operator1'
     *  RelationalOperator: '<S448>/Relational Operator2'
     *  RelationalOperator: '<S449>/Relational Operator1'
     *  RelationalOperator: '<S449>/Relational Operator2'
     *  RelationalOperator: '<S450>/Relational Operator1'
     *  RelationalOperator: '<S450>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S449>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S449>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S450>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S450>/Bitwise Operator2'
     */
    VeCDMR_b_PwrOutletPanelMod2DigCommBus_EnableCheck =
        (((((KeCDMR_b_Enbl_PwrOutletPanelMod2DigCommBus) && (((uint32)
              CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_bl) ==
             CeVTLR_e_Active_Frunk)) && TmpSignalConversionAtTmpVM_FcnCallSub_ad)
          && rtb_Logical5_g) && ((((VeCDMR_b_PwrOutletPanelMod1DigCommBus__0 ==
             0U) || (VeCDMR_b_PwrOutletPanelMod1DigCommBus_En != 0U)) &&
           ((VeCDMR_b_PwrOutletPanelMod1DigCommBus__2 == 0U) ||
            (VeCDMR_b_PwrOutletPanelMod1DigCommBus__1 != 0U))) &&
          ((VeCDMR_b_PwrOutletPanelMod1DigCommBus__4 == 0U) ||
           (VeCDMR_b_PwrOutletPanelMod1DigCommBus__3 != 0U))));

    /* RelationalOperator: '<S440>/Relational Operator3' incorporates:
     *  Constant: '<S440>/Constant3'
     *  S-Function (sfix_bitop): '<S440>/Bitwise Operator2'
     */
    rtb_Logical8_h = ((((uint32)
                        CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_jb) &
                       64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S440>/EdgeFalling1' */
    /* Logic: '<S440>/Logical Operator' incorporates:
     *  Logic: '<S484>/OR1'
     */
    rtb_AND_cqs = !rtb_Logical8_h;

    /* End of Outputs for SubSystem: '<S440>/EdgeFalling1' */

    /* Logic: '<S440>/Logical1' incorporates:
     *  Constant: '<S435>/Calib'
     *  Constant: '<S440>/Constant1'
     *  Logic: '<S440>/Logical Operator'
     *  Logic: '<S440>/Logical10'
     *  Logic: '<S440>/Logical12'
     *  RelationalOperator: '<S440>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S440>/Bitwise Operator3'
     */
    rtb_Comparison2 = ((VeCDMR_b_PwrOutletPanelMod2DigCommBus_EnableCheck) && ((
                         !KeCDMR_b_PwrOutletPanelMod2DigCommBus_LatchEnbl) ||
                        (((((uint32)
                            CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_jb)
                           & 1U) == 0U) || rtb_AND_cqs)));

    /* Outputs for Atomic SubSystem: '<S426>/Signal Latch On With Reset2' */
    /* Logic: '<S482>/OR1' incorporates:
     *  Logic: '<S426>/OR'
     *  Logic: '<S482>/NOT'
     *  Logic: '<S482>/OR'
     *  UnitDelay: '<S426>/Unit Delay4'
     *  UnitDelay: '<S482>/Unit Delay'
     */
    VeCDMR_b_PP1ButtonPressedLatched =
        ((CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_cx) ||
         (((!CDMR_ac_DW.UnitDelay4_DSTATE_h) &&
           (!VeCDMR_b_PwrOutletPanelMod2DigCommBus_FaultCheck)) &&
          (VeCDMR_b_PP1ButtonPressedLatched)));

    /* End of Outputs for SubSystem: '<S426>/Signal Latch On With Reset2' */

    /* Outputs for Atomic SubSystem: '<S426>/Counter Reset Enabled ' */
    /* Switch: '<S479>/Switch' incorporates:
     *  Constant: '<S479>/Constant Value2'
     *  Logic: '<S426>/AND1'
     *  Logic: '<S426>/NOT1'
     *  Switch: '<S479>/Switch2'
     *  UnitDelay: '<S426>/Unit Delay4'
     *  UnitDelay: '<S479>/Unit Delay'
     */
    if (CDMR_ac_DW.UnitDelay4_DSTATE_h)
    {
        CDMR_ac_DW.UnitDelay_DSTATE_kc = 0U;
    }
    else
    {
        if ((VeCDMR_b_PP1ButtonPressedLatched) &&
                (!CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_b))
        {
            /* UnitDelay: '<S479>/Unit Delay' incorporates:
             *  Constant: '<S479>/Constant Value1'
             *  Sum: '<S479>/Subtraction'
             *  Switch: '<S479>/Switch2'
             */
            CDMR_ac_DW.UnitDelay_DSTATE_kc = (uint16)(((uint32)
                CDMR_ac_DW.UnitDelay_DSTATE_kc) + 1U);
        }
    }

    /* End of Switch: '<S479>/Switch' */
    /* End of Outputs for SubSystem: '<S426>/Counter Reset Enabled ' */

    /* RelationalOperator: '<S426>/Relational Operator' incorporates:
     *  Constant: '<S481>/Calib'
     *  UnitDelay: '<S479>/Unit Delay'
     */
    VeCDMR_b_PwrOutletPanelMod2DigCommBus_FaultCheck =
        (CDMR_ac_DW.UnitDelay_DSTATE_kc >= KeCDMR_Cnt_DigCommFailLmt);

    /* Outputs for Atomic SubSystem: '<S440>/EdgeFalling1' */
    /* Logic: '<S484>/AND' incorporates:
     *  UnitDelay: '<S484>/Unit Delay'
     */
    rtb_AND_cqs = (rtb_AND_cqs && (CDMR_ac_DW.UnitDelay_DSTATE_jx));

    /* Update for UnitDelay: '<S484>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_jx = rtb_Logical8_h;

    /* End of Outputs for SubSystem: '<S440>/EdgeFalling1' */

    /* Logic: '<S440>/Logical5' incorporates:
     *  Logic: '<S439>/NOT4'
     */
    rtb_Logical8_h = (TmpSignalConversionAtTmpVM_FcnCallSubs_o || rtb_AND_cqs);

    /* Outputs for Atomic SubSystem: '<S483>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S483>/Counter Reset  Enabled ' */
    /* Switch: '<S490>/Switch1' incorporates:
     *  Logic: '<S483>/Fail Counter Reset'
     *  Logic: '<S483>/NOT6'
     *  Switch: '<S490>/Switch2'
     *  Switch: '<S491>/Switch1'
     *  UnitDelay: '<S483>/Unit Delay'
     *  UnitDelay: '<S483>/Unit Delay1'
     */
    if ((rtb_Logical8_h || (CDMR_ac_DW.UnitDelay_DSTATE_mll)) ||
            (CDMR_ac_DW.UnitDelay1_DSTATE_p))
    {
        /* Switch: '<S490>/Switch1' incorporates:
         *  Constant: '<S490>/Constant Value2'
         */
        VeCDMR_Cnt_PwrOutletPanelMod2DigCommBus_FailCnt = 0U;

        /* Switch: '<S491>/Switch1' incorporates:
         *  Constant: '<S491>/Constant Value2'
         */
        VeCDMR_Cnt_PwrOutletPanelMod2DigCommBus_SmpCnt = 0U;
    }
    else
    {
        if (rtb_Comparison2 && (VeCDMR_b_PwrOutletPanelMod2DigCommBus_FaultCheck))
        {
            /* Switch: '<S490>/Switch1' incorporates:
             *  Constant: '<S490>/Constant Value1'
             *  Sum: '<S490>/Subtraction'
             *  Switch: '<S490>/Switch2'
             *  UnitDelay: '<S490>/Unit Delay'
             */
            VeCDMR_Cnt_PwrOutletPanelMod2DigCommBus_FailCnt = (uint16)(((uint32)
                VeCDMR_Cnt_PwrOutletPanelMod2DigCommBus_FailCnt) + 1U);
        }

        /* Switch: '<S491>/Switch2' */
        if (rtb_Comparison2)
        {
            /* Switch: '<S491>/Switch1' incorporates:
             *  Constant: '<S491>/Constant Value1'
             *  Sum: '<S491>/Subtraction'
             *  Switch: '<S491>/Switch2'
             *  UnitDelay: '<S491>/Unit Delay'
             */
            VeCDMR_Cnt_PwrOutletPanelMod2DigCommBus_SmpCnt = (uint16)(((uint32)
                VeCDMR_Cnt_PwrOutletPanelMod2DigCommBus_SmpCnt) + 1U);
        }

        /* End of Switch: '<S491>/Switch2' */
    }

    /* End of Switch: '<S490>/Switch1' */
    /* End of Outputs for SubSystem: '<S483>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S483>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S483>/Greater Than or Equal ' incorporates:
     *  Constant: '<S427>/Calib'
     */
    CDMR_ac_DW.UnitDelay1_DSTATE_p =
        (VeCDMR_Cnt_PwrOutletPanelMod2DigCommBus_FailCnt >=
         KeCDMR_Cnt_PwrOutletPanelMod2DigCommBus_Fail);

    /* Logic: '<S483>/NOT5' incorporates:
     *  Constant: '<S428>/Calib'
     *  Logic: '<S483>/NOT3'
     *  RelationalOperator: '<S483>/Less Than  or Equal'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_mll =
        ((VeCDMR_Cnt_PwrOutletPanelMod2DigCommBus_SmpCnt >=
          KeCDMR_Cnt_PwrOutletPanelMod2DigCommBus_Smpl) &&
         (!CDMR_ac_DW.UnitDelay1_DSTATE_p));

    /* Switch: '<S496>/Switch1' incorporates:
     *  Constant: '<S489>/Constant Value'
     *  DataStoreWrite: '<S230>/Data Store Write3'
     *  Switch: '<S495>/Switch1'
     */
    if (TmpSignalConversionAtTmpVM_FcnCallSubs_i)
    {
        CDMR_ac_DW.NeCDMR_Cnt_PwrOutletPanelMod2DigCommBus_ = 0U;
    }
    else
    {
        if (CDMR_ac_DW.UnitDelay_DSTATE_mll)
        {
            /* MinMax: '<S489>/Minimum2' incorporates:
             *  DataStoreRead: '<S230>/Data Store Read4'
             *  Switch: '<S495>/Switch1'
             */
            if (VeCDMR_Cnt_PwrOutletPanelMod2DigCommBus_FailCnt >
                    CDMR_ac_DW.NeCDMR_Cnt_PwrOutletPanelMod2DigCommBus_)
            {
                /* DataStoreWrite: '<S230>/Data Store Write3' incorporates:
                 *  Switch: '<S495>/Switch1'
                 */
                CDMR_ac_DW.NeCDMR_Cnt_PwrOutletPanelMod2DigCommBus_ =
                    VeCDMR_Cnt_PwrOutletPanelMod2DigCommBus_FailCnt;
            }

            /* End of MinMax: '<S489>/Minimum2' */
        }
    }

    /* End of Switch: '<S496>/Switch1' */

    /* Logic: '<S420>/AND' incorporates:
     *  Constant: '<S451>/Constant'
     *  Constant: '<S452>/Calib'
     *  RelationalOperator: '<S420>/Relational Operator'
     */
    VeCDMR_b_PwrOutletPanelMod2LmpCntrl_EnableCheck =
        ((((KeCDMR_b_Enbl_PwrOutletPanelMod2LmpCntrl) &&
           TmpSignalConversionAtTmpVM_FcnCallSub_ad) && (((uint32)
            CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_bl) ==
           CeVTLR_e_Active_Frunk)) && rtb_Logical5_g);

    /* RelationalOperator: '<S442>/Relational Operator3' incorporates:
     *  Constant: '<S442>/Constant3'
     */
    rtb_Comparison2 = (VeCDMR_b_PwrOutletPanelMod1DigCommBus__1 == 0U);

    /* Outputs for Atomic SubSystem: '<S442>/EdgeFalling1' */
    /* Logic: '<S442>/Logical Operator' incorporates:
     *  Logic: '<S512>/OR1'
     */
    rtb_AND_hj3 = !rtb_Comparison2;

    /* End of Outputs for SubSystem: '<S442>/EdgeFalling1' */

    /* Logic: '<S442>/Logical1' incorporates:
     *  Constant: '<S437>/Calib'
     *  Constant: '<S442>/Constant1'
     *  Logic: '<S442>/Logical Operator'
     *  Logic: '<S442>/Logical10'
     *  Logic: '<S442>/Logical12'
     *  RelationalOperator: '<S442>/Relational Operator1'
     */
    rtb_AND_cqs = ((VeCDMR_b_PwrOutletPanelMod2LmpCntrl_EnableCheck) &&
                   ((!KeCDMR_b_PwrOutletPanelMod2LmpCntrl_LatchEnbl) ||
                    ((VeCDMR_b_PwrOutletPanelMod1DigCommBus__2 == 0U) ||
                     rtb_AND_hj3)));

    /* RelationalOperator: '<S423>/Relational Operator' incorporates:
     *  RelationalOperator: '<S423>/Relational Operator7'
     *  RelationalOperator: '<S423>/Relational Operator8'
     *  VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120'
     */
    rtb_RelationalOperator_n_tmp =
        CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_mw;

    /* RelationalOperator: '<S423>/Relational Operator' incorporates:
     *  UnitDelay: '<S423>/Unit Delay'
     */
    rtb_AND_h1 = (rtb_RelationalOperator_n_tmp == CDMR_ac_DW.UnitDelay_DSTATE_h1);

    /* Outputs for Atomic SubSystem: '<S423>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S468>/EdgeRising' */
    /* Logic: '<S470>/AND' incorporates:
     *  Logic: '<S470>/OR1'
     *  UnitDelay: '<S470>/Unit Delay'
     */
    rtb_OR1_dh = (rtb_AND_h1 && (!CDMR_ac_DW.UnitDelay_DSTATE_o2));

    /* Update for UnitDelay: '<S470>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_o2 = rtb_AND_h1;

    /* End of Outputs for SubSystem: '<S468>/EdgeRising' */

    /* Switch: '<S468>/Switch1' incorporates:
     *  Constant: '<S467>/Calib'
     *  Constant: '<S468>/Constant Value'
     *  Constant: '<S468>/Constant Value1'
     *  Logic: '<S468>/OR'
     *  Logic: '<S468>/OR1'
     *  MinMax: '<S468>/Minimum'
     *  Sum: '<S468>/Summation'
     *  UnitDelay: '<S468>/Unit Delay'
     */
    if ((!rtb_AND_h1) || rtb_OR1_dh)
    {
        CDMR_ac_DW.UnitDelay_DSTATE_a = 0U;
    }
    else if (KeCDMR_Cnt_SPP_LEDFdbckDbncTime < ((uint16)(((uint32)
                CDMR_ac_DW.UnitDelay_DSTATE_a) + 1U)))
    {
        /* MinMax: '<S468>/Minimum' incorporates:
         *  Constant: '<S467>/Calib'
         */
        CDMR_ac_DW.UnitDelay_DSTATE_a = KeCDMR_Cnt_SPP_LEDFdbckDbncTime;
    }
    else
    {
        /* MinMax: '<S468>/Minimum' incorporates:
         *  Constant: '<S468>/Constant Value'
         *  Sum: '<S468>/Summation'
         *  UnitDelay: '<S468>/Unit Delay'
         */
        CDMR_ac_DW.UnitDelay_DSTATE_a = (uint16)(((uint32)
            CDMR_ac_DW.UnitDelay_DSTATE_a) + 1U);
    }

    /* End of Switch: '<S468>/Switch1' */
    /* End of Outputs for SubSystem: '<S423>/Turn On Delay Sample' */

    /* RelationalOperator: '<S423>/Relational Operator9' incorporates:
     *  RelationalOperator: '<S423>/Relational Operator12'
     *  RelationalOperator: '<S423>/Relational Operator13'
     *  VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120'
     */
    rtb_RelationalOperator6_d_tmp =
        CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_cg;

    /* RelationalOperator: '<S423>/Relational Operator9' incorporates:
     *  UnitDelay: '<S423>/Unit Delay1'
     */
    rtb_OR1_dh = (rtb_RelationalOperator6_d_tmp ==
                  CDMR_ac_DW.UnitDelay1_DSTATE_k);

    /* Outputs for Atomic SubSystem: '<S423>/Turn On Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S469>/EdgeRising' */
    /* Logic: '<S471>/AND' incorporates:
     *  Logic: '<S471>/OR1'
     *  UnitDelay: '<S471>/Unit Delay'
     */
    rtb_AND_am = (rtb_OR1_dh && (!CDMR_ac_DW.UnitDelay_DSTATE_dz));

    /* Update for UnitDelay: '<S471>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_dz = rtb_OR1_dh;

    /* End of Outputs for SubSystem: '<S469>/EdgeRising' */

    /* Switch: '<S469>/Switch1' incorporates:
     *  Constant: '<S467>/Calib'
     *  Constant: '<S469>/Constant Value'
     *  Constant: '<S469>/Constant Value1'
     *  Logic: '<S469>/OR'
     *  Logic: '<S469>/OR1'
     *  MinMax: '<S469>/Minimum'
     *  Sum: '<S469>/Summation'
     *  UnitDelay: '<S469>/Unit Delay'
     */
    if ((!rtb_OR1_dh) || rtb_AND_am)
    {
        CDMR_ac_DW.UnitDelay_DSTATE_p = 0U;
    }
    else if (KeCDMR_Cnt_SPP_LEDFdbckDbncTime < ((uint16)(((uint32)
                CDMR_ac_DW.UnitDelay_DSTATE_p) + 1U)))
    {
        /* MinMax: '<S469>/Minimum' incorporates:
         *  Constant: '<S467>/Calib'
         */
        CDMR_ac_DW.UnitDelay_DSTATE_p = KeCDMR_Cnt_SPP_LEDFdbckDbncTime;
    }
    else
    {
        /* MinMax: '<S469>/Minimum' incorporates:
         *  Constant: '<S469>/Constant Value'
         *  Sum: '<S469>/Summation'
         *  UnitDelay: '<S469>/Unit Delay'
         */
        CDMR_ac_DW.UnitDelay_DSTATE_p = (uint16)(((uint32)
            CDMR_ac_DW.UnitDelay_DSTATE_p) + 1U);
    }

    /* End of Switch: '<S469>/Switch1' */
    /* End of Outputs for SubSystem: '<S423>/Turn On Delay Sample1' */

    /* RelationalOperator: '<S423>/Relational Operator2' incorporates:
     *  RelationalOperator: '<S423>/Relational Operator10'
     *  RelationalOperator: '<S423>/Relational Operator15'
     *  VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120'
     */
    VeCDMR_b_PwrOutletPanelMod1LmpCntrl_Faul =
        CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_fr;

    /* RelationalOperator: '<S423>/Relational Operator1' incorporates:
     *  RelationalOperator: '<S423>/Relational Operator11'
     *  RelationalOperator: '<S423>/Relational Operator14'
     *  VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120'
     */
    VeCDMR_b_PwrOutletPanelMod1LmpCntrl_Fa_0 =
        CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_fp;

    /* Outputs for Atomic SubSystem: '<S423>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S423>/Turn On Delay Sample1' */
    /* Logic: '<S423>/OR1' incorporates:
     *  Constant: '<S455>/Constant'
     *  Constant: '<S456>/Constant'
     *  Constant: '<S457>/Constant'
     *  Constant: '<S458>/Constant'
     *  Constant: '<S459>/Constant'
     *  Constant: '<S460>/Constant'
     *  Constant: '<S461>/Constant'
     *  Constant: '<S462>/Constant'
     *  Constant: '<S463>/Constant'
     *  Constant: '<S464>/Constant'
     *  Constant: '<S465>/Constant'
     *  Constant: '<S466>/Constant'
     *  Constant: '<S467>/Calib'
     *  Logic: '<S423>/AND'
     *  Logic: '<S423>/AND1'
     *  Logic: '<S423>/AND2'
     *  Logic: '<S423>/AND3'
     *  Logic: '<S423>/AND4'
     *  Logic: '<S423>/AND5'
     *  Logic: '<S423>/OR2'
     *  Logic: '<S423>/OR4'
     *  Logic: '<S423>/OR5'
     *  Logic: '<S423>/OR6'
     *  Logic: '<S423>/OR7'
     *  Logic: '<S468>/AND'
     *  Logic: '<S469>/AND'
     *  RelationalOperator: '<S423>/Relational Operator1'
     *  RelationalOperator: '<S423>/Relational Operator10'
     *  RelationalOperator: '<S423>/Relational Operator11'
     *  RelationalOperator: '<S423>/Relational Operator12'
     *  RelationalOperator: '<S423>/Relational Operator13'
     *  RelationalOperator: '<S423>/Relational Operator14'
     *  RelationalOperator: '<S423>/Relational Operator15'
     *  RelationalOperator: '<S423>/Relational Operator2'
     *  RelationalOperator: '<S423>/Relational Operator4'
     *  RelationalOperator: '<S423>/Relational Operator5'
     *  RelationalOperator: '<S423>/Relational Operator7'
     *  RelationalOperator: '<S423>/Relational Operator8'
     *  RelationalOperator: '<S468>/Greater  Than'
     *  RelationalOperator: '<S469>/Greater  Than'
     *  UnitDelay: '<S468>/Unit Delay'
     *  UnitDelay: '<S469>/Unit Delay'
     *  VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120'
     */
    VeCDMR_b_PwrOutletPanelMod2LmpCntrl_FaultCheck = ((((((uint32)
        VeCDMR_b_PwrOutletPanelMod1LmpCntrl_Faul) == CeCITR_e_CPIM_Ind_SNA) ||
        (((uint32)VeCDMR_b_PwrOutletPanelMod1LmpCntrl_Fa_0) ==
         CeCITR_e_CPIM_Ind_SNA)) || (((rtb_AND_h1 &&
        (CDMR_ac_DW.UnitDelay_DSTATE_a >= KeCDMR_Cnt_SPP_LEDFdbckDbncTime)) &&
        (((((uint32)rtb_RelationalOperator_n_tmp) == CeVTLR_e_Led_Off) &&
          (((uint32)VeCDMR_b_PwrOutletPanelMod1LmpCntrl_Faul) !=
           CeCITR_e_CPIM_Ind_Off)) || ((((uint32)rtb_RelationalOperator_n_tmp) ==
        CeVTLR_e_Led_On) && (((uint32)VeCDMR_b_PwrOutletPanelMod1LmpCntrl_Faul)
        != CeCITR_e_CPIM_Ind_On)))) || ((rtb_OR1_dh &&
        (CDMR_ac_DW.UnitDelay_DSTATE_p >= KeCDMR_Cnt_SPP_LEDFdbckDbncTime)) &&
        (((((uint32)rtb_RelationalOperator6_d_tmp) == CeVTLR_e_Led_Off) &&
          (((uint32)VeCDMR_b_PwrOutletPanelMod1LmpCntrl_Fa_0) !=
           CeCITR_e_CPIM_Ind_Off)) || ((((uint32)rtb_RelationalOperator6_d_tmp) ==
        CeVTLR_e_Led_On) && (((uint32)VeCDMR_b_PwrOutletPanelMod1LmpCntrl_Fa_0)
        != CeCITR_e_CPIM_Ind_On)))))) || ((((uint32)
        CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_k) !=
        CeCITR_e_CPIM_LEDNormal) || (((uint32)
        CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_a1) !=
        CeCITR_e_CPIM_LEDNormal)));

    /* End of Outputs for SubSystem: '<S423>/Turn On Delay Sample1' */
    /* End of Outputs for SubSystem: '<S423>/Turn On Delay Sample' */

    /* Outputs for Atomic SubSystem: '<S442>/EdgeFalling1' */
    /* Logic: '<S512>/AND' incorporates:
     *  UnitDelay: '<S512>/Unit Delay'
     */
    rtb_AND_hj3 = (rtb_AND_hj3 && (CDMR_ac_DW.UnitDelay_DSTATE_hy));

    /* Update for UnitDelay: '<S512>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_hy = rtb_Comparison2;

    /* End of Outputs for SubSystem: '<S442>/EdgeFalling1' */

    /* Logic: '<S442>/Logical5' incorporates:
     *  Logic: '<S439>/NOT4'
     */
    rtb_Comparison2 = (TmpSignalConversionAtTmpVM_FcnCallSubs_o || rtb_AND_hj3);

    /* Outputs for Atomic SubSystem: '<S511>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S511>/Counter Reset  Enabled ' */
    /* Switch: '<S518>/Switch1' incorporates:
     *  Logic: '<S511>/Fail Counter Reset'
     *  Logic: '<S511>/NOT6'
     *  Switch: '<S518>/Switch2'
     *  Switch: '<S519>/Switch1'
     *  UnitDelay: '<S511>/Unit Delay'
     *  UnitDelay: '<S511>/Unit Delay1'
     */
    if ((rtb_Comparison2 || (CDMR_ac_DW.UnitDelay_DSTATE_de)) ||
            (CDMR_ac_DW.UnitDelay1_DSTATE_p5))
    {
        /* Switch: '<S518>/Switch1' incorporates:
         *  Constant: '<S518>/Constant Value2'
         */
        VeCDMR_Cnt_PwrOutletPanelMod2LmpCntrl_FailCnt = 0U;

        /* Switch: '<S519>/Switch1' incorporates:
         *  Constant: '<S519>/Constant Value2'
         */
        VeCDMR_Cnt_PwrOutletPanelMod2LmpCntrl_SmpCnt = 0U;
    }
    else
    {
        if (rtb_AND_cqs && (VeCDMR_b_PwrOutletPanelMod2LmpCntrl_FaultCheck))
        {
            /* Switch: '<S518>/Switch1' incorporates:
             *  Constant: '<S518>/Constant Value1'
             *  Sum: '<S518>/Subtraction'
             *  Switch: '<S518>/Switch2'
             *  UnitDelay: '<S518>/Unit Delay'
             */
            VeCDMR_Cnt_PwrOutletPanelMod2LmpCntrl_FailCnt = (uint16)(((uint32)
                VeCDMR_Cnt_PwrOutletPanelMod2LmpCntrl_FailCnt) + 1U);
        }

        /* Switch: '<S519>/Switch2' */
        if (rtb_AND_cqs)
        {
            /* Switch: '<S519>/Switch1' incorporates:
             *  Constant: '<S519>/Constant Value1'
             *  Sum: '<S519>/Subtraction'
             *  Switch: '<S519>/Switch2'
             *  UnitDelay: '<S519>/Unit Delay'
             */
            VeCDMR_Cnt_PwrOutletPanelMod2LmpCntrl_SmpCnt = (uint16)(((uint32)
                VeCDMR_Cnt_PwrOutletPanelMod2LmpCntrl_SmpCnt) + 1U);
        }

        /* End of Switch: '<S519>/Switch2' */
    }

    /* End of Switch: '<S518>/Switch1' */
    /* End of Outputs for SubSystem: '<S511>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S511>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S511>/Greater Than or Equal ' incorporates:
     *  Constant: '<S431>/Calib'
     */
    CDMR_ac_DW.UnitDelay1_DSTATE_p5 =
        (VeCDMR_Cnt_PwrOutletPanelMod2LmpCntrl_FailCnt >=
         KeCDMR_Cnt_PwrOutletPanelMod2LmpCntrl_Fail);

    /* Logic: '<S511>/NOT5' incorporates:
     *  Constant: '<S432>/Calib'
     *  Logic: '<S511>/NOT3'
     *  RelationalOperator: '<S511>/Less Than  or Equal'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_de =
        ((VeCDMR_Cnt_PwrOutletPanelMod2LmpCntrl_SmpCnt >=
          KeCDMR_Cnt_PwrOutletPanelMod2LmpCntrl_Smpl) &&
         (!CDMR_ac_DW.UnitDelay1_DSTATE_p5));

    /* Switch: '<S524>/Switch1' incorporates:
     *  Constant: '<S517>/Constant Value'
     *  DataStoreWrite: '<S230>/Data Store Write6'
     *  Switch: '<S523>/Switch1'
     */
    if (TmpSignalConversionAtTmpVM_FcnCallSubs_i)
    {
        CDMR_ac_DW.NeCDMR_Cnt_PwrOutletPanelMod2LmpCntrl_MF = 0U;
    }
    else
    {
        if (CDMR_ac_DW.UnitDelay_DSTATE_de)
        {
            /* MinMax: '<S517>/Minimum2' incorporates:
             *  DataStoreRead: '<S230>/Data Store Read6'
             *  Switch: '<S523>/Switch1'
             */
            if (VeCDMR_Cnt_PwrOutletPanelMod2LmpCntrl_FailCnt >
                    CDMR_ac_DW.NeCDMR_Cnt_PwrOutletPanelMod2LmpCntrl_MF)
            {
                /* DataStoreWrite: '<S230>/Data Store Write6' incorporates:
                 *  Switch: '<S523>/Switch1'
                 */
                CDMR_ac_DW.NeCDMR_Cnt_PwrOutletPanelMod2LmpCntrl_MF =
                    VeCDMR_Cnt_PwrOutletPanelMod2LmpCntrl_FailCnt;
            }

            /* End of MinMax: '<S517>/Minimum2' */
        }
    }

    /* End of Switch: '<S524>/Switch1' */

    /* Logic: '<S421>/AND' incorporates:
     *  Constant: '<S453>/Constant'
     *  Constant: '<S454>/Calib'
     *  RelationalOperator: '<S421>/Relational Operator'
     */
    VeCDMR_b_PwrOutletPanelMod2InACPwrCktPerf_EnableCheck =
        ((((KeCDMR_b_Enbl_PwrOutletPanelMod2InACPwrCktPerf) &&
           TmpSignalConversionAtTmpVM_FcnCallSub_ad) && rtb_Logical5_g) &&
         (((uint32)CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_bl) ==
          CeVTLR_e_Active_Frunk));

    /* RelationalOperator: '<S441>/Relational Operator3' incorporates:
     *  Constant: '<S441>/Constant3'
     */
    rtb_Logical5_g = (VeCDMR_b_PwrOutletPanelMod1DigCommBus__3 == 0U);

    /* Outputs for Atomic SubSystem: '<S441>/EdgeFalling1' */
    /* Logic: '<S441>/Logical Operator' incorporates:
     *  Logic: '<S498>/OR1'
     */
    rtb_AND_cqs = !rtb_Logical5_g;

    /* End of Outputs for SubSystem: '<S441>/EdgeFalling1' */

    /* Logic: '<S441>/Logical1' incorporates:
     *  Constant: '<S436>/Calib'
     *  Constant: '<S441>/Constant1'
     *  Logic: '<S441>/Logical Operator'
     *  Logic: '<S441>/Logical10'
     *  Logic: '<S441>/Logical12'
     *  RelationalOperator: '<S441>/Relational Operator1'
     */
    TmpSignalConversionAtTmpVM_FcnCallSub_ad =
        ((VeCDMR_b_PwrOutletPanelMod2InACPwrCktPerf_EnableCheck) &&
         ((!KeCDMR_b_PwrOutletPanelMod2InACPwrCktPerf_LatchEnbl) ||
          ((VeCDMR_b_PwrOutletPanelMod1DigCommBus__4 == 0U) || rtb_AND_cqs)));

    /* Outputs for Atomic SubSystem: '<S441>/EdgeFalling1' */
    /* Logic: '<S498>/AND' incorporates:
     *  UnitDelay: '<S498>/Unit Delay'
     */
    rtb_AND_cqs = (rtb_AND_cqs && (CDMR_ac_DW.UnitDelay_DSTATE_jp));

    /* Update for UnitDelay: '<S498>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_jp = rtb_Logical5_g;

    /* End of Outputs for SubSystem: '<S441>/EdgeFalling1' */

    /* Logic: '<S441>/Logical5' incorporates:
     *  Logic: '<S439>/NOT4'
     */
    TmpSignalConversionAtTmpVM_FcnCallSubs_o =
        (TmpSignalConversionAtTmpVM_FcnCallSubs_o || rtb_AND_cqs);

    /* Outputs for Atomic SubSystem: '<S497>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S497>/Counter Reset  Enabled ' */
    /* Switch: '<S504>/Switch1' incorporates:
     *  Logic: '<S497>/Fail Counter Reset'
     *  Logic: '<S497>/NOT6'
     *  Switch: '<S504>/Switch2'
     *  Switch: '<S505>/Switch1'
     *  UnitDelay: '<S497>/Unit Delay'
     *  UnitDelay: '<S497>/Unit Delay1'
     */
    if ((TmpSignalConversionAtTmpVM_FcnCallSubs_o ||
            (CDMR_ac_DW.UnitDelay_DSTATE_fr)) || (CDMR_ac_DW.UnitDelay1_DSTATE_c))
    {
        /* Switch: '<S504>/Switch1' incorporates:
         *  Constant: '<S504>/Constant Value2'
         */
        VeCDMR_Cnt_PwrOutletPanelMod2InACPwrCktPerf_FailCnt = 0U;

        /* Switch: '<S505>/Switch1' incorporates:
         *  Constant: '<S505>/Constant Value2'
         */
        VeCDMR_Cnt_PwrOutletPanelMod2InACPwrCktPerf_SmpCnt = 0U;
    }
    else
    {
        if (TmpSignalConversionAtTmpVM_FcnCallSub_ad &&
                (VeCDMR_b_PwrOutletPanelMod2InACPwrCktPerf_FaultCheck))
        {
            /* Switch: '<S504>/Switch1' incorporates:
             *  Constant: '<S504>/Constant Value1'
             *  Sum: '<S504>/Subtraction'
             *  Switch: '<S504>/Switch2'
             *  UnitDelay: '<S504>/Unit Delay'
             */
            VeCDMR_Cnt_PwrOutletPanelMod2InACPwrCktPerf_FailCnt = (uint16)
                (((uint32)VeCDMR_Cnt_PwrOutletPanelMod2InACPwrCktPerf_FailCnt) +
                 1U);
        }

        /* Switch: '<S505>/Switch2' */
        if (TmpSignalConversionAtTmpVM_FcnCallSub_ad)
        {
            /* Switch: '<S505>/Switch1' incorporates:
             *  Constant: '<S505>/Constant Value1'
             *  Sum: '<S505>/Subtraction'
             *  Switch: '<S505>/Switch2'
             *  UnitDelay: '<S505>/Unit Delay'
             */
            VeCDMR_Cnt_PwrOutletPanelMod2InACPwrCktPerf_SmpCnt = (uint16)
                (((uint32)VeCDMR_Cnt_PwrOutletPanelMod2InACPwrCktPerf_SmpCnt) +
                 1U);
        }

        /* End of Switch: '<S505>/Switch2' */
    }

    /* End of Switch: '<S504>/Switch1' */
    /* End of Outputs for SubSystem: '<S497>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S497>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S497>/Greater Than or Equal ' incorporates:
     *  Constant: '<S429>/Calib'
     */
    CDMR_ac_DW.UnitDelay1_DSTATE_c =
        (VeCDMR_Cnt_PwrOutletPanelMod2InACPwrCktPerf_FailCnt >=
         KeCDMR_Cnt_PwrOutletPanelMod2InACPwrCktPerf_Fail);

    /* Logic: '<S497>/NOT5' incorporates:
     *  Constant: '<S430>/Calib'
     *  Logic: '<S497>/NOT3'
     *  RelationalOperator: '<S497>/Less Than  or Equal'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_fr =
        ((VeCDMR_Cnt_PwrOutletPanelMod2InACPwrCktPerf_SmpCnt >=
          KeCDMR_Cnt_PwrOutletPanelMod2InACPwrCktPerf_Smpl) &&
         (!CDMR_ac_DW.UnitDelay1_DSTATE_c));

    /* Switch: '<S510>/Switch1' incorporates:
     *  Constant: '<S503>/Constant Value'
     *  DataStoreWrite: '<S230>/Data Store Write8'
     *  Switch: '<S509>/Switch1'
     */
    if (TmpSignalConversionAtTmpVM_FcnCallSubs_i)
    {
        CDMR_ac_DW.NeCDMR_Cnt_PwrOutletPanelMod2InACPwrCktP = 0U;
    }
    else
    {
        if (CDMR_ac_DW.UnitDelay_DSTATE_fr)
        {
            /* MinMax: '<S503>/Minimum2' incorporates:
             *  DataStoreRead: '<S230>/Data Store Read8'
             *  Switch: '<S509>/Switch1'
             */
            if (VeCDMR_Cnt_PwrOutletPanelMod2InACPwrCktPerf_FailCnt >
                    CDMR_ac_DW.NeCDMR_Cnt_PwrOutletPanelMod2InACPwrCktP)
            {
                /* DataStoreWrite: '<S230>/Data Store Write8' incorporates:
                 *  Switch: '<S509>/Switch1'
                 */
                CDMR_ac_DW.NeCDMR_Cnt_PwrOutletPanelMod2InACPwrCktP =
                    VeCDMR_Cnt_PwrOutletPanelMod2InACPwrCktPerf_FailCnt;
            }

            /* End of MinMax: '<S503>/Minimum2' */
        }
    }

    /* End of Switch: '<S510>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S426>/EdgeRising2' */
    /* Logic: '<S480>/AND' incorporates:
     *  Logic: '<S480>/OR1'
     *  UnitDelay: '<S426>/Unit Delay4'
     *  UnitDelay: '<S480>/Unit Delay'
     */
    CDMR_ac_DW.UnitDelay4_DSTATE_h =
        ((CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_b) &&
         (!CDMR_ac_DW.UnitDelay_DSTATE_fe));

    /* Update for UnitDelay: '<S480>/Unit Delay' */
    CDMR_ac_DW.UnitDelay_DSTATE_fe =
        CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_b;

    /* End of Outputs for SubSystem: '<S426>/EdgeRising2' */

    /* Outputs for Enabled SubSystem: '<S440>/Fail' */
    CDMR_ac_Fail(CDMR_ac_DW.UnitDelay1_DSTATE_p, &CDMR_ac_B.Merge);

    /* End of Outputs for SubSystem: '<S440>/Fail' */

    /* Outputs for Enabled SubSystem: '<S440>/Init' */
    CDMR_ac_Init_b(rtb_Logical8_h, &CDMR_ac_B.Merge);

    /* End of Outputs for SubSystem: '<S440>/Init' */

    /* Outputs for Enabled SubSystem: '<S440>/Pass' */
    CDMR_ac_Pass(CDMR_ac_DW.UnitDelay_DSTATE_mll, &CDMR_ac_B.Merge);

    /* End of Outputs for SubSystem: '<S440>/Pass' */

    /* RelationalOperator: '<S440>/Relational Operator' incorporates:
     *  Constant: '<S485>/Constant'
     *  Merge: '<S440>/Merge'
     */
    VeCDMR_b_PwrOutletPanelMod2DigCommBus_FltDtct = (((uint32)CDMR_ac_B.Merge) ==
        CeDFIB_e_Fail);

    /* Outputs for Enabled SubSystem: '<S441>/Fail' */
    CDMR_ac_Fail(CDMR_ac_DW.UnitDelay1_DSTATE_c, &CDMR_ac_B.Merge_m);

    /* End of Outputs for SubSystem: '<S441>/Fail' */

    /* Outputs for Enabled SubSystem: '<S441>/Init' */
    CDMR_ac_Init_b(TmpSignalConversionAtTmpVM_FcnCallSubs_o, &CDMR_ac_B.Merge_m);

    /* End of Outputs for SubSystem: '<S441>/Init' */

    /* Outputs for Enabled SubSystem: '<S441>/Pass' */
    CDMR_ac_Pass(CDMR_ac_DW.UnitDelay_DSTATE_fr, &CDMR_ac_B.Merge_m);

    /* End of Outputs for SubSystem: '<S441>/Pass' */

    /* RelationalOperator: '<S441>/Relational Operator' incorporates:
     *  Constant: '<S499>/Constant'
     *  Merge: '<S441>/Merge'
     */
    VeCDMR_b_PwrOutletPanelMod2InACPwrCktPerf_FltDtct = (((uint32)
        CDMR_ac_B.Merge_m) == CeDFIB_e_Fail);

    /* Outputs for Enabled SubSystem: '<S442>/Fail' */
    CDMR_ac_Fail(CDMR_ac_DW.UnitDelay1_DSTATE_p5, &CDMR_ac_B.Merge_b);

    /* End of Outputs for SubSystem: '<S442>/Fail' */

    /* Outputs for Enabled SubSystem: '<S442>/Init' */
    CDMR_ac_Init_b(rtb_Comparison2, &CDMR_ac_B.Merge_b);

    /* End of Outputs for SubSystem: '<S442>/Init' */

    /* Outputs for Enabled SubSystem: '<S442>/Pass' */
    CDMR_ac_Pass(CDMR_ac_DW.UnitDelay_DSTATE_de, &CDMR_ac_B.Merge_b);

    /* End of Outputs for SubSystem: '<S442>/Pass' */

    /* RelationalOperator: '<S442>/Relational Operator' incorporates:
     *  Constant: '<S513>/Constant'
     *  Merge: '<S442>/Merge'
     */
    VeCDMR_b_PwrOutletPanelMod2LmpCntrl_FltDtct = (((uint32)CDMR_ac_B.Merge_b) ==
        CeDFIB_e_Fail);

    /* Outputs for Enabled SubSystem: '<S443>/Fail' */
    CDMR_ac_Fail(CDMR_ac_DW.UnitDelay1_DSTATE, &CDMR_ac_B.Merge_n);

    /* End of Outputs for SubSystem: '<S443>/Fail' */

    /* Outputs for Enabled SubSystem: '<S443>/Init' */
    CDMR_ac_Init_b(TmpSignalConversionAtTmpVM_FcnCallSubs_a, &CDMR_ac_B.Merge_n);

    /* End of Outputs for SubSystem: '<S443>/Init' */

    /* Outputs for Enabled SubSystem: '<S443>/Pass' */
    CDMR_ac_Pass(CDMR_ac_DW.UnitDelay_DSTATE_n0, &CDMR_ac_B.Merge_n);

    /* End of Outputs for SubSystem: '<S443>/Pass' */

    /* RelationalOperator: '<S443>/Relational Operator' incorporates:
     *  Constant: '<S527>/Constant'
     *  Merge: '<S443>/Merge'
     */
    VeCDMR_b_PwrOutletPanelMod2Perf_FltDtct = (((uint32)CDMR_ac_B.Merge_n) ==
        CeDFIB_e_Fail);

    /* Update for UnitDelay: '<S423>/Unit Delay' incorporates:
     *  VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120'
     */
    CDMR_ac_DW.UnitDelay_DSTATE_h1 =
        CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_mw;

    /* Update for UnitDelay: '<S423>/Unit Delay1' incorporates:
     *  VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCDMR_MedTEHInport120'
     */
    CDMR_ac_DW.UnitDelay1_DSTATE_k =
        CDMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_cg;

    /* End of Outputs for SubSystem: '<S2>/OnBoardFrunkPPDiag' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
#endif

    /* Outport: '<Root>/VeCDMR_b_BCIM_ClrMismtch' incorporates:
     *  SignalConversion generated from: '<S2>/BCIM_ColorMismatch'
     */
    (void)Rte_Write_VeCDMR_b_BCIM_ClrMismtch_Value
        (CDMR_ac_DW.UnitDelay_DSTATE_pe);

    /* Outport: '<Root>/VeCDMR_b_BCIM_HW_BusFlt' incorporates:
     *  SignalConversion generated from: '<S2>/BCIM_HW_BusFlt'
     */
    (void)Rte_Write_VeCDMR_b_BCIM_HW_BusFlt_Value
        (TmpSignalConversionAtTmpVM_FcnCallSub_hv);

    /* Outport: '<Root>/VeCDMR_b_BCIM_LED_ShrtOrOpn' incorporates:
     *  SignalConversion generated from: '<S2>/BCIM_LED_ShrtOrOpn'
     */
    (void)Rte_Write_VeCDMR_b_BCIM_LED_ShrtOrOpn_Value(rtb_UnitDelay_eu);

    /* Outport: '<Root>/VeCDMR_b_CPIM_ClrMismtch' incorporates:
     *  SignalConversion generated from: '<S2>/CPIM_ClrMismtch'
     */
    (void)Rte_Write_VeCDMR_b_CPIM_ClrMismtch_Value
        (CDMR_ac_DW.UnitDelay_DSTATE_li);

    /* Outport: '<Root>/VeCDMR_b_CPIM_HW_BusFlt' incorporates:
     *  SignalConversion generated from: '<S2>/CPIM_HW_BusFlt'
     */
    (void)Rte_Write_VeCDMR_b_CPIM_HW_BusFlt_Value
        (TmpSignalConversionAtTmpVM_FcnCallSubs_e);

    /* Outport: '<Root>/VeCDMR_b_CPIM_LED_ShrtOrOpn' incorporates:
     *  SignalConversion generated from: '<S2>/CPIM_LED_ShrtOrOpn'
     */
    (void)Rte_Write_VeCDMR_b_CPIM_LED_ShrtOrOpn_Value(rtb_AND_az);

    /* Outport: '<Root>/VeCDMR_b_CPIM_Icon_Mismtch' incorporates:
     *  SignalConversion generated from: '<S2>/Icon_Mismatch'
     */
    (void)Rte_Write_VeCDMR_b_CPIM_Icon_Mismtch_Value(rtb_RelationalOperator3_d);

    /* Outport: '<Root>/VeCDMR_b_ChgPrtLckHiDTC' incorporates:
     *  SignalConversion generated from: '<S2>/VeCDMR_b_ChgPrtLckHiDTC_FUNC'
     */
    (void)Rte_Write_VeCDMR_b_ChgPrtLckHiDTC_Value
        (TmpSignalConversionAtTmpVM_FcnCallSub_m3);

    /* Outport: '<Root>/VeCDMR_b_ChgPrtLckLowDTC' incorporates:
     *  SignalConversion generated from: '<S2>/VeCDMR_b_ChgPrtLckLowDTC_FUNC'
     */
    (void)Rte_Write_VeCDMR_b_ChgPrtLckLowDTC_Value
        (TmpSignalConversionAtTmpVM_FcnCallSub_c4);

    /* Outport: '<Root>/VeCDMR_b_ChrgPortLK_FltDtct' incorporates:
     *  SignalConversion generated from: '<S2>/VeCDMR_b_ChrgPortLK_FltDtct_FUNC'
     */
    (void)Rte_Write_VeCDMR_b_ChrgPortLK_FltDtct_Value
        (TmpSignalConversionAtTmpVM_FcnCallSub_iw);

    /* Outport: '<Root>/VeCDMR_b_ChrgPortUL_FltDtct' incorporates:
     *  SignalConversion generated from: '<S2>/VeCDMR_b_ChrgPortUL_FltDtct_FUNC'
     */
    (void)Rte_Write_VeCDMR_b_ChrgPortUL_FltDtct_Value
        (TmpSignalConversionAtTmpVM_FcnCallSu_m1k);

    /* Outport: '<Root>/VeCDMR_b_IUMPR_ChrgPortLock' incorporates:
     *  SignalConversion generated from: '<S2>/VeCDMR_b_IUMPR_ChrgPortLock_FUNC'
     */
    (void)Rte_Write_VeCDMR_b_IUMPR_ChrgPortLock_Value
        (TmpSignalConversionAtTmpVM_FcnCallSub_lp);

    /* Outport: '<Root>/VeCDMR_b_IUMPR_ChrgPortULock' incorporates:
     *  SignalConversion generated from: '<S2>/VeCDMR_b_IUMPR_ChrgPortULock_FUNC'
     */
    (void)Rte_Write_VeCDMR_b_IUMPR_ChrgPortULock_Value
        (TmpSignalConversionAtTmpVM_FcnCallSub_ii);

    /* Outport: '<Root>/VeCDMR_b_IUMPR_DeviceCmdOn_LK' incorporates:
     *  SignalConversion generated from: '<S2>/VeCDMR_b_IUMPR_DeviceCmdOn_LK_FUNC'
     */
    (void)Rte_Write_VeCDMR_b_IUMPR_DeviceCmdOn_LK_Value
        (TmpSignalConversionAtTmpVM_FcnCallSub_gz);

    /* Outport: '<Root>/VeCDMR_b_IUMPR_DeviceCmdOn_UL' incorporates:
     *  SignalConversion generated from: '<S2>/VeCDMR_b_IUMPR_DeviceCmdOn_UL_FUNC'
     */
    (void)Rte_Write_VeCDMR_b_IUMPR_DeviceCmdOn_UL_Value
        (TmpSignalConversionAtTmpVM_FcnCallSub_du);

    /* Outport: '<Root>/VeCDMR_e_FaultSts_BatChaCouTemATooHig' incorporates:
     *  Merge: '<S403>/Merge'
     *  SignalConversion generated from: '<S2>/VeCDMR_e_FaultSts_BatChaCouTemATooHig'
     */
    (void)Rte_Write_VeCDMR_e_FaultSts_BatChaCouTemATooHig_Value
        (CDMR_ac_B.Merge_l);

    /* SignalConversion generated from: '<S2>/VeCDMR_e_FaultSts_BatChrgModSwStk' */
#if Rte_SysCon_Variant_CDMR_1

    /* Outport: '<Root>/VeCDMR_e_FaultSts_BatChrgModSwStk' incorporates:
     *  Merge: '<S241>/Merge'
     */
    (void)Rte_Write_VeCDMR_e_FaultSts_BatChrgModSwStk_Value(CDMR_ac_B.Merge_ms);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCDMR_e_FaultSts_BatChrgModSwStk' */

    /* Outport: '<Root>/VeCDMR_e_FaultSts_Module_Failure_BCIM' incorporates:
     *  Merge: '<S294>/Merge'
     *  SignalConversion generated from: '<S2>/VeCDMR_e_FaultSts_Module_Failure_BCIM'
     */
    (void)Rte_Write_VeCDMR_e_FaultSts_Module_Failure_BCIM_Value
        (CDMR_ac_B.Merge_ni);

    /* Outport: '<Root>/VeCDMR_e_FaultSts_Module_Failure_CPIM' incorporates:
     *  Merge: '<S343>/Merge'
     *  SignalConversion generated from: '<S2>/VeCDMR_e_FaultSts_Module_Failure_CPIM'
     */
    (void)Rte_Write_VeCDMR_e_FaultSts_Module_Failure_CPIM_Value
        (CDMR_ac_B.Merge_ns);

    /* SignalConversion generated from: '<S2>/VeCDMR_e_FaultSts_PwrOutletPanelMod1DigCommBus' incorporates:
     *  SignalConversion generated from: '<S2>/VeCDMR_e_FaultSts_PwrOutletPanelMod1InACPwrCktPerf'
     *  SignalConversion generated from: '<S2>/VeCDMR_e_FaultSts_PwrOutletPanelMod1LmpCntrl'
     *  SignalConversion generated from: '<S2>/VeCDMR_e_FaultSts_PwrOutletPanelMod1Perf'
     */
#if Rte_SysCon_Variant_CDMR_2

    /* Outport: '<Root>/VeCDMR_e_FaultSts_PwrOutletPanelMod1DigCommBus' incorporates:
     *  Merge: '<S560>/Merge'
     */
    (void)Rte_Write_VeCDMR_e_FaultSts_PwrOutletPanelMod1DigCommBus_Value
        (CDMR_ac_B.Merge_m4);

    /* Outport: '<Root>/VeCDMR_e_FaultSts_PwrOutletPanelMod1InACPwrCktPerf' incorporates:
     *  Merge: '<S561>/Merge'
     */
    (void)Rte_Write_VeCDMR_e_FaultSts_PwrOutletPanelMod1InACPwrCktPerf_Value
        (CDMR_ac_B.Merge_c);

    /* Outport: '<Root>/VeCDMR_e_FaultSts_PwrOutletPanelMod1LmpCntrl' incorporates:
     *  Merge: '<S562>/Merge'
     */
    (void)Rte_Write_VeCDMR_e_FaultSts_PwrOutletPanelMod1LmpCntrl_Value
        (CDMR_ac_B.Merge_cm);

    /* Outport: '<Root>/VeCDMR_e_FaultSts_PwrOutletPanelMod1Perf' incorporates:
     *  Merge: '<S563>/Merge'
     */
    (void)Rte_Write_VeCDMR_e_FaultSts_PwrOutletPanelMod1Perf_Value
        (CDMR_ac_B.Merge_a);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCDMR_e_FaultSts_PwrOutletPanelMod1DigCommBus' */

    /* SignalConversion generated from: '<S2>/VeCDMR_e_FaultSts_PwrOutletPanelMod2DigCommBus' incorporates:
     *  SignalConversion generated from: '<S2>/VeCDMR_e_FaultSts_PwrOutletPanelMod2InACPwrCktPerf'
     *  SignalConversion generated from: '<S2>/VeCDMR_e_FaultSts_PwrOutletPanelMod2LmpCntrl'
     *  SignalConversion generated from: '<S2>/VeCDMR_e_FaultSts_PwrOutletPanelMod2Perf'
     */
#if Rte_SysCon_Variant_CDMR_3

    /* Outport: '<Root>/VeCDMR_e_FaultSts_PwrOutletPanelMod2DigCommBus' incorporates:
     *  Merge: '<S440>/Merge'
     */
    (void)Rte_Write_VeCDMR_e_FaultSts_PwrOutletPanelMod2DigCommBus_Value
        (CDMR_ac_B.Merge);

    /* Outport: '<Root>/VeCDMR_e_FaultSts_PwrOutletPanelMod2InACPwrCktPerf' incorporates:
     *  Merge: '<S441>/Merge'
     */
    (void)Rte_Write_VeCDMR_e_FaultSts_PwrOutletPanelMod2InACPwrCktPerf_Value
        (CDMR_ac_B.Merge_m);

    /* Outport: '<Root>/VeCDMR_e_FaultSts_PwrOutletPanelMod2LmpCntrl' incorporates:
     *  Merge: '<S442>/Merge'
     */
    (void)Rte_Write_VeCDMR_e_FaultSts_PwrOutletPanelMod2LmpCntrl_Value
        (CDMR_ac_B.Merge_b);

    /* Outport: '<Root>/VeCDMR_e_FaultSts_PwrOutletPanelMod2Perf' incorporates:
     *  Merge: '<S443>/Merge'
     */
    (void)Rte_Write_VeCDMR_e_FaultSts_PwrOutletPanelMod2Perf_Value
        (CDMR_ac_B.Merge_n);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCDMR_e_FaultSts_PwrOutletPanelMod2DigCommBus' */
    /* End of Outputs for SubSystem: '<Root>/CDMR_MedTEH' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
#endif

}

#endif

/* Output function */
FUNC(void, CDMR_CODE) CDMR_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/CDMR_PwrOff'
     */
    /* Outport: '<Root>/NeCDMR_Cnt_BCIMInternal_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeCDMR_Cnt_BCIMInternal_MFOP'
     */
    (void)Rte_Write_NeCDMR_Cnt_BCIMInternal_MFOP_NeCDMR_Cnt_BCIMInternal_MFOP
        (CDMR_ac_DW.NeCDMR_Cnt_BCIMInternal_MFOP);

    /* Outport: '<Root>/NeCDMR_Cnt_CPIMInternal_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeCDMR_Cnt_CPIMInternal_MFOP'
     */
    (void)Rte_Write_NeCDMR_Cnt_CPIMInternal_MFOP_NeCDMR_Cnt_CPIMInternal_MFOP
        (CDMR_ac_DW.NeCDMR_Cnt_CPIMInternal_MFOP);

    /* Outport: '<Root>/NeCDMR_Cnt_ChgPrtLckFailHMFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeCDMR_Cnt_ChgPrtLckFailHMFOP'
     */
    (void)Rte_Write_NeCDMR_Cnt_ChgPrtLckFailHMFOP_NeCDMR_Cnt_ChgPrtLckFailHMFOP
        (CDMR_ac_DW.NeCDMR_Cnt_ChgPrtLckFailHMFOP);

    /* Outport: '<Root>/NeCDMR_Cnt_ChgPrtLckFailLMFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeCDMR_Cnt_ChgPrtLckFailLMFOP'
     */
    (void)Rte_Write_NeCDMR_Cnt_ChgPrtLckFailLMFOP_NeCDMR_Cnt_ChgPrtLckFailLMFOP
        (CDMR_ac_DW.NeCDMR_Cnt_ChgPrtLckFailLMFOP);

    /* Outport: '<Root>/NeCDMR_Cnt_ChrgPortLock_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeCDMR_Cnt_ChrgPortLock_MFOP'
     */
    (void)Rte_Write_NeCDMR_Cnt_ChrgPortLock_MFOP_NeCDMR_Cnt_ChrgPortLock_MFOP
        (CDMR_ac_DW.NeCDMR_Cnt_ChrgPortLock_MFOP);

    /* Outport: '<Root>/NeCDMR_Cnt_ChrgPortUnlock_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeCDMR_Cnt_ChrgPortUnlock_MFOP'
     */
    (void)
        Rte_Write_NeCDMR_Cnt_ChrgPortUnlock_MFOP_NeCDMR_Cnt_ChrgPortUnlock_MFOP
        (CDMR_ac_DW.NeCDMR_Cnt_ChrgPortUnlock_MFOP);

    /* Outport: '<Root>/NeCDMR_Cnt_InletSensor_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeCDMR_Cnt_InletSensor_MFOP'
     */
    (void)Rte_Write_NeCDMR_Cnt_InletSensor_MFOP_NeCDMR_Cnt_InletSensor_MFOP
        (CDMR_ac_DW.NeCDMR_Cnt_InletSensor_MFOP);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Output function */
FUNC(void, CDMR_CODE) CDMR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/CDMR_PwrOn'
     */
    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/DSM_Init'
     */
    /* DataStoreWrite: '<S660>/NeCDMR_Cnt_InletSensor_MFOP8' incorporates:
     *  Inport: '<Root>/NeCDMR_Cnt_PwrOutletPanelMod2InACPwrCktPerf_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeCDMR_Cnt_PwrOutletPanelMod2InACPwrCktPerf_MFOP_Rx_NeCDMR_Cnt_PwrOutletPanelMod2InACPwrCktPerf_MFOP
        (&CDMR_ac_DW.NeCDMR_Cnt_PwrOutletPanelMod2InACPwrCktP);

    /* DataStoreWrite: '<S660>/NeCDMR_Cnt_InletSensor_MFOP7' incorporates:
     *  Inport: '<Root>/NeCDMR_Cnt_PwrOutletPanelMod1InACPwrCktPerf_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeCDMR_Cnt_PwrOutletPanelMod1InACPwrCktPerf_MFOP_Rx_NeCDMR_Cnt_PwrOutletPanelMod1InACPwrCktPerf_MFOP
        (&CDMR_ac_DW.NeCDMR_Cnt_PwrOutletPanelMod1InACPwrCktP);

    /* DataStoreWrite: '<S660>/NeCDMR_Cnt_InletSensor_MFOP6' incorporates:
     *  Inport: '<Root>/NeCDMR_Cnt_PwrOutletPanelMod2LmpCntrl_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeCDMR_Cnt_PwrOutletPanelMod2LmpCntrl_MFOP_Rx_NeCDMR_Cnt_PwrOutletPanelMod2LmpCntrl_MFOP
        (&CDMR_ac_DW.NeCDMR_Cnt_PwrOutletPanelMod2LmpCntrl_MF);

    /* DataStoreWrite: '<S660>/NeCDMR_Cnt_InletSensor_MFOP5' incorporates:
     *  Inport: '<Root>/NeCDMR_Cnt_PwrOutletPanelMod1LmpCntrl_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeCDMR_Cnt_PwrOutletPanelMod1LmpCntrl_MFOP_Rx_NeCDMR_Cnt_PwrOutletPanelMod1LmpCntrl_MFOP
        (&CDMR_ac_DW.NeCDMR_Cnt_PwrOutletPanelMod1LmpCntrl_MF);

    /* DataStoreWrite: '<S660>/NeCDMR_Cnt_InletSensor_MFOP4' incorporates:
     *  Inport: '<Root>/NeCDMR_Cnt_PwrOutletPanelMod2DigCommBus_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeCDMR_Cnt_PwrOutletPanelMod2DigCommBus_MFOP_Rx_NeCDMR_Cnt_PwrOutletPanelMod2DigCommBus_MFOP
        (&CDMR_ac_DW.NeCDMR_Cnt_PwrOutletPanelMod2DigCommBus_);

    /* DataStoreWrite: '<S660>/NeCDMR_Cnt_InletSensor_MFOP3' incorporates:
     *  Inport: '<Root>/NeCDMR_Cnt_DTCShortName1_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeCDMR_Cnt_DTCShortName1_MFOP_Rx_NeCDMR_Cnt_DTCShortName1_MFOP(
        &CDMR_ac_DW.NeCDMR_Cnt_PwrOutletPanelMod1DigCommBus_);

    /* DataStoreWrite: '<S660>/NeCDMR_Cnt_InletSensor_MFOP2' incorporates:
     *  Inport: '<Root>/NeCDMR_Cnt_DTCShortName6_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeCDMR_Cnt_DTCShortName6_MFOP_Rx_NeCDMR_Cnt_DTCShortName6_MFOP(
        &CDMR_ac_DW.NeCDMR_Cnt_PwrOutletPanelMod2Perf_MFOP);

    /* DataStoreWrite: '<S660>/NeCDMR_Cnt_InletSensor_MFOP1' incorporates:
     *  Inport: '<Root>/NeCDMR_Cnt_PwrOutletPanelMod1Perf_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeCDMR_Cnt_PwrOutletPanelMod1Perf_MFOP_Rx_NeCDMR_Cnt_PwrOutletPanelMod1Perf_MFOP
        (&CDMR_ac_DW.NeCDMR_Cnt_PwrOutletPanelMod1Perf_MFOP);

    /* DataStoreWrite: '<S660>/NeCDMR_Cnt_InletSensor_MFOP' incorporates:
     *  Inport: '<Root>/NeCDMR_Cnt_InletSensor_MFOP_PM_In'
     */
    (void)Rte_Read_NeCDMR_Cnt_InletSensor_MFOP_Rx_NeCDMR_Cnt_InletSensor_MFOP
        (&CDMR_ac_DW.NeCDMR_Cnt_InletSensor_MFOP);

    /* DataStoreWrite: '<S660>/NeCDMR_Cnt_ChrgPortUnlock_MFOP' incorporates:
     *  Inport: '<Root>/NeCDMR_Cnt_ChrgPortUnlock_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeCDMR_Cnt_ChrgPortUnlock_MFOP_Rx_NeCDMR_Cnt_ChrgPortUnlock_MFOP
        (&CDMR_ac_DW.NeCDMR_Cnt_ChrgPortUnlock_MFOP);

    /* DataStoreWrite: '<S660>/NeCDMR_Cnt_ChrgPortLock_MFOP' incorporates:
     *  Inport: '<Root>/NeCDMR_Cnt_ChrgPortLock_MFOP_PM_In'
     */
    (void)Rte_Read_NeCDMR_Cnt_ChrgPortLock_MFOP_Rx_NeCDMR_Cnt_ChrgPortLock_MFOP(
        &CDMR_ac_DW.NeCDMR_Cnt_ChrgPortLock_MFOP);

    /* DataStoreWrite: '<S660>/NeCDMR_Cnt_ChgPrtLckFailLMFOP' incorporates:
     *  Inport: '<Root>/NeCDMR_Cnt_ChgPrtLckFailLMFOP_PM_In'
     */
    (void)
        Rte_Read_NeCDMR_Cnt_ChgPrtLckFailLMFOP_Rx_NeCDMR_Cnt_ChgPrtLckFailLMFOP(
        &CDMR_ac_DW.NeCDMR_Cnt_ChgPrtLckFailLMFOP);

    /* DataStoreWrite: '<S660>/NeCDMR_Cnt_ChgPrtLckFailHMFOP' incorporates:
     *  Inport: '<Root>/NeCDMR_Cnt_ChgPrtLckFailHMFOP_PM_In'
     */
    (void)
        Rte_Read_NeCDMR_Cnt_ChgPrtLckFailHMFOP_Rx_NeCDMR_Cnt_ChgPrtLckFailHMFOP(
        &CDMR_ac_DW.NeCDMR_Cnt_ChgPrtLckFailHMFOP);

    /* DataStoreWrite: '<S660>/NeCDMR_Cnt_CPIMInternal_MFOP' incorporates:
     *  Inport: '<Root>/NeCDMR_Cnt_CPIMInternal_MFOP_PM_In'
     */
    (void)Rte_Read_NeCDMR_Cnt_CPIMInternal_MFOP_Rx_NeCDMR_Cnt_CPIMInternal_MFOP(
        &CDMR_ac_DW.NeCDMR_Cnt_CPIMInternal_MFOP);

    /* DataStoreWrite: '<S660>/NeCDMR_Cnt_BCIMInternal_MFOP' incorporates:
     *  Inport: '<Root>/NeCDMR_Cnt_BCIMInternal_MFOP_PM_In'
     */
    (void)Rte_Read_NeCDMR_Cnt_BCIMInternal_MFOP_Rx_NeCDMR_Cnt_BCIMInternal_MFOP(
        &CDMR_ac_DW.NeCDMR_Cnt_BCIMInternal_MFOP);

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/CDMO_NF'
     */
    /* SignalConversion generated from: '<S659>/VeCDMR_b_ChgPrtLckLowDTC_NF' incorporates:
     *  Constant: '<S681>/Calib'
     */
    CDMR_ac_B.OutportBufferForVeCDMR_b_ChgPrtLckLowDTC =
        KeCDMR_b_ChrgPrtLckLow_Val;

    /* SignalConversion generated from: '<S659>/VeCDMR_b_ChgPrtLckHiDTC_NF' incorporates:
     *  Constant: '<S680>/Calib'
     */
    CDMR_ac_B.OutportBufferForVeCDMR_b_ChgPrtLckHiDTC_ =
        KeCDMR_b_ChrgPrtLckHi_Val;

    /* SignalConversion generated from: '<S659>/VeCDMR_b_ChrgPortUL_FltDtct_NF' incorporates:
     *  Constant: '<S679>/Calib'
     */
    CDMR_ac_B.OutportBufferForVeCDMR_b_ChrgPortUL_FltD =
        KeCDMR_b_ChrgPortUL_FltDtct_Val;

    /* SignalConversion generated from: '<S659>/VeCDMR_b_ChrgPortLK_FltDtct_NF' incorporates:
     *  Constant: '<S678>/Calib'
     */
    CDMR_ac_B.OutportBufferForVeCDMR_b_ChrgPortLK_FltD =
        KeCDMR_b_ChrgPortLK_FltDtct_Val;

    /* SignalConversion generated from: '<S659>/VeCDMR_b_IUMPR_ChrgPortLock_NF' incorporates:
     *  Constant: '<S682>/Calib'
     */
    CDMR_ac_B.OutportBufferForVeCDMR_b_IUMPR_ChrgPortL =
        KeCDMR_b_IUMPR_ChrgPortLock_Val;

    /* SignalConversion generated from: '<S659>/VeCDMR_b_IUMPR_ChrgPortULock_NF' incorporates:
     *  Constant: '<S683>/Calib'
     */
    CDMR_ac_B.OutportBufferForVeCDMR_b_IUMPR_ChrgPortU =
        KeCDMR_b_IUMPR_ChrgPortULock_Val;

    /* SignalConversion generated from: '<S659>/VeCDMR_b_IUMPR_DeviceCmdOn_LK_NF' incorporates:
     *  Constant: '<S684>/Calib'
     */
    CDMR_ac_B.OutportBufferForVeCDMR_b_IUMPR_DeviceCmd =
        KeCDMR_b_IUMPR_DeviceCmdOnLK_Val;

    /* SignalConversion generated from: '<S659>/VeCDMR_b_IUMPR_DeviceCmdOn_UL_NF' incorporates:
     *  Constant: '<S685>/Calib'
     */
    CDMR_ac_B.OutportBufferForVeCDMR_b_IUMPR_DeviceC_h =
        KeCDMR_b_IUMPR_DeviceCmdOnUL_Val;

    /* SignalConversion generated from: '<S659>/VeCDMR_b_CPIM_ClrMismtch_NF' */
    CDMR_ac_B.OutportBufferForVeCDMR_b_CPIM_ClrMismtch = false;

    /* SignalConversion generated from: '<S659>/VeCDMR_b_CPIM_Icon_Mismtch_NF' */
    CDMR_ac_B.OutportBufferForVeCDMR_b_CPIM_Icon_Mismt = false;

    /* SignalConversion generated from: '<S659>/VeCDMR_b_CPIM_LED_ShrtOrOpn_NF' */
    CDMR_ac_B.OutportBufferForVeCDMR_b_CPIM_LED_ShrtOr = false;

    /* SignalConversion generated from: '<S659>/VeCDMR_b_CPIM_HW_BusFlt_NF' */
    CDMR_ac_B.OutportBufferForVeCDMR_b_CPIM_HW_BusFlt_ = false;

    /* SignalConversion generated from: '<S659>/VeCDMR_b_BCIM_ClrMismtch_NF' */
    CDMR_ac_B.OutportBufferForVeCDMR_b_BCIM_ClrMismtch = false;

    /* SignalConversion generated from: '<S659>/VeCDMR_b_BCIM_LED_ShrtOrOpn_NF' */
    CDMR_ac_B.OutportBufferForVeCDMR_b_BCIM_LED_ShrtOr = false;

    /* SignalConversion generated from: '<S659>/VeCDMR_b_BCIM_HW_BusFlt_NF' */
    CDMR_ac_B.OutportBufferForVeCDMR_b_BCIM_HW_BusFlt_ = false;

    /* SignalConversion generated from: '<S659>/VeCDMR_e_FaultSts_BattChrgPrtLckCktLo' incorporates:
     *  Constant: '<S662>/Constant'
     */
    CDMR_ac_B.OutportBufferForVeCDMR_e_FaultSts_BattCh =
        CDMR_ac_ConstB.Constant_e;

    /* SignalConversion generated from: '<S659>/VeCDMR_e_FaultSts_BattChrgPrtLckCkttHi' incorporates:
     *  Constant: '<S663>/Constant'
     */
    CDMR_ac_B.OutportBufferForVeCDMR_e_FaultSts_Batt_g =
        CDMR_ac_ConstB.Constant_ev;

    /* SignalConversion generated from: '<S659>/VeCDMR_e_FaultSts_ChrgPortLckCtrlCktPerf' incorporates:
     *  Constant: '<S664>/Constant'
     */
    CDMR_ac_B.OutportBufferForVeCDMR_e_FaultSts_ChrgPo =
        CDMR_ac_ConstB.Constant_f;

    /* SignalConversion generated from: '<S659>/VeCDMR_e_FaultSts_ChrgPortULCtrlCktPerf' incorporates:
     *  Constant: '<S665>/Constant'
     */
    CDMR_ac_B.OutportBufferForVeCDMR_e_FaultSts_Chrg_b =
        CDMR_ac_ConstB.Constant_l;

    /* SignalConversion generated from: '<S659>/VeCDMR_e_FaultSts_BatChrgModSwStk' incorporates:
     *  Constant: '<S666>/Constant'
     */
    CDMR_ac_B.OutportBufferForVeCDMR_e_FaultSts_BatChr =
        CDMR_ac_ConstB.Constant_a;

    /* SignalConversion generated from: '<S659>/VeCDMR_e_FaultSts_Module_Failure_BCIM' incorporates:
     *  Constant: '<S667>/Constant'
     */
    CDMR_ac_B.OutportBufferForVeCDMR_e_FaultSts_Module =
        CDMR_ac_ConstB.Constant_m;

    /* SignalConversion generated from: '<S659>/VeCDMR_e_FaultSts_Module_Failure_CPIM' incorporates:
     *  Constant: '<S668>/Constant'
     */
    CDMR_ac_B.OutportBufferForVeCDMR_e_FaultSts_Modu_d =
        CDMR_ac_ConstB.Constant_lb;

    /* SignalConversion generated from: '<S659>/VeCDMR_e_FaultSts_BatChaCouTemATooHig' incorporates:
     *  Constant: '<S669>/Constant'
     */
    CDMR_ac_B.OutportBufferForVeCDMR_e_FaultSts_BatCha =
        CDMR_ac_ConstB.Constant_k;

    /* SignalConversion generated from: '<S659>/VeCDMR_e_FaultSts_PwrOutletPanelMod1Perf' incorporates:
     *  Constant: '<S670>/Constant'
     */
    CDMR_ac_B.OutportBufferForVeCDMR_e_FaultSts_PwrOut =
        CDMR_ac_ConstB.Constant_d;

    /* SignalConversion generated from: '<S659>/VeCDMR_e_FaultSts_PwrOutletPanelMod2Perf' incorporates:
     *  Constant: '<S671>/Constant'
     */
    CDMR_ac_B.OutportBufferForVeCDMR_e_FaultSts_PwrO_a =
        CDMR_ac_ConstB.Constant_j;

    /* SignalConversion generated from: '<S659>/VeCDMR_e_FaultSts_PwrOutletPanelMod1DigCommBus' incorporates:
     *  Constant: '<S672>/Constant'
     */
    CDMR_ac_B.OutportBufferForVeCDMR_e_FaultSts_PwrO_c =
        CDMR_ac_ConstB.Constant_n;

    /* SignalConversion generated from: '<S659>/VeCDMR_e_FaultSts_PwrOutletPanelMod2DigCommBus' incorporates:
     *  Constant: '<S673>/Constant'
     */
    CDMR_ac_B.OutportBufferForVeCDMR_e_FaultSts_PwrO_n =
        CDMR_ac_ConstB.Constant_n2;

    /* SignalConversion generated from: '<S659>/VeCDMR_e_FaultSts_PwrOutletPanelMod1LmpCntrl' incorporates:
     *  Constant: '<S674>/Constant'
     */
    CDMR_ac_B.OutportBufferForVeCDMR_e_FaultSts_PwrO_b =
        CDMR_ac_ConstB.Constant_nh;

    /* SignalConversion generated from: '<S659>/VeCDMR_e_FaultSts_PwrOutletPanelMod2LmpCntrl' incorporates:
     *  Constant: '<S675>/Constant'
     */
    CDMR_ac_B.OutportBufferForVeCDMR_e_FaultSts_PwrO_i =
        CDMR_ac_ConstB.Constant_o;

    /* SignalConversion generated from: '<S659>/VeCDMR_e_FaultSts_PwrOutletPanelMod1InACPwrCktPerf' incorporates:
     *  Constant: '<S676>/Constant'
     */
    CDMR_ac_B.OutportBufferForVeCDMR_e_FaultSts_PwrO_e =
        CDMR_ac_ConstB.Constant_g;

    /* SignalConversion generated from: '<S659>/VeCDMR_e_FaultSts_PwrOutletPanelMod2InACPwrCktPerf' incorporates:
     *  Constant: '<S677>/Constant'
     */
    CDMR_ac_B.OutportBufferForVeCDMR_e_FaultSts_PwrO_k =
        CDMR_ac_ConstB.Constant_k4;

    /* SignalConversion generated from: '<S4>/BCIMCommBusFaultStatus_write' incorporates:
     *  SignalConversion generated from: '<S4>/CPIMCommBusFaultStatus_write'
     *  SignalConversion generated from: '<S4>/CPIMLostCommFaultStatus_write'
     *  SignalConversion generated from: '<S4>/ChargingSystemSts_write'
     *  SignalConversion generated from: '<S4>/ChgPrtLckHiDTC_write'
     *  SignalConversion generated from: '<S4>/ChgPrtLckLowDTC_write'
     *  SignalConversion generated from: '<S4>/ChrgPortLK_FltDtct_write'
     *  SignalConversion generated from: '<S4>/ChrgPortUL_FltDtct_write'
     *  SignalConversion generated from: '<S4>/DsblDiagFailSafe_write'
     *  SignalConversion generated from: '<S4>/IUMPRInhibit_P0CD2_write'
     *  SignalConversion generated from: '<S4>/IUMPRInhibit_P0D94_write'
     *  SignalConversion generated from: '<S4>/IUMPR_DeviceCmdOn_LK_write'
     *  SignalConversion generated from: '<S4>/IUMPR_DeviceCmdOn_UL_write'
     *  SignalConversion generated from: '<S4>/IsDiagGlobalConditionsValid_write'
     *  SignalConversion generated from: '<S4>/PluggedIn_write'
     *  SignalConversion generated from: '<S4>/PostCodeClrDiagDsbl_write'
     */
#if Rte_SysCon_Variant_CDMR_4

    /* Outputs for Function Call SubSystem: '<S4>/Sub_Out_Init' */
    /* SignalConversion generated from: '<S661>/ChgPrtLckLowDTC_write' */
    CDMR_ac_B.OutportBufferForChgPrtLckLowDTC_write = false;

    /* SignalConversion generated from: '<S661>/ChgPrtLckHiDTC_write' */
    CDMR_ac_B.OutportBufferForChgPrtLckHiDTC_write = false;

    /* SignalConversion generated from: '<S661>/ChrgPortUL_FltDtct_write' */
    CDMR_ac_B.OutportBufferForChrgPortUL_FltDtct_write = false;

    /* SignalConversion generated from: '<S661>/ChrgPortLK_FltDtct_write' */
    CDMR_ac_B.OutportBufferForChrgPortLK_FltDtct_write = false;

    /* SignalConversion generated from: '<S661>/IUMPRInhibit_P0D94_write' */
    CDMR_ac_B.OutportBufferForIUMPRInhibit_P0D94_write = false;

    /* SignalConversion generated from: '<S661>/IUMPRInhibit_P0CD2_write' */
    CDMR_ac_B.OutportBufferForIUMPRInhibit_P0CD2_write = false;

    /* SignalConversion generated from: '<S661>/IUMPR_DeviceCmdOn_LK_write' */
    CDMR_ac_B.OutportBufferForIUMPR_DeviceCmdOn_LK_wri = false;

    /* SignalConversion generated from: '<S661>/IUMPR_DeviceCmdOn_UL_write' */
    CDMR_ac_B.OutportBufferForIUMPR_DeviceCmdOn_UL_wri = false;

    /* SignalConversion generated from: '<S661>/DsblDiagFailSafe_write' */
    CDMR_ac_B.OutportBufferForDsblDiagFailSafe_write = false;

    /* SignalConversion generated from: '<S661>/PostCodeClrDiagDsbl_write' */
    CDMR_ac_B.OutportBufferForPostCodeClrDiagDsbl_writ = false;

    /* SignalConversion generated from: '<S661>/CPIMCommBusFaultStatus_write' */
    CDMR_ac_B.OutportBufferForCPIMCommBusFaultStatus_w = false;

    /* SignalConversion generated from: '<S661>/CPIMLostCommFaultStatus_write' */
    CDMR_ac_B.OutportBufferForCPIMLostCommFaultStatus_ = false;

    /* SignalConversion generated from: '<S661>/IsDiagGlobalConditionsValid_write' */
    CDMR_ac_B.OutportBufferForIsDiagGlobalConditionsVa = false;

    /* SignalConversion generated from: '<S661>/PluggedIn_write' */
    CDMR_ac_B.OutportBufferForPluggedIn_write = false;

    /* SignalConversion generated from: '<S661>/ChargingSystemSts_write' incorporates:
     *  Constant: '<S686>/Constant'
     */
    CDMR_ac_B.OutportBufferForChargingSystemSts_write = CDMR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S661>/BCIMCommBusFaultStatus_write' */
    CDMR_ac_B.OutportBufferForBCIMCommBusFaultStatus_w = false;

    /* End of Outputs for SubSystem: '<S4>/Sub_Out_Init' */
    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */
#endif

    /* End of SignalConversion generated from: '<S4>/BCIMCommBusFaultStatus_write' */

    /* Outport: '<Root>/VeCDMR_e_FaultSts_BatChaCouTemATooHig' incorporates:
     *  SignalConversion generated from: '<S4>/R_VeCDMR_e_FaultSts_BatChaCouTemATooHig'
     *  SignalConversion generated from: '<S659>/VeCDMR_e_FaultSts_BatChaCouTemATooHig'
     */
    (void)Rte_Write_VeCDMR_e_FaultSts_BatChaCouTemATooHig_Value
        (CDMR_ac_B.OutportBufferForVeCDMR_e_FaultSts_BatCha);

    /* Outport: '<Root>/VeCDMR_e_FaultSts_BatChrgModSwStk' incorporates:
     *  SignalConversion generated from: '<S4>/R_VeCDMR_e_FaultSts_BatChrgModSwStk'
     *  SignalConversion generated from: '<S659>/VeCDMR_e_FaultSts_BatChrgModSwStk'
     */
    (void)Rte_Write_VeCDMR_e_FaultSts_BatChrgModSwStk_Value
        (CDMR_ac_B.OutportBufferForVeCDMR_e_FaultSts_BatChr);

    /* Outport: '<Root>/VeCDMR_e_FaultSts_BattChrgPrtLckCktLo' incorporates:
     *  SignalConversion generated from: '<S4>/R_VeCDMR_e_FaultSts_BattChrgPrtLckCktLo'
     *  SignalConversion generated from: '<S659>/VeCDMR_e_FaultSts_BattChrgPrtLckCktLo'
     */
    (void)Rte_Write_VeCDMR_e_FaultSts_BattChrgPrtLckCktLo_Value
        (CDMR_ac_B.OutportBufferForVeCDMR_e_FaultSts_BattCh);

    /* Outport: '<Root>/VeCDMR_e_FaultSts_BattChrgPrtLckCkttHi' incorporates:
     *  SignalConversion generated from: '<S4>/R_VeCDMR_e_FaultSts_BattChrgPrtLckCkttHi'
     *  SignalConversion generated from: '<S659>/VeCDMR_e_FaultSts_BattChrgPrtLckCkttHi'
     */
    (void)Rte_Write_VeCDMR_e_FaultSts_BattChrgPrtLckCkttHi_Value
        (CDMR_ac_B.OutportBufferForVeCDMR_e_FaultSts_Batt_g);

    /* Outport: '<Root>/VeCDMR_e_FaultSts_ChrgPortLckCtrlCktPerf' incorporates:
     *  SignalConversion generated from: '<S4>/R_VeCDMR_e_FaultSts_ChrgPortLckCtrlCktPerf'
     *  SignalConversion generated from: '<S659>/VeCDMR_e_FaultSts_ChrgPortLckCtrlCktPerf'
     */
    (void)Rte_Write_VeCDMR_e_FaultSts_ChrgPortLckCtrlCktPerf_Value
        (CDMR_ac_B.OutportBufferForVeCDMR_e_FaultSts_ChrgPo);

    /* Outport: '<Root>/VeCDMR_e_FaultSts_ChrgPortULCtrlCktPerf' incorporates:
     *  SignalConversion generated from: '<S4>/R_VeCDMR_e_FaultSts_ChrgPortULCtrlCktPerf'
     *  SignalConversion generated from: '<S659>/VeCDMR_e_FaultSts_ChrgPortULCtrlCktPerf'
     */
    (void)Rte_Write_VeCDMR_e_FaultSts_ChrgPortULCtrlCktPerf_Value
        (CDMR_ac_B.OutportBufferForVeCDMR_e_FaultSts_Chrg_b);

    /* Outport: '<Root>/VeCDMR_e_FaultSts_Module_Failure_BCIM' incorporates:
     *  SignalConversion generated from: '<S4>/R_VeCDMR_e_FaultSts_Module_Failure_BCIM'
     *  SignalConversion generated from: '<S659>/VeCDMR_e_FaultSts_Module_Failure_BCIM'
     */
    (void)Rte_Write_VeCDMR_e_FaultSts_Module_Failure_BCIM_Value
        (CDMR_ac_B.OutportBufferForVeCDMR_e_FaultSts_Module);

    /* Outport: '<Root>/VeCDMR_e_FaultSts_Module_Failure_CPIM' incorporates:
     *  SignalConversion generated from: '<S4>/R_VeCDMR_e_FaultSts_Module_Failure_CPIM'
     *  SignalConversion generated from: '<S659>/VeCDMR_e_FaultSts_Module_Failure_CPIM'
     */
    (void)Rte_Write_VeCDMR_e_FaultSts_Module_Failure_CPIM_Value
        (CDMR_ac_B.OutportBufferForVeCDMR_e_FaultSts_Modu_d);

    /* Outport: '<Root>/VeCDMR_e_FaultSts_PwrOutletPanelMod1DigCommBus' incorporates:
     *  SignalConversion generated from: '<S4>/R_VeCDMR_e_FaultSts_PwrOutletPanelMod1DigCommBus'
     *  SignalConversion generated from: '<S659>/VeCDMR_e_FaultSts_PwrOutletPanelMod1DigCommBus'
     */
    (void)Rte_Write_VeCDMR_e_FaultSts_PwrOutletPanelMod1DigCommBus_Value
        (CDMR_ac_B.OutportBufferForVeCDMR_e_FaultSts_PwrO_c);

    /* Outport: '<Root>/VeCDMR_e_FaultSts_PwrOutletPanelMod1InACPwrCktPerf' incorporates:
     *  SignalConversion generated from: '<S4>/R_VeCDMR_e_FaultSts_PwrOutletPanelMod1InACPwrCktPerf'
     *  SignalConversion generated from: '<S659>/VeCDMR_e_FaultSts_PwrOutletPanelMod1InACPwrCktPerf'
     */
    (void)Rte_Write_VeCDMR_e_FaultSts_PwrOutletPanelMod1InACPwrCktPerf_Value
        (CDMR_ac_B.OutportBufferForVeCDMR_e_FaultSts_PwrO_e);

    /* Outport: '<Root>/VeCDMR_e_FaultSts_PwrOutletPanelMod1LmpCntrl' incorporates:
     *  SignalConversion generated from: '<S4>/R_VeCDMR_e_FaultSts_PwrOutletPanelMod1LmpCntrl'
     *  SignalConversion generated from: '<S659>/VeCDMR_e_FaultSts_PwrOutletPanelMod1LmpCntrl'
     */
    (void)Rte_Write_VeCDMR_e_FaultSts_PwrOutletPanelMod1LmpCntrl_Value
        (CDMR_ac_B.OutportBufferForVeCDMR_e_FaultSts_PwrO_b);

    /* Outport: '<Root>/VeCDMR_e_FaultSts_PwrOutletPanelMod1Perf' incorporates:
     *  SignalConversion generated from: '<S4>/R_VeCDMR_e_FaultSts_PwrOutletPanelMod1Perf'
     *  SignalConversion generated from: '<S659>/VeCDMR_e_FaultSts_PwrOutletPanelMod1Perf'
     */
    (void)Rte_Write_VeCDMR_e_FaultSts_PwrOutletPanelMod1Perf_Value
        (CDMR_ac_B.OutportBufferForVeCDMR_e_FaultSts_PwrOut);

    /* Outport: '<Root>/VeCDMR_e_FaultSts_PwrOutletPanelMod2DigCommBus' incorporates:
     *  SignalConversion generated from: '<S4>/R_VeCDMR_e_FaultSts_PwrOutletPanelMod2DigCommBus'
     *  SignalConversion generated from: '<S659>/VeCDMR_e_FaultSts_PwrOutletPanelMod2DigCommBus'
     */
    (void)Rte_Write_VeCDMR_e_FaultSts_PwrOutletPanelMod2DigCommBus_Value
        (CDMR_ac_B.OutportBufferForVeCDMR_e_FaultSts_PwrO_n);

    /* Outport: '<Root>/VeCDMR_e_FaultSts_PwrOutletPanelMod2InACPwrCktPerf' incorporates:
     *  SignalConversion generated from: '<S4>/R_VeCDMR_e_FaultSts_PwrOutletPanelMod2InACPwrCktPerf'
     *  SignalConversion generated from: '<S659>/VeCDMR_e_FaultSts_PwrOutletPanelMod2InACPwrCktPerf'
     */
    (void)Rte_Write_VeCDMR_e_FaultSts_PwrOutletPanelMod2InACPwrCktPerf_Value
        (CDMR_ac_B.OutportBufferForVeCDMR_e_FaultSts_PwrO_k);

    /* Outport: '<Root>/VeCDMR_e_FaultSts_PwrOutletPanelMod2LmpCntrl' incorporates:
     *  SignalConversion generated from: '<S4>/R_VeCDMR_e_FaultSts_PwrOutletPanelMod2LmpCntrl'
     *  SignalConversion generated from: '<S659>/VeCDMR_e_FaultSts_PwrOutletPanelMod2LmpCntrl'
     */
    (void)Rte_Write_VeCDMR_e_FaultSts_PwrOutletPanelMod2LmpCntrl_Value
        (CDMR_ac_B.OutportBufferForVeCDMR_e_FaultSts_PwrO_i);

    /* Outport: '<Root>/VeCDMR_e_FaultSts_PwrOutletPanelMod2Perf' incorporates:
     *  SignalConversion generated from: '<S4>/R_VeCDMR_e_FaultSts_PwrOutletPanelMod2Perf'
     *  SignalConversion generated from: '<S659>/VeCDMR_e_FaultSts_PwrOutletPanelMod2Perf'
     */
    (void)Rte_Write_VeCDMR_e_FaultSts_PwrOutletPanelMod2Perf_Value
        (CDMR_ac_B.OutportBufferForVeCDMR_e_FaultSts_PwrO_a);

    /* Outport: '<Root>/VeCDMR_b_BCIM_ClrMismtch' incorporates:
     *  SignalConversion generated from: '<S4>/VeCDMR_b_BCIM_ClrMismtch_NF'
     */
    (void)Rte_Write_VeCDMR_b_BCIM_ClrMismtch_Value
        (CDMR_ac_B.OutportBufferForVeCDMR_b_BCIM_ClrMismtch);

    /* Outport: '<Root>/VeCDMR_b_BCIM_HW_BusFlt' incorporates:
     *  SignalConversion generated from: '<S4>/VeCDMR_b_BCIM_HW_BusFlt_NF'
     */
    (void)Rte_Write_VeCDMR_b_BCIM_HW_BusFlt_Value
        (CDMR_ac_B.OutportBufferForVeCDMR_b_BCIM_HW_BusFlt_);

    /* Outport: '<Root>/VeCDMR_b_BCIM_LED_ShrtOrOpn' incorporates:
     *  SignalConversion generated from: '<S4>/VeCDMR_b_BCIM_LED_ShrtOrOpn_NF'
     */
    (void)Rte_Write_VeCDMR_b_BCIM_LED_ShrtOrOpn_Value
        (CDMR_ac_B.OutportBufferForVeCDMR_b_BCIM_LED_ShrtOr);

    /* Outport: '<Root>/VeCDMR_b_CPIM_ClrMismtch' incorporates:
     *  SignalConversion generated from: '<S4>/VeCDMR_b_CPIM_ClrMismtch_NF'
     */
    (void)Rte_Write_VeCDMR_b_CPIM_ClrMismtch_Value
        (CDMR_ac_B.OutportBufferForVeCDMR_b_CPIM_ClrMismtch);

    /* Outport: '<Root>/VeCDMR_b_CPIM_HW_BusFlt' incorporates:
     *  SignalConversion generated from: '<S4>/VeCDMR_b_CPIM_HW_BusFlt_NF'
     */
    (void)Rte_Write_VeCDMR_b_CPIM_HW_BusFlt_Value
        (CDMR_ac_B.OutportBufferForVeCDMR_b_CPIM_HW_BusFlt_);

    /* Outport: '<Root>/VeCDMR_b_CPIM_Icon_Mismtch' incorporates:
     *  SignalConversion generated from: '<S4>/VeCDMR_b_CPIM_Icon_Mismtch_NF'
     */
    (void)Rte_Write_VeCDMR_b_CPIM_Icon_Mismtch_Value
        (CDMR_ac_B.OutportBufferForVeCDMR_b_CPIM_Icon_Mismt);

    /* Outport: '<Root>/VeCDMR_b_CPIM_LED_ShrtOrOpn' incorporates:
     *  SignalConversion generated from: '<S4>/VeCDMR_b_CPIM_LED_ShrtOrOpn_NF'
     */
    (void)Rte_Write_VeCDMR_b_CPIM_LED_ShrtOrOpn_Value
        (CDMR_ac_B.OutportBufferForVeCDMR_b_CPIM_LED_ShrtOr);

    /* Outport: '<Root>/VeCDMR_b_ChgPrtLckHiDTC' incorporates:
     *  SignalConversion generated from: '<S4>/VeCDMR_b_ChgPrtLckHiDTC_NF'
     */
    (void)Rte_Write_VeCDMR_b_ChgPrtLckHiDTC_Value
        (CDMR_ac_B.OutportBufferForVeCDMR_b_ChgPrtLckHiDTC_);

    /* Outport: '<Root>/VeCDMR_b_ChgPrtLckLowDTC' incorporates:
     *  SignalConversion generated from: '<S4>/VeCDMR_b_ChgPrtLckLowDTC_NF'
     */
    (void)Rte_Write_VeCDMR_b_ChgPrtLckLowDTC_Value
        (CDMR_ac_B.OutportBufferForVeCDMR_b_ChgPrtLckLowDTC);

    /* Outport: '<Root>/VeCDMR_b_ChrgPortLK_FltDtct' incorporates:
     *  SignalConversion generated from: '<S4>/VeCDMR_b_ChrgPortLK_FltDtct_NF'
     */
    (void)Rte_Write_VeCDMR_b_ChrgPortLK_FltDtct_Value
        (CDMR_ac_B.OutportBufferForVeCDMR_b_ChrgPortLK_FltD);

    /* Outport: '<Root>/VeCDMR_b_ChrgPortUL_FltDtct' incorporates:
     *  SignalConversion generated from: '<S4>/VeCDMR_b_ChrgPortUL_FltDtct_NF'
     */
    (void)Rte_Write_VeCDMR_b_ChrgPortUL_FltDtct_Value
        (CDMR_ac_B.OutportBufferForVeCDMR_b_ChrgPortUL_FltD);

    /* Outport: '<Root>/VeCDMR_b_IUMPR_ChrgPortLock' incorporates:
     *  SignalConversion generated from: '<S4>/VeCDMR_b_IUMPR_ChrgPortLock_NF'
     */
    (void)Rte_Write_VeCDMR_b_IUMPR_ChrgPortLock_Value
        (CDMR_ac_B.OutportBufferForVeCDMR_b_IUMPR_ChrgPortL);

    /* Outport: '<Root>/VeCDMR_b_IUMPR_ChrgPortULock' incorporates:
     *  SignalConversion generated from: '<S4>/VeCDMR_b_IUMPR_ChrgPortULock_NF'
     */
    (void)Rte_Write_VeCDMR_b_IUMPR_ChrgPortULock_Value
        (CDMR_ac_B.OutportBufferForVeCDMR_b_IUMPR_ChrgPortU);

    /* Outport: '<Root>/VeCDMR_b_IUMPR_DeviceCmdOn_LK' incorporates:
     *  SignalConversion generated from: '<S4>/VeCDMR_b_IUMPR_DeviceCmdOn_LK_NF'
     */
    (void)Rte_Write_VeCDMR_b_IUMPR_DeviceCmdOn_LK_Value
        (CDMR_ac_B.OutportBufferForVeCDMR_b_IUMPR_DeviceCmd);

    /* Outport: '<Root>/VeCDMR_b_IUMPR_DeviceCmdOn_UL' incorporates:
     *  SignalConversion generated from: '<S4>/VeCDMR_b_IUMPR_DeviceCmdOn_UL_NF'
     */
    (void)Rte_Write_VeCDMR_b_IUMPR_DeviceCmdOn_UL_Value
        (CDMR_ac_B.OutportBufferForVeCDMR_b_IUMPR_DeviceC_h);

    /* SignalConversion generated from: '<S4>/BCIMCommBusFaultStatus_write' incorporates:
     *  SignalConversion generated from: '<S4>/CPIMCommBusFaultStatus_write'
     *  SignalConversion generated from: '<S4>/CPIMLostCommFaultStatus_write'
     *  SignalConversion generated from: '<S4>/ChargingSystemSts_write'
     *  SignalConversion generated from: '<S4>/ChgPrtLckHiDTC_write'
     *  SignalConversion generated from: '<S4>/ChgPrtLckLowDTC_write'
     *  SignalConversion generated from: '<S4>/ChrgPortLK_FltDtct_write'
     *  SignalConversion generated from: '<S4>/ChrgPortUL_FltDtct_write'
     *  SignalConversion generated from: '<S4>/DsblDiagFailSafe_write'
     *  SignalConversion generated from: '<S4>/IUMPRInhibit_P0CD2_write'
     *  SignalConversion generated from: '<S4>/IUMPRInhibit_P0D94_write'
     *  SignalConversion generated from: '<S4>/IUMPR_DeviceCmdOn_LK_write'
     *  SignalConversion generated from: '<S4>/IUMPR_DeviceCmdOn_UL_write'
     *  SignalConversion generated from: '<S4>/IsDiagGlobalConditionsValid_write'
     *  SignalConversion generated from: '<S4>/PluggedIn_write'
     *  SignalConversion generated from: '<S4>/PostCodeClrDiagDsbl_write'
     */
#if Rte_SysCon_Variant_CDMR_4

    /* Merge: '<Root>/BCIMCommBusFaultStatus_IRV_Merge' */
    Rte_IrvWrite_CDMR_PwrOn_BCIMCommBusFaultStatus_write_IRV
        (CDMR_ac_B.OutportBufferForBCIMCommBusFaultStatus_w);

    /* Merge: '<Root>/CPIMCommBusFaultStatus_IRV_Merge' */
    Rte_IrvWrite_CDMR_PwrOn_CPIMCommBusFaultStatus_write_IRV
        (CDMR_ac_B.OutportBufferForCPIMCommBusFaultStatus_w);

    /* Merge: '<Root>/CPIMLostCommFaultStatus_IRV_Merge' */
    Rte_IrvWrite_CDMR_PwrOn_CPIMLostCommFaultStatus_write_IRV
        (CDMR_ac_B.OutportBufferForCPIMLostCommFaultStatus_);

    /* Merge: '<Root>/ChargingSystemSts_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/ChargingSystemSts_write'
     */
    Rte_IrvWrite_CDMR_PwrOn_ChargingSystemSts_write_IRV
        (CDMR_ac_B.OutportBufferForChargingSystemSts_write);

    /* Merge: '<Root>/ChgPrtLckHiDTC_IRV_Merge' */
    Rte_IrvWrite_CDMR_PwrOn_ChgPrtLckHiDTC_write_IRV
        (CDMR_ac_B.OutportBufferForChgPrtLckHiDTC_write);

    /* Merge: '<Root>/ChgPrtLckLowDTC_IRV_Merge' */
    Rte_IrvWrite_CDMR_PwrOn_ChgPrtLckLowDTC_write_IRV
        (CDMR_ac_B.OutportBufferForChgPrtLckLowDTC_write);

    /* Merge: '<Root>/ChrgPortLK_FltDtct_IRV_Merge' */
    Rte_IrvWrite_CDMR_PwrOn_ChrgPortLK_FltDtct_write_IRV
        (CDMR_ac_B.OutportBufferForChrgPortLK_FltDtct_write);

    /* Merge: '<Root>/ChrgPortUL_FltDtct_IRV_Merge' */
    Rte_IrvWrite_CDMR_PwrOn_ChrgPortUL_FltDtct_write_IRV
        (CDMR_ac_B.OutportBufferForChrgPortUL_FltDtct_write);

    /* Merge: '<Root>/DsblDiagFailSafe_IRV_Merge' */
    Rte_IrvWrite_CDMR_PwrOn_DsblDiagFailSafe_write_IRV
        (CDMR_ac_B.OutportBufferForDsblDiagFailSafe_write);

    /* Merge: '<Root>/IUMPRInhibit_P0CD2_IRV_Merge' */
    Rte_IrvWrite_CDMR_PwrOn_IUMPRInhibit_P0CD2_write_IRV
        (CDMR_ac_B.OutportBufferForIUMPRInhibit_P0CD2_write);

    /* Merge: '<Root>/IUMPRInhibit_P0D94_IRV_Merge' */
    Rte_IrvWrite_CDMR_PwrOn_IUMPRInhibit_P0D94_write_IRV
        (CDMR_ac_B.OutportBufferForIUMPRInhibit_P0D94_write);

    /* Merge: '<Root>/IUMPR_DeviceCmdOn_LK_IRV_Merge' */
    Rte_IrvWrite_CDMR_PwrOn_IUMPR_DeviceCmdOn_LK_write_IRV
        (CDMR_ac_B.OutportBufferForIUMPR_DeviceCmdOn_LK_wri);

    /* Merge: '<Root>/IUMPR_DeviceCmdOn_UL_IRV_Merge' */
    Rte_IrvWrite_CDMR_PwrOn_IUMPR_DeviceCmdOn_UL_write_IRV
        (CDMR_ac_B.OutportBufferForIUMPR_DeviceCmdOn_UL_wri);

    /* Merge: '<Root>/IsDiagGlobalConditionsValid_IRV_Merge' */
    Rte_IrvWrite_CDMR_PwrOn_IsDiagGlobalConditionsValid_write_IRV
        (CDMR_ac_B.OutportBufferForIsDiagGlobalConditionsVa);

    /* Merge: '<Root>/PluggedIn_IRV_Merge' */
    Rte_IrvWrite_CDMR_PwrOn_PluggedIn_write_IRV
        (CDMR_ac_B.OutportBufferForPluggedIn_write);

    /* Merge: '<Root>/PostCodeClrDiagDsbl_IRV_Merge' */
    Rte_IrvWrite_CDMR_PwrOn_PostCodeClrDiagDsbl_write_IRV
        (CDMR_ac_B.OutportBufferForPostCodeClrDiagDsbl_writ);

#endif

    /* End of SignalConversion generated from: '<S4>/BCIMCommBusFaultStatus_write' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, CDMR_CODE) CDMR_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/CDMR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/CDMO_NF'
     */
    /* SystemInitialize for SignalConversion generated from: '<S659>/VeCDMR_b_ChgPrtLckLowDTC_NF' incorporates:
     *  Constant: '<S681>/Calib'
     */
    CDMR_ac_B.OutportBufferForVeCDMR_b_ChgPrtLckLowDTC =
        KeCDMR_b_ChrgPrtLckLow_Val;

    /* SystemInitialize for SignalConversion generated from: '<S659>/VeCDMR_b_ChgPrtLckHiDTC_NF' incorporates:
     *  Constant: '<S680>/Calib'
     */
    CDMR_ac_B.OutportBufferForVeCDMR_b_ChgPrtLckHiDTC_ =
        KeCDMR_b_ChrgPrtLckHi_Val;

    /* SystemInitialize for SignalConversion generated from: '<S659>/VeCDMR_b_ChrgPortUL_FltDtct_NF' incorporates:
     *  Constant: '<S679>/Calib'
     */
    CDMR_ac_B.OutportBufferForVeCDMR_b_ChrgPortUL_FltD =
        KeCDMR_b_ChrgPortUL_FltDtct_Val;

    /* SystemInitialize for SignalConversion generated from: '<S659>/VeCDMR_b_ChrgPortLK_FltDtct_NF' incorporates:
     *  Constant: '<S678>/Calib'
     */
    CDMR_ac_B.OutportBufferForVeCDMR_b_ChrgPortLK_FltD =
        KeCDMR_b_ChrgPortLK_FltDtct_Val;

    /* SystemInitialize for SignalConversion generated from: '<S659>/VeCDMR_b_IUMPR_ChrgPortLock_NF' incorporates:
     *  Constant: '<S682>/Calib'
     */
    CDMR_ac_B.OutportBufferForVeCDMR_b_IUMPR_ChrgPortL =
        KeCDMR_b_IUMPR_ChrgPortLock_Val;

    /* SystemInitialize for SignalConversion generated from: '<S659>/VeCDMR_b_IUMPR_ChrgPortULock_NF' incorporates:
     *  Constant: '<S683>/Calib'
     */
    CDMR_ac_B.OutportBufferForVeCDMR_b_IUMPR_ChrgPortU =
        KeCDMR_b_IUMPR_ChrgPortULock_Val;

    /* SystemInitialize for SignalConversion generated from: '<S659>/VeCDMR_b_IUMPR_DeviceCmdOn_LK_NF' incorporates:
     *  Constant: '<S684>/Calib'
     */
    CDMR_ac_B.OutportBufferForVeCDMR_b_IUMPR_DeviceCmd =
        KeCDMR_b_IUMPR_DeviceCmdOnLK_Val;

    /* SystemInitialize for SignalConversion generated from: '<S659>/VeCDMR_b_IUMPR_DeviceCmdOn_UL_NF' incorporates:
     *  Constant: '<S685>/Calib'
     */
    CDMR_ac_B.OutportBufferForVeCDMR_b_IUMPR_DeviceC_h =
        KeCDMR_b_IUMPR_DeviceCmdOnUL_Val;

    /* SystemInitialize for SignalConversion generated from: '<S659>/VeCDMR_e_FaultSts_BattChrgPrtLckCktLo' incorporates:
     *  Constant: '<S662>/Constant'
     */
    CDMR_ac_B.OutportBufferForVeCDMR_e_FaultSts_BattCh =
        CDMR_ac_ConstB.Constant_e;

    /* SystemInitialize for SignalConversion generated from: '<S659>/VeCDMR_e_FaultSts_BattChrgPrtLckCkttHi' incorporates:
     *  Constant: '<S663>/Constant'
     */
    CDMR_ac_B.OutportBufferForVeCDMR_e_FaultSts_Batt_g =
        CDMR_ac_ConstB.Constant_ev;

    /* SystemInitialize for SignalConversion generated from: '<S659>/VeCDMR_e_FaultSts_ChrgPortLckCtrlCktPerf' incorporates:
     *  Constant: '<S664>/Constant'
     */
    CDMR_ac_B.OutportBufferForVeCDMR_e_FaultSts_ChrgPo =
        CDMR_ac_ConstB.Constant_f;

    /* SystemInitialize for SignalConversion generated from: '<S659>/VeCDMR_e_FaultSts_ChrgPortULCtrlCktPerf' incorporates:
     *  Constant: '<S665>/Constant'
     */
    CDMR_ac_B.OutportBufferForVeCDMR_e_FaultSts_Chrg_b =
        CDMR_ac_ConstB.Constant_l;

    /* SystemInitialize for SignalConversion generated from: '<S659>/VeCDMR_e_FaultSts_BatChrgModSwStk' incorporates:
     *  Constant: '<S666>/Constant'
     */
    CDMR_ac_B.OutportBufferForVeCDMR_e_FaultSts_BatChr =
        CDMR_ac_ConstB.Constant_a;

    /* SystemInitialize for SignalConversion generated from: '<S659>/VeCDMR_e_FaultSts_Module_Failure_BCIM' incorporates:
     *  Constant: '<S667>/Constant'
     */
    CDMR_ac_B.OutportBufferForVeCDMR_e_FaultSts_Module =
        CDMR_ac_ConstB.Constant_m;

    /* SystemInitialize for SignalConversion generated from: '<S659>/VeCDMR_e_FaultSts_Module_Failure_CPIM' incorporates:
     *  Constant: '<S668>/Constant'
     */
    CDMR_ac_B.OutportBufferForVeCDMR_e_FaultSts_Modu_d =
        CDMR_ac_ConstB.Constant_lb;

    /* SystemInitialize for SignalConversion generated from: '<S659>/VeCDMR_e_FaultSts_BatChaCouTemATooHig' incorporates:
     *  Constant: '<S669>/Constant'
     */
    CDMR_ac_B.OutportBufferForVeCDMR_e_FaultSts_BatCha =
        CDMR_ac_ConstB.Constant_k;

    /* SystemInitialize for SignalConversion generated from: '<S659>/VeCDMR_e_FaultSts_PwrOutletPanelMod1Perf' incorporates:
     *  Constant: '<S670>/Constant'
     */
    CDMR_ac_B.OutportBufferForVeCDMR_e_FaultSts_PwrOut =
        CDMR_ac_ConstB.Constant_d;

    /* SystemInitialize for SignalConversion generated from: '<S659>/VeCDMR_e_FaultSts_PwrOutletPanelMod2Perf' incorporates:
     *  Constant: '<S671>/Constant'
     */
    CDMR_ac_B.OutportBufferForVeCDMR_e_FaultSts_PwrO_a =
        CDMR_ac_ConstB.Constant_j;

    /* SystemInitialize for SignalConversion generated from: '<S659>/VeCDMR_e_FaultSts_PwrOutletPanelMod1DigCommBus' incorporates:
     *  Constant: '<S672>/Constant'
     */
    CDMR_ac_B.OutportBufferForVeCDMR_e_FaultSts_PwrO_c =
        CDMR_ac_ConstB.Constant_n;

    /* SystemInitialize for SignalConversion generated from: '<S659>/VeCDMR_e_FaultSts_PwrOutletPanelMod2DigCommBus' incorporates:
     *  Constant: '<S673>/Constant'
     */
    CDMR_ac_B.OutportBufferForVeCDMR_e_FaultSts_PwrO_n =
        CDMR_ac_ConstB.Constant_n2;

    /* SystemInitialize for SignalConversion generated from: '<S659>/VeCDMR_e_FaultSts_PwrOutletPanelMod1LmpCntrl' incorporates:
     *  Constant: '<S674>/Constant'
     */
    CDMR_ac_B.OutportBufferForVeCDMR_e_FaultSts_PwrO_b =
        CDMR_ac_ConstB.Constant_nh;

    /* SystemInitialize for SignalConversion generated from: '<S659>/VeCDMR_e_FaultSts_PwrOutletPanelMod2LmpCntrl' incorporates:
     *  Constant: '<S675>/Constant'
     */
    CDMR_ac_B.OutportBufferForVeCDMR_e_FaultSts_PwrO_i =
        CDMR_ac_ConstB.Constant_o;

    /* SystemInitialize for SignalConversion generated from: '<S659>/VeCDMR_e_FaultSts_PwrOutletPanelMod1InACPwrCktPerf' incorporates:
     *  Constant: '<S676>/Constant'
     */
    CDMR_ac_B.OutportBufferForVeCDMR_e_FaultSts_PwrO_e =
        CDMR_ac_ConstB.Constant_g;

    /* SystemInitialize for SignalConversion generated from: '<S659>/VeCDMR_e_FaultSts_PwrOutletPanelMod2InACPwrCktPerf' incorporates:
     *  Constant: '<S677>/Constant'
     */
    CDMR_ac_B.OutportBufferForVeCDMR_e_FaultSts_PwrO_k =
        CDMR_ac_ConstB.Constant_k4;

#if Rte_SysCon_Variant_CDMR_4

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
    /* SystemInitialize for Function Call SubSystem: '<S4>/Sub_Out_Init' */
    /* SystemInitialize for SignalConversion generated from: '<S661>/ChargingSystemSts_write' incorporates:
     *  Constant: '<S686>/Constant'
     */
    CDMR_ac_B.OutportBufferForChargingSystemSts_write = CDMR_ac_ConstB.Constant;

    /* End of SystemInitialize for SubSystem: '<S4>/Sub_Out_Init' */

    /* SystemInitialize for Function Call SubSystem: '<Root>/CDMR_MedTEH' */
#if Rte_SysCon_Variant_CDMR_1
#endif

    /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/CPI_BCI_Diag'
     */
#if Rte_SysCon_Variant_CDMR_3

    /* End of SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' */
#endif

    /* End of SystemInitialize for SubSystem: '<Root>/CDMR_MedTEH' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
    /* End of SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
#endif

    /* SystemInitialize for Outport: '<Root>/VeCDMR_e_FaultSts_BattChrgPrtLckCktLo' incorporates:
     *  Merge: '<Root>/M_VeCDMR_e_FaultSts_BattChrgPrtLckCktLo'
     */
    (void)Rte_Write_VeCDMR_e_FaultSts_BattChrgPrtLckCktLo_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeCDMR_e_FaultSts_BattChrgPrtLckCkttHi' incorporates:
     *  Merge: '<Root>/M_VeCDMR_e_FaultSts_BattChrgPrtLckCkttHi'
     */
    (void)Rte_Write_VeCDMR_e_FaultSts_BattChrgPrtLckCkttHi_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeCDMR_e_FaultSts_ChrgPortLckCtrlCktPerf' incorporates:
     *  Merge: '<Root>/M_VeCDMR_e_FaultSts_ChrgPortLckCtrlCktPerf'
     */
    (void)Rte_Write_VeCDMR_e_FaultSts_ChrgPortLckCtrlCktPerf_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeCDMR_e_FaultSts_ChrgPortULCtrlCktPerf' incorporates:
     *  Merge: '<Root>/M_VeCDMR_e_FaultSts_ChrgPortULCtrlCktPerf'
     */
    (void)Rte_Write_VeCDMR_e_FaultSts_ChrgPortULCtrlCktPerf_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeCDMR_e_FaultSts_BatChrgModSwStk' incorporates:
     *  Merge: '<Root>/M_VeCDMR_e_FaultSts_BatChrgModSwStk'
     */
    (void)Rte_Write_VeCDMR_e_FaultSts_BatChrgModSwStk_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeCDMR_e_FaultSts_Module_Failure_BCIM' incorporates:
     *  Merge: '<Root>/M_VeCDMR_e_FaultSts_Module_Failure_BCIM'
     */
    (void)Rte_Write_VeCDMR_e_FaultSts_Module_Failure_BCIM_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeCDMR_e_FaultSts_Module_Failure_CPIM' incorporates:
     *  Merge: '<Root>/M_VeCDMR_e_FaultSts_Module_Failure_CPIM'
     */
    (void)Rte_Write_VeCDMR_e_FaultSts_Module_Failure_CPIM_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeCDMR_e_FaultSts_BatChaCouTemATooHig' incorporates:
     *  Merge: '<Root>/M_VeCDMR_e_FaultSts_BatChaCouTemATooHig'
     */
    (void)Rte_Write_VeCDMR_e_FaultSts_BatChaCouTemATooHig_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeCDMR_e_FaultSts_PwrOutletPanelMod1Perf' incorporates:
     *  Merge: '<Root>/M_VeCDMR_e_FaultSts_PwrOutletPanelMod1Perf'
     */
    (void)Rte_Write_VeCDMR_e_FaultSts_PwrOutletPanelMod1Perf_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeCDMR_e_FaultSts_PwrOutletPanelMod2Perf' incorporates:
     *  Merge: '<Root>/M_VeCDMR_e_FaultSts_PwrOutletPanelMod2Perf'
     */
    (void)Rte_Write_VeCDMR_e_FaultSts_PwrOutletPanelMod2Perf_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeCDMR_e_FaultSts_PwrOutletPanelMod1DigCommBus' incorporates:
     *  Merge: '<Root>/M_VeCDMR_e_FaultSts_PwrOutletPanelMod1DigCommBus'
     */
    (void)Rte_Write_VeCDMR_e_FaultSts_PwrOutletPanelMod1DigCommBus_Value
        (CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeCDMR_e_FaultSts_PwrOutletPanelMod2DigCommBus' incorporates:
     *  Merge: '<Root>/M_VeCDMR_e_FaultSts_PwrOutletPanelMod2DigCommBus'
     */
    (void)Rte_Write_VeCDMR_e_FaultSts_PwrOutletPanelMod2DigCommBus_Value
        (CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeCDMR_e_FaultSts_PwrOutletPanelMod1LmpCntrl' incorporates:
     *  Merge: '<Root>/M_VeCDMR_e_FaultSts_PwrOutletPanelMod1LmpCntrl'
     */
    (void)Rte_Write_VeCDMR_e_FaultSts_PwrOutletPanelMod1LmpCntrl_Value
        (CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeCDMR_e_FaultSts_PwrOutletPanelMod2LmpCntrl' incorporates:
     *  Merge: '<Root>/M_VeCDMR_e_FaultSts_PwrOutletPanelMod2LmpCntrl'
     */
    (void)Rte_Write_VeCDMR_e_FaultSts_PwrOutletPanelMod2LmpCntrl_Value
        (CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeCDMR_e_FaultSts_PwrOutletPanelMod1InACPwrCktPerf' incorporates:
     *  Merge: '<Root>/M_VeCDMR_e_FaultSts_PwrOutletPanelMod1InACPwrCktPerf'
     */
    (void)Rte_Write_VeCDMR_e_FaultSts_PwrOutletPanelMod1InACPwrCktPerf_Value
        (CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeCDMR_e_FaultSts_PwrOutletPanelMod2InACPwrCktPerf' incorporates:
     *  Merge: '<Root>/M_VeCDMR_e_FaultSts_PwrOutletPanelMod2InACPwrCktPerf'
     */
    (void)Rte_Write_VeCDMR_e_FaultSts_PwrOutletPanelMod2InACPwrCktPerf_Value
        (CeDFIB_e_Init);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
