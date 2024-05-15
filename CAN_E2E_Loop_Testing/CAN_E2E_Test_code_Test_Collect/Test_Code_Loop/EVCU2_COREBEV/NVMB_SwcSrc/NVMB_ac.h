/*
 * File: NVMB_ac.h
 *
 * Code generated for Simulink model 'NVMB_ac'.
 *
 * Model version                  : 1.831
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 14:33:18 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_NVMB_ac_h_
#define RTW_HEADER_NVMB_ac_h_
#ifndef NVMB_ac_COMMON_INCLUDES_
#define NVMB_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_NVMB.h"
#endif                                 /* NVMB_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_NVMB_ac_T
{

#if Rte_SysCon_Variant_NVMB_WED_Presence

    uint16 NeNVMB_Cnt_WEDPosnSnsr1ElecFlt_MFOP;
                                 /* '<Root>/DSM_NeCDMR_Cnt_CPIMInternal_MSOF' */

#define DW_NVMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_NVMB_WED_Presence

    uint16 NeNVMB_Cnt_WEDPosnSnsr1PosnOOR_MFOP;
                                /* '<Root>/DSM_NeCDMR_Cnt_CPIMInternal_MSOF1' */

#define DW_NVMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_NVMB_WED_Presence

    uint16 NeNVMB_Cnt_WEDPosnSnsr2ElecFlt_MFOP;
                                /* '<Root>/DSM_NeCDMR_Cnt_CPIMInternal_MSOF2' */

#define DW_NVMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_NVMB_WED_Presence

    uint16 NeNVMB_Cnt_WEDPosnSnsr2PosnOOR_MFOP;
                                /* '<Root>/DSM_NeCDMR_Cnt_CPIMInternal_MSOF3' */

#define DW_NVMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_NVMB_WED_Presence

    uint16 NeNVMB_Cnt_LtWEDElecFlt_MFOP;
                                /* '<Root>/DSM_NeCDMR_Cnt_CPIMInternal_MSOF4' */

#define DW_NVMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_NVMB_WED_Presence

    uint16 NeNVMB_Cnt_RtWEDElecFlt_MFOP;
                                /* '<Root>/DSM_NeCDMR_Cnt_CPIMInternal_MSOF5' */

#define DW_NVMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_NVMB_CSOV_Presence

    uint16 NeNVMB_Cnt_STGChillrShtOffVlv_MFOP;
                               /* '<Root>/DSM_NeCDMR_Cnt_CPIMInternal_MSOF17' */

#define DW_NVMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_NVMB_CSOV_Presence

    uint16 NeNVMB_Cnt_STBChillrShtOffVlv_MFOP;
                               /* '<Root>/DSM_NeCDMR_Cnt_CPIMInternal_MSOF18' */

#define DW_NVMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_NVMB_FRSOV_Presence

    uint16 NeNVMB_Cnt_FtRfgtShtOffVlvOC_MFOP;
                                /* '<Root>/DSM_NeCDMR_Cnt_CPIMInternal_MSOF6' */

#define DW_NVMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_NVMB_FRSOV_Presence

    uint16 NeNVMB_Cnt_STGFtRfgtShtOffVlv_MFOP;
                                /* '<Root>/DSM_NeCDMR_Cnt_CPIMInternal_MSOF7' */

#define DW_NVMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_NVMB_FRSOV_Presence

    uint16 NeNVMB_Cnt_STBFtRfgtShtOffVlv_MFOP;
                                /* '<Root>/DSM_NeCDMR_Cnt_CPIMInternal_MSOF8' */

#define DW_NVMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_NVMB_CSOV_Presence

    uint16 NeNVMB_Cnt_OCChillrShtOffVlv_MFOP;
                                /* '<Root>/DSM_NeCDMR_Cnt_CPIMInternal_MSOF9' */

#define DW_NVMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_NVMB_HTSOV_Presence

    uint16 NeNVMB_Cnt_HiTempShtOffVlvOC_MFOP;
                               /* '<Root>/DSM_NeCDMR_Cnt_CPIMInternal_MSOF19' */

#define DW_NVMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_NVMB_HTSOV_Presence

    uint16 NeNVMB_Cnt_HiTempShtOffVlvSTG_MFOP;
                               /* '<Root>/DSM_NeCDMR_Cnt_CPIMInternal_MSOF22' */

#define DW_NVMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_NVMB_HTSOV_Presence

    uint16 NeNVMB_Cnt_HiTempShtOffVlvSTB_MFOP;
                               /* '<Root>/DSM_NeCDMR_Cnt_CPIMInternal_MSOF23' */

#define DW_NVMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_NVMB_EPTWUP_Presence

    uint16 NeNVMB_Cnt_ePTWakeUpEnblSTG_MFOP;
                               /* '<Root>/DSM_NeCDMR_Cnt_CPIMInternal_MSOF10' */

