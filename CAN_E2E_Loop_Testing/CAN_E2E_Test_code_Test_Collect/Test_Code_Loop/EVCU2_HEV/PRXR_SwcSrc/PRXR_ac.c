/*
 * File: PRXR_ac.c
 *
 * Code generated for Simulink model 'PRXR_ac'.
 *
 * Model version                  : 1.168
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 18:41:30 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "PRXR_ac.h"

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_PRXR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(TePRXR_e_AdaptiveCruiseCtrl, PRXR_VAR_INIT)
    KaPRXR_e_ProxiACC_Map[4] =
{
    CePRXR_e_ACC_Absent, CePRXR_e_ACC, CePRXR_e_ACC_Plus, CePRXR_e_ACC_Plus
};                                     /* Referenced by:
                                        * '<S105>/Direct Lookup Table (n-D)'
                                        * '<S276>/Direct Lookup Table (n-D)'
                                        */

static volatile CONST(TePRXR_e_RRM_VP_Level, PRXR_VAR_INIT)
    KaPRXR_e_RRM_VP_Level_Map[5] =
{
    CePRXR_e_RRM_VP_Absent, CePRXR_e_RRM_VP_Level2, CePRXR_e_RRM_VP_Level4,
    CePRXR_e_RRM_VP_Level3, CePRXR_e_RRM_VP_Level4
};                                     /* Referenced by:
                                        * '<S132>/Direct Lookup Table (n-D)'
                                        * '<S303>/Direct Lookup Table (n-D)'
                                        */

static volatile CONST(TePRXR_e_ShiftIndSt, PRXR_VAR_INIT)
    KaPRXR_e_ShiftIndSt_Map[4] =
{
    CePRXR_e_NotPresent, CePRXR_e_NotPresent, CePRXR_e_GSI,
    CePRXR_e_Enhanced_GSI
};                                     /* Referenced by:
                                        * '<S141>/Direct Lookup Table (n-D)'
                                        * '<S312>/Direct Lookup Table (n-D)'
                                        */

static volatile CONST(float32, PRXR_VAR_INIT) KePRXR_Cf_CnvrtCircumToRadius =
    0.0015F;                           /* Referenced by:
                                        * '<S158>/Calib'
                                        * '<S329>/Calib'
                                        */
static volatile CONST(float32, PRXR_VAR_INIT) KePRXR_Pct_ProxiSpdomtrTol_Byp =
    0.0F;                              /* Referenced by:
                                        * '<S119>/Calib'
                                        * '<S290>/Calib'
                                        */
static volatile CONST(boolean, PRXR_VAR_INIT)
    KePRXR_b_Axle_Locker_Presence_BypEnbl = 0;/* Referenced by:
                                               * '<S57>/Calib'
                                               * '<S228>/Calib'
                                               */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_b_Axle_Ratio_BypEnbl = 0;/* Referenced by:
                                                                      * '<S59>/Calib'
                                                                      * '<S230>/Calib'
                                                                      */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_b_CANNode55_Byp = 0;/* Referenced by:
                                                                      * '<S61>/Calib'
                                                                      * '<S232>/Calib'
                                                                      */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_b_CANNode55_BypEnbl = 0;/* Referenced by:
                                                                      * '<S62>/Calib'
                                                                      * '<S233>/Calib'
                                                                      */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_b_CanNodeAMP_Byp = 0;/* Referenced by:
                                                                      * '<S63>/Calib'
                                                                      * '<S234>/Calib'
                                                                      */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_b_CanNodeAMP_BypEnbl = 0;/* Referenced by:
                                                                      * '<S64>/Calib'
                                                                      * '<S235>/Calib'
                                                                      */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_b_CanNodeMRGB_Byp = 0;/* Referenced by:
                                                                      * '<S65>/Calib'
                                                                      * '<S236>/Calib'
                                                                      */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_b_CanNodeMRGB_BypEnbl = 0;/* Referenced by:
                                                                      * '<S66>/Calib'
                                                                      * '<S237>/Calib'
                                                                      */
static volatile CONST(boolean, PRXR_VAR_INIT)
    KePRXR_b_ConfigurationFamilies_BypEnbl = 0;/* Referenced by:
                                                * '<S69>/Calib'
                                                * '<S240>/Calib'
                                                */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_b_Custom_Mode_Byp = 0;/* Referenced by:
                                                                      * '<S72>/Calib'
                                                                      * '<S243>/Calib'
                                                                      */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_b_Custom_Mode_BypEnbl = 0;/* Referenced by:
                                                                      * '<S71>/Calib'
                                                                      * '<S242>/Calib'
                                                                      */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_b_DriveModes_Byp = 0;/* Referenced by:
                                                                      * '<S73>/Calib'
                                                                      * '<S244>/Calib'
                                                                      */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_b_DriveModes_BypEnbl = 0;/* Referenced by:
                                                                      * '<S74>/Calib'
                                                                      * '<S245>/Calib'
                                                                      */
static volatile CONST(boolean, PRXR_VAR_INIT)
    KePRXR_b_DriveStyleSelector_BypEnbl = 0;/* Referenced by:
                                             * '<S75>/Calib'
                                             * '<S246>/Calib'
                                             */
static volatile CONST(boolean, PRXR_VAR_INIT)
    KePRXR_b_Drive_Type_Variant_BypEnbl = 0;/* Referenced by:
                                             * '<S77>/Calib'
                                             * '<S248>/Calib'
                                             */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_b_ELSD_Byp = 0;/* Referenced by:
                                                                     * '<S79>/Calib'
                                                                     * '<S250>/Calib'
                                                                     */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_b_ELSD_BypEnbl = 0;/* Referenced by:
                                                                      * '<S80>/Calib'
                                                                      * '<S251>/Calib'
                                                                      */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_b_ELocker_Byp = 0;/* Referenced by:
                                                                      * '<S81>/Calib'
                                                                      * '<S252>/Calib'
                                                                      */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_b_ELocker_BypEnbl = 0;/* Referenced by:
                                                                      * '<S82>/Calib'
                                                                      * '<S253>/Calib'
                                                                      */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_b_FrontWSSType_Byp = 0;/* Referenced by:
                                                                      * '<S83>/Calib'
                                                                      * '<S254>/Calib'
                                                                      */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_b_FrontWSSType_BypEnbl = 0;/* Referenced by:
                                                                      * '<S84>/Calib'
                                                                      * '<S255>/Calib'
                                                                      */
static volatile CONST(boolean, PRXR_VAR_INIT)
    KePRXR_b_FullAutomaticParkingSystem_Byp = 0;/* Referenced by:
                                                 * '<S85>/Calib'
                                                 * '<S256>/Calib'
                                                 */
static volatile CONST(boolean, PRXR_VAR_INIT)
    KePRXR_b_FullAutomaticParkingSystem_BypEnbl = 0;/* Referenced by:
                                                     * '<S86>/Calib'
                                                     * '<S257>/Calib'
                                                     */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_b_Hill_Des_Stat_Prx_Byp = 0;/* Referenced by:
                                                                      * '<S87>/Calib'
                                                                      * '<S258>/Calib'
                                                                      */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_b_Hill_Des_Stat_Prx_BypEnbl
    = 0;                               /* Referenced by:
                                        * '<S88>/Calib'
                                        * '<S259>/Calib'
                                        */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_b_HomSpdLim_BypEnbl = 0;/* Referenced by:
                                                                      * '<S89>/Calib'
                                                                      * '<S260>/Calib'
                                                                      */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_b_Lane_Assist_BypEnbl = 0;/* Referenced by:
                                                                      * '<S91>/Calib'
                                                                      * '<S262>/Calib'
                                                                      */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_b_LaunchControl_Byp = 0;/* Referenced by:
                                                                      * '<S93>/Calib'
                                                                      * '<S264>/Calib'
                                                                      */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_b_LaunchControl_BypEnbl = 0;/* Referenced by:
                                                                      * '<S94>/Calib'
                                                                      * '<S265>/Calib'
                                                                      */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_b_ModelYear_BypEnbl = 0;/* Referenced by:
                                                                      * '<S95>/Calib'
                                                                      * '<S266>/Calib'
                                                                      */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_b_NumOfAGSUnits_BypEnbl = 0;/* Referenced by:
                                                                      * '<S97>/Calib'
                                                                      * '<S268>/Calib'
                                                                      */
static volatile CONST(boolean, PRXR_VAR_INIT)
    KePRXR_b_OnboardPowPanelType_BypEnbl = 0;/* Referenced by:
                                              * '<S99>/Calib'
                                              * '<S270>/Calib'
                                              */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_b_Plug_and_Charge_BypEnbl =
    0;                                 /* Referenced by:
                                        * '<S101>/Calib'
                                        * '<S272>/Calib'
                                        */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_b_ProxiACC_BypEnbl = 0;/* Referenced by:
                                                                      * '<S103>/Calib'
                                                                      * '<S274>/Calib'
                                                                      */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_b_ProxiCADM2_Byp = 0;/* Referenced by:
                                                                      * '<S106>/Calib'
                                                                      * '<S277>/Calib'
                                                                      */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_b_ProxiCADM2_BypEnbl = 0;/* Referenced by:
                                                                      * '<S107>/Calib'
                                                                      * '<S278>/Calib'
                                                                      */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_b_ProxiCADM_Byp = 0;/* Referenced by:
                                                                      * '<S108>/Calib'
                                                                      * '<S279>/Calib'
                                                                      */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_b_ProxiCADM_BypEnbl = 0;/* Referenced by:
                                                                      * '<S109>/Calib'
                                                                      * '<S280>/Calib'
                                                                      */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_b_ProxiCC_Byp = 0;/* Referenced by:
                                                                      * '<S111>/Calib'
                                                                      * '<S282>/Calib'
                                                                      * '<S286>/Calib'
                                                                      */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_b_ProxiCC_BypEnbl = 0;/* Referenced by:
                                                                      * '<S110>/Calib'
                                                                      * '<S281>/Calib'
                                                                      * '<S285>/Calib'
                                                                      */
static volatile CONST(boolean, PRXR_VAR_INIT)
    KePRXR_b_ProxiIncreasingSpdCnst_BypEnbl = 0;/* Referenced by:
                                                 * '<S112>/Calib'
                                                 * '<S283>/Calib'
                                                 */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_b_ProxiNavPrsnc_Byp = 0;/* Referenced by: '<S114>/Calib' */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_b_ProxiNavPrsnc_BypEnbl = 0;/* Referenced by: '<S115>/Calib' */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_b_ProxiSpdLimiter_Byp = 0;/* Referenced by:
                                                                      * '<S117>/Calib'
                                                                      * '<S288>/Calib'
                                                                      */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_b_ProxiSpdLimiter_BypEnbl =
    0;                                 /* Referenced by:
                                        * '<S116>/Calib'
                                        * '<S287>/Calib'
                                        */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_b_ProxiSpdomtrTol_BypEnbl =
    0;                                 /* Referenced by:
                                        * '<S118>/Calib'
                                        * '<S289>/Calib'
                                        */
static volatile CONST(boolean, PRXR_VAR_INIT)
    KePRXR_b_ProxiTrafficSignRcgntn_Byp = 0;/* Referenced by:
                                             * '<S121>/Calib'
                                             * '<S292>/Calib'
                                             */
static volatile CONST(boolean, PRXR_VAR_INIT)
    KePRXR_b_ProxiTrafficSignRcgntn_BypEnbl = 0;/* Referenced by:
                                                 * '<S120>/Calib'
                                                 * '<S291>/Calib'
                                                 */
static volatile CONST(boolean, PRXR_VAR_INIT)
    KePRXR_b_Proxi_Autonomy_Lvl_BypEnbl = 0;/* Referenced by:
                                             * '<S122>/Calib'
                                             * '<S293>/Calib'
                                             */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_b_Proxi_CC_Logic_BypEnbl =
    0;                                 /* Referenced by:
                                        * '<S124>/Calib'
                                        * '<S295>/Calib'
                                        */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_b_ProxyHybridType_BypEnbl =
    0;                                 /* Referenced by:
                                        * '<S126>/Calib'
                                        * '<S297>/Calib'
                                        */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_b_RRCCPROXI_Byp = 0;/* Referenced by:
                                                                      * '<S128>/Calib'
                                                                      * '<S299>/Calib'
                                                                      */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_b_RRCCPROXI_BypEnbl = 0;/* Referenced by:
                                                                      * '<S129>/Calib'
                                                                      * '<S300>/Calib'
                                                                      */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_b_RRM_VP_Level_BypEnbl = 0;/* Referenced by:
                                                                      * '<S130>/Calib'
                                                                      * '<S301>/Calib'
                                                                      */
static volatile CONST(boolean, PRXR_VAR_INIT)
    KePRXR_b_RWSRackTravelLimits_BypEnbl = 0;/* Referenced by:
                                              * '<S133>/Calib'
                                              * '<S304>/Calib'
                                              */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_b_RearWSSType_Byp = 0;/* Referenced by:
                                                                      * '<S135>/Calib'
                                                                      * '<S306>/Calib'
                                                                      */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_b_RearWSSType_BypEnbl = 0;/* Referenced by:
                                                                      * '<S136>/Calib'
                                                                      * '<S307>/Calib'
                                                                      */
static volatile CONST(boolean, PRXR_VAR_INIT)
    KePRXR_b_SemiAutomaticParkingSystem_Byp = 0;/* Referenced by:
                                                 * '<S137>/Calib'
                                                 * '<S308>/Calib'
                                                 */
static volatile CONST(boolean, PRXR_VAR_INIT)
    KePRXR_b_SemiAutomaticParkingSystem_BypEnbl = 0;/* Referenced by:
                                                     * '<S138>/Calib'
                                                     * '<S309>/Calib'
                                                     */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_b_ShiftIndSt_BypEnbl = 0;/* Referenced by:
                                                                      * '<S139>/Calib'
                                                                      * '<S310>/Calib'
                                                                      */
static volatile CONST(boolean, PRXR_VAR_INIT)
    KePRXR_b_SuspensionConfigurationFront_BypEnbl = 0;/* Referenced by:
                                                       * '<S142>/Calib'
                                                       * '<S313>/Calib'
                                                       */
static volatile CONST(boolean, PRXR_VAR_INIT)
    KePRXR_b_SuspensionConfigurationRear_BypEnbl = 0;/* Referenced by:
                                                      * '<S144>/Calib'
                                                      * '<S315>/Calib'
                                                      */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_b_TCaseHiRatio_BypEnbl = 0;/* Referenced by:
                                                                      * '<S146>/Calib'
                                                                      * '<S317>/Calib'
                                                                      */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_b_TCaseLoRatio_BypEnbl = 0;/* Referenced by:
                                                                      * '<S148>/Calib'
                                                                      * '<S319>/Calib'
                                                                      */
static volatile CONST(boolean, PRXR_VAR_INIT)
    KePRXR_b_Terrain_Selector_Modes_BypEnbl = 0;/* Referenced by:
                                                 * '<S152>/Calib'
                                                 * '<S323>/Calib'
                                                 */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_b_Track_Mode_Byp = 0;/* Referenced by:
                                                                      * '<S151>/Calib'
                                                                      * '<S322>/Calib'
                                                                      */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_b_Track_Mode_BypEnbl = 0;/* Referenced by:
                                                                      * '<S150>/Calib'
                                                                      * '<S321>/Calib'
                                                                      */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_b_TyreSizeSecondary_BypEnbl
    = 0;                               /* Referenced by:
                                        * '<S154>/Calib'
                                        * '<S325>/Calib'
                                        */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_b_V2L_Present_Byp = 0;/* Referenced by:
                                                                      * '<S156>/Calib'
                                                                      * '<S327>/Calib'
                                                                      */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_b_V2L_Present_BypEnbl = 0;/* Referenced by:
                                                                      * '<S157>/Calib'
                                                                      * '<S328>/Calib'
                                                                      */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_b_VehCategory_BypEnbl = 0;/* Referenced by:
                                                                      * '<S162>/Calib'
                                                                      * '<S333>/Calib'
                                                                      */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_b_VehCountryCode_BypEnbl =
    0;                                 /* Referenced by:
                                        * '<S167>/Calib'
                                        * '<S338>/Calib'
                                        */
static volatile CONST(boolean, PRXR_VAR_INIT)
    KePRXR_b_VehicleLineConfiguration_BypEnbl = 0;/* Referenced by:
                                                   * '<S170>/Calib'
                                                   * '<S341>/Calib'
                                                   */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_b_Wheelbase_BypEnbl = 0;/* Referenced by:
                                                                      * '<S67>/Calib'
                                                                      * '<S172>/Calib'
                                                                      * '<S238>/Calib'
                                                                      * '<S343>/Calib'
                                                                      */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_b_WhlRadius_BypEnbl = 0;/* Referenced by:
                                                                      * '<S159>/Calib'
                                                                      * '<S330>/Calib'
                                                                      */
static volatile CONST(uint16, PRXR_VAR_INIT) KePRXR_d_TyreSizeSecondary_Byp = 0U;/* Referenced by:
                                                                      * '<S155>/Calib'
                                                                      * '<S326>/Calib'
                                                                      */
static volatile CONST(uint8, PRXR_VAR_INIT) KePRXR_d_VehCountryCode_Byp = 0U;/* Referenced by:
                                                                      * '<S169>/Calib'
                                                                      * '<S340>/Calib'
                                                                      */
static volatile CONST(uint8, PRXR_VAR_INIT) KePRXR_d_VehCountryCode_China = 16U;/* Referenced by:
                                                                      * '<S168>/Calib'
                                                                      * '<S339>/Calib'
                                                                      */
static volatile CONST(TePRXR_e_AxleLockerPresence, PRXR_VAR_INIT)
    KePRXR_e_Axle_Locker_Presence_Byp = CePRXR_e_ALP_Absent;/* Referenced by:
                                                             * '<S58>/Calib'
                                                             * '<S229>/Calib'
                                                             */
static volatile CONST(TePRXR_e_OnboardPowPanelType, PRXR_VAR_INIT)
    KePRXR_e_OnboardPowPanelType_Byp = CePRXR_e_NoType;/* Referenced by:
                                                        * '<S100>/Calib'
                                                        * '<S271>/Calib'
                                                        */
static volatile CONST(TePRXR_e_Plug_and_Charge, PRXR_VAR_INIT)
    KePRXR_e_Plug_and_Charge_Byp = CePRXR_e_Absent;/* Referenced by:
                                                    * '<S102>/Calib'
                                                    * '<S273>/Calib'
                                                    */
