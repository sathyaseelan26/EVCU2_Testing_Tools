
#include "Std_Types.h"
#include "ComStack_Cfg.h"
#include "E2E_SM.h"
#include "E2E_P01.h"
#include "ST2B_BLUEN_E2E.h"

/* Start of Tx IPDU Callout functions */
FUNC(boolean,COM_CODE) IPDU_AXLE_TORQUE_FD_1_FD3_Callout(VAR(PduIdType, AUTOMATIC) id, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
    boolean IPDUEnableStatus;
    /*instantiate the E2E_P01ProtectStateType and set the init value*/
    static E2E_P01ProtectStateType AXLE_TORQUE_FD_1_FD3_StateType = {0};
    // if(KeST2B_b_AXLE_TORQUE_FD_1_FD3_Enbl == FALSE)
    // {
        // IPDUEnableStatus = FALSE;
    // }
    // else
    // {
        Std_ReturnType E2E_Status;
        /*Calculate MC and CRC for Tx message*/
        E2E_Status = E2E_P01Protect(&AXLE_TORQUE_FD_1_FD3_CfgType, &AXLE_TORQUE_FD_1_FD3_StateType, PduInfoPtr->SduDataPtr);
        E2E_AXLE_TORQUE_FD_1_FD3.MessageCounter = MC_MASK_HIGH_NIBBLE & PduInfoPtr->SduDataPtr[AXLE_TORQUE_FD_1_FD3_CfgType.CounterOffset / 8U];
        E2E_AXLE_TORQUE_FD_1_FD3.crcValue = PduInfoPtr->SduDataPtr[AXLE_TORQUE_FD_1_FD3_CfgType.CRCOffset / 8U];
        E2E_AXLE_TORQUE_FD_1_FD3.E2E_Tx_Status = E2E_Status;
      
        IPDUEnableStatus = TRUE;
    // }
    return IPDUEnableStatus;
}

FUNC(boolean,COM_CODE) IPDU_HYBRID_DISPLAY_FD3_Callout(VAR(PduIdType, AUTOMATIC) id, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
    boolean IPDUEnableStatus;
    /*instantiate the E2E_P01ProtectStateType and set the init value*/
    static E2E_P01ProtectStateType HYBRID_DISPLAY_FD3_StateType = {0};
    // if(KeST2B_b_HYBRID_DISPLAY_FD3_Enbl == FALSE)
    // {
        // IPDUEnableStatus = FALSE;
    // }
    // else
    // {
        Std_ReturnType E2E_Status;
        /*Calculate MC and CRC for Tx message*/
        E2E_Status = E2E_P01Protect(&HYBRID_DISPLAY_FD3_CfgType, &HYBRID_DISPLAY_FD3_StateType, PduInfoPtr->SduDataPtr);
        E2E_HYBRID_DISPLAY_FD3.MessageCounter = MC_MASK_HIGH_NIBBLE & PduInfoPtr->SduDataPtr[HYBRID_DISPLAY_FD3_CfgType.CounterOffset / 8U];
        E2E_HYBRID_DISPLAY_FD3.crcValue = PduInfoPtr->SduDataPtr[HYBRID_DISPLAY_FD3_CfgType.CRCOffset / 8U];
        E2E_HYBRID_DISPLAY_FD3.E2E_Tx_Status = E2E_Status;
      
        IPDUEnableStatus = TRUE;
    // }
    return IPDUEnableStatus;
}

FUNC(boolean,COM_CODE) IPDU_HYBRID_POWERTRAIN1_FD3_Callout(VAR(PduIdType, AUTOMATIC) id, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
    boolean IPDUEnableStatus;
    /*instantiate the E2E_P01ProtectStateType and set the init value*/
    static E2E_P01ProtectStateType HYBRID_POWERTRAIN1_FD3_StateType = {0};
    // if(KeST2B_b_HYBRID_POWERTRAIN1_FD3_Enbl == FALSE)
    // {
        // IPDUEnableStatus = FALSE;
    // }
    // else
    // {
        Std_ReturnType E2E_Status;
        /*Calculate MC and CRC for Tx message*/
        E2E_Status = E2E_P01Protect(&HYBRID_POWERTRAIN1_FD3_CfgType, &HYBRID_POWERTRAIN1_FD3_StateType, PduInfoPtr->SduDataPtr);
        E2E_HYBRID_POWERTRAIN1_FD3.MessageCounter = MC_MASK_HIGH_NIBBLE & PduInfoPtr->SduDataPtr[HYBRID_POWERTRAIN1_FD3_CfgType.CounterOffset / 8U];
        E2E_HYBRID_POWERTRAIN1_FD3.crcValue = PduInfoPtr->SduDataPtr[HYBRID_POWERTRAIN1_FD3_CfgType.CRCOffset / 8U];
        E2E_HYBRID_POWERTRAIN1_FD3.E2E_Tx_Status = E2E_Status;
      
        IPDUEnableStatus = TRUE;
    // }
    return IPDUEnableStatus;
}