#define DW_NVMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_NVMB_EPTWUP_Presence

    uint16 NeNVMB_Cnt_ePTWakeUpEnblSTB_MFOP;
                               /* '<Root>/DSM_NeCDMR_Cnt_CPIMInternal_MSOF11' */

#define DW_NVMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_NVMB_THRMLSYSEN_Presence

    uint16 NeNVMB_Cnt_ThermSysEnbl_MFOP;
                               /* '<Root>/DSM_NeCDMR_Cnt_CPIMInternal_MSOF12' */

#define DW_NVMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_NVMB_RADFAN_Presence

    uint16 NeNVMB_Cnt_RadrFanCtrlOC_MFOP;
                               /* '<Root>/DSM_NeCDMR_Cnt_CPIMInternal_MSOF13' */

#define DW_NVMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_NVMB_RADFAN_Presence

    uint16 NeNVMB_Cnt_RadrFanCtrlSTG_MFOP;
                               /* '<Root>/DSM_NeCDMR_Cnt_CPIMInternal_MSOF14' */

#define DW_NVMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_NVMB_RADFAN_Presence

    uint16 NeNVMB_Cnt_RadrFanCtrlSTB_MFOP;
                               /* '<Root>/DSM_NeCDMR_Cnt_CPIMInternal_MSOF15' */

#define DW_NVMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_NVMB_OILPUMP_Presence

    uint16 NeNVMB_Cnt_ElecOilPmpOC_MFOP;
                               /* '<Root>/DSM_NeCDMR_Cnt_CPIMInternal_MSOF16' */

#define DW_NVMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_NVMB_ACPWRSWRLY_Presence

    uint16 NeNVMB_Cnt_ACSwitchRelaySTG_MFOP;
                               /* '<Root>/DSM_NeCDMR_Cnt_CPIMInternal_MSOF20' */

#define DW_NVMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_NVMB_ACPWRSWRLY_Presence

    uint16 NeNVMB_Cnt_ACSwitchRelaySTB_MFOP;
                               /* '<Root>/DSM_NeCDMR_Cnt_CPIMInternal_MSOF21' */

#define DW_NVMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_NVMB_EPTWUP_Presence

    uint16 NeNVMB_Cnt_ePTWakeUpEnblOC_MFOP;
                               /* '<Root>/DSM_NeCDMR_Cnt_CPIMInternal_MSOF24' */

#define DW_NVMB_AC_T_VARIANT_EXISTS
#endif

#ifndef DW_NVMB_AC_T_VARIANT_EXISTS

    char _rt_unused;

#endif

}
DW_NVMB_ac_T;

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_NVMB
#include "MemMap.h"

