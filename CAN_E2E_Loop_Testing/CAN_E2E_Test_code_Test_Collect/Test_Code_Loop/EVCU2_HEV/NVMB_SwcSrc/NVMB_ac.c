/*
 * File: NVMB_ac.c
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

#include "NVMB_ac.h"

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2019a.
//
// PROD Model Config Ver#19a.1 2/14/2020
//
//////////////////////////////////////////////////////////////////////////////////////

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_NVMB
#include "MemMap.h"

VAR(DW_NVMB_ac_T, NVMB_VAR_INIT) NVMB_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_NVMB
#include "MemMap.h"

/* Model step function for TID1 */
FUNC(void, NVMB_CODE) NVMB_MedTEB1(void) /* Explicit Task: MedTEB1 */
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB1' incorporates:
     *  SubSystem: '<Root>/NVMB_Runnable10ms_1'
     */
#if Rte_SysCon_Variant_NVMB_WED_Presence

    /* Outputs for Atomic SubSystem: '<S5>/NVM_ADIB_WED_MedTEB1' */
    /* Outputs for Atomic SubSystem: '<S65>/NVM_ADIB_WED' */
    /* Outport: '<Root>/VeNVMB_Cnt_WEDPosnSnsr1ElecFlt_MFOP' incorporates:
     *  DataStoreRead: '<S66>/NeCDMR_Cnt_BCIMInternal_MFOP'
     */
    (void)Rte_Write_VeNVMB_Cnt_WEDPosnSnsr1ElecFlt_MFOP_Value
        (NVMB_ac_DW.NeNVMB_Cnt_WEDPosnSnsr1ElecFlt_MFOP);

    /* Outport: '<Root>/VeNVMB_Cnt_WEDPosnSnsr1PosnOOR_MFOP' incorporates:
     *  DataStoreRead: '<S66>/NeCDMR_Cnt_BCIMInternal_MSOF'
     */
    (void)Rte_Write_VeNVMB_Cnt_WEDPosnSnsr1PosnOOR_MFOP_Value
        (NVMB_ac_DW.NeNVMB_Cnt_WEDPosnSnsr1PosnOOR_MFOP);

    /* Outport: '<Root>/VeNVMB_Cnt_WEDPosnSnsr2ElecFlt_MFOP' incorporates:
     *  DataStoreRead: '<S66>/NeCDMR_Cnt_CPIMInternal_MFOP'
     */
    (void)Rte_Write_VeNVMB_Cnt_WEDPosnSnsr2ElecFlt_MFOP_Value
        (NVMB_ac_DW.NeNVMB_Cnt_WEDPosnSnsr2ElecFlt_MFOP);

    /* Outport: '<Root>/VeNVMB_Cnt_WEDPosnSnsr2PosnOOR_MFOP' incorporates:
     *  DataStoreRead: '<S66>/NeCDMR_Cnt_CPIMInternal_MSOF'
     */
    (void)Rte_Write_VeNVMB_Cnt_WEDPosnSnsr2PosnOOR_MFOP_Value
        (NVMB_ac_DW.NeNVMB_Cnt_WEDPosnSnsr2PosnOOR_MFOP);

    /* Outport: '<Root>/VeNVMB_Cnt_LtWEDElecFlt_MFOP' incorporates:
     *  DataStoreRead: '<S66>/NeCDMR_Cnt_ChgPrtLckFailHMFOP'
     */
    (void)Rte_Write_VeNVMB_Cnt_LtWEDElecFlt_MFOP_Value
        (NVMB_ac_DW.NeNVMB_Cnt_LtWEDElecFlt_MFOP);

    /* Outport: '<Root>/VeNVMB_Cnt_RtWEDElecFlt_MFOP' incorporates:
     *  DataStoreRead: '<S66>/NeCDMR_Cnt_ChgPrtLckFailHMSOF'
     */
    (void)Rte_Write_VeNVMB_Cnt_RtWEDElecFlt_MFOP_Value
        (NVMB_ac_DW.NeNVMB_Cnt_RtWEDElecFlt_MFOP);

    /* End of Outputs for SubSystem: '<S65>/NVM_ADIB_WED' */
    /* End of Outputs for SubSystem: '<S5>/NVM_ADIB_WED_MedTEB1' */
#endif

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB1' */
}

/* Model step function for TID2 */
FUNC(void, NVMB_CODE) NVMB_MedTEB2(void) /* Explicit Task: MedTEB2 */
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB2' incorporates:
     *  SubSystem: '<Root>/NVMB_Runnable10ms_2'
     */
#if Rte_SysCon_Variant_NVMB_WED_Presence

    /* Outputs for Atomic SubSystem: '<S6>/NVM_ADIB_WED_MedTEB2' */
    /* Outputs for Atomic SubSystem: '<S67>/NVM_ADIB_WED' */
    /* DataStoreWrite: '<S68>/NeCDMR_Cnt_BCIMInternal_MFOP5' incorporates:
     *  Inport: '<Root>/VeADIB_Cnt_RtWEDElecFlt_MFOP'
     */
    (void)Rte_Read_VeADIB_Cnt_RtWEDElecFlt_MFOP_Value
        (&NVMB_ac_DW.NeNVMB_Cnt_RtWEDElecFlt_MFOP);

    /* DataStoreWrite: '<S68>/NeCDMR_Cnt_BCIMInternal_MFOP4' incorporates:
     *  Inport: '<Root>/VeADIB_Cnt_LtWEDElecFlt_MFOP'
     */
    (void)Rte_Read_VeADIB_Cnt_LtWEDElecFlt_MFOP_Value
        (&NVMB_ac_DW.NeNVMB_Cnt_LtWEDElecFlt_MFOP);

    /* DataStoreWrite: '<S68>/NeCDMR_Cnt_BCIMInternal_MFOP3' incorporates:
     *  Inport: '<Root>/VeADIB_Cnt_WEDPosnSnsr2PosnOOR_MFOP'
     */
    (void)Rte_Read_VeADIB_Cnt_WEDPosnSnsr2PosnOOR_MFOP_Value
        (&NVMB_ac_DW.NeNVMB_Cnt_WEDPosnSnsr2PosnOOR_MFOP);

    /* DataStoreWrite: '<S68>/NeCDMR_Cnt_BCIMInternal_MFOP2' incorporates:
     *  Inport: '<Root>/VeADIB_Cnt_WEDPosnSnsr2ElecFlt_MFOP'
     */
    (void)Rte_Read_VeADIB_Cnt_WEDPosnSnsr2ElecFlt_MFOP_Value
        (&NVMB_ac_DW.NeNVMB_Cnt_WEDPosnSnsr2ElecFlt_MFOP);

    /* DataStoreWrite: '<S68>/NeCDMR_Cnt_BCIMInternal_MFOP1' incorporates:
     *  Inport: '<Root>/VeADIB_Cnt_WEDPosnSnsr1PosnOOR_MFOP'
     */
    (void)Rte_Read_VeADIB_Cnt_WEDPosnSnsr1PosnOOR_MFOP_Value
        (&NVMB_ac_DW.NeNVMB_Cnt_WEDPosnSnsr1PosnOOR_MFOP);

    /* DataStoreWrite: '<S68>/NeCDMR_Cnt_BCIMInternal_MFOP' incorporates:
     *  Inport: '<Root>/VeADIB_Cnt_WEDPosnSnsr1ElecFlt_MFOP'
     */
    (void)Rte_Read_VeADIB_Cnt_WEDPosnSnsr1ElecFlt_MFOP_Value
        (&NVMB_ac_DW.NeNVMB_Cnt_WEDPosnSnsr1ElecFlt_MFOP);

    /* End of Outputs for SubSystem: '<S67>/NVM_ADIB_WED' */
    /* End of Outputs for SubSystem: '<S6>/NVM_ADIB_WED_MedTEB2' */
#endif

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB2' */
}

/* Model step function for TID3 */
FUNC(void, NVMB_CODE) NVMB_MedTED1(void) /* Explicit Task: MedTED1 */
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED1' incorporates:
     *  SubSystem: '<Root>/NVMB_Runnable20ms_1'
     */