FUNC(boolean,COM_CODE) IPDU_HYBRID_POWERTRAIN5_FD3_Callout(VAR(PduIdType, AUTOMATIC) id, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
    boolean IPDUEnableStatus;
    /*instantiate the E2E_P01ProtectStateType and set the init value*/
    static E2E_P01ProtectStateType HYBRID_POWERTRAIN5_FD3_StateType = {0};
    // if(KeST2B_b_HYBRID_POWERTRAIN5_FD3_Enbl == FALSE)
    // {
        // IPDUEnableStatus = FALSE;
    // }
    // else
    // {
        Std_ReturnType E2E_Status;
        /*Calculate MC and CRC for Tx message*/
        E2E_Status = E2E_P01Protect(&HYBRID_POWERTRAIN5_FD3_CfgType, &HYBRID_POWERTRAIN5_FD3_StateType, PduInfoPtr->SduDataPtr);
        E2E_HYBRID_POWERTRAIN5_FD3.MessageCounter = MC_MASK_HIGH_NIBBLE & PduInfoPtr->SduDataPtr[HYBRID_POWERTRAIN5_FD3_CfgType.CounterOffset / 8U];
        E2E_HYBRID_POWERTRAIN5_FD3.crcValue = PduInfoPtr->SduDataPtr[HYBRID_POWERTRAIN5_FD3_CfgType.CRCOffset / 8U];
        E2E_HYBRID_POWERTRAIN5_FD3.E2E_Tx_Status = E2E_Status;
      
        IPDUEnableStatus = TRUE;
    // }
    return IPDUEnableStatus;
}

FUNC(boolean,COM_CODE) IPDU_PT_SYSTEM_FD_1_FD3_Callout(VAR(PduIdType, AUTOMATIC) id, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
    boolean IPDUEnableStatus;
    /*instantiate the E2E_P01ProtectStateType and set the init value*/
    static E2E_P01ProtectStateType PT_SYSTEM_FD_1_FD3_StateType = {0};
    // if(KeST2B_b_PT_SYSTEM_FD_1_FD3_Enbl == FALSE)
    // {
        // IPDUEnableStatus = FALSE;
    // }
    // else
    // {
        Std_ReturnType E2E_Status;
        /*Calculate MC and CRC for Tx message*/
        E2E_Status = E2E_P01Protect(&PT_SYSTEM_FD_1_FD3_CfgType, &PT_SYSTEM_FD_1_FD3_StateType, PduInfoPtr->SduDataPtr);
        E2E_PT_SYSTEM_FD_1_FD3.MessageCounter = MC_MASK_HIGH_NIBBLE & PduInfoPtr->SduDataPtr[PT_SYSTEM_FD_1_FD3_CfgType.CounterOffset / 8U];
        E2E_PT_SYSTEM_FD_1_FD3.crcValue = PduInfoPtr->SduDataPtr[PT_SYSTEM_FD_1_FD3_CfgType.CRCOffset / 8U];
        E2E_PT_SYSTEM_FD_1_FD3.E2E_Tx_Status = E2E_Status;
      
        IPDUEnableStatus = TRUE;
    // }
    return IPDUEnableStatus;
}

FUNC(boolean,COM_CODE) IPDU_PT_TORQUE_FD_1_FD3_Callout(VAR(PduIdType, AUTOMATIC) id, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
    boolean IPDUEnableStatus;
    /*instantiate the E2E_P01ProtectStateType and set the init value*/
    static E2E_P01ProtectStateType PT_TORQUE_FD_1_FD3_StateType = {0};
    // if(KeST2B_b_PT_TORQUE_FD_1_FD3_Enbl == FALSE)
    // {
        // IPDUEnableStatus = FALSE;
    // }
    // else
    // {
        Std_ReturnType E2E_Status;
        /*Calculate MC and CRC for Tx message*/
        E2E_Status = E2E_P01Protect(&PT_TORQUE_FD_1_FD3_CfgType, &PT_TORQUE_FD_1_FD3_StateType, PduInfoPtr->SduDataPtr);
        E2E_PT_TORQUE_FD_1_FD3.MessageCounter = MC_MASK_HIGH_NIBBLE & PduInfoPtr->SduDataPtr[PT_TORQUE_FD_1_FD3_CfgType.CounterOffset / 8U];
        E2E_PT_TORQUE_FD_1_FD3.crcValue = PduInfoPtr->SduDataPtr[PT_TORQUE_FD_1_FD3_CfgType.CRCOffset / 8U];
        E2E_PT_TORQUE_FD_1_FD3.E2E_Tx_Status = E2E_Status;
      
        IPDUEnableStatus = TRUE;
    // }
    return IPDUEnableStatus;
}

