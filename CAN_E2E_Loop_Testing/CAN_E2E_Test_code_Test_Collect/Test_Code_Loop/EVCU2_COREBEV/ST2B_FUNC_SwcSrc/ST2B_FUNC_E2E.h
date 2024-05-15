
#include "E2E_P01.h"

#define MC_MASK_HIGH_NIBBLE 0x0F

/*Message Counter,CRC and status bytes for Comm team owned Tx Messages*/
typedef struct {
   uint8 MessageCounter;
   uint8 crcValue;
   uint8 E2E_Tx_Status;
} E2E_CommTxMessage;

E2E_CommTxMessage E2E_AXLE_TORQUE_FD_1_FD3 = {0,0,0};
E2E_CommTxMessage E2E_DRIVETRAIN_FD_3_FD3 = {0,0,0};
E2E_CommTxMessage E2E_ENGINE_SIMULATOR1_FD3 = {0,0,0};
E2E_CommTxMessage E2E_HYBRID_DISPLAY_FD3 = {0,0,0};
E2E_CommTxMessage E2E_HYBRID_POWERTRAIN1_FD3 = {0,0,0};
E2E_CommTxMessage E2E_HYBRID_POWERTRAIN2_FD3 = {0,0,0};
E2E_CommTxMessage E2E_HYBRID_POWERTRAIN4_FD3 = {0,0,0};
E2E_CommTxMessage E2E_HYBRID_POWERTRAIN5_FD3 = {0,0,0};
E2E_CommTxMessage E2E_PT_SYSTEM_FD_1_FD3 = {0,0,0};
E2E_CommTxMessage E2E_PT_TORQUE_FD_1_FD3 = {0,0,0};
E2E_CommTxMessage E2E_TRANSM_FD_1_FD3 = {0,0,0};
E2E_CommTxMessage E2E_TRANSM_FD_2_FD3 = {0,0,0};
E2E_CommTxMessage E2E_VDCM_HMI_FD3 = {0,0,0};
E2E_CommTxMessage E2E_EVCU_ISO15118_STATUS1_FD11 = {0,0,0};
E2E_CommTxMessage E2E_HYBRID_CHARGING_COMMAND_FD11 = {0,0,0};
E2E_CommTxMessage E2E_HYBRID_CHARGING_STATUS_FD11 = {0,0,0};
E2E_CommTxMessage E2E_PT_ENERGY_FD_1_FD11 = {0,0,0};
E2E_CommTxMessage E2E_RPF_FD_3_FD11 = {0,0,0};
E2E_CommTxMessage E2E_VDCM_OBCM2_FD11 = {0,0,0};
E2E_CommTxMessage E2E_AXLE_TORQUE_FD_1_FD14 = {0,0,0};
E2E_CommTxMessage E2E_PT_SYSTEM_FD_1_FD14 = {0,0,0};
E2E_CommTxMessage E2E_PT_TORQUE_FD_1_FD14 = {0,0,0};
E2E_CommTxMessage E2E_HYBRID_POWERTRAIN1_FD16 = {0,0,0};
E2E_CommTxMessage E2E_HYBRID_POWERTRAIN2_FD16 = {0,0,0};
E2E_CommTxMessage E2E_HYBRID_POWERTRAIN5_FD16 = {0,0,0};
E2E_CommTxMessage E2E_INVTARGET_PROPULSION1_FD16 = {0,0,0};
E2E_CommTxMessage E2E_INVTARGET_PROPULSION2_FD16 = {0,0,0};
E2E_CommTxMessage E2E_PT_SYSTEM_FD_1_FD16 = {0,0,0};
E2E_CommTxMessage E2E_PT_TORQUE_FD_1_FD16 = {0,0,0};
E2E_CommTxMessage E2E_HYBRID_CHARGING_COMMAND_FD5 = {0,0,0};
E2E_CommTxMessage E2E_HYBRID_CHARGING_STATUS_FD5 = {0,0,0};
E2E_CommTxMessage E2E_HYBRID_FD_LHOM_FD5 = {0,0,0};
E2E_CommTxMessage E2E_HYBRID_POWERTRAIN1_FD5 = {0,0,0};
E2E_CommTxMessage E2E_HYBRID_POWERTRAIN5_FD5 = {0,0,0};
E2E_CommTxMessage E2E_INVTARGET_PROPULSION1_FD5 = {0,0,0};
E2E_CommTxMessage E2E_INVTARGET_PROPULSION2_FD5 = {0,0,0};
E2E_CommTxMessage E2E_PT_ENERGY_FD_1_FD5 = {0,0,0};
E2E_CommTxMessage E2E_PT_SYSTEM_FD_1_FD5 = {0,0,0};
E2E_CommTxMessage E2E_VDCM_OBCM2_FD5 = {0,0,0};