#if Rte_SysCon_Variant_NVMB_FRSOV_Presence

    /* Outputs for Atomic SubSystem: '<S7>/NVM_COUB_FRSOV_MedTED' */
    /* Outputs for Atomic SubSystem: '<S7>/NVM_COUB_MedTED' */
    /* Outputs for Atomic SubSystem: '<S71>/NVM_COUB_FRSOV' */
    /* Outport: '<Root>/VeNVMB_Cnt_FtRfgtShtOffVlvOC_MFOP' incorporates:
     *  DataStoreRead: '<S74>/NeCDMR_Cnt_BCIMInternal_MFOP'
     */
    (void)Rte_Write_VeNVMB_Cnt_FtRfgtShtOffVlvOC_MFOP_Value
        (NVMB_ac_DW.NeNVMB_Cnt_FtRfgtShtOffVlvOC_MFOP);

    /* Outport: '<Root>/VeNVMB_Cnt_STGFtRfgtShtOffVlv_MFOP' incorporates:
     *  DataStoreRead: '<S74>/NeCDMR_Cnt_BCIMInternal_MSOF'
     */
    (void)Rte_Write_VeNVMB_Cnt_STGFtRfgtShtOffVlv_MFOP_Value
        (NVMB_ac_DW.NeNVMB_Cnt_STGFtRfgtShtOffVlv_MFOP);

    /* Outport: '<Root>/VeNVMB_Cnt_STBFtRfgtShtOffVlv_MFOP' incorporates:
     *  DataStoreRead: '<S74>/NeCDMR_Cnt_CPIMInternal_MFOP'
     */
    (void)Rte_Write_VeNVMB_Cnt_STBFtRfgtShtOffVlv_MFOP_Value
        (NVMB_ac_DW.NeNVMB_Cnt_STBFtRfgtShtOffVlv_MFOP);

    /* End of Outputs for SubSystem: '<S71>/NVM_COUB_FRSOV' */

    /* Outputs for Atomic SubSystem: '<S70>/NVM_COUB_FRSOV_PwrOff' */
    /* Outport: '<Root>/VeNVMB_Cnt_OCChillrShtOffVlv_MFOP' incorporates:
     *  DataStoreRead: '<S73>/NeCDMR_Cnt_BCIMInternal_MFOP'
     */
    (void)Rte_Write_VeNVMB_Cnt_OCChillrShtOffVlv_MFOP_Value
        (NVMB_ac_DW.NeNVMB_Cnt_FtRfgtShtOffVlvOC_MFOP);

    /* Outport: '<Root>/VeNVMB_Cnt_STGChillrShtOffVlv_MFOP' incorporates:
     *  DataStoreRead: '<S73>/NeCDMR_Cnt_BCIMInternal_MSOF'
     */
    (void)Rte_Write_VeNVMB_Cnt_STGChillrShtOffVlv_MFOP_Value
        (NVMB_ac_DW.NeNVMB_Cnt_STGFtRfgtShtOffVlv_MFOP);

    /* Outport: '<Root>/VeNVMB_Cnt_STBChillrShtOffVlv_MFOP' incorporates:
     *  DataStoreRead: '<S73>/NeCDMR_Cnt_CPIMInternal_MFOP'
     */
    (void)Rte_Write_VeNVMB_Cnt_STBChillrShtOffVlv_MFOP_Value
        (NVMB_ac_DW.NeNVMB_Cnt_STBFtRfgtShtOffVlv_MFOP);

    /* End of Outputs for SubSystem: '<S70>/NVM_COUB_FRSOV_PwrOff' */
    /* End of Outputs for SubSystem: '<S7>/NVM_COUB_MedTED' */
    /* End of Outputs for SubSystem: '<S7>/NVM_COUB_FRSOV_MedTED' */
#endif

#if Rte_SysCon_Variant_NVMB_CSOV_Presence

    /* Outputs for Atomic SubSystem: '<S7>/NVM_COUB_CSOV_MedTED' */
    /* Outputs for Atomic SubSystem: '<S69>/NVM_COUB_FRSOV' */
    /* Outport: '<Root>/VeNVMB_Cnt_HiTempShtOffVlvOC_MFOP' incorporates:
     *  DataStoreRead: '<S72>/NeCDMR_Cnt_CPIMInternal_MSOF'
     */
    (void)Rte_Write_VeNVMB_Cnt_HiTempShtOffVlvOC_MFOP_Value
        (NVMB_ac_DW.NeNVMB_Cnt_OCChillrShtOffVlv_MFOP);

    /* Outport: '<Root>/VeNVMB_Cnt_HiTempShtOffVlvSTG_MFOP' incorporates:
     *  DataStoreRead: '<S72>/NeCDMR_Cnt_ChgPrtLckFailHMFOP'
     */
    (void)Rte_Write_VeNVMB_Cnt_HiTempShtOffVlvSTG_MFOP_Value
        (NVMB_ac_DW.NeNVMB_Cnt_STGChillrShtOffVlv_MFOP);

    /* Outport: '<Root>/VeNVMB_Cnt_HiTempShtOffVlvSTB_MFOP' incorporates:
     *  DataStoreRead: '<S72>/NeCDMR_Cnt_ChgPrtLckFailHMSOF'
     */
    (void)Rte_Write_VeNVMB_Cnt_HiTempShtOffVlvSTB_MFOP_Value
        (NVMB_ac_DW.NeNVMB_Cnt_STBChillrShtOffVlv_MFOP);

    /* End of Outputs for SubSystem: '<S69>/NVM_COUB_FRSOV' */
    /* End of Outputs for SubSystem: '<S7>/NVM_COUB_CSOV_MedTED' */
#endif

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED1' */
}

/* Model step function for TID4 */
FUNC(void, NVMB_CODE) NVMB_MedTED2(void) /* Explicit Task: MedTED2 */
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED2' incorporates:
     *  SubSystem: '<Root>/NVMB_Runnable20ms_2'
     */
#if Rte_SysCon_Variant_NVMB_FRSOV_Presence

    /* Outputs for Atomic SubSystem: '<S8>/NVM_COUB_FRSOV_MedTED' */
    /* Outputs for Atomic SubSystem: '<S76>/NVM_ADIB_WED' */
    /* DataStoreWrite: '<S79>/NeCDMR_Cnt_BCIMInternal_MFOP2' incorporates:
     *  Inport: '<Root>/VeCOUB_Cnt_STBFtRfgtShtOffVlv_MFOP'
     */
    (void)Rte_Read_VeCOUB_Cnt_STBFtRfgtShtOffVlv_MFOP_Value
        (&NVMB_ac_DW.NeNVMB_Cnt_STBFtRfgtShtOffVlv_MFOP);

    /* DataStoreWrite: '<S79>/NeCDMR_Cnt_BCIMInternal_MFOP1' incorporates:
     *  Inport: '<Root>/VeCOUB_Cnt_STGFtRfgtShtOffVlv_MFOP'
     */
    (void)Rte_Read_VeCOUB_Cnt_STGFtRfgtShtOffVlv_MFOP_Value
        (&NVMB_ac_DW.NeNVMB_Cnt_STGFtRfgtShtOffVlv_MFOP);

    /* DataStoreWrite: '<S79>/NeCDMR_Cnt_BCIMInternal_MFOP' incorporates:
     *  Inport: '<Root>/VeCOUB_Cnt_FtRfgtShtOffVlvOC_MFOP'
     */
    (void)Rte_Read_VeCOUB_Cnt_FtRfgtShtOffVlvOC_MFOP_Value
        (&NVMB_ac_DW.NeNVMB_Cnt_FtRfgtShtOffVlvOC_MFOP);

    /* End of Outputs for SubSystem: '<S76>/NVM_ADIB_WED' */
    /* End of Outputs for SubSystem: '<S8>/NVM_COUB_FRSOV_MedTED' */
#endif

#if Rte_SysCon_Variant_NVMB_CSOV_Presence

    /* Outputs for Atomic SubSystem: '<S8>/NVM_COUB_CSOV_MedTED' */
    /* Outputs for Atomic SubSystem: '<S75>/NVM_COUB_FRSOV' */
    /* DataStoreWrite: '<S78>/NeCDMR_Cnt_BCIMInternal_MFOP2' incorporates:
     *  Inport: '<Root>/VeCOUB_Cnt_STBChillrShtOffVlv_MFOP'
     */
    (void)Rte_Read_VeCOUB_Cnt_STBChillrShtOffVlv_MFOP_Value
        (&NVMB_ac_DW.NeNVMB_Cnt_STBChillrShtOffVlv_MFOP);

    /* DataStoreWrite: '<S78>/NeCDMR_Cnt_BCIMInternal_MFOP1' incorporates:
     *  Inport: '<Root>/VeCOUB_Cnt_STGChillrShtOffVlv_MFOP'
     */
    (void)Rte_Read_VeCOUB_Cnt_STGChillrShtOffVlv_MFOP_Value
        (&NVMB_ac_DW.NeNVMB_Cnt_STGChillrShtOffVlv_MFOP);

    /* DataStoreWrite: '<S78>/NeCDMR_Cnt_BCIMInternal_MFOP' incorporates:
     *  Inport: '<Root>/VeCOUB_Cnt_OCChillrShtOffVlv_MFOP'
     */
    (void)Rte_Read_VeCOUB_Cnt_OCChillrShtOffVlv_MFOP_Value
        (&NVMB_ac_DW.NeNVMB_Cnt_OCChillrShtOffVlv_MFOP);

    /* End of Outputs for SubSystem: '<S75>/NVM_COUB_FRSOV' */
    /* End of Outputs for SubSystem: '<S8>/NVM_COUB_CSOV_MedTED' */
