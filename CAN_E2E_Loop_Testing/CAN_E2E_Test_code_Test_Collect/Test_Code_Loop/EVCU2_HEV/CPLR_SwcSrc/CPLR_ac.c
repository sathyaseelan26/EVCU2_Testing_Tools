/*
 * File: CPLR_ac.c
 *
 * Code generated for Simulink model 'CPLR_ac'.
 *
 * Model version                  : 9.319
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:18:23 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CPLR_ac.h"

/* Named constants for Chart: '<S38>/ChrgPortMech_Type2' */
#if Rte_SysCon_Variant_CPLR_1
#define CPLR_ac_IN_Init_State          ((uint8)1U)
#endif

#if Rte_SysCon_Variant_CPLR_1
#define CPLR_ac_IN_Lock                ((uint8)2U)
#endif

#if Rte_SysCon_Variant_CPLR_1
#define CPLR_ac_IN_UnLock              ((uint8)3U)
#endif

/* Named constants for Chart: '<S38>/Pulse Logic' */
#if Rte_SysCon_Variant_CPLR_1
#define CPLR_ac_IN_Unlock              ((uint8)3U)
#endif

/* Named constants for Chart: '<S39>/ChrgPortLockB' */
#if Rte_SysCon_Variant_CPLR_1
#define CPLR_ac_IN_ActON               ((uint8)1U)
#endif

#if Rte_SysCon_Variant_CPLR_1
#define CPLR_ac_IN_ActOff              ((uint8)2U)
#endif

#if Rte_SysCon_Variant_CPLR_1
#define CPLR_ac_IN_HBridgeShrt         ((uint8)3U)
#endif

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_CPLR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(float32, CPLR_VAR_INIT) HeCPLR_t_PI_ExecutionRate = 0.02F;/* Referenced by: '<S89>/Calib' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(float32, CPLR_VAR_INIT) KeCPLR_Cnt_ChrgLockFlt = 4.0F;/* Referenced by: '<S57>/Calib' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(uint16, CPLR_VAR_INIT) KeCPLR_Cnt_Dbnc_DoorLockSts = 4U;/* Referenced by: '<S117>/Calib' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(uint16, CPLR_VAR_INIT) KeCPLR_Cnt_Dbnc_RemoteLockSts = 4U;/* Referenced by: '<S118>/Calib' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(uint16, CPLR_VAR_INIT) KeCPLR_Cnt_DelayDoorUnlkPulse = 20U;/* Referenced by: '<S90>/Calib' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(uint16, CPLR_VAR_INIT) KeCPLR_Cnt_Port_MisMatchFlt = 80U;/* Referenced by: '<S58>/Calib' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(uint16, CPLR_VAR_INIT) KeCPLR_Cnt_UnplugDbncCnt = 4U;/* Referenced by: '<S9>/Calib' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(boolean, CPLR_VAR_INIT) KeCPLR_b_Active = 0;/* Referenced by: '<S10>/Calib' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(boolean, CPLR_VAR_INIT) KeCPLR_b_AddPPI1ToPlgIntoLck = 1;/* Referenced by: '<S26>/Calib' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(boolean, CPLR_VAR_INIT) KeCPLR_b_AlwLockDTC_ChrgFlt = 0;/* Referenced by: '<S59>/Calib' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(boolean, CPLR_VAR_INIT) KeCPLR_b_CBC_LOC_Ovrd = 0;/* Referenced by: '<S125>/Calib' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(boolean, CPLR_VAR_INIT) KeCPLR_b_CBC_LOC_Val = 0;/* Referenced by: '<S126>/Calib' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(boolean, CPLR_VAR_INIT) KeCPLR_b_ChrgPortEnbl_BSW_Ovrd = 0;/* Referenced by: '<S145>/Calib' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(boolean, CPLR_VAR_INIT) KeCPLR_b_ChrgPortHbridgeFltOvrd =
    0;                                 /* Referenced by: '<S127>/Calib' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(boolean, CPLR_VAR_INIT) KeCPLR_b_ChrgPortLckDsblOvrd = 0;/* Referenced by: '<S128>/Calib' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(boolean, CPLR_VAR_INIT) KeCPLR_b_ChrgPortLckDsblVal = 0;/* Referenced by: '<S129>/Calib' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(boolean, CPLR_VAR_INIT) KeCPLR_b_ChrgPortMech_Type1 = 0;/* Referenced by: '<S91>/Calib' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(boolean, CPLR_VAR_INIT) KeCPLR_b_ChrgPortReq_BSW_Ovrd = 0;/* Referenced by: '<S146>/Calib' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(boolean, CPLR_VAR_INIT) KeCPLR_b_ChrgPortReq_BSW_Val = 0;/* Referenced by: '<S147>/Calib' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(boolean, CPLR_VAR_INIT) KeCPLR_b_ChrgPortRq_DVCOvrd = 0;/* Referenced by: '<S148>/Calib' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(boolean, CPLR_VAR_INIT) KeCPLR_b_ChrgPortRq_DVCVal = 0;/* Referenced by: '<S149>/Calib' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(boolean, CPLR_VAR_INIT) KeCPLR_b_ChrgPort_ReqOvrd = 0;/* Referenced by: '<S150>/Calib' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(boolean, CPLR_VAR_INIT) KeCPLR_b_DschrgUnlckInletOvrd = 0;/* Referenced by: '<S130>/Calib' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(boolean, CPLR_VAR_INIT) KeCPLR_b_DschrgUnlckInletVal = 0;/* Referenced by: '<S131>/Calib' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(boolean, CPLR_VAR_INIT) KeCPLR_b_EnblChrgPortJapan = 1;/* Referenced by: '<S27>/Calib' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(boolean, CPLR_VAR_INIT) KeCPLR_b_EnblChrgPortLckFailSts =
    1;                                 /* Referenced by: '<S60>/Calib' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(boolean, CPLR_VAR_INIT) KeCPLR_b_EnblChrgPortNAFTA = 0;/* Referenced by: '<S28>/Calib' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(boolean, CPLR_VAR_INIT) KeCPLR_b_EnblCountMismtch = 0;/* Referenced by: '<S61>/Calib' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(boolean, CPLR_VAR_INIT) KeCPLR_b_EnblPlugInLock = 0;/* Referenced by: '<S29>/Calib' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(boolean, CPLR_VAR_INIT) KeCPLR_b_EnblShortCkt = 0;
                                      /* Referenced by: '<S39>/ChrgPortLockB' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(boolean, CPLR_VAR_INIT) KeCPLR_b_H2RefuelingEnbl = 0;/* Referenced by: '<S92>/Calib' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(boolean, CPLR_VAR_INIT) KeCPLR_b_HBridgeFaultDiagEnbl = 0;/* Referenced by: '<S66>/Calib' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(boolean, CPLR_VAR_INIT) KeCPLR_b_HVBat_DC_CntctrStatOvrd =
    0;                                 /* Referenced by: '<S132>/Calib' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(boolean, CPLR_VAR_INIT) KeCPLR_b_HdAjarUnlockInlet = 0;/* Referenced by: '<S93>/Calib' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(boolean, CPLR_VAR_INIT) KeCPLR_b_HoodAjarOvrd = 0;/* Referenced by: '<S133>/Calib' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(boolean, CPLR_VAR_INIT) KeCPLR_b_HoodAjarVal = 0;/* Referenced by: '<S134>/Calib' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(boolean, CPLR_VAR_INIT) KeCPLR_b_InFieldMdOvrd = 0;/* Referenced by: '<S135>/Calib' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(boolean, CPLR_VAR_INIT) KeCPLR_b_InFieldMdVal = 0;/* Referenced by: '<S136>/Calib' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(boolean, CPLR_VAR_INIT) KeCPLR_b_LockStatus_Ovrd = 0;/* Referenced by: '<S151>/Calib' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(boolean, CPLR_VAR_INIT) KeCPLR_b_LockStatus_Val = 0;/* Referenced by: '<S152>/Calib' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(boolean, CPLR_VAR_INIT) KeCPLR_b_MSG13_Ovrd = 0;/* Referenced by: '<S153>/Calib' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(boolean, CPLR_VAR_INIT) KeCPLR_b_MSG13_Val = 0;/* Referenced by: '<S154>/Calib' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(boolean, CPLR_VAR_INIT) KeCPLR_b_ManualRel_Actv = 0;/* Referenced by: '<S119>/Calib' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(boolean, CPLR_VAR_INIT) KeCPLR_b_Prox_GBT = 0;/* Referenced by: '<S137>/Calib' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(boolean, CPLR_VAR_INIT) KeCPLR_b_TxGBTMsgResponse = 0;/* Referenced by: '<S138>/Calib' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(boolean, CPLR_VAR_INIT) KeCPLR_b_ignoreRmtLKD = 0;/* Referenced by: '<S94>/Calib' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(boolean, CPLR_VAR_INIT) KeCPLR_b_ignoreRmtUNLK = 0;/* Referenced by: '<S95>/Calib' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(uint16, CPLR_VAR_INIT) KeCPLR_d_ChrgPortHbridgeFlt_Val =
    0U;                                /* Referenced by: '<S139>/Calib' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(TeOBCR_e_ChrgPortLockType, CPLR_VAR_INIT)
    KeCPLR_e_ChrgPortLock_Type = CeOBCR_e_ChrgPortLock_TypeC;/* Referenced by: '<S44>/Calib' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(TeOBCR_e_ChrgPort_Req, CPLR_VAR_INIT)
    KeCPLR_e_ChrgPort_ReqVal = CeOBCR_e_PortNoRequest;/* Referenced by: '<S155>/Calib' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(TeBPCR_e_DCCntctrSts, CPLR_VAR_INIT)
    KeCPLR_e_HVBat_DC_CntctrStatOvrdVal = CeBPCR_e_DCCntctrSts_Open;/* Referenced by: '<S140>/Calib' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(TeOBCR_e_InterMarkets, CPLR_VAR_INIT)
    KeCPLR_e_InterMarketsSelection = CeOBCR_e_NorthAmerica;/* Referenced by: '<S30>/Calib' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(TeIDCR_e_Prox_GBT, CPLR_VAR_INIT) KeCPLR_e_Prox_GBT =
    CeIDCR_e_CC_LO;                    /* Referenced by: '<S141>/Calib' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(TeIDCR_e_TxGBTMessageResponse, CPLR_VAR_INIT)
    KeCPLR_e_TxGBTMsgResponse = CeIDCR_e_GBTRes_EVSE_Not_Connected;/* Referenced by: '<S142>/Calib' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(uint8, CPLR_VAR_INIT) KeCPLR_k_ChrgPorEnbl_BSW_Val = 0U;/* Referenced by: '<S156>/Calib' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(float32, CPLR_VAR_INIT) KeCPLR_t_AC_BEVLockDly = 1.0F;
                                 /* Referenced by: '<S38>/ChrgPortMech_Type2' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(float32, CPLR_VAR_INIT) KeCPLR_t_ActMechLckDur = 500.0F;
                                      /* Referenced by: '<S39>/ChrgPortLockB' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(float32, CPLR_VAR_INIT) KeCPLR_t_ActMechUlckDur = 500.0F;
                                      /* Referenced by: '<S39>/ChrgPortLockB' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(float32, CPLR_VAR_INIT) KeCPLR_t_BEVLockDelay = 1.0F;
                                 /* Referenced by: '<S38>/ChrgPortMech_Type2' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(float32, CPLR_VAR_INIT) KeCPLR_t_ChrgPortEnblTh = 1.0F;/* Referenced by: '<S109>/Calib' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(float32, CPLR_VAR_INIT) KeCPLR_t_ChrgPort_InitDbnc = 10.0F;/* Referenced by: '<S38>/Lock_Control' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(uint16, CPLR_VAR_INIT) KeCPLR_t_DrUnlock_Restart = 60U;/* Referenced by: '<S38>/Lock_Control' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(float32, CPLR_VAR_INIT) KeCPLR_t_DsblHbridge = 0.1F;
                                      /* Referenced by: '<S39>/ChrgPortLockB' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(float32, CPLR_VAR_INIT) KeCPLR_t_PortLock_DoublePlg =
    10.0F;                             /* Referenced by: '<S38>/Lock_Control' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static volatile CONST(float32, CPLR_VAR_INIT) KeCPLR_t_S2Timer = 2.0F;/* Referenced by: '<S96>/Calib' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_CPLR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CPLR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_CPLR_1

static VAR(boolean, CPLR_VAR_INIT) VeCPLR_b_BCI_FlagTest1;/* '<S102>/Gain' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static VAR(boolean, CPLR_VAR_INIT) VeCPLR_b_CBCLossComm;/* '<S5>/Switch11' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static VAR(boolean, CPLR_VAR_INIT) VeCPLR_b_ChargePortLockDisable;/* '<S5>/Switch13' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static VAR(boolean, CPLR_VAR_INIT) VeCPLR_b_ChrgPortLock_Mismatch1;/* '<S56>/Switch1' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static VAR(boolean, CPLR_VAR_INIT) VeCPLR_b_ChrgPort_Active;/* '<S8>/Logical' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static VAR(boolean, CPLR_VAR_INIT) VeCPLR_b_ChrgPort_Flag_Type1;/* '<S99>/Gain' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static VAR(boolean, CPLR_VAR_INIT) VeCPLR_b_ChrgPort_Type1_BCI;/* '<S38>/Logical1' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static VAR(boolean, CPLR_VAR_INIT) VeCPLR_b_ChrgPort_Type2_Flag;/* '<S104>/Gain' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static VAR(boolean, CPLR_VAR_INIT) VeCPLR_b_DCGBTDetect;/* '<S8>/Logical7' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static VAR(boolean, CPLR_VAR_INIT) VeCPLR_b_DschrgUnlckInlet;/* '<S5>/Switch86' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static VAR(boolean, CPLR_VAR_INIT) VeCPLR_b_HoodAjar;/* '<S5>/Switch9' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static VAR(boolean, CPLR_VAR_INIT) VeCPLR_b_InFieldMode;/* '<S5>/Switch12' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static VAR(boolean, CPLR_VAR_INIT) VeCPLR_b_Lock_Status_Out;/* '<S8>/Switch' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static VAR(boolean, CPLR_VAR_INIT) VeCPLR_b_ManualRel_Sts;/* '<S40>/Logical5' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static VAR(boolean, CPLR_VAR_INIT) VeCPLR_b_PluggedIn_Proc;/* '<S8>/Switch1' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static VAR(boolean, CPLR_VAR_INIT) VeCPLR_b_Port_Mismatch;/* '<S62>/AND' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static VAR(boolean, CPLR_VAR_INIT) VeCPLR_b_Port_Mismatch_Flt;/* '<S45>/Logical3' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static VAR(boolean, CPLR_VAR_INIT) VeCPLR_b_RelockTimer;/* '<S8>/Merge2' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static VAR(boolean, CPLR_VAR_INIT) VeCPLR_b_TypeA_Fault_Test1;/* '<S46>/Logical5' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static VAR(boolean, CPLR_VAR_INIT) VeCPLR_b_TypeA_Fault_Test2;/* '<S46>/Logical6' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static VAR(boolean, CPLR_VAR_INIT) VeCPLR_b_TypeB_Fault_Test5;/* '<S47>/Logical1' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static VAR(boolean, CPLR_VAR_INIT) VeCPLR_b_TypeC_Fault_Test1;/* '<S48>/Comparison1' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static VAR(boolean, CPLR_VAR_INIT) VeCPLR_b_TypeC_Fault_Test2;/* '<S48>/Logical1' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static VAR(boolean, CPLR_VAR_INIT) VeCPLR_b_TypeC_Fault_Test3;/* '<S48>/Logical6' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static VAR(uint16, CPLR_VAR_INIT) VeCPLR_d_ChrgPortHbridgeFlt;/* '<S5>/Switch84' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static VAR(TeOBCR_e_ChrgPort_Req, CPLR_VAR_INIT) VeCPLR_e_ChrgPort_Type1;/* '<S80>/DataTypeConversion' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static VAR(TeOBCR_e_ChrgPort_Req, CPLR_VAR_INIT) VeCPLR_e_ChrgPort_Type2;/* '<S81>/DataTypeConversion' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static VAR(TeBPCR_e_DCCntctrSts, CPLR_VAR_INIT) VeCPLR_e_HVBat_DC_CntctrStat;/* '<S5>/Switch54' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static VAR(TeIDCR_e_Prox_GBT, CPLR_VAR_INIT) VeCPLR_e_Prox_GBT;/* '<S5>/Switch33' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static VAR(TeIDCR_e_TxGBTMessageResponse, CPLR_VAR_INIT)
    VeCPLR_e_TxGBTMsgResponse;         /* '<S5>/Switch34' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static VAR(float32, CPLR_VAR_INIT) VeCPLR_t_PortStateTimer;/* '<S101>/Gain' */

#endif

#if Rte_SysCon_Variant_CPLR_1

static VAR(float32, CPLR_VAR_INIT) VeCPLR_t_PortStateTimer2;/* '<S103>/Gain' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CPLR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_CPLR
#include "MemMap.h"

CONST(ConstB_CPLR_ac_T, CPLR_VAR_INIT) CPLR_ac_ConstB =
{
    CeOBCR_e_PortNoRequest,            /* '<S161>/Const23' */
    CeOBCR_e_PortLockSts_Default       /* '<S161>/Const3' */
};

#define STOP_SEC_CONST_UNSPECIFIED_CPLR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CPLR
#include "MemMap.h"

VAR(B_CPLR_ac_T, CPLR_VAR_INIT) CPLR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CPLR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CPLR
#include "MemMap.h"

VAR(DW_CPLR_ac_T, CPLR_VAR_INIT) CPLR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CPLR
#include "MemMap.h"

/* Model step function for TID1 */
#if Rte_SysCon_Variant_CPLR_1