#define RTE_START_SEC_CONST_UNSPECIFIED
#include "Rte_MemMap.h"

/* Structures for AXLE_TORQUE_FD_1_FD3*/
const E2E_P01ConfigType AXLE_TORQUE_FD_1_FD3_CfgType =
{
   304,                  /*CounterOffset*/
   312,                  /*CRCOffset*/
   44,                   /*DataID*/
   0,                    /*DataIDNibbleOffset*/
   E2E_P01_DATAID_BOTH,  /*DataIDMode*/
   48,                   /*DataLength*/
   0,                    /*MaxDeltaCounterInit*/
   0,                    /*MaxNoNewOrRepeatedData*/
   1                     /*SyncCounterInit*/
};

/* Structures for DRIVETRAIN_FD_3_FD3*/
const E2E_P01ConfigType DRIVETRAIN_FD_3_FD3_CfgType =
{
   176,                  /*CounterOffset*/
   184,                  /*CRCOffset*/
   44,                   /*DataID*/
   0,                    /*DataIDNibbleOffset*/
   E2E_P01_DATAID_BOTH,  /*DataIDMode*/
   32,                   /*DataLength*/
   0,                    /*MaxDeltaCounterInit*/
   0,                    /*MaxNoNewOrRepeatedData*/
   1                     /*SyncCounterInit*/
};

/* Structures for ENGINE_SIMULATOR1_FD3*/
const E2E_P01ConfigType ENGINE_SIMULATOR1_FD3_CfgType =
{
   176,                  /*CounterOffset*/
   184,                  /*CRCOffset*/
   44,                   /*DataID*/
   0,                    /*DataIDNibbleOffset*/
   E2E_P01_DATAID_BOTH,  /*DataIDMode*/
   32,                   /*DataLength*/
   0,                    /*MaxDeltaCounterInit*/
   0,                    /*MaxNoNewOrRepeatedData*/
   1                     /*SyncCounterInit*/
};

/* Structures for HYBRID_DISPLAY_FD3*/
const E2E_P01ConfigType HYBRID_DISPLAY_FD3_CfgType =
{
   176,                  /*CounterOffset*/
   184,                  /*CRCOffset*/
   44,                   /*DataID*/
   0,                    /*DataIDNibbleOffset*/
   E2E_P01_DATAID_BOTH,  /*DataIDMode*/
   32,                   /*DataLength*/
   0,                    /*MaxDeltaCounterInit*/
   0,                    /*MaxNoNewOrRepeatedData*/
   1                     /*SyncCounterInit*/
};

/* Structures for HYBRID_POWERTRAIN1_FD3*/
const E2E_P01ConfigType HYBRID_POWERTRAIN1_FD3_CfgType =
{
   432,                  /*CounterOffset*/
   440,                  /*CRCOffset*/
   44,                   /*DataID*/
   0,                    /*DataIDNibbleOffset*/
   E2E_P01_DATAID_BOTH,  /*DataIDMode*/
   64,                   /*DataLength*/
   0,                    /*MaxDeltaCounterInit*/
   0,                    /*MaxNoNewOrRepeatedData*/
   1                     /*SyncCounterInit*/
};

