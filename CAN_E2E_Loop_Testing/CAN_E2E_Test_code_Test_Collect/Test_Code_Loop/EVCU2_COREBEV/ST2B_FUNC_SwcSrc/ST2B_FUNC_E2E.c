
#include "Std_Types.h"
#include "ComStack_Cfg.h"
#include "E2E_SM.h"
#include "E2E_P01.h"
#include "ST2B_FUNC_E2E.h"

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

FUNC(boolean,COM_CODE) IPDU_DRIVETRAIN_FD_3_FD3_Callout(VAR(PduIdType, AUTOMATIC) id, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
    boolean IPDUEnableStatus;
    /*instantiate the E2E_P01ProtectStateType and set the init value*/
    static E2E_P01ProtectStateType DRIVETRAIN_FD_3_FD3_StateType = {0};
    // if(KeST2B_b_DRIVETRAIN_FD_3_FD3_Enbl == FALSE)
    // {
        // IPDUEnableStatus = FALSE;
    // }
    // else
    // {
        Std_ReturnType E2E_Status;
        /*Calculate MC and CRC for Tx message*/
        E2E_Status = E2E_P01Protect(&DRIVETRAIN_FD_3_FD3_CfgType, &DRIVETRAIN_FD_3_FD3_StateType, PduInfoPtr->SduDataPtr);
        E2E_DRIVETRAIN_FD_3_FD3.MessageCounter = MC_MASK_HIGH_NIBBLE & PduInfoPtr->SduDataPtr[DRIVETRAIN_FD_3_FD3_CfgType.CounterOffset / 8U];
        E2E_DRIVETRAIN_FD_3_FD3.crcValue = PduInfoPtr->SduDataPtr[DRIVETRAIN_FD_3_FD3_CfgType.CRCOffset / 8U];
        E2E_DRIVETRAIN_FD_3_FD3.E2E_Tx_Status = E2E_Status;
      
        IPDUEnableStatus = TRUE;
    // }
    return IPDUEnableStatus;
}