FUNC(void, CPLR_CODE) CPLR_MedTED(void) /* Explicit Task: MedTED */
{

#if Rte_SysCon_Variant_CPLR_1

    boolean tmpRead;

#endif

#if Rte_SysCon_Variant_CPLR_1

    TeBPCR_e_DCCntctrSts tmpRead_0;

#endif

#if Rte_SysCon_Variant_CPLR_1

    sint16 tmpRead_1;

#endif

#if Rte_SysCon_Variant_CPLR_1

    TeODCR_e_IO_CntrlSt tmpRead_2;

#endif

#if Rte_SysCon_Variant_CPLR_1

    TeOBCR_e_ChrgPortLock_Sts tmpRead_3;

#endif

#if Rte_SysCon_Variant_CPLR_1

    TeIDCR_e_Prox_GBT tmpRead_4;

#endif

#if Rte_SysCon_Variant_CPLR_1

    TeIDCR_e_TxGBTMessageResponse tmpRead_5;

#endif

#if Rte_SysCon_Variant_CPLR_1

    TeOBCR_e_ChrgPort_Req tmpRead_6;

#endif

#if Rte_SysCon_Variant_CPLR_1

    boolean tmpRead_7;

#endif

#if Rte_SysCon_Variant_CPLR_1

    TeCITR_e_ChrgPortLck_FailSts tmpRead_8;

#endif

#if Rte_SysCon_Variant_CPLR_1

    boolean rtb_LogicalOperator;

#endif

#if Rte_SysCon_Variant_CPLR_1

    uint16 rtb_Switch;

#endif

#if Rte_SysCon_Variant_CPLR_1

    boolean rtb_TmpSignalConversionAtVeOBCR;

#endif

#if Rte_SysCon_Variant_CPLR_1

    boolean rtb_TmpSignalConversionAtVeCDMR;

#endif

#if Rte_SysCon_Variant_CPLR_1

    boolean rtb_TmpSignalConversionAtVeCITR;

#endif

#if Rte_SysCon_Variant_CPLR_1

    boolean rtb_AND_as;

#endif

#if Rte_SysCon_Variant_CPLR_1

    boolean rtb_TmpSignalConversionAtVeOB_o;

#endif

#if Rte_SysCon_Variant_CPLR_1

    boolean rtb_Comparison2;

#endif

#if Rte_SysCon_Variant_CPLR_1

    boolean rtb_Logical5;

#endif

#if Rte_SysCon_Variant_CPLR_1

    boolean rtb_TmpSignalConversionAtVeCI_l;

#endif

#if Rte_SysCon_Variant_CPLR_1

    boolean rtb_AND_n;

#endif

#if Rte_SysCon_Variant_CPLR_1

    boolean rtb_TmpSignalConversionAtVeC_o5;

#endif

#if Rte_SysCon_Variant_CPLR_1

    boolean rtb_TmpSignalConversionAtVeCI_f;

#endif

#if Rte_SysCon_Variant_CPLR_1

    boolean rtb_TmpSignalConversionAtVeCI_b;

#endif

#if Rte_SysCon_Variant_CPLR_1

    boolean rtb_TmpSignalConversionAtVeCI_c;

#endif

#if Rte_SysCon_Variant_CPLR_1

    boolean rtb_TmpSignalConversionAtVeC_fw;

#endif

#if Rte_SysCon_Variant_CPLR_1

    boolean rtb_AND_e;

#endif

#if Rte_SysCon_Variant_CPLR_1

    boolean rtb_TmpSignalConversionAtVeC_gz;

#endif

#if Rte_SysCon_Variant_CPLR_1

    boolean rtb_AND_mz;

#endif

#if Rte_SysCon_Variant_CPLR_1

    boolean rtb_TmpSignalConversionAtVeCI_g;

#endif

#if Rte_SysCon_Variant_CPLR_1

    boolean rtb_TmpSignalConversionAtVeIDCR;

#endif

#if Rte_SysCon_Variant_CPLR_1

    TeOBCR_e_ChargeType rtb_TmpSignalConversionAtVeOB_i;

#endif

#if Rte_SysCon_Variant_CPLR_1

    TeOBCR_e_ChargingLevel rtb_TmpSignalConversionAtVeO_k1;

#endif

#if Rte_SysCon_Variant_CPLR_1

    TeOBCR_e_ChrgPort_Req rtb_Switch_h;

#endif

#if Rte_SysCon_Variant_CPLR_1

    boolean Switch10;

#endif

#if Rte_SysCon_Variant_CPLR_1

    boolean Merge6;

#endif

#if Rte_SysCon_Variant_CPLR_1

    boolean Merge1;

#endif

#if Rte_SysCon_Variant_CPLR_1

    uint8 Merge3;

#endif

#if Rte_SysCon_Variant_CPLR_1

    sint32 tmp;

#endif

#if Rte_SysCon_Variant_CPLR_1

    TeOBCR_e_DoorLockSts rtb_AND_e_tmp;

#endif

#if Rte_SysCon_Variant_CPLR_1

    TeOBCR_e_DCChrgStat rtb_AND_e_tmp_0;

#endif

#if Rte_SysCon_Variant_CPLR_1

    boolean guard1 = false;

#endif

#if Rte_SysCon_Variant_CPLR_1

    boolean guard2 = false;

#endif

#if Rte_SysCon_Variant_CPLR_1

    boolean guard3 = false;

#endif

#if Rte_SysCon_Variant_CPLR_1

    boolean guard4 = false;

#endif

#if Rte_SysCon_Variant_CPLR_1

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
    /* Outputs for Function Call SubSystem: '<Root>/CPLR_MedTED' */
    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommBCM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommBCM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommBCM_Value
        (&CPLR_ac_DW.StatusByte_LostCommBCM);

    /* End of Outputs for SubSystem: '<Root>/CPLR_MedTED' */

    /* Inport: '<Root>/VeOBCR_b_EnblDsblProxPlg' */
    (void)Rte_Read_VeOBCR_b_EnblDsblProxPlg_Value(&rtb_LogicalOperator);

    /* Inport: '<Root>/VeVTLR_b_DschrgUnlckInlet' */
    (void)Rte_Read_VeVTLR_b_DschrgUnlckInlet_Value(&rtb_AND_as);

    /* Inport: '<Root>/VeIDCR_e_TxGBTMsgResponse' */
    (void)Rte_Read_VeIDCR_e_TxGBTMsgResponse_Value(&tmpRead_5);

    /* Inport: '<Root>/VeIDCR_e_Prox_GBT' */
    (void)Rte_Read_VeIDCR_e_Prox_GBT_Value(&tmpRead_4);

    /* Inport: '<Root>/VeCITR_d_ChrgPortHbridgeFlt' */
    (void)Rte_Read_VeCITR_d_ChrgPortHbridgeFlt_Value(&tmpRead_1);

    /* Inport: '<Root>/VeBPCR_e_HVBat_DC_CntctrStat' */
    (void)Rte_Read_VeBPCR_e_HVBat_DC_CntctrStat_Value(&tmpRead_0);

    /* Inport: '<Root>/VeBSWR_b_ChargePortLockDisable' */
    (void)Rte_Read_VeBSWR_b_ChargePortLockDisable_Value(&rtb_AND_e);

    /* Inport: '<Root>/VePLTR_b_InFieldMode' */
    (void)Rte_Read_VePLTR_b_InFieldMode_Value(&rtb_Comparison2);

    /* Inport: '<Root>/VeCANR_b_CBCLossComm_InKeyOff' */
    (void)Rte_Read_VeCANR_b_CBCLossComm_InKeyOff_VeCANR_b_CBCLossComm_InKeyOff
        (&rtb_AND_mz);

    /* Inport: '<Root>/VeHSWR_b_HoodOpen' */
    (void)Rte_Read_VeHSWR_b_HoodOpen_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<Root>/CPLR_MedTED' */
    /* SignalConversion generated from: '<S1>/VeCDMR_b_ChrgPortUL_FltDtct' incorporates:
     *  Inport: '<Root>/VeCDMR_b_ChrgPortUL_FltDtct'
     */
    (void)Rte_Read_VeCDMR_b_ChrgPortUL_FltDtct_Value
        (&rtb_TmpSignalConversionAtVeCDMR);

    /* SignalConversion generated from: '<S1>/VeCITR_b_DVC_ChrgPortRq' incorporates:
     *  Inport: '<Root>/VeCITR_b_DVC_ChrgPortRq'
     */
    (void)Rte_Read_VeCITR_b_DVC_ChrgPortRq_Value
        (&rtb_TmpSignalConversionAtVeCITR);

    /* SignalConversion generated from: '<S1>/VeIDCR_b_J1772_S2_Status' incorporates:
     *  Inport: '<Root>/VeIDCR_b_J1772_S2_Status'
     */
    (void)Rte_Read_VeIDCR_b_J1772_S2_Status_Value
        (&rtb_TmpSignalConversionAtVeIDCR);

    /* SignalConversion generated from: '<S1>/VeCITR_b_DoorLockLastElSts_Rcvd' incorporates:
     *  Inport: '<Root>/VeCITR_b_DoorLockLastElSts_Rcvd'
     */
    (void)Rte_Read_VeCITR_b_DoorLockLastElSts_Rcvd_Value
        (&rtb_TmpSignalConversionAtVeC_fw);

    /* SignalConversion generated from: '<S1>/VeCITR_b_Drv_Dr_Unlocking' incorporates:
     *  Inport: '<Root>/VeCITR_b_Drv_Dr_Unlocking'
     */
    (void)Rte_Read_VeCITR_b_Drv_Dr_Unlocking_Value
        (&rtb_TmpSignalConversionAtVeCI_g);

    /* SignalConversion generated from: '<S1>/VeCITR_b_ChrgPortSts' incorporates:
     *  Inport: '<Root>/VeCITR_b_ChrgPortSts'
     */
    (void)Rte_Read_VeCITR_b_ChrgPortSts_Value(&rtb_TmpSignalConversionAtVeCI_f);

    /* SignalConversion generated from: '<S1>/VeCITR_b_ChrgPortLockSts_FA' incorporates:
     *  Inport: '<Root>/VeCITR_b_ChrgPortLockSts_FA'
     */
    (void)Rte_Read_VeCITR_b_ChrgPortLockSts_FA_Value
        (&rtb_TmpSignalConversionAtVeCI_l);

    /* SignalConversion generated from: '<S1>/VeCITR_b_PortLockBCM_Cmd' incorporates:
     *  Inport: '<Root>/VeCITR_b_PortLockBCM_Cmd'
     */
    (void)Rte_Read_VeCITR_b_PortLockBCM_Cmd_Value
        (&rtb_TmpSignalConversionAtVeC_o5);

    /* SignalConversion generated from: '<S1>/VeCITR_b_ChrgPortLockSts' incorporates:
     *  Inport: '<Root>/VeCITR_b_ChrgPortLockSts'
     */
    (void)Rte_Read_VeCITR_b_ChrgPortLockSts_Value
        (&rtb_TmpSignalConversionAtVeCI_c);

    /* SignalConversion generated from: '<S1>/VeCITR_b_HBridge_ChrgPortLck_Cal' incorporates:
     *  Inport: '<Root>/VeCITR_b_HBridge_ChrgPortLck_Cal'
     */
    (void)Rte_Read_VeCITR_b_HBridge_ChrgPortLck_Cal_Value
        (&rtb_TmpSignalConversionAtVeCI_b);

    /* SignalConversion generated from: '<S1>/VeCITR_b_RmtChrgPortLkCmd_SgnlRcvd' incorporates:
     *  Inport: '<Root>/VeCITR_b_RmtChrgPortLkCmd_SgnlRcvd'
     */
    (void)Rte_Read_VeCITR_b_RmtChrgPortLkCmd_SgnlRcvd_Value
        (&rtb_TmpSignalConversionAtVeC_gz);

    /* SignalConversion generated from: '<S1>/VeOBCR_e_ChargingLevel' incorporates:
     *  Inport: '<Root>/VeOBCR_e_ChargingLevel'
     */
    (void)Rte_Read_VeOBCR_e_ChargingLevel_Value(&rtb_TmpSignalConversionAtVeO_k1);

    /* SignalConversion generated from: '<S1>/VeOBCR_e_ChargeType' incorporates:
     *  Inport: '<Root>/VeOBCR_e_ChargeType'
     */
    (void)Rte_Read_VeOBCR_e_ChargeType_Value(&rtb_TmpSignalConversionAtVeOB_i);

    /* SignalConversion generated from: '<S1>/VeOBCR_b_EnblDC_GBT' incorporates:
     *  Inport: '<Root>/VeOBCR_b_EnblDC_GBT'
     */
    (void)Rte_Read_VeOBCR_b_EnblDC_GBT_Value(&rtb_TmpSignalConversionAtVeOBCR);

    /* SignalConversion generated from: '<S1>/VeOBCR_b_SecureConnV2L' incorporates:
     *  Inport: '<Root>/VeOBCR_b_SecureConnV2L'
     */
    (void)Rte_Read_VeOBCR_b_SecureConnV2L_Value(&rtb_TmpSignalConversionAtVeOB_o);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CPLI'
     */
    /* Switch: '<S5>/Switch9' incorporates:
     *  Constant: '<S133>/Calib'
     */
    if (KeCPLR_b_HoodAjarOvrd)
    {
        /* Switch: '<S5>/Switch9' incorporates:
         *  Constant: '<S134>/Calib'
         */
        VeCPLR_b_HoodAjar = KeCPLR_b_HoodAjarVal;
    }
    else
    {
        /* Switch: '<S5>/Switch9' */
        VeCPLR_b_HoodAjar = tmpRead;
    }

    /* End of Switch: '<S5>/Switch9' */

    /* Switch: '<S5>/Switch11' incorporates:
     *  Constant: '<S125>/Calib'
     */
    if (KeCPLR_b_CBC_LOC_Ovrd)
    {
        /* Switch: '<S5>/Switch11' incorporates:
         *  Constant: '<S126>/Calib'
         */
        VeCPLR_b_CBCLossComm = KeCPLR_b_CBC_LOC_Val;
    }
    else
    {
        /* Switch: '<S5>/Switch11' */
        VeCPLR_b_CBCLossComm = rtb_AND_mz;
    }

    /* End of Switch: '<S5>/Switch11' */

    /* Switch: '<S5>/Switch12' incorporates:
     *  Constant: '<S135>/Calib'
     */
    if (KeCPLR_b_InFieldMdOvrd)
    {
        /* Switch: '<S5>/Switch12' incorporates:
         *  Constant: '<S136>/Calib'
         */
        VeCPLR_b_InFieldMode = KeCPLR_b_InFieldMdVal;
    }
    else
    {
        /* Switch: '<S5>/Switch12' */
        VeCPLR_b_InFieldMode = rtb_Comparison2;
    }

    /* End of Switch: '<S5>/Switch12' */

    /* Switch: '<S5>/Switch13' incorporates:
     *  Constant: '<S128>/Calib'
     */
    if (KeCPLR_b_ChrgPortLckDsblOvrd)
    {
        /* Switch: '<S5>/Switch13' incorporates:
         *  Constant: '<S129>/Calib'
         */
        VeCPLR_b_ChargePortLockDisable = KeCPLR_b_ChrgPortLckDsblVal;
    }
    else
    {
        /* Switch: '<S5>/Switch13' */
        VeCPLR_b_ChargePortLockDisable = rtb_AND_e;
    }

    /* End of Switch: '<S5>/Switch13' */

    /* Switch: '<S5>/Switch54' incorporates:
     *  Constant: '<S132>/Calib'
     */
    if (KeCPLR_b_HVBat_DC_CntctrStatOvrd)
    {
        /* Switch: '<S5>/Switch54' incorporates:
         *  Constant: '<S140>/Calib'
         */
        VeCPLR_e_HVBat_DC_CntctrStat = KeCPLR_e_HVBat_DC_CntctrStatOvrdVal;
    }
    else
    {
        /* Switch: '<S5>/Switch54' incorporates:
         *  Inport: '<Root>/VeBPCR_e_HVBat_DC_CntctrStat'
         */
        VeCPLR_e_HVBat_DC_CntctrStat = tmpRead_0;
    }

    /* End of Switch: '<S5>/Switch54' */

    /* Switch: '<S5>/Switch84' incorporates:
     *  Constant: '<S127>/Calib'
     */
    if (KeCPLR_b_ChrgPortHbridgeFltOvrd)
    {
        /* Switch: '<S5>/Switch84' incorporates:
         *  Constant: '<S139>/Calib'
         */
        VeCPLR_d_ChrgPortHbridgeFlt = KeCPLR_d_ChrgPortHbridgeFlt_Val;
    }
    else
    {
        /* Switch: '<S5>/Switch84' incorporates:
         *  DataTypeConversion: '<S1>/Data Type Conversion1'
         */
        VeCPLR_d_ChrgPortHbridgeFlt = (uint16)tmpRead_1;
    }

    /* End of Switch: '<S5>/Switch84' */

    /* Switch: '<S5>/Switch33' incorporates:
     *  Constant: '<S137>/Calib'
     */
    if (KeCPLR_b_Prox_GBT)
    {
        /* Switch: '<S5>/Switch33' incorporates:
         *  Constant: '<S141>/Calib'
         */
        VeCPLR_e_Prox_GBT = KeCPLR_e_Prox_GBT;
    }
    else
    {
        /* Switch: '<S5>/Switch33' incorporates:
         *  Inport: '<Root>/VeIDCR_e_Prox_GBT'
         */
        VeCPLR_e_Prox_GBT = tmpRead_4;
    }

    /* End of Switch: '<S5>/Switch33' */

    /* Switch: '<S5>/Switch34' incorporates:
     *  Constant: '<S138>/Calib'
     */
    if (KeCPLR_b_TxGBTMsgResponse)
    {
        /* Switch: '<S5>/Switch34' incorporates:
         *  Constant: '<S142>/Calib'
         */
        VeCPLR_e_TxGBTMsgResponse = KeCPLR_e_TxGBTMsgResponse;
    }
    else
    {
        /* Switch: '<S5>/Switch34' incorporates:
         *  Inport: '<Root>/VeIDCR_e_TxGBTMsgResponse'
         */
        VeCPLR_e_TxGBTMsgResponse = tmpRead_5;
    }

    /* End of Switch: '<S5>/Switch34' */

    /* Switch: '<S5>/Switch86' incorporates:
     *  Constant: '<S130>/Calib'
     */
    if (KeCPLR_b_DschrgUnlckInletOvrd)
    {
        /* Switch: '<S5>/Switch86' incorporates:
         *  Constant: '<S131>/Calib'
         */
        VeCPLR_b_DschrgUnlckInlet = KeCPLR_b_DschrgUnlckInletVal;
    }
    else
    {
        /* Switch: '<S5>/Switch86' */
        VeCPLR_b_DschrgUnlckInlet = rtb_AND_as;
    }

    /* End of Switch: '<S5>/Switch86' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CPLC'
     */
    /* Logic: '<S4>/Logical Operator' incorporates:
     *  Constant: '<S10>/Calib'
     */
    rtb_LogicalOperator = (rtb_LogicalOperator || (KeCPLR_b_Active));

    /* Outputs for Atomic SubSystem: '<S4>/Turn Off Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S11>/EdgeFalling' */
    /* Logic: '<S124>/AND' incorporates:
     *  Logic: '<S124>/OR1'
     *  UnitDelay: '<S124>/Unit Delay'
     */
    rtb_AND_as = ((!rtb_LogicalOperator) && (CPLR_ac_DW.UnitDelay_DSTATE_f));

    /* Update for UnitDelay: '<S124>/Unit Delay' */
    CPLR_ac_DW.UnitDelay_DSTATE_f = rtb_LogicalOperator;

    /* End of Outputs for SubSystem: '<S11>/EdgeFalling' */

    /* Switch: '<S11>/Switch' */
    if (rtb_AND_as)
    {
        /* Switch: '<S11>/Switch' incorporates:
         *  Constant: '<S9>/Calib'
         */
        rtb_Switch = KeCPLR_Cnt_UnplugDbncCnt;
    }
    else
    {
        /* Sum: '<S11>/Summation' incorporates:
         *  Constant: '<S11>/Constant Value'
         *  UnitDelay: '<S11>/Unit Delay'
         */
        tmp = ((sint32)CPLR_ac_DW.UnitDelay_DSTATE) - 1;
        if ((((sint32)CPLR_ac_DW.UnitDelay_DSTATE) - 1) < 0)
        {
            tmp = 0;
        }

        /* Switch: '<S11>/Switch' incorporates:
         *  Sum: '<S11>/Summation'
         */
        rtb_Switch = (uint16)tmp;
    }

    /* End of Switch: '<S11>/Switch' */

    /* Update for UnitDelay: '<S11>/Unit Delay' */
    CPLR_ac_DW.UnitDelay_DSTATE = rtb_Switch;

    /* If: '<S4>/If' incorporates:
     *  Constant: '<S11>/Constant Value2'
     *  Logic: '<S11>/AND'
     *  RelationalOperator: '<S11>/Greater  Than'
     */
    if (rtb_LogicalOperator || (((sint32)rtb_Switch) > 0))
    {
        /* Outputs for IfAction SubSystem: '<S4>/ChrgPort_Lock' incorporates:
         *  ActionPort: '<S8>/Action Port'
         */
        /* Logic: '<S8>/Logical7' incorporates:
         *  Constant: '<S24>/Constant'
         *  Constant: '<S25>/Constant'
         *  RelationalOperator: '<S8>/Comparison10'
         *  RelationalOperator: '<S8>/Comparison11'
         *  Switch: '<S5>/Switch33'
         */
        VeCPLR_b_DCGBTDetect = ((((uint32)VeCPLR_e_Prox_GBT) != CeIDCR_e_CC_OUT)
                                && (((uint32)VeCPLR_e_Prox_GBT) !=
            CeIDCR_e_CC_FAIL));

        /* Switch: '<S8>/Switch2' incorporates:
         *  Constant: '<S20>/Constant'
         *  RelationalOperator: '<S8>/Comparison8'
         *  SignalConversion generated from: '<S1>/VeOBCR_e_ChargeType'
         */
        if (rtb_TmpSignalConversionAtVeOBCR)
        {
            rtb_LogicalOperator = VeCPLR_b_DCGBTDetect;
        }
        else
        {
            rtb_LogicalOperator = (((uint32)rtb_TmpSignalConversionAtVeOB_i) !=
                                   CeOBCR_e_DC);
        }

        /* End of Switch: '<S8>/Switch2' */

        /* Logic: '<S8>/Logical' incorporates:
         *  Constant: '<S14>/Constant'
         *  Constant: '<S19>/Constant'
         *  Constant: '<S21>/Constant'
         *  Constant: '<S23>/Constant'
         *  Constant: '<S27>/Calib'
         *  Constant: '<S28>/Calib'
         *  Constant: '<S30>/Calib'
         *  Logic: '<S8>/Logical1'
         *  Logic: '<S8>/Logical10'
         *  Logic: '<S8>/Logical2'
         *  Logic: '<S8>/Logical3'
         *  Logic: '<S8>/Logical4'
         *  Logic: '<S8>/Logical6'
         *  Logic: '<S8>/Logical8'
         *  Logic: '<S8>/Logical9'
         *  RelationalOperator: '<S8>/Comparison1'
         *  RelationalOperator: '<S8>/Comparison12'
         *  RelationalOperator: '<S8>/Comparison5'
         *  RelationalOperator: '<S8>/Comparison9'
         */
        VeCPLR_b_ChrgPort_Active = ((((((((uint32)KeCPLR_e_InterMarketsSelection)
            == CeOBCR_e_China) || (((uint32)KeCPLR_e_InterMarketsSelection) ==
            CeOBCR_e_EuropeAfricaMiddleEast)) || ((((uint32)
            KeCPLR_e_InterMarketsSelection) == CeOBCR_e_Japan) &&
            (KeCPLR_b_EnblChrgPortJapan))) || ((((uint32)
            KeCPLR_e_InterMarketsSelection) == CeOBCR_e_NorthAmerica) &&
            (KeCPLR_b_EnblChrgPortNAFTA))) && ((!rtb_TmpSignalConversionAtVeOBCR)
            || (!VeCPLR_b_DCGBTDetect))) && (((VeCPLR_b_InFieldMode) ||
            (!VeCPLR_b_ChargePortLockDisable)) || (!rtb_LogicalOperator)));

        /* Switch: '<S8>/Switch1' incorporates:
         *  Constant: '<S29>/Calib'
         */
        if (KeCPLR_b_EnblPlugInLock)
        {
            /* Switch: '<S8>/Switch1' incorporates:
             *  Inport: '<Root>/VeOBCR_b_PlugInLock'
             */
            (void)Rte_Read_VeOBCR_b_PlugInLock_Value((&(VeCPLR_b_PluggedIn_Proc)));
        }
        else
        {
            /* Switch: '<S8>/Switch1' incorporates:
             *  Constant: '<S15>/Constant'
             *  Constant: '<S16>/Constant'
             *  Constant: '<S17>/Constant'
             *  Constant: '<S18>/Constant'
             *  Constant: '<S22>/Constant'
             *  Constant: '<S26>/Calib'
             *  Logic: '<S8>/Logical11'
             *  Logic: '<S8>/Logical12'
             *  RelationalOperator: '<S8>/Comparison13'
             *  RelationalOperator: '<S8>/Comparison14'
             *  RelationalOperator: '<S8>/Comparison15'
             *  RelationalOperator: '<S8>/Comparison16'
             *  RelationalOperator: '<S8>/Comparison17'
             */
            VeCPLR_b_PluggedIn_Proc = (((((CeOBCR_e_ChargingLvlAC1 == ((uint32)
                rtb_TmpSignalConversionAtVeO_k1)) || (CeOBCR_e_ChargingLvlAC2 ==
                ((uint32)rtb_TmpSignalConversionAtVeO_k1))) ||
                (CeOBCR_e_PlugInNotDetermined == ((uint32)
                rtb_TmpSignalConversionAtVeO_k1))) || (CeOBCR_e_ChargingLvlDC2 ==
                ((uint32)rtb_TmpSignalConversionAtVeO_k1))) ||
                ((CeOBCR_e_PartialPlugInPrkF == ((uint32)
                rtb_TmpSignalConversionAtVeO_k1)) &&
                 (KeCPLR_b_AddPPI1ToPlgIntoLck)));
        }

        /* End of Switch: '<S8>/Switch1' */

        /* Switch: '<S8>/Switch3' */
        rtb_TmpSignalConversionAtVeOBCR = (rtb_TmpSignalConversionAtVeOB_o ||
            (VeCPLR_b_PluggedIn_Proc));

        /* If: '<S8>/If' incorporates:
         *  Inport: '<Root>/VeCDMR_b_ChgPrtLckHiDTC'
         *  Inport: '<Root>/VeCDMR_b_ChgPrtLckLowDTC'
         *  Inport: '<Root>/VeCDMR_b_ChrgPortLK_FltDtct'
         *  Inport: '<Root>/VeCITR_b_RmtChrgPortLkCmdFA'
         *  Inport: '<Root>/VeCITR_e_CPIM_ChrgPortLock_FailSts'
         *  Inport: '<Root>/VeCITR_e_DVC_ChrgPort_IO'
         *  Inport: '<Root>/VeFCPR_b_FCPS_H2_RefuelSts'
         */
        if (VeCPLR_b_ChrgPort_Active)
        {
            /* Outputs for IfAction SubSystem: '<S8>/OtherMarkets' incorporates:
             *  ActionPort: '<S32>/Action Port'
             */
            /* UnitDelay: '<S38>/Unit Delay' */
            rtb_LogicalOperator = CPLR_ac_DW.UnitDelay_DSTATE_k;

            /* Outputs for Atomic SubSystem: '<S38>/EdgeRising4' */
            /* Logic: '<S78>/OR1' incorporates:
             *  UnitDelay: '<S78>/Unit Delay'
             */
            rtb_AND_as = !CPLR_ac_DW.UnitDelay_DSTATE_l;

            /* Update for UnitDelay: '<S78>/Unit Delay' */
            CPLR_ac_DW.UnitDelay_DSTATE_l = rtb_TmpSignalConversionAtVeOBCR;

            /* Outputs for Atomic SubSystem: '<S38>/EdgeFalling' */
            /* Logic: '<S78>/AND' incorporates:
             *  Chart: '<S38>/ChrgPortMech_Type2'
             *  Chart: '<S38>/Lock_Control'
             *  Logic: '<S45>/Logical9'
             *  Logic: '<S69>/OR1'
             */
            tmpRead = !rtb_TmpSignalConversionAtVeOBCR;

            /* End of Outputs for SubSystem: '<S38>/EdgeFalling' */

            /* Outputs for Atomic SubSystem: '<S38>/Signal Latch On With Reset' */
            /* Logic: '<S105>/OR1' incorporates:
             *  DataStoreWrite: '<S38>/Data Store Write'
             *  Logic: '<S105>/NOT'
             *  Logic: '<S105>/OR'
             *  Logic: '<S78>/AND'
             *  UnitDelay: '<S105>/Unit Delay'
             */
            CPLR_ac_DW.NeCPLR_b_ManualRelease = (rtb_LogicalOperator ||
                ((tmpRead || (!rtb_AND_as)) && (CPLR_ac_DW.UnitDelay_DSTATE_a2)));

            /* End of Outputs for SubSystem: '<S38>/EdgeRising4' */

            /* Update for UnitDelay: '<S105>/Unit Delay' incorporates:
             *  DataStoreWrite: '<S38>/Data Store Write'
             */
            CPLR_ac_DW.UnitDelay_DSTATE_a2 = CPLR_ac_DW.NeCPLR_b_ManualRelease;

            /* End of Outputs for SubSystem: '<S38>/Signal Latch On With Reset' */

            /* Outputs for Atomic SubSystem: '<S40>/Turn On Delay Sample' */
            /* Outputs for Atomic SubSystem: '<S120>/EdgeRising' */
            /* Logic: '<S122>/AND' incorporates:
             *  Logic: '<S122>/OR1'
             *  UnitDelay: '<S122>/Unit Delay'
             */
            rtb_AND_as = (rtb_TmpSignalConversionAtVeC_fw &&
                          (!CPLR_ac_DW.UnitDelay_DSTATE_g));

            /* Update for UnitDelay: '<S122>/Unit Delay' */
            CPLR_ac_DW.UnitDelay_DSTATE_g = rtb_TmpSignalConversionAtVeC_fw;

            /* End of Outputs for SubSystem: '<S120>/EdgeRising' */

            /* Switch: '<S120>/Switch1' incorporates:
             *  Constant: '<S117>/Calib'
             *  Constant: '<S120>/Constant Value'
             *  Logic: '<S120>/OR'
             *  Logic: '<S120>/OR1'
             *  MinMax: '<S120>/Minimum'
             *  Sum: '<S120>/Summation'
             *  UnitDelay: '<S120>/Unit Delay'
             */
            if ((!rtb_TmpSignalConversionAtVeC_fw) || rtb_AND_as)
            {
                /* Switch: '<S120>/Switch1' incorporates:
                 *  Constant: '<S120>/Constant Value1'
                 */
                rtb_Switch = 0U;
            }
            else if (KeCPLR_Cnt_Dbnc_DoorLockSts < ((uint16)(((uint32)
                        CPLR_ac_DW.UnitDelay_DSTATE_h) + 1U)))
            {
                /* MinMax: '<S120>/Minimum' incorporates:
                 *  Constant: '<S117>/Calib'
                 *  Switch: '<S120>/Switch1'
                 */
                rtb_Switch = KeCPLR_Cnt_Dbnc_DoorLockSts;
            }
            else
            {
                /* Switch: '<S120>/Switch1' incorporates:
                 *  Constant: '<S120>/Constant Value'
                 *  MinMax: '<S120>/Minimum'
                 *  Sum: '<S120>/Summation'
                 *  UnitDelay: '<S120>/Unit Delay'
                 */
                rtb_Switch = (uint16)(((uint32)CPLR_ac_DW.UnitDelay_DSTATE_h) +
                                      1U);
            }

            /* End of Switch: '<S120>/Switch1' */

            /* Update for UnitDelay: '<S120>/Unit Delay' */
            CPLR_ac_DW.UnitDelay_DSTATE_h = rtb_Switch;

            /* Switch: '<S40>/Switch' incorporates:
             *  Constant: '<S117>/Calib'
             *  Logic: '<S120>/AND'
             *  RelationalOperator: '<S120>/Greater  Than'
             */
            if (rtb_TmpSignalConversionAtVeC_fw && (rtb_Switch >=
                    KeCPLR_Cnt_Dbnc_DoorLockSts))
            {
                /* Switch: '<S40>/Switch' incorporates:
                 *  DataStoreWrite: '<S40>/Data Store Write'
                 *  Inport: '<Root>/VeCITR_e_DoorLockLastElSts'
                 */
                (void)Rte_Read_VeCITR_e_DoorLockLastElSts_Value
                    (&CPLR_ac_DW.NeCPLR_e_DoorLastSts);
            }

            /* End of Switch: '<S40>/Switch' */
            /* End of Outputs for SubSystem: '<S40>/Turn On Delay Sample' */

            /* RelationalOperator: '<S38>/Comparison1' incorporates:
             *  Chart: '<S38>/Lock_Control'
             *  DataStoreWrite: '<S40>/Data Store Write'
             *  RelationalOperator: '<S38>/Comparison2'
             *  Switch: '<S40>/Switch'
             */
            rtb_AND_e_tmp = CPLR_ac_DW.NeCPLR_e_DoorLastSts;

            /* RelationalOperator: '<S38>/Comparison1' incorporates:
             *  Constant: '<S85>/Constant'
             */
            rtb_AND_as = (((uint32)rtb_AND_e_tmp) == CeOBCR_e_DoorSNA);

            /* Outputs for Atomic SubSystem: '<S38>/EdgeRising12' */
            /* Logic: '<S72>/AND' incorporates:
             *  Logic: '<S72>/OR1'
             *  UnitDelay: '<S72>/Unit Delay'
             */
            rtb_TmpSignalConversionAtVeC_fw = (rtb_AND_as &&
                (!CPLR_ac_DW.UnitDelay_DSTATE_gw));

            /* Update for UnitDelay: '<S72>/Unit Delay' */
            CPLR_ac_DW.UnitDelay_DSTATE_gw = rtb_AND_as;

            /* End of Outputs for SubSystem: '<S38>/EdgeRising12' */

            /* RelationalOperator: '<S38>/Comparison2' incorporates:
             *  Constant: '<S83>/Constant'
             */
            rtb_Comparison2 = (((uint32)rtb_AND_e_tmp) == CeOBCR_e_LKD);

            /* Outputs for Atomic SubSystem: '<S38>/EdgeFalling2' */
            /* Logic: '<S70>/AND' incorporates:
             *  Logic: '<S70>/OR1'
             *  UnitDelay: '<S70>/Unit Delay'
             */
            rtb_AND_as = ((!rtb_Comparison2) && (CPLR_ac_DW.UnitDelay_DSTATE_i));

            /* Update for UnitDelay: '<S70>/Unit Delay' */
            CPLR_ac_DW.UnitDelay_DSTATE_i = rtb_Comparison2;

            /* End of Outputs for SubSystem: '<S38>/EdgeFalling2' */

            /* Outputs for Atomic SubSystem: '<S38>/EdgeRising13' */
            /* Logic: '<S73>/AND' incorporates:
             *  Logic: '<S73>/OR1'
             *  UnitDelay: '<S73>/Unit Delay'
             */
            rtb_AND_e = (rtb_Comparison2 && (!CPLR_ac_DW.UnitDelay_DSTATE_av));

            /* Update for UnitDelay: '<S73>/Unit Delay' */
            CPLR_ac_DW.UnitDelay_DSTATE_av = rtb_Comparison2;

            /* End of Outputs for SubSystem: '<S38>/EdgeRising13' */

            /* Outputs for Atomic SubSystem: '<S40>/Turn On Delay Sample1' */
            /* Outputs for Atomic SubSystem: '<S121>/EdgeRising' */
            /* Logic: '<S123>/AND' incorporates:
             *  Logic: '<S123>/OR1'
             *  UnitDelay: '<S123>/Unit Delay'
             */
            rtb_Comparison2 = (rtb_TmpSignalConversionAtVeC_gz &&
                               (!CPLR_ac_DW.UnitDelay_DSTATE_d));

            /* Update for UnitDelay: '<S123>/Unit Delay' */
            CPLR_ac_DW.UnitDelay_DSTATE_d = rtb_TmpSignalConversionAtVeC_gz;

            /* End of Outputs for SubSystem: '<S121>/EdgeRising' */

            /* Switch: '<S121>/Switch1' incorporates:
             *  Constant: '<S118>/Calib'
             *  Constant: '<S121>/Constant Value'
             *  Logic: '<S121>/OR'
             *  Logic: '<S121>/OR1'
             *  MinMax: '<S121>/Minimum'
             *  Sum: '<S121>/Summation'
             *  UnitDelay: '<S121>/Unit Delay'
             */
            if ((!rtb_TmpSignalConversionAtVeC_gz) || rtb_Comparison2)
            {
                /* Switch: '<S121>/Switch1' incorporates:
                 *  Constant: '<S121>/Constant Value1'
                 */
                rtb_Switch = 0U;
            }
            else if (KeCPLR_Cnt_Dbnc_RemoteLockSts < ((uint16)(((uint32)
                        CPLR_ac_DW.UnitDelay_DSTATE_m) + 1U)))
            {
                /* MinMax: '<S121>/Minimum' incorporates:
                 *  Constant: '<S118>/Calib'
                 *  Switch: '<S121>/Switch1'
                 */
                rtb_Switch = KeCPLR_Cnt_Dbnc_RemoteLockSts;
            }
            else
            {
                /* Switch: '<S121>/Switch1' incorporates:
                 *  Constant: '<S121>/Constant Value'
                 *  MinMax: '<S121>/Minimum'
                 *  Sum: '<S121>/Summation'
                 *  UnitDelay: '<S121>/Unit Delay'
                 */
                rtb_Switch = (uint16)(((uint32)CPLR_ac_DW.UnitDelay_DSTATE_m) +
                                      1U);
            }

            /* End of Switch: '<S121>/Switch1' */

            /* Update for UnitDelay: '<S121>/Unit Delay' */
            CPLR_ac_DW.UnitDelay_DSTATE_m = rtb_Switch;

            /* Switch: '<S40>/Switch1' incorporates:
             *  Constant: '<S118>/Calib'
             *  Logic: '<S121>/AND'
             *  RelationalOperator: '<S121>/Greater  Than'
             */
            if (rtb_TmpSignalConversionAtVeC_gz && (rtb_Switch >=
                    KeCPLR_Cnt_Dbnc_RemoteLockSts))
            {
                /* Switch: '<S40>/Switch1' incorporates:
                 *  DataStoreWrite: '<S40>/Data Store Write1'
                 *  Inport: '<Root>/VeCITR_e_RmtChrgPortLkCmd'
                 */
                (void)Rte_Read_VeCITR_e_RmtChrgPortLkCmd_Value
                    (&CPLR_ac_DW.NeCPLR_e_RemoteLockLastSts);
            }

            /* End of Switch: '<S40>/Switch1' */
            /* End of Outputs for SubSystem: '<S40>/Turn On Delay Sample1' */

            /* Switch: '<S38>/Switch6' incorporates:
             *  Constant: '<S94>/Calib'
             */
            if (KeCPLR_b_ignoreRmtLKD)
            {
                /* Switch: '<S38>/Switch6' incorporates:
                 *  Constant: '<S38>/FALSE Constant4'
                 */
                rtb_Comparison2 = false;
            }
            else
            {
                /* Switch: '<S38>/Switch6' incorporates:
                 *  Constant: '<S88>/Constant'
                 *  DataStoreWrite: '<S40>/Data Store Write1'
                 *  RelationalOperator: '<S38>/Comparison9'
                 *  Switch: '<S40>/Switch1'
                 */
                rtb_Comparison2 = (((uint32)
                                    CPLR_ac_DW.NeCPLR_e_RemoteLockLastSts) ==
                                   CeCITR_e_Lock_Request);
            }

            /* End of Switch: '<S38>/Switch6' */

            /* Outputs for Atomic SubSystem: '<S38>/EdgeRising14' */
            /* Logic: '<S74>/AND' incorporates:
             *  Logic: '<S74>/OR1'
             *  UnitDelay: '<S74>/Unit Delay'
             */
            rtb_TmpSignalConversionAtVeC_gz = (rtb_Comparison2 &&
                (!CPLR_ac_DW.UnitDelay_DSTATE_bx));

            /* Update for UnitDelay: '<S74>/Unit Delay' */
            CPLR_ac_DW.UnitDelay_DSTATE_bx = rtb_Comparison2;

            /* End of Outputs for SubSystem: '<S38>/EdgeRising14' */

            /* Switch: '<S38>/Switch5' incorporates:
             *  Constant: '<S95>/Calib'
             */
            if (KeCPLR_b_ignoreRmtUNLK)
            {
                /* Switch: '<S38>/Switch5' incorporates:
                 *  Constant: '<S38>/FALSE Constant3'
                 */
                rtb_Comparison2 = false;
            }
            else
            {
                /* Switch: '<S38>/Switch5' incorporates:
                 *  Constant: '<S87>/Constant'
                 *  DataStoreWrite: '<S40>/Data Store Write1'
                 *  RelationalOperator: '<S38>/Comparison10'
                 *  Switch: '<S40>/Switch1'
                 */
                rtb_Comparison2 = (((uint32)
                                    CPLR_ac_DW.NeCPLR_e_RemoteLockLastSts) ==
                                   CeCITR_e_Unlock_Request);
            }

            /* End of Switch: '<S38>/Switch5' */

            /* Outputs for Atomic SubSystem: '<S38>/EdgeRising15' */
            /* Logic: '<S75>/AND' incorporates:
             *  Logic: '<S75>/OR1'
             *  UnitDelay: '<S75>/Unit Delay'
             */
            rtb_AND_mz = (rtb_Comparison2 && (!CPLR_ac_DW.UnitDelay_DSTATE_pv));

            /* Update for UnitDelay: '<S75>/Unit Delay' */
            CPLR_ac_DW.UnitDelay_DSTATE_pv = rtb_Comparison2;

            /* End of Outputs for SubSystem: '<S38>/EdgeRising15' */

            /* Chart: '<S38>/Pulse Logic' */
            /* Gateway: CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF/Pulse Logic */
            /* During: CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF/Pulse Logic */
            if (((uint32)CPLR_ac_DW.is_active_c1_CPLR_ac) == 0U)
            {
                /* Entry: CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF/Pulse Logic */
                CPLR_ac_DW.is_active_c1_CPLR_ac = 1U;

                /* Entry Internal: CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF/Pulse Logic */
                /* Transition: '<S98>:32' */
                CPLR_ac_DW.is_c1_CPLR_ac = CPLR_ac_IN_Init_State;
            }
            else
            {
                switch (CPLR_ac_DW.is_c1_CPLR_ac)
                {
                  case CPLR_ac_IN_Init_State:
                    /* During 'Init_State': '<S98>:29' */
                    if (rtb_AND_e || rtb_TmpSignalConversionAtVeC_gz)
                    {
                        /* Transition: '<S98>:30' */
                        CPLR_ac_DW.is_c1_CPLR_ac = CPLR_ac_IN_Lock;

                        /* Entry 'Lock': '<S98>:3' */
                        CPLR_ac_B.ChrgPort_Lock_Req = true;
                    }
                    else
                    {
                        if ((rtb_AND_as && (!rtb_TmpSignalConversionAtVeC_fw)) ||
                            rtb_AND_mz)
                        {
                            /* Transition: '<S98>:31' */
                            CPLR_ac_DW.is_c1_CPLR_ac = CPLR_ac_IN_Unlock;

                            /* Entry 'Unlock': '<S98>:18' */
                            CPLR_ac_B.ChrgPort_Unlock_Req = true;
                        }
                    }
                    break;

                  case CPLR_ac_IN_Lock:
                    /* During 'Lock': '<S98>:3' */
                    if ((rtb_AND_as && (!rtb_TmpSignalConversionAtVeC_fw)) ||
                            rtb_AND_mz)
                    {
                        /* Transition: '<S98>:21' */
                        CPLR_ac_DW.is_c1_CPLR_ac = CPLR_ac_IN_Unlock;

                        /* Entry 'Unlock': '<S98>:18' */
                        CPLR_ac_B.ChrgPort_Unlock_Req = true;
                    }
                    else
                    {
                        CPLR_ac_B.ChrgPort_Unlock_Req = false;
                    }
                    break;

                  default:
                    /* During 'Unlock': '<S98>:18' */
                    if (rtb_AND_e || rtb_TmpSignalConversionAtVeC_gz)
                    {
                        /* Transition: '<S98>:26' */
                        CPLR_ac_DW.is_c1_CPLR_ac = CPLR_ac_IN_Lock;

                        /* Entry 'Lock': '<S98>:3' */
                        CPLR_ac_B.ChrgPort_Lock_Req = true;
                    }
                    else
                    {
                        CPLR_ac_B.ChrgPort_Lock_Req = false;
                    }
                    break;
                }
            }

            /* End of Chart: '<S38>/Pulse Logic' */
            /* End of Outputs for SubSystem: '<S8>/OtherMarkets' */
            (void)Rte_Read_VeFCPR_b_FCPS_H2_RefuelSts_Value(&rtb_Logical5);

            /* Outputs for IfAction SubSystem: '<S8>/OtherMarkets' incorporates:
             *  ActionPort: '<S32>/Action Port'
             */
            /* RelationalOperator: '<S38>/Comparison4' incorporates:
             *  Constant: '<S82>/Constant'
             *  Inport: '<Root>/VeFCPR_b_FCPS_H2_RefuelSts'
             *  Switch: '<S5>/Switch54'
             */
            rtb_TmpSignalConversionAtVeC_gz = (((uint32)
                VeCPLR_e_HVBat_DC_CntctrStat) == CeBPCR_e_DCCntctrSts_Open);

            /* Outputs for Atomic SubSystem: '<S38>/EdgeRising5' */
            /* Logic: '<S79>/AND' incorporates:
             *  Logic: '<S79>/OR1'
             *  UnitDelay: '<S79>/Unit Delay'
             */
            rtb_TmpSignalConversionAtVeC_fw = (rtb_TmpSignalConversionAtVeOBCR &&
                (!CPLR_ac_DW.UnitDelay_DSTATE_j));

            /* Update for UnitDelay: '<S79>/Unit Delay' */
            CPLR_ac_DW.UnitDelay_DSTATE_j = rtb_TmpSignalConversionAtVeOBCR;

            /* End of Outputs for SubSystem: '<S38>/EdgeRising5' */

            /* RelationalOperator: '<S38>/Comparison3' incorporates:
             *  RelationalOperator: '<S38>/Comparison5'
             *  UnitDelay: '<S8>/Unit Delay2'
             */
            rtb_AND_e_tmp_0 = CPLR_ac_DW.UnitDelay2_DSTATE_p;

            /* Logic: '<S38>/Logical4' incorporates:
             *  Constant: '<S84>/Constant'
             *  Constant: '<S86>/Constant'
             *  RelationalOperator: '<S38>/Comparison3'
             *  RelationalOperator: '<S38>/Comparison5'
             */
            rtb_AND_as = ((((uint32)rtb_AND_e_tmp_0) != CeOBCR_e_DCinit) &&
                          (((uint32)rtb_AND_e_tmp_0) != CeOBCR_e_DCShtDwnCmplt));

            /* Logic: '<S38>/Logical5' incorporates:
             *  Constant: '<S92>/Calib'
             */
            rtb_Logical5 = (rtb_Logical5 && (KeCPLR_b_H2RefuelingEnbl));

            /* Chart: '<S38>/ChrgPortMech_Type2' incorporates:
             *  Constant: '<S89>/Calib'
             *  DataStoreRead: '<S38>/Data Store Read'
             *  UnitDelay: '<S38>/Unit Delay1'
             */
            /* Gateway: CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF/ChrgPortMech_Type2 */
            /* During: CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF/ChrgPortMech_Type2 */
            if (((uint32)CPLR_ac_DW.is_active_c6_CPLR_ac) == 0U)
            {
                /* Entry: CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF/ChrgPortMech_Type2 */
                CPLR_ac_DW.is_active_c6_CPLR_ac = 1U;

                /* Entry Internal: CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF/ChrgPortMech_Type2 */
                /* Transition: '<S68>:33' */
                CPLR_ac_DW.is_c6_CPLR_ac = CPLR_ac_IN_Init_State;

                /* DataTypeConversion: '<S81>/DataTypeConversion' */
                /* Entry 'Init_State': '<S68>:48' */
                VeCPLR_e_ChrgPort_Type2 = CeOBCR_e_PortNoRequest;
                CPLR_ac_B.Flag_m = true;
                CPLR_ac_B.VeCPLR_t_StateTimerCP = 0.0F;
            }
            else
            {
                guard1 = false;
                guard2 = false;
                switch (CPLR_ac_DW.is_c6_CPLR_ac)
                {
                  case CPLR_ac_IN_Init_State:
                    /* DataTypeConversion: '<S81>/DataTypeConversion' */
                    VeCPLR_e_ChrgPort_Type2 = CeOBCR_e_PortNoRequest;

                    /* During 'Init_State': '<S68>:48' */
                    if (rtb_TmpSignalConversionAtVeC_fw)
                    {
                        /* Transition: '<S68>:118' */
                        CPLR_ac_DW.is_c6_CPLR_ac = CPLR_ac_IN_Init_State;

                        /* DataTypeConversion: '<S81>/DataTypeConversion' */
                        /* Entry 'Init_State': '<S68>:48' */
                        VeCPLR_e_ChrgPort_Type2 = CeOBCR_e_PortNoRequest;
                        CPLR_ac_B.Flag_m = true;
                        CPLR_ac_B.VeCPLR_t_StateTimerCP = 0.0F;
                    }
                    else
                    {
                        rtb_TmpSignalConversionAtVeC_fw =
                            (rtb_TmpSignalConversionAtVeOBCR &&
                             (!CPLR_ac_DW.NeCPLR_b_ManualRelease));
                        if ((((rtb_TmpSignalConversionAtVeC_fw && (((uint32)
                                 rtb_TmpSignalConversionAtVeOB_i) == CeOBCR_e_DC))
                              && (rtb_AND_as || (CPLR_ac_B.ChrgPort_Lock_Req))) &&
                             (CPLR_ac_B.VeCPLR_t_StateTimerCP >
                                KeCPLR_t_BEVLockDelay)) ||
                                ((((rtb_TmpSignalConversionAtVeC_fw && (((uint32)
                                  rtb_TmpSignalConversionAtVeOB_i) ==
                                 CeOBCR_e_AC)) && ((CPLR_ac_B.ChrgPort_Lock_Req)
                                || (((uint32)CPLR_ac_DW.UnitDelay1_DSTATE_j) ==
                                    CeOBCR_e_Charging))) &&
                                  (CPLR_ac_B.VeCPLR_t_StateTimerCP >
                                   KeCPLR_t_AC_BEVLockDly)) && (!rtb_Logical5)))
                        {
                            /* Transition: '<S68>:65' */
                            /* Transition: '<S68>:71' */
                            /* Transition: '<S68>:124' */
                            /* Transition: '<S68>:125' */
                            CPLR_ac_DW.is_c6_CPLR_ac = CPLR_ac_IN_Lock;

                            /* DataTypeConversion: '<S81>/DataTypeConversion' */
                            /* Entry 'Lock': '<S68>:6' */
                            VeCPLR_e_ChrgPort_Type2 = CeOBCR_e_LockInlet;
                            CPLR_ac_B.VeCPLR_t_StateTimerCP = 0.0F;
                        }
                        else if (rtb_TmpSignalConversionAtVeOBCR &&
                                 (CPLR_ac_B.VeCPLR_t_StateTimerCP >
                                  KeCPLR_t_BEVLockDelay))
                        {
                            /* Transition: '<S68>:68' */
                            /* Transition: '<S68>:72' */
                            CPLR_ac_DW.is_c6_CPLR_ac = CPLR_ac_IN_UnLock;

                            /* DataTypeConversion: '<S81>/DataTypeConversion' */
                            /* Entry 'UnLock': '<S68>:1' */
                            VeCPLR_e_ChrgPort_Type2 = CeOBCR_e_UnlockInlet;
                            CPLR_ac_B.VeCPLR_t_StateTimerCP = 0.0F;
                        }
                        else
                        {
                            CPLR_ac_B.VeCPLR_t_StateTimerCP +=
                                HeCPLR_t_PI_ExecutionRate;
                        }
                    }
                    break;

                  case CPLR_ac_IN_Lock:
                    /* DataTypeConversion: '<S81>/DataTypeConversion' */
                    VeCPLR_e_ChrgPort_Type2 = CeOBCR_e_LockInlet;

                    /* During 'Lock': '<S68>:6' */
                    rtb_TmpSignalConversionAtVeC_fw =
                        !rtb_TmpSignalConversionAtVeIDCR;
                    if (((((rtb_TmpSignalConversionAtVeOBCR &&
                            (!CPLR_ac_B.Flag_m)) &&
                            (CPLR_ac_DW.NeCPLR_b_ManualRelease)) &&
                            rtb_TmpSignalConversionAtVeC_fw) &&
                            rtb_TmpSignalConversionAtVeC_gz) &&
                            (CPLR_ac_B.VeCPLR_t_StateTimerCP >
                             KeCPLR_t_BEVLockDelay))
                    {
                        /* Transition: '<S68>:107' */
                        guard2 = true;
                    }
                    else if ((CPLR_ac_DW.NeCPLR_b_ManualRelease) &&
                             (CPLR_ac_B.VeCPLR_t_StateTimerCP >
                              KeCPLR_t_BEVLockDelay))
                    {
                        /* Transition: '<S68>:89' */
                        CPLR_ac_B.Flag_m = false;
                        CPLR_ac_DW.is_c6_CPLR_ac = CPLR_ac_IN_Lock;

                        /* DataTypeConversion: '<S81>/DataTypeConversion' */
                        /* Entry 'Lock': '<S68>:6' */
                        VeCPLR_e_ChrgPort_Type2 = CeOBCR_e_LockInlet;
                        CPLR_ac_B.VeCPLR_t_StateTimerCP = 0.0F;
                    }
                    else if (tmpRead || (((((rtb_TmpSignalConversionAtVeOBCR &&
                                             (CPLR_ac_B.ChrgPort_Unlock_Req)) &&
                                            ((!rtb_AND_as) || (((uint32)
                                    rtb_TmpSignalConversionAtVeOB_i) ==
                                   CeOBCR_e_AC))) &&
                                           rtb_TmpSignalConversionAtVeC_fw) &&
                                          rtb_TmpSignalConversionAtVeC_gz) &&
                                         (CPLR_ac_B.VeCPLR_t_StateTimerCP >
                                          KeCPLR_t_S2Timer)))
                    {
                        /* Transition: '<S68>:100' */
                        /* Transition: '<S68>:66' */
                        guard2 = true;
                    }
                    else
                    {
                        CPLR_ac_B.VeCPLR_t_StateTimerCP +=
                            HeCPLR_t_PI_ExecutionRate;
                    }
                    break;

                  default:
                    /* DataTypeConversion: '<S81>/DataTypeConversion' */
                    VeCPLR_e_ChrgPort_Type2 = CeOBCR_e_UnlockInlet;

                    /* During 'UnLock': '<S68>:1' */
                    if (rtb_TmpSignalConversionAtVeC_fw)
                    {
                        /* Transition: '<S68>:119' */
                        CPLR_ac_B.Flag_m = true;
                        guard1 = true;
                    }
                    else
                    {
                        rtb_TmpSignalConversionAtVeC_fw =
                            !CPLR_ac_DW.NeCPLR_b_ManualRelease;
                        rtb_Logical5 = !rtb_Logical5;
                        rtb_AND_e = ((rtb_TmpSignalConversionAtVeOBCR &&
                                      (CPLR_ac_B.Flag_m)) &&
                                     rtb_TmpSignalConversionAtVeC_fw);
                        if (((((((rtb_TmpSignalConversionAtVeOBCR &&
                                  rtb_TmpSignalConversionAtVeC_fw) &&
                                 (CPLR_ac_B.Flag_m)) &&
                                (CPLR_ac_B.ChrgPort_Lock_Req)) &&
                                (CPLR_ac_B.VeCPLR_t_StateTimerCP >
                                 KeCPLR_t_BEVLockDelay)) && rtb_Logical5) ||
                                ((((rtb_AND_e && (((uint32)
                                                   rtb_TmpSignalConversionAtVeOB_i)
                                  == CeOBCR_e_AC)) && (((uint32)
                                  CPLR_ac_DW.UnitDelay1_DSTATE_j) ==
                                 CeOBCR_e_Charging)) &&
                                  (CPLR_ac_B.VeCPLR_t_StateTimerCP >
                                   KeCPLR_t_AC_BEVLockDly)) && rtb_Logical5)) ||
                            (((rtb_AND_e && rtb_AND_as) && (((uint32)
                                rtb_TmpSignalConversionAtVeOB_i) == CeOBCR_e_DC))
                             && (CPLR_ac_B.VeCPLR_t_StateTimerCP >
                                 KeCPLR_t_BEVLockDelay)))
                        {
                            /* Transition: '<S68>:14' */
                            /* Transition: '<S68>:127' */
                            /* Transition: '<S68>:67' */
                            CPLR_ac_DW.is_c6_CPLR_ac = CPLR_ac_IN_Lock;

                            /* DataTypeConversion: '<S81>/DataTypeConversion' */
                            /* Entry 'Lock': '<S68>:6' */
                            VeCPLR_e_ChrgPort_Type2 = CeOBCR_e_LockInlet;
                            CPLR_ac_B.VeCPLR_t_StateTimerCP = 0.0F;
                        }
                        else if (rtb_TmpSignalConversionAtVeC_fw &&
                                 (!CPLR_ac_B.Flag_m))
                        {
                            /* Transition: '<S68>:110' */
                            CPLR_ac_B.Flag_m = true;
                            guard1 = true;
                        }
                        else
                        {
                            CPLR_ac_B.VeCPLR_t_StateTimerCP +=
                                HeCPLR_t_PI_ExecutionRate;
                        }
                    }
                    break;
                }

                if (guard2)
                {
                    CPLR_ac_DW.is_c6_CPLR_ac = CPLR_ac_IN_UnLock;

                    /* DataTypeConversion: '<S81>/DataTypeConversion' */
                    /* Entry 'UnLock': '<S68>:1' */
                    VeCPLR_e_ChrgPort_Type2 = CeOBCR_e_UnlockInlet;
                    CPLR_ac_B.VeCPLR_t_StateTimerCP = 0.0F;
                }

                if (guard1)
                {
                    CPLR_ac_DW.is_c6_CPLR_ac = CPLR_ac_IN_UnLock;

                    /* DataTypeConversion: '<S81>/DataTypeConversion' */
                    /* Entry 'UnLock': '<S68>:1' */
                    VeCPLR_e_ChrgPort_Type2 = CeOBCR_e_UnlockInlet;
                    CPLR_ac_B.VeCPLR_t_StateTimerCP = 0.0F;
                }
            }

            /* Outputs for Atomic SubSystem: '<S38>/EdgeFalling' */
            /* Logic: '<S69>/AND' incorporates:
             *  UnitDelay: '<S69>/Unit Delay'
             */
            rtb_Logical5 = (tmpRead && (CPLR_ac_DW.UnitDelay_DSTATE_fu));

            /* Update for UnitDelay: '<S69>/Unit Delay' */
            CPLR_ac_DW.UnitDelay_DSTATE_fu = rtb_TmpSignalConversionAtVeOBCR;

            /* End of Outputs for SubSystem: '<S38>/EdgeFalling' */

            /* Outputs for Atomic SubSystem: '<S38>/EdgeRising1' */
            /* Logic: '<S71>/AND' incorporates:
             *  Logic: '<S71>/OR1'
             *  UnitDelay: '<S71>/Unit Delay'
             */
            rtb_TmpSignalConversionAtVeC_fw = (rtb_TmpSignalConversionAtVeOBCR &&
                (!CPLR_ac_DW.UnitDelay_DSTATE_py));

            /* Update for UnitDelay: '<S71>/Unit Delay' */
            CPLR_ac_DW.UnitDelay_DSTATE_py = rtb_TmpSignalConversionAtVeOBCR;

            /* End of Outputs for SubSystem: '<S38>/EdgeRising1' */

            /* Outputs for Atomic SubSystem: '<S38>/EdgeRising2' */
            /* Logic: '<S76>/AND' incorporates:
             *  Logic: '<S76>/OR1'
             *  UnitDelay: '<S76>/Unit Delay'
             */
            rtb_AND_as = (rtb_TmpSignalConversionAtVeCI_g &&
                          (!CPLR_ac_DW.UnitDelay_DSTATE_g0));

            /* Update for UnitDelay: '<S76>/Unit Delay' */
            CPLR_ac_DW.UnitDelay_DSTATE_g0 = rtb_TmpSignalConversionAtVeCI_g;

            /* End of Outputs for SubSystem: '<S38>/EdgeRising2' */

            /* Outputs for Atomic SubSystem: '<S38>/EdgeRising3' */
            /* Logic: '<S77>/AND' incorporates:
             *  Logic: '<S77>/OR1'
             *  UnitDelay: '<S77>/Unit Delay'
             */
            rtb_AND_e = (rtb_LogicalOperator && (!CPLR_ac_DW.UnitDelay_DSTATE_ag));

            /* Update for UnitDelay: '<S77>/Unit Delay' */
            CPLR_ac_DW.UnitDelay_DSTATE_ag = rtb_LogicalOperator;

            /* End of Outputs for SubSystem: '<S38>/EdgeRising3' */

            /* Gain: '<S100>/Gain' incorporates:
             *  Constant: '<S93>/Calib'
             *  Logic: '<S38>/Logical2'
             */
            rtb_LogicalOperator = ((KeCPLR_b_HdAjarUnlockInlet) &&
                                   (VeCPLR_b_HoodAjar));

            /* Outputs for Atomic SubSystem: '<S38>/Turn Off Delay Sample' */
            /* Outputs for Atomic SubSystem: '<S106>/EdgeFalling1' */
            /* Logic: '<S107>/AND' incorporates:
             *  Logic: '<S107>/OR1'
             *  UnitDelay: '<S107>/Unit Delay'
             */
            rtb_Comparison2 = ((!rtb_TmpSignalConversionAtVeCI_g) &&
                               (CPLR_ac_DW.UnitDelay_DSTATE_fo));

            /* Update for UnitDelay: '<S107>/Unit Delay' */
            CPLR_ac_DW.UnitDelay_DSTATE_fo = rtb_TmpSignalConversionAtVeCI_g;

            /* End of Outputs for SubSystem: '<S106>/EdgeFalling1' */

            /* Switch: '<S106>/Switch' */
            if (rtb_Comparison2)
            {
                /* Switch: '<S106>/Switch' incorporates:
                 *  Constant: '<S90>/Calib'
                 */
                rtb_Switch = KeCPLR_Cnt_DelayDoorUnlkPulse;
            }
            else
            {
                /* Sum: '<S106>/Summation' incorporates:
                 *  Constant: '<S106>/Constant Value'
                 *  UnitDelay: '<S106>/Unit Delay'
                 */
                tmp = ((sint32)CPLR_ac_DW.UnitDelay_DSTATE_c) - 1;
                if ((((sint32)CPLR_ac_DW.UnitDelay_DSTATE_c) - 1) < 0)
                {
                    tmp = 0;
                }

                /* Switch: '<S106>/Switch' incorporates:
                 *  Sum: '<S106>/Summation'
                 */
                rtb_Switch = (uint16)tmp;
            }

            /* End of Switch: '<S106>/Switch' */

            /* Update for UnitDelay: '<S106>/Unit Delay' */
            CPLR_ac_DW.UnitDelay_DSTATE_c = rtb_Switch;

            /* End of Outputs for SubSystem: '<S38>/Turn Off Delay Sample' */

            /* Chart: '<S38>/Lock_Control' incorporates:
             *  Constant: '<S89>/Calib'
             */
            /* Gateway: CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF/Lock_Control */
            /* During: CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF/Lock_Control */
            if (((uint32)CPLR_ac_DW.is_active_c49_CPLR_ac) == 0U)
            {
                /* Entry: CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF/Lock_Control */
                CPLR_ac_DW.is_active_c49_CPLR_ac = 1U;

                /* Entry Internal: CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF/Lock_Control */
                /* Transition: '<S97>:33' */
                CPLR_ac_B.Flag = true;
                CPLR_ac_B.BCI = false;
                CPLR_ac_DW.is_c49_CPLR_ac = CPLR_ac_IN_Init_State;

                /* DataTypeConversion: '<S80>/DataTypeConversion' */
                /* Entry 'Init_State': '<S97>:48' */
                VeCPLR_e_ChrgPort_Type1 = CeOBCR_e_PortNoRequest;
                CPLR_ac_B.VeCPLR_t_StateTimer1 = 0.0F;
            }
            else
            {
                guard1 = false;
                guard2 = false;
                guard3 = false;
                guard4 = false;
                switch (CPLR_ac_DW.is_c49_CPLR_ac)
                {
                  case CPLR_ac_IN_Init_State:
                    /* DataTypeConversion: '<S80>/DataTypeConversion' */
                    VeCPLR_e_ChrgPort_Type1 = CeOBCR_e_PortNoRequest;

                    /* During 'Init_State': '<S97>:48' */
                    if (CPLR_ac_B.VeCPLR_t_StateTimer1 >
                            KeCPLR_t_ChrgPort_InitDbnc)
                    {
                        /* Transition: '<S97>:54' */
                        if (rtb_TmpSignalConversionAtVeOBCR &&
                                (!rtb_LogicalOperator))
                        {
                            /* Transition: '<S97>:32' */
                            CPLR_ac_DW.is_c49_CPLR_ac = CPLR_ac_IN_Lock;

                            /* DataTypeConversion: '<S80>/DataTypeConversion' */
                            /* Entry 'Lock': '<S97>:6' */
                            VeCPLR_e_ChrgPort_Type1 = CeOBCR_e_LockInlet;
                        }
                        else
                        {
                            /* Transition: '<S97>:31' */
                            guard3 = true;
                        }
                    }
                    else if (rtb_TmpSignalConversionAtVeOBCR &&
                             ((rtb_TmpSignalConversionAtVeCI_g || (((sint32)
                                 rtb_Switch) > 0)) || ((((uint32)
                                 CPLR_ac_DW.UnitDelay2_DSTATE) == CeOBCR_e_LKD) &&
                               ((((uint32)rtb_AND_e_tmp) ==
                                 CeOBCR_e_Drv_Dr_Unlkd) || (((uint32)
                                  rtb_AND_e_tmp) == CeOBCR_e_All_Dr_Unlkd)))))
                    {
                        /* Transition: '<S97>:60' */
                        CPLR_ac_B.BCI = true;
                        CPLR_ac_B.Flag = false;

                        /* Transition: '<S97>:61' */
                        guard3 = true;
                    }
                    else if (rtb_TmpSignalConversionAtVeC_fw)
                    {
                        /* Transition: '<S97>:63' */
                        CPLR_ac_DW.is_c49_CPLR_ac = CPLR_ac_IN_Init_State;

                        /* DataTypeConversion: '<S80>/DataTypeConversion' */
                        /* Entry 'Init_State': '<S97>:48' */
                        VeCPLR_e_ChrgPort_Type1 = CeOBCR_e_PortNoRequest;
                        CPLR_ac_B.VeCPLR_t_StateTimer1 = 0.0F;
                    }
                    else
                    {
                        CPLR_ac_B.VeCPLR_t_StateTimer1 +=
                            HeCPLR_t_PI_ExecutionRate;
                    }
                    break;

                  case CPLR_ac_IN_Lock:
                    /* DataTypeConversion: '<S80>/DataTypeConversion' */
                    VeCPLR_e_ChrgPort_Type1 = CeOBCR_e_LockInlet;

                    /* During 'Lock': '<S97>:6' */
                    if ((rtb_AND_as || rtb_AND_e) || (((((uint32)
                            CPLR_ac_DW.UnitDelay2_DSTATE) == CeOBCR_e_LKD) &&
                            ((((uint32)rtb_AND_e_tmp) == CeOBCR_e_Drv_Dr_Unlkd) ||
                             (((uint32)rtb_AND_e_tmp) == CeOBCR_e_All_Dr_Unlkd)))
                         && (!rtb_TmpSignalConversionAtVeOB_o)))
                    {
                        /* Transition: '<S97>:28' */
                        CPLR_ac_B.BCI = true;
                        CPLR_ac_B.Flag = false;
                        guard4 = true;
                    }
                    else if (VeCPLR_b_DschrgUnlckInlet)
                    {
                        /* Transition: '<S97>:65' */
                        CPLR_ac_B.BCI = true;
                        CPLR_ac_B.Flag = false;
                        guard4 = true;
                    }
                    else if (tmpRead || (((!CPLR_ac_B.Flag) &&
                                          (!rtb_TmpSignalConversionAtVeIDCR)) &&
                                         rtb_TmpSignalConversionAtVeC_gz))
                    {
                        /* Transition: '<S97>:13' */
                        /* Transition: '<S97>:29' */
                        CPLR_ac_DW.is_c49_CPLR_ac = CPLR_ac_IN_UnLock;

                        /* DataTypeConversion: '<S80>/DataTypeConversion' */
                        /* Entry 'UnLock': '<S97>:1' */
                        VeCPLR_e_ChrgPort_Type1 = CeOBCR_e_UnlockInlet;
                        CPLR_ac_B.VeCPLR_t_StateTimer1 = 0.0F;
                    }
                    else if (rtb_LogicalOperator)
                    {
                        /* Transition: '<S97>:47' */
                        CPLR_ac_B.Flag = false;
                        guard4 = true;
                    }
                    else
                    {
                        CPLR_ac_B.VeCPLR_t_StateTimer1 +=
                            HeCPLR_t_PI_ExecutionRate;
                    }
                    break;

                  default:
                    /* DataTypeConversion: '<S80>/DataTypeConversion' */
                    VeCPLR_e_ChrgPort_Type1 = CeOBCR_e_UnlockInlet;

                    /* During 'UnLock': '<S97>:1' */
                    if (rtb_TmpSignalConversionAtVeC_fw)
                    {
                        /* Transition: '<S97>:37' */
                        CPLR_ac_B.Flag = true;
                        CPLR_ac_B.BCI = false;
                        guard1 = true;
                    }
                    else
                    {
                        rtb_TmpSignalConversionAtVeC_fw = !rtb_LogicalOperator;
                        if ((((rtb_TmpSignalConversionAtVeOBCR &&
                                (CPLR_ac_B.VeCPLR_t_StateTimer1 > ((float32)
                                 KeCPLR_t_DrUnlock_Restart))) && (CPLR_ac_B.BCI))
                             || ((((((uint32)CPLR_ac_DW.UnitDelay2_DSTATE) !=
                                    CeOBCR_e_LKD) && (((uint32)rtb_AND_e_tmp) ==
                                 CeOBCR_e_LKD)) &&
                                  rtb_TmpSignalConversionAtVeOBCR) &&
                                 (CPLR_ac_B.BCI))) &&
                                rtb_TmpSignalConversionAtVeC_fw)
                        {
                            /* Transition: '<S97>:14' */
                            CPLR_ac_B.BCI = false;
                            CPLR_ac_B.Flag = true;
                            guard2 = true;
                        }
                        else if (((rtb_TmpSignalConversionAtVeC_fw &&
                                   (!CPLR_ac_B.BCI)) &&
                                  rtb_TmpSignalConversionAtVeOBCR) &&
                                 (CPLR_ac_B.VeCPLR_t_StateTimer1 >
                                  KeCPLR_t_PortLock_DoublePlg))
                        {
                            /* Transition: '<S97>:9' */
                            CPLR_ac_B.Flag = true;
                            guard2 = true;
                        }
                        else if (rtb_Logical5 && (CPLR_ac_B.BCI))
                        {
                            /* Transition: '<S97>:44' */
                            CPLR_ac_B.BCI = false;
                            guard1 = true;
                        }
                        else
                        {
                            CPLR_ac_B.VeCPLR_t_StateTimer1 +=
                                HeCPLR_t_PI_ExecutionRate;
                        }
                    }
                    break;
                }

                if (guard4)
                {
                    CPLR_ac_DW.is_c49_CPLR_ac = CPLR_ac_IN_Lock;

                    /* DataTypeConversion: '<S80>/DataTypeConversion' */
                    /* Entry 'Lock': '<S97>:6' */
                    VeCPLR_e_ChrgPort_Type1 = CeOBCR_e_LockInlet;
                }

                if (guard3)
                {
                    CPLR_ac_DW.is_c49_CPLR_ac = CPLR_ac_IN_UnLock;

                    /* DataTypeConversion: '<S80>/DataTypeConversion' */
                    /* Entry 'UnLock': '<S97>:1' */
                    VeCPLR_e_ChrgPort_Type1 = CeOBCR_e_UnlockInlet;
                    CPLR_ac_B.VeCPLR_t_StateTimer1 = 0.0F;
                }

                if (guard2)
                {
                    CPLR_ac_DW.is_c49_CPLR_ac = CPLR_ac_IN_Lock;

                    /* DataTypeConversion: '<S80>/DataTypeConversion' */
                    /* Entry 'Lock': '<S97>:6' */
                    VeCPLR_e_ChrgPort_Type1 = CeOBCR_e_LockInlet;
                }

                if (guard1)
                {
                    CPLR_ac_DW.is_c49_CPLR_ac = CPLR_ac_IN_UnLock;

                    /* DataTypeConversion: '<S80>/DataTypeConversion' */
                    /* Entry 'UnLock': '<S97>:1' */
                    VeCPLR_e_ChrgPort_Type1 = CeOBCR_e_UnlockInlet;
                    CPLR_ac_B.VeCPLR_t_StateTimer1 = 0.0F;
                }
            }

            /* Gain: '<S102>/Gain' */
            VeCPLR_b_BCI_FlagTest1 = CPLR_ac_B.BCI;

            /* Logic: '<S38>/Logical1' */
            VeCPLR_b_ChrgPort_Type1_BCI = ((VeCPLR_b_BCI_FlagTest1) &&
                rtb_TmpSignalConversionAtVeOBCR);

            /* Gain: '<S99>/Gain' */
            VeCPLR_b_ChrgPort_Flag_Type1 = CPLR_ac_B.Flag;

            /* Gain: '<S101>/Gain' */
            VeCPLR_t_PortStateTimer = CPLR_ac_B.VeCPLR_t_StateTimer1;

            /* Gain: '<S103>/Gain' */
            VeCPLR_t_PortStateTimer2 = CPLR_ac_B.VeCPLR_t_StateTimerCP;

            /* Gain: '<S104>/Gain' */
            VeCPLR_b_ChrgPort_Type2_Flag = CPLR_ac_B.Flag_m;

            /* Switch: '<S38>/Switch' incorporates:
             *  Constant: '<S91>/Calib'
             *  Switch: '<S38>/Switch1'
             */
            if (KeCPLR_b_ChrgPortMech_Type1)
            {
                /* Switch: '<S38>/Switch' incorporates:
                 *  DataTypeConversion: '<S80>/DataTypeConversion'
                 */
                rtb_Switch_h = VeCPLR_e_ChrgPort_Type1;

                /* Merge: '<S8>/Merge' */
                rtb_TmpSignalConversionAtVeIDCR = VeCPLR_b_ChrgPort_Flag_Type1;
            }
            else
            {
                /* Switch: '<S38>/Switch' incorporates:
                 *  DataTypeConversion: '<S81>/DataTypeConversion'
                 */
                rtb_Switch_h = VeCPLR_e_ChrgPort_Type2;

                /* Merge: '<S8>/Merge' */
                rtb_TmpSignalConversionAtVeIDCR = VeCPLR_b_ChrgPort_Type2_Flag;
            }

            /* End of Switch: '<S38>/Switch' */

            /* Merge: '<S8>/Merge2' incorporates:
             *  Constant: '<S91>/Calib'
             *  Switch: '<S38>/Switch2'
             */
            VeCPLR_b_RelockTimer = ((KeCPLR_b_ChrgPortMech_Type1) &&
                                    (VeCPLR_b_ChrgPort_Type1_BCI));

            /* End of Outputs for SubSystem: '<S8>/OtherMarkets' */
            (void)Rte_Read_VeCITR_b_RmtChrgPortLkCmdFA_Value(&rtb_AND_n);

            /* Outputs for IfAction SubSystem: '<S8>/OtherMarkets' incorporates:
             *  ActionPort: '<S32>/Action Port'
             */
            /* Switch: '<S116>/Switch1' incorporates:
             *  Inport: '<Root>/VeCITR_b_RmtChrgPortLkCmdFA'
             */
            if (!rtb_AND_n)
            {
                /* Switch: '<S116>/Switch2' incorporates:
                 *  Constant: '<S113>/Constant'
                 *  Constant: '<S114>/Constant'
                 *  DataStoreWrite: '<S40>/Data Store Write3'
                 *  Switch: '<S116>/Switch1'
                 */
                if (rtb_TmpSignalConversionAtVeCI_f)
                {
                    CPLR_ac_DW.NeCPLR_e_ChargeportLockLastSts =
                        CeOBCR_e_PortLockSts_Lckd;
                }
                else
                {
                    CPLR_ac_DW.NeCPLR_e_ChargeportLockLastSts =
                        CeOBCR_e_PortLockSts_Unlckd;
                }

                /* End of Switch: '<S116>/Switch2' */
            }

            /* End of Switch: '<S116>/Switch1' */
            /* End of Outputs for SubSystem: '<S8>/OtherMarkets' */
            (void)Rte_Read_VeCITR_e_CPIM_ChrgPortLock_FailSts_Value(&tmpRead_8);
            (void)Rte_Read_VeCITR_e_DVC_ChrgPort_IO_Value(&tmpRead_2);

            /* Outputs for IfAction SubSystem: '<S8>/OtherMarkets' incorporates:
             *  ActionPort: '<S32>/Action Port'
             */
            /* Outputs for Atomic SubSystem: '<S40>/EdgeFalling' */
            /* Logic: '<S111>/AND' incorporates:
             *  Inport: '<Root>/VeCITR_e_CPIM_ChrgPortLock_FailSts'
             *  Inport: '<Root>/VeCITR_e_DVC_ChrgPort_IO'
             *  Logic: '<S111>/OR1'
             *  UnitDelay: '<S111>/Unit Delay'
             */
            rtb_AND_n = ((!rtb_TmpSignalConversionAtVeCI_c) &&
                         (CPLR_ac_DW.UnitDelay_DSTATE_b));

            /* Update for UnitDelay: '<S111>/Unit Delay' */
            CPLR_ac_DW.UnitDelay_DSTATE_b = rtb_TmpSignalConversionAtVeCI_c;

            /* End of Outputs for SubSystem: '<S40>/EdgeFalling' */

            /* Logic: '<S40>/Logical5' incorporates:
             *  Constant: '<S112>/Constant'
             *  Constant: '<S119>/Calib'
             *  Logic: '<S40>/Logical1'
             *  RelationalOperator: '<S40>/Comparison5'
             *  Switch: '<S38>/Switch'
             */
            VeCPLR_b_ManualRel_Sts = ((((((uint32)rtb_Switch_h) ==
                CeOBCR_e_LockInlet) && rtb_AND_n) &&
                (!rtb_TmpSignalConversionAtVeCI_l)) && (KeCPLR_b_ManualRel_Actv));

            /* Switch: '<S35>/Switch1' incorporates:
             *  Constant: '<S43>/Constant'
             *  Inport: '<Root>/VeCITR_e_DVC_ChrgPort_IO'
             *  RelationalOperator: '<S35>/Comparison4'
             */
            if (((uint32)tmpRead_2) == CeODCR_e_ShortTermAdjust)
            {
                /* Switch: '<S35>/Switch' */
                if (rtb_TmpSignalConversionAtVeCITR)
                {
                    /* Switch: '<S35>/Switch1' incorporates:
                     *  Constant: '<S41>/Constant'
                     */
                    rtb_Switch_h = CeOBCR_e_LockInlet;
                }
                else
                {
                    /* Switch: '<S35>/Switch1' incorporates:
                     *  Constant: '<S42>/Constant'
                     */
                    rtb_Switch_h = CeOBCR_e_UnlockInlet;
                }

                /* End of Switch: '<S35>/Switch' */
            }

            /* End of Switch: '<S35>/Switch1' */

            /* Logic: '<S46>/Logical5' incorporates:
             *  Constant: '<S64>/Constant'
             *  Logic: '<S46>/Logical4'
             *  RelationalOperator: '<S46>/Comparison6'
             */
            VeCPLR_b_TypeA_Fault_Test1 = ((((uint32)rtb_Switch_h) ==
                CeOBCR_e_LockInlet) && (!rtb_TmpSignalConversionAtVeC_o5));

            /* Logic: '<S49>/Logical Operator' incorporates:
             *  Constant: '<S49>/Constant1'
             *  Constant: '<S49>/Constant2'
             *  DataStoreRead: '<S49>/StatusByte_LostCommBCM'
             *  RelationalOperator: '<S49>/Relational Operator1'
             *  RelationalOperator: '<S49>/Relational Operator2'
             *  S-Function (sfix_bitop): '<S49>/Bitwise Operator1'
             *  S-Function (sfix_bitop): '<S49>/Bitwise Operator2'
             */
            rtb_AND_n = (((((sint32)CPLR_ac_DW.StatusByte_LostCommBCM) & 1) > 0)
                         && ((((uint32)CPLR_ac_DW.StatusByte_LostCommBCM) & 64U)
                             == 0U));

            /* Logic: '<S46>/Logical6' */
            VeCPLR_b_TypeA_Fault_Test2 = (((VeCPLR_b_TypeA_Fault_Test1) ||
                rtb_AND_n) || (VeCPLR_b_CBCLossComm));

            /* Logic: '<S47>/Logical2' incorporates:
             *  Logic: '<S48>/Logical11'
             */
            rtb_TmpSignalConversionAtVeCI_g = !rtb_TmpSignalConversionAtVeCI_f;

            /* Logic: '<S47>/Logical1' incorporates:
             *  Constant: '<S65>/Constant'
             *  Logic: '<S47>/Logical12'
             *  Logic: '<S47>/Logical2'
             *  Logic: '<S47>/Logical5'
             *  RelationalOperator: '<S47>/Comparison1'
             */
            VeCPLR_b_TypeB_Fault_Test5 = (rtb_TmpSignalConversionAtVeCI_g &&
                ((((uint32)rtb_Switch_h) == CeOBCR_e_LockInlet) &&
                 (rtb_TmpSignalConversionAtVeC_o5 ||
                  rtb_TmpSignalConversionAtVeCI_b)));

            /* RelationalOperator: '<S48>/Comparison1' incorporates:
             *  Constant: '<S67>/Constant'
             */
            VeCPLR_b_TypeC_Fault_Test1 = (((uint32)rtb_Switch_h) ==
                CeOBCR_e_LockInlet);

            /* Logic: '<S48>/Logical1' */
            VeCPLR_b_TypeC_Fault_Test2 = (rtb_TmpSignalConversionAtVeCI_g &&
                (VeCPLR_b_TypeC_Fault_Test1));

            /* Logic: '<S48>/Logical6' */
            VeCPLR_b_TypeC_Fault_Test3 = ((VeCPLR_b_TypeC_Fault_Test2) ||
                rtb_TmpSignalConversionAtVeCI_l);

            /* RelationalOperator: '<S45>/Comparison2' incorporates:
             *  Constant: '<S44>/Calib'
             *  Constant: '<S54>/Constant'
             */
            rtb_TmpSignalConversionAtVeC_o5 = (((uint32)
                KeCPLR_e_ChrgPortLock_Type) == CeOBCR_e_ChrgPortLock_TypeC);

            /* Switch: '<S56>/Switch1' incorporates:
             *  Constant: '<S44>/Calib'
             *  Constant: '<S52>/Constant'
             *  Constant: '<S53>/Constant'
             *  RelationalOperator: '<S45>/Comparison1'
             *  RelationalOperator: '<S45>/Comparison2'
             *  RelationalOperator: '<S45>/Comparison4'
             *  Switch: '<S56>/Switch2'
             */
            if (((uint32)KeCPLR_e_ChrgPortLock_Type) ==
                    CeOBCR_e_ChrgPortLock_TypeA)
            {
                /* Switch: '<S56>/Switch1' */
                VeCPLR_b_ChrgPortLock_Mismatch1 = VeCPLR_b_TypeA_Fault_Test2;
            }
            else if (((uint32)KeCPLR_e_ChrgPortLock_Type) ==
                     CeOBCR_e_ChrgPortLock_TypeB)
            {
                /* Switch: '<S56>/Switch2' incorporates:
                 *  Constant: '<S66>/Calib'
                 *  Logic: '<S47>/Logical10'
                 *  Logic: '<S47>/Logical13'
                 *  Logic: '<S47>/Logical14'
                 *  Logic: '<S47>/Logical23'
                 *  Logic: '<S47>/Logical25'
                 *  Logic: '<S47>/Logical26'
                 *  Logic: '<S47>/Logical27'
                 *  Logic: '<S47>/Logical6'
                 *  RelationalOperator: '<S47>/Comparison7'
                 *  RelationalOperator: '<S47>/Comparison8'
                 *  Switch: '<S56>/Switch1'
                 */
                VeCPLR_b_ChrgPortLock_Mismatch1 = ((((VeCPLR_b_TypeB_Fault_Test5)
                    || rtb_TmpSignalConversionAtVeCI_l) || ((rtb_AND_n ||
                    (VeCPLR_b_CBCLossComm)) && (!rtb_TmpSignalConversionAtVeCI_b)))
                    || (((((sint32)VeCPLR_d_ChrgPortHbridgeFlt) != 0) &&
                         ((((sint32)VeCPLR_d_ChrgPortHbridgeFlt) != 1) ||
                          (!KeCPLR_b_HBridgeFaultDiagEnbl))) &&
                        rtb_TmpSignalConversionAtVeCI_b));
            }
            else
            {
                /* Switch: '<S56>/Switch1' incorporates:
                 *  Switch: '<S56>/Switch2'
                 *  Switch: '<S56>/Switch3'
                 */
                VeCPLR_b_ChrgPortLock_Mismatch1 =
                    (rtb_TmpSignalConversionAtVeC_o5 &&
                     (VeCPLR_b_TypeC_Fault_Test3));
            }

            /* End of Switch: '<S56>/Switch1' */

            /* Outputs for Atomic SubSystem: '<S45>/Turn On Delay Sample2' */
            /* Outputs for Atomic SubSystem: '<S62>/EdgeRising' */
            /* RelationalOperator: '<S45>/Comparison' incorporates:
             *  UnitDelay: '<S63>/Unit Delay'
             */
            rtb_TmpSignalConversionAtVeCI_l = CPLR_ac_DW.UnitDelay_DSTATE_be;

            /* Update for UnitDelay: '<S63>/Unit Delay' */
            CPLR_ac_DW.UnitDelay_DSTATE_be = VeCPLR_b_ChrgPortLock_Mismatch1;

            /* Switch: '<S62>/Switch1' incorporates:
             *  Constant: '<S58>/Calib'
             *  Constant: '<S62>/Constant Value'
             *  Logic: '<S62>/OR'
             *  Logic: '<S62>/OR1'
             *  Logic: '<S63>/AND'
             *  Logic: '<S63>/OR1'
             *  MinMax: '<S62>/Minimum'
             *  Sum: '<S62>/Summation'
             *  UnitDelay: '<S62>/Unit Delay'
             */
            if ((!VeCPLR_b_ChrgPortLock_Mismatch1) ||
                    ((VeCPLR_b_ChrgPortLock_Mismatch1) &&
                     (!rtb_TmpSignalConversionAtVeCI_l)))
            {
                /* Switch: '<S62>/Switch1' incorporates:
                 *  Constant: '<S62>/Constant Value1'
                 */
                rtb_Switch = 0U;
            }
            else if (KeCPLR_Cnt_Port_MisMatchFlt < ((uint16)(((uint32)
                        CPLR_ac_DW.UnitDelay_DSTATE_mt) + 1U)))
            {
                /* MinMax: '<S62>/Minimum' incorporates:
                 *  Constant: '<S58>/Calib'
                 *  Switch: '<S62>/Switch1'
                 */
                rtb_Switch = KeCPLR_Cnt_Port_MisMatchFlt;
            }
            else
            {
                /* Switch: '<S62>/Switch1' incorporates:
                 *  Constant: '<S62>/Constant Value'
                 *  MinMax: '<S62>/Minimum'
                 *  Sum: '<S62>/Summation'
                 *  UnitDelay: '<S62>/Unit Delay'
                 */
                rtb_Switch = (uint16)(((uint32)CPLR_ac_DW.UnitDelay_DSTATE_mt) +
                                      1U);
            }

            /* End of Switch: '<S62>/Switch1' */
            /* End of Outputs for SubSystem: '<S62>/EdgeRising' */

            /* Logic: '<S62>/AND' incorporates:
             *  Constant: '<S58>/Calib'
             *  RelationalOperator: '<S62>/Greater  Than'
             */
            VeCPLR_b_Port_Mismatch = ((VeCPLR_b_ChrgPortLock_Mismatch1) &&
                (rtb_Switch >= KeCPLR_Cnt_Port_MisMatchFlt));

            /* Update for UnitDelay: '<S62>/Unit Delay' */
            CPLR_ac_DW.UnitDelay_DSTATE_mt = rtb_Switch;

            /* End of Outputs for SubSystem: '<S45>/Turn On Delay Sample2' */

            /* Outputs for Atomic SubSystem: '<S45>/EdgeRising' */
            /* Logic: '<S51>/OR1' incorporates:
             *  UnitDelay: '<S51>/Unit Delay'
             */
            rtb_TmpSignalConversionAtVeCI_l = !CPLR_ac_DW.UnitDelay_DSTATE_cg;

            /* Update for UnitDelay: '<S51>/Unit Delay' */
            CPLR_ac_DW.UnitDelay_DSTATE_cg = VeCPLR_b_Port_Mismatch;

            /* End of Outputs for SubSystem: '<S45>/EdgeRising' */

            /* Outputs for Atomic SubSystem: '<S45>/Counter Reset  Enabled ' */
            /* Switch: '<S50>/Switch1' incorporates:
             *  Constant: '<S55>/Constant'
             *  Logic: '<S45>/Logical7'
             *  Logic: '<S45>/Logical8'
             *  Logic: '<S51>/AND'
             *  RelationalOperator: '<S45>/Comparison3'
             *  Switch: '<S50>/Switch2'
             */
            if ((((((uint32)rtb_Switch_h) == CeOBCR_e_LockInlet) &&
                    rtb_TmpSignalConversionAtVeCI_f) &&
                    rtb_TmpSignalConversionAtVeC_o5) || tmpRead)
            {
                /* Switch: '<S50>/Switch1' incorporates:
                 *  Constant: '<S50>/Constant Value2'
                 */
                rtb_Switch = 0U;
            }
            else
            {
                /* Outputs for Atomic SubSystem: '<S45>/EdgeRising' */
                if ((VeCPLR_b_Port_Mismatch) && rtb_TmpSignalConversionAtVeCI_l)
                {
                    /* Switch: '<S50>/Switch2' incorporates:
                     *  Constant: '<S50>/Constant Value1'
                     *  Sum: '<S50>/Subtraction'
                     *  Switch: '<S50>/Switch1'
                     *  UnitDelay: '<S50>/Unit Delay'
                     */
                    rtb_Switch = (uint16)(((uint32)CPLR_ac_DW.UnitDelay_DSTATE_a)
                                          + 1U);
                }
                else
                {
                    /* Switch: '<S50>/Switch1' incorporates:
                     *  Switch: '<S50>/Switch2'
                     *  UnitDelay: '<S50>/Unit Delay'
                     */
                    rtb_Switch = CPLR_ac_DW.UnitDelay_DSTATE_a;
                }

                /* End of Outputs for SubSystem: '<S45>/EdgeRising' */
            }

            /* End of Switch: '<S50>/Switch1' */
            /* End of Outputs for SubSystem: '<S45>/Counter Reset  Enabled ' */
            /* End of Outputs for SubSystem: '<S8>/OtherMarkets' */
            (void)Rte_Read_VeCDMR_b_ChgPrtLckHiDTC_Value(&Merge6);
            (void)Rte_Read_VeCDMR_b_ChgPrtLckLowDTC_Value(&Merge1);
            (void)Rte_Read_VeCDMR_b_ChrgPortLK_FltDtct_Value(&Switch10);

            /* Outputs for IfAction SubSystem: '<S8>/OtherMarkets' incorporates:
             *  ActionPort: '<S32>/Action Port'
             */
            /* Outputs for Atomic SubSystem: '<S45>/Counter Reset  Enabled ' */
            /* Update for UnitDelay: '<S50>/Unit Delay' incorporates:
             *  Inport: '<Root>/VeCDMR_b_ChgPrtLckHiDTC'
             *  Inport: '<Root>/VeCDMR_b_ChgPrtLckLowDTC'
             *  Inport: '<Root>/VeCDMR_b_ChrgPortLK_FltDtct'
             */
            CPLR_ac_DW.UnitDelay_DSTATE_a = rtb_Switch;

            /* End of Outputs for SubSystem: '<S45>/Counter Reset  Enabled ' */

            /* Logic: '<S45>/Logical3' incorporates:
             *  Constant: '<S115>/Constant'
             *  Constant: '<S57>/Calib'
             *  Constant: '<S59>/Calib'
             *  Constant: '<S60>/Calib'
             *  Constant: '<S61>/Calib'
             *  Inport: '<Root>/VeCITR_e_CPIM_ChrgPortLock_FailSts'
             *  Logic: '<S45>/Logical1'
             *  Logic: '<S45>/Logical11'
             *  Logic: '<S45>/Logical2'
             *  Logic: '<S45>/Logical4'
             *  Logic: '<S45>/Logical5'
             *  Logic: '<S45>/Logical6'
             *  RelationalOperator: '<S40>/Comparison1'
             *  RelationalOperator: '<S45>/Comparison'
             */
            VeCPLR_b_Port_Mismatch_Flt = (((((VeCPLR_b_Port_Mismatch) ||
                ((KeCPLR_b_EnblCountMismtch) && (((float32)rtb_Switch) >
                KeCPLR_Cnt_ChrgLockFlt))) || ((KeCPLR_b_AlwLockDTC_ChrgFlt) &&
                Switch10)) || rtb_TmpSignalConversionAtVeCDMR) || ((((Merge1 ||
                Merge6) || (((uint32)tmpRead_8) == CeCITR_e_CPIMLock_SNA)) &&
                rtb_TmpSignalConversionAtVeC_o5) &&
                (KeCPLR_b_EnblChrgPortLckFailSts)));

            /* Merge: '<S4>/Merge6' incorporates:
             *  SignalConversion: '<S45>/Signal Conversion'
             */
            Merge6 = VeCPLR_b_Port_Mismatch_Flt;

            /* Outputs for Function Call SubSystem: '<S1>/Output_Proc' */
            /* DataTypeConversion: '<S143>/DataTypeConversion' incorporates:
             *  DataStoreWrite: '<S40>/Data Store Write3'
             *  Merge: '<S4>/Merge4'
             *  Outport: '<Root>/VeCPLR_e_ChargePortLock_Sts'
             *  SignalConversion generated from: '<S1>/VeCPLR_e_ChargePortLock_Sts'
             *  SignalConversion generated from: '<S32>/ChargeportLock_Sts'
             *  Switch: '<S116>/Switch1'
             */
            (void)Rte_Write_VeCPLR_e_ChargePortLock_Sts_Value
                (CPLR_ac_DW.NeCPLR_e_ChargeportLockLastSts);

            /* End of Outputs for SubSystem: '<S1>/Output_Proc' */

            /* Chart: '<S39>/ChrgPortLockB' incorporates:
             *  Constant: '<S89>/Calib'
             *  Inport: '<Root>/VeCITR_e_ChrgPortLock_StsB'
             *  UnitDelay: '<S39>/Unit Delay1'
             */
            /* Gateway: CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF_Hbridge/ChrgPortLockB */
            /* During: CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF_Hbridge/ChrgPortLockB */
            if (((uint32)CPLR_ac_DW.is_active_c5_CPLR_ac) == 0U)
            {
                /* Entry: CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF_Hbridge/ChrgPortLockB */
                CPLR_ac_DW.is_active_c5_CPLR_ac = 1U;

                /* Entry Internal: CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF_Hbridge/ChrgPortLockB */
                /* Transition: '<S108>:33' */
                CPLR_ac_DW.is_c5_CPLR_ac = CPLR_ac_IN_ActOff;

                /* Entry 'ActOff': '<S108>:1' */
                CPLR_ac_B.ChrgPrtEnbl_BSW = 0U;
                CPLR_ac_B.VeCPLR_t_StTmrChrgPrt = 0.0F;
            }
            else
            {
                (void)Rte_Read_VeCITR_e_ChrgPortLock_StsB_Value(&tmpRead_3);
                guard1 = false;
                switch (CPLR_ac_DW.is_c5_CPLR_ac)
                {
                  case CPLR_ac_IN_ActON:
                    /* During 'ActON': '<S108>:48' */
                    if ((((((uint32)rtb_Switch_h) == CeOBCR_e_UnlockInlet) &&
                            (((uint32)tmpRead_3) == CeOBCR_e_InletUnlocked)) &&
                            (CPLR_ac_B.VeCPLR_t_StTmrChrgPrt >=
                             KeCPLR_t_ActMechUlckDur)) || (((((uint32)
                            rtb_Switch_h) == CeOBCR_e_LockInlet) && (((uint32)
                            tmpRead_3) == CeOBCR_e_InletLocked)) &&
                            (CPLR_ac_B.VeCPLR_t_StTmrChrgPrt >=
                             KeCPLR_t_ActMechLckDur)))
                    {
                        /* Transition: '<S108>:154' */
                        /* Transition: '<S108>:158' */
                        if (KeCPLR_b_EnblShortCkt)
                        {
                            /* Transition: '<S108>:178' */
                            CPLR_ac_DW.is_c5_CPLR_ac = CPLR_ac_IN_HBridgeShrt;

                            /* Entry 'HBridgeShrt': '<S108>:176' */
                            CPLR_ac_B.VeCPLR_t_StTmrChrgPrt = 0.0F;
                            CPLR_ac_B.ChrgPrtEnbl_BSW = 2U;
                        }
                        else
                        {
                            /* Transition: '<S108>:181' */
                            /* Transition: '<S108>:182' */
                            guard1 = true;
                        }
                    }
                    else if (CPLR_ac_B.VeCPLR_t_StTmrChrgPrt >
                             KeCPLR_t_ChrgPortEnblTh)
                    {
                        /* Transition: '<S108>:159' */
                        guard1 = true;
                    }
                    else
                    {
                        CPLR_ac_B.VeCPLR_t_StTmrChrgPrt +=
                            HeCPLR_t_PI_ExecutionRate;
                        CPLR_ac_B.ChrgPrtEnbl_BSW = 1U;
                    }
                    break;

                  case CPLR_ac_IN_ActOff:
                    /* During 'ActOff': '<S108>:1' */
                    if ((rtb_Switch_h != CPLR_ac_DW.UnitDelay1_DSTATE) &&
                            (((uint32)rtb_Switch_h) != CeOBCR_e_PortNoRequest))
                    {
                        /* Transition: '<S108>:165' */
                        CPLR_ac_DW.is_c5_CPLR_ac = CPLR_ac_IN_ActON;

                        /* Entry 'ActON': '<S108>:48' */
                        CPLR_ac_B.VeCPLR_t_StTmrChrgPrt = 0.0F;
                    }
                    else
                    {
                        CPLR_ac_B.VeCPLR_t_StTmrChrgPrt +=
                            HeCPLR_t_PI_ExecutionRate;
                    }
                    break;

                  default:
                    /* During 'HBridgeShrt': '<S108>:176' */
                    if (CPLR_ac_B.VeCPLR_t_StTmrChrgPrt >= KeCPLR_t_DsblHbridge)
                    {
                        /* Transition: '<S108>:183' */
                        CPLR_ac_DW.is_c5_CPLR_ac = CPLR_ac_IN_ActOff;

                        /* Entry 'ActOff': '<S108>:1' */
                        CPLR_ac_B.ChrgPrtEnbl_BSW = 0U;
                        CPLR_ac_B.VeCPLR_t_StTmrChrgPrt = 0.0F;
                    }
                    else
                    {
                        CPLR_ac_B.VeCPLR_t_StTmrChrgPrt +=
                            HeCPLR_t_PI_ExecutionRate;
                        CPLR_ac_B.ChrgPrtEnbl_BSW = 2U;
                    }
                    break;
                }

                if (guard1)
                {
                    CPLR_ac_DW.is_c5_CPLR_ac = CPLR_ac_IN_ActOff;

                    /* Entry 'ActOff': '<S108>:1' */
                    CPLR_ac_B.ChrgPrtEnbl_BSW = 0U;
                    CPLR_ac_B.VeCPLR_t_StTmrChrgPrt = 0.0F;
                }
            }

            /* End of Chart: '<S39>/ChrgPortLockB' */

            /* Update for UnitDelay: '<S38>/Unit Delay1' incorporates:
             *  Inport: '<Root>/VeOBCR_e_ChrgSysStat_SF'
             */
            (void)Rte_Read_VeOBCR_e_ChrgSysStat_SF_Value
                (&CPLR_ac_DW.UnitDelay1_DSTATE_j);

            /* Gain: '<S110>/Gain' */
            CPLR_ac_B.Gain = CPLR_ac_B.ChrgPrtEnbl_BSW;

            /* Update for UnitDelay: '<S38>/Unit Delay' */
            CPLR_ac_DW.UnitDelay_DSTATE_k = VeCPLR_b_ManualRel_Sts;

            /* Update for UnitDelay: '<S38>/Unit Delay2' incorporates:
             *  DataStoreWrite: '<S40>/Data Store Write'
             *  Switch: '<S40>/Switch'
             */
            CPLR_ac_DW.UnitDelay2_DSTATE = CPLR_ac_DW.NeCPLR_e_DoorLastSts;

            /* Update for UnitDelay: '<S39>/Unit Delay1' incorporates:
             *  Switch: '<S35>/Switch1'
             */
            CPLR_ac_DW.UnitDelay1_DSTATE = rtb_Switch_h;

            /* End of Outputs for SubSystem: '<S8>/OtherMarkets' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S8>/NAFTA' incorporates:
             *  ActionPort: '<S31>/Action Port'
             */
            /* Merge: '<S8>/Merge' incorporates:
             *  Constant: '<S31>/Constant Value3'
             *  SignalConversion generated from: '<S31>/InletLockRequest'
             */
            rtb_TmpSignalConversionAtVeIDCR = true;

            /* Merge: '<S4>/Merge' incorporates:
             *  Constant: '<S34>/Constant'
             *  SignalConversion generated from: '<S31>/ChrgPort'
             */
            rtb_Switch_h = CeOBCR_e_PortNoRequest;

            /* Merge: '<S8>/Merge2' incorporates:
             *  Constant: '<S31>/Constant Value1'
             *  SignalConversion generated from: '<S31>/BCI'
             */
            VeCPLR_b_RelockTimer = false;

            /* SignalConversion generated from: '<S31>/Lock_Status' */
            CPLR_ac_B.OutportBufferForLock_Status = true;

            /* Merge: '<S4>/Merge6' incorporates:
             *  Constant: '<S31>/Constant Value4'
             *  SignalConversion generated from: '<S31>/Fault'
             */
            Merge6 = false;

            /* Outputs for Function Call SubSystem: '<S1>/Output_Proc' */
            /* DataTypeConversion: '<S143>/DataTypeConversion' incorporates:
             *  Constant: '<S33>/Constant'
             *  Merge: '<S4>/Merge4'
             *  Outport: '<Root>/VeCPLR_e_ChargePortLock_Sts'
             *  SignalConversion generated from: '<S1>/VeCPLR_e_ChargePortLock_Sts'
             *  SignalConversion generated from: '<S31>/ChargeportLockSts'
             */
            (void)Rte_Write_VeCPLR_e_ChargePortLock_Sts_Value
                (CeOBCR_e_PortLockSts_Default);

            /* End of Outputs for SubSystem: '<S1>/Output_Proc' */
            /* End of Outputs for SubSystem: '<S8>/NAFTA' */
        }

        /* End of If: '<S8>/If' */

        /* Switch: '<S8>/Switch' */
        if (VeCPLR_b_ChrgPort_Active)
        {
            /* Switch: '<S8>/Switch' */
            VeCPLR_b_Lock_Status_Out = rtb_TmpSignalConversionAtVeCI_c;
        }
        else
        {
            /* Switch: '<S8>/Switch' */
            VeCPLR_b_Lock_Status_Out = CPLR_ac_B.OutportBufferForLock_Status;
        }

        /* End of Switch: '<S8>/Switch' */

        /* Update for UnitDelay: '<S8>/Unit Delay2' incorporates:
         *  Inport: '<Root>/VeDCCR_e_DCChrgSysStat_SF'
         */
        (void)Rte_Read_VeDCCR_e_DCChrgSysStat_SF_Value
            (&CPLR_ac_DW.UnitDelay2_DSTATE_p);

        /* Merge: '<S4>/Merge3' incorporates:
         *  SignalConversion generated from: '<S8>/ChrgPortEnbl_BSW'
         */
        Merge3 = CPLR_ac_B.Gain;

        /* Merge: '<S4>/Merge2' incorporates:
         *  SignalConversion: '<S8>/Signal Conversion'
         */
        rtb_TmpSignalConversionAtVeCI_f = VeCPLR_b_RelockTimer;

        /* Merge: '<S4>/Merge1' incorporates:
         *  SignalConversion: '<S8>/Signal Conversion1'
         */
        Merge1 = VeCPLR_b_Lock_Status_Out;

        /* Merge: '<S4>/Merge5' incorporates:
         *  UnitDelay: '<S8>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeCI_c = CPLR_ac_DW.UnitDelay_DSTATE_p;

        /* Update for UnitDelay: '<S8>/Unit Delay' */
        CPLR_ac_DW.UnitDelay_DSTATE_p = rtb_TmpSignalConversionAtVeIDCR;

        /* End of Outputs for SubSystem: '<S4>/ChrgPort_Lock' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S4>/CPLR_NF' incorporates:
         *  ActionPort: '<S7>/Action Port'
         */
        /* Merge: '<S4>/Merge5' incorporates:
         *  Constant: '<S7>/Const62'
         *  SignalConversion generated from: '<S7>/IntLockReq'
         */
        rtb_TmpSignalConversionAtVeCI_c = false;

        /* Merge: '<S4>/Merge' incorporates:
         *  Constant: '<S13>/Constant'
         *  SignalConversion generated from: '<S7>/ChrgPrtEnbBSW'
         */
        rtb_Switch_h = CeOBCR_e_PortNoRequest;

        /* Merge: '<S4>/Merge2' incorporates:
         *  Constant: '<S7>/Const1'
         *  SignalConversion generated from: '<S7>/RelckTimer'
         */
        rtb_TmpSignalConversionAtVeCI_f = false;

        /* Merge: '<S4>/Merge1' incorporates:
         *  Constant: '<S7>/Const2'
         *  SignalConversion generated from: '<S7>/LockStatus'
         */
        Merge1 = false;

        /* Merge: '<S4>/Merge6' incorporates:
         *  Constant: '<S7>/Const3'
         *  SignalConversion generated from: '<S7>/ChrgPortFalt'
         */
        Merge6 = false;

        /* Merge: '<S4>/Merge3' incorporates:
         *  Constant: '<S7>/Const4'
         *  SignalConversion generated from: '<S7>/ChrgPrtReq'
         */
        Merge3 = 0U;

        /* Outputs for Function Call SubSystem: '<S1>/Output_Proc' */
        /* DataTypeConversion: '<S143>/DataTypeConversion' incorporates:
         *  Constant: '<S12>/Constant'
         *  Merge: '<S4>/Merge4'
         *  Outport: '<Root>/VeCPLR_e_ChargePortLock_Sts'
         *  SignalConversion generated from: '<S1>/VeCPLR_e_ChargePortLock_Sts'
         *  SignalConversion generated from: '<S7>/ChargeportLockSts'
         */
        (void)Rte_Write_VeCPLR_e_ChargePortLock_Sts_Value
            (CeOBCR_e_PortLockSts_Default);

        /* End of Outputs for SubSystem: '<S1>/Output_Proc' */
        /* End of Outputs for SubSystem: '<S4>/CPLR_NF' */
    }

    /* End of If: '<S4>/If' */
    /* End of Outputs for SubSystem: '<S4>/Turn Off Delay Sample' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Output_Proc'
     */
    /* Switch: '<S6>/Switch10' incorporates:
     *  Constant: '<S146>/Calib'
     */
    if (KeCPLR_b_ChrgPortReq_BSW_Ovrd)
    {
        /* Switch: '<S6>/Switch10' incorporates:
         *  Constant: '<S147>/Calib'
         */
        Switch10 = KeCPLR_b_ChrgPortReq_BSW_Val;
    }
    else
    {
        /* Switch: '<S6>/Switch10' incorporates:
         *  Constant: '<S144>/Constant'
         *  Merge: '<S4>/Merge'
         *  RelationalOperator: '<S6>/Comparison4'
         */
        Switch10 = (((uint32)rtb_Switch_h) == CeOBCR_e_LockInlet);
    }

    /* End of Switch: '<S6>/Switch10' */

    /* Switch: '<S6>/Switch4' incorporates:
     *  Constant: '<S150>/Calib'
     *  Inport: '<Root>/VeVDVR_b_V2V_Detected'
     *  Inport: '<Root>/VeVDVR_e_ChrgPortReq_V2V'
     */
    if (KeCPLR_b_ChrgPort_ReqOvrd)
    {
        /* Switch: '<S6>/Switch4' incorporates:
         *  Constant: '<S155>/Calib'
         */
        rtb_Switch_h = KeCPLR_e_ChrgPort_ReqVal;
    }
    else
    {
        (void)Rte_Read_VeVDVR_b_V2V_Detected_Value(&tmpRead_7);
        (void)Rte_Read_VeVDVR_e_ChrgPortReq_V2V_Value(&tmpRead_6);

        /* Switch: '<S6>/Switch26' incorporates:
         *  Inport: '<Root>/VeVDVR_b_V2V_Detected'
         *  Inport: '<Root>/VeVDVR_e_ChrgPortReq_V2V'
         */
        if (tmpRead_7)
        {
            /* Switch: '<S6>/Switch4' incorporates:
             *  Inport: '<Root>/VeVDVR_e_ChrgPortReq_V2V'
             */
            rtb_Switch_h = tmpRead_6;
        }

        /* End of Switch: '<S6>/Switch26' */
    }

    /* End of Switch: '<S6>/Switch4' */

    /* Outport: '<Root>/VeCPLR_b_ChargPortFault' incorporates:
     *  Gain: '<S159>/Gain'
     *  SignalConversion generated from: '<S1>/VeCPLR_b_ChargPortFault'
     */
    (void)Rte_Write_VeCPLR_b_ChargPortFault_Value(Merge6);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeCPLR_b_ChrgPortReq_BSW' incorporates:
     *  SignalConversion generated from: '<S1>/VeCPLR_b_ChrgPortReq_BSW'
     */
    (void)Rte_Write_VeCPLR_b_ChrgPortReq_BSW_Value(Switch10);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Output_Proc'
     */
    /* Switch: '<S6>/Switch1' incorporates:
     *  Constant: '<S148>/Calib'
     */
    if (KeCPLR_b_ChrgPortRq_DVCOvrd)
    {
        /* Outport: '<Root>/VeCPLR_b_DVC_ChrgPort_Req' incorporates:
         *  Constant: '<S149>/Calib'
         *  SignalConversion generated from: '<S1>/VeCPLR_b_DVC_ChrgPort_Req'
         */
        (void)Rte_Write_VeCPLR_b_DVC_ChrgPort_Req_Value
            (KeCPLR_b_ChrgPortRq_DVCVal);
    }
    else
    {
        /* Outport: '<Root>/VeCPLR_b_DVC_ChrgPort_Req' incorporates:
         *  SignalConversion generated from: '<S1>/VeCPLR_b_DVC_ChrgPort_Req'
         */
        (void)Rte_Write_VeCPLR_b_DVC_ChrgPort_Req_Value
            (rtb_TmpSignalConversionAtVeCITR);
    }

    /* End of Switch: '<S6>/Switch1' */

    /* Switch: '<S6>/Switch' incorporates:
     *  Constant: '<S153>/Calib'
     */
    if (KeCPLR_b_MSG13_Ovrd)
    {
        /* Outport: '<Root>/VeCPLR_b_HMIR_MSG13' incorporates:
         *  Constant: '<S154>/Calib'
         *  SignalConversion generated from: '<S1>/VeCPLR_b_HMIR_MSG13'
         */
        (void)Rte_Write_VeCPLR_b_HMIR_MSG13_Value(KeCPLR_b_MSG13_Val);
    }
    else
    {
        /* Outport: '<Root>/VeCPLR_b_HMIR_MSG13' incorporates:
         *  SignalConversion generated from: '<S1>/VeCPLR_b_HMIR_MSG13'
         */
        (void)Rte_Write_VeCPLR_b_HMIR_MSG13_Value
            (rtb_TmpSignalConversionAtVeCDMR);
    }

    /* End of Switch: '<S6>/Switch' */

    /* Outport: '<Root>/VeCPLR_b_InternalLockReq' incorporates:
     *  Gain: '<S158>/Gain'
     *  SignalConversion generated from: '<S1>/VeCPLR_b_InternalLockReq'
     */
    (void)Rte_Write_VeCPLR_b_InternalLockReq_Value
        (rtb_TmpSignalConversionAtVeCI_c);

    /* Switch: '<S6>/Switch8' incorporates:
     *  Constant: '<S151>/Calib'
     */
    if (KeCPLR_b_LockStatus_Ovrd)
    {
        /* Outport: '<Root>/VeCPLR_b_Lock_Status' incorporates:
         *  Constant: '<S152>/Calib'
         *  SignalConversion generated from: '<S1>/VeCPLR_b_Lock_Status'
         */
        (void)Rte_Write_VeCPLR_b_Lock_Status_Value(KeCPLR_b_LockStatus_Val);
    }
    else
    {
        /* Outport: '<Root>/VeCPLR_b_Lock_Status' incorporates:
         *  SignalConversion generated from: '<S1>/VeCPLR_b_Lock_Status'
         */
        (void)Rte_Write_VeCPLR_b_Lock_Status_Value(Merge1);
    }

    /* End of Switch: '<S6>/Switch8' */

    /* Outport: '<Root>/VeCPLR_b_RelockTimerActive' incorporates:
     *  Gain: '<S157>/Gain'
     *  SignalConversion generated from: '<S1>/VeCPLR_b_RelockTimerActive'
     */
    (void)Rte_Write_VeCPLR_b_RelockTimerActive_Value
        (rtb_TmpSignalConversionAtVeCI_f);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeCPLR_e_ChrgPort_Req' incorporates:
     *  SignalConversion generated from: '<S1>/VeCPLR_e_ChrgPort_Req'
     *  Switch: '<S6>/Switch4'
     */
    (void)Rte_Write_VeCPLR_e_ChrgPort_Req_Value(rtb_Switch_h);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Output_Proc'
     */
    /* Switch: '<S6>/Switch11' incorporates:
     *  Constant: '<S145>/Calib'
     */
    if (KeCPLR_b_ChrgPortEnbl_BSW_Ovrd)
    {
        /* Outport: '<Root>/VeCPLR_k_ChrgPortEnbl_BSW' incorporates:
         *  Constant: '<S156>/Calib'
         *  SignalConversion generated from: '<S1>/VeCPLR_k_ChrgPortEnbl_BSW'
         */
        (void)Rte_Write_VeCPLR_k_ChrgPortEnbl_BSW_Value
            (KeCPLR_k_ChrgPorEnbl_BSW_Val);
    }
    else
    {
        /* Outport: '<Root>/VeCPLR_k_ChrgPortEnbl_BSW' incorporates:
         *  SignalConversion generated from: '<S1>/VeCPLR_k_ChrgPortEnbl_BSW'
         */
        (void)Rte_Write_VeCPLR_k_ChrgPortEnbl_BSW_Value(Merge3);
    }

    /* End of Switch: '<S6>/Switch11' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/CPLR_MedTED' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_CPLR_1

FUNC(void, CPLR_CODE) CPLR_PwrOff(void)
{

#if Rte_SysCon_Variant_CPLR_1

    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
    /* Outputs for Function Call SubSystem: '<Root>/CPLR_PwrOff' */
    /* Outport: '<Root>/NeCPLR_e_ChargeportLockLastSts_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/Data Store Read'
     */
    (void)
        Rte_Write_NeCPLR_e_ChargeportLockLastSts_NeCPLR_e_ChargeportLockLastSts
        (CPLR_ac_DW.NeCPLR_e_ChargeportLockLastSts);

    /* Outport: '<Root>/NeCPLR_e_RemoteLockLastSts_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/Data Store Read1'
     */
    (void)Rte_Write_NeCPLR_e_RemoteLockLastSts_NeCPLR_e_RemoteLockLastSts
        (CPLR_ac_DW.NeCPLR_e_RemoteLockLastSts);

    /* Outport: '<Root>/NeCPLR_e_DoorLastSts_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/Data Store Read2'
     */
    (void)Rte_Write_NeCPLR_e_DoorLastSts_NeCPLR_e_DoorLastSts
        (CPLR_ac_DW.NeCPLR_e_DoorLastSts);

    /* Outport: '<Root>/NeCPLR_b_ManualRelease_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/Data Store Read3'
     */
    (void)Rte_Write_NeCPLR_b_ManualRelease_NeCPLR_b_ManualRelease
        (CPLR_ac_DW.NeCPLR_b_ManualRelease);

    /* End of Outputs for SubSystem: '<Root>/CPLR_PwrOff' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
#endif

}

#endif

/* Output function */
FUNC(void, CPLR_CODE) CPLR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/CPLR_PwrOn'
     */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S161>/VeCPLR_e_ChrgPort_Req_Out_Init' incorporates:
     *  Constant: '<S161>/Const23'
     */
    CPLR_ac_B.OutportBufferForVeCPLR_e_ChrgPo = CPLR_ac_ConstB.Const23;

    /* SignalConversion generated from: '<S161>/VeCPLR_b_DVC_ChrgPort_Req_Out_Init' */
    CPLR_ac_B.OutportBufferForVeCPLR_b_DVC_Ch = false;

    /* SignalConversion generated from: '<S161>/VeCPLR_b_Lock_Status_Out_Init' */
    CPLR_ac_B.OutportBufferForVeCPLR_b_Lock_S = false;

    /* SignalConversion generated from: '<S161>/VeCPLR_b_RelockTimerActive_Out_Init' */
    CPLR_ac_B.OutportBufferForVeCPLR_b_Relock = false;

    /* SignalConversion generated from: '<S161>/VeCPLR_b_HMIR_MSG13_Out_Init' */
    CPLR_ac_B.OutportBufferForVeCPLR_b_HMIR_M = false;

    /* SignalConversion generated from: '<S161>/VeCPLR_b_ChrgPortReq_BSW_Out_Init' */
    CPLR_ac_B.OutportBufferForVeCPLR_b_ChrgPo = false;

    /* SignalConversion generated from: '<S161>/VeCPLR_k_ChrgPortEnbl_BSW_Out_Init' */
    CPLR_ac_B.OutportBufferForVeCPLR_k_ChrgPo = 0U;

    /* SignalConversion generated from: '<S161>/VeCPLR_b_InternalLockReq_Out_Init' */
    CPLR_ac_B.OutportBufferForVeCPLR_b_Intern = false;

    /* SignalConversion generated from: '<S161>/VeCPLR_b_ChargPortFault_Out_Init' */
    CPLR_ac_B.OutportBufferForVeCPLR_b_ChargP = false;

    /* SignalConversion generated from: '<S161>/VeCPLR_e_ChargePortLock_Sts_OutInit' incorporates:
     *  Constant: '<S161>/Const3'
     */
    CPLR_ac_B.OutportBufferForVeCPLR_e_Charge = CPLR_ac_ConstB.Const3;

#if Rte_SysCon_Variant_CPLR_1

    /* Outputs for Function Call SubSystem: '<S3>/DSM_Init' */
    /* DataStoreWrite: '<S160>/Data Store Write3' incorporates:
     *  Inport: '<Root>/NeCPLR_b_ManualRelease_PM_In'
     */
    (void)Rte_Read_NeCPLR_b_ManualRelease_Rx_NeCPLR_b_ManualRelease
        (&CPLR_ac_DW.NeCPLR_b_ManualRelease);

    /* DataStoreWrite: '<S160>/Data Store Write2' incorporates:
     *  Inport: '<Root>/NeCPLR_e_DoorLastSts_PM_In'
     */
    (void)Rte_Read_NeCPLR_e_DoorLastSts_Rx_NeCPLR_e_DoorLastSts
        (&CPLR_ac_DW.NeCPLR_e_DoorLastSts);

    /* DataStoreWrite: '<S160>/Data Store Write1' incorporates:
     *  Inport: '<Root>/NeCPLR_e_RemoteLockLastSts_PM_In'
     */
    (void)Rte_Read_NeCPLR_e_RemoteLockLastSts_Rx_NeCPLR_e_RemoteLockLastSts
        (&CPLR_ac_DW.NeCPLR_e_RemoteLockLastSts);

    /* DataStoreWrite: '<S160>/Data Store Write' incorporates:
     *  Inport: '<Root>/NeCPLR_e_ChargeportLockLastSts_PM_In'
     */
    (void)
        Rte_Read_NeCPLR_e_ChargeportLockLastSts_Rx_NeCPLR_e_ChargeportLockLastSts
        (&CPLR_ac_DW.NeCPLR_e_ChargeportLockLastSts);

    /* End of Outputs for SubSystem: '<S3>/DSM_Init' */
    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */
#endif

    /* Outport: '<Root>/VeCPLR_b_ChargPortFault' incorporates:
     *  SignalConversion generated from: '<S3>/VeCPLR_b_ChargePortFault_Out_Init'
     */
    (void)Rte_Write_VeCPLR_b_ChargPortFault_Value
        (CPLR_ac_B.OutportBufferForVeCPLR_b_ChargP);

    /* Outport: '<Root>/VeCPLR_b_ChrgPortReq_BSW' incorporates:
     *  SignalConversion generated from: '<S3>/VeCPLR_b_ChrgPortReq_BSW_Out_Init'
     */
    (void)Rte_Write_VeCPLR_b_ChrgPortReq_BSW_Value
        (CPLR_ac_B.OutportBufferForVeCPLR_b_ChrgPo);

    /* Outport: '<Root>/VeCPLR_b_DVC_ChrgPort_Req' incorporates:
     *  SignalConversion generated from: '<S3>/VeCPLR_b_DVC_ChrgPort_Req_Out_Init'
     */
    (void)Rte_Write_VeCPLR_b_DVC_ChrgPort_Req_Value
        (CPLR_ac_B.OutportBufferForVeCPLR_b_DVC_Ch);

    /* Outport: '<Root>/VeCPLR_b_HMIR_MSG13' incorporates:
     *  SignalConversion generated from: '<S3>/VeCPLR_b_HMIR_MSG13_Out_Init'
     */
    (void)Rte_Write_VeCPLR_b_HMIR_MSG13_Value
        (CPLR_ac_B.OutportBufferForVeCPLR_b_HMIR_M);

    /* Outport: '<Root>/VeCPLR_b_InternalLockReq' incorporates:
     *  SignalConversion generated from: '<S3>/VeCPLR_b_InternalLockReq_Out_Init'
     */
    (void)Rte_Write_VeCPLR_b_InternalLockReq_Value
        (CPLR_ac_B.OutportBufferForVeCPLR_b_Intern);

    /* Outport: '<Root>/VeCPLR_b_Lock_Status' incorporates:
     *  SignalConversion generated from: '<S3>/VeCPLR_b_Lock_Status_Out_Init'
     */
    (void)Rte_Write_VeCPLR_b_Lock_Status_Value
        (CPLR_ac_B.OutportBufferForVeCPLR_b_Lock_S);

    /* Outport: '<Root>/VeCPLR_b_RelockTimerActive' incorporates:
     *  SignalConversion generated from: '<S3>/VeCPLR_b_RelockTimerActive_Out_Init'
     */
    (void)Rte_Write_VeCPLR_b_RelockTimerActive_Value
        (CPLR_ac_B.OutportBufferForVeCPLR_b_Relock);

    /* Outport: '<Root>/VeCPLR_e_ChargePortLock_Sts' incorporates:
     *  SignalConversion generated from: '<S161>/VeCPLR_e_ChargePortLock_Sts_OutInit'
     *  SignalConversion generated from: '<S3>/VeCPLR_e_ChargePortLock_Sts_OutInit'
     */
    (void)Rte_Write_VeCPLR_e_ChargePortLock_Sts_Value
        (CPLR_ac_B.OutportBufferForVeCPLR_e_Charge);

    /* Outport: '<Root>/VeCPLR_e_ChrgPort_Req' incorporates:
     *  SignalConversion generated from: '<S161>/VeCPLR_e_ChrgPort_Req_Out_Init'
     *  SignalConversion generated from: '<S3>/VeCPLR_e_ChrgPort_Req_Out_Init'
     */
    (void)Rte_Write_VeCPLR_e_ChrgPort_Req_Value
        (CPLR_ac_B.OutportBufferForVeCPLR_e_ChrgPo);

    /* Outport: '<Root>/VeCPLR_k_ChrgPortEnbl_BSW' incorporates:
     *  SignalConversion generated from: '<S3>/VeCPLR_k_ChrgPortEnbl_BSW_Out_Init'
     */
    (void)Rte_Write_VeCPLR_k_ChrgPortEnbl_BSW_Value
        (CPLR_ac_B.OutportBufferForVeCPLR_k_ChrgPo);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, CPLR_CODE) CPLR_ac_Init(void)
{

#if Rte_SysCon_Variant_CPLR_1

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
    /* SystemInitialize for Function Call SubSystem: '<Root>/CPLR_MedTED' */
    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CPLC'
     */
    /* SystemInitialize for IfAction SubSystem: '<S4>/ChrgPort_Lock' */
    /* SystemInitialize for IfAction SubSystem: '<S8>/NAFTA' */
    /* SystemInitialize for SignalConversion generated from: '<S31>/Lock_Status' */
    CPLR_ac_B.OutportBufferForLock_Status = true;

    /* End of SystemInitialize for SubSystem: '<S8>/NAFTA' */
    /* End of SystemInitialize for SubSystem: '<S4>/ChrgPort_Lock' */
    /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of SystemInitialize for SubSystem: '<Root>/CPLR_MedTED' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
#endif

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/CPLR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S161>/VeCPLR_e_ChrgPort_Req_Out_Init' incorporates:
     *  Constant: '<S161>/Const23'
     */
    CPLR_ac_B.OutportBufferForVeCPLR_e_ChrgPo = CPLR_ac_ConstB.Const23;

    /* SystemInitialize for SignalConversion generated from: '<S161>/VeCPLR_e_ChargePortLock_Sts_OutInit' incorporates:
     *  Constant: '<S161>/Const3'
     */
    CPLR_ac_B.OutportBufferForVeCPLR_e_Charge = CPLR_ac_ConstB.Const3;

    /* End of SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for Outport: '<Root>/VeCPLR_e_ChrgPort_Req' incorporates:
     *  Merge: '<Root>/Merge_Outport_1'
     */
    (void)Rte_Write_VeCPLR_e_ChrgPort_Req_Value(CeOBCR_e_PortNoRequest);

    /* SystemInitialize for Outport: '<Root>/VeCPLR_e_ChargePortLock_Sts' incorporates:
     *  Merge: '<Root>/Merge_Outport_10'
     */
    (void)Rte_Write_VeCPLR_e_ChargePortLock_Sts_Value
        (CeOBCR_e_PortLockSts_Default);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