/* Structures for HYBRID_POWERTRAIN2_FD3*/
const E2E_P01ConfigType HYBRID_POWERTRAIN2_FD3_CfgType =
{
   432,                  /*CounterOffset*/
   440,                  /*CRCOffset*/
   44,                   /*DataID*/
   0,                    /*DataIDNibbleOffset*/
   E2E_P01_DATAID_BOTH,  /*DataIDMode*/
   64,                   /*DataLength*/
   0,                    /*MaxDeltaCounterInit*/
   0,                    /*MaxNoNewOrRepeatedData*/
   1                     /*SyncCounterInit*/
};

/* Structures for HYBRID_POWERTRAIN4_FD3*/
const E2E_P01ConfigType HYBRID_POWERTRAIN4_FD3_CfgType =
{
   176,                  /*CounterOffset*/
   184,                  /*CRCOffset*/
   44,                   /*DataID*/
   0,                    /*DataIDNibbleOffset*/
   E2E_P01_DATAID_BOTH,  /*DataIDMode*/
   32,                   /*DataLength*/
   0,                    /*MaxDeltaCounterInit*/
   0,                    /*MaxNoNewOrRepeatedData*/
   1                     /*SyncCounterInit*/
};

/* Structures for HYBRID_POWERTRAIN5_FD3*/
const E2E_P01ConfigType HYBRID_POWERTRAIN5_FD3_CfgType =
{
   176,                  /*CounterOffset*/
   184,                  /*CRCOffset*/
   44,                   /*DataID*/
   0,                    /*DataIDNibbleOffset*/
   E2E_P01_DATAID_BOTH,  /*DataIDMode*/
   32,                   /*DataLength*/
   0,                    /*MaxDeltaCounterInit*/
   0,                    /*MaxNoNewOrRepeatedData*/
   1                     /*SyncCounterInit*/
};

/* Structures for PT_SYSTEM_FD_1_FD3*/
const E2E_P01ConfigType PT_SYSTEM_FD_1_FD3_CfgType =
{
   432,                  /*CounterOffset*/
   440,                  /*CRCOffset*/
   44,                   /*DataID*/
   0,                    /*DataIDNibbleOffset*/
   E2E_P01_DATAID_BOTH,  /*DataIDMode*/
   64,                   /*DataLength*/
   0,                    /*MaxDeltaCounterInit*/
   0,                    /*MaxNoNewOrRepeatedData*/
   1                     /*SyncCounterInit*/
};

/* Structures for PT_TORQUE_FD_1_FD3*/
const E2E_P01ConfigType PT_TORQUE_FD_1_FD3_CfgType =
{
   304,                  /*CounterOffset*/
   312,                  /*CRCOffset*/
   44,                   /*DataID*/
   0,                    /*DataIDNibbleOffset*/
   E2E_P01_DATAID_BOTH,  /*DataIDMode*/
   48,                   /*DataLength*/
   0,                    /*MaxDeltaCounterInit*/
   0,                    /*MaxNoNewOrRepeatedData*/
   1                     /*SyncCounterInit*/
};

/* Structures for TRANSM_FD_1_FD3*/
const E2E_P01ConfigType TRANSM_FD_1_FD3_CfgType =
{
   432,                  /*CounterOffset*/
   440,                  /*CRCOffset*/
   44,                   /*DataID*/
   0,                    /*DataIDNibbleOffset*/
   E2E_P01_DATAID_BOTH,  /*DataIDMode*/
   64,                   /*DataLength*/
   0,                    /*MaxDeltaCounterInit*/
   0,                    /*MaxNoNewOrRepeatedData*/
   1                     /*SyncCounterInit*/
};

/* Structures for TRANSM_FD_2_FD3*/
const E2E_P01ConfigType TRANSM_FD_2_FD3_CfgType =
{
   176,                  /*CounterOffset*/
   184,                  /*CRCOffset*/
   44,                   /*DataID*/
   0,                    /*DataIDNibbleOffset*/
   E2E_P01_DATAID_BOTH,  /*DataIDMode*/
   32,                   /*DataLength*/
   0,                    /*MaxDeltaCounterInit*/
   0,                    /*MaxNoNewOrRepeatedData*/
   1                     /*SyncCounterInit*/
};