FUNC(boolean,COM_CODE) IPDU_ENGINE_SIMULATOR1_FD3_Callout(VAR(PduIdType, AUTOMATIC) id, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
    boolean IPDUEnableStatus;
    /*instantiate the E2E_P01ProtectStateType and set the init value*/
    static E2E_P01ProtectStateType ENGINE_SIMULATOR1_FD3_StateType = {0};
    // if(KeST2B_b_ENGINE_SIMULATOR1_FD3_Enbl == FALSE)
    // {
        // IPDUEnableStatus = FALSE;
    // }
    // else
    // {
        Std_ReturnType E2E_Status;
        /*Calculate MC and CRC for Tx message*/
        E2E_Status = E2E_P01Protect(&ENGINE_SIMULATOR1_FD3_CfgType, &ENGINE_SIMULATOR1_FD3_StateType, PduInfoPtr->SduDataPtr);
        E2E_ENGINE_SIMULATOR1_FD3.MessageCounter = MC_MASK_HIGH_NIBBLE & PduInfoPtr->SduDataPtr[ENGINE_SIMULATOR1_FD3_CfgType.CounterOffset / 8U];
        E2E_ENGINE_SIMULATOR1_FD3.crcValue = PduInfoPtr->SduDataPtr[ENGINE_SIMULATOR1_FD3_CfgType.CRCOffset / 8U];
        E2E_ENGINE_SIMULATOR1_FD3.E2E_Tx_Status = E2E_Status;
      
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

FUNC(boolean,COM_CODE) IPDU_HYBRID_POWERTRAIN2_FD3_Callout(VAR(PduIdType, AUTOMATIC) id, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
    boolean IPDUEnableStatus;
    /*instantiate the E2E_P01ProtectStateType and set the init value*/
    static E2E_P01ProtectStateType HYBRID_POWERTRAIN2_FD3_StateType = {0};
    // if(KeST2B_b_HYBRID_POWERTRAIN2_FD3_Enbl == FALSE)
    // {
        // IPDUEnableStatus = FALSE;
    // }
    // else
    // {
        Std_ReturnType E2E_Status;
        /*Calculate MC and CRC for Tx message*/
        E2E_Status = E2E_P01Protect(&HYBRID_POWERTRAIN2_FD3_CfgType, &HYBRID_POWERTRAIN2_FD3_StateType, PduInfoPtr->SduDataPtr);
        E2E_HYBRID_POWERTRAIN2_FD3.MessageCounter = MC_MASK_HIGH_NIBBLE & PduInfoPtr->SduDataPtr[HYBRID_POWERTRAIN2_FD3_CfgType.CounterOffset / 8U];
        E2E_HYBRID_POWERTRAIN2_FD3.crcValue = PduInfoPtr->SduDataPtr[HYBRID_POWERTRAIN2_FD3_CfgType.CRCOffset / 8U];
        E2E_HYBRID_POWERTRAIN2_FD3.E2E_Tx_Status = E2E_Status;
      
        IPDUEnableStatus = TRUE;
    // }
    return IPDUEnableStatus;
}

FUNC(boolean,COM_CODE) IPDU_HYBRID_POWERTRAIN4_FD3_Callout(VAR(PduIdType, AUTOMATIC) id, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
    boolean IPDUEnableStatus;
    /*instantiate the E2E_P01ProtectStateType and set the init value*/
    static E2E_P01ProtectStateType HYBRID_POWERTRAIN4_FD3_StateType = {0};
    // if(KeST2B_b_HYBRID_POWERTRAIN4_FD3_Enbl == FALSE)
    // {
        // IPDUEnableStatus = FALSE;
    // }
    // else
    // {
        Std_ReturnType E2E_Status;
        /*Calculate MC and CRC for Tx message*/
        E2E_Status = E2E_P01Protect(&HYBRID_POWERTRAIN4_FD3_CfgType, &HYBRID_POWERTRAIN4_FD3_StateType, PduInfoPtr->SduDataPtr);
        E2E_HYBRID_POWERTRAIN4_FD3.MessageCounter = MC_MASK_HIGH_NIBBLE & PduInfoPtr->SduDataPtr[HYBRID_POWERTRAIN4_FD3_CfgType.CounterOffset / 8U];
        E2E_HYBRID_POWERTRAIN4_FD3.crcValue = PduInfoPtr->SduDataPtr[HYBRID_POWERTRAIN4_FD3_CfgType.CRCOffset / 8U];
        E2E_HYBRID_POWERTRAIN4_FD3.E2E_Tx_Status = E2E_Status;
      
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

FUNC(boolean,COM_CODE) IPDU_TRANSM_FD_1_FD3_Callout(VAR(PduIdType, AUTOMATIC) id, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
    boolean IPDUEnableStatus;
    /*instantiate the E2E_P01ProtectStateType and set the init value*/
    static E2E_P01ProtectStateType TRANSM_FD_1_FD3_StateType = {0};
    // if(KeST2B_b_TRANSM_FD_1_FD3_Enbl == FALSE)
    // {
        // IPDUEnableStatus = FALSE;
    // }
    // else
    // {
        Std_ReturnType E2E_Status;
        /*Calculate MC and CRC for Tx message*/
        E2E_Status = E2E_P01Protect(&TRANSM_FD_1_FD3_CfgType, &TRANSM_FD_1_FD3_StateType, PduInfoPtr->SduDataPtr);
        E2E_TRANSM_FD_1_FD3.MessageCounter = MC_MASK_HIGH_NIBBLE & PduInfoPtr->SduDataPtr[TRANSM_FD_1_FD3_CfgType.CounterOffset / 8U];
        E2E_TRANSM_FD_1_FD3.crcValue = PduInfoPtr->SduDataPtr[TRANSM_FD_1_FD3_CfgType.CRCOffset / 8U];
        E2E_TRANSM_FD_1_FD3.E2E_Tx_Status = E2E_Status;
      
        IPDUEnableStatus = TRUE;
    // }
    return IPDUEnableStatus;
}

FUNC(boolean,COM_CODE) IPDU_TRANSM_FD_2_FD3_Callout(VAR(PduIdType, AUTOMATIC) id, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
    boolean IPDUEnableStatus;
    /*instantiate the E2E_P01ProtectStateType and set the init value*/
    static E2E_P01ProtectStateType TRANSM_FD_2_FD3_StateType = {0};
    // if(KeST2B_b_TRANSM_FD_2_FD3_Enbl == FALSE)
    // {
        // IPDUEnableStatus = FALSE;
    // }
    // else
    // {
        Std_ReturnType E2E_Status;
        /*Calculate MC and CRC for Tx message*/
        E2E_Status = E2E_P01Protect(&TRANSM_FD_2_FD3_CfgType, &TRANSM_FD_2_FD3_StateType, PduInfoPtr->SduDataPtr);
        E2E_TRANSM_FD_2_FD3.MessageCounter = MC_MASK_HIGH_NIBBLE & PduInfoPtr->SduDataPtr[TRANSM_FD_2_FD3_CfgType.CounterOffset / 8U];
        E2E_TRANSM_FD_2_FD3.crcValue = PduInfoPtr->SduDataPtr[TRANSM_FD_2_FD3_CfgType.CRCOffset / 8U];
        E2E_TRANSM_FD_2_FD3.E2E_Tx_Status = E2E_Status;
      
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

FUNC(boolean,COM_CODE) IPDU_EVCU_ISO15118_STATUS1_FD11_Callout(VAR(PduIdType, AUTOMATIC) id, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
    boolean IPDUEnableStatus;
    /*instantiate the E2E_P01ProtectStateType and set the init value*/
    static E2E_P01ProtectStateType EVCU_ISO15118_STATUS1_FD11_StateType = {0};
    // if(KeST2B_b_EVCU_ISO15118_STATUS1_FD11_Enbl == FALSE)
    // {
        // IPDUEnableStatus = FALSE;
    // }
    // else
    // {
        Std_ReturnType E2E_Status;
        /*Calculate MC and CRC for Tx message*/
        E2E_Status = E2E_P01Protect(&EVCU_ISO15118_STATUS1_FD11_CfgType, &EVCU_ISO15118_STATUS1_FD11_StateType, PduInfoPtr->SduDataPtr);
        E2E_EVCU_ISO15118_STATUS1_FD11.MessageCounter = MC_MASK_HIGH_NIBBLE & PduInfoPtr->SduDataPtr[EVCU_ISO15118_STATUS1_FD11_CfgType.CounterOffset / 8U];
        E2E_EVCU_ISO15118_STATUS1_FD11.crcValue = PduInfoPtr->SduDataPtr[EVCU_ISO15118_STATUS1_FD11_CfgType.CRCOffset / 8U];
        E2E_EVCU_ISO15118_STATUS1_FD11.E2E_Tx_Status = E2E_Status;
      
        IPDUEnableStatus = TRUE;
    // }
    return IPDUEnableStatus;
}

FUNC(boolean,COM_CODE) IPDU_HYBRID_CHARGING_COMMAND_FD11_Callout(VAR(PduIdType, AUTOMATIC) id, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
    boolean IPDUEnableStatus;
    /*instantiate the E2E_P01ProtectStateType and set the init value*/
    static E2E_P01ProtectStateType HYBRID_CHARGING_COMMAND_FD11_StateType = {0};
    // if(KeST2B_b_HYBRID_CHARGING_COMMAND_FD11_Enbl == FALSE)
    // {
        // IPDUEnableStatus = FALSE;
    // }
    // else
    // {
        Std_ReturnType E2E_Status;
        /*Calculate MC and CRC for Tx message*/
        E2E_Status = E2E_P01Protect(&HYBRID_CHARGING_COMMAND_FD11_CfgType, &HYBRID_CHARGING_COMMAND_FD11_StateType, PduInfoPtr->SduDataPtr);
        E2E_HYBRID_CHARGING_COMMAND_FD11.MessageCounter = MC_MASK_HIGH_NIBBLE & PduInfoPtr->SduDataPtr[HYBRID_CHARGING_COMMAND_FD11_CfgType.CounterOffset / 8U];
        E2E_HYBRID_CHARGING_COMMAND_FD11.crcValue = PduInfoPtr->SduDataPtr[HYBRID_CHARGING_COMMAND_FD11_CfgType.CRCOffset / 8U];
        E2E_HYBRID_CHARGING_COMMAND_FD11.E2E_Tx_Status = E2E_Status;
      
        IPDUEnableStatus = TRUE;
    // }
    return IPDUEnableStatus;
}

FUNC(boolean,COM_CODE) IPDU_HYBRID_CHARGING_STATUS_FD11_Callout(VAR(PduIdType, AUTOMATIC) id, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
    boolean IPDUEnableStatus;
    /*instantiate the E2E_P01ProtectStateType and set the init value*/
    static E2E_P01ProtectStateType HYBRID_CHARGING_STATUS_FD11_StateType = {0};
    // if(KeST2B_b_HYBRID_CHARGING_STATUS_FD11_Enbl == FALSE)
    // {
        // IPDUEnableStatus = FALSE;
    // }
    // else
    // {
        Std_ReturnType E2E_Status;
        /*Calculate MC and CRC for Tx message*/
        E2E_Status = E2E_P01Protect(&HYBRID_CHARGING_STATUS_FD11_CfgType, &HYBRID_CHARGING_STATUS_FD11_StateType, PduInfoPtr->SduDataPtr);
        E2E_HYBRID_CHARGING_STATUS_FD11.MessageCounter = MC_MASK_HIGH_NIBBLE & PduInfoPtr->SduDataPtr[HYBRID_CHARGING_STATUS_FD11_CfgType.CounterOffset / 8U];
        E2E_HYBRID_CHARGING_STATUS_FD11.crcValue = PduInfoPtr->SduDataPtr[HYBRID_CHARGING_STATUS_FD11_CfgType.CRCOffset / 8U];
        E2E_HYBRID_CHARGING_STATUS_FD11.E2E_Tx_Status = E2E_Status;
      
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

FUNC(boolean,COM_CODE) IPDU_RPF_FD_3_FD11_Callout(VAR(PduIdType, AUTOMATIC) id, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
    boolean IPDUEnableStatus;
    /*instantiate the E2E_P01ProtectStateType and set the init value*/
    static E2E_P01ProtectStateType RPF_FD_3_FD11_StateType = {0};
    // if(KeST2B_b_RPF_FD_3_FD11_Enbl == FALSE)
    // {
        // IPDUEnableStatus = FALSE;
    // }
    // else
    // {
        Std_ReturnType E2E_Status;
        /*Calculate MC and CRC for Tx message*/
        E2E_Status = E2E_P01Protect(&RPF_FD_3_FD11_CfgType, &RPF_FD_3_FD11_StateType, PduInfoPtr->SduDataPtr);
        E2E_RPF_FD_3_FD11.MessageCounter = MC_MASK_HIGH_NIBBLE & PduInfoPtr->SduDataPtr[RPF_FD_3_FD11_CfgType.CounterOffset / 8U];
        E2E_RPF_FD_3_FD11.crcValue = PduInfoPtr->SduDataPtr[RPF_FD_3_FD11_CfgType.CRCOffset / 8U];
        E2E_RPF_FD_3_FD11.E2E_Tx_Status = E2E_Status;
      
        IPDUEnableStatus = TRUE;
    // }
    return IPDUEnableStatus;
}

FUNC(boolean,COM_CODE) IPDU_VDCM_OBCM2_FD11_Callout(VAR(PduIdType, AUTOMATIC) id, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
    boolean IPDUEnableStatus;
    /*instantiate the E2E_P01ProtectStateType and set the init value*/
    static E2E_P01ProtectStateType VDCM_OBCM2_FD11_StateType = {0};
    // if(KeST2B_b_VDCM_OBCM2_FD11_Enbl == FALSE)
    // {
        // IPDUEnableStatus = FALSE;
    // }
    // else
    // {
        Std_ReturnType E2E_Status;
        /*Calculate MC and CRC for Tx message*/
        E2E_Status = E2E_P01Protect(&VDCM_OBCM2_FD11_CfgType, &VDCM_OBCM2_FD11_StateType, PduInfoPtr->SduDataPtr);
        E2E_VDCM_OBCM2_FD11.MessageCounter = MC_MASK_HIGH_NIBBLE & PduInfoPtr->SduDataPtr[VDCM_OBCM2_FD11_CfgType.CounterOffset / 8U];
        E2E_VDCM_OBCM2_FD11.crcValue = PduInfoPtr->SduDataPtr[VDCM_OBCM2_FD11_CfgType.CRCOffset / 8U];
        E2E_VDCM_OBCM2_FD11.E2E_Tx_Status = E2E_Status;
      
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

FUNC(boolean,COM_CODE) IPDU_HYBRID_POWERTRAIN1_FD16_Callout(VAR(PduIdType, AUTOMATIC) id, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
    boolean IPDUEnableStatus;
    /*instantiate the E2E_P01ProtectStateType and set the init value*/
    static E2E_P01ProtectStateType HYBRID_POWERTRAIN1_FD16_StateType = {0};
    // if(KeST2B_b_HYBRID_POWERTRAIN1_FD16_Enbl == FALSE)
    // {
        // IPDUEnableStatus = FALSE;
    // }
    // else
    // {
        Std_ReturnType E2E_Status;
        /*Calculate MC and CRC for Tx message*/
        E2E_Status = E2E_P01Protect(&HYBRID_POWERTRAIN1_FD16_CfgType, &HYBRID_POWERTRAIN1_FD16_StateType, PduInfoPtr->SduDataPtr);
        E2E_HYBRID_POWERTRAIN1_FD16.MessageCounter = MC_MASK_HIGH_NIBBLE & PduInfoPtr->SduDataPtr[HYBRID_POWERTRAIN1_FD16_CfgType.CounterOffset / 8U];
        E2E_HYBRID_POWERTRAIN1_FD16.crcValue = PduInfoPtr->SduDataPtr[HYBRID_POWERTRAIN1_FD16_CfgType.CRCOffset / 8U];
        E2E_HYBRID_POWERTRAIN1_FD16.E2E_Tx_Status = E2E_Status;
      
        IPDUEnableStatus = TRUE;
    // }
    return IPDUEnableStatus;
}

FUNC(boolean,COM_CODE) IPDU_HYBRID_POWERTRAIN2_FD16_Callout(VAR(PduIdType, AUTOMATIC) id, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
    boolean IPDUEnableStatus;
    /*instantiate the E2E_P01ProtectStateType and set the init value*/
    static E2E_P01ProtectStateType HYBRID_POWERTRAIN2_FD16_StateType = {0};
    // if(KeST2B_b_HYBRID_POWERTRAIN2_FD16_Enbl == FALSE)
    // {
        // IPDUEnableStatus = FALSE;
    // }
    // else
    // {
        Std_ReturnType E2E_Status;
        /*Calculate MC and CRC for Tx message*/
        E2E_Status = E2E_P01Protect(&HYBRID_POWERTRAIN2_FD16_CfgType, &HYBRID_POWERTRAIN2_FD16_StateType, PduInfoPtr->SduDataPtr);
        E2E_HYBRID_POWERTRAIN2_FD16.MessageCounter = MC_MASK_HIGH_NIBBLE & PduInfoPtr->SduDataPtr[HYBRID_POWERTRAIN2_FD16_CfgType.CounterOffset / 8U];
        E2E_HYBRID_POWERTRAIN2_FD16.crcValue = PduInfoPtr->SduDataPtr[HYBRID_POWERTRAIN2_FD16_CfgType.CRCOffset / 8U];
        E2E_HYBRID_POWERTRAIN2_FD16.E2E_Tx_Status = E2E_Status;
      
        IPDUEnableStatus = TRUE;
    // }
    return IPDUEnableStatus;
}

FUNC(boolean,COM_CODE) IPDU_HYBRID_POWERTRAIN5_FD16_Callout(VAR(PduIdType, AUTOMATIC) id, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
    boolean IPDUEnableStatus;
    /*instantiate the E2E_P01ProtectStateType and set the init value*/
    static E2E_P01ProtectStateType HYBRID_POWERTRAIN5_FD16_StateType = {0};
    // if(KeST2B_b_HYBRID_POWERTRAIN5_FD16_Enbl == FALSE)
    // {
        // IPDUEnableStatus = FALSE;
    // }
    // else
    // {
        Std_ReturnType E2E_Status;
        /*Calculate MC and CRC for Tx message*/
        E2E_Status = E2E_P01Protect(&HYBRID_POWERTRAIN5_FD16_CfgType, &HYBRID_POWERTRAIN5_FD16_StateType, PduInfoPtr->SduDataPtr);
        E2E_HYBRID_POWERTRAIN5_FD16.MessageCounter = MC_MASK_HIGH_NIBBLE & PduInfoPtr->SduDataPtr[HYBRID_POWERTRAIN5_FD16_CfgType.CounterOffset / 8U];
        E2E_HYBRID_POWERTRAIN5_FD16.crcValue = PduInfoPtr->SduDataPtr[HYBRID_POWERTRAIN5_FD16_CfgType.CRCOffset / 8U];
        E2E_HYBRID_POWERTRAIN5_FD16.E2E_Tx_Status = E2E_Status;
      
        IPDUEnableStatus = TRUE;
    // }
    return IPDUEnableStatus;
}

FUNC(boolean,COM_CODE) IPDU_INVTARGET_PROPULSION1_FD16_Callout(VAR(PduIdType, AUTOMATIC) id, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
    boolean IPDUEnableStatus;
    /*instantiate the E2E_P01ProtectStateType and set the init value*/
    static E2E_P01ProtectStateType INVTARGET_PROPULSION1_FD16_StateType = {0};
    // if(KeST2B_b_INVTARGET_PROPULSION1_FD16_Enbl == FALSE)
    // {
        // IPDUEnableStatus = FALSE;
    // }
    // else
    // {
        Std_ReturnType E2E_Status;
        /*Calculate MC and CRC for Tx message*/
        E2E_Status = E2E_P01Protect(&INVTARGET_PROPULSION1_FD16_CfgType, &INVTARGET_PROPULSION1_FD16_StateType, PduInfoPtr->SduDataPtr);
        E2E_INVTARGET_PROPULSION1_FD16.MessageCounter = MC_MASK_HIGH_NIBBLE & PduInfoPtr->SduDataPtr[INVTARGET_PROPULSION1_FD16_CfgType.CounterOffset / 8U];
        E2E_INVTARGET_PROPULSION1_FD16.crcValue = PduInfoPtr->SduDataPtr[INVTARGET_PROPULSION1_FD16_CfgType.CRCOffset / 8U];
        E2E_INVTARGET_PROPULSION1_FD16.E2E_Tx_Status = E2E_Status;
      
        IPDUEnableStatus = TRUE;
    // }
    return IPDUEnableStatus;
}

FUNC(boolean,COM_CODE) IPDU_INVTARGET_PROPULSION2_FD16_Callout(VAR(PduIdType, AUTOMATIC) id, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
    boolean IPDUEnableStatus;
    /*instantiate the E2E_P01ProtectStateType and set the init value*/
    static E2E_P01ProtectStateType INVTARGET_PROPULSION2_FD16_StateType = {0};
    // if(KeST2B_b_INVTARGET_PROPULSION2_FD16_Enbl == FALSE)
    // {
        // IPDUEnableStatus = FALSE;
    // }
    // else
    // {
        Std_ReturnType E2E_Status;
        /*Calculate MC and CRC for Tx message*/
        E2E_Status = E2E_P01Protect(&INVTARGET_PROPULSION2_FD16_CfgType, &INVTARGET_PROPULSION2_FD16_StateType, PduInfoPtr->SduDataPtr);
        E2E_INVTARGET_PROPULSION2_FD16.MessageCounter = MC_MASK_HIGH_NIBBLE & PduInfoPtr->SduDataPtr[INVTARGET_PROPULSION2_FD16_CfgType.CounterOffset / 8U];
        E2E_INVTARGET_PROPULSION2_FD16.crcValue = PduInfoPtr->SduDataPtr[INVTARGET_PROPULSION2_FD16_CfgType.CRCOffset / 8U];
        E2E_INVTARGET_PROPULSION2_FD16.E2E_Tx_Status = E2E_Status;
      
        IPDUEnableStatus = TRUE;
    // }
    return IPDUEnableStatus;
}

FUNC(boolean,COM_CODE) IPDU_PT_SYSTEM_FD_1_FD16_Callout(VAR(PduIdType, AUTOMATIC) id, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
    boolean IPDUEnableStatus;
    /*instantiate the E2E_P01ProtectStateType and set the init value*/
    static E2E_P01ProtectStateType PT_SYSTEM_FD_1_FD16_StateType = {0};
    // if(KeST2B_b_PT_SYSTEM_FD_1_FD16_Enbl == FALSE)
    // {
        // IPDUEnableStatus = FALSE;
    // }
    // else
    // {
        Std_ReturnType E2E_Status;
        /*Calculate MC and CRC for Tx message*/
        E2E_Status = E2E_P01Protect(&PT_SYSTEM_FD_1_FD16_CfgType, &PT_SYSTEM_FD_1_FD16_StateType, PduInfoPtr->SduDataPtr);
        E2E_PT_SYSTEM_FD_1_FD16.MessageCounter = MC_MASK_HIGH_NIBBLE & PduInfoPtr->SduDataPtr[PT_SYSTEM_FD_1_FD16_CfgType.CounterOffset / 8U];
        E2E_PT_SYSTEM_FD_1_FD16.crcValue = PduInfoPtr->SduDataPtr[PT_SYSTEM_FD_1_FD16_CfgType.CRCOffset / 8U];
        E2E_PT_SYSTEM_FD_1_FD16.E2E_Tx_Status = E2E_Status;
      
        IPDUEnableStatus = TRUE;
    // }
    return IPDUEnableStatus;
}

FUNC(boolean,COM_CODE) IPDU_PT_TORQUE_FD_1_FD16_Callout(VAR(PduIdType, AUTOMATIC) id, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
    boolean IPDUEnableStatus;
    /*instantiate the E2E_P01ProtectStateType and set the init value*/
    static E2E_P01ProtectStateType PT_TORQUE_FD_1_FD16_StateType = {0};
    // if(KeST2B_b_PT_TORQUE_FD_1_FD16_Enbl == FALSE)
    // {
        // IPDUEnableStatus = FALSE;
    // }
    // else
    // {
        Std_ReturnType E2E_Status;
        /*Calculate MC and CRC for Tx message*/
        E2E_Status = E2E_P01Protect(&PT_TORQUE_FD_1_FD16_CfgType, &PT_TORQUE_FD_1_FD16_StateType, PduInfoPtr->SduDataPtr);
        E2E_PT_TORQUE_FD_1_FD16.MessageCounter = MC_MASK_HIGH_NIBBLE & PduInfoPtr->SduDataPtr[PT_TORQUE_FD_1_FD16_CfgType.CounterOffset / 8U];
        E2E_PT_TORQUE_FD_1_FD16.crcValue = PduInfoPtr->SduDataPtr[PT_TORQUE_FD_1_FD16_CfgType.CRCOffset / 8U];
        E2E_PT_TORQUE_FD_1_FD16.E2E_Tx_Status = E2E_Status;
      
        IPDUEnableStatus = TRUE;
    // }
    return IPDUEnableStatus;
}

FUNC(boolean,COM_CODE) IPDU_HYBRID_CHARGING_COMMAND_FD5_Callout(VAR(PduIdType, AUTOMATIC) id, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
    boolean IPDUEnableStatus;
    /*instantiate the E2E_P01ProtectStateType and set the init value*/
    static E2E_P01ProtectStateType HYBRID_CHARGING_COMMAND_FD5_StateType = {0};
    // if(KeST2B_b_HYBRID_CHARGING_COMMAND_FD5_Enbl == FALSE)
    // {
        // IPDUEnableStatus = FALSE;
    // }
    // else
    // {
        Std_ReturnType E2E_Status;
        /*Calculate MC and CRC for Tx message*/
        E2E_Status = E2E_P01Protect(&HYBRID_CHARGING_COMMAND_FD5_CfgType, &HYBRID_CHARGING_COMMAND_FD5_StateType, PduInfoPtr->SduDataPtr);
        E2E_HYBRID_CHARGING_COMMAND_FD5.MessageCounter = MC_MASK_HIGH_NIBBLE & PduInfoPtr->SduDataPtr[HYBRID_CHARGING_COMMAND_FD5_CfgType.CounterOffset / 8U];
        E2E_HYBRID_CHARGING_COMMAND_FD5.crcValue = PduInfoPtr->SduDataPtr[HYBRID_CHARGING_COMMAND_FD5_CfgType.CRCOffset / 8U];
        E2E_HYBRID_CHARGING_COMMAND_FD5.E2E_Tx_Status = E2E_Status;
      
        IPDUEnableStatus = TRUE;
    // }
    return IPDUEnableStatus;
}

FUNC(boolean,COM_CODE) IPDU_HYBRID_CHARGING_STATUS_FD5_Callout(VAR(PduIdType, AUTOMATIC) id, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
    boolean IPDUEnableStatus;
    /*instantiate the E2E_P01ProtectStateType and set the init value*/
    static E2E_P01ProtectStateType HYBRID_CHARGING_STATUS_FD5_StateType = {0};
    // if(KeST2B_b_HYBRID_CHARGING_STATUS_FD5_Enbl == FALSE)
    // {
        // IPDUEnableStatus = FALSE;
    // }
    // else
    // {
        Std_ReturnType E2E_Status;
        /*Calculate MC and CRC for Tx message*/
        E2E_Status = E2E_P01Protect(&HYBRID_CHARGING_STATUS_FD5_CfgType, &HYBRID_CHARGING_STATUS_FD5_StateType, PduInfoPtr->SduDataPtr);
        E2E_HYBRID_CHARGING_STATUS_FD5.MessageCounter = MC_MASK_HIGH_NIBBLE & PduInfoPtr->SduDataPtr[HYBRID_CHARGING_STATUS_FD5_CfgType.CounterOffset / 8U];
        E2E_HYBRID_CHARGING_STATUS_FD5.crcValue = PduInfoPtr->SduDataPtr[HYBRID_CHARGING_STATUS_FD5_CfgType.CRCOffset / 8U];
        E2E_HYBRID_CHARGING_STATUS_FD5.E2E_Tx_Status = E2E_Status;
      
        IPDUEnableStatus = TRUE;
    // }
    return IPDUEnableStatus;
}

FUNC(boolean,COM_CODE) IPDU_HYBRID_FD_LHOM_FD5_Callout(VAR(PduIdType, AUTOMATIC) id, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
    boolean IPDUEnableStatus;
    /*instantiate the E2E_P01ProtectStateType and set the init value*/
    static E2E_P01ProtectStateType HYBRID_FD_LHOM_FD5_StateType = {0};
    // if(KeST2B_b_HYBRID_FD_LHOM_FD5_Enbl == FALSE)
    // {
        // IPDUEnableStatus = FALSE;
    // }
    // else
    // {
        Std_ReturnType E2E_Status;
        /*Calculate MC and CRC for Tx message*/
        E2E_Status = E2E_P01Protect(&HYBRID_FD_LHOM_FD5_CfgType, &HYBRID_FD_LHOM_FD5_StateType, PduInfoPtr->SduDataPtr);
        E2E_HYBRID_FD_LHOM_FD5.MessageCounter = MC_MASK_HIGH_NIBBLE & PduInfoPtr->SduDataPtr[HYBRID_FD_LHOM_FD5_CfgType.CounterOffset / 8U];
        E2E_HYBRID_FD_LHOM_FD5.crcValue = PduInfoPtr->SduDataPtr[HYBRID_FD_LHOM_FD5_CfgType.CRCOffset / 8U];
        E2E_HYBRID_FD_LHOM_FD5.E2E_Tx_Status = E2E_Status;
      
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

FUNC(boolean,COM_CODE) IPDU_HYBRID_POWERTRAIN5_FD5_Callout(VAR(PduIdType, AUTOMATIC) id, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
    boolean IPDUEnableStatus;
    /*instantiate the E2E_P01ProtectStateType and set the init value*/
    static E2E_P01ProtectStateType HYBRID_POWERTRAIN5_FD5_StateType = {0};
    // if(KeST2B_b_HYBRID_POWERTRAIN5_FD5_Enbl == FALSE)
    // {
        // IPDUEnableStatus = FALSE;
    // }
    // else
    // {
        Std_ReturnType E2E_Status;
        /*Calculate MC and CRC for Tx message*/
        E2E_Status = E2E_P01Protect(&HYBRID_POWERTRAIN5_FD5_CfgType, &HYBRID_POWERTRAIN5_FD5_StateType, PduInfoPtr->SduDataPtr);
        E2E_HYBRID_POWERTRAIN5_FD5.MessageCounter = MC_MASK_HIGH_NIBBLE & PduInfoPtr->SduDataPtr[HYBRID_POWERTRAIN5_FD5_CfgType.CounterOffset / 8U];
        E2E_HYBRID_POWERTRAIN5_FD5.crcValue = PduInfoPtr->SduDataPtr[HYBRID_POWERTRAIN5_FD5_CfgType.CRCOffset / 8U];
        E2E_HYBRID_POWERTRAIN5_FD5.E2E_Tx_Status = E2E_Status;
      
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

FUNC(boolean,COM_CODE) IPDU_INVTARGET_PROPULSION2_FD5_Callout(VAR(PduIdType, AUTOMATIC) id, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
    boolean IPDUEnableStatus;
    /*instantiate the E2E_P01ProtectStateType and set the init value*/
    static E2E_P01ProtectStateType INVTARGET_PROPULSION2_FD5_StateType = {0};
    // if(KeST2B_b_INVTARGET_PROPULSION2_FD5_Enbl == FALSE)
    // {
        // IPDUEnableStatus = FALSE;
    // }
    // else
    // {
        Std_ReturnType E2E_Status;
        /*Calculate MC and CRC for Tx message*/
        E2E_Status = E2E_P01Protect(&INVTARGET_PROPULSION2_FD5_CfgType, &INVTARGET_PROPULSION2_FD5_StateType, PduInfoPtr->SduDataPtr);
        E2E_INVTARGET_PROPULSION2_FD5.MessageCounter = MC_MASK_HIGH_NIBBLE & PduInfoPtr->SduDataPtr[INVTARGET_PROPULSION2_FD5_CfgType.CounterOffset / 8U];
        E2E_INVTARGET_PROPULSION2_FD5.crcValue = PduInfoPtr->SduDataPtr[INVTARGET_PROPULSION2_FD5_CfgType.CRCOffset / 8U];
        E2E_INVTARGET_PROPULSION2_FD5.E2E_Tx_Status = E2E_Status;
      
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

FUNC(boolean,COM_CODE) IPDU_VDCM_OBCM2_FD5_Callout(VAR(PduIdType, AUTOMATIC) id, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
    boolean IPDUEnableStatus;
    /*instantiate the E2E_P01ProtectStateType and set the init value*/
    static E2E_P01ProtectStateType VDCM_OBCM2_FD5_StateType = {0};
    // if(KeST2B_b_VDCM_OBCM2_FD5_Enbl == FALSE)
    // {
        // IPDUEnableStatus = FALSE;
    // }
    // else
    // {
        Std_ReturnType E2E_Status;
        /*Calculate MC and CRC for Tx message*/
        E2E_Status = E2E_P01Protect(&VDCM_OBCM2_FD5_CfgType, &VDCM_OBCM2_FD5_StateType, PduInfoPtr->SduDataPtr);
        E2E_VDCM_OBCM2_FD5.MessageCounter = MC_MASK_HIGH_NIBBLE & PduInfoPtr->SduDataPtr[VDCM_OBCM2_FD5_CfgType.CounterOffset / 8U];
        E2E_VDCM_OBCM2_FD5.crcValue = PduInfoPtr->SduDataPtr[VDCM_OBCM2_FD5_CfgType.CRCOffset / 8U];
        E2E_VDCM_OBCM2_FD5.E2E_Tx_Status = E2E_Status;
      
        IPDUEnableStatus = TRUE;
    // }
    return IPDUEnableStatus;
}