FUNC(boolean,COM_CODE) IPDU_VDCM_HMI_FD3_Callout(VAR(PduIdType, AUTOMATIC) id, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
    boolean IPDUEnableStatus;
    /*instantiate the E2E_P01ProtectStateType and set the init value*/
    static E2E_P01ProtectStateType VDCM_HMI_FD3_StateType = {0};
    // if(KeST2B_b_VDCM_HMI_FD3_Enbl == FALSE)
    // {
        // IPDUEnableStatus = FALSE;
    // }
    // else
    // {
        Std_ReturnType E2E_Status;
        /*Calculate MC and CRC for Tx message*/
        E2E_Status = E2E_P01Protect(&VDCM_HMI_FD3_CfgType, &VDCM_HMI_FD3_StateType, PduInfoPtr->SduDataPtr);
        E2E_VDCM_HMI_FD3.MessageCounter = MC_MASK_HIGH_NIBBLE & PduInfoPtr->SduDataPtr[VDCM_HMI_FD3_CfgType.CounterOffset / 8U];
        E2E_VDCM_HMI_FD3.crcValue = PduInfoPtr->SduDataPtr[VDCM_HMI_FD3_CfgType.CRCOffset / 8U];
        E2E_VDCM_HMI_FD3.E2E_Tx_Status = E2E_Status;
      
        IPDUEnableStatus = TRUE;
    // }
    return IPDUEnableStatus;
}

FUNC(boolean,COM_CODE) IPDU_HYBRID_POWERTRAIN1_FD11_Callout(VAR(PduIdType, AUTOMATIC) id, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
    boolean IPDUEnableStatus;
    /*instantiate the E2E_P01ProtectStateType and set the init value*/
    static E2E_P01ProtectStateType HYBRID_POWERTRAIN1_FD11_StateType = {0};
    // if(KeST2B_b_HYBRID_POWERTRAIN1_FD11_Enbl == FALSE)
    // {
        // IPDUEnableStatus = FALSE;
    // }
    // else
    // {
        Std_ReturnType E2E_Status;
        /*Calculate MC and CRC for Tx message*/
        E2E_Status = E2E_P01Protect(&HYBRID_POWERTRAIN1_FD11_CfgType, &HYBRID_POWERTRAIN1_FD11_StateType, PduInfoPtr->SduDataPtr);
        E2E_HYBRID_POWERTRAIN1_FD11.MessageCounter = MC_MASK_HIGH_NIBBLE & PduInfoPtr->SduDataPtr[HYBRID_POWERTRAIN1_FD11_CfgType.CounterOffset / 8U];
        E2E_HYBRID_POWERTRAIN1_FD11.crcValue = PduInfoPtr->SduDataPtr[HYBRID_POWERTRAIN1_FD11_CfgType.CRCOffset / 8U];
        E2E_HYBRID_POWERTRAIN1_FD11.E2E_Tx_Status = E2E_Status;
      
        IPDUEnableStatus = TRUE;
    // }
    return IPDUEnableStatus;
}

FUNC(boolean,COM_CODE) IPDU_HYBRID_POWERTRAIN2_FD11_Callout(VAR(PduIdType, AUTOMATIC) id, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
    boolean IPDUEnableStatus;
    /*instantiate the E2E_P01ProtectStateType and set the init value*/
    static E2E_P01ProtectStateType HYBRID_POWERTRAIN2_FD11_StateType = {0};
    // if(KeST2B_b_HYBRID_POWERTRAIN2_FD11_Enbl == FALSE)
    // {
        // IPDUEnableStatus = FALSE;
    // }
    // else
    // {
        Std_ReturnType E2E_Status;
        /*Calculate MC and CRC for Tx message*/
        E2E_Status = E2E_P01Protect(&HYBRID_POWERTRAIN2_FD11_CfgType, &HYBRID_POWERTRAIN2_FD11_StateType, PduInfoPtr->SduDataPtr);
        E2E_HYBRID_POWERTRAIN2_FD11.MessageCounter = MC_MASK_HIGH_NIBBLE & PduInfoPtr->SduDataPtr[HYBRID_POWERTRAIN2_FD11_CfgType.CounterOffset / 8U];
        E2E_HYBRID_POWERTRAIN2_FD11.crcValue = PduInfoPtr->SduDataPtr[HYBRID_POWERTRAIN2_FD11_CfgType.CRCOffset / 8U];
        E2E_HYBRID_POWERTRAIN2_FD11.E2E_Tx_Status = E2E_Status;
      
        IPDUEnableStatus = TRUE;
    // }
    return IPDUEnableStatus;
}