extern VAR(DW_NVMB_ac_T, NVMB_VAR_INIT) NVMB_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_NVMB
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
 * '<Root>' : 'NVMB_ac'
 * '<S1>'   : 'NVMB_ac/NVMB_Init'
 * '<S2>'   : 'NVMB_ac/NVMB_PwrOff'
 * '<S3>'   : 'NVMB_ac/NVMB_Runnable100ms_1'
 * '<S4>'   : 'NVMB_ac/NVMB_Runnable100ms_2'
 * '<S5>'   : 'NVMB_ac/NVMB_Runnable10ms_1'
 * '<S6>'   : 'NVMB_ac/NVMB_Runnable10ms_2'
 * '<S7>'   : 'NVMB_ac/NVMB_Runnable20ms_1'
 * '<S8>'   : 'NVMB_ac/NVMB_Runnable20ms_2'
 * '<S9>'   : 'NVMB_ac/NVMB_Init/NVM_ADIB_WED_Init'
 * '<S10>'  : 'NVMB_ac/NVMB_Init/NVM_COUB_CSOV_Init'
 * '<S11>'  : 'NVMB_ac/NVMB_Init/NVM_COUB_EOP_Init'
 * '<S12>'  : 'NVMB_ac/NVMB_Init/NVM_COUB_FRSOV_Init'
 * '<S13>'  : 'NVMB_ac/NVMB_Init/NVM_COUB_HTSOV_Init'
 * '<S14>'  : 'NVMB_ac/NVMB_Init/NVM_COUB_PPSwtRly_Init'
 * '<S15>'  : 'NVMB_ac/NVMB_Init/NVM_COUB_RadFan_Init'
 * '<S16>'  : 'NVMB_ac/NVMB_Init/NVM_COUB_ThEn_Init'
 * '<S17>'  : 'NVMB_ac/NVMB_Init/NVM_COUB_ePTWUp_Init'
 * '<S18>'  : 'NVMB_ac/NVMB_Init/NVM_ADIB_WED_Init/NVM_ADIB_WED_Init'
 * '<S19>'  : 'NVMB_ac/NVMB_Init/NVM_COUB_CSOV_Init/NVM_COUB_FRSOV'
 * '<S20>'  : 'NVMB_ac/NVMB_Init/NVM_COUB_EOP_Init/NVM_COUB_EOP'
 * '<S21>'  : 'NVMB_ac/NVMB_Init/NVM_COUB_FRSOV_Init/NVM_COUB_FRSOV'
 * '<S22>'  : 'NVMB_ac/NVMB_Init/NVM_COUB_HTSOV_Init/NVM_COUB_HTSOV'
 * '<S23>'  : 'NVMB_ac/NVMB_Init/NVM_COUB_PPSwtRly_Init/NVM_COUB_PPSwtRly'
 * '<S24>'  : 'NVMB_ac/NVMB_Init/NVM_COUB_RadFan_Init/NVM_COUB_RadFan'
 * '<S25>'  : 'NVMB_ac/NVMB_Init/NVM_COUB_ThEn_Init/NVM_COUB_ThEn'
 * '<S26>'  : 'NVMB_ac/NVMB_Init/NVM_COUB_ePTWUp_Init/NVM_COUB_ePTWUp'
 * '<S27>'  : 'NVMB_ac/NVMB_PwrOff/NVM_ADIB_WED_PwrOff'
 * '<S28>'  : 'NVMB_ac/NVMB_PwrOff/NVM_COUB_CSOV_PwrOff'
 * '<S29>'  : 'NVMB_ac/NVMB_PwrOff/NVM_COUB_EOP_PwrOff'
 * '<S30>'  : 'NVMB_ac/NVMB_PwrOff/NVM_COUB_FRSOV_PwrOff'
 * '<S31>'  : 'NVMB_ac/NVMB_PwrOff/NVM_COUB_HTSOV_PwrOff'
 * '<S32>'  : 'NVMB_ac/NVMB_PwrOff/NVM_COUB_PPSwtRly_PwrOff'
 * '<S33>'  : 'NVMB_ac/NVMB_PwrOff/NVM_COUB_RadFan_PwrOff'
 * '<S34>'  : 'NVMB_ac/NVMB_PwrOff/NVM_COUB_ThEn_PwrOff'
 * '<S35>'  : 'NVMB_ac/NVMB_PwrOff/NVM_COUB_ePTWUp_PwrOff'
 * '<S36>'  : 'NVMB_ac/NVMB_PwrOff/NVM_ADIB_WED_PwrOff/NVM_ADIB_WED_PwrOff'
 * '<S37>'  : 'NVMB_ac/NVMB_PwrOff/NVM_COUB_CSOV_PwrOff/NVM_COUB_CSOV_PwrOff'
 * '<S38>'  : 'NVMB_ac/NVMB_PwrOff/NVM_COUB_EOP_PwrOff/NVM_COUB_EOP'
 * '<S39>'  : 'NVMB_ac/NVMB_PwrOff/NVM_COUB_FRSOV_PwrOff/NVM_COUB_FRSOV_PwrOff'
 * '<S40>'  : 'NVMB_ac/NVMB_PwrOff/NVM_COUB_HTSOV_PwrOff/NVM_COUB_HTSOV'
 * '<S41>'  : 'NVMB_ac/NVMB_PwrOff/NVM_COUB_PPSwtRly_PwrOff/NVM_COUB_PPSwtRly'
 * '<S42>'  : 'NVMB_ac/NVMB_PwrOff/NVM_COUB_RadFan_PwrOff/NVM_COUB_RadFan'
 * '<S43>'  : 'NVMB_ac/NVMB_PwrOff/NVM_COUB_ThEn_PwrOff/NVM_COUB_ThEn'
 * '<S44>'  : 'NVMB_ac/NVMB_PwrOff/NVM_COUB_ePTWUp_PwrOff/NVM_COUB_ePTWUp'
 * '<S45>'  : 'NVMB_ac/NVMB_Runnable100ms_1/NVM_COUB_EOP_MeTEH'
 * '<S46>'  : 'NVMB_ac/NVMB_Runnable100ms_1/NVM_COUB_PPSwtRly_MeTEH'
 * '<S47>'  : 'NVMB_ac/NVMB_Runnable100ms_1/NVM_COUB_RadFan_MeTEH'
 * '<S48>'  : 'NVMB_ac/NVMB_Runnable100ms_1/NVM_COUB_ThEn_MeTEH'
 * '<S49>'  : 'NVMB_ac/NVMB_Runnable100ms_1/NVM_COUB_ePTWUp_MedTEH'
 * '<S50>'  : 'NVMB_ac/NVMB_Runnable100ms_1/NVM_COUB_EOP_MeTEH/NVM_COUB_EOP'
 * '<S51>'  : 'NVMB_ac/NVMB_Runnable100ms_1/NVM_COUB_PPSwtRly_MeTEH/NVM_COUB_PPSwtRly'
 * '<S52>'  : 'NVMB_ac/NVMB_Runnable100ms_1/NVM_COUB_RadFan_MeTEH/NVM_COUB_RadFan'
 * '<S53>'  : 'NVMB_ac/NVMB_Runnable100ms_1/NVM_COUB_ThEn_MeTEH/NVM_COUB_ThEn'
 * '<S54>'  : 'NVMB_ac/NVMB_Runnable100ms_1/NVM_COUB_ePTWUp_MedTEH/NVM_COUB_ePTWUp'
 * '<S55>'  : 'NVMB_ac/NVMB_Runnable100ms_2/NVM_COUB_EOP_MedTEH'
 * '<S56>'  : 'NVMB_ac/NVMB_Runnable100ms_2/NVM_COUB_PPSwtRly_MedTEH'
 * '<S57>'  : 'NVMB_ac/NVMB_Runnable100ms_2/NVM_COUB_RadFan_MeTEH'
 * '<S58>'  : 'NVMB_ac/NVMB_Runnable100ms_2/NVM_COUB_ThEn_MeTEH'
 * '<S59>'  : 'NVMB_ac/NVMB_Runnable100ms_2/NVM_COUB_ePTWUp_MeTEH'
 * '<S60>'  : 'NVMB_ac/NVMB_Runnable100ms_2/NVM_COUB_EOP_MedTEH/NVM_COUB_EOP'
 * '<S61>'  : 'NVMB_ac/NVMB_Runnable100ms_2/NVM_COUB_PPSwtRly_MedTEH/NVM_COUB_PPSwtRly'
 * '<S62>'  : 'NVMB_ac/NVMB_Runnable100ms_2/NVM_COUB_RadFan_MeTEH/NVM_COUB_RadFan'
 * '<S63>'  : 'NVMB_ac/NVMB_Runnable100ms_2/NVM_COUB_ThEn_MeTEH/NVM_COUB_ThEn'
 * '<S64>'  : 'NVMB_ac/NVMB_Runnable100ms_2/NVM_COUB_ePTWUp_MeTEH/NVM_COUB_ePTWUp'
 * '<S65>'  : 'NVMB_ac/NVMB_Runnable10ms_1/NVM_ADIB_WED_MedTEB1'
 * '<S66>'  : 'NVMB_ac/NVMB_Runnable10ms_1/NVM_ADIB_WED_MedTEB1/NVM_ADIB_WED'
 * '<S67>'  : 'NVMB_ac/NVMB_Runnable10ms_2/NVM_ADIB_WED_MedTEB2'
 * '<S68>'  : 'NVMB_ac/NVMB_Runnable10ms_2/NVM_ADIB_WED_MedTEB2/NVM_ADIB_WED'
 * '<S69>'  : 'NVMB_ac/NVMB_Runnable20ms_1/NVM_COUB_CSOV_MedTED'
 * '<S70>'  : 'NVMB_ac/NVMB_Runnable20ms_1/NVM_COUB_FRSOV_MedTED'
 * '<S71>'  : 'NVMB_ac/NVMB_Runnable20ms_1/NVM_COUB_MedTED'
 * '<S72>'  : 'NVMB_ac/NVMB_Runnable20ms_1/NVM_COUB_CSOV_MedTED/NVM_COUB_FRSOV'
 * '<S73>'  : 'NVMB_ac/NVMB_Runnable20ms_1/NVM_COUB_FRSOV_MedTED/NVM_COUB_FRSOV_PwrOff'
 * '<S74>'  : 'NVMB_ac/NVMB_Runnable20ms_1/NVM_COUB_MedTED/NVM_COUB_FRSOV'
 * '<S75>'  : 'NVMB_ac/NVMB_Runnable20ms_2/NVM_COUB_CSOV_MedTED'
 * '<S76>'  : 'NVMB_ac/NVMB_Runnable20ms_2/NVM_COUB_FRSOV_MedTED'
 * '<S77>'  : 'NVMB_ac/NVMB_Runnable20ms_2/NVM_COUB_HTSOV_MedTED'
 * '<S78>'  : 'NVMB_ac/NVMB_Runnable20ms_2/NVM_COUB_CSOV_MedTED/NVM_COUB_FRSOV'
 * '<S79>'  : 'NVMB_ac/NVMB_Runnable20ms_2/NVM_COUB_FRSOV_MedTED/NVM_ADIB_WED'
 * '<S80>'  : 'NVMB_ac/NVMB_Runnable20ms_2/NVM_COUB_HTSOV_MedTED/NVM_COUB_HTSOV'
 */
#endif                                 /* RTW_HEADER_NVMB_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