/* Structures for VDCM_HMI_FD3*/
const E2E_P01ConfigType VDCM_HMI_FD3_CfgType =
{
   176,                  /*CounterOffset*/
   184,                  /*CRCOffset*/
   44,                   /*DataID*/
   0,                    /*DataIDNibbleOffset*/
   E2E_P01_DATAID_BOTH,  /*DataIDMode*/
   32,                   /*DataLength*/
   0,                    /*MaxDeltaCounterInit*/
   0,                    /*MaxNoNewOrRepeatedData*/
   1                     /*SyncCounterInit*/
};

/* Structures for EVCU_ISO15118_STATUS1_FD11*/
const E2E_P01ConfigType EVCU_ISO15118_STATUS1_FD11_CfgType =
{
   432,                  /*CounterOffset*/
   440,                  /*CRCOffset*/
   44,                   /*DataID*/
   0,                    /*DataIDNibbleOffset*/
   E2E_P01_DATAID_BOTH,  /*DataIDMode*/
   64,                   /*DataLength*/
   0,                    /*MaxDeltaCounterInit*/
   0,                    /*MaxNoNewOrRepeatedData*/
   1                     /*SyncCounterInit*/
};

/* Structures for HYBRID_CHARGING_COMMAND_FD11*/
const E2E_P01ConfigType HYBRID_CHARGING_COMMAND_FD11_CfgType =
{
   176,                  /*CounterOffset*/
   184,                  /*CRCOffset*/
   44,                   /*DataID*/
   0,                    /*DataIDNibbleOffset*/
   E2E_P01_DATAID_BOTH,  /*DataIDMode*/
   32,                   /*DataLength*/
   0,                    /*MaxDeltaCounterInit*/
   0,                    /*MaxNoNewOrRepeatedData*/
   1                     /*SyncCounterInit*/
};

/* Structures for HYBRID_CHARGING_STATUS_FD11*/
const E2E_P01ConfigType HYBRID_CHARGING_STATUS_FD11_CfgType =
{
   176,                  /*CounterOffset*/
   184,                  /*CRCOffset*/
   44,                   /*DataID*/
   0,                    /*DataIDNibbleOffset*/
   E2E_P01_DATAID_BOTH,  /*DataIDMode*/
   32,                   /*DataLength*/
   0,                    /*MaxDeltaCounterInit*/
   0,                    /*MaxNoNewOrRepeatedData*/
   1                     /*SyncCounterInit*/
};

/* Structures for PT_ENERGY_FD_1_FD11*/
const E2E_P01ConfigType PT_ENERGY_FD_1_FD11_CfgType =
{
   432,                  /*CounterOffset*/
   440,                  /*CRCOffset*/
   44,                   /*DataID*/
   0,                    /*DataIDNibbleOffset*/
   E2E_P01_DATAID_BOTH,  /*DataIDMode*/
   64,                   /*DataLength*/
   0,                    /*MaxDeltaCounterInit*/
   0,                    /*MaxNoNewOrRepeatedData*/
   1                     /*SyncCounterInit*/
};

/* Structures for RPF_FD_3_FD11*/
const E2E_P01ConfigType RPF_FD_3_FD11_CfgType =
{
   432,                  /*CounterOffset*/
   440,                  /*CRCOffset*/
   44,                   /*DataID*/
   0,                    /*DataIDNibbleOffset*/
   E2E_P01_DATAID_BOTH,  /*DataIDMode*/
   64,                   /*DataLength*/
   0,                    /*MaxDeltaCounterInit*/
   0,                    /*MaxNoNewOrRepeatedData*/
   1                     /*SyncCounterInit*/
};

/* Structures for VDCM_OBCM2_FD11*/
const E2E_P01ConfigType VDCM_OBCM2_FD11_CfgType =
{
   432,                  /*CounterOffset*/
   440,                  /*CRCOffset*/
   44,                   /*DataID*/
   0,                    /*DataIDNibbleOffset*/
   E2E_P01_DATAID_BOTH,  /*DataIDMode*/
   64,                   /*DataLength*/
   0,                    /*MaxDeltaCounterInit*/
   0,                    /*MaxNoNewOrRepeatedData*/
   1                     /*SyncCounterInit*/
};