FUNC(boolean,COM_CODE) IPDU_HYBRID_POWERTRAIN5_FD11_Callout(VAR(PduIdType, AUTOMATIC) id, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
    boolean IPDUEnableStatus;
    /*instantiate the E2E_P01ProtectStateType and set the init value*/
    static E2E_P01ProtectStateType HYBRID_POWERTRAIN5_FD11_StateType = {0};
    // if(KeST2B_b_HYBRID_POWERTRAIN5_FD11_Enbl == FALSE)
    // {
        // IPDUEnableStatus = FALSE;
    // }
    // else
    // {
        Std_ReturnType E2E_Status;
        /*Calculate MC and CRC for Tx message*/
        E2E_Status = E2E_P01Protect(&HYBRID_POWERTRAIN5_FD11_CfgType, &HYBRID_POWERTRAIN5_FD11_StateType, PduInfoPtr->SduDataPtr);
        E2E_HYBRID_POWERTRAIN5_FD11.MessageCounter = MC_MASK_HIGH_NIBBLE & PduInfoPtr->SduDataPtr[HYBRID_POWERTRAIN5_FD11_CfgType.CounterOffset / 8U];
        E2E_HYBRID_POWERTRAIN5_FD11.crcValue = PduInfoPtr->SduDataPtr[HYBRID_POWERTRAIN5_FD11_CfgType.CRCOffset / 8U];
        E2E_HYBRID_POWERTRAIN5_FD11.E2E_Tx_Status = E2E_Status;
      
        IPDUEnableStatus = TRUE;
    // }
    return IPDUEnableStatus;
}

FUNC(boolean,COM_CODE) IPDU_IMPACT_INFO_FD11_Callout(VAR(PduIdType, AUTOMATIC) id, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
    boolean IPDUEnableStatus;
    /*instantiate the E2E_P01ProtectStateType and set the init value*/
    static E2E_P01ProtectStateType IMPACT_INFO_FD11_StateType = {0};
    // if(KeST2B_b_IMPACT_INFO_FD11_Enbl == FALSE)
    // {
        // IPDUEnableStatus = FALSE;
    // }
    // else
    // {
        Std_ReturnType E2E_Status;
        /*Calculate MC and CRC for Tx message*/
        E2E_Status = E2E_P01Protect(&IMPACT_INFO_FD11_CfgType, &IMPACT_INFO_FD11_StateType, PduInfoPtr->SduDataPtr);
        E2E_IMPACT_INFO_FD11.MessageCounter = MC_MASK_HIGH_NIBBLE & PduInfoPtr->SduDataPtr[IMPACT_INFO_FD11_CfgType.CounterOffset / 8U];
        E2E_IMPACT_INFO_FD11.crcValue = PduInfoPtr->SduDataPtr[IMPACT_INFO_FD11_CfgType.CRCOffset / 8U];
        E2E_IMPACT_INFO_FD11.E2E_Tx_Status = E2E_Status;
      
        IPDUEnableStatus = TRUE;
    // }
    return IPDUEnableStatus;
}

FUNC(boolean,COM_CODE) IPDU_INVTARGET1_2_FD11_Callout(VAR(PduIdType, AUTOMATIC) id, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
    boolean IPDUEnableStatus;
    /*instantiate the E2E_P01ProtectStateType and set the init value*/
    static E2E_P01ProtectStateType INVTARGET1_2_FD11_StateType = {0};
    // if(KeST2B_b_INVTARGET1_2_FD11_Enbl == FALSE)
    // {
        // IPDUEnableStatus = FALSE;
    // }
    // else
    // {
        Std_ReturnType E2E_Status;
        /*Calculate MC and CRC for Tx message*/
        E2E_Status = E2E_P01Protect(&INVTARGET1_2_FD11_CfgType, &INVTARGET1_2_FD11_StateType, PduInfoPtr->SduDataPtr);
        E2E_INVTARGET1_2_FD11.MessageCounter = MC_MASK_HIGH_NIBBLE & PduInfoPtr->SduDataPtr[INVTARGET1_2_FD11_CfgType.CounterOffset / 8U];
        E2E_INVTARGET1_2_FD11.crcValue = PduInfoPtr->SduDataPtr[INVTARGET1_2_FD11_CfgType.CRCOffset / 8U];
        E2E_INVTARGET1_2_FD11.E2E_Tx_Status = E2E_Status;
      
        IPDUEnableStatus = TRUE;
    // }
    return IPDUEnableStatus;
}