#endif

#if Rte_SysCon_Variant_NVMB_HTSOV_Presence

    /* Outputs for Atomic SubSystem: '<S8>/NVM_COUB_HTSOV_MedTED' */
    /* Outputs for Atomic SubSystem: '<S77>/NVM_COUB_HTSOV' */
    /* DataStoreWrite: '<S80>/NeCDMR_Cnt_BCIMInternal_MFOP2' incorporates:
     *  Inport: '<Root>/VeCOUB_Cnt_HiTempShtOffVlvSTB_MFOP'
     */
    (void)Rte_Read_VeCOUB_Cnt_HiTempShtOffVlvSTB_MFOP_Value
        (&NVMB_ac_DW.NeNVMB_Cnt_HiTempShtOffVlvSTB_MFOP);

    /* DataStoreWrite: '<S80>/NeCDMR_Cnt_BCIMInternal_MFOP1' incorporates:
     *  Inport: '<Root>/VeCOUB_Cnt_HiTempShtOffVlvSTG_MFOP'
     */
    (void)Rte_Read_VeCOUB_Cnt_HiTempShtOffVlvSTG_MFOP_Value
        (&NVMB_ac_DW.NeNVMB_Cnt_HiTempShtOffVlvSTG_MFOP);

    /* DataStoreWrite: '<S80>/NeCDMR_Cnt_BCIMInternal_MFOP' incorporates:
     *  Inport: '<Root>/VeCOUB_Cnt_HiTempShtOffVlvOC_MFOP'
     */
    (void)Rte_Read_VeCOUB_Cnt_HiTempShtOffVlvOC_MFOP_Value
        (&NVMB_ac_DW.NeNVMB_Cnt_HiTempShtOffVlvOC_MFOP);

    /* End of Outputs for SubSystem: '<S77>/NVM_COUB_HTSOV' */
    /* End of Outputs for SubSystem: '<S8>/NVM_COUB_HTSOV_MedTED' */
#endif

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED2' */
}

/* Model step function for TID5 */
FUNC(void, NVMB_CODE) NVMB_MedTEH1(void) /* Explicit Task: MedTEH1 */
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH1' incorporates:
     *  SubSystem: '<Root>/NVMB_Runnable100ms_1'
     */
#if Rte_SysCon_Variant_NVMB_EPTWUP_Presence

    /* Outputs for Atomic SubSystem: '<S3>/NVM_COUB_ePTWUp_MedTEH' */
    /* Outputs for Atomic SubSystem: '<S49>/NVM_COUB_ePTWUp' */
    /* Outport: '<Root>/VeNVMB_Cnt_ePTWakeUpEnblOC_MFOP' incorporates:
     *  DataStoreRead: '<S54>/NeCDMR_Cnt_ChgPrtLckFailHMSOF4'
     */
    (void)Rte_Write_VeNVMB_Cnt_ePTWakeUpEnblOC_MFOP_Value
        (NVMB_ac_DW.NeNVMB_Cnt_ePTWakeUpEnblOC_MFOP);

    /* Outport: '<Root>/VeNVMB_Cnt_ePTWakeUpEnblSTG_MFOP' incorporates:
     *  DataStoreRead: '<S54>/NeCDMR_Cnt_ChgPrtLckFailHMSOF5'
     */
    (void)Rte_Write_VeNVMB_Cnt_ePTWakeUpEnblSTG_MFOP_Value
        (NVMB_ac_DW.NeNVMB_Cnt_ePTWakeUpEnblSTG_MFOP);

    /* Outport: '<Root>/VeNVMB_Cnt_ePTWakeUpEnblSTB_MFOP' incorporates:
     *  DataStoreRead: '<S54>/NeCDMR_Cnt_ChgPrtLckFailHMSOF6'
     */
    (void)Rte_Write_VeNVMB_Cnt_ePTWakeUpEnblSTB_MFOP_Value
        (NVMB_ac_DW.NeNVMB_Cnt_ePTWakeUpEnblSTB_MFOP);

    /* End of Outputs for SubSystem: '<S49>/NVM_COUB_ePTWUp' */
    /* End of Outputs for SubSystem: '<S3>/NVM_COUB_ePTWUp_MedTEH' */
#endif

#if Rte_SysCon_Variant_NVMB_THRMLSYSEN_Presence

    /* Outputs for Atomic SubSystem: '<S3>/NVM_COUB_ThEn_MeTEH' */
    /* Outputs for Atomic SubSystem: '<S48>/NVM_COUB_ThEn' */
    /* Outport: '<Root>/VeNVMB_Cnt_ThermSysEnbl_MFOP' incorporates:
     *  DataStoreRead: '<S53>/NeCDMR_Cnt_ChgPrtLckFailHMSOF7'
     */
    (void)Rte_Write_VeNVMB_Cnt_ThermSysEnbl_MFOP_Value
        (NVMB_ac_DW.NeNVMB_Cnt_ThermSysEnbl_MFOP);

    /* End of Outputs for SubSystem: '<S48>/NVM_COUB_ThEn' */
    /* End of Outputs for SubSystem: '<S3>/NVM_COUB_ThEn_MeTEH' */
#endif

#if Rte_SysCon_Variant_NVMB_RADFAN_Presence

    /* Outputs for Atomic SubSystem: '<S3>/NVM_COUB_RadFan_MeTEH' */
    /* Outputs for Atomic SubSystem: '<S47>/NVM_COUB_RadFan' */
    /* Outport: '<Root>/VeNVMB_Cnt_RadrFanCtrlOC_MFOP' incorporates:
     *  DataStoreRead: '<S52>/NeCDMR_Cnt_ChgPrtLckFailHMSOF8'
     */
    (void)Rte_Write_VeNVMB_Cnt_RadrFanCtrlOC_MFOP_Value
        (NVMB_ac_DW.NeNVMB_Cnt_RadrFanCtrlOC_MFOP);

    /* Outport: '<Root>/VeNVMB_Cnt_RadrFanCtrlSTG_MFOP' incorporates:
     *  DataStoreRead: '<S52>/NeCDMR_Cnt_ChgPrtLckFailHMSOF9'
     */
    (void)Rte_Write_VeNVMB_Cnt_RadrFanCtrlSTG_MFOP_Value
        (NVMB_ac_DW.NeNVMB_Cnt_RadrFanCtrlSTG_MFOP);

    /* Outport: '<Root>/VeNVMB_Cnt_RadrFanCtrlSTB_MFOP' incorporates:
     *  DataStoreRead: '<S52>/NeCDMR_Cnt_ChgPrtLckFailHMSOF10'
     */
    (void)Rte_Write_VeNVMB_Cnt_RadrFanCtrlSTB_MFOP_Value
        (NVMB_ac_DW.NeNVMB_Cnt_RadrFanCtrlSTB_MFOP);

    /* End of Outputs for SubSystem: '<S47>/NVM_COUB_RadFan' */
    /* End of Outputs for SubSystem: '<S3>/NVM_COUB_RadFan_MeTEH' */
#endif

#if Rte_SysCon_Variant_NVMB_OILPUMP_Presence

    /* Outputs for Atomic SubSystem: '<S3>/NVM_COUB_EOP_MeTEH' */
    /* Outputs for Atomic SubSystem: '<S45>/NVM_COUB_EOP' */
    /* Outport: '<Root>/VeNVMB_Cnt_ElecOilPmpOC_MFOP' incorporates:
     *  DataStoreRead: '<S50>/NeCDMR_Cnt_ChgPrtLckFailHMSOF11'
     */
    (void)Rte_Write_VeNVMB_Cnt_ElecOilPmpOC_MFOP_Value
        (NVMB_ac_DW.NeNVMB_Cnt_ElecOilPmpOC_MFOP);

    /* End of Outputs for SubSystem: '<S45>/NVM_COUB_EOP' */
    /* End of Outputs for SubSystem: '<S3>/NVM_COUB_EOP_MeTEH' */
#endif