/* Structures for AXLE_TORQUE_FD_1_FD14*/
const E2E_P01ConfigType AXLE_TORQUE_FD_1_FD14_CfgType =
{
   304,                  /*CounterOffset*/
   312,                  /*CRCOffset*/
   44,                   /*DataID*/
   0,                    /*DataIDNibbleOffset*/
   E2E_P01_DATAID_BOTH,  /*DataIDMode*/
   48,                   /*DataLength*/
   0,                    /*MaxDeltaCounterInit*/
   0,                    /*MaxNoNewOrRepeatedData*/
   1                     /*SyncCounterInit*/
};

/* Structures for PT_SYSTEM_FD_1_FD14*/
const E2E_P01ConfigType PT_SYSTEM_FD_1_FD14_CfgType =
{
   432,                  /*CounterOffset*/
   440,                  /*CRCOffset*/
   44,                   /*DataID*/
   0,                    /*DataIDNibbleOffset*/
   E2E_P01_DATAID_BOTH,  /*DataIDMode*/
   64,                   /*DataLength*/
   0,                    /*MaxDeltaCounterInit*/
   0,                    /*MaxNoNewOrRepeatedData*/
   1                     /*SyncCounterInit*/
};

/* Structures for PT_TORQUE_FD_1_FD14*/
const E2E_P01ConfigType PT_TORQUE_FD_1_FD14_CfgType =
{
   304,                  /*CounterOffset*/
   312,                  /*CRCOffset*/
   44,                   /*DataID*/
   0,                    /*DataIDNibbleOffset*/
   E2E_P01_DATAID_BOTH,  /*DataIDMode*/
   48,                   /*DataLength*/
   0,                    /*MaxDeltaCounterInit*/
   0,                    /*MaxNoNewOrRepeatedData*/
   1                     /*SyncCounterInit*/
};

/* Structures for HYBRID_POWERTRAIN1_FD16*/
const E2E_P01ConfigType HYBRID_POWERTRAIN1_FD16_CfgType =
{
   432,                  /*CounterOffset*/
   440,                  /*CRCOffset*/
   44,                   /*DataID*/
   0,                    /*DataIDNibbleOffset*/
   E2E_P01_DATAID_BOTH,  /*DataIDMode*/
   64,                   /*DataLength*/
   0,                    /*MaxDeltaCounterInit*/
   0,                    /*MaxNoNewOrRepeatedData*/
   1                     /*SyncCounterInit*/
};

/* Structures for HYBRID_POWERTRAIN2_FD16*/
const E2E_P01ConfigType HYBRID_POWERTRAIN2_FD16_CfgType =
{
   432,                  /*CounterOffset*/
   440,                  /*CRCOffset*/
   44,                   /*DataID*/
   0,                    /*DataIDNibbleOffset*/
   E2E_P01_DATAID_BOTH,  /*DataIDMode*/
   64,                   /*DataLength*/
   0,                    /*MaxDeltaCounterInit*/
   0,                    /*MaxNoNewOrRepeatedData*/
   1                     /*SyncCounterInit*/
};

/* Structures for HYBRID_POWERTRAIN5_FD16*/
const E2E_P01ConfigType HYBRID_POWERTRAIN5_FD16_CfgType =
{
   176,                  /*CounterOffset*/
   184,                  /*CRCOffset*/
   44,                   /*DataID*/
   0,                    /*DataIDNibbleOffset*/
   E2E_P01_DATAID_BOTH,  /*DataIDMode*/
   32,                   /*DataLength*/
   0,                    /*MaxDeltaCounterInit*/
   0,                    /*MaxNoNewOrRepeatedData*/
   1                     /*SyncCounterInit*/
};

/* Structures for INVTARGET_PROPULSION1_FD16*/
const E2E_P01ConfigType INVTARGET_PROPULSION1_FD16_CfgType =
{
   304,                  /*CounterOffset*/
   312,                  /*CRCOffset*/
   44,                   /*DataID*/
   0,                    /*DataIDNibbleOffset*/
   E2E_P01_DATAID_BOTH,  /*DataIDMode*/
   48,                   /*DataLength*/
   0,                    /*MaxDeltaCounterInit*/
   0,                    /*MaxNoNewOrRepeatedData*/
   1                     /*SyncCounterInit*/
};