static volatile CONST(TePRXR_e_AdaptiveCruiseCtrl, PRXR_VAR_INIT)
    KePRXR_e_ProxiACC_Byp = CePRXR_e_ACC_Absent;/* Referenced by:
                                                 * '<S104>/Calib'
                                                 * '<S275>/Calib'
                                                 */
static volatile CONST(TePRXR_e_IncreasingSpdConst, PRXR_VAR_INIT)
    KePRXR_e_ProxiIncreasingSpdCnst_Byp = CePRXR_e_Increasing_0;/* Referenced by:
                                                                 * '<S113>/Calib'
                                                                 * '<S284>/Calib'
                                                                 */
static volatile CONST(TePRXR_e_Autonomy_Lvl, PRXR_VAR_INIT)
    KePRXR_e_Proxi_Autonomy_Lvl_Byp = CePRXR_e_None_Level1;/* Referenced by:
                                                            * '<S123>/Calib'
                                                            * '<S294>/Calib'
                                                            */
static volatile CONST(TePRXR_e_Cruise_Control_Logic, PRXR_VAR_INIT)
    KePRXR_e_Proxi_CC_Logic_Byp = CePRXR_e_Logic1;/* Referenced by:
                                                   * '<S125>/Calib'
                                                   * '<S296>/Calib'
                                                   */
static volatile CONST(TePRXR_e_HybridType, PRXR_VAR_INIT)
    KePRXR_e_ProxyHybridType_Byp = CePRXR_e_NotApplicable;/* Referenced by:
                                                           * '<S127>/Calib'
                                                           * '<S298>/Calib'
                                                           */
static volatile CONST(TePRXR_e_RRM_VP_Level, PRXR_VAR_INIT)
    KePRXR_e_RRM_VP_Level_Byp = CePRXR_e_RRM_VP_Absent;/* Referenced by:
                                                        * '<S131>/Calib'
                                                        * '<S302>/Calib'
                                                        */
static volatile CONST(TePRXR_e_RWSRackTravelLimits, PRXR_VAR_INIT)
    KePRXR_e_RWSRackTravelLimits_Byp = CePRXR_e_Limit_1;/* Referenced by:
                                                         * '<S134>/Calib'
                                                         * '<S305>/Calib'
                                                         */
static volatile CONST(TePRXR_e_ShiftIndSt, PRXR_VAR_INIT)
    KePRXR_e_ShiftIndSt_Byp = CePRXR_e_NotPresent;/* Referenced by:
                                                   * '<S140>/Calib'
                                                   * '<S311>/Calib'
                                                   */
static volatile CONST(TePRXR_e_TerrainSelectorModes, PRXR_VAR_INIT)
    KePRXR_e_Terrain_Selector_Modes_Byp = CePRXR_e_Invalid;/* Referenced by:
                                                            * '<S153>/Calib'
                                                            * '<S324>/Calib'
                                                            */
static volatile CONST(TePRXR_e_VehCategory, PRXR_VAR_INIT)
    KePRXR_e_VehCategory_Byp = CePRXR_e_Category_M1;/* Referenced by:
                                                     * '<S163>/Calib'
                                                     * '<S334>/Calib'
                                                     */
static volatile CONST(float32, PRXR_VAR_INIT) KePRXR_l_WhlRadiusThrsh = 0.001F;/* Referenced by:
                                                                      * '<S160>/Calib'
                                                                      * '<S331>/Calib'
                                                                      */
static volatile CONST(float32, PRXR_VAR_INIT) KePRXR_l_WhlRadius_Byp = 0.3F;/* Referenced by:
                                                                      * '<S161>/Calib'
                                                                      * '<S332>/Calib'
                                                                      */
static volatile CONST(float32, PRXR_VAR_INIT) KePRXR_r_Axle_Ratio_Byp = 3.45F;/* Referenced by:
                                                                      * '<S60>/Calib'
                                                                      * '<S231>/Calib'
                                                                      */
static volatile CONST(float32, PRXR_VAR_INIT) KePRXR_r_TCaseHiRatio_Byp = 3.45F;/* Referenced by:
                                                                      * '<S147>/Calib'
                                                                      * '<S318>/Calib'
                                                                      */
static volatile CONST(float32, PRXR_VAR_INIT) KePRXR_r_TCaseLoRatio_Byp = 3.45F;/* Referenced by:
                                                                      * '<S149>/Calib'
                                                                      * '<S320>/Calib'
                                                                      */
static volatile CONST(float32, PRXR_VAR_INIT) KePRXR_v_HomSpdLim_Byp = 255.0F;/* Referenced by:
                                                                      * '<S90>/Calib'
                                                                      * '<S261>/Calib'
                                                                      */
static volatile CONST(uint8, PRXR_VAR_INIT) KePRXR_y_ConfigurationFamilies_Byp =
    255U;                              /* Referenced by:
                                        * '<S70>/Calib'
                                        * '<S241>/Calib'
                                        */
static volatile CONST(uint8, PRXR_VAR_INIT) KePRXR_y_DriveStyleSelector_Byp =
    255U;                              /* Referenced by:
                                        * '<S76>/Calib'
                                        * '<S247>/Calib'
                                        */
static volatile CONST(uint8, PRXR_VAR_INIT) KePRXR_y_Drive_Type_Variant_Byp =
    255U;                              /* Referenced by:
                                        * '<S78>/Calib'
                                        * '<S249>/Calib'
                                        */
static volatile CONST(uint8, PRXR_VAR_INIT) KePRXR_y_Lane_Assist_Byp = 255U;/* Referenced by:
                                                                      * '<S92>/Calib'
                                                                      * '<S263>/Calib'
                                                                      */
static volatile CONST(boolean, PRXR_VAR_INIT) KePRXR_y_ModelYear_Byp = 0;/* Referenced by:
                                                                      * '<S96>/Calib'
                                                                      * '<S267>/Calib'
                                                                      */
static volatile CONST(uint8, PRXR_VAR_INIT) KePRXR_y_NumOfAGSUnits_Byp = 0U;/* Referenced by:
                                                                      * '<S98>/Calib'
                                                                      * '<S269>/Calib'
                                                                      */
static volatile CONST(uint8, PRXR_VAR_INIT)
    KePRXR_y_SuspensionConfigurationFront_Byp = 0U;/* Referenced by:
                                                    * '<S143>/Calib'
                                                    * '<S314>/Calib'
                                                    */
static volatile CONST(uint8, PRXR_VAR_INIT)
    KePRXR_y_SuspensionConfigurationRear_Byp = 0U;/* Referenced by:
                                                   * '<S145>/Calib'
                                                   * '<S316>/Calib'
                                                   */
static volatile CONST(uint8, PRXR_VAR_INIT)
    KePRXR_y_VehicleLineConfiguration_Byp = 255U;/* Referenced by:
                                                  * '<S171>/Calib'
                                                  * '<S342>/Calib'
                                                  */
static volatile CONST(uint8, PRXR_VAR_INIT) KePRXR_y_Wheelbase_Byp = 255U;/* Referenced by:
                                                                      * '<S68>/Calib'
                                                                      * '<S173>/Calib'
                                                                      * '<S239>/Calib'
                                                                      * '<S344>/Calib'
                                                                      */

#define STOP_SEC_CALIB_UNSPECIFIED_PRXR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_PRXR
#include "MemMap.h"

VAR(DW_PRXR_ac_T, PRXR_VAR_INIT) PRXR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_PRXR
#include "MemMap.h"