#if Rte_SysCon_Variant_NVMB_ACPWRSWRLY_Presence

    /* Outputs for Atomic SubSystem: '<S3>/NVM_COUB_PPSwtRly_MeTEH' */
    /* Outputs for Atomic SubSystem: '<S46>/NVM_COUB_PPSwtRly' */
    /* Outport: '<Root>/VeNVMB_Cnt_ACSwitchRelaySTG_MFOP' incorporates:
     *  DataStoreRead: '<S51>/NeCDMR_Cnt_ChgPrtLckFailHMSOF12'
     */
    (void)Rte_Write_VeNVMB_Cnt_ACSwitchRelaySTG_MFOP_Value
        (NVMB_ac_DW.NeNVMB_Cnt_ACSwitchRelaySTG_MFOP);

    /* Outport: '<Root>/VeNVMB_Cnt_ACSwitchRelaySTB_MFOP' incorporates:
     *  DataStoreRead: '<S51>/NeCDMR_Cnt_ChgPrtLckFailHMSOF13'
     */
    (void)Rte_Write_VeNVMB_Cnt_ACSwitchRelaySTB_MFOP_Value
        (NVMB_ac_DW.NeNVMB_Cnt_ACSwitchRelaySTB_MFOP);

    /* End of Outputs for SubSystem: '<S46>/NVM_COUB_PPSwtRly' */
    /* End of Outputs for SubSystem: '<S3>/NVM_COUB_PPSwtRly_MeTEH' */
#endif

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH1' */
}

/* Model step function for TID6 */
FUNC(void, NVMB_CODE) NVMB_MedTEH2(void) /* Explicit Task: MedTEH2 */
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH2' incorporates:
     *  SubSystem: '<Root>/NVMB_Runnable100ms_2'
     */
#if Rte_SysCon_Variant_NVMB_EPTWUP_Presence

    /* Outputs for Atomic SubSystem: '<S4>/NVM_COUB_ePTWUp_MeTEH' */
    /* Outputs for Atomic SubSystem: '<S59>/NVM_COUB_ePTWUp' */
    /* DataStoreWrite: '<S64>/NeCDMR_Cnt_BCIMInternal_MFOP5' incorporates:
     *  Inport: '<Root>/VeCOUB_Cnt_ePTWakeUpEnblSTB_MFOP'
     */
    (void)Rte_Read_VeCOUB_Cnt_ePTWakeUpEnblSTB_MFOP_Value
        (&NVMB_ac_DW.NeNVMB_Cnt_ePTWakeUpEnblSTB_MFOP);

    /* DataStoreWrite: '<S64>/NeCDMR_Cnt_BCIMInternal_MFOP4' incorporates:
     *  Inport: '<Root>/VeCOUB_Cnt_ePTWakeUpEnblSTG_MFOP'
     */
    (void)Rte_Read_VeCOUB_Cnt_ePTWakeUpEnblSTG_MFOP_Value
        (&NVMB_ac_DW.NeNVMB_Cnt_ePTWakeUpEnblSTG_MFOP);

    /* DataStoreWrite: '<S64>/NeCDMR_Cnt_BCIMInternal_MFOP3' incorporates:
     *  Inport: '<Root>/VeCOUB_Cnt_ePTWakeUpEnblOC_MFOP'
     */
    (void)Rte_Read_VeCOUB_Cnt_ePTWakeUpEnblOC_MFOP_Value
        (&NVMB_ac_DW.NeNVMB_Cnt_ePTWakeUpEnblOC_MFOP);

    /* End of Outputs for SubSystem: '<S59>/NVM_COUB_ePTWUp' */
    /* End of Outputs for SubSystem: '<S4>/NVM_COUB_ePTWUp_MeTEH' */
#endif

#if Rte_SysCon_Variant_NVMB_THRMLSYSEN_Presence

    /* Outputs for Atomic SubSystem: '<S4>/NVM_COUB_ThEn_MeTEH' */
    /* Outputs for Atomic SubSystem: '<S58>/NVM_COUB_ThEn' */
    /* DataStoreWrite: '<S63>/NeCDMR_Cnt_BCIMInternal_MFOP6' incorporates:
     *  Inport: '<Root>/VeCOUB_Cnt_ThermSysEnbl_MFOP'
     */
    (void)Rte_Read_VeCOUB_Cnt_ThermSysEnbl_MFOP_Value
        (&NVMB_ac_DW.NeNVMB_Cnt_ThermSysEnbl_MFOP);

    /* End of Outputs for SubSystem: '<S58>/NVM_COUB_ThEn' */
    /* End of Outputs for SubSystem: '<S4>/NVM_COUB_ThEn_MeTEH' */
#endif

#if Rte_SysCon_Variant_NVMB_RADFAN_Presence

    /* Outputs for Atomic SubSystem: '<S4>/NVM_COUB_RadFan_MeTEH' */
    /* Outputs for Atomic SubSystem: '<S57>/NVM_COUB_RadFan' */
    /* DataStoreWrite: '<S62>/NeCDMR_Cnt_BCIMInternal_MFOP9' incorporates:
     *  Inport: '<Root>/VeCOUB_Cnt_RadrFanCtrlSTB_MFOP'
     */
    (void)Rte_Read_VeCOUB_Cnt_RadrFanCtrlSTB_MFOP_Value
        (&NVMB_ac_DW.NeNVMB_Cnt_RadrFanCtrlSTB_MFOP);

    /* DataStoreWrite: '<S62>/NeCDMR_Cnt_BCIMInternal_MFOP8' incorporates:
     *  Inport: '<Root>/VeCOUB_Cnt_RadrFanCtrlSTG_MFOP'
     */
    (void)Rte_Read_VeCOUB_Cnt_RadrFanCtrlSTG_MFOP_Value
        (&NVMB_ac_DW.NeNVMB_Cnt_RadrFanCtrlSTG_MFOP);

    /* DataStoreWrite: '<S62>/NeCDMR_Cnt_BCIMInternal_MFOP7' incorporates:
     *  Inport: '<Root>/VeCOUB_Cnt_RadrFanCtrlOC_MFOP'
     */
    (void)Rte_Read_VeCOUB_Cnt_RadrFanCtrlOC_MFOP_Value
        (&NVMB_ac_DW.NeNVMB_Cnt_RadrFanCtrlOC_MFOP);

    /* End of Outputs for SubSystem: '<S57>/NVM_COUB_RadFan' */
    /* End of Outputs for SubSystem: '<S4>/NVM_COUB_RadFan_MeTEH' */
#endif

#if Rte_SysCon_Variant_NVMB_OILPUMP_Presence

    /* Outputs for Atomic SubSystem: '<S4>/NVM_COUB_EOP_MedTEH' */
    /* Outputs for Atomic SubSystem: '<S55>/NVM_COUB_EOP' */
    /* DataStoreWrite: '<S60>/NeCDMR_Cnt_BCIMInternal_MFOP10' incorporates:
     *  Inport: '<Root>/VeCOUB_Cnt_ElecOilPmpOC_MFOP'
     */
    (void)Rte_Read_VeCOUB_Cnt_ElecOilPmpOC_MFOP_Value
        (&NVMB_ac_DW.NeNVMB_Cnt_ElecOilPmpOC_MFOP);

    /* End of Outputs for SubSystem: '<S55>/NVM_COUB_EOP' */
    /* End of Outputs for SubSystem: '<S4>/NVM_COUB_EOP_MedTEH' */
#endif

#if Rte_SysCon_Variant_NVMB_ACPWRSWRLY_Presence

    /* Outputs for Atomic SubSystem: '<S4>/NVM_COUB_PPSwtRly_MedTEH' */
    /* Outputs for Atomic SubSystem: '<S56>/NVM_COUB_PPSwtRly' */
    /* DataStoreWrite: '<S61>/NeCDMR_Cnt_BCIMInternal_MFOP12' incorporates:
     *  Inport: '<Root>/VeCOUB_Cnt_ACSwitchRelaySTB_MFOP'
     */
    (void)Rte_Read_VeCOUB_Cnt_ACSwitchRelaySTB_MFOP_Value
        (&NVMB_ac_DW.NeNVMB_Cnt_ACSwitchRelaySTB_MFOP);

    /* DataStoreWrite: '<S61>/NeCDMR_Cnt_BCIMInternal_MFOP11' incorporates:
     *  Inport: '<Root>/VeCOUB_Cnt_ACSwitchRelaySTG_MFOP'
     */
    (void)Rte_Read_VeCOUB_Cnt_ACSwitchRelaySTG_MFOP_Value
        (&NVMB_ac_DW.NeNVMB_Cnt_ACSwitchRelaySTG_MFOP);

    /* End of Outputs for SubSystem: '<S56>/NVM_COUB_PPSwtRly' */
    /* End of Outputs for SubSystem: '<S4>/NVM_COUB_PPSwtRly_MedTEH' */