/* Structures for INVTARGET_PROPULSION2_FD16*/
const E2E_P01ConfigType INVTARGET_PROPULSION2_FD16_CfgType =
{
   304,                  /*CounterOffset*/
   312,                  /*CRCOffset*/
   44,                   /*DataID*/
   0,                    /*DataIDNibbleOffset*/
   E2E_P01_DATAID_BOTH,  /*DataIDMode*/
   48,                   /*DataLength*/
   0,                    /*MaxDeltaCounterInit*/
   0,                    /*MaxNoNewOrRepeatedData*/
   1                     /*SyncCounterInit*/
};

/* Structures for PT_SYSTEM_FD_1_FD16*/
const E2E_P01ConfigType PT_SYSTEM_FD_1_FD16_CfgType =
{
   432,                  /*CounterOffset*/
   440,                  /*CRCOffset*/
   44,                   /*DataID*/
   0,                    /*DataIDNibbleOffset*/
   E2E_P01_DATAID_BOTH,  /*DataIDMode*/
   64,                   /*DataLength*/
   0,                    /*MaxDeltaCounterInit*/
   0,                    /*MaxNoNewOrRepeatedData*/
   1                     /*SyncCounterInit*/
};

/* Structures for PT_TORQUE_FD_1_FD16*/
const E2E_P01ConfigType PT_TORQUE_FD_1_FD16_CfgType =
{
   304,                  /*CounterOffset*/
   312,                  /*CRCOffset*/
   44,                   /*DataID*/
   0,                    /*DataIDNibbleOffset*/
   E2E_P01_DATAID_BOTH,  /*DataIDMode*/
   48,                   /*DataLength*/
   0,                    /*MaxDeltaCounterInit*/
   0,                    /*MaxNoNewOrRepeatedData*/
   1                     /*SyncCounterInit*/
};

/* Structures for HYBRID_CHARGING_COMMAND_FD5*/
const E2E_P01ConfigType HYBRID_CHARGING_COMMAND_FD5_CfgType =
{
   176,                  /*CounterOffset*/
   184,                  /*CRCOffset*/
   44,                   /*DataID*/
   0,                    /*DataIDNibbleOffset*/
   E2E_P01_DATAID_BOTH,  /*DataIDMode*/
   32,                   /*DataLength*/
   0,                    /*MaxDeltaCounterInit*/
   0,                    /*MaxNoNewOrRepeatedData*/
   1                     /*SyncCounterInit*/
};

/* Structures for HYBRID_CHARGING_STATUS_FD5*/
const E2E_P01ConfigType HYBRID_CHARGING_STATUS_FD5_CfgType =
{
   176,                  /*CounterOffset*/
   184,                  /*CRCOffset*/
   44,                   /*DataID*/
   0,                    /*DataIDNibbleOffset*/
   E2E_P01_DATAID_BOTH,  /*DataIDMode*/
   32,                   /*DataLength*/
   0,                    /*MaxDeltaCounterInit*/
   0,                    /*MaxNoNewOrRepeatedData*/
   1                     /*SyncCounterInit*/
};

/* Structures for HYBRID_FD_LHOM_FD5*/
const E2E_P01ConfigType HYBRID_FD_LHOM_FD5_CfgType =
{
   432,                  /*CounterOffset*/
   440,                  /*CRCOffset*/
   44,                   /*DataID*/
   0,                    /*DataIDNibbleOffset*/
   E2E_P01_DATAID_BOTH,  /*DataIDMode*/
   64,                   /*DataLength*/
   0,                    /*MaxDeltaCounterInit*/
   0,                    /*MaxNoNewOrRepeatedData*/
   1                     /*SyncCounterInit*/
};