/* Model step function for TID1 */
FUNC(void, PRXR_CODE) PRXR_SlowTEF(void) /* Explicit Task: SlowTEF */
{
    TePRXR_e_VehicleCountryCode rtb_Switch_0;
    uint8 rtb_Switch;

    /* RootInportFunctionCallGenerator generated from: '<Root>/SlowTEF' incorporates:
     *  SubSystem: '<Root>/PRXR_SlowTEF'
     */
    /* Switch: '<S54>/Switch' incorporates:
     *  Constant: '<S167>/Calib'
     */
    if (KePRXR_b_VehCountryCode_BypEnbl)
    {
        /* Switch: '<S54>/Switch' incorporates:
         *  Constant: '<S169>/Calib'
         */
        rtb_Switch = KePRXR_d_VehCountryCode_Byp;
    }
    else
    {
        /* Switch: '<S54>/Switch' incorporates:
         *  DataStoreRead: '<S1>/Data Store Read1'
         */
        rtb_Switch = PRXR_ac_DW.EePRXR_e_VehicleCountryCode;
    }

    /* End of Switch: '<S54>/Switch' */

    /* Outport: '<Root>/VePRXR_y_VehicleCountryCode' incorporates:
     *  SignalConversion generated from: '<S1>/VePRXR_y_VehicleCountryCode'
     */
    (void)Rte_Write_VePRXR_y_VehicleCountryCode_Value(rtb_Switch);

    /* Switch: '<S166>/Switch1' incorporates:
     *  Constant: '<S164>/Constant'
     *  Constant: '<S165>/Constant'
     *  Constant: '<S168>/Calib'
     *  RelationalOperator: '<S54>/Comparison8'
     */
    if (rtb_Switch == KePRXR_d_VehCountryCode_China)
    {
        rtb_Switch_0 = CePRXR_e_VCC_CHINA;
    }
    else
    {
        rtb_Switch_0 = CePRXR_e_VCC_OTHERS;
    }

    /* Outport: '<Root>/VePRXR_e_VehicleCountryCode' incorporates:
     *  Switch: '<S166>/Switch1'
     */
    (void)Rte_Write_VePRXR_e_VehicleCountryCode_Value(rtb_Switch_0);

    /* Switch: '<S52>/Switch' incorporates:
     *  Constant: '<S159>/Calib'
     */
    if (KePRXR_b_WhlRadius_BypEnbl)
    {
        /* Outport: '<Root>/VePRXR_l_WhlRadius' incorporates:
         *  Constant: '<S161>/Calib'
         */
        (void)Rte_Write_VePRXR_l_WhlRadius_Value(KePRXR_l_WhlRadius_Byp);
    }
    else
    {
        /* Outport: '<Root>/VePRXR_l_WhlRadius' incorporates:
         *  Constant: '<S158>/Calib'
         *  Constant: '<S160>/Calib'
         *  DataStoreRead: '<S1>/Data Store Read'
         *  DataTypeConversion: '<S52>/Data Type Conversion'
         *  MinMax: '<S52>/MinMax1'
         *  Product: '<S52>/Divide'
         */
        (void)Rte_Write_VePRXR_l_WhlRadius_Value(fmaxf(((float32)
            PRXR_ac_DW.EePRXR_l_WhlRadius) * KePRXR_Cf_CnvrtCircumToRadius,
            KePRXR_l_WhlRadiusThrsh));
    }

    /* End of Switch: '<S52>/Switch' */

    /* Switch: '<S43>/Switch' incorporates:
     *  Constant: '<S139>/Calib'
     *  DataStoreRead: '<S1>/Data Store Read3'
     *  LookupNDDirect: '<S141>/Direct Lookup Table (n-D)'
     *
     * About '<S141>/Direct Lookup Table (n-D)':
     *  1-dimensional Direct Look-Up returning a Scalar,
     *
     *     Remove protection against out-of-range input in generated code: 'off'
     */
    if (KePRXR_b_ShiftIndSt_BypEnbl)
    {
        /* Outport: '<Root>/VePRXR_e_ShiftIndSt' incorporates:
         *  Constant: '<S140>/Calib'
         */
        (void)Rte_Write_VePRXR_e_ShiftIndSt_Value(KePRXR_e_ShiftIndSt_Byp);
    }
    else
    {
        if (((sint32)PRXR_ac_DW.EePRXR_e_ShiftIndSt) < 3)
        {
            /* LookupNDDirect: '<S141>/Direct Lookup Table (n-D)' incorporates:
             *  DataStoreRead: '<S1>/Data Store Read3'
             *
             * About '<S141>/Direct Lookup Table (n-D)':
             *  1-dimensional Direct Look-Up returning a Scalar,
             *
             *     Remove protection against out-of-range input in generated code: 'off'
             */
            rtb_Switch = PRXR_ac_DW.EePRXR_e_ShiftIndSt;
        }
        else
        {
            /* LookupNDDirect: '<S141>/Direct Lookup Table (n-D)'
             *
             * About '<S141>/Direct Lookup Table (n-D)':
             *  1-dimensional Direct Look-Up returning a Scalar,
             *
             *     Remove protection against out-of-range input in generated code: 'off'
             */
            rtb_Switch = 3U;
        }

        /* Outport: '<Root>/VePRXR_e_ShiftIndSt' incorporates:
         *  LookupNDDirect: '<S141>/Direct Lookup Table (n-D)'
         *
         * About '<S141>/Direct Lookup Table (n-D)':
         *  1-dimensional Direct Look-Up returning a Scalar,
         *
         *     Remove protection against out-of-range input in generated code: 'off'
         */
        (void)Rte_Write_VePRXR_e_ShiftIndSt_Value(KaPRXR_e_ShiftIndSt_Map
            [(rtb_Switch)]);
    }

    /* End of Switch: '<S43>/Switch' */

    /* Switch: '<S39>/Switch' incorporates:
     *  Constant: '<S130>/Calib'
     *  DataStoreRead: '<S1>/Data Store Read2'
     *  LookupNDDirect: '<S132>/Direct Lookup Table (n-D)'
     *
     * About '<S132>/Direct Lookup Table (n-D)':
     *  1-dimensional Direct Look-Up returning a Scalar,
     *
     *     Remove protection against out-of-range input in generated code: 'off'
     */
    if (KePRXR_b_RRM_VP_Level_BypEnbl)
    {
        /* Outport: '<Root>/VePRXR_e_RRM_VP_Level' incorporates:
         *  Constant: '<S131>/Calib'
         */
        (void)Rte_Write_VePRXR_e_RRM_VP_Level_Value(KePRXR_e_RRM_VP_Level_Byp);
    }
    else
    {
        if (((sint32)PRXR_ac_DW.EePRXR_e_RRM_VP_Level) < 4)
        {
            /* LookupNDDirect: '<S132>/Direct Lookup Table (n-D)' incorporates:
             *  DataStoreRead: '<S1>/Data Store Read2'
             *
             * About '<S132>/Direct Lookup Table (n-D)':
             *  1-dimensional Direct Look-Up returning a Scalar,
             *
             *     Remove protection against out-of-range input in generated code: 'off'
             */
            rtb_Switch = PRXR_ac_DW.EePRXR_e_RRM_VP_Level;
        }
        else
        {
            /* LookupNDDirect: '<S132>/Direct Lookup Table (n-D)'
             *
             * About '<S132>/Direct Lookup Table (n-D)':
             *  1-dimensional Direct Look-Up returning a Scalar,
             *
             *     Remove protection against out-of-range input in generated code: 'off'
             */
            rtb_Switch = 4U;
        }

        /* Outport: '<Root>/VePRXR_e_RRM_VP_Level' incorporates:
         *  LookupNDDirect: '<S132>/Direct Lookup Table (n-D)'
         *
         * About '<S132>/Direct Lookup Table (n-D)':
         *  1-dimensional Direct Look-Up returning a Scalar,
         *
         *     Remove protection against out-of-range input in generated code: 'off'
         */
        (void)Rte_Write_VePRXR_e_RRM_VP_Level_Value(KaPRXR_e_RRM_VP_Level_Map
            [(rtb_Switch)]);
    }

    /* End of Switch: '<S39>/Switch' */

    /* Switch: '<S26>/Switch' incorporates:
     *  Constant: '<S103>/Calib'
     *  DataStoreRead: '<S1>/Data Store Read4'
     *  LookupNDDirect: '<S105>/Direct Lookup Table (n-D)'
     *
     * About '<S105>/Direct Lookup Table (n-D)':
     *  1-dimensional Direct Look-Up returning a Scalar,
     *
     *     Remove protection against out-of-range input in generated code: 'off'
     */
    if (KePRXR_b_ProxiACC_BypEnbl)
    {
        /* Outport: '<Root>/VePRXR_e_ProxiACC' incorporates:
         *  Constant: '<S104>/Calib'
         */
        (void)Rte_Write_VePRXR_e_ProxiACC_Value(KePRXR_e_ProxiACC_Byp);
    }
    else
    {
        if (((sint32)PRXR_ac_DW.EePRXR_e_ProxiACC) < 3)
        {
            /* LookupNDDirect: '<S105>/Direct Lookup Table (n-D)' incorporates:
             *  DataStoreRead: '<S1>/Data Store Read4'
             *
             * About '<S105>/Direct Lookup Table (n-D)':
             *  1-dimensional Direct Look-Up returning a Scalar,
             *
             *     Remove protection against out-of-range input in generated code: 'off'
             */
            rtb_Switch = PRXR_ac_DW.EePRXR_e_ProxiACC;
        }
        else
        {
            /* LookupNDDirect: '<S105>/Direct Lookup Table (n-D)'
             *
             * About '<S105>/Direct Lookup Table (n-D)':
             *  1-dimensional Direct Look-Up returning a Scalar,
             *
             *     Remove protection against out-of-range input in generated code: 'off'
             */
            rtb_Switch = 3U;
        }

        /* Outport: '<Root>/VePRXR_e_ProxiACC' incorporates:
         *  LookupNDDirect: '<S105>/Direct Lookup Table (n-D)'
         *
         * About '<S105>/Direct Lookup Table (n-D)':
         *  1-dimensional Direct Look-Up returning a Scalar,
         *
         *     Remove protection against out-of-range input in generated code: 'off'
         */
        (void)Rte_Write_VePRXR_e_ProxiACC_Value(KaPRXR_e_ProxiACC_Map
            [(rtb_Switch)]);
    }

    /* End of Switch: '<S26>/Switch' */

    /* Switch: '<S29>/Switch' incorporates:
     *  Constant: '<S110>/Calib'
     */
    if (KePRXR_b_ProxiCC_BypEnbl)
    {
        /* Outport: '<Root>/VePRXR_b_ProxiCC' incorporates:
         *  Constant: '<S111>/Calib'
         */
        (void)Rte_Write_VePRXR_b_ProxiCC_Value(KePRXR_b_ProxiCC_Byp);
    }
    else
    {
        /* Outport: '<Root>/VePRXR_b_ProxiCC' incorporates:
         *  DataStoreRead: '<S1>/Data Store Read5'
         */
        (void)Rte_Write_VePRXR_b_ProxiCC_Value(PRXR_ac_DW.EePRXR_b_ProxiCC);
    }

    /* End of Switch: '<S29>/Switch' */

    /* Switch: '<S32>/Switch' incorporates:
     *  Constant: '<S116>/Calib'
     */
    if (KePRXR_b_ProxiSpdLimiter_BypEnbl)
    {
        /* Outport: '<Root>/VePRXR_b_ProxiSpdLimiter' incorporates:
         *  Constant: '<S117>/Calib'
         */
        (void)Rte_Write_VePRXR_b_ProxiSpdLimiter_Value
            (KePRXR_b_ProxiSpdLimiter_Byp);
    }
    else
    {
        /* Outport: '<Root>/VePRXR_b_ProxiSpdLimiter' incorporates:
         *  DataStoreRead: '<S1>/Data Store Read6'
         */
        (void)Rte_Write_VePRXR_b_ProxiSpdLimiter_Value
            (PRXR_ac_DW.EePRXR_b_ProxiSpdLimiter);
    }

    /* End of Switch: '<S32>/Switch' */

    /* Switch: '<S31>/Switch' incorporates:
     *  Constant: '<S115>/Calib'
     */
    if (KePRXR_b_ProxiNavPrsnc_BypEnbl)
    {
        /* Outport: '<Root>/VePRXR_b_ProxiNavPrsnc' incorporates:
         *  Constant: '<S114>/Calib'
         */
        (void)Rte_Write_VePRXR_b_ProxiNavPrsnc_Value(KePRXR_b_ProxiNavPrsnc_Byp);
    }
    else
    {
        /* Outport: '<Root>/VePRXR_b_ProxiNavPrsnc' incorporates:
         *  DataStoreRead: '<S1>/Data Store Read7'
         */
        (void)Rte_Write_VePRXR_b_ProxiNavPrsnc_Value
            (PRXR_ac_DW.EePRXR_b_ProxiNavPrsnc);
    }

    /* End of Switch: '<S31>/Switch' */

    /* Switch: '<S34>/Switch' incorporates:
     *  Constant: '<S120>/Calib'
     */
    if (KePRXR_b_ProxiTrafficSignRcgntn_BypEnbl)
    {
        /* Outport: '<Root>/VePRXR_b_ProxiTrafficSignRcgntn' incorporates:
         *  Constant: '<S121>/Calib'
         */
        (void)Rte_Write_VePRXR_b_ProxiTrafficSignRcgntn_Value
            (KePRXR_b_ProxiTrafficSignRcgntn_Byp);
    }
    else
    {
        /* Outport: '<Root>/VePRXR_b_ProxiTrafficSignRcgntn' incorporates:
         *  DataStoreRead: '<S1>/Data Store Read8'
         */
        (void)Rte_Write_VePRXR_b_ProxiTrafficSignRcgntn_Value
            (PRXR_ac_DW.EePRXR_b_ProxiTrafficSignRcgntn);
    }

    /* End of Switch: '<S34>/Switch' */

    /* Switch: '<S33>/Switch' incorporates:
     *  Constant: '<S118>/Calib'
     */
    if (KePRXR_b_ProxiSpdomtrTol_BypEnbl)
    {
        /* Outport: '<Root>/VePRXR_Pct_ProxiSpdomtrTol' incorporates:
         *  Constant: '<S119>/Calib'
         */
        (void)Rte_Write_VePRXR_Pct_ProxiSpdomtrTol_Value
            (KePRXR_Pct_ProxiSpdomtrTol_Byp);
    }
    else
    {
        /* Outport: '<Root>/VePRXR_Pct_ProxiSpdomtrTol' incorporates:
         *  DataStoreRead: '<S1>/Data Store Read9'
         */
        (void)Rte_Write_VePRXR_Pct_ProxiSpdomtrTol_Value((float32)
            PRXR_ac_DW.EePRXR_Pct_ProxiSpdomtrTol);
    }

    /* End of Switch: '<S33>/Switch' */

    /* Switch: '<S30>/Switch' incorporates:
     *  Constant: '<S112>/Calib'
     */
    if (KePRXR_b_ProxiIncreasingSpdCnst_BypEnbl)
    {
        /* Outport: '<Root>/VePRXR_e_ProxiIncreasingSpdCnst' incorporates:
         *  Constant: '<S113>/Calib'
         */
        (void)Rte_Write_VePRXR_e_ProxiIncreasingSpdCnst_Value
            (KePRXR_e_ProxiIncreasingSpdCnst_Byp);
    }
    else
    {
        /* Outport: '<Root>/VePRXR_e_ProxiIncreasingSpdCnst' incorporates:
         *  DataStoreRead: '<S1>/Data Store Read41'
         *  DataTypeConversion: '<S30>/Data Type Conversion'
         */
        (void)Rte_Write_VePRXR_e_ProxiIncreasingSpdCnst_Value
            ((TePRXR_e_IncreasingSpdConst)
             PRXR_ac_DW.EePRXR_e_ProxiIncreasingSpdCnst);
    }

    /* End of Switch: '<S30>/Switch' */

    /* Switch: '<S4>/Switch' incorporates:
     *  Constant: '<S59>/Calib'
     */
    if (KePRXR_b_Axle_Ratio_BypEnbl)
    {
        /* Outport: '<Root>/VePRXR_r_Axle_Ratio' incorporates:
         *  Constant: '<S60>/Calib'
         */
        (void)Rte_Write_VePRXR_r_Axle_Ratio_Value(KePRXR_r_Axle_Ratio_Byp);
    }
    else
    {
        /* Outport: '<Root>/VePRXR_r_Axle_Ratio' incorporates:
         *  DataStoreRead: '<S1>/Data Store Read10'
         */
        (void)Rte_Write_VePRXR_r_Axle_Ratio_Value((float32)
            PRXR_ac_DW.EePRXR_r_Axle_Ratio);
    }

    /* End of Switch: '<S4>/Switch' */

    /* Switch: '<S46>/Switch' incorporates:
     *  Constant: '<S146>/Calib'
     */
    if (KePRXR_b_TCaseHiRatio_BypEnbl)
    {
        /* Outport: '<Root>/VePRXR_r_TCaseHiRatio' incorporates:
         *  Constant: '<S147>/Calib'
         */
        (void)Rte_Write_VePRXR_r_TCaseHiRatio_Value(KePRXR_r_TCaseHiRatio_Byp);
    }
    else
    {
        /* Outport: '<Root>/VePRXR_r_TCaseHiRatio' incorporates:
         *  DataStoreRead: '<S1>/Data Store Read12'
         */
        (void)Rte_Write_VePRXR_r_TCaseHiRatio_Value((float32)
            PRXR_ac_DW.EePRXR_r_TCaseHiRatio);
    }

    /* End of Switch: '<S46>/Switch' */

    /* Switch: '<S47>/Switch' incorporates:
     *  Constant: '<S148>/Calib'
     */
    if (KePRXR_b_TCaseLoRatio_BypEnbl)
    {
        /* Outport: '<Root>/VePRXR_r_TCaseLoRatio' incorporates:
         *  Constant: '<S149>/Calib'
         */
        (void)Rte_Write_VePRXR_r_TCaseLoRatio_Value(KePRXR_r_TCaseLoRatio_Byp);
    }
    else
    {
        /* Outport: '<Root>/VePRXR_r_TCaseLoRatio' incorporates:
         *  DataStoreRead: '<S1>/Data Store Read13'
         */
        (void)Rte_Write_VePRXR_r_TCaseLoRatio_Value((float32)
            PRXR_ac_DW.EePRXR_r_TCaseLoRatio);
    }

    /* End of Switch: '<S47>/Switch' */

    /* Switch: '<S37>/Switch' incorporates:
     *  Constant: '<S126>/Calib'
     */
    if (KePRXR_b_ProxyHybridType_BypEnbl)
    {
        /* Outport: '<Root>/VePRXR_e_ProxyHybridType' incorporates:
         *  Constant: '<S127>/Calib'
         */
        (void)Rte_Write_VePRXR_e_ProxyHybridType_Value
            (KePRXR_e_ProxyHybridType_Byp);
    }
    else
    {
        /* Outport: '<Root>/VePRXR_e_ProxyHybridType' incorporates:
         *  DataStoreRead: '<S1>/Data Store Read11'
         *  DataTypeConversion: '<S37>/Data Type Conversion'
         */
        (void)Rte_Write_VePRXR_e_ProxyHybridType_Value((TePRXR_e_HybridType)
            PRXR_ac_DW.EePRXR_e_ProxyHybridType);
    }

    /* End of Switch: '<S37>/Switch' */

    /* Switch: '<S19>/Switch' incorporates:
     *  Constant: '<S89>/Calib'
     */
    if (KePRXR_b_HomSpdLim_BypEnbl)
    {
        /* Outport: '<Root>/VePRXR_v_HomSpdLim' incorporates:
         *  Constant: '<S90>/Calib'
         */
        (void)Rte_Write_VePRXR_v_HomSpdLim_Value(KePRXR_v_HomSpdLim_Byp);
    }
    else
    {
        /* Outport: '<Root>/VePRXR_v_HomSpdLim' incorporates:
         *  DataStoreRead: '<S1>/Data Store Read14'
         */
        (void)Rte_Write_VePRXR_v_HomSpdLim_Value((float32)
            PRXR_ac_DW.EePRXR_v_HomSpdLim);
    }

    /* End of Switch: '<S19>/Switch' */

    /* Switch: '<S53>/Switch' incorporates:
     *  Constant: '<S162>/Calib'
     */
    if (KePRXR_b_VehCategory_BypEnbl)
    {
        /* Outport: '<Root>/VePRXR_e_VehCategory' incorporates:
         *  Constant: '<S163>/Calib'
         */
        (void)Rte_Write_VePRXR_e_VehCategory_Value(KePRXR_e_VehCategory_Byp);
    }
    else
    {
        /* Outport: '<Root>/VePRXR_e_VehCategory' incorporates:
         *  DataStoreRead: '<S1>/Data Store Read15'
         *  DataTypeConversion: '<S53>/Data Type Conversion'
         */
        (void)Rte_Write_VePRXR_e_VehCategory_Value((TePRXR_e_VehCategory)
            PRXR_ac_DW.EePRXR_e_VehCategory);
    }

    /* End of Switch: '<S53>/Switch' */

    /* Switch: '<S38>/Switch' incorporates:
     *  Constant: '<S129>/Calib'
     */
    if (KePRXR_b_RRCCPROXI_BypEnbl)
    {
        /* Outport: '<Root>/VePRXR_b_RRCCPROXI' incorporates:
         *  Constant: '<S128>/Calib'
         */
        (void)Rte_Write_VePRXR_b_RRCCPROXI_Value(KePRXR_b_RRCCPROXI_Byp);
    }
    else
    {
        /* Outport: '<Root>/VePRXR_b_RRCCPROXI' incorporates:
         *  DataStoreRead: '<S1>/Data Store Read16'
         */
        (void)Rte_Write_VePRXR_b_RRCCPROXI_Value(PRXR_ac_DW.EePRXR_b_RRCCPROXI);
    }

    /* End of Switch: '<S38>/Switch' */

    /* Switch: '<S35>/Switch' incorporates:
     *  Constant: '<S122>/Calib'
     */
    if (KePRXR_b_Proxi_Autonomy_Lvl_BypEnbl)
    {
        /* Outport: '<Root>/VePRXR_e_Proxi_Autonomy_Lvl' incorporates:
         *  Constant: '<S123>/Calib'
         */
        (void)Rte_Write_VePRXR_e_Proxi_Autonomy_Lvl_Value
            (KePRXR_e_Proxi_Autonomy_Lvl_Byp);
    }
    else
    {
        /* Outport: '<Root>/VePRXR_e_Proxi_Autonomy_Lvl' incorporates:
         *  DataStoreRead: '<S1>/Data Store Read17'
         *  DataTypeConversion: '<S35>/Data Type Conversion'
         */
        (void)Rte_Write_VePRXR_e_Proxi_Autonomy_Lvl_Value((TePRXR_e_Autonomy_Lvl)
            PRXR_ac_DW.EePRXR_e_Proxi_Autonomy_Lvl);
    }

    /* End of Switch: '<S35>/Switch' */

    /* Switch: '<S28>/Switch' incorporates:
     *  Constant: '<S109>/Calib'
     */
    if (KePRXR_b_ProxiCADM_BypEnbl)
    {
        /* Outport: '<Root>/VePRXR_b_ProxiCADM' incorporates:
         *  Constant: '<S108>/Calib'
         */
        (void)Rte_Write_VePRXR_b_ProxiCADM_Value(KePRXR_b_ProxiCADM_Byp);
    }
    else
    {
        /* Outport: '<Root>/VePRXR_b_ProxiCADM' incorporates:
         *  DataStoreRead: '<S1>/Data Store Read18'
         */
        (void)Rte_Write_VePRXR_b_ProxiCADM_Value(PRXR_ac_DW.EePRXR_b_ProxiCADM);
    }

    /* End of Switch: '<S28>/Switch' */

    /* Switch: '<S36>/Switch' incorporates:
     *  Constant: '<S124>/Calib'
     */
    if (KePRXR_b_Proxi_CC_Logic_BypEnbl)
    {
        /* Outport: '<Root>/VePRXR_e_Proxi_CC_Logic' incorporates:
         *  Constant: '<S125>/Calib'
         */
        (void)Rte_Write_VePRXR_e_Proxi_CC_Logic_Value
            (KePRXR_e_Proxi_CC_Logic_Byp);
    }
    else
    {
        /* Outport: '<Root>/VePRXR_e_Proxi_CC_Logic' incorporates:
         *  DataStoreRead: '<S1>/Data Store Read19'
         *  DataTypeConversion: '<S36>/Data Type Conversion'
         */
        (void)Rte_Write_VePRXR_e_Proxi_CC_Logic_Value
            ((TePRXR_e_Cruise_Control_Logic)PRXR_ac_DW.EePRXR_e_Proxi_CC_Logic);
    }

    /* End of Switch: '<S36>/Switch' */

    /* Switch: '<S18>/Switch' incorporates:
     *  Constant: '<S88>/Calib'
     */
    if (KePRXR_b_Hill_Des_Stat_Prx_BypEnbl)
    {
        /* Outport: '<Root>/VePRXR_b_Hill_Des_Stat_Prx' incorporates:
         *  Constant: '<S87>/Calib'
         */
        (void)Rte_Write_VePRXR_b_Hill_Des_Stat_Prx_Value
            (KePRXR_b_Hill_Des_Stat_Prx_Byp);
    }
    else
    {
        /* Outport: '<Root>/VePRXR_b_Hill_Des_Stat_Prx' incorporates:
         *  DataStoreRead: '<S1>/Data Store Read20'
         */
        (void)Rte_Write_VePRXR_b_Hill_Des_Stat_Prx_Value
            (PRXR_ac_DW.EePRXR_b_Hill_Des_Stat_Prx);
    }

    /* End of Switch: '<S18>/Switch' */

    /* Switch: '<S25>/Switch' incorporates:
     *  Constant: '<S101>/Calib'
     */
    if (KePRXR_b_Plug_and_Charge_BypEnbl)
    {
        /* Outport: '<Root>/VePRXR_e_Plug_and_Charge' incorporates:
         *  Constant: '<S102>/Calib'
         */
        (void)Rte_Write_VePRXR_e_Plug_and_Charge_Value
            (KePRXR_e_Plug_and_Charge_Byp);
    }
    else
    {
        /* Outport: '<Root>/VePRXR_e_Plug_and_Charge' incorporates:
         *  DataStoreRead: '<S1>/Data Store Read22'
         *  DataTypeConversion: '<S25>/Data Type Conversion'
         */
        (void)Rte_Write_VePRXR_e_Plug_and_Charge_Value((TePRXR_e_Plug_and_Charge)
            PRXR_ac_DW.EePRXR_e_Plug_and_Charge);
    }

    /* End of Switch: '<S25>/Switch' */

    /* Switch: '<S56>/Switch' incorporates:
     *  Constant: '<S172>/Calib'
     */
    if (KePRXR_b_Wheelbase_BypEnbl)
    {
        /* Outport: '<Root>/VePRXR_y_Wheelbase' incorporates:
         *  Constant: '<S173>/Calib'
         */
        (void)Rte_Write_VePRXR_y_Wheelbase_Value(KePRXR_y_Wheelbase_Byp);
    }
    else
    {
        /* Outport: '<Root>/VePRXR_y_Wheelbase' incorporates:
         *  DataStoreRead: '<S1>/Data Store Read23'
         */
        (void)Rte_Write_VePRXR_y_Wheelbase_Value(PRXR_ac_DW.EePRXR_y_Wheelbase);
    }

    /* End of Switch: '<S56>/Switch' */

    /* Switch: '<S21>/Switch' incorporates:
     *  Constant: '<S94>/Calib'
     */
    if (KePRXR_b_LaunchControl_BypEnbl)
    {
        /* Outport: '<Root>/VePRXR_b_LaunchControl' incorporates:
         *  Constant: '<S93>/Calib'
         */
        (void)Rte_Write_VePRXR_b_LaunchControl_Value(KePRXR_b_LaunchControl_Byp);
    }
    else
    {
        /* Outport: '<Root>/VePRXR_b_LaunchControl' incorporates:
         *  DataStoreRead: '<S1>/Data Store Read24'
         */
        (void)Rte_Write_VePRXR_b_LaunchControl_Value
            (PRXR_ac_DW.EePRXR_b_LaunchControl);
    }

    /* End of Switch: '<S21>/Switch' */

    /* Switch: '<S27>/Switch' incorporates:
     *  Constant: '<S107>/Calib'
     */
    if (KePRXR_b_ProxiCADM2_BypEnbl)
    {
        /* Outport: '<Root>/VePRXR_b_ProxiCADM2' incorporates:
         *  Constant: '<S106>/Calib'
         */
        (void)Rte_Write_VePRXR_b_ProxiCADM2_Value(KePRXR_b_ProxiCADM2_Byp);
    }
    else
    {
        /* Outport: '<Root>/VePRXR_b_ProxiCADM2' incorporates:
         *  DataStoreRead: '<S1>/Data Store Read31'
         */
        (void)Rte_Write_VePRXR_b_ProxiCADM2_Value(PRXR_ac_DW.EePRXR_b_ProxiCADM2);
    }

    /* End of Switch: '<S27>/Switch' */

    /* Switch: '<S45>/Switch' incorporates:
     *  Constant: '<S144>/Calib'
     */
    if (KePRXR_b_SuspensionConfigurationRear_BypEnbl)
    {
        /* Outport: '<Root>/VePRXR_y_SuspensionConfigurationRear' incorporates:
         *  Constant: '<S145>/Calib'
         */
        (void)Rte_Write_VePRXR_y_SuspensionConfigurationRear_Value
            (KePRXR_y_SuspensionConfigurationRear_Byp);
    }
    else
    {
        /* Outport: '<Root>/VePRXR_y_SuspensionConfigurationRear' incorporates:
         *  DataStoreRead: '<S1>/Data Store Read21'
         */
        (void)Rte_Write_VePRXR_y_SuspensionConfigurationRear_Value
            (PRXR_ac_DW.EePRXR_y_SuspensionConfiguratio);
    }

    /* End of Switch: '<S45>/Switch' */

    /* Switch: '<S44>/Switch' incorporates:
     *  Constant: '<S142>/Calib'
     */
    if (KePRXR_b_SuspensionConfigurationFront_BypEnbl)
    {
        /* Outport: '<Root>/VePRXR_y_SuspensionConfigurationFront' incorporates:
         *  Constant: '<S143>/Calib'
         */
        (void)Rte_Write_VePRXR_y_SuspensionConfigurationFront_Value
            (KePRXR_y_SuspensionConfigurationFront_Byp);
    }
    else
    {
        /* Outport: '<Root>/VePRXR_y_SuspensionConfigurationFront' incorporates:
         *  DataStoreRead: '<S1>/Data Store Read32'
         */
        (void)Rte_Write_VePRXR_y_SuspensionConfigurationFront_Value
            (PRXR_ac_DW.EePRXR_y_SuspensionConfigurat_j);
    }

    /* End of Switch: '<S44>/Switch' */

    /* Switch: '<S9>/Switch' incorporates:
     *  Constant: '<S69>/Calib'
     */
    if (KePRXR_b_ConfigurationFamilies_BypEnbl)
    {
        /* Outport: '<Root>/VePRXR_y_ConfigurationFamilies' incorporates:
         *  Constant: '<S70>/Calib'
         */
        (void)Rte_Write_VePRXR_y_ConfigurationFamilies_Value
            (KePRXR_y_ConfigurationFamilies_Byp);
    }
    else
    {
        /* Outport: '<Root>/VePRXR_y_ConfigurationFamilies' incorporates:
         *  DataStoreRead: '<S1>/Data Store Read34'
         */
        (void)Rte_Write_VePRXR_y_ConfigurationFamilies_Value
            (PRXR_ac_DW.EePRXR_y_ConfigurationFamilies);
    }

    /* End of Switch: '<S9>/Switch' */

    /* Switch: '<S55>/Switch' incorporates:
     *  Constant: '<S170>/Calib'
     */
    if (KePRXR_b_VehicleLineConfiguration_BypEnbl)
    {
        /* Outport: '<Root>/VePRXR_y_VehicleLineConfiguration' incorporates:
         *  Constant: '<S171>/Calib'
         */
        (void)Rte_Write_VePRXR_y_VehicleLineConfiguration_Value
            (KePRXR_y_VehicleLineConfiguration_Byp);
    }
    else
    {
        /* Outport: '<Root>/VePRXR_y_VehicleLineConfiguration' incorporates:
         *  DataStoreRead: '<S1>/Data Store Read33'
         */
        (void)Rte_Write_VePRXR_y_VehicleLineConfiguration_Value
            (PRXR_ac_DW.EePRXR_y_VehicleLineConfigurati);
    }

    /* End of Switch: '<S55>/Switch' */

    /* Switch: '<S8>/Switch' incorporates:
     *  Constant: '<S67>/Calib'
     */
    if (KePRXR_b_Wheelbase_BypEnbl)
    {
        /* Outport: '<Root>/VePRXR_y_CarShapeConfig' incorporates:
         *  Constant: '<S68>/Calib'
         */
        (void)Rte_Write_VePRXR_y_CarShapeConfig_Value(KePRXR_y_Wheelbase_Byp);
    }
    else
    {
        /* Outport: '<Root>/VePRXR_y_CarShapeConfig' incorporates:
         *  DataStoreRead: '<S1>/Data Store Read35'
         */
        (void)Rte_Write_VePRXR_y_CarShapeConfig_Value
            (PRXR_ac_DW.EePRXR_y_CarShapeConfig);
    }

    /* End of Switch: '<S8>/Switch' */

    /* Switch: '<S12>/Switch' incorporates:
     *  Constant: '<S75>/Calib'
     */
    if (KePRXR_b_DriveStyleSelector_BypEnbl)
    {
        /* Outport: '<Root>/VePRXR_y_DriveStyleSelector' incorporates:
         *  Constant: '<S76>/Calib'
         */
        (void)Rte_Write_VePRXR_y_DriveStyleSelector_Value
            (KePRXR_y_DriveStyleSelector_Byp);
    }
    else
    {
        /* Outport: '<Root>/VePRXR_y_DriveStyleSelector' incorporates:
         *  DataStoreRead: '<S1>/Data Store Read37'
         */
        (void)Rte_Write_VePRXR_y_DriveStyleSelector_Value
            (PRXR_ac_DW.EePRXR_y_DriveStyleSelector);
    }

    /* End of Switch: '<S12>/Switch' */

    /* Switch: '<S13>/Switch' incorporates:
     *  Constant: '<S77>/Calib'
     */
    if (KePRXR_b_Drive_Type_Variant_BypEnbl)
    {
        /* Outport: '<Root>/VePRXR_y_Drive_Type_Variant' incorporates:
         *  Constant: '<S78>/Calib'
         */
        (void)Rte_Write_VePRXR_y_Drive_Type_Variant_Value
            (KePRXR_y_Drive_Type_Variant_Byp);
    }
    else
    {
        /* Outport: '<Root>/VePRXR_y_Drive_Type_Variant' incorporates:
         *  DataStoreRead: '<S1>/Data Store Read36'
         */
        (void)Rte_Write_VePRXR_y_Drive_Type_Variant_Value
            (PRXR_ac_DW.EePRXR_y_Drive_Type_Variant);
    }

    /* End of Switch: '<S13>/Switch' */

    /* Switch: '<S22>/Switch' incorporates:
     *  Constant: '<S95>/Calib'
     */
    if (KePRXR_b_ModelYear_BypEnbl)
    {
        /* Outport: '<Root>/VePRXR_y_ModelYear' incorporates:
         *  Constant: '<S96>/Calib'
         */
        (void)Rte_Write_VePRXR_y_ModelYear_Value((uint8)KePRXR_y_ModelYear_Byp);
    }
    else
    {
        /* Outport: '<Root>/VePRXR_y_ModelYear' incorporates:
         *  DataStoreRead: '<S1>/Data Store Read38'
         */
        (void)Rte_Write_VePRXR_y_ModelYear_Value(PRXR_ac_DW.EePRXR_y_ModelYear);
    }

    /* End of Switch: '<S22>/Switch' */

    /* Switch: '<S20>/Switch' incorporates:
     *  Constant: '<S91>/Calib'
     */
    if (KePRXR_b_Lane_Assist_BypEnbl)
    {
        /* Outport: '<Root>/VePRXR_y_Lane_Assist' incorporates:
         *  Constant: '<S92>/Calib'
         */
        (void)Rte_Write_VePRXR_y_Lane_Assist_Value(KePRXR_y_Lane_Assist_Byp);
    }
    else
    {
        /* Outport: '<Root>/VePRXR_y_Lane_Assist' incorporates:
         *  DataStoreRead: '<S1>/Data Store Read40'
         */
        (void)Rte_Write_VePRXR_y_Lane_Assist_Value
            (PRXR_ac_DW.EePRXR_y_Lane_Assist);
    }

    /* End of Switch: '<S20>/Switch' */

    /* Switch: '<S42>/Switch' incorporates:
     *  Constant: '<S138>/Calib'
     */
    if (KePRXR_b_SemiAutomaticParkingSystem_BypEnbl)
    {
        /* Outport: '<Root>/VePRXR_b_SemiAutomaticParkingSystem' incorporates:
         *  Constant: '<S137>/Calib'
         */
        (void)Rte_Write_VePRXR_b_SemiAutomaticParkingSystem_Value
            (KePRXR_b_SemiAutomaticParkingSystem_Byp);
    }
    else
    {
        /* Outport: '<Root>/VePRXR_b_SemiAutomaticParkingSystem' incorporates:
         *  DataStoreRead: '<S1>/Data Store Read25'
         */
        (void)Rte_Write_VePRXR_b_SemiAutomaticParkingSystem_Value
            (PRXR_ac_DW.EePRXR_b_SemiAutomaticParkingSy);
    }

    /* End of Switch: '<S42>/Switch' */

    /* Switch: '<S17>/Switch' incorporates:
     *  Constant: '<S86>/Calib'
     */
    if (KePRXR_b_FullAutomaticParkingSystem_BypEnbl)
    {
        /* Outport: '<Root>/VePRXR_b_FullAutomaticParkingSystem' incorporates:
         *  Constant: '<S85>/Calib'
         */
        (void)Rte_Write_VePRXR_b_FullAutomaticParkingSystem_Value
            (KePRXR_b_FullAutomaticParkingSystem_Byp);
    }
    else
    {
        /* Outport: '<Root>/VePRXR_b_FullAutomaticParkingSystem' incorporates:
         *  DataStoreRead: '<S1>/Data Store Read26'
         */
        (void)Rte_Write_VePRXR_b_FullAutomaticParkingSystem_Value
            (PRXR_ac_DW.EePRXR_b_FullAutomaticParkingSy);
    }

    /* End of Switch: '<S17>/Switch' */

    /* Switch: '<S16>/Switch' incorporates:
     *  Constant: '<S84>/Calib'
     */
    if (KePRXR_b_FrontWSSType_BypEnbl)
    {
        /* Outport: '<Root>/VePRXR_b_FrontWSSType' incorporates:
         *  Constant: '<S83>/Calib'
         */
        (void)Rte_Write_VePRXR_b_FrontWSSType_Value(KePRXR_b_FrontWSSType_Byp);
    }
    else
    {
        /* Outport: '<Root>/VePRXR_b_FrontWSSType' incorporates:
         *  DataStoreRead: '<S1>/Data Store Read27'
         */
        (void)Rte_Write_VePRXR_b_FrontWSSType_Value
            (PRXR_ac_DW.EePRXR_b_FrontWSSType);
    }

    /* End of Switch: '<S16>/Switch' */

    /* Switch: '<S41>/Switch' incorporates:
     *  Constant: '<S136>/Calib'
     */
    if (KePRXR_b_RearWSSType_BypEnbl)
    {
        /* Outport: '<Root>/VePRXR_b_RearWSSType' incorporates:
         *  Constant: '<S135>/Calib'
         */
        (void)Rte_Write_VePRXR_b_RearWSSType_Value(KePRXR_b_RearWSSType_Byp);
    }
    else
    {
        /* Outport: '<Root>/VePRXR_b_RearWSSType' incorporates:
         *  DataStoreRead: '<S1>/Data Store Read28'
         */
        (void)Rte_Write_VePRXR_b_RearWSSType_Value
            (PRXR_ac_DW.EePRXR_b_RearWSSType);
    }

    /* End of Switch: '<S41>/Switch' */

    /* Switch: '<S14>/Switch' incorporates:
     *  Constant: '<S80>/Calib'
     */
    if (KePRXR_b_ELSD_BypEnbl)
    {
        /* Outport: '<Root>/VePRXR_b_ELSD' incorporates:
         *  Constant: '<S79>/Calib'
         */
        (void)Rte_Write_VePRXR_b_ELSD_Value(KePRXR_b_ELSD_Byp);
    }
    else
    {
        /* Outport: '<Root>/VePRXR_b_ELSD' incorporates:
         *  DataStoreRead: '<S1>/Data Store Read30'
         */
        (void)Rte_Write_VePRXR_b_ELSD_Value(PRXR_ac_DW.EePRXR_b_ELSD);
    }

    /* End of Switch: '<S14>/Switch' */

    /* Switch: '<S15>/Switch' incorporates:
     *  Constant: '<S82>/Calib'
     */
    if (KePRXR_b_ELocker_BypEnbl)
    {
        /* Outport: '<Root>/VePRXR_b_ELocker' incorporates:
         *  Constant: '<S81>/Calib'
         */
        (void)Rte_Write_VePRXR_b_ELocker_Value(KePRXR_b_ELocker_Byp);
    }
    else
    {
        /* Outport: '<Root>/VePRXR_b_ELocker' incorporates:
         *  DataStoreRead: '<S1>/Data Store Read42'
         */
        (void)Rte_Write_VePRXR_b_ELocker_Value(PRXR_ac_DW.EePRXR_b_ELocker);
    }

    /* End of Switch: '<S15>/Switch' */

    /* Switch: '<S7>/Switch' incorporates:
     *  Constant: '<S66>/Calib'
     */
    if (KePRXR_b_CanNodeMRGB_BypEnbl)
    {
        /* Outport: '<Root>/VePRXR_b_CanNodeMRGB' incorporates:
         *  Constant: '<S65>/Calib'
         */
        (void)Rte_Write_VePRXR_b_CanNodeMRGB_Value(KePRXR_b_CanNodeMRGB_Byp);
    }
    else
    {
        /* Outport: '<Root>/VePRXR_b_CanNodeMRGB' incorporates:
         *  DataStoreRead: '<S1>/Data Store Read43'
         */
        (void)Rte_Write_VePRXR_b_CanNodeMRGB_Value
            (PRXR_ac_DW.EePRXR_b_CanNodeMRGB);
    }

    /* End of Switch: '<S7>/Switch' */

    /* Switch: '<S5>/Switch' incorporates:
     *  Constant: '<S62>/Calib'
     */
    if (KePRXR_b_CANNode55_BypEnbl)
    {
        /* Outport: '<Root>/VePRXR_b_CANNode55' incorporates:
         *  Constant: '<S61>/Calib'
         */
        (void)Rte_Write_VePRXR_b_CANNode55_Value(KePRXR_b_CANNode55_Byp);
    }
    else
    {
        /* Outport: '<Root>/VePRXR_b_CANNode55' incorporates:
         *  DataStoreRead: '<S1>/Data Store Read44'
         */
        (void)Rte_Write_VePRXR_b_CANNode55_Value(PRXR_ac_DW.EePRXR_b_CANNode55);
    }

    /* End of Switch: '<S5>/Switch' */

    /* Switch: '<S11>/Switch' incorporates:
     *  Constant: '<S74>/Calib'
     */
    if (KePRXR_b_DriveModes_BypEnbl)
    {
        /* Outport: '<Root>/VePRXR_b_DriveModes' incorporates:
         *  Constant: '<S73>/Calib'
         */
        (void)Rte_Write_VePRXR_b_DriveModes_Value(KePRXR_b_DriveModes_Byp);
    }
    else
    {
        /* Outport: '<Root>/VePRXR_b_DriveModes' incorporates:
         *  DataStoreRead: '<S1>/Data Store Read45'
         */
        (void)Rte_Write_VePRXR_b_DriveModes_Value(PRXR_ac_DW.EePRXR_b_DriveModes);
    }

    /* End of Switch: '<S11>/Switch' */

    /* Switch: '<S50>/Switch' incorporates:
     *  Constant: '<S154>/Calib'
     */
    if (KePRXR_b_TyreSizeSecondary_BypEnbl)
    {
        /* Outport: '<Root>/VePRXR_d_TyreSizeSecondary' incorporates:
         *  Constant: '<S155>/Calib'
         */
        (void)Rte_Write_VePRXR_d_TyreSizeSecondary_Value
            (KePRXR_d_TyreSizeSecondary_Byp);
    }
    else
    {
        /* Outport: '<Root>/VePRXR_d_TyreSizeSecondary' incorporates:
         *  DataStoreRead: '<S1>/Data Store Read39'
         */
        (void)Rte_Write_VePRXR_d_TyreSizeSecondary_Value
            (PRXR_ac_DW.EePRXR_d_TyreSizeSecondary);
    }

    /* End of Switch: '<S50>/Switch' */

    /* Switch: '<S10>/Switch' incorporates:
     *  Constant: '<S71>/Calib'
     */
    if (KePRXR_b_Custom_Mode_BypEnbl)
    {
        /* Outport: '<Root>/VePRXR_b_Proxi_Custom_Mode' incorporates:
         *  Constant: '<S72>/Calib'
         */
        (void)Rte_Write_VePRXR_b_Proxi_Custom_Mode_Value
            (KePRXR_b_Custom_Mode_Byp);
    }
    else
    {
        /* Outport: '<Root>/VePRXR_b_Proxi_Custom_Mode' incorporates:
         *  DataStoreRead: '<S1>/Data Store Read29'
         */
        (void)Rte_Write_VePRXR_b_Proxi_Custom_Mode_Value
            (PRXR_ac_DW.EePRXR_b_Custom_Mode);
    }

    /* End of Switch: '<S10>/Switch' */

    /* Switch: '<S48>/Switch' incorporates:
     *  Constant: '<S150>/Calib'
     */
    if (KePRXR_b_Track_Mode_BypEnbl)
    {
        /* Outport: '<Root>/VePRXR_b_Proxi_Track_Mode' incorporates:
         *  Constant: '<S151>/Calib'
         */
        (void)Rte_Write_VePRXR_b_Proxi_Track_Mode_Value(KePRXR_b_Track_Mode_Byp);
    }
    else
    {
        /* Outport: '<Root>/VePRXR_b_Proxi_Track_Mode' incorporates:
         *  DataStoreRead: '<S1>/Data Store Read46'
         */
        (void)Rte_Write_VePRXR_b_Proxi_Track_Mode_Value
            (PRXR_ac_DW.EePRXR_b_TRACK_Mode);
    }

    /* End of Switch: '<S48>/Switch' */

    /* Switch: '<S3>/Switch' incorporates:
     *  Constant: '<S57>/Calib'
     */
    if (KePRXR_b_Axle_Locker_Presence_BypEnbl)
    {
        /* Outport: '<Root>/VePRXR_e_Axle_Locker_Presence' incorporates:
         *  Constant: '<S58>/Calib'
         */
        (void)Rte_Write_VePRXR_e_Axle_Locker_Presence_Value
            (KePRXR_e_Axle_Locker_Presence_Byp);
    }
    else
    {
        /* Outport: '<Root>/VePRXR_e_Axle_Locker_Presence' incorporates:
         *  DataStoreRead: '<S1>/Data Store Read47'
         *  DataTypeConversion: '<S3>/Data Type Conversion'
         */
        (void)Rte_Write_VePRXR_e_Axle_Locker_Presence_Value
            ((TePRXR_e_AxleLockerPresence)
             PRXR_ac_DW.EePRXR_e_Axle_Locker_Presence);
    }

    /* End of Switch: '<S3>/Switch' */

    /* Switch: '<S49>/Switch' incorporates:
     *  Constant: '<S152>/Calib'
     */
    if (KePRXR_b_Terrain_Selector_Modes_BypEnbl)
    {
        /* Outport: '<Root>/VePRXR_e_Terrain_Selector_Modes' incorporates:
         *  Constant: '<S153>/Calib'
         */
        (void)Rte_Write_VePRXR_e_Terrain_Selector_Modes_Value
            (KePRXR_e_Terrain_Selector_Modes_Byp);
    }
    else
    {
        /* Outport: '<Root>/VePRXR_e_Terrain_Selector_Modes' incorporates:
         *  DataStoreRead: '<S1>/Data Store Read48'
         *  DataTypeConversion: '<S49>/Data Type Conversion'
         */
        (void)Rte_Write_VePRXR_e_Terrain_Selector_Modes_Value
            ((TePRXR_e_TerrainSelectorModes)
             PRXR_ac_DW.EePRXR_e_Terrain_Selector_Modes);
    }

    /* End of Switch: '<S49>/Switch' */

    /* Switch: '<S51>/Switch' incorporates:
     *  Constant: '<S157>/Calib'
     */
    if (KePRXR_b_V2L_Present_BypEnbl)
    {
        /* Outport: '<Root>/VePRXR_b_V2L_Present' incorporates:
         *  Constant: '<S156>/Calib'
         */
        (void)Rte_Write_VePRXR_b_V2L_Present_Value(KePRXR_b_V2L_Present_Byp);
    }
    else
    {
        /* Outport: '<Root>/VePRXR_b_V2L_Present' incorporates:
         *  DataStoreRead: '<S1>/Data Store Read49'
         */
        (void)Rte_Write_VePRXR_b_V2L_Present_Value
            (PRXR_ac_DW.EePRXR_b_V2L_Present);
    }

    /* End of Switch: '<S51>/Switch' */

    /* Switch: '<S24>/Switch' incorporates:
     *  Constant: '<S99>/Calib'
     */
    if (KePRXR_b_OnboardPowPanelType_BypEnbl)
    {
        /* Outport: '<Root>/VePRXR_e_OnboardPowPanelType' incorporates:
         *  Constant: '<S100>/Calib'
         */
        (void)Rte_Write_VePRXR_e_OnboardPowPanelType_Value
            (KePRXR_e_OnboardPowPanelType_Byp);
    }
    else
    {
        /* Outport: '<Root>/VePRXR_e_OnboardPowPanelType' incorporates:
         *  DataStoreRead: '<S1>/Data Store Read50'
         *  DataTypeConversion: '<S24>/Data Type Conversion'
         */
        (void)Rte_Write_VePRXR_e_OnboardPowPanelType_Value
            ((TePRXR_e_OnboardPowPanelType)
             PRXR_ac_DW.EePRXR_e_OnboardPowPanelType);
    }

    /* End of Switch: '<S24>/Switch' */

    /* Switch: '<S23>/Switch' incorporates:
     *  Constant: '<S97>/Calib'
     */
    if (KePRXR_b_NumOfAGSUnits_BypEnbl)
    {
        /* Outport: '<Root>/VePRXR_y_NumOfAGSUnits' incorporates:
         *  Constant: '<S98>/Calib'
         */
        (void)Rte_Write_VePRXR_y_NumOfAGSUnits_Value(KePRXR_y_NumOfAGSUnits_Byp);
    }
    else
    {
        /* Outport: '<Root>/VePRXR_y_NumOfAGSUnits' incorporates:
         *  DataStoreRead: '<S1>/Data Store Read51'
         */
        (void)Rte_Write_VePRXR_y_NumOfAGSUnits_Value
            (PRXR_ac_DW.EePRXR_y_NumOfAGSUnits);
    }

    /* End of Switch: '<S23>/Switch' */

    /* Switch: '<S40>/Switch' incorporates:
     *  Constant: '<S133>/Calib'
     */
    if (KePRXR_b_RWSRackTravelLimits_BypEnbl)
    {
        /* Outport: '<Root>/VePRXR_e_RWSRackTravelLimits' incorporates:
         *  Constant: '<S134>/Calib'
         */
        (void)Rte_Write_VePRXR_e_RWSRackTravelLimits_Value
            (KePRXR_e_RWSRackTravelLimits_Byp);
    }
    else
    {
        /* Outport: '<Root>/VePRXR_e_RWSRackTravelLimits' incorporates:
         *  DataStoreRead: '<S1>/Data Store Read52'
         *  DataTypeConversion: '<S40>/Data Type Conversion'
         */
        (void)Rte_Write_VePRXR_e_RWSRackTravelLimits_Value
            ((TePRXR_e_RWSRackTravelLimits)
             PRXR_ac_DW.EePRXR_e_RWSRackTravelLimits);
    }

    /* End of Switch: '<S40>/Switch' */

    /* Switch: '<S6>/Switch' incorporates:
     *  Constant: '<S64>/Calib'
     */
    if (KePRXR_b_CanNodeAMP_BypEnbl)
    {
        /* Outport: '<Root>/VePRXR_b_CanNodeAMP' incorporates:
         *  Constant: '<S63>/Calib'
         */
        (void)Rte_Write_VePRXR_b_CanNodeAMP_Value(KePRXR_b_CanNodeAMP_Byp);
    }
    else
    {
        /* Outport: '<Root>/VePRXR_b_CanNodeAMP' incorporates:
         *  DataStoreRead: '<S1>/Data Store Read53'
         */
        (void)Rte_Write_VePRXR_b_CanNodeAMP_Value(PRXR_ac_DW.EePRXR_b_CanNodeAMP);
    }

    /* End of Switch: '<S6>/Switch' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/SlowTEF' */
}