#endif

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH2' */
}

/* Output function */
FUNC(void, NVMB_CODE) NVMB_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/NVMB_PwrOff'
     */
#if Rte_SysCon_Variant_NVMB_WED_Presence

    /* Outputs for Atomic SubSystem: '<S2>/NVM_ADIB_WED_PwrOff' */
    /* Outputs for Atomic SubSystem: '<S27>/NVM_ADIB_WED_PwrOff' */
    /* Outport: '<Root>/NeNVMB_Cnt_WEDPosnSnsr1ElecFlt_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S36>/NeCDMR_Cnt_BCIMInternal_MFOP'
     */
    (void)
        Rte_Write_NeNVMB_Cnt_WEDPosnSnsr1ElecFlt_MFOP_NeNVMB_Cnt_WEDPosnSnsr1ElecFlt_MFOP
        (NVMB_ac_DW.NeNVMB_Cnt_WEDPosnSnsr1ElecFlt_MFOP);

    /* Outport: '<Root>/NeNVMB_Cnt_WEDPosnSnsr1PosnOOR_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S36>/NeCDMR_Cnt_BCIMInternal_MSOF'
     */
    (void)
        Rte_Write_NeNVMB_Cnt_WEDPosnSnsr1PosnOOR_MFOP_NeNVMB_Cnt_WEDPosnSnsr1PosnOOR_MFOP
        (NVMB_ac_DW.NeNVMB_Cnt_WEDPosnSnsr1PosnOOR_MFOP);

    /* Outport: '<Root>/NeNVMB_Cnt_WEDPosnSnsr2ElecFlt_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S36>/NeCDMR_Cnt_CPIMInternal_MFOP'
     */
    (void)
        Rte_Write_NeNVMB_Cnt_WEDPosnSnsr2ElecFlt_MFOP_NeNVMB_Cnt_WEDPosnSnsr2ElecFlt_MFOP
        (NVMB_ac_DW.NeNVMB_Cnt_WEDPosnSnsr2ElecFlt_MFOP);

    /* Outport: '<Root>/NeNVMB_Cnt_WEDPosnSnsr2PosnOOR_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S36>/NeCDMR_Cnt_CPIMInternal_MSOF'
     */
    (void)
        Rte_Write_NeNVMB_Cnt_WEDPosnSnsr2PosnOOR_MFOP_NeNVMB_Cnt_WEDPosnSnsr2PosnOOR_MFOP
        (NVMB_ac_DW.NeNVMB_Cnt_WEDPosnSnsr2PosnOOR_MFOP);

    /* Outport: '<Root>/NeNVMB_Cnt_LtWEDElecFlt_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S36>/NeCDMR_Cnt_ChgPrtLckFailHMFOP'
     */
    (void)Rte_Write_NeNVMB_Cnt_LtWEDElecFlt_MFOP_NeNVMB_Cnt_LtWEDElecFlt_MFOP
        (NVMB_ac_DW.NeNVMB_Cnt_LtWEDElecFlt_MFOP);

    /* Outport: '<Root>/NeNVMB_Cnt_RtWEDElecFlt_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S36>/NeCDMR_Cnt_ChgPrtLckFailHMSOF'
     */
    (void)Rte_Write_NeNVMB_Cnt_RtWEDElecFlt_MFOP_NeNVMB_Cnt_RtWEDElecFlt_MFOP
        (NVMB_ac_DW.NeNVMB_Cnt_RtWEDElecFlt_MFOP);

    /* End of Outputs for SubSystem: '<S27>/NVM_ADIB_WED_PwrOff' */
    /* End of Outputs for SubSystem: '<S2>/NVM_ADIB_WED_PwrOff' */
#endif

#if Rte_SysCon_Variant_NVMB_FRSOV_Presence

    /* Outputs for Atomic SubSystem: '<S2>/NVM_COUB_FRSOV_PwrOff' */
    /* Outputs for Atomic SubSystem: '<S30>/NVM_COUB_FRSOV_PwrOff' */
    /* Outport: '<Root>/NeNVMB_Cnt_FtRfgtShtOffVlvOC_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S39>/NeCDMR_Cnt_BCIMInternal_MFOP'
     */
    (void)
        Rte_Write_NeNVMB_Cnt_FtRfgtShtOffVlvOC_MFOP_NeNVMB_Cnt_FtRfgtShtOffVlvOC_MFOP
        (NVMB_ac_DW.NeNVMB_Cnt_FtRfgtShtOffVlvOC_MFOP);

    /* Outport: '<Root>/NeNVMB_Cnt_STGFtRfgtShtOffVlv_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S39>/NeCDMR_Cnt_BCIMInternal_MSOF'
     */
    (void)
        Rte_Write_NeNVMB_Cnt_STGFtRfgtShtOffVlv_MFOP_NeNVMB_Cnt_STGFtRfgtShtOffVlv_MFOP
        (NVMB_ac_DW.NeNVMB_Cnt_STGFtRfgtShtOffVlv_MFOP);

    /* Outport: '<Root>/NeNVMB_Cnt_STBFtRfgtShtOffVlv_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S39>/NeCDMR_Cnt_CPIMInternal_MFOP'
     */
    (void)
        Rte_Write_NeNVMB_Cnt_STBFtRfgtShtOffVlv_MFOP_NeNVMB_Cnt_STBFtRfgtShtOffVlv_MFOP
        (NVMB_ac_DW.NeNVMB_Cnt_STBFtRfgtShtOffVlv_MFOP);

    /* End of Outputs for SubSystem: '<S30>/NVM_COUB_FRSOV_PwrOff' */
    /* End of Outputs for SubSystem: '<S2>/NVM_COUB_FRSOV_PwrOff' */
#endif

#if Rte_SysCon_Variant_NVMB_CSOV_Presence

    /* Outputs for Atomic SubSystem: '<S2>/NVM_COUB_CSOV_PwrOff' */
    /* Outputs for Atomic SubSystem: '<S28>/NVM_COUB_CSOV_PwrOff' */
    /* Outport: '<Root>/NeNVMB_Cnt_OCChillrShtOffVlv_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S37>/NeCDMR_Cnt_CPIMInternal_MSOF'
     */
    (void)
        Rte_Write_NeNVMB_Cnt_OCChillrShtOffVlv_MFOP_NeNVMB_Cnt_OCChillrShtOffVlv_MFOP
        (NVMB_ac_DW.NeNVMB_Cnt_OCChillrShtOffVlv_MFOP);

    /* Outport: '<Root>/NeNVMB_Cnt_STGChillrShtOffVlv_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S37>/NeCDMR_Cnt_ChgPrtLckFailHMFOP'
     */
    (void)
        Rte_Write_NeNVMB_Cnt_STGChillrShtOffVlv_MFOP_NeNVMB_Cnt_STGChillrShtOffVlv_MFOP
        (NVMB_ac_DW.NeNVMB_Cnt_STGChillrShtOffVlv_MFOP);

    /* Outport: '<Root>/NeNVMB_Cnt_STBChillrShtOffVlv_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S37>/NeCDMR_Cnt_ChgPrtLckFailHMSOF'
     */
    (void)
        Rte_Write_NeNVMB_Cnt_STBChillrShtOffVlv_MFOP_NeNVMB_Cnt_STBChillrShtOffVlv_MFOP
        (NVMB_ac_DW.NeNVMB_Cnt_STBChillrShtOffVlv_MFOP);

    /* End of Outputs for SubSystem: '<S28>/NVM_COUB_CSOV_PwrOff' */
    /* End of Outputs for SubSystem: '<S2>/NVM_COUB_CSOV_PwrOff' */
#endif