/* Structures for HYBRID_POWERTRAIN1_FD5*/
const E2E_P01ConfigType HYBRID_POWERTRAIN1_FD5_CfgType =
{
   432,                  /*CounterOffset*/
   440,                  /*CRCOffset*/
   44,                   /*DataID*/
   0,                    /*DataIDNibbleOffset*/
   E2E_P01_DATAID_BOTH,  /*DataIDMode*/
   64,                   /*DataLength*/
   0,                    /*MaxDeltaCounterInit*/
   0,                    /*MaxNoNewOrRepeatedData*/
   1                     /*SyncCounterInit*/
};

/* Structures for HYBRID_POWERTRAIN5_FD5*/
const E2E_P01ConfigType HYBRID_POWERTRAIN5_FD5_CfgType =
{
   176,                  /*CounterOffset*/
   184,                  /*CRCOffset*/
   44,                   /*DataID*/
   0,                    /*DataIDNibbleOffset*/
   E2E_P01_DATAID_BOTH,  /*DataIDMode*/
   32,                   /*DataLength*/
   0,                    /*MaxDeltaCounterInit*/
   0,                    /*MaxNoNewOrRepeatedData*/
   1                     /*SyncCounterInit*/
};

/* Structures for INVTARGET_PROPULSION1_FD5*/
const E2E_P01ConfigType INVTARGET_PROPULSION1_FD5_CfgType =
{
   304,                  /*CounterOffset*/
   312,                  /*CRCOffset*/
   44,                   /*DataID*/
   0,                    /*DataIDNibbleOffset*/
   E2E_P01_DATAID_BOTH,  /*DataIDMode*/
   48,                   /*DataLength*/
   0,                    /*MaxDeltaCounterInit*/
   0,                    /*MaxNoNewOrRepeatedData*/
   1                     /*SyncCounterInit*/
};

/* Structures for INVTARGET_PROPULSION2_FD5*/
const E2E_P01ConfigType INVTARGET_PROPULSION2_FD5_CfgType =
{
   304,                  /*CounterOffset*/
   312,                  /*CRCOffset*/
   44,                   /*DataID*/
   0,                    /*DataIDNibbleOffset*/
   E2E_P01_DATAID_BOTH,  /*DataIDMode*/
   48,                   /*DataLength*/
   0,                    /*MaxDeltaCounterInit*/
   0,                    /*MaxNoNewOrRepeatedData*/
   1                     /*SyncCounterInit*/
};

/* Structures for PT_ENERGY_FD_1_FD5*/
const E2E_P01ConfigType PT_ENERGY_FD_1_FD5_CfgType =
{
   432,                  /*CounterOffset*/
   440,                  /*CRCOffset*/
   44,                   /*DataID*/
   0,                    /*DataIDNibbleOffset*/
   E2E_P01_DATAID_BOTH,  /*DataIDMode*/
   64,                   /*DataLength*/
   0,                    /*MaxDeltaCounterInit*/
   0,                    /*MaxNoNewOrRepeatedData*/
   1                     /*SyncCounterInit*/
};

/* Structures for PT_SYSTEM_FD_1_FD5*/
const E2E_P01ConfigType PT_SYSTEM_FD_1_FD5_CfgType =
{
   432,                  /*CounterOffset*/
   440,                  /*CRCOffset*/
   44,                   /*DataID*/
   0,                    /*DataIDNibbleOffset*/
   E2E_P01_DATAID_BOTH,  /*DataIDMode*/
   64,                   /*DataLength*/
   0,                    /*MaxDeltaCounterInit*/
   0,                    /*MaxNoNewOrRepeatedData*/
   1                     /*SyncCounterInit*/
};

/* Structures for VDCM_OBCM2_FD5*/
const E2E_P01ConfigType VDCM_OBCM2_FD5_CfgType =
{
   432,                  /*CounterOffset*/
   440,                  /*CRCOffset*/
   44,                   /*DataID*/
   0,                    /*DataIDNibbleOffset*/
   E2E_P01_DATAID_BOTH,  /*DataIDMode*/
   64,                   /*DataLength*/
   0,                    /*MaxDeltaCounterInit*/
   0,                    /*MaxNoNewOrRepeatedData*/
   1                     /*SyncCounterInit*/
};

#define RTE_STOP_SEC_CONST_UNSPECIFIED
#include "Rte_MemMap.h"