/* Model initialize function */
FUNC(void, PRXR_CODE) PRXR_ac_Init(void)
{
    {
        float32 tmp_2;
        uint16 tmpRead;
        uint16 tmpRead_9;
        uint16 tmpRead_b;
        uint16 tmpRead_r;
        TePRXR_e_AdaptiveCruiseCtrl tmp_1;
        TePRXR_e_Autonomy_Lvl tmp_6;
        TePRXR_e_AxleLockerPresence tmp_9;
        TePRXR_e_Cruise_Control_Logic tmp_7;
        TePRXR_e_HybridType tmp_4;
        TePRXR_e_IncreasingSpdConst tmp_3;
        TePRXR_e_OnboardPowPanelType tmp_b;
        TePRXR_e_Plug_and_Charge tmp_8;
        TePRXR_e_RRM_VP_Level tmp_0;
        TePRXR_e_RWSRackTravelLimits tmp_c;
        TePRXR_e_ShiftIndSt tmp;
        TePRXR_e_TerrainSelectorModes tmp_a;
        TePRXR_e_VehCategory tmp_5;
        TePRXR_e_VehicleCountryCode rtb_Switch_g;
        sint8 tmpRead_7;
        uint8 rtb_Switch;
        uint8 tmpRead_0;
        uint8 tmpRead_1;
        uint8 tmpRead_10;
        uint8 tmpRead_11;
        uint8 tmpRead_12;
        uint8 tmpRead_13;
        uint8 tmpRead_14;
        uint8 tmpRead_15;
        uint8 tmpRead_16;
        uint8 tmpRead_19;
        uint8 tmpRead_1a;
        uint8 tmpRead_1c;
        uint8 tmpRead_1d;
        uint8 tmpRead_1e;
        uint8 tmpRead_2;
        uint8 tmpRead_8;
        uint8 tmpRead_a;
        uint8 tmpRead_c;
        uint8 tmpRead_d;
        uint8 tmpRead_e;
        uint8 tmpRead_g;
        uint8 tmpRead_j;
        uint8 tmpRead_l;
        uint8 tmpRead_x;
        uint8 tmpRead_y;
        uint8 tmpRead_z;
        boolean tmpRead_17;
        boolean tmpRead_18;
        boolean tmpRead_1b;
        boolean tmpRead_1f;
        boolean tmpRead_3;
        boolean tmpRead_4;
        boolean tmpRead_5;
        boolean tmpRead_6;
        boolean tmpRead_f;
        boolean tmpRead_h;
        boolean tmpRead_i;
        boolean tmpRead_k;
        boolean tmpRead_m;
        boolean tmpRead_n;
        boolean tmpRead_o;
        boolean tmpRead_p;
        boolean tmpRead_q;
        boolean tmpRead_s;
        boolean tmpRead_t;
        boolean tmpRead_u;
        boolean tmpRead_v;
        boolean tmpRead_w;

        /* Inport: '<Root>/EePRXR_b_CanNodeAMP_PM_In' */
        (void)Rte_Read_EePRXR_b_CanNodeAMP_Rx_EePRXR_b_CanNodeAMP(&tmpRead_1f);

        /* Inport: '<Root>/EePRXR_y_RWSRackTravelLimits_PM_In' */
        (void)
            Rte_Read_EePRXR_y_RWSRackTravelLimits_Rx_EePRXR_y_RWSRackTravelLimits
            (&tmpRead_1e);

        /* Inport: '<Root>/EePRXR_y_NumOfAGSUnits_PM_In' */
        (void)Rte_Read_EePRXR_y_NumOfAGSUnits_Rx_EePRXR_y_NumOfAGSUnits
            (&tmpRead_1d);

        /* Inport: '<Root>/EePRXR_e_OnboardPowPanelType_PM_In' */
        (void)
            Rte_Read_EePRXR_e_OnboardPowPanelType_Rx_EePRXR_e_OnboardPowPanelType
            (&tmpRead_1c);

        /* Inport: '<Root>/EePRXR_b_V2L_Present_PM_In' */
        (void)Rte_Read_EePRXR_b_V2L_Present_Rx_EePRXR_b_V2L_Present(&tmpRead_1b);

        /* Inport: '<Root>/EePRXR_e_Terrain_Selector_Modes_PM_In' */
        (void)
            Rte_Read_EePRXR_e_Terrain_Selector_Modes_Rx_EePRXR_e_Terrain_Selector_Modes
            (&tmpRead_1a);

        /* Inport: '<Root>/EePRXR_e_Axle_Locker_Presence_PM_In' */
        (void)
            Rte_Read_EePRXR_e_Axle_Locker_Presence_Rx_EePRXR_e_Axle_Locker_Presence
            (&tmpRead_19);

        /* Inport: '<Root>/EePRXR_b_TRACK_Mode_PM_In' */
        (void)Rte_Read_EePRXR_b_TRACK_Mode_Rx_EePRXR_b_TRACK_Mode(&tmpRead_18);

        /* Inport: '<Root>/EePRXR_b_Custom_Mode_PM_In' */
        (void)Rte_Read_EePRXR_b_Custom_Mode_Rx_EePRXR_b_Custom_Mode(&tmpRead_17);

        /* Inport: '<Root>/EePRXR_y_Lane_Assist_PM_In' */
        (void)Rte_Read_EePRXR_y_Lane_Assist_Rx_EePRXR_y_Lane_Assist(&tmpRead_16);

        /* Inport: '<Root>/EePRXR_y_ModelYear_PM_In' */
        (void)Rte_Read_EePRXR_y_ModelYear_Rx_EePRXR_y_ModelYear(&tmpRead_15);

        /* Inport: '<Root>/EePRXR_y_Drive_Type_Variant_PM_In' */
        (void)
            Rte_Read_EePRXR_y_Drive_Type_Variant_Rx_EePRXR_y_Drive_Type_Variant(
            &tmpRead_14);

        /* Inport: '<Root>/EePRXR_y_DriveStyleSelector_PM_In' */
        (void)
            Rte_Read_EePRXR_y_DriveStyleSelector_Rx_EePRXR_y_DriveStyleSelector(
            &tmpRead_13);

        /* Inport: '<Root>/EePRXR_y_CarShapeConfig_PM_In' */
        (void)Rte_Read_EePRXR_y_CarShapeConfig_Rx_EePRXR_y_CarShapeConfig
            (&tmpRead_12);

        /* Inport: '<Root>/EePRXR_y_VehicleLineConfiguration_PM_In' */
        (void)
            Rte_Read_EePRXR_y_VehicleLineConfiguration_Rx_EePRXR_y_VehicleLineConfiguration
            (&tmpRead_11);

        /* Inport: '<Root>/EePRXR_y_ConfigurationFamilies_PM_In' */
        (void)
            Rte_Read_EePRXR_y_ConfigurationFamilies_Rx_EePRXR_y_ConfigurationFamilies
            (&tmpRead_10);

        /* Inport: '<Root>/EePRXR_y_SuspensionConfigurationFront_PM_In' */
        (void)
            Rte_Read_EePRXR_y_SuspensionConfigurationFront_Rx_EePRXR_y_SuspensionConfigurationFront
            (&tmpRead_z);

        /* Inport: '<Root>/EePRXR_y_SuspensionConfigurationRear_PM_In' */
        (void)
            Rte_Read_EePRXR_y_SuspensionConfigurationRear_Rx_EePRXR_y_SuspensionConfigurationRear
            (&tmpRead_y);

        /* Inport: '<Root>/EePRXR_y_Wheelbase_PM_In' */
        (void)Rte_Read_EePRXR_y_Wheelbase_Rx_EePRXR_y_Wheelbase(&tmpRead_x);

        /* Inport: '<Root>/EePRXR_b_DriveModes_PM_In' */
        (void)Rte_Read_EePRXR_b_DriveModes_Rx_EePRXR_b_DriveModes(&tmpRead_w);

        /* Inport: '<Root>/EePRXR_b_CANNode55_PM_In' */
        (void)Rte_Read_EePRXR_b_CANNode55_Rx_EePRXR_b_CANNode55(&tmpRead_v);

        /* Inport: '<Root>/EePRXR_b_CanNodeMRGB_PM_In' */
        (void)Rte_Read_EePRXR_b_CanNodeMRGB_Rx_EePRXR_b_CanNodeMRGB(&tmpRead_u);

        /* Inport: '<Root>/EePRXR_b_ELocker_PM_In' */
        (void)Rte_Read_EePRXR_b_ELocker_Rx_EePRXR_b_ELocker(&tmpRead_t);

        /* Inport: '<Root>/EePRXR_b_ELSD_PM_In' */
        (void)Rte_Read_EePRXR_b_ELSD_Rx_EePRXR_b_ELSD(&tmpRead_s);

        /* Inport: '<Root>/EePRXR_d_TyreSizeSecondary_PM_In' */
        (void)Rte_Read_EePRXR_d_TyreSizeSecondary_Rx_EePRXR_d_TyreSizeSecondary(
            &tmpRead_r);

        /* Inport: '<Root>/EePRXR_b_RearWSSType_PM_In' */
        (void)Rte_Read_EePRXR_b_RearWSSType_Rx_EePRXR_b_RearWSSType(&tmpRead_q);

        /* Inport: '<Root>/EePRXR_b_FrontWSSType_PM_In' */
        (void)Rte_Read_EePRXR_b_FrontWSSType_Rx_EePRXR_b_FrontWSSType(&tmpRead_p);

        /* Inport: '<Root>/EePRXR_b_FullAutomaticParkingSystem_PM_In' */
        (void)
            Rte_Read_EePRXR_b_FullAutomaticParkingSystem_Rx_EePRXR_b_FullAutomaticParkingSystem
            (&tmpRead_o);

        /* Inport: '<Root>/EePRXR_b_SemiAutomaticParkingSystem_PM_In' */
        (void)
            Rte_Read_EePRXR_b_SemiAutomaticParkingSystem_Rx_EePRXR_b_SemiAutomaticParkingSystem
            (&tmpRead_n);

        /* Inport: '<Root>/EePRXR_b_LaunchControl_PM_In' */
        (void)Rte_Read_EePRXR_b_LaunchControl_Rx_EePRXR_b_LaunchControl
            (&tmpRead_m);

        /* Inport: '<Root>/EePRXR_e_Plug_and_Charge_PM_In' */
        (void)Rte_Read_EePRXR_e_Plug_and_Charge_Rx_EePRXR_e_Plug_and_Charge
            (&tmpRead_l);

        /* Inport: '<Root>/EePRXR_b_Hill_Des_Stat_Prx_PM_In' */
        (void)Rte_Read_EePRXR_b_Hill_Des_Stat_Prx_Rx_EePRXR_b_Hill_Des_Stat_Prx(
            &tmpRead_k);

        /* Inport: '<Root>/EePRXR_e_Proxi_CC_Logic_PM_In' */
        (void)Rte_Read_EePRXR_e_Proxi_CC_Logic_Rx_EePRXR_e_Proxi_CC_Logic
            (&tmpRead_j);

        /* Inport: '<Root>/EePRXR_b_ProxiCADM2_PM_In' */
        (void)Rte_Read_EePRXR_b_ProxiCADM2_Rx_EePRXR_b_ProxiCADM2(&tmpRead_i);

        /* Inport: '<Root>/EePRXR_b_ProxiCADM_PM_In' */
        (void)Rte_Read_EePRXR_b_ProxiCADM_Rx_EePRXR_b_ProxiCADM(&tmpRead_h);

        /* Inport: '<Root>/EePRXR_e_Proxi_Autonomy_Lvl_PM_In' */
        (void)
            Rte_Read_EePRXR_e_Proxi_Autonomy_Lvl_Rx_EePRXR_e_Proxi_Autonomy_Lvl(
            &tmpRead_g);

        /* Inport: '<Root>/EePRXR_b_RRCCPROXI_PM_In' */
        (void)Rte_Read_EePRXR_b_RRCCPROXI_Rx_EePRXR_b_RRCCPROXI(&tmpRead_f);

        /* Inport: '<Root>/EePRXR_e_VehCategory_PM_In' */
        (void)Rte_Read_EePRXR_e_VehCategory_Rx_EePRXR_e_VehCategory(&tmpRead_e);

        /* Inport: '<Root>/EePRXR_e_HomSpdLim_PM_In' */
        (void)Rte_Read_EePRXR_e_HomSpdLim_Rx_EePRXR_e_HomSpdLim(&tmpRead_d);

        /* Inport: '<Root>/EePRXR_e_ProxyHybridType_PM_In' */
        (void)Rte_Read_EePRXR_e_ProxyHybridType_Rx_EePRXR_e_ProxyHybridType
            (&tmpRead_c);

        /* Inport: '<Root>/EePRXR_r_TCaseLoRatio_PM_In' */
        (void)Rte_Read_EePRXR_r_TCaseLoRatio_Rx_EePRXR_r_TCaseLoRatio(&tmpRead_b);

        /* Inport: '<Root>/EePRXR_r_TCaseHiRatio_PM_In' */
        (void)Rte_Read_EePRXR_r_TCaseHiRatio_Rx_EePRXR_r_TCaseHiRatio(&tmpRead_a);

        /* Inport: '<Root>/EePRXR_r_Axle_Ratio_PM_In' */
        (void)Rte_Read_EePRXR_r_Axle_Ratio_Rx_EePRXR_r_Axle_Ratio(&tmpRead_9);

        /* Inport: '<Root>/EePRXR_e_ProxiIncreasingSpdCnst_PM_In' */
        (void)
            Rte_Read_EePRXR_e_ProxiIncreasingSpdCnst_Rx_EePRXR_e_ProxiIncreasingSpdCnst
            (&tmpRead_8);

        /* Inport: '<Root>/EePRXR_Pct_ProxiSpdomtrTol_PM_In' */
        (void)Rte_Read_EePRXR_Pct_ProxiSpdomtrTol_Rx_EePRXR_Pct_ProxiSpdomtrTol(
            &tmpRead_7);

        /* Inport: '<Root>/EePRXR_b_ProxiTrafficSignRcgntn_PM_In' */
        (void)
            Rte_Read_EePRXR_b_ProxiTrafficSignRcgntn_Rx_EePRXR_b_ProxiTrafficSignRcgntn
            (&tmpRead_6);

        /* Inport: '<Root>/EePRXR_b_ProxiNavPrsnc_PM_In' */
        (void)Rte_Read_EePRXR_b_ProxiNavPrsnc_Rx_EePRXR_b_ProxiNavPrsnc
            (&tmpRead_5);

        /* Inport: '<Root>/EePRXR_b_ProxiSpdLimiter_PM_In' */
        (void)Rte_Read_EePRXR_b_ProxiSpdLimiter_Rx_EePRXR_b_ProxiSpdLimiter
            (&tmpRead_4);

        /* Inport: '<Root>/EePRXR_b_ProxiCC_PM_In' */
        (void)Rte_Read_EePRXR_b_ProxiCC_Rx_EePRXR_b_ProxiCC(&tmpRead_3);

        /* Inport: '<Root>/EePRXR_e_ProxiACC_PM_In' */
        (void)Rte_Read_EePRXR_e_ProxiACC_Rx_EePRXR_e_ProxiACC(&tmpRead_2);

        /* Inport: '<Root>/EePRXR_e_RRM_VP_Level_PM_In' */
        (void)Rte_Read_EePRXR_e_RRM_VP_Level_Rx_EePRXR_e_RRM_VP_Level(&tmpRead_1);

        /* Inport: '<Root>/EePRXR_e_ShiftIndSt_PM_In' */
        (void)Rte_Read_EePRXR_e_ShiftIndSt_Rx_EePRXR_e_ShiftIndSt(&tmpRead_0);

        /* Inport: '<Root>/EePRXR_l_WhlRadius_PM_In' */
        (void)Rte_Read_EePRXR_l_WhlRadius_Rx_EePRXR_l_WhlRadius(&tmpRead);

        /* Inport: '<Root>/EePRXR_e_VehicleCountryCode_PM_In' */
        (void)
            Rte_Read_EePRXR_e_VehicleCountryCode_Rx_EePRXR_e_VehicleCountryCode(
            &rtb_Switch);

        /* Outputs for Atomic SubSystem: '<Root>/PRXR_ac_Init' */
        /* DataStoreWrite: '<S2>/Data Store Write' */
        PRXR_ac_DW.EePRXR_e_VehicleCountryCode = rtb_Switch;

        /* DataStoreWrite: '<S2>/Data Store Write1' */
        PRXR_ac_DW.EePRXR_l_WhlRadius = tmpRead;

        /* DataStoreWrite: '<S2>/Data Store Write2' */
        PRXR_ac_DW.EePRXR_e_ShiftIndSt = tmpRead_0;

        /* DataStoreWrite: '<S2>/Data Store Write3' */
        PRXR_ac_DW.EePRXR_e_RRM_VP_Level = tmpRead_1;

        /* DataStoreWrite: '<S2>/Data Store Write4' */
        PRXR_ac_DW.EePRXR_e_ProxiACC = tmpRead_2;

        /* DataStoreWrite: '<S2>/Data Store Write5' */
        PRXR_ac_DW.EePRXR_b_ProxiCC = tmpRead_3;

        /* DataStoreWrite: '<S2>/Data Store Write6' */
        PRXR_ac_DW.EePRXR_b_ProxiSpdLimiter = tmpRead_4;

        /* DataStoreWrite: '<S2>/Data Store Write7' */
        PRXR_ac_DW.EePRXR_b_ProxiNavPrsnc = tmpRead_5;

        /* DataStoreWrite: '<S2>/Data Store Write8' */
        PRXR_ac_DW.EePRXR_b_ProxiTrafficSignRcgntn = tmpRead_6;

        /* DataStoreWrite: '<S2>/Data Store Write9' */
        PRXR_ac_DW.EePRXR_Pct_ProxiSpdomtrTol = tmpRead_7;

        /* DataStoreWrite: '<S2>/Data Store Write44' */
        PRXR_ac_DW.EePRXR_e_ProxiIncreasingSpdCnst = tmpRead_8;

        /* DataStoreWrite: '<S2>/Data Store Write10' */
        PRXR_ac_DW.EePRXR_r_Axle_Ratio = tmpRead_9;

        /* DataStoreWrite: '<S2>/Data Store Write11' */
        PRXR_ac_DW.EePRXR_r_TCaseHiRatio = tmpRead_a;

        /* DataStoreWrite: '<S2>/Data Store Write12' */
        PRXR_ac_DW.EePRXR_r_TCaseLoRatio = tmpRead_b;

        /* DataStoreWrite: '<S2>/Data Store Write13' */
        PRXR_ac_DW.EePRXR_v_HomSpdLim = tmpRead_c;

        /* DataStoreWrite: '<S2>/Data Store Write14' */
        PRXR_ac_DW.EePRXR_v_HomSpdLim = tmpRead_d;

        /* DataStoreWrite: '<S2>/Data Store Write15' */
        PRXR_ac_DW.EePRXR_e_VehCategory = tmpRead_e;

        /* DataStoreWrite: '<S2>/Data Store Write16' */
        PRXR_ac_DW.EePRXR_b_RRCCPROXI = tmpRead_f;

        /* DataStoreWrite: '<S2>/Data Store Write17' */
        PRXR_ac_DW.EePRXR_e_Proxi_Autonomy_Lvl = tmpRead_g;

        /* DataStoreWrite: '<S2>/Data Store Write18' */
        PRXR_ac_DW.EePRXR_b_ProxiCADM = tmpRead_h;

        /* DataStoreWrite: '<S2>/Data Store Write19' */
        PRXR_ac_DW.EePRXR_b_ProxiCADM2 = tmpRead_i;

        /* DataStoreWrite: '<S2>/Data Store Write20' */
        PRXR_ac_DW.EePRXR_e_Proxi_CC_Logic = tmpRead_j;

        /* DataStoreWrite: '<S2>/Data Store Write21' */
        PRXR_ac_DW.EePRXR_b_Hill_Des_Stat_Prx = tmpRead_k;

        /* DataStoreWrite: '<S2>/Data Store Write22' */
        PRXR_ac_DW.EePRXR_e_Plug_and_Charge = tmpRead_l;

        /* DataStoreWrite: '<S2>/Data Store Write23' */
        PRXR_ac_DW.EePRXR_b_LaunchControl = tmpRead_m;

        /* DataStoreWrite: '<S2>/Data Store Write24' */
        PRXR_ac_DW.EePRXR_b_SemiAutomaticParkingSy = tmpRead_n;

        /* DataStoreWrite: '<S2>/Data Store Write25' */
        PRXR_ac_DW.EePRXR_b_FullAutomaticParkingSy = tmpRead_o;

        /* DataStoreWrite: '<S2>/Data Store Write26' */
        PRXR_ac_DW.EePRXR_b_FrontWSSType = tmpRead_p;

        /* DataStoreWrite: '<S2>/Data Store Write27' */
        PRXR_ac_DW.EePRXR_b_RearWSSType = tmpRead_q;

        /* DataStoreWrite: '<S2>/Data Store Write30' */
        PRXR_ac_DW.EePRXR_d_TyreSizeSecondary = tmpRead_r;

        /* DataStoreWrite: '<S2>/Data Store Write29' */
        PRXR_ac_DW.EePRXR_b_ELSD = tmpRead_s;

        /* DataStoreWrite: '<S2>/Data Store Write28' */
        PRXR_ac_DW.EePRXR_b_ELocker = tmpRead_t;

        /* DataStoreWrite: '<S2>/Data Store Write31' */
        PRXR_ac_DW.EePRXR_b_CanNodeMRGB = tmpRead_u;

        /* DataStoreWrite: '<S2>/Data Store Write32' */
        PRXR_ac_DW.EePRXR_b_CANNode55 = tmpRead_v;

        /* DataStoreWrite: '<S2>/Data Store Write33' */
        PRXR_ac_DW.EePRXR_b_DriveModes = tmpRead_w;

        /* DataStoreWrite: '<S2>/Data Store Write34' */
        PRXR_ac_DW.EePRXR_y_Wheelbase = tmpRead_x;

        /* DataStoreWrite: '<S2>/Data Store Write35' */
        PRXR_ac_DW.EePRXR_y_SuspensionConfiguratio = tmpRead_y;

        /* DataStoreWrite: '<S2>/Data Store Write36' */
        PRXR_ac_DW.EePRXR_y_SuspensionConfigurat_j = tmpRead_z;

        /* DataStoreWrite: '<S2>/Data Store Write37' */
        PRXR_ac_DW.EePRXR_y_ConfigurationFamilies = tmpRead_10;

        /* DataStoreWrite: '<S2>/Data Store Write38' */
        PRXR_ac_DW.EePRXR_y_VehicleLineConfigurati = tmpRead_11;

        /* DataStoreWrite: '<S2>/Data Store Write39' */
        PRXR_ac_DW.EePRXR_y_CarShapeConfig = tmpRead_12;

        /* DataStoreWrite: '<S2>/Data Store Write40' */
        PRXR_ac_DW.EePRXR_y_DriveStyleSelector = tmpRead_13;

        /* DataStoreWrite: '<S2>/Data Store Write41' */
        PRXR_ac_DW.EePRXR_y_Drive_Type_Variant = tmpRead_14;

        /* DataStoreWrite: '<S2>/Data Store Write42' */
        PRXR_ac_DW.EePRXR_y_ModelYear = tmpRead_15;

        /* DataStoreWrite: '<S2>/Data Store Write43' */
        PRXR_ac_DW.EePRXR_y_Lane_Assist = tmpRead_16;

        /* DataStoreWrite: '<S2>/Data Store Write45' */
        PRXR_ac_DW.EePRXR_b_Custom_Mode = tmpRead_17;

        /* DataStoreWrite: '<S2>/Data Store Write46' */
        PRXR_ac_DW.EePRXR_b_TRACK_Mode = tmpRead_18;

        /* DataStoreWrite: '<S2>/Data Store Write47' */
        PRXR_ac_DW.EePRXR_e_Axle_Locker_Presence = tmpRead_19;

        /* DataStoreWrite: '<S2>/Data Store Write48' */
        PRXR_ac_DW.EePRXR_e_Terrain_Selector_Modes = tmpRead_1a;

        /* DataStoreWrite: '<S2>/Data Store Write49' */
        PRXR_ac_DW.EePRXR_b_V2L_Present = tmpRead_1b;

        /* DataStoreWrite: '<S2>/Data Store Write50' */
        PRXR_ac_DW.EePRXR_e_OnboardPowPanelType = tmpRead_1c;

        /* DataStoreWrite: '<S2>/Data Store Write51' */
        PRXR_ac_DW.EePRXR_y_NumOfAGSUnits = tmpRead_1d;

        /* DataStoreWrite: '<S2>/Data Store Write52' */
        PRXR_ac_DW.EePRXR_e_RWSRackTravelLimits = tmpRead_1e;

        /* DataStoreWrite: '<S2>/Data Store Write53' */
        PRXR_ac_DW.EePRXR_b_CanNodeAMP = tmpRead_1f;

        /* Switch: '<S225>/Switch' incorporates:
         *  Constant: '<S338>/Calib'
         */
        if (KePRXR_b_VehCountryCode_BypEnbl)
        {
            /* Switch: '<S225>/Switch' incorporates:
             *  Constant: '<S340>/Calib'
             */
            rtb_Switch = KePRXR_d_VehCountryCode_Byp;
        }

        /* End of Switch: '<S225>/Switch' */

        /* Switch: '<S337>/Switch1' incorporates:
         *  Constant: '<S335>/Constant'
         *  Constant: '<S336>/Constant'
         *  Constant: '<S339>/Calib'
         *  RelationalOperator: '<S225>/Comparison8'
         */
        if (rtb_Switch == KePRXR_d_VehCountryCode_China)
        {
            rtb_Switch_g = CePRXR_e_VCC_CHINA;
        }
        else
        {
            rtb_Switch_g = CePRXR_e_VCC_OTHERS;
        }

        /* Outport: '<Root>/VePRXR_e_VehicleCountryCode' incorporates:
         *  Switch: '<S337>/Switch1'
         */
        (void)Rte_Write_VePRXR_e_VehicleCountryCode_Value(rtb_Switch_g);

        /* Outport: '<Root>/VePRXR_y_VehicleCountryCode' incorporates:
         *  SignalConversion: '<S225>/Signal Conversion'
         */
        (void)Rte_Write_VePRXR_y_VehicleCountryCode_Value(rtb_Switch);

        /* Switch: '<S223>/Switch' incorporates:
         *  Constant: '<S329>/Calib'
         *  Constant: '<S330>/Calib'
         *  Constant: '<S331>/Calib'
         *  Constant: '<S332>/Calib'
         *  DataTypeConversion: '<S223>/Data Type Conversion'
         *  MinMax: '<S223>/MinMax1'
         *  Product: '<S223>/Divide'
         */
        if (KePRXR_b_WhlRadius_BypEnbl)
        {
            tmp_2 = KePRXR_l_WhlRadius_Byp;
        }
        else
        {
            tmp_2 = fmaxf(((float32)tmpRead) * KePRXR_Cf_CnvrtCircumToRadius,
                          KePRXR_l_WhlRadiusThrsh);
        }

        /* Outport: '<Root>/VePRXR_l_WhlRadius' incorporates:
         *  Switch: '<S223>/Switch'
         */
        (void)Rte_Write_VePRXR_l_WhlRadius_Value(tmp_2);

        /* Switch: '<S214>/Switch' incorporates:
         *  Constant: '<S310>/Calib'
         *  Constant: '<S311>/Calib'
         *  Inport: '<Root>/EePRXR_e_ShiftIndSt_PM_In'
         *  LookupNDDirect: '<S312>/Direct Lookup Table (n-D)'
         *
         * About '<S312>/Direct Lookup Table (n-D)':
         *  1-dimensional Direct Look-Up returning a Scalar,
         *
         *     Remove protection against out-of-range input in generated code: 'off'
         */
        if (KePRXR_b_ShiftIndSt_BypEnbl)
        {
            tmp = KePRXR_e_ShiftIndSt_Byp;
        }
        else
        {
            if (((sint32)tmpRead_0) >= 3)
            {
                /* LookupNDDirect: '<S312>/Direct Lookup Table (n-D)'
                 *
                 * About '<S312>/Direct Lookup Table (n-D)':
                 *  1-dimensional Direct Look-Up returning a Scalar,
                 *
                 *     Remove protection against out-of-range input in generated code: 'off'
                 */
                tmpRead_0 = 3U;
            }

            tmp = KaPRXR_e_ShiftIndSt_Map[(tmpRead_0)];
        }

        /* Outport: '<Root>/VePRXR_e_ShiftIndSt' incorporates:
         *  Switch: '<S214>/Switch'
         */
        (void)Rte_Write_VePRXR_e_ShiftIndSt_Value(tmp);

        /* Switch: '<S210>/Switch' incorporates:
         *  Constant: '<S301>/Calib'
         *  Constant: '<S302>/Calib'
         *  Inport: '<Root>/EePRXR_e_RRM_VP_Level_PM_In'
         *  LookupNDDirect: '<S303>/Direct Lookup Table (n-D)'
         *
         * About '<S303>/Direct Lookup Table (n-D)':
         *  1-dimensional Direct Look-Up returning a Scalar,
         *
         *     Remove protection against out-of-range input in generated code: 'off'
         */
        if (KePRXR_b_RRM_VP_Level_BypEnbl)
        {
            tmp_0 = KePRXR_e_RRM_VP_Level_Byp;
        }
        else
        {
            if (((sint32)tmpRead_1) >= 4)
            {
                /* LookupNDDirect: '<S303>/Direct Lookup Table (n-D)'
                 *
                 * About '<S303>/Direct Lookup Table (n-D)':
                 *  1-dimensional Direct Look-Up returning a Scalar,
                 *
                 *     Remove protection against out-of-range input in generated code: 'off'
                 */
                tmpRead_1 = 4U;
            }

            tmp_0 = KaPRXR_e_RRM_VP_Level_Map[(tmpRead_1)];
        }

        /* Outport: '<Root>/VePRXR_e_RRM_VP_Level' incorporates:
         *  Switch: '<S210>/Switch'
         */
        (void)Rte_Write_VePRXR_e_RRM_VP_Level_Value(tmp_0);

        /* Switch: '<S197>/Switch' incorporates:
         *  Constant: '<S274>/Calib'
         *  Constant: '<S275>/Calib'
         *  Inport: '<Root>/EePRXR_e_ProxiACC_PM_In'
         *  LookupNDDirect: '<S276>/Direct Lookup Table (n-D)'
         *
         * About '<S276>/Direct Lookup Table (n-D)':
         *  1-dimensional Direct Look-Up returning a Scalar,
         *
         *     Remove protection against out-of-range input in generated code: 'off'
         */
        if (KePRXR_b_ProxiACC_BypEnbl)
        {
            tmp_1 = KePRXR_e_ProxiACC_Byp;
        }
        else
        {
            if (((sint32)tmpRead_2) >= 3)
            {
                /* LookupNDDirect: '<S276>/Direct Lookup Table (n-D)'
                 *
                 * About '<S276>/Direct Lookup Table (n-D)':
                 *  1-dimensional Direct Look-Up returning a Scalar,
                 *
                 *     Remove protection against out-of-range input in generated code: 'off'
                 */
                tmpRead_2 = 3U;
            }

            tmp_1 = KaPRXR_e_ProxiACC_Map[(tmpRead_2)];
        }

        /* Outport: '<Root>/VePRXR_e_ProxiACC' incorporates:
         *  Switch: '<S197>/Switch'
         */
        (void)Rte_Write_VePRXR_e_ProxiACC_Value(tmp_1);

        /* Switch: '<S200>/Switch' incorporates:
         *  Constant: '<S281>/Calib'
         */
        if (KePRXR_b_ProxiCC_BypEnbl)
        {
            /* Outport: '<Root>/VePRXR_b_ProxiCC' incorporates:
             *  Constant: '<S282>/Calib'
             */
            (void)Rte_Write_VePRXR_b_ProxiCC_Value(KePRXR_b_ProxiCC_Byp);
        }
        else
        {
            /* Outport: '<Root>/VePRXR_b_ProxiCC' */
            (void)Rte_Write_VePRXR_b_ProxiCC_Value(tmpRead_3);
        }

        /* End of Switch: '<S200>/Switch' */

        /* Switch: '<S203>/Switch' incorporates:
         *  Constant: '<S287>/Calib'
         */
        if (KePRXR_b_ProxiSpdLimiter_BypEnbl)
        {
            /* Outport: '<Root>/VePRXR_b_ProxiSpdLimiter' incorporates:
             *  Constant: '<S288>/Calib'
             */
            (void)Rte_Write_VePRXR_b_ProxiSpdLimiter_Value
                (KePRXR_b_ProxiSpdLimiter_Byp);
        }
        else
        {
            /* Outport: '<Root>/VePRXR_b_ProxiSpdLimiter' */
            (void)Rte_Write_VePRXR_b_ProxiSpdLimiter_Value(tmpRead_4);
        }

        /* End of Switch: '<S203>/Switch' */

        /* Switch: '<S202>/Switch' incorporates:
         *  Constant: '<S285>/Calib'
         */
        if (KePRXR_b_ProxiCC_BypEnbl)
        {
            /* Outport: '<Root>/VePRXR_b_ProxiNavPrsnc' incorporates:
             *  Constant: '<S286>/Calib'
             */
            (void)Rte_Write_VePRXR_b_ProxiNavPrsnc_Value(KePRXR_b_ProxiCC_Byp);
        }
        else
        {
            /* Outport: '<Root>/VePRXR_b_ProxiNavPrsnc' */
            (void)Rte_Write_VePRXR_b_ProxiNavPrsnc_Value(tmpRead_5);
        }

        /* End of Switch: '<S202>/Switch' */

        /* Switch: '<S205>/Switch' incorporates:
         *  Constant: '<S291>/Calib'
         */
        if (KePRXR_b_ProxiTrafficSignRcgntn_BypEnbl)
        {
            /* Outport: '<Root>/VePRXR_b_ProxiTrafficSignRcgntn' incorporates:
             *  Constant: '<S292>/Calib'
             */
            (void)Rte_Write_VePRXR_b_ProxiTrafficSignRcgntn_Value
                (KePRXR_b_ProxiTrafficSignRcgntn_Byp);
        }
        else
        {
            /* Outport: '<Root>/VePRXR_b_ProxiTrafficSignRcgntn' */
            (void)Rte_Write_VePRXR_b_ProxiTrafficSignRcgntn_Value(tmpRead_6);
        }

        /* End of Switch: '<S205>/Switch' */

        /* Switch: '<S204>/Switch' incorporates:
         *  Constant: '<S289>/Calib'
         *  Constant: '<S290>/Calib'
         */
        if (KePRXR_b_ProxiSpdomtrTol_BypEnbl)
        {
            tmp_2 = KePRXR_Pct_ProxiSpdomtrTol_Byp;
        }
        else
        {
            tmp_2 = (float32)tmpRead_7;
        }

        /* Outport: '<Root>/VePRXR_Pct_ProxiSpdomtrTol' incorporates:
         *  Switch: '<S204>/Switch'
         */
        (void)Rte_Write_VePRXR_Pct_ProxiSpdomtrTol_Value(tmp_2);

        /* Switch: '<S201>/Switch' incorporates:
         *  Constant: '<S283>/Calib'
         *  Constant: '<S284>/Calib'
         *  DataTypeConversion: '<S201>/Data Type Conversion'
         */
        if (KePRXR_b_ProxiIncreasingSpdCnst_BypEnbl)
        {
            tmp_3 = KePRXR_e_ProxiIncreasingSpdCnst_Byp;
        }
        else
        {
            tmp_3 = (TePRXR_e_IncreasingSpdConst)tmpRead_8;
        }

        /* Outport: '<Root>/VePRXR_e_ProxiIncreasingSpdCnst' incorporates:
         *  Switch: '<S201>/Switch'
         */
        (void)Rte_Write_VePRXR_e_ProxiIncreasingSpdCnst_Value(tmp_3);

        /* Switch: '<S175>/Switch' incorporates:
         *  Constant: '<S230>/Calib'
         *  Constant: '<S231>/Calib'
         */
        if (KePRXR_b_Axle_Ratio_BypEnbl)
        {
            tmp_2 = KePRXR_r_Axle_Ratio_Byp;
        }
        else
        {
            tmp_2 = (float32)tmpRead_9;
        }

        /* Outport: '<Root>/VePRXR_r_Axle_Ratio' incorporates:
         *  Switch: '<S175>/Switch'
         */
        (void)Rte_Write_VePRXR_r_Axle_Ratio_Value(tmp_2);

        /* Switch: '<S217>/Switch' incorporates:
         *  Constant: '<S317>/Calib'
         *  Constant: '<S318>/Calib'
         */
        if (KePRXR_b_TCaseHiRatio_BypEnbl)
        {
            tmp_2 = KePRXR_r_TCaseHiRatio_Byp;
        }
        else
        {
            tmp_2 = (float32)tmpRead_a;
        }

        /* Outport: '<Root>/VePRXR_r_TCaseHiRatio' incorporates:
         *  Switch: '<S217>/Switch'
         */
        (void)Rte_Write_VePRXR_r_TCaseHiRatio_Value(tmp_2);

        /* Switch: '<S218>/Switch' incorporates:
         *  Constant: '<S319>/Calib'
         *  Constant: '<S320>/Calib'
         */
        if (KePRXR_b_TCaseLoRatio_BypEnbl)
        {
            tmp_2 = KePRXR_r_TCaseLoRatio_Byp;
        }
        else
        {
            tmp_2 = (float32)tmpRead_b;
        }

        /* Outport: '<Root>/VePRXR_r_TCaseLoRatio' incorporates:
         *  Switch: '<S218>/Switch'
         */
        (void)Rte_Write_VePRXR_r_TCaseLoRatio_Value(tmp_2);

        /* Switch: '<S208>/Switch' incorporates:
         *  Constant: '<S297>/Calib'
         *  Constant: '<S298>/Calib'
         *  DataTypeConversion: '<S208>/Data Type Conversion'
         */
        if (KePRXR_b_ProxyHybridType_BypEnbl)
        {
            tmp_4 = KePRXR_e_ProxyHybridType_Byp;
        }
        else
        {
            tmp_4 = (TePRXR_e_HybridType)tmpRead_c;
        }

        /* Outport: '<Root>/VePRXR_e_ProxyHybridType' incorporates:
         *  Switch: '<S208>/Switch'
         */
        (void)Rte_Write_VePRXR_e_ProxyHybridType_Value(tmp_4);

        /* Switch: '<S190>/Switch' incorporates:
         *  Constant: '<S260>/Calib'
         *  Constant: '<S261>/Calib'
         */
        if (KePRXR_b_HomSpdLim_BypEnbl)
        {
            tmp_2 = KePRXR_v_HomSpdLim_Byp;
        }
        else
        {
            tmp_2 = (float32)tmpRead_d;
        }

        /* Outport: '<Root>/VePRXR_v_HomSpdLim' incorporates:
         *  Switch: '<S190>/Switch'
         */
        (void)Rte_Write_VePRXR_v_HomSpdLim_Value(tmp_2);

        /* Switch: '<S224>/Switch' incorporates:
         *  Constant: '<S333>/Calib'
         *  Constant: '<S334>/Calib'
         *  DataTypeConversion: '<S224>/Data Type Conversion'
         */
        if (KePRXR_b_VehCategory_BypEnbl)
        {
            tmp_5 = KePRXR_e_VehCategory_Byp;
        }
        else
        {
            tmp_5 = (TePRXR_e_VehCategory)tmpRead_e;
        }

        /* Outport: '<Root>/VePRXR_e_VehCategory' incorporates:
         *  Switch: '<S224>/Switch'
         */
        (void)Rte_Write_VePRXR_e_VehCategory_Value(tmp_5);

        /* Switch: '<S209>/Switch' incorporates:
         *  Constant: '<S300>/Calib'
         */
        if (KePRXR_b_RRCCPROXI_BypEnbl)
        {
            /* Outport: '<Root>/VePRXR_b_RRCCPROXI' incorporates:
             *  Constant: '<S299>/Calib'
             */
            (void)Rte_Write_VePRXR_b_RRCCPROXI_Value(KePRXR_b_RRCCPROXI_Byp);
        }
        else
        {
            /* Outport: '<Root>/VePRXR_b_RRCCPROXI' */
            (void)Rte_Write_VePRXR_b_RRCCPROXI_Value(tmpRead_f);
        }

        /* End of Switch: '<S209>/Switch' */

        /* Switch: '<S206>/Switch' incorporates:
         *  Constant: '<S293>/Calib'
         *  Constant: '<S294>/Calib'
         *  DataTypeConversion: '<S206>/Data Type Conversion'
         */
        if (KePRXR_b_Proxi_Autonomy_Lvl_BypEnbl)
        {
            tmp_6 = KePRXR_e_Proxi_Autonomy_Lvl_Byp;
        }
        else
        {
            tmp_6 = (TePRXR_e_Autonomy_Lvl)tmpRead_g;
        }

        /* Outport: '<Root>/VePRXR_e_Proxi_Autonomy_Lvl' incorporates:
         *  Switch: '<S206>/Switch'
         */
        (void)Rte_Write_VePRXR_e_Proxi_Autonomy_Lvl_Value(tmp_6);

        /* Switch: '<S199>/Switch' incorporates:
         *  Constant: '<S280>/Calib'
         */
        if (KePRXR_b_ProxiCADM_BypEnbl)
        {
            /* Outport: '<Root>/VePRXR_b_ProxiCADM' incorporates:
             *  Constant: '<S279>/Calib'
             */
            (void)Rte_Write_VePRXR_b_ProxiCADM_Value(KePRXR_b_ProxiCADM_Byp);
        }
        else
        {
            /* Outport: '<Root>/VePRXR_b_ProxiCADM' */
            (void)Rte_Write_VePRXR_b_ProxiCADM_Value(tmpRead_h);
        }

        /* End of Switch: '<S199>/Switch' */

        /* Switch: '<S198>/Switch' incorporates:
         *  Constant: '<S278>/Calib'
         */
        if (KePRXR_b_ProxiCADM2_BypEnbl)
        {
            /* Outport: '<Root>/VePRXR_b_ProxiCADM2' incorporates:
             *  Constant: '<S277>/Calib'
             */
            (void)Rte_Write_VePRXR_b_ProxiCADM2_Value(KePRXR_b_ProxiCADM2_Byp);
        }
        else
        {
            /* Outport: '<Root>/VePRXR_b_ProxiCADM2' */
            (void)Rte_Write_VePRXR_b_ProxiCADM2_Value(tmpRead_i);
        }

        /* End of Switch: '<S198>/Switch' */

        /* Switch: '<S207>/Switch' incorporates:
         *  Constant: '<S295>/Calib'
         *  Constant: '<S296>/Calib'
         *  DataTypeConversion: '<S207>/Data Type Conversion'
         */
        if (KePRXR_b_Proxi_CC_Logic_BypEnbl)
        {
            tmp_7 = KePRXR_e_Proxi_CC_Logic_Byp;
        }
        else
        {
            tmp_7 = (TePRXR_e_Cruise_Control_Logic)tmpRead_j;
        }

        /* Outport: '<Root>/VePRXR_e_Proxi_CC_Logic' incorporates:
         *  Switch: '<S207>/Switch'
         */
        (void)Rte_Write_VePRXR_e_Proxi_CC_Logic_Value(tmp_7);

        /* Switch: '<S189>/Switch' incorporates:
         *  Constant: '<S259>/Calib'
         */
        if (KePRXR_b_Hill_Des_Stat_Prx_BypEnbl)
        {
            /* Outport: '<Root>/VePRXR_b_Hill_Des_Stat_Prx' incorporates:
             *  Constant: '<S258>/Calib'
             */
            (void)Rte_Write_VePRXR_b_Hill_Des_Stat_Prx_Value
                (KePRXR_b_Hill_Des_Stat_Prx_Byp);
        }
        else
        {
            /* Outport: '<Root>/VePRXR_b_Hill_Des_Stat_Prx' */
            (void)Rte_Write_VePRXR_b_Hill_Des_Stat_Prx_Value(tmpRead_k);
        }

        /* End of Switch: '<S189>/Switch' */

        /* Switch: '<S196>/Switch' incorporates:
         *  Constant: '<S272>/Calib'
         *  Constant: '<S273>/Calib'
         *  DataTypeConversion: '<S196>/Data Type Conversion'
         */
        if (KePRXR_b_Plug_and_Charge_BypEnbl)
        {
            tmp_8 = KePRXR_e_Plug_and_Charge_Byp;
        }
        else
        {
            tmp_8 = (TePRXR_e_Plug_and_Charge)tmpRead_l;
        }

        /* Outport: '<Root>/VePRXR_e_Plug_and_Charge' incorporates:
         *  Switch: '<S196>/Switch'
         */
        (void)Rte_Write_VePRXR_e_Plug_and_Charge_Value(tmp_8);

        /* Switch: '<S192>/Switch' incorporates:
         *  Constant: '<S265>/Calib'
         */
        if (KePRXR_b_LaunchControl_BypEnbl)
        {
            /* Outport: '<Root>/VePRXR_b_LaunchControl' incorporates:
             *  Constant: '<S264>/Calib'
             */
            (void)Rte_Write_VePRXR_b_LaunchControl_Value
                (KePRXR_b_LaunchControl_Byp);
        }
        else
        {
            /* Outport: '<Root>/VePRXR_b_LaunchControl' */
            (void)Rte_Write_VePRXR_b_LaunchControl_Value(tmpRead_m);
        }

        /* End of Switch: '<S192>/Switch' */

        /* Switch: '<S213>/Switch' incorporates:
         *  Constant: '<S309>/Calib'
         */
        if (KePRXR_b_SemiAutomaticParkingSystem_BypEnbl)
        {
            /* Outport: '<Root>/VePRXR_b_SemiAutomaticParkingSystem' incorporates:
             *  Constant: '<S308>/Calib'
             */
            (void)Rte_Write_VePRXR_b_SemiAutomaticParkingSystem_Value
                (KePRXR_b_SemiAutomaticParkingSystem_Byp);
        }
        else
        {
            /* Outport: '<Root>/VePRXR_b_SemiAutomaticParkingSystem' */
            (void)Rte_Write_VePRXR_b_SemiAutomaticParkingSystem_Value(tmpRead_n);
        }

        /* End of Switch: '<S213>/Switch' */

        /* Switch: '<S188>/Switch' incorporates:
         *  Constant: '<S257>/Calib'
         */
        if (KePRXR_b_FullAutomaticParkingSystem_BypEnbl)
        {
            /* Outport: '<Root>/VePRXR_b_FullAutomaticParkingSystem' incorporates:
             *  Constant: '<S256>/Calib'
             */
            (void)Rte_Write_VePRXR_b_FullAutomaticParkingSystem_Value
                (KePRXR_b_FullAutomaticParkingSystem_Byp);
        }
        else
        {
            /* Outport: '<Root>/VePRXR_b_FullAutomaticParkingSystem' */
            (void)Rte_Write_VePRXR_b_FullAutomaticParkingSystem_Value(tmpRead_o);
        }

        /* End of Switch: '<S188>/Switch' */

        /* Switch: '<S187>/Switch' incorporates:
         *  Constant: '<S255>/Calib'
         */
        if (KePRXR_b_FrontWSSType_BypEnbl)
        {
            /* Outport: '<Root>/VePRXR_b_FrontWSSType' incorporates:
             *  Constant: '<S254>/Calib'
             */
            (void)Rte_Write_VePRXR_b_FrontWSSType_Value
                (KePRXR_b_FrontWSSType_Byp);
        }
        else
        {
            /* Outport: '<Root>/VePRXR_b_FrontWSSType' */
            (void)Rte_Write_VePRXR_b_FrontWSSType_Value(tmpRead_p);
        }

        /* End of Switch: '<S187>/Switch' */

        /* Switch: '<S212>/Switch' incorporates:
         *  Constant: '<S307>/Calib'
         */
        if (KePRXR_b_RearWSSType_BypEnbl)
        {
            /* Outport: '<Root>/VePRXR_b_RearWSSType' incorporates:
             *  Constant: '<S306>/Calib'
             */
            (void)Rte_Write_VePRXR_b_RearWSSType_Value(KePRXR_b_RearWSSType_Byp);
        }
        else
        {
            /* Outport: '<Root>/VePRXR_b_RearWSSType' */
            (void)Rte_Write_VePRXR_b_RearWSSType_Value(tmpRead_q);
        }

        /* End of Switch: '<S212>/Switch' */

        /* Switch: '<S221>/Switch' incorporates:
         *  Constant: '<S325>/Calib'
         */
        if (KePRXR_b_TyreSizeSecondary_BypEnbl)
        {
            /* Outport: '<Root>/VePRXR_d_TyreSizeSecondary' incorporates:
             *  Constant: '<S326>/Calib'
             */
            (void)Rte_Write_VePRXR_d_TyreSizeSecondary_Value
                (KePRXR_d_TyreSizeSecondary_Byp);
        }
        else
        {
            /* Outport: '<Root>/VePRXR_d_TyreSizeSecondary' */
            (void)Rte_Write_VePRXR_d_TyreSizeSecondary_Value(tmpRead_r);
        }

        /* End of Switch: '<S221>/Switch' */

        /* Switch: '<S185>/Switch' incorporates:
         *  Constant: '<S251>/Calib'
         */
        if (KePRXR_b_ELSD_BypEnbl)
        {
            /* Outport: '<Root>/VePRXR_b_ELSD' incorporates:
             *  Constant: '<S250>/Calib'
             */
            (void)Rte_Write_VePRXR_b_ELSD_Value(KePRXR_b_ELSD_Byp);
        }
        else
        {
            /* Outport: '<Root>/VePRXR_b_ELSD' */
            (void)Rte_Write_VePRXR_b_ELSD_Value(tmpRead_s);
        }

        /* End of Switch: '<S185>/Switch' */

        /* Switch: '<S186>/Switch' incorporates:
         *  Constant: '<S253>/Calib'
         */
        if (KePRXR_b_ELocker_BypEnbl)
        {
            /* Outport: '<Root>/VePRXR_b_ELocker' incorporates:
             *  Constant: '<S252>/Calib'
             */
            (void)Rte_Write_VePRXR_b_ELocker_Value(KePRXR_b_ELocker_Byp);
        }
        else
        {
            /* Outport: '<Root>/VePRXR_b_ELocker' */
            (void)Rte_Write_VePRXR_b_ELocker_Value(tmpRead_t);
        }

        /* End of Switch: '<S186>/Switch' */

        /* Switch: '<S178>/Switch' incorporates:
         *  Constant: '<S237>/Calib'
         */
        if (KePRXR_b_CanNodeMRGB_BypEnbl)
        {
            /* Outport: '<Root>/VePRXR_b_CanNodeMRGB' incorporates:
             *  Constant: '<S236>/Calib'
             */
            (void)Rte_Write_VePRXR_b_CanNodeMRGB_Value(KePRXR_b_CanNodeMRGB_Byp);
        }
        else
        {
            /* Outport: '<Root>/VePRXR_b_CanNodeMRGB' */
            (void)Rte_Write_VePRXR_b_CanNodeMRGB_Value(tmpRead_u);
        }

        /* End of Switch: '<S178>/Switch' */

        /* Switch: '<S176>/Switch' incorporates:
         *  Constant: '<S233>/Calib'
         */
        if (KePRXR_b_CANNode55_BypEnbl)
        {
            /* Outport: '<Root>/VePRXR_b_CANNode55' incorporates:
             *  Constant: '<S232>/Calib'
             */
            (void)Rte_Write_VePRXR_b_CANNode55_Value(KePRXR_b_CANNode55_Byp);
        }
        else
        {
            /* Outport: '<Root>/VePRXR_b_CANNode55' */
            (void)Rte_Write_VePRXR_b_CANNode55_Value(tmpRead_v);
        }

        /* End of Switch: '<S176>/Switch' */

        /* Switch: '<S182>/Switch' incorporates:
         *  Constant: '<S245>/Calib'
         */
        if (KePRXR_b_DriveModes_BypEnbl)
        {
            /* Outport: '<Root>/VePRXR_b_DriveModes' incorporates:
             *  Constant: '<S244>/Calib'
             */
            (void)Rte_Write_VePRXR_b_DriveModes_Value(KePRXR_b_DriveModes_Byp);
        }
        else
        {
            /* Outport: '<Root>/VePRXR_b_DriveModes' */
            (void)Rte_Write_VePRXR_b_DriveModes_Value(tmpRead_w);
        }

        /* End of Switch: '<S182>/Switch' */

        /* Switch: '<S227>/Switch' incorporates:
         *  Constant: '<S343>/Calib'
         */
        if (KePRXR_b_Wheelbase_BypEnbl)
        {
            /* Outport: '<Root>/VePRXR_y_Wheelbase' incorporates:
             *  Constant: '<S344>/Calib'
             */
            (void)Rte_Write_VePRXR_y_Wheelbase_Value(KePRXR_y_Wheelbase_Byp);
        }
        else
        {
            /* Outport: '<Root>/VePRXR_y_Wheelbase' */
            (void)Rte_Write_VePRXR_y_Wheelbase_Value(tmpRead_x);
        }

        /* End of Switch: '<S227>/Switch' */

        /* Switch: '<S216>/Switch' incorporates:
         *  Constant: '<S315>/Calib'
         */
        if (KePRXR_b_SuspensionConfigurationRear_BypEnbl)
        {
            /* Outport: '<Root>/VePRXR_y_SuspensionConfigurationRear' incorporates:
             *  Constant: '<S316>/Calib'
             */
            (void)Rte_Write_VePRXR_y_SuspensionConfigurationRear_Value
                (KePRXR_y_SuspensionConfigurationRear_Byp);
        }
        else
        {
            /* Outport: '<Root>/VePRXR_y_SuspensionConfigurationRear' */
            (void)Rte_Write_VePRXR_y_SuspensionConfigurationRear_Value(tmpRead_y);
        }

        /* End of Switch: '<S216>/Switch' */

        /* Switch: '<S215>/Switch' incorporates:
         *  Constant: '<S313>/Calib'
         */
        if (KePRXR_b_SuspensionConfigurationFront_BypEnbl)
        {
            /* Outport: '<Root>/VePRXR_y_SuspensionConfigurationFront' incorporates:
             *  Constant: '<S314>/Calib'
             */
            (void)Rte_Write_VePRXR_y_SuspensionConfigurationFront_Value
                (KePRXR_y_SuspensionConfigurationFront_Byp);
        }
        else
        {
            /* Outport: '<Root>/VePRXR_y_SuspensionConfigurationFront' */
            (void)Rte_Write_VePRXR_y_SuspensionConfigurationFront_Value
                (tmpRead_z);
        }

        /* End of Switch: '<S215>/Switch' */

        /* Switch: '<S180>/Switch' incorporates:
         *  Constant: '<S240>/Calib'
         */
        if (KePRXR_b_ConfigurationFamilies_BypEnbl)
        {
            /* Outport: '<Root>/VePRXR_y_ConfigurationFamilies' incorporates:
             *  Constant: '<S241>/Calib'
             */
            (void)Rte_Write_VePRXR_y_ConfigurationFamilies_Value
                (KePRXR_y_ConfigurationFamilies_Byp);
        }
        else
        {
            /* Outport: '<Root>/VePRXR_y_ConfigurationFamilies' */
            (void)Rte_Write_VePRXR_y_ConfigurationFamilies_Value(tmpRead_10);
        }

        /* End of Switch: '<S180>/Switch' */

        /* Switch: '<S226>/Switch' incorporates:
         *  Constant: '<S341>/Calib'
         */
        if (KePRXR_b_VehicleLineConfiguration_BypEnbl)
        {
            /* Outport: '<Root>/VePRXR_y_VehicleLineConfiguration' incorporates:
             *  Constant: '<S342>/Calib'
             */
            (void)Rte_Write_VePRXR_y_VehicleLineConfiguration_Value
                (KePRXR_y_VehicleLineConfiguration_Byp);
        }
        else
        {
            /* Outport: '<Root>/VePRXR_y_VehicleLineConfiguration' */
            (void)Rte_Write_VePRXR_y_VehicleLineConfiguration_Value(tmpRead_11);
        }

        /* End of Switch: '<S226>/Switch' */

        /* Switch: '<S179>/Switch' incorporates:
         *  Constant: '<S238>/Calib'
         */
        if (KePRXR_b_Wheelbase_BypEnbl)
        {
            /* Outport: '<Root>/VePRXR_y_CarShapeConfig' incorporates:
             *  Constant: '<S239>/Calib'
             */
            (void)Rte_Write_VePRXR_y_CarShapeConfig_Value(KePRXR_y_Wheelbase_Byp);
        }
        else
        {
            /* Outport: '<Root>/VePRXR_y_CarShapeConfig' */
            (void)Rte_Write_VePRXR_y_CarShapeConfig_Value(tmpRead_12);
        }

        /* End of Switch: '<S179>/Switch' */

        /* Switch: '<S183>/Switch' incorporates:
         *  Constant: '<S246>/Calib'
         */
        if (KePRXR_b_DriveStyleSelector_BypEnbl)
        {
            /* Outport: '<Root>/VePRXR_y_DriveStyleSelector' incorporates:
             *  Constant: '<S247>/Calib'
             */
            (void)Rte_Write_VePRXR_y_DriveStyleSelector_Value
                (KePRXR_y_DriveStyleSelector_Byp);
        }
        else
        {
            /* Outport: '<Root>/VePRXR_y_DriveStyleSelector' */
            (void)Rte_Write_VePRXR_y_DriveStyleSelector_Value(tmpRead_13);
        }

        /* End of Switch: '<S183>/Switch' */

        /* Switch: '<S184>/Switch' incorporates:
         *  Constant: '<S248>/Calib'
         */
        if (KePRXR_b_Drive_Type_Variant_BypEnbl)
        {
            /* Outport: '<Root>/VePRXR_y_Drive_Type_Variant' incorporates:
             *  Constant: '<S249>/Calib'
             */
            (void)Rte_Write_VePRXR_y_Drive_Type_Variant_Value
                (KePRXR_y_Drive_Type_Variant_Byp);
        }
        else
        {
            /* Outport: '<Root>/VePRXR_y_Drive_Type_Variant' */
            (void)Rte_Write_VePRXR_y_Drive_Type_Variant_Value(tmpRead_14);
        }

        /* End of Switch: '<S184>/Switch' */

        /* Switch: '<S193>/Switch' incorporates:
         *  Constant: '<S266>/Calib'
         *  Constant: '<S267>/Calib'
         */
        if (KePRXR_b_ModelYear_BypEnbl)
        {
            tmpRead_15 = KePRXR_y_ModelYear_Byp ? ((uint8)1) : ((uint8)0);
        }

        /* Outport: '<Root>/VePRXR_y_ModelYear' incorporates:
         *  Switch: '<S193>/Switch'
         */
        (void)Rte_Write_VePRXR_y_ModelYear_Value(tmpRead_15);

        /* Switch: '<S191>/Switch' incorporates:
         *  Constant: '<S262>/Calib'
         */
        if (KePRXR_b_Lane_Assist_BypEnbl)
        {
            /* Outport: '<Root>/VePRXR_y_Lane_Assist' incorporates:
             *  Constant: '<S263>/Calib'
             */
            (void)Rte_Write_VePRXR_y_Lane_Assist_Value(KePRXR_y_Lane_Assist_Byp);
        }
        else
        {
            /* Outport: '<Root>/VePRXR_y_Lane_Assist' */
            (void)Rte_Write_VePRXR_y_Lane_Assist_Value(tmpRead_16);
        }

        /* End of Switch: '<S191>/Switch' */

        /* Switch: '<S181>/Switch' incorporates:
         *  Constant: '<S242>/Calib'
         */
        if (KePRXR_b_Custom_Mode_BypEnbl)
        {
            /* Outport: '<Root>/VePRXR_b_Proxi_Custom_Mode' incorporates:
             *  Constant: '<S243>/Calib'
             */
            (void)Rte_Write_VePRXR_b_Proxi_Custom_Mode_Value
                (KePRXR_b_Custom_Mode_Byp);
        }
        else
        {
            /* Outport: '<Root>/VePRXR_b_Proxi_Custom_Mode' */
            (void)Rte_Write_VePRXR_b_Proxi_Custom_Mode_Value(tmpRead_17);
        }

        /* End of Switch: '<S181>/Switch' */

        /* Switch: '<S219>/Switch' incorporates:
         *  Constant: '<S321>/Calib'
         */
        if (KePRXR_b_Track_Mode_BypEnbl)
        {
            /* Outport: '<Root>/VePRXR_b_Proxi_Track_Mode' incorporates:
             *  Constant: '<S322>/Calib'
             */
            (void)Rte_Write_VePRXR_b_Proxi_Track_Mode_Value
                (KePRXR_b_Track_Mode_Byp);
        }
        else
        {
            /* Outport: '<Root>/VePRXR_b_Proxi_Track_Mode' */
            (void)Rte_Write_VePRXR_b_Proxi_Track_Mode_Value(tmpRead_18);
        }

        /* End of Switch: '<S219>/Switch' */

        /* Switch: '<S174>/Switch' incorporates:
         *  Constant: '<S228>/Calib'
         *  Constant: '<S229>/Calib'
         *  DataTypeConversion: '<S174>/Data Type Conversion'
         */
        if (KePRXR_b_Axle_Locker_Presence_BypEnbl)
        {
            tmp_9 = KePRXR_e_Axle_Locker_Presence_Byp;
        }
        else
        {
            tmp_9 = (TePRXR_e_AxleLockerPresence)tmpRead_19;
        }

        /* Outport: '<Root>/VePRXR_e_Axle_Locker_Presence' incorporates:
         *  Switch: '<S174>/Switch'
         */
        (void)Rte_Write_VePRXR_e_Axle_Locker_Presence_Value(tmp_9);

        /* Switch: '<S220>/Switch' incorporates:
         *  Constant: '<S323>/Calib'
         *  Constant: '<S324>/Calib'
         *  DataTypeConversion: '<S220>/Data Type Conversion'
         */
        if (KePRXR_b_Terrain_Selector_Modes_BypEnbl)
        {
            tmp_a = KePRXR_e_Terrain_Selector_Modes_Byp;
        }
        else
        {
            tmp_a = (TePRXR_e_TerrainSelectorModes)tmpRead_1a;
        }

        /* Outport: '<Root>/VePRXR_e_Terrain_Selector_Modes' incorporates:
         *  Switch: '<S220>/Switch'
         */
        (void)Rte_Write_VePRXR_e_Terrain_Selector_Modes_Value(tmp_a);

        /* Switch: '<S222>/Switch' incorporates:
         *  Constant: '<S328>/Calib'
         */
        if (KePRXR_b_V2L_Present_BypEnbl)
        {
            /* Outport: '<Root>/VePRXR_b_V2L_Present' incorporates:
             *  Constant: '<S327>/Calib'
             */
            (void)Rte_Write_VePRXR_b_V2L_Present_Value(KePRXR_b_V2L_Present_Byp);
        }
        else
        {
            /* Outport: '<Root>/VePRXR_b_V2L_Present' */
            (void)Rte_Write_VePRXR_b_V2L_Present_Value(tmpRead_1b);
        }

        /* End of Switch: '<S222>/Switch' */

        /* Switch: '<S195>/Switch' incorporates:
         *  Constant: '<S270>/Calib'
         *  Constant: '<S271>/Calib'
         *  DataTypeConversion: '<S195>/Data Type Conversion'
         */
        if (KePRXR_b_OnboardPowPanelType_BypEnbl)
        {
            tmp_b = KePRXR_e_OnboardPowPanelType_Byp;
        }
        else
        {
            tmp_b = (TePRXR_e_OnboardPowPanelType)tmpRead_1c;
        }

        /* Outport: '<Root>/VePRXR_e_OnboardPowPanelType' incorporates:
         *  Switch: '<S195>/Switch'
         */
        (void)Rte_Write_VePRXR_e_OnboardPowPanelType_Value(tmp_b);

        /* Switch: '<S194>/Switch' incorporates:
         *  Constant: '<S268>/Calib'
         */
        if (KePRXR_b_NumOfAGSUnits_BypEnbl)
        {
            /* Outport: '<Root>/VePRXR_y_NumOfAGSUnits' incorporates:
             *  Constant: '<S269>/Calib'
             */
            (void)Rte_Write_VePRXR_y_NumOfAGSUnits_Value
                (KePRXR_y_NumOfAGSUnits_Byp);
        }
        else
        {
            /* Outport: '<Root>/VePRXR_y_NumOfAGSUnits' */
            (void)Rte_Write_VePRXR_y_NumOfAGSUnits_Value(tmpRead_1d);
        }

        /* End of Switch: '<S194>/Switch' */

        /* Switch: '<S211>/Switch' incorporates:
         *  Constant: '<S304>/Calib'
         *  Constant: '<S305>/Calib'
         *  DataTypeConversion: '<S211>/Data Type Conversion'
         */
        if (KePRXR_b_RWSRackTravelLimits_BypEnbl)
        {
            tmp_c = KePRXR_e_RWSRackTravelLimits_Byp;
        }
        else
        {
            tmp_c = (TePRXR_e_RWSRackTravelLimits)tmpRead_1e;
        }

        /* Outport: '<Root>/VePRXR_e_RWSRackTravelLimits' incorporates:
         *  Switch: '<S211>/Switch'
         */
        (void)Rte_Write_VePRXR_e_RWSRackTravelLimits_Value(tmp_c);

        /* Switch: '<S177>/Switch' incorporates:
         *  Constant: '<S235>/Calib'
         */
        if (KePRXR_b_CanNodeAMP_BypEnbl)
        {
            /* Outport: '<Root>/VePRXR_b_CanNodeAMP' incorporates:
             *  Constant: '<S234>/Calib'
             */
            (void)Rte_Write_VePRXR_b_CanNodeAMP_Value(KePRXR_b_CanNodeAMP_Byp);
        }
        else
        {
            /* Outport: '<Root>/VePRXR_b_CanNodeAMP' */
            (void)Rte_Write_VePRXR_b_CanNodeAMP_Value(tmpRead_1f);
        }

        /* End of Switch: '<S177>/Switch' */
        /* End of Outputs for SubSystem: '<Root>/PRXR_ac_Init' */
    }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