FUNC(boolean,COM_CODE) IPDU_PT_ENERGY_FD_1_FD11_Callout(VAR(PduIdType, AUTOMATIC) id, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
    boolean IPDUEnableStatus;
    /*instantiate the E2E_P01ProtectStateType and set the init value*/
    static E2E_P01ProtectStateType PT_ENERGY_FD_1_FD11_StateType = {0};
    // if(KeST2B_b_PT_ENERGY_FD_1_FD11_Enbl == FALSE)
    // {
        // IPDUEnableStatus = FALSE;
    // }
    // else
    // {
        Std_ReturnType E2E_Status;
        /*Calculate MC and CRC for Tx message*/
        E2E_Status = E2E_P01Protect(&PT_ENERGY_FD_1_FD11_CfgType, &PT_ENERGY_FD_1_FD11_StateType, PduInfoPtr->SduDataPtr);
        E2E_PT_ENERGY_FD_1_FD11.MessageCounter = MC_MASK_HIGH_NIBBLE & PduInfoPtr->SduDataPtr[PT_ENERGY_FD_1_FD11_CfgType.CounterOffset / 8U];
        E2E_PT_ENERGY_FD_1_FD11.crcValue = PduInfoPtr->SduDataPtr[PT_ENERGY_FD_1_FD11_CfgType.CRCOffset / 8U];
        E2E_PT_ENERGY_FD_1_FD11.E2E_Tx_Status = E2E_Status;
      
        IPDUEnableStatus = TRUE;
    // }
    return IPDUEnableStatus;
}

FUNC(boolean,COM_CODE) IPDU_PT_SYSTEM_FD_1_FD11_Callout(VAR(PduIdType, AUTOMATIC) id, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
    boolean IPDUEnableStatus;
    /*instantiate the E2E_P01ProtectStateType and set the init value*/
    static E2E_P01ProtectStateType PT_SYSTEM_FD_1_FD11_StateType = {0};
    // if(KeST2B_b_PT_SYSTEM_FD_1_FD11_Enbl == FALSE)
    // {
        // IPDUEnableStatus = FALSE;
    // }
    // else
    // {
        Std_ReturnType E2E_Status;
        /*Calculate MC and CRC for Tx message*/
        E2E_Status = E2E_P01Protect(&PT_SYSTEM_FD_1_FD11_CfgType, &PT_SYSTEM_FD_1_FD11_StateType, PduInfoPtr->SduDataPtr);
        E2E_PT_SYSTEM_FD_1_FD11.MessageCounter = MC_MASK_HIGH_NIBBLE & PduInfoPtr->SduDataPtr[PT_SYSTEM_FD_1_FD11_CfgType.CounterOffset / 8U];
        E2E_PT_SYSTEM_FD_1_FD11.crcValue = PduInfoPtr->SduDataPtr[PT_SYSTEM_FD_1_FD11_CfgType.CRCOffset / 8U];
        E2E_PT_SYSTEM_FD_1_FD11.E2E_Tx_Status = E2E_Status;
      
        IPDUEnableStatus = TRUE;
    // }
    return IPDUEnableStatus;
}

FUNC(boolean,COM_CODE) IPDU_PT_SYSTEM_FD_4_FD11_Callout(VAR(PduIdType, AUTOMATIC) id, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
    boolean IPDUEnableStatus;
    /*instantiate the E2E_P01ProtectStateType and set the init value*/
    static E2E_P01ProtectStateType PT_SYSTEM_FD_4_FD11_StateType = {0};
    // if(KeST2B_b_PT_SYSTEM_FD_4_FD11_Enbl == FALSE)
    // {
        // IPDUEnableStatus = FALSE;
    // }
    // else
    // {
        Std_ReturnType E2E_Status;
        /*Calculate MC and CRC for Tx message*/
        E2E_Status = E2E_P01Protect(&PT_SYSTEM_FD_4_FD11_CfgType, &PT_SYSTEM_FD_4_FD11_StateType, PduInfoPtr->SduDataPtr);
        E2E_PT_SYSTEM_FD_4_FD11.MessageCounter = MC_MASK_HIGH_NIBBLE & PduInfoPtr->SduDataPtr[PT_SYSTEM_FD_4_FD11_CfgType.CounterOffset / 8U];
        E2E_PT_SYSTEM_FD_4_FD11.crcValue = PduInfoPtr->SduDataPtr[PT_SYSTEM_FD_4_FD11_CfgType.CRCOffset / 8U];
        E2E_PT_SYSTEM_FD_4_FD11.E2E_Tx_Status = E2E_Status;
      
        IPDUEnableStatus = TRUE;
    // }
    return IPDUEnableStatus;
}