#if Rte_SysCon_Variant_NVMB_HTSOV_Presence

    /* Outputs for Atomic SubSystem: '<S2>/NVM_COUB_HTSOV_PwrOff' */
    /* Outputs for Atomic SubSystem: '<S31>/NVM_COUB_HTSOV' */
    /* Outport: '<Root>/NeNVMB_Cnt_HiTempShtOffVlvOC_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S40>/NeCDMR_Cnt_ChgPrtLckFailHMSOF1'
     */
    (void)
        Rte_Write_NeNVMB_Cnt_HiTempShtOffVlvOC_MFOP_NeNVMB_Cnt_HiTempShtOffVlvOC_MFOP
        (NVMB_ac_DW.NeNVMB_Cnt_HiTempShtOffVlvOC_MFOP);

    /* Outport: '<Root>/NeNVMB_Cnt_HiTempShtOffVlvSTG_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S40>/NeCDMR_Cnt_ChgPrtLckFailHMSOF2'
     */
    (void)
        Rte_Write_NeNVMB_Cnt_HiTempShtOffVlvSTG_MFOP_NeNVMB_Cnt_HiTempShtOffVlvSTG_MFOP
        (NVMB_ac_DW.NeNVMB_Cnt_HiTempShtOffVlvSTG_MFOP);

    /* Outport: '<Root>/NeNVMB_Cnt_HiTempShtOffVlvSTB_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S40>/NeCDMR_Cnt_ChgPrtLckFailHMSOF3'
     */
    (void)
        Rte_Write_NeNVMB_Cnt_HiTempShtOffVlvSTB_MFOP_NeNVMB_Cnt_HiTempShtOffVlvSTB_MFOP
        (NVMB_ac_DW.NeNVMB_Cnt_HiTempShtOffVlvSTB_MFOP);

    /* End of Outputs for SubSystem: '<S31>/NVM_COUB_HTSOV' */
    /* End of Outputs for SubSystem: '<S2>/NVM_COUB_HTSOV_PwrOff' */
#endif

#if Rte_SysCon_Variant_NVMB_EPTWUP_Presence

    /* Outputs for Atomic SubSystem: '<S2>/NVM_COUB_ePTWUp_PwrOff' */
    /* Outputs for Atomic SubSystem: '<S35>/NVM_COUB_ePTWUp' */
    /* Outport: '<Root>/NeNVMB_Cnt_ePTWakeUpEnblOC_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S44>/NeCDMR_Cnt_ChgPrtLckFailHMSOF4'
     */
    (void)
        Rte_Write_NeNVMB_Cnt_ePTWakeUpEnblOC_MFOP_NeNVMB_Cnt_ePTWakeUpEnblOC_MFOP
        (NVMB_ac_DW.NeNVMB_Cnt_ePTWakeUpEnblOC_MFOP);

    /* Outport: '<Root>/NeNVMB_Cnt_ePTWakeUpEnblSTG_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S44>/NeCDMR_Cnt_ChgPrtLckFailHMSOF5'
     */
    (void)
        Rte_Write_NeNVMB_Cnt_ePTWakeUpEnblSTG_MFOP_NeNVMB_Cnt_ePTWakeUpEnblSTG_MFOP
        (NVMB_ac_DW.NeNVMB_Cnt_ePTWakeUpEnblSTG_MFOP);

    /* Outport: '<Root>/NeNVMB_Cnt_ePTWakeUpEnblSTB_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S44>/NeCDMR_Cnt_ChgPrtLckFailHMSOF6'
     */
    (void)
        Rte_Write_NeNVMB_Cnt_ePTWakeUpEnblSTB_MFOP_NeNVMB_Cnt_ePTWakeUpEnblSTB_MFOP
        (NVMB_ac_DW.NeNVMB_Cnt_ePTWakeUpEnblSTB_MFOP);

    /* End of Outputs for SubSystem: '<S35>/NVM_COUB_ePTWUp' */
    /* End of Outputs for SubSystem: '<S2>/NVM_COUB_ePTWUp_PwrOff' */
#endif

#if Rte_SysCon_Variant_NVMB_THRMLSYSEN_Presence

    /* Outputs for Atomic SubSystem: '<S2>/NVM_COUB_ThEn_PwrOff' */
    /* Outputs for Atomic SubSystem: '<S34>/NVM_COUB_ThEn' */
    /* Outport: '<Root>/NeNVMB_Cnt_ThermSysEnbl_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S43>/NeCDMR_Cnt_ChgPrtLckFailHMSOF7'
     */
    (void)Rte_Write_NeNVMB_Cnt_ThermSysEnbl_MFOP_NeNVMB_Cnt_ThermSysEnbl_MFOP
        (NVMB_ac_DW.NeNVMB_Cnt_ThermSysEnbl_MFOP);

    /* End of Outputs for SubSystem: '<S34>/NVM_COUB_ThEn' */
    /* End of Outputs for SubSystem: '<S2>/NVM_COUB_ThEn_PwrOff' */
#endif

#if Rte_SysCon_Variant_NVMB_RADFAN_Presence

    /* Outputs for Atomic SubSystem: '<S2>/NVM_COUB_RadFan_PwrOff' */
    /* Outputs for Atomic SubSystem: '<S33>/NVM_COUB_RadFan' */
    /* Outport: '<Root>/NeNVMB_Cnt_RadrFanCtrlOC_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S42>/NeCDMR_Cnt_ChgPrtLckFailHMSOF8'
     */
    (void)Rte_Write_NeNVMB_Cnt_RadrFanCtrlOC_MFOP_NeNVMB_Cnt_RadrFanCtrlOC_MFOP
        (NVMB_ac_DW.NeNVMB_Cnt_RadrFanCtrlOC_MFOP);

    /* Outport: '<Root>/NeNVMB_Cnt_RadrFanCtrlSTG_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S42>/NeCDMR_Cnt_ChgPrtLckFailHMSOF9'
     */
    (void)
        Rte_Write_NeNVMB_Cnt_RadrFanCtrlSTG_MFOP_NeNVMB_Cnt_RadrFanCtrlSTG_MFOP
        (NVMB_ac_DW.NeNVMB_Cnt_RadrFanCtrlSTG_MFOP);

    /* Outport: '<Root>/NeNVMB_Cnt_RadrFanCtrlSTB_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S42>/NeCDMR_Cnt_ChgPrtLckFailHMSOF10'
     */
    (void)
        Rte_Write_NeNVMB_Cnt_RadrFanCtrlSTB_MFOP_NeNVMB_Cnt_RadrFanCtrlSTB_MFOP
        (NVMB_ac_DW.NeNVMB_Cnt_RadrFanCtrlSTB_MFOP);

    /* End of Outputs for SubSystem: '<S33>/NVM_COUB_RadFan' */
    /* End of Outputs for SubSystem: '<S2>/NVM_COUB_RadFan_PwrOff' */
#endif

#if Rte_SysCon_Variant_NVMB_OILPUMP_Presence

    /* Outputs for Atomic SubSystem: '<S2>/NVM_COUB_EOP_PwrOff' */
    /* Outputs for Atomic SubSystem: '<S29>/NVM_COUB_EOP' */
    /* Outport: '<Root>/NeNVMB_Cnt_ElecOilPmpOC_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S38>/NeCDMR_Cnt_ChgPrtLckFailHMSOF11'
     */
    (void)Rte_Write_NeNVMB_Cnt_ElecOilPmpOC_MFOP_NeNVMB_Cnt_ElecOilPmpOC_MFOP
        (NVMB_ac_DW.NeNVMB_Cnt_ElecOilPmpOC_MFOP);

    /* End of Outputs for SubSystem: '<S29>/NVM_COUB_EOP' */
    /* End of Outputs for SubSystem: '<S2>/NVM_COUB_EOP_PwrOff' */
#endif

#if Rte_SysCon_Variant_NVMB_ACPWRSWRLY_Presence

    /* Outputs for Atomic SubSystem: '<S2>/NVM_COUB_PPSwtRly_PwrOff' */
    /* Outputs for Atomic SubSystem: '<S32>/NVM_COUB_PPSwtRly' */
    /* Outport: '<Root>/NeNVMB_Cnt_ACSwitchRelaySTG_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S41>/NeCDMR_Cnt_ChgPrtLckFailHMSOF12'
     */
    (void)
        Rte_Write_NeNVMB_Cnt_ACSwitchRelaySTG_MFOP_NeNVMB_Cnt_ACSwitchRelaySTG_MFOP
        (NVMB_ac_DW.NeNVMB_Cnt_ACSwitchRelaySTG_MFOP);

    /* Outport: '<Root>/NeNVMB_Cnt_ACSwitchRelaySTB_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S41>/NeCDMR_Cnt_ChgPrtLckFailHMSOF13'
     */
    (void)
        Rte_Write_NeNVMB_Cnt_ACSwitchRelaySTB_MFOP_NeNVMB_Cnt_ACSwitchRelaySTB_MFOP
        (NVMB_ac_DW.NeNVMB_Cnt_ACSwitchRelaySTB_MFOP);

    /* End of Outputs for SubSystem: '<S32>/NVM_COUB_PPSwtRly' */
    /* End of Outputs for SubSystem: '<S2>/NVM_COUB_PPSwtRly_PwrOff' */