FUNC(boolean,COM_CODE) IPDU_AXLE_TORQUE_FD_1_FD14_Callout(VAR(PduIdType, AUTOMATIC) id, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
    boolean IPDUEnableStatus;
    /*instantiate the E2E_P01ProtectStateType and set the init value*/
    static E2E_P01ProtectStateType AXLE_TORQUE_FD_1_FD14_StateType = {0};
    // if(KeST2B_b_AXLE_TORQUE_FD_1_FD14_Enbl == FALSE)
    // {
        // IPDUEnableStatus = FALSE;
    // }
    // else
    // {
        Std_ReturnType E2E_Status;
        /*Calculate MC and CRC for Tx message*/
        E2E_Status = E2E_P01Protect(&AXLE_TORQUE_FD_1_FD14_CfgType, &AXLE_TORQUE_FD_1_FD14_StateType, PduInfoPtr->SduDataPtr);
        E2E_AXLE_TORQUE_FD_1_FD14.MessageCounter = MC_MASK_HIGH_NIBBLE & PduInfoPtr->SduDataPtr[AXLE_TORQUE_FD_1_FD14_CfgType.CounterOffset / 8U];
        E2E_AXLE_TORQUE_FD_1_FD14.crcValue = PduInfoPtr->SduDataPtr[AXLE_TORQUE_FD_1_FD14_CfgType.CRCOffset / 8U];
        E2E_AXLE_TORQUE_FD_1_FD14.E2E_Tx_Status = E2E_Status;
      
        IPDUEnableStatus = TRUE;
    // }
    return IPDUEnableStatus;
}

FUNC(boolean,COM_CODE) IPDU_PT_SYSTEM_FD_1_FD14_Callout(VAR(PduIdType, AUTOMATIC) id, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
    boolean IPDUEnableStatus;
    /*instantiate the E2E_P01ProtectStateType and set the init value*/
    static E2E_P01ProtectStateType PT_SYSTEM_FD_1_FD14_StateType = {0};
    // if(KeST2B_b_PT_SYSTEM_FD_1_FD14_Enbl == FALSE)
    // {
        // IPDUEnableStatus = FALSE;
    // }
    // else
    // {
        Std_ReturnType E2E_Status;
        /*Calculate MC and CRC for Tx message*/
        E2E_Status = E2E_P01Protect(&PT_SYSTEM_FD_1_FD14_CfgType, &PT_SYSTEM_FD_1_FD14_StateType, PduInfoPtr->SduDataPtr);
        E2E_PT_SYSTEM_FD_1_FD14.MessageCounter = MC_MASK_HIGH_NIBBLE & PduInfoPtr->SduDataPtr[PT_SYSTEM_FD_1_FD14_CfgType.CounterOffset / 8U];
        E2E_PT_SYSTEM_FD_1_FD14.crcValue = PduInfoPtr->SduDataPtr[PT_SYSTEM_FD_1_FD14_CfgType.CRCOffset / 8U];
        E2E_PT_SYSTEM_FD_1_FD14.E2E_Tx_Status = E2E_Status;
      
        IPDUEnableStatus = TRUE;
    // }
    return IPDUEnableStatus;
}

FUNC(boolean,COM_CODE) IPDU_PT_TORQUE_FD_1_FD14_Callout(VAR(PduIdType, AUTOMATIC) id, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
    boolean IPDUEnableStatus;
    /*instantiate the E2E_P01ProtectStateType and set the init value*/
    static E2E_P01ProtectStateType PT_TORQUE_FD_1_FD14_StateType = {0};
    // if(KeST2B_b_PT_TORQUE_FD_1_FD14_Enbl == FALSE)
    // {
        // IPDUEnableStatus = FALSE;
    // }
    // else
    // {
        Std_ReturnType E2E_Status;
        /*Calculate MC and CRC for Tx message*/
        E2E_Status = E2E_P01Protect(&PT_TORQUE_FD_1_FD14_CfgType, &PT_TORQUE_FD_1_FD14_StateType, PduInfoPtr->SduDataPtr);
        E2E_PT_TORQUE_FD_1_FD14.MessageCounter = MC_MASK_HIGH_NIBBLE & PduInfoPtr->SduDataPtr[PT_TORQUE_FD_1_FD14_CfgType.CounterOffset / 8U];
        E2E_PT_TORQUE_FD_1_FD14.crcValue = PduInfoPtr->SduDataPtr[PT_TORQUE_FD_1_FD14_CfgType.CRCOffset / 8U];
        E2E_PT_TORQUE_FD_1_FD14.E2E_Tx_Status = E2E_Status;
      
        IPDUEnableStatus = TRUE;
    // }
    return IPDUEnableStatus;
}

FUNC(boolean,COM_CODE) IPDU_HYBRID_POWERTRAIN1_FD5_Callout(VAR(PduIdType, AUTOMATIC) id, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
    boolean IPDUEnableStatus;
    /*instantiate the E2E_P01ProtectStateType and set the init value*/
    static E2E_P01ProtectStateType HYBRID_POWERTRAIN1_FD5_StateType = {0};
    // if(KeST2B_b_HYBRID_POWERTRAIN1_FD5_Enbl == FALSE)
    // {
        // IPDUEnableStatus = FALSE;
    // }
    // else
    // {
        Std_ReturnType E2E_Status;
        /*Calculate MC and CRC for Tx message*/
        E2E_Status = E2E_P01Protect(&HYBRID_POWERTRAIN1_FD5_CfgType, &HYBRID_POWERTRAIN1_FD5_StateType, PduInfoPtr->SduDataPtr);
        E2E_HYBRID_POWERTRAIN1_FD5.MessageCounter = MC_MASK_HIGH_NIBBLE & PduInfoPtr->SduDataPtr[HYBRID_POWERTRAIN1_FD5_CfgType.CounterOffset / 8U];
        E2E_HYBRID_POWERTRAIN1_FD5.crcValue = PduInfoPtr->SduDataPtr[HYBRID_POWERTRAIN1_FD5_CfgType.CRCOffset / 8U];
        E2E_HYBRID_POWERTRAIN1_FD5.E2E_Tx_Status = E2E_Status;
      
        IPDUEnableStatus = TRUE;
    // }
    return IPDUEnableStatus;
}

FUNC(boolean,COM_CODE) IPDU_INVTARGET1_2_FD5_Callout(VAR(PduIdType, AUTOMATIC) id, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
    boolean IPDUEnableStatus;
    /*instantiate the E2E_P01ProtectStateType and set the init value*/
    static E2E_P01ProtectStateType INVTARGET1_2_FD5_StateType = {0};
    // if(KeST2B_b_INVTARGET1_2_FD5_Enbl == FALSE)
    // {
        // IPDUEnableStatus = FALSE;
    // }
    // else
    // {
        Std_ReturnType E2E_Status;
        /*Calculate MC and CRC for Tx message*/
        E2E_Status = E2E_P01Protect(&INVTARGET1_2_FD5_CfgType, &INVTARGET1_2_FD5_StateType, PduInfoPtr->SduDataPtr);
        E2E_INVTARGET1_2_FD5.MessageCounter = MC_MASK_HIGH_NIBBLE & PduInfoPtr->SduDataPtr[INVTARGET1_2_FD5_CfgType.CounterOffset / 8U];
        E2E_INVTARGET1_2_FD5.crcValue = PduInfoPtr->SduDataPtr[INVTARGET1_2_FD5_CfgType.CRCOffset / 8U];
        E2E_INVTARGET1_2_FD5.E2E_Tx_Status = E2E_Status;
      
        IPDUEnableStatus = TRUE;
    // }
    return IPDUEnableStatus;
}

FUNC(boolean,COM_CODE) IPDU_INVTARGET_PROPULSION1_FD5_Callout(VAR(PduIdType, AUTOMATIC) id, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
    boolean IPDUEnableStatus;
    /*instantiate the E2E_P01ProtectStateType and set the init value*/
    static E2E_P01ProtectStateType INVTARGET_PROPULSION1_FD5_StateType = {0};
    // if(KeST2B_b_INVTARGET_PROPULSION1_FD5_Enbl == FALSE)
    // {
        // IPDUEnableStatus = FALSE;
    // }
    // else
    // {
        Std_ReturnType E2E_Status;
        /*Calculate MC and CRC for Tx message*/
        E2E_Status = E2E_P01Protect(&INVTARGET_PROPULSION1_FD5_CfgType, &INVTARGET_PROPULSION1_FD5_StateType, PduInfoPtr->SduDataPtr);
        E2E_INVTARGET_PROPULSION1_FD5.MessageCounter = MC_MASK_HIGH_NIBBLE & PduInfoPtr->SduDataPtr[INVTARGET_PROPULSION1_FD5_CfgType.CounterOffset / 8U];
        E2E_INVTARGET_PROPULSION1_FD5.crcValue = PduInfoPtr->SduDataPtr[INVTARGET_PROPULSION1_FD5_CfgType.CRCOffset / 8U];
        E2E_INVTARGET_PROPULSION1_FD5.E2E_Tx_Status = E2E_Status;
      
        IPDUEnableStatus = TRUE;
    // }
    return IPDUEnableStatus;
}