#endif

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Model initialize function */
FUNC(void, NVMB_CODE) NVMB_ac_Init(void)
{
    /* Outputs for Atomic SubSystem: '<Root>/NVMB_Init' */
#if Rte_SysCon_Variant_NVMB_WED_Presence

    /* Outputs for Atomic SubSystem: '<S1>/NVM_ADIB_WED_Init' */
    /* Outputs for Atomic SubSystem: '<S9>/NVM_ADIB_WED_Init' */
    /* DataStoreWrite: '<S18>/NeCDMR_Cnt_BCIMInternal_MFOP5' incorporates:
     *  Inport: '<Root>/NeNVMB_Cnt_RtWEDElecFlt_MFOP_PM_In'
     */
    (void)Rte_Read_NeNVMB_Cnt_RtWEDElecFlt_MFOP_Rx_NeNVMB_Cnt_RtWEDElecFlt_MFOP(
        &NVMB_ac_DW.NeNVMB_Cnt_RtWEDElecFlt_MFOP);

    /* DataStoreWrite: '<S18>/NeCDMR_Cnt_BCIMInternal_MFOP4' incorporates:
     *  Inport: '<Root>/NeNVMB_Cnt_LtWEDElecFlt_MFOP_PM_In'
     */
    (void)Rte_Read_NeNVMB_Cnt_LtWEDElecFlt_MFOP_Rx_NeNVMB_Cnt_LtWEDElecFlt_MFOP(
        &NVMB_ac_DW.NeNVMB_Cnt_LtWEDElecFlt_MFOP);

    /* DataStoreWrite: '<S18>/NeCDMR_Cnt_BCIMInternal_MFOP3' incorporates:
     *  Inport: '<Root>/NeNVMB_Cnt_WEDPosnSnsr2PosnOOR_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeNVMB_Cnt_WEDPosnSnsr2PosnOOR_MFOP_Rx_NeNVMB_Cnt_WEDPosnSnsr2PosnOOR_MFOP
        (&NVMB_ac_DW.NeNVMB_Cnt_WEDPosnSnsr2PosnOOR_MFOP);

    /* DataStoreWrite: '<S18>/NeCDMR_Cnt_BCIMInternal_MFOP2' incorporates:
     *  Inport: '<Root>/NeNVMB_Cnt_WEDPosnSnsr2ElecFlt_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeNVMB_Cnt_WEDPosnSnsr2ElecFlt_MFOP_Rx_NeNVMB_Cnt_WEDPosnSnsr2ElecFlt_MFOP
        (&NVMB_ac_DW.NeNVMB_Cnt_WEDPosnSnsr2ElecFlt_MFOP);

    /* DataStoreWrite: '<S18>/NeCDMR_Cnt_BCIMInternal_MFOP1' incorporates:
     *  Inport: '<Root>/NeNVMB_Cnt_WEDPosnSnsr1PosnOOR_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeNVMB_Cnt_WEDPosnSnsr1PosnOOR_MFOP_Rx_NeNVMB_Cnt_WEDPosnSnsr1PosnOOR_MFOP
        (&NVMB_ac_DW.NeNVMB_Cnt_WEDPosnSnsr1PosnOOR_MFOP);

    /* DataStoreWrite: '<S18>/NeCDMR_Cnt_BCIMInternal_MFOP' incorporates:
     *  Inport: '<Root>/NeNVMB_Cnt_WEDPosnSnsr1ElecFlt_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeNVMB_Cnt_WEDPosnSnsr1ElecFlt_MFOP_Rx_NeNVMB_Cnt_WEDPosnSnsr1ElecFlt_MFOP
        (&NVMB_ac_DW.NeNVMB_Cnt_WEDPosnSnsr1ElecFlt_MFOP);

    /* End of Outputs for SubSystem: '<S9>/NVM_ADIB_WED_Init' */
    /* End of Outputs for SubSystem: '<S1>/NVM_ADIB_WED_Init' */
#endif

#if Rte_SysCon_Variant_NVMB_FRSOV_Presence

    /* Outputs for Atomic SubSystem: '<S1>/NVM_COUB_FRSOV_Init' */
    /* Outputs for Atomic SubSystem: '<S12>/NVM_COUB_FRSOV' */
    /* DataStoreWrite: '<S21>/NeCDMR_Cnt_BCIMInternal_MFOP2' incorporates:
     *  Inport: '<Root>/NeNVMB_Cnt_STBFtRfgtShtOffVlv_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeNVMB_Cnt_STBFtRfgtShtOffVlv_MFOP_Rx_NeNVMB_Cnt_STBFtRfgtShtOffVlv_MFOP
        (&NVMB_ac_DW.NeNVMB_Cnt_STBFtRfgtShtOffVlv_MFOP);

    /* DataStoreWrite: '<S21>/NeCDMR_Cnt_BCIMInternal_MFOP1' incorporates:
     *  Inport: '<Root>/NeNVMB_Cnt_STGFtRfgtShtOffVlv_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeNVMB_Cnt_STGFtRfgtShtOffVlv_MFOP_Rx_NeNVMB_Cnt_STGFtRfgtShtOffVlv_MFOP
        (&NVMB_ac_DW.NeNVMB_Cnt_STGFtRfgtShtOffVlv_MFOP);

    /* DataStoreWrite: '<S21>/NeCDMR_Cnt_BCIMInternal_MFOP' incorporates:
     *  Inport: '<Root>/NeNVMB_Cnt_FtRfgtShtOffVlvOC_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeNVMB_Cnt_FtRfgtShtOffVlvOC_MFOP_Rx_NeNVMB_Cnt_FtRfgtShtOffVlvOC_MFOP
        (&NVMB_ac_DW.NeNVMB_Cnt_FtRfgtShtOffVlvOC_MFOP);

    /* End of Outputs for SubSystem: '<S12>/NVM_COUB_FRSOV' */
    /* End of Outputs for SubSystem: '<S1>/NVM_COUB_FRSOV_Init' */
#endif

#if Rte_SysCon_Variant_NVMB_CSOV_Presence

    /* Outputs for Atomic SubSystem: '<S1>/NVM_COUB_CSOV_Init' */
    /* Outputs for Atomic SubSystem: '<S10>/NVM_COUB_FRSOV' */
    /* DataStoreWrite: '<S19>/NeCDMR_Cnt_BCIMInternal_MFOP2' incorporates:
     *  Inport: '<Root>/NeNVMB_Cnt_STBChillrShtOffVlv_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeNVMB_Cnt_STBChillrShtOffVlv_MFOP_Rx_NeNVMB_Cnt_STBChillrShtOffVlv_MFOP
        (&NVMB_ac_DW.NeNVMB_Cnt_STBChillrShtOffVlv_MFOP);

    /* DataStoreWrite: '<S19>/NeCDMR_Cnt_BCIMInternal_MFOP1' incorporates:
     *  Inport: '<Root>/NeNVMB_Cnt_STGChillrShtOffVlv_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeNVMB_Cnt_STGChillrShtOffVlv_MFOP_Rx_NeNVMB_Cnt_STGChillrShtOffVlv_MFOP
        (&NVMB_ac_DW.NeNVMB_Cnt_STGChillrShtOffVlv_MFOP);

    /* DataStoreWrite: '<S19>/NeCDMR_Cnt_BCIMInternal_MFOP' incorporates:
     *  Inport: '<Root>/NeNVMB_Cnt_OCChillrShtOffVlv_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeNVMB_Cnt_OCChillrShtOffVlv_MFOP_Rx_NeNVMB_Cnt_OCChillrShtOffVlv_MFOP
        (&NVMB_ac_DW.NeNVMB_Cnt_OCChillrShtOffVlv_MFOP);

    /* End of Outputs for SubSystem: '<S10>/NVM_COUB_FRSOV' */
    /* End of Outputs for SubSystem: '<S1>/NVM_COUB_CSOV_Init' */
#endif

#if Rte_SysCon_Variant_NVMB_HTSOV_Presence

    /* Outputs for Atomic SubSystem: '<S1>/NVM_COUB_HTSOV_Init' */
    /* Outputs for Atomic SubSystem: '<S13>/NVM_COUB_HTSOV' */
    /* DataStoreWrite: '<S22>/NeCDMR_Cnt_BCIMInternal_MFOP2' incorporates:
     *  Inport: '<Root>/NeNVMB_Cnt_HiTempShtOffVlvSTB_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeNVMB_Cnt_HiTempShtOffVlvSTB_MFOP_Rx_NeNVMB_Cnt_HiTempShtOffVlvSTB_MFOP
        (&NVMB_ac_DW.NeNVMB_Cnt_HiTempShtOffVlvSTB_MFOP);

    /* DataStoreWrite: '<S22>/NeCDMR_Cnt_BCIMInternal_MFOP1' incorporates:
     *  Inport: '<Root>/NeNVMB_Cnt_HiTempShtOffVlvSTG_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeNVMB_Cnt_HiTempShtOffVlvSTG_MFOP_Rx_NeNVMB_Cnt_HiTempShtOffVlvSTG_MFOP
        (&NVMB_ac_DW.NeNVMB_Cnt_HiTempShtOffVlvSTG_MFOP);

    /* DataStoreWrite: '<S22>/NeCDMR_Cnt_BCIMInternal_MFOP' incorporates:
     *  Inport: '<Root>/NeNVMB_Cnt_HiTempShtOffVlvOC_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeNVMB_Cnt_HiTempShtOffVlvOC_MFOP_Rx_NeNVMB_Cnt_HiTempShtOffVlvOC_MFOP
        (&NVMB_ac_DW.NeNVMB_Cnt_HiTempShtOffVlvOC_MFOP);

    /* End of Outputs for SubSystem: '<S13>/NVM_COUB_HTSOV' */
    /* End of Outputs for SubSystem: '<S1>/NVM_COUB_HTSOV_Init' */
#endif

#if Rte_SysCon_Variant_NVMB_EPTWUP_Presence

    /* Outputs for Atomic SubSystem: '<S1>/NVM_COUB_ePTWUp_Init' */
    /* Outputs for Atomic SubSystem: '<S17>/NVM_COUB_ePTWUp' */
    /* DataStoreWrite: '<S26>/NeCDMR_Cnt_BCIMInternal_MFOP5' incorporates:
     *  Inport: '<Root>/NeNVMB_Cnt_ePTWakeUpEnblSTB_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeNVMB_Cnt_ePTWakeUpEnblSTB_MFOP_Rx_NeNVMB_Cnt_ePTWakeUpEnblSTB_MFOP
        (&NVMB_ac_DW.NeNVMB_Cnt_ePTWakeUpEnblSTB_MFOP);

    /* DataStoreWrite: '<S26>/NeCDMR_Cnt_BCIMInternal_MFOP4' incorporates:
     *  Inport: '<Root>/NeNVMB_Cnt_ePTWakeUpEnblSTG_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeNVMB_Cnt_ePTWakeUpEnblSTG_MFOP_Rx_NeNVMB_Cnt_ePTWakeUpEnblSTG_MFOP
        (&NVMB_ac_DW.NeNVMB_Cnt_ePTWakeUpEnblSTG_MFOP);

    /* DataStoreWrite: '<S26>/NeCDMR_Cnt_BCIMInternal_MFOP3' incorporates:
     *  Inport: '<Root>/NeNVMB_Cnt_ePTWakeUpEnblOC_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeNVMB_Cnt_ePTWakeUpEnblOC_MFOP_Rx_NeNVMB_Cnt_ePTWakeUpEnblOC_MFOP
        (&NVMB_ac_DW.NeNVMB_Cnt_ePTWakeUpEnblOC_MFOP);

    /* End of Outputs for SubSystem: '<S17>/NVM_COUB_ePTWUp' */
    /* End of Outputs for SubSystem: '<S1>/NVM_COUB_ePTWUp_Init' */
#endif

#if Rte_SysCon_Variant_NVMB_THRMLSYSEN_Presence

    /* Outputs for Atomic SubSystem: '<S1>/NVM_COUB_ThEn_Init' */
    /* Outputs for Atomic SubSystem: '<S16>/NVM_COUB_ThEn' */
    /* DataStoreWrite: '<S25>/NeCDMR_Cnt_BCIMInternal_MFOP6' incorporates:
     *  Inport: '<Root>/NeNVMB_Cnt_ThermSysEnbl_MFOP_PM_In'
     */
    (void)Rte_Read_NeNVMB_Cnt_ThermSysEnbl_MFOP_Rx_NeNVMB_Cnt_ThermSysEnbl_MFOP(
        &NVMB_ac_DW.NeNVMB_Cnt_ThermSysEnbl_MFOP);

    /* End of Outputs for SubSystem: '<S16>/NVM_COUB_ThEn' */
    /* End of Outputs for SubSystem: '<S1>/NVM_COUB_ThEn_Init' */
#endif

#if Rte_SysCon_Variant_NVMB_RADFAN_Presence

    /* Outputs for Atomic SubSystem: '<S1>/NVM_COUB_RadFan_Init' */
    /* Outputs for Atomic SubSystem: '<S15>/NVM_COUB_RadFan' */
    /* DataStoreWrite: '<S24>/NeCDMR_Cnt_BCIMInternal_MFOP9' incorporates:
     *  Inport: '<Root>/NeNVMB_Cnt_RadrFanCtrlSTB_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeNVMB_Cnt_RadrFanCtrlSTB_MFOP_Rx_NeNVMB_Cnt_RadrFanCtrlSTB_MFOP
        (&NVMB_ac_DW.NeNVMB_Cnt_RadrFanCtrlSTB_MFOP);

    /* DataStoreWrite: '<S24>/NeCDMR_Cnt_BCIMInternal_MFOP8' incorporates:
     *  Inport: '<Root>/NeNVMB_Cnt_RadrFanCtrlSTG_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeNVMB_Cnt_RadrFanCtrlSTG_MFOP_Rx_NeNVMB_Cnt_RadrFanCtrlSTG_MFOP
        (&NVMB_ac_DW.NeNVMB_Cnt_RadrFanCtrlSTG_MFOP);

    /* DataStoreWrite: '<S24>/NeCDMR_Cnt_BCIMInternal_MFOP7' incorporates:
     *  Inport: '<Root>/NeNVMB_Cnt_RadrFanCtrlOC_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeNVMB_Cnt_RadrFanCtrlOC_MFOP_Rx_NeNVMB_Cnt_RadrFanCtrlOC_MFOP(
        &NVMB_ac_DW.NeNVMB_Cnt_RadrFanCtrlOC_MFOP);

    /* End of Outputs for SubSystem: '<S15>/NVM_COUB_RadFan' */
    /* End of Outputs for SubSystem: '<S1>/NVM_COUB_RadFan_Init' */
#endif

#if Rte_SysCon_Variant_NVMB_OILPUMP_Presence

    /* Outputs for Atomic SubSystem: '<S1>/NVM_COUB_EOP_Init' */
    /* Outputs for Atomic SubSystem: '<S11>/NVM_COUB_EOP' */
    /* DataStoreWrite: '<S20>/NeCDMR_Cnt_BCIMInternal_MFOP10' incorporates:
     *  Inport: '<Root>/NeNVMB_Cnt_ElecOilPmpOC_MFOP_PM_In'
     */
    (void)Rte_Read_NeNVMB_Cnt_ElecOilPmpOC_MFOP_Rx_NeNVMB_Cnt_ElecOilPmpOC_MFOP(
        &NVMB_ac_DW.NeNVMB_Cnt_ElecOilPmpOC_MFOP);

    /* End of Outputs for SubSystem: '<S11>/NVM_COUB_EOP' */
    /* End of Outputs for SubSystem: '<S1>/NVM_COUB_EOP_Init' */
#endif

#if Rte_SysCon_Variant_NVMB_ACPWRSWRLY_Presence

    /* Outputs for Atomic SubSystem: '<S1>/NVM_COUB_PPSwtRly_Init' */
    /* Outputs for Atomic SubSystem: '<S14>/NVM_COUB_PPSwtRly' */
    /* DataStoreWrite: '<S23>/NeCDMR_Cnt_BCIMInternal_MFOP12' incorporates:
     *  Inport: '<Root>/NeNVMB_Cnt_ACSwitchRelaySTB_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeNVMB_Cnt_ACSwitchRelaySTB_MFOP_Rx_NeNVMB_Cnt_ACSwitchRelaySTB_MFOP
        (&NVMB_ac_DW.NeNVMB_Cnt_ACSwitchRelaySTB_MFOP);

    /* DataStoreWrite: '<S23>/NeCDMR_Cnt_BCIMInternal_MFOP11' incorporates:
     *  Inport: '<Root>/NeNVMB_Cnt_ACSwitchRelaySTG_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeNVMB_Cnt_ACSwitchRelaySTG_MFOP_Rx_NeNVMB_Cnt_ACSwitchRelaySTG_MFOP
        (&NVMB_ac_DW.NeNVMB_Cnt_ACSwitchRelaySTG_MFOP);

    /* End of Outputs for SubSystem: '<S14>/NVM_COUB_PPSwtRly' */
    /* End of Outputs for SubSystem: '<S1>/NVM_COUB_PPSwtRly_Init' */
#endif

    /* End of Outputs for SubSystem: '<Root>/NVMB_Init' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