FUNC(boolean,COM_CODE) IPDU_PT_ENERGY_FD_1_FD5_Callout(VAR(PduIdType, AUTOMATIC) id, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
    boolean IPDUEnableStatus;
    /*instantiate the E2E_P01ProtectStateType and set the init value*/
    static E2E_P01ProtectStateType PT_ENERGY_FD_1_FD5_StateType = {0};
    // if(KeST2B_b_PT_ENERGY_FD_1_FD5_Enbl == FALSE)
    // {
        // IPDUEnableStatus = FALSE;
    // }
    // else
    // {
        Std_ReturnType E2E_Status;
        /*Calculate MC and CRC for Tx message*/
        E2E_Status = E2E_P01Protect(&PT_ENERGY_FD_1_FD5_CfgType, &PT_ENERGY_FD_1_FD5_StateType, PduInfoPtr->SduDataPtr);
        E2E_PT_ENERGY_FD_1_FD5.MessageCounter = MC_MASK_HIGH_NIBBLE & PduInfoPtr->SduDataPtr[PT_ENERGY_FD_1_FD5_CfgType.CounterOffset / 8U];
        E2E_PT_ENERGY_FD_1_FD5.crcValue = PduInfoPtr->SduDataPtr[PT_ENERGY_FD_1_FD5_CfgType.CRCOffset / 8U];
        E2E_PT_ENERGY_FD_1_FD5.E2E_Tx_Status = E2E_Status;
      
        IPDUEnableStatus = TRUE;
    // }
    return IPDUEnableStatus;
}

FUNC(boolean,COM_CODE) IPDU_PT_SYSTEM_FD_1_FD5_Callout(VAR(PduIdType, AUTOMATIC) id, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
    boolean IPDUEnableStatus;
    /*instantiate the E2E_P01ProtectStateType and set the init value*/
    static E2E_P01ProtectStateType PT_SYSTEM_FD_1_FD5_StateType = {0};
    // if(KeST2B_b_PT_SYSTEM_FD_1_FD5_Enbl == FALSE)
    // {
        // IPDUEnableStatus = FALSE;
    // }
    // else
    // {
        Std_ReturnType E2E_Status;
        /*Calculate MC and CRC for Tx message*/
        E2E_Status = E2E_P01Protect(&PT_SYSTEM_FD_1_FD5_CfgType, &PT_SYSTEM_FD_1_FD5_StateType, PduInfoPtr->SduDataPtr);
        E2E_PT_SYSTEM_FD_1_FD5.MessageCounter = MC_MASK_HIGH_NIBBLE & PduInfoPtr->SduDataPtr[PT_SYSTEM_FD_1_FD5_CfgType.CounterOffset / 8U];
        E2E_PT_SYSTEM_FD_1_FD5.crcValue = PduInfoPtr->SduDataPtr[PT_SYSTEM_FD_1_FD5_CfgType.CRCOffset / 8U];
        E2E_PT_SYSTEM_FD_1_FD5.E2E_Tx_Status = E2E_Status;
      
        IPDUEnableStatus = TRUE;
    // }
    return IPDUEnableStatus;
}

FUNC(boolean,COM_CODE) IPDU_PT_SYSTEM_FD_4_FD5_Callout(VAR(PduIdType, AUTOMATIC) id, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
    boolean IPDUEnableStatus;
    /*instantiate the E2E_P01ProtectStateType and set the init value*/
    static E2E_P01ProtectStateType PT_SYSTEM_FD_4_FD5_StateType = {0};
    // if(KeST2B_b_PT_SYSTEM_FD_4_FD5_Enbl == FALSE)
    // {
        // IPDUEnableStatus = FALSE;
    // }
    // else
    // {
        Std_ReturnType E2E_Status;
        /*Calculate MC and CRC for Tx message*/
        E2E_Status = E2E_P01Protect(&PT_SYSTEM_FD_4_FD5_CfgType, &PT_SYSTEM_FD_4_FD5_StateType, PduInfoPtr->SduDataPtr);
        E2E_PT_SYSTEM_FD_4_FD5.MessageCounter = MC_MASK_HIGH_NIBBLE & PduInfoPtr->SduDataPtr[PT_SYSTEM_FD_4_FD5_CfgType.CounterOffset / 8U];
        E2E_PT_SYSTEM_FD_4_FD5.crcValue = PduInfoPtr->SduDataPtr[PT_SYSTEM_FD_4_FD5_CfgType.CRCOffset / 8U];
        E2E_PT_SYSTEM_FD_4_FD5.E2E_Tx_Status = E2E_Status;
      
        IPDUEnableStatus = TRUE;
    // }
    return IPDUEnableStatus;
}

