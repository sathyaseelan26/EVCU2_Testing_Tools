/*
 * File: CIDB_ac.c
 *
 * Code generated for Simulink model 'CIDB_ac'.
 *
 * Model version                  : 1.1573
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:16:51 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CIDB_ac.h"

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2019a.
//
// PROD Model Config Ver#19a.1 2/14/2020
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_CIDB
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_CIDB_U0404_BLUEN || Rte_SysCon_Variant_CIDB_U0404_Corebev || Rte_SysCon_Variant_CIDB_U0404_Pegasus

static volatile CONST(uint8, CIDB_VAR_INIT) KeCIDB_Cnt_AGSM_FD_2_ePT_SNAFailINC =
    1U;                                /* Referenced by:
                                        * '<S490>/Calib'
                                        * '<S513>/Calib'
                                        * '<S536>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_CIDB_U0404_BLUEN || Rte_SysCon_Variant_CIDB_U0404_Corebev || Rte_SysCon_Variant_CIDB_U0404_Pegasus

static volatile CONST(uint16, CIDB_VAR_INIT)
    KeCIDB_Cnt_AGSM_FD_2_ePT_SNA_FailLmt = 10U;/* Referenced by:
                                                * '<S491>/Calib'
                                                * '<S514>/Calib'
                                                * '<S537>/Calib'
                                                */

#endif

#if Rte_SysCon_Variant_CIDB_U048D_BLUEN || Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

static volatile CONST(uint8, CIDB_VAR_INIT) KeCIDB_Cnt_APM_VDCM_ePT_SNAFailINC =
    1U;                                /* Referenced by:
                                        * '<S596>/Calib'
                                        * '<S622>/Calib'
                                        * '<S664>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_CIDB_U048D_BLUEN || Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

static volatile CONST(uint16, CIDB_VAR_INIT) KeCIDB_Cnt_APM_VDCM_ePT_SNA_FailLmt
    = 10U;                             /* Referenced by:
                                        * '<S597>/Calib'
                                        * '<S623>/Calib'
                                        * '<S665>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN || Rte_SysCon_Variant_CIDB_U0412_Corebev || Rte_SysCon_Variant_CIDB_U0412_Pegasus

static volatile CONST(uint8, CIDB_VAR_INIT)
    KeCIDB_Cnt_BATTERY_HV_POWERLIMITS_ePT_SNAFailINC = 1U;/* Referenced by:
                                                           * '<S169>/Calib'
                                                           * '<S207>/Calib'
                                                           * '<S245>/Calib'
                                                           */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN || Rte_SysCon_Variant_CIDB_U0412_Corebev || Rte_SysCon_Variant_CIDB_U0412_Pegasus

static volatile CONST(uint16, CIDB_VAR_INIT)
    KeCIDB_Cnt_BATTERY_HV_POWERLIMITS_ePT_SNA_FailLmt = 10U;/* Referenced by:
                                                             * '<S170>/Calib'
                                                             * '<S208>/Calib'
                                                             * '<S246>/Calib'
                                                             */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN || Rte_SysCon_Variant_CIDB_U0412_Corebev || Rte_SysCon_Variant_CIDB_U0412_Pegasus

static volatile CONST(uint8, CIDB_VAR_INIT)
    KeCIDB_Cnt_BATTERY_HV_STATUS1_ePT_SNAFailINC = 1U;/* Referenced by:
                                                       * '<S179>/Calib'
                                                       * '<S217>/Calib'
                                                       * '<S255>/Calib'
                                                       */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN || Rte_SysCon_Variant_CIDB_U0412_Corebev || Rte_SysCon_Variant_CIDB_U0412_Pegasus

static volatile CONST(uint16, CIDB_VAR_INIT)
    KeCIDB_Cnt_BATTERY_HV_STATUS1_ePT_SNA_FailLmt = 10U;/* Referenced by:
                                                         * '<S180>/Calib'
                                                         * '<S218>/Calib'
                                                         * '<S256>/Calib'
                                                         */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN || Rte_SysCon_Variant_CIDB_U0412_Corebev || Rte_SysCon_Variant_CIDB_U0412_Pegasus

static volatile CONST(uint8, CIDB_VAR_INIT)
    KeCIDB_Cnt_BATTERY_HV_VLIMITS_ePT_SNAFailINC = 1U;/* Referenced by:
                                                       * '<S560>/Calib'
                                                       * '<S571>/Calib'
                                                       * '<S582>/Calib'
                                                       */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN || Rte_SysCon_Variant_CIDB_U0412_Corebev || Rte_SysCon_Variant_CIDB_U0412_Pegasus

static volatile CONST(uint16, CIDB_VAR_INIT)
    KeCIDB_Cnt_BATTERY_HV_VLIMITS_ePT_SNA_FailLmt = 10U;/* Referenced by:
                                                         * '<S561>/Calib'
                                                         * '<S572>/Calib'
                                                         * '<S583>/Calib'
                                                         */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

static volatile CONST(uint8, CIDB_VAR_INIT) KeCIDB_Cnt_BCM_FD_10_ePT_SNAFailINC =
    1U;                                /* Referenced by:
                                        * '<S710>/Calib'
                                        * '<S732>/Calib'
                                        * '<S754>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

static volatile CONST(uint16, CIDB_VAR_INIT)
    KeCIDB_Cnt_BCM_FD_10_ePT_SNA_FailLmt = 10U;/* Referenced by:
                                                * '<S711>/Calib'
                                                * '<S733>/Calib'
                                                * '<S755>/Calib'
                                                */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

static volatile CONST(uint8, CIDB_VAR_INIT) KeCIDB_Cnt_BCM_FD_12_ePT_SNAFailINC =
    1U;                                /* Referenced by:
                                        * '<S105>/Calib'
                                        * '<S116>/Calib'
                                        * '<S127>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

static volatile CONST(uint16, CIDB_VAR_INIT)
    KeCIDB_Cnt_BCM_FD_12_ePT_SNA_FailLmt = 10U;/* Referenced by:
                                                * '<S106>/Calib'
                                                * '<S117>/Calib'
                                                * '<S128>/Calib'
                                                */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

static volatile CONST(uint8, CIDB_VAR_INIT) KeCIDB_Cnt_BCM_FD_2_ePT_SNAFailINC =
    1U;                                /* Referenced by:
                                        * '<S396>/Calib'
                                        * '<S425>/Calib'
                                        * '<S454>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

static volatile CONST(uint16, CIDB_VAR_INIT) KeCIDB_Cnt_BCM_FD_2_ePT_SNA_FailLmt
    = 10U;                             /* Referenced by:
                                        * '<S397>/Calib'
                                        * '<S426>/Calib'
                                        * '<S455>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

static volatile CONST(uint8, CIDB_VAR_INIT) KeCIDB_Cnt_BCM_FD_9_ePT_SNAFailINC =
    1U;                                /* Referenced by:
                                        * '<S720>/Calib'
                                        * '<S742>/Calib'
                                        * '<S764>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

static volatile CONST(uint16, CIDB_VAR_INIT) KeCIDB_Cnt_BCM_FD_9_ePT_SNA_FailLmt
    = 10U;                             /* Referenced by:
                                        * '<S721>/Calib'
                                        * '<S743>/Calib'
                                        * '<S765>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_CIDB_U0415_BLUEN || Rte_SysCon_Variant_CIDB_U0415_Corebev || Rte_SysCon_Variant_CIDB_U0415_Pegasus

static volatile CONST(uint8, CIDB_VAR_INIT)
    KeCIDB_Cnt_BRAKE_FD_2_FDCAN3_SNAFailINC = 1U;/* Referenced by:
                                                  * '<S286>/Calib'
                                                  * '<S322>/Calib'
                                                  * '<S358>/Calib'
                                                  */

#endif

#if Rte_SysCon_Variant_CIDB_U0415_BLUEN || Rte_SysCon_Variant_CIDB_U0415_Corebev || Rte_SysCon_Variant_CIDB_U0415_Pegasus

static volatile CONST(uint16, CIDB_VAR_INIT)
    KeCIDB_Cnt_BRAKE_FD_2_FDCAN3_SNA_FailLmt = 10U;/* Referenced by:
                                                    * '<S287>/Calib'
                                                    * '<S323>/Calib'
                                                    * '<S359>/Calib'
                                                    */

#endif

#if Rte_SysCon_Variant_CIDB_U0415_BLUEN || Rte_SysCon_Variant_CIDB_U0415_Corebev || Rte_SysCon_Variant_CIDB_U0415_Pegasus

static volatile CONST(uint8, CIDB_VAR_INIT)
    KeCIDB_Cnt_BRAKE_FD_3_FDCAN3_SNAFailINC = 1U;/* Referenced by:
                                                  * '<S296>/Calib'
                                                  * '<S332>/Calib'
                                                  * '<S368>/Calib'
                                                  */

#endif

#if Rte_SysCon_Variant_CIDB_U0415_BLUEN || Rte_SysCon_Variant_CIDB_U0415_Corebev || Rte_SysCon_Variant_CIDB_U0415_Pegasus

static volatile CONST(uint16, CIDB_VAR_INIT)
    KeCIDB_Cnt_BRAKE_FD_3_FDCAN3_SNA_FailLmt = 10U;/* Referenced by:
                                                    * '<S297>/Calib'
                                                    * '<S333>/Calib'
                                                    * '<S369>/Calib'
                                                    */

#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

static volatile CONST(uint8, CIDB_VAR_INIT)
    KeCIDB_Cnt_CHARGE_SCHEDULE_HU1_ePT_SNAFailINC = 1U;/* Referenced by: '<S67>/Calib' */

#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

static volatile CONST(uint16, CIDB_VAR_INIT)
    KeCIDB_Cnt_CHARGE_SCHEDULE_HU1_ePT_SNA_FailLmt = 10U;/* Referenced by: '<S68>/Calib' */

#endif

#if Rte_SysCon_Variant_CIDB_U149A_Corebev || Rte_SysCon_Variant_CIDB_U149A_Pegasus

static volatile CONST(uint8, CIDB_VAR_INIT)
    KeCIDB_Cnt_CPIM_HCP_FEEDBACK_ePT_SNAFailINC = 1U;/* Referenced by:
                                                      * '<S18>/Calib'
                                                      * '<S41>/Calib'
                                                      */

#endif

#if Rte_SysCon_Variant_CIDB_U149A_Corebev || Rte_SysCon_Variant_CIDB_U149A_Pegasus

static volatile CONST(uint16, CIDB_VAR_INIT)
    KeCIDB_Cnt_CPIM_HCP_FEEDBACK_ePT_SNA_FailLmt = 10U;/* Referenced by:
                                                        * '<S19>/Calib'
                                                        * '<S42>/Calib'
                                                        */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

static volatile CONST(uint8, CIDB_VAR_INIT)
    KeCIDB_Cnt_DUALCHARGER_THERMAL_ePT_SNAFailINC = 1U;/* Referenced by:
                                                        * '<S776>/Calib'
                                                        * '<S786>/Calib'
                                                        */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

static volatile CONST(uint16, CIDB_VAR_INIT)
    KeCIDB_Cnt_DUALCHARGER_THERMAL_ePT_SNA_FailLmt = 10U;/* Referenced by:
                                                          * '<S777>/Calib'
                                                          * '<S787>/Calib'
                                                          */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

static volatile CONST(uint8, CIDB_VAR_INIT)
    KeCIDB_Cnt_HV_CHARGER1_ePT_SNAFailINC = 1U;/* Referenced by:
                                                * '<S139>/Calib'
                                                * '<S149>/Calib'
                                                */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

static volatile CONST(uint16, CIDB_VAR_INIT)
    KeCIDB_Cnt_HV_CHARGER1_ePT_SNA_FailLmt = 10U;/* Referenced by:
                                                  * '<S140>/Calib'
                                                  * '<S150>/Calib'
                                                  */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

static volatile CONST(uint8, CIDB_VAR_INIT)
    KeCIDB_Cnt_HV_CHARGER2_ePT_SNAFailINC = 1U;/* Referenced by:
                                                * '<S799>/Calib'
                                                * '<S810>/Calib'
                                                */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

static volatile CONST(uint16, CIDB_VAR_INIT)
    KeCIDB_Cnt_HV_CHARGER2_ePT_SNA_FailLmt = 10U;/* Referenced by:
                                                  * '<S800>/Calib'
                                                  * '<S811>/Calib'
                                                  */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

static volatile CONST(uint8, CIDB_VAR_INIT) KeCIDB_Cnt_OBCM_VDCM_ePT_SNAFailINC =
    1U;                                /* Referenced by:
                                        * '<S632>/Calib'
                                        * '<S674>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

static volatile CONST(uint16, CIDB_VAR_INIT)
    KeCIDB_Cnt_OBCM_VDCM_ePT_SNA_FailLmt = 10U;/* Referenced by:
                                                * '<S633>/Calib'
                                                * '<S675>/Calib'
                                                */

#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

static volatile CONST(uint8, CIDB_VAR_INIT)
    KeCIDB_Cnt_TBM_SCHEDULE_FD_1_ePT_SNAFailINC = 1U;/* Referenced by: '<S77>/Calib' */

#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

static volatile CONST(uint16, CIDB_VAR_INIT)
    KeCIDB_Cnt_TBM_SCHEDULE_FD_1_ePT_SNA_FailLmt = 10U;/* Referenced by: '<S78>/Calib' */

#endif

#if Rte_SysCon_Variant_CIDB_U0404_BLUEN || Rte_SysCon_Variant_CIDB_U0404_Corebev || Rte_SysCon_Variant_CIDB_U0404_Pegasus

static volatile CONST(boolean, CIDB_VAR_INIT)
    KeCIDB_b_AGSM_FD_2_ePT_SNA_DiagEnbl = 1;/* Referenced by:
                                             * '<S492>/Calib'
                                             * '<S515>/Calib'
                                             * '<S538>/Calib'
                                             */

#endif

#if Rte_SysCon_Variant_CIDB_U0404_BLUEN || Rte_SysCon_Variant_CIDB_U0404_Corebev || Rte_SysCon_Variant_CIDB_U0404_Pegasus

static volatile CONST(boolean, CIDB_VAR_INIT)
    KeCIDB_b_AGSM_FD_2_ePT_SNA_FailLatchEnable = 0;/* Referenced by:
                                                    * '<S493>/Calib'
                                                    * '<S516>/Calib'
                                                    * '<S539>/Calib'
                                                    */

#endif

#if Rte_SysCon_Variant_CIDB_U048D_BLUEN || Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

static volatile CONST(boolean, CIDB_VAR_INIT) KeCIDB_b_APM_VDCM_ePT_SNA_DiagEnbl
    = 1;                               /* Referenced by:
                                        * '<S598>/Calib'
                                        * '<S624>/Calib'
                                        * '<S666>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_CIDB_U048D_BLUEN || Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

static volatile CONST(boolean, CIDB_VAR_INIT)
    KeCIDB_b_APM_VDCM_ePT_SNA_FailLatchEnable = 0;/* Referenced by:
                                                   * '<S599>/Calib'
                                                   * '<S625>/Calib'
                                                   * '<S667>/Calib'
                                                   */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN || Rte_SysCon_Variant_CIDB_U0412_Corebev || Rte_SysCon_Variant_CIDB_U0412_Pegasus

static volatile CONST(boolean, CIDB_VAR_INIT)
    KeCIDB_b_BATTERY_HV_POWERLIMITS_ePT_SNA_DiagEnbl = 1;/* Referenced by:
                                                          * '<S171>/Calib'
                                                          * '<S209>/Calib'
                                                          * '<S247>/Calib'
                                                          */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN || Rte_SysCon_Variant_CIDB_U0412_Corebev || Rte_SysCon_Variant_CIDB_U0412_Pegasus

static volatile CONST(boolean, CIDB_VAR_INIT)
    KeCIDB_b_BATTERY_HV_POWERLIMITS_ePT_SNA_FailLatchEnable = 0;/* Referenced by:
                                                                 * '<S172>/Calib'
                                                                 * '<S210>/Calib'
                                                                 * '<S248>/Calib'
                                                                 */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN || Rte_SysCon_Variant_CIDB_U0412_Corebev || Rte_SysCon_Variant_CIDB_U0412_Pegasus

static volatile CONST(boolean, CIDB_VAR_INIT)
    KeCIDB_b_BATTERY_HV_STATUS1_ePT_SNA_DiagEnbl = 1;/* Referenced by:
                                                      * '<S181>/Calib'
                                                      * '<S219>/Calib'
                                                      * '<S257>/Calib'
                                                      */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN || Rte_SysCon_Variant_CIDB_U0412_Corebev || Rte_SysCon_Variant_CIDB_U0412_Pegasus

static volatile CONST(boolean, CIDB_VAR_INIT)
    KeCIDB_b_BATTERY_HV_STATUS1_ePT_SNA_FailLatchEnable = 0;/* Referenced by:
                                                             * '<S182>/Calib'
                                                             * '<S220>/Calib'
                                                             * '<S258>/Calib'
                                                             */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN || Rte_SysCon_Variant_CIDB_U0412_Corebev || Rte_SysCon_Variant_CIDB_U0412_Pegasus

static volatile CONST(boolean, CIDB_VAR_INIT)
    KeCIDB_b_BATTERY_HV_VLIMITS_ePT_SNA_DiagEnbl = 1;/* Referenced by:
                                                      * '<S562>/Calib'
                                                      * '<S573>/Calib'
                                                      * '<S584>/Calib'
                                                      */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN || Rte_SysCon_Variant_CIDB_U0412_Corebev || Rte_SysCon_Variant_CIDB_U0412_Pegasus

static volatile CONST(boolean, CIDB_VAR_INIT)
    KeCIDB_b_BATTERY_HV_VLIMITS_ePT_SNA_FailLatchEnable = 0;/* Referenced by:
                                                             * '<S563>/Calib'
                                                             * '<S574>/Calib'
                                                             * '<S585>/Calib'
                                                             */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

static volatile CONST(boolean, CIDB_VAR_INIT)
    KeCIDB_b_BCM_FD_10_ePT_SNA_DiagEnbl = 1;/* Referenced by:
                                             * '<S712>/Calib'
                                             * '<S734>/Calib'
                                             * '<S756>/Calib'
                                             */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

static volatile CONST(boolean, CIDB_VAR_INIT)
    KeCIDB_b_BCM_FD_10_ePT_SNA_FailLatchEnable = 0;/* Referenced by:
                                                    * '<S713>/Calib'
                                                    * '<S735>/Calib'
                                                    * '<S757>/Calib'
                                                    */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

static volatile CONST(boolean, CIDB_VAR_INIT)
    KeCIDB_b_BCM_FD_12_ePT_SNA_DiagEnbl = 1;/* Referenced by:
                                             * '<S107>/Calib'
                                             * '<S118>/Calib'
                                             * '<S129>/Calib'
                                             */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

static volatile CONST(boolean, CIDB_VAR_INIT)
    KeCIDB_b_BCM_FD_12_ePT_SNA_FailLatchEnable = 0;/* Referenced by:
                                                    * '<S108>/Calib'
                                                    * '<S119>/Calib'
                                                    * '<S130>/Calib'
                                                    */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

static volatile CONST(boolean, CIDB_VAR_INIT) KeCIDB_b_BCM_FD_2_ePT_SNA_DiagEnbl
    = 1;                               /* Referenced by:
                                        * '<S398>/Calib'
                                        * '<S427>/Calib'
                                        * '<S456>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

static volatile CONST(boolean, CIDB_VAR_INIT)
    KeCIDB_b_BCM_FD_2_ePT_SNA_FailLatchEnable = 0;/* Referenced by:
                                                   * '<S399>/Calib'
                                                   * '<S428>/Calib'
                                                   * '<S457>/Calib'
                                                   */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

static volatile CONST(boolean, CIDB_VAR_INIT) KeCIDB_b_BCM_FD_9_ePT_SNA_DiagEnbl
    = 1;                               /* Referenced by:
                                        * '<S722>/Calib'
                                        * '<S744>/Calib'
                                        * '<S766>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

static volatile CONST(boolean, CIDB_VAR_INIT)
    KeCIDB_b_BCM_FD_9_ePT_SNA_FailLatchEnable = 0;/* Referenced by:
                                                   * '<S723>/Calib'
                                                   * '<S745>/Calib'
                                                   * '<S767>/Calib'
                                                   */

#endif

#if Rte_SysCon_Variant_CIDB_U0415_BLUEN || Rte_SysCon_Variant_CIDB_U0415_Corebev || Rte_SysCon_Variant_CIDB_U0415_Pegasus

static volatile CONST(boolean, CIDB_VAR_INIT)
    KeCIDB_b_BRAKE_FD_2_FDCAN3_SNA_DiagEnbl = 1;/* Referenced by:
                                                 * '<S288>/Calib'
                                                 * '<S324>/Calib'
                                                 * '<S360>/Calib'
                                                 */

#endif

#if Rte_SysCon_Variant_CIDB_U0415_BLUEN || Rte_SysCon_Variant_CIDB_U0415_Corebev || Rte_SysCon_Variant_CIDB_U0415_Pegasus

static volatile CONST(boolean, CIDB_VAR_INIT)
    KeCIDB_b_BRAKE_FD_2_FDCAN3_SNA_FailLatchEnable = 0;/* Referenced by:
                                                        * '<S289>/Calib'
                                                        * '<S325>/Calib'
                                                        * '<S361>/Calib'
                                                        */

#endif

#if Rte_SysCon_Variant_CIDB_U0415_BLUEN || Rte_SysCon_Variant_CIDB_U0415_Corebev || Rte_SysCon_Variant_CIDB_U0415_Pegasus

static volatile CONST(boolean, CIDB_VAR_INIT)
    KeCIDB_b_BRAKE_FD_3_FDCAN3_SNA_DiagEnbl = 1;/* Referenced by:
                                                 * '<S298>/Calib'
                                                 * '<S334>/Calib'
                                                 * '<S370>/Calib'
                                                 */

#endif

#if Rte_SysCon_Variant_CIDB_U0415_BLUEN || Rte_SysCon_Variant_CIDB_U0415_Corebev || Rte_SysCon_Variant_CIDB_U0415_Pegasus

static volatile CONST(boolean, CIDB_VAR_INIT)
    KeCIDB_b_BRAKE_FD_3_FDCAN3_SNA_FailLatchEnable = 0;/* Referenced by:
                                                        * '<S299>/Calib'
                                                        * '<S335>/Calib'
                                                        * '<S371>/Calib'
                                                        */

#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

static volatile CONST(boolean, CIDB_VAR_INIT)
    KeCIDB_b_CHARGE_SCHEDULE_HU1_ePT_SNA_DiagEnbl = 1;/* Referenced by: '<S69>/Calib' */

#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

static volatile CONST(boolean, CIDB_VAR_INIT)
    KeCIDB_b_CHARGE_SCHEDULE_HU1_ePT_SNA_FailLatchEnable = 0;/* Referenced by: '<S70>/Calib' */

#endif

#if Rte_SysCon_Variant_CIDB_U149A_Corebev || Rte_SysCon_Variant_CIDB_U149A_Pegasus

static volatile CONST(boolean, CIDB_VAR_INIT)
    KeCIDB_b_CPIM_HCP_FEEDBACK_ePT_SNA_DiagEnbl = 1;/* Referenced by:
                                                     * '<S20>/Calib'
                                                     * '<S43>/Calib'
                                                     */

#endif

#if Rte_SysCon_Variant_CIDB_U149A_Corebev || Rte_SysCon_Variant_CIDB_U149A_Pegasus

static volatile CONST(boolean, CIDB_VAR_INIT)
    KeCIDB_b_CPIM_HCP_FEEDBACK_ePT_SNA_FailLatchEnable = 0;/* Referenced by:
                                                            * '<S21>/Calib'
                                                            * '<S44>/Calib'
                                                            */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

static volatile CONST(boolean, CIDB_VAR_INIT)
    KeCIDB_b_DUALCHARGER_THERMAL_ePT_SNA_DiagEnbl = 1;/* Referenced by:
                                                       * '<S778>/Calib'
                                                       * '<S788>/Calib'
                                                       */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

static volatile CONST(boolean, CIDB_VAR_INIT)
    KeCIDB_b_DUALCHARGER_THERMAL_ePT_SNA_FailLatchEnable = 0;/* Referenced by:
                                                              * '<S779>/Calib'
                                                              * '<S789>/Calib'
                                                              */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

static volatile CONST(boolean, CIDB_VAR_INIT)
    KeCIDB_b_HV_CHARGER1_ePT_SNA_DiagEnbl = 1;/* Referenced by:
                                               * '<S141>/Calib'
                                               * '<S151>/Calib'
                                               */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

static volatile CONST(boolean, CIDB_VAR_INIT)
    KeCIDB_b_HV_CHARGER1_ePT_SNA_FailLatchEnable = 0;/* Referenced by:
                                                      * '<S142>/Calib'
                                                      * '<S152>/Calib'
                                                      */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

static volatile CONST(boolean, CIDB_VAR_INIT)
    KeCIDB_b_HV_CHARGER2_ePT_SNA_DiagEnbl = 1;/* Referenced by:
                                               * '<S801>/Calib'
                                               * '<S812>/Calib'
                                               */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

static volatile CONST(boolean, CIDB_VAR_INIT)
    KeCIDB_b_HV_CHARGER2_ePT_SNA_FailLatchEnable = 0;/* Referenced by:
                                                      * '<S802>/Calib'
                                                      * '<S813>/Calib'
                                                      */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

static volatile CONST(boolean, CIDB_VAR_INIT)
    KeCIDB_b_OBCM_VDCM_ePT_SNA_DiagEnbl = 1;/* Referenced by:
                                             * '<S634>/Calib'
                                             * '<S676>/Calib'
                                             */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

static volatile CONST(boolean, CIDB_VAR_INIT)
    KeCIDB_b_OBCM_VDCM_ePT_SNA_FailLatchEnable = 0;/* Referenced by:
                                                    * '<S635>/Calib'
                                                    * '<S677>/Calib'
                                                    */

#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

static volatile CONST(boolean, CIDB_VAR_INIT)
    KeCIDB_b_TBM_SCHEDULE_FD_1_ePT_SNA_DiagEnbl = 1;/* Referenced by: '<S79>/Calib' */

#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

static volatile CONST(boolean, CIDB_VAR_INIT)
    KeCIDB_b_TBM_SCHEDULE_FD_1_ePT_SNA_FailLatchEnable = 0;/* Referenced by: '<S80>/Calib' */

#endif

#if Rte_SysCon_Variant_CIDB_U0404_BLUEN || Rte_SysCon_Variant_CIDB_U0404_Corebev || Rte_SysCon_Variant_CIDB_U0404_Pegasus

static volatile CONST(boolean, CIDB_VAR_INIT) KeCIDB_b_U0404_DiagEnbl = 1;/* Referenced by:
                                                                      * '<S496>/Calib'
                                                                      * '<S519>/Calib'
                                                                      * '<S542>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN || Rte_SysCon_Variant_CIDB_U0412_Corebev || Rte_SysCon_Variant_CIDB_U0412_Pegasus

static volatile CONST(boolean, CIDB_VAR_INIT) KeCIDB_b_U0412_DiagEnbl = 1;/* Referenced by:
                                                                      * '<S185>/Calib'
                                                                      * '<S223>/Calib'
                                                                      * '<S261>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_CIDB_U0415_BLUEN || Rte_SysCon_Variant_CIDB_U0415_Corebev || Rte_SysCon_Variant_CIDB_U0415_Pegasus

static volatile CONST(boolean, CIDB_VAR_INIT) KeCIDB_b_U0415_DiagEnbl = 1;/* Referenced by:
                                                                      * '<S302>/Calib'
                                                                      * '<S338>/Calib'
                                                                      * '<S374>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

static volatile CONST(boolean, CIDB_VAR_INIT) KeCIDB_b_U0422_DiagEnbl = 1;/* Referenced by:
                                                                      * '<S417>/Calib'
                                                                      * '<S431>/Calib'
                                                                      * '<S460>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

static volatile CONST(boolean, CIDB_VAR_INIT) KeCIDB_b_U044A_DiagEnbl = 1;/* Referenced by: '<S83>/Calib' */

#endif

#if Rte_SysCon_Variant_CIDB_U048D_BLUEN

static volatile CONST(boolean, CIDB_VAR_INIT) KeCIDB_b_U048D_DiagEnbl = 1;/* Referenced by: '<S602>/Calib' */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

static volatile CONST(boolean, CIDB_VAR_INIT) KeCIDB_b_U049C_DiagEnbl = 1;/* Referenced by:
                                                                      * '<S638>/Calib'
                                                                      * '<S680>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_CIDB_U149A_Corebev || Rte_SysCon_Variant_CIDB_U149A_Pegasus

static volatile CONST(boolean, CIDB_VAR_INIT) KeCIDB_b_U149A_DiagEnbl = 1;/* Referenced by:
                                                                      * '<S24>/Calib'
                                                                      * '<S47>/Calib'
                                                                      */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_CIDB
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CIDB
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_CIDB_U0404_Pegasus

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_AGSM_FD_2_FDCAN3_Fail;/* '<S535>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0404_Corebev

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_AGSM_FD_2_FDCAN3_Fail;/* '<S512>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0404_BLUEN

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_AGSM_FD_2_FDCAN3_Fail;/* '<S489>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0404_Pegasus

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_AGSM_FD_2_FDCAN3_Init;/* '<S535>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0404_Corebev

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_AGSM_FD_2_FDCAN3_Init;/* '<S512>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0404_BLUEN

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_AGSM_FD_2_FDCAN3_Init;/* '<S489>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U048D_BLUEN

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_APM_VDCM_DMPI_Fail;/* '<S595>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U048D_BLUEN

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_APM_VDCM_DMPI_Init;/* '<S595>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Pegasus

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_APM_VDCM_Fail;/* '<S663>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_APM_VDCM_Fail;/* '<S621>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Pegasus

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_APM_VDCM_Init;/* '<S663>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_APM_VDCM_Init;/* '<S621>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_Pegasus

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_BATTERY_HV_POWERLIMITS_Fail;/* '<S244>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_Corebev

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_BATTERY_HV_POWERLIMITS_Fail;/* '<S206>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_BATTERY_HV_POWERLIMITS_Fail;/* '<S168>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_Pegasus

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_BATTERY_HV_POWERLIMITS_Init;/* '<S244>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_Corebev

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_BATTERY_HV_POWERLIMITS_Init;/* '<S206>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_BATTERY_HV_POWERLIMITS_Init;/* '<S168>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_Pegasus

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_BATTERY_HV_STATUS1_Fail;/* '<S254>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_Corebev

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_BATTERY_HV_STATUS1_Fail;/* '<S216>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_BATTERY_HV_STATUS1_Fail;/* '<S178>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_Pegasus

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_BATTERY_HV_STATUS1_Init;/* '<S254>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_Corebev

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_BATTERY_HV_STATUS1_Init;/* '<S216>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_BATTERY_HV_STATUS1_Init;/* '<S178>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_Pegasus

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_BATTERY_HV_VLIMITS_Fail;/* '<S581>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_Corebev

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_BATTERY_HV_VLIMITS_Fail;/* '<S570>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_BATTERY_HV_VLIMITS_Fail;/* '<S559>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_Pegasus

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_BATTERY_HV_VLIMITS_Init;/* '<S581>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_Corebev

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_BATTERY_HV_VLIMITS_Init;/* '<S570>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_BATTERY_HV_VLIMITS_Init;/* '<S559>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_Pegasus

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_BCM_FD_10_Fail;/* '<S753>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_Corebev

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_BCM_FD_10_Fail;/* '<S731>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_BCM_FD_10_Fail;/* '<S709>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_Pegasus

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_BCM_FD_10_Init;/* '<S753>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_Corebev

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_BCM_FD_10_Init;/* '<S731>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_BCM_FD_10_Init;/* '<S709>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_Pegasus

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_BCM_FD_12_Fail;/* '<S126>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_Corebev

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_BCM_FD_12_Fail;/* '<S115>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_BCM_FD_12_Fail;/* '<S104>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_Pegasus

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_BCM_FD_12_Init;/* '<S126>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_Corebev

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_BCM_FD_12_Init;/* '<S115>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_BCM_FD_12_Init;/* '<S104>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_Pegasus

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_BCM_FD_2_Fail;/* '<S453>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_Corebev

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_BCM_FD_2_Fail;/* '<S424>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_BCM_FD_2_Fail;/* '<S395>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_Pegasus

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_BCM_FD_2_Init;/* '<S453>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_Corebev

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_BCM_FD_2_Init;/* '<S424>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_BCM_FD_2_Init;/* '<S395>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_Pegasus

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_BCM_FD_9_Fail;/* '<S763>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_Corebev

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_BCM_FD_9_Fail;/* '<S741>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_BCM_FD_9_Fail;/* '<S719>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_Pegasus

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_BCM_FD_9_Init;/* '<S763>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_Corebev

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_BCM_FD_9_Init;/* '<S741>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_BCM_FD_9_Init;/* '<S719>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0415_Pegasus

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_BRAKE_FD_2_FDCAN3_Fail;/* '<S357>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0415_Corebev

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_BRAKE_FD_2_FDCAN3_Fail;/* '<S321>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0415_BLUEN

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_BRAKE_FD_2_FDCAN3_Fail;/* '<S285>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0415_Pegasus

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_BRAKE_FD_2_FDCAN3_Init;/* '<S357>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0415_Corebev

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_BRAKE_FD_2_FDCAN3_Init;/* '<S321>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0415_BLUEN

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_BRAKE_FD_2_FDCAN3_Init;/* '<S285>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0415_Pegasus

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_BRAKE_FD_3_FDCAN3_Fail;/* '<S367>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0415_Corebev

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_BRAKE_FD_3_FDCAN3_Fail;/* '<S331>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0415_BLUEN

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_BRAKE_FD_3_FDCAN3_Fail;/* '<S295>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0415_Pegasus

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_BRAKE_FD_3_FDCAN3_Init;/* '<S367>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0415_Corebev

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_BRAKE_FD_3_FDCAN3_Init;/* '<S331>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0415_BLUEN

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_BRAKE_FD_3_FDCAN3_Init;/* '<S295>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_CHARGE_SCHEDULE_HU1_Fail;/* '<S66>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_CHARGE_SCHEDULE_HU1_Init;/* '<S66>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U149A_Pegasus

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_CPIM_HCP_FEEDBACK_Fail;/* '<S40>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U149A_Corebev

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_CPIM_HCP_FEEDBACK_Fail;/* '<S17>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U149A_Pegasus

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_CPIM_HCP_FEEDBACK_Init;/* '<S40>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U149A_Corebev

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_CPIM_HCP_FEEDBACK_Init;/* '<S17>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Pegasus

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_DUALCHARGER_THERMAL_Fail;/* '<S785>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_DUALCHARGER_THERMAL_Fail;/* '<S775>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Pegasus

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_DUALCHARGER_THERMAL_Init;/* '<S785>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_DUALCHARGER_THERMAL_Init;/* '<S775>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Pegasus

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_HV_CHARGER1_Fail;/* '<S148>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_HV_CHARGER1_Fail;/* '<S138>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Pegasus

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_HV_CHARGER1_Init;/* '<S148>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_HV_CHARGER1_Init;/* '<S138>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Pegasus

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_HV_CHARGER2_Fail;/* '<S809>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_HV_CHARGER2_Fail;/* '<S798>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Pegasus

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_HV_CHARGER2_Init;/* '<S809>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_HV_CHARGER2_Init;/* '<S798>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Pegasus

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_OBCM_VDCM_Fail;/* '<S673>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_OBCM_VDCM_Fail;/* '<S631>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Pegasus

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_OBCM_VDCM_Init;/* '<S673>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_OBCM_VDCM_Init;/* '<S631>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_TBM_SCHEDULE_FD_1_Fail;/* '<S76>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

static VAR(uint16, CIDB_VAR_INIT) VeCIDB_Cnt_TBM_SCHEDULE_FD_1_Init;/* '<S76>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0404_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_AGSM_FD_2_FDCAN3_Fail;/* '<S535>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0404_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_AGSM_FD_2_FDCAN3_Fail;/* '<S512>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0404_BLUEN

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_AGSM_FD_2_FDCAN3_Fail;/* '<S489>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0404_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_AGSM_FD_2_FDCAN3_FaultCriteria;/* '<S534>/Cast To Boolean' */

#endif

#if Rte_SysCon_Variant_CIDB_U0404_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_AGSM_FD_2_FDCAN3_FaultCriteria;/* '<S511>/Cast To Boolean' */

#endif

#if Rte_SysCon_Variant_CIDB_U0404_BLUEN

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_AGSM_FD_2_FDCAN3_FaultCriteria;/* '<S488>/Cast To Boolean' */

#endif

#if Rte_SysCon_Variant_CIDB_U0404_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_AGSM_FD_2_FDCAN3_Pass;/* '<S535>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0404_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_AGSM_FD_2_FDCAN3_Pass;/* '<S512>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0404_BLUEN

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_AGSM_FD_2_FDCAN3_Pass;/* '<S489>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U048D_BLUEN

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_APM_VDCM_DMPI_Fail;/* '<S595>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U048D_BLUEN

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_APM_VDCM_DMPI_FaultCriteria;/* '<S594>/Logical1' */

#endif

#if Rte_SysCon_Variant_CIDB_U048D_BLUEN

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_APM_VDCM_DMPI_Pass;/* '<S595>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_APM_VDCM_Fail;/* '<S663>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_APM_VDCM_Fail;/* '<S621>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_APM_VDCM_FaultCriteria;/* '<S662>/Logical1' */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_APM_VDCM_FaultCriteria;/* '<S620>/Logical1' */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_APM_VDCM_Pass;/* '<S663>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_APM_VDCM_Pass;/* '<S621>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BATTERY_HV_POWERLIMITS_Fail;/* '<S244>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BATTERY_HV_POWERLIMITS_Fail;/* '<S206>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BATTERY_HV_POWERLIMITS_Fail;/* '<S168>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BATTERY_HV_POWERLIMITS_FaultCriteria;/* '<S243>/Logical1' */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BATTERY_HV_POWERLIMITS_FaultCriteria;/* '<S205>/Logical1' */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BATTERY_HV_POWERLIMITS_FaultCriteria;/* '<S167>/Logical1' */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BATTERY_HV_POWERLIMITS_Pass;/* '<S244>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BATTERY_HV_POWERLIMITS_Pass;/* '<S206>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BATTERY_HV_POWERLIMITS_Pass;/* '<S168>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BATTERY_HV_STATUS1_Fail;/* '<S254>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BATTERY_HV_STATUS1_Fail;/* '<S216>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BATTERY_HV_STATUS1_Fail;/* '<S178>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BATTERY_HV_STATUS1_FaultCriteria;/* '<S253>/Logical1' */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BATTERY_HV_STATUS1_FaultCriteria;/* '<S215>/Logical1' */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BATTERY_HV_STATUS1_FaultCriteria;/* '<S177>/Logical1' */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BATTERY_HV_STATUS1_Pass;/* '<S254>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BATTERY_HV_STATUS1_Pass;/* '<S216>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BATTERY_HV_STATUS1_Pass;/* '<S178>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BATTERY_HV_VLIMITS_Fail;/* '<S581>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BATTERY_HV_VLIMITS_Fail;/* '<S570>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BATTERY_HV_VLIMITS_Fail;/* '<S559>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BATTERY_HV_VLIMITS_FaultCriteria;/* '<S580>/Logical1' */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BATTERY_HV_VLIMITS_FaultCriteria;/* '<S569>/Logical1' */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BATTERY_HV_VLIMITS_FaultCriteria;/* '<S558>/Logical1' */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BATTERY_HV_VLIMITS_Pass;/* '<S581>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BATTERY_HV_VLIMITS_Pass;/* '<S570>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BATTERY_HV_VLIMITS_Pass;/* '<S559>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BCM_FD_10_Fail;/* '<S753>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BCM_FD_10_Fail;/* '<S731>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BCM_FD_10_Fail;/* '<S709>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BCM_FD_10_FaultCriteria;/* '<S752>/Cast To Boolean' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BCM_FD_10_FaultCriteria;/* '<S730>/Cast To Boolean' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BCM_FD_10_FaultCriteria;/* '<S708>/Cast To Boolean' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BCM_FD_10_Pass;/* '<S753>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BCM_FD_10_Pass;/* '<S731>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BCM_FD_10_Pass;/* '<S709>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BCM_FD_12_Fail;/* '<S126>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BCM_FD_12_Fail;/* '<S115>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BCM_FD_12_Fail;/* '<S104>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BCM_FD_12_FaultCriteria;/* '<S125>/Cast To Boolean' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BCM_FD_12_FaultCriteria;/* '<S114>/Cast To Boolean' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BCM_FD_12_FaultCriteria;/* '<S103>/Cast To Boolean' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BCM_FD_12_Pass;/* '<S126>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BCM_FD_12_Pass;/* '<S115>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BCM_FD_12_Pass;/* '<S104>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BCM_FD_2_Fail;/* '<S453>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BCM_FD_2_Fail;/* '<S424>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BCM_FD_2_Fail;/* '<S395>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BCM_FD_2_FaultCriteria;/* '<S452>/Logical1' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BCM_FD_2_FaultCriteria;/* '<S423>/Logical1' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BCM_FD_2_FaultCriteria;/* '<S394>/Logical1' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BCM_FD_2_Pass;/* '<S453>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BCM_FD_2_Pass;/* '<S424>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BCM_FD_2_Pass;/* '<S395>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BCM_FD_9_Fail;/* '<S763>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BCM_FD_9_Fail;/* '<S741>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BCM_FD_9_Fail;/* '<S719>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BCM_FD_9_FaultCriteria;/* '<S762>/Cast To Boolean' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BCM_FD_9_FaultCriteria;/* '<S740>/Cast To Boolean' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BCM_FD_9_FaultCriteria;/* '<S718>/Cast To Boolean' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BCM_FD_9_Pass;/* '<S763>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BCM_FD_9_Pass;/* '<S741>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BCM_FD_9_Pass;/* '<S719>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0415_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BRAKE_FD_2_FDCAN3_Fail;/* '<S357>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0415_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BRAKE_FD_2_FDCAN3_Fail;/* '<S321>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0415_BLUEN

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BRAKE_FD_2_FDCAN3_Fail;/* '<S285>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0415_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BRAKE_FD_2_FDCAN3_FaultCriteria;/* '<S356>/Logical1' */

#endif

#if Rte_SysCon_Variant_CIDB_U0415_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BRAKE_FD_2_FDCAN3_FaultCriteria;/* '<S320>/Logical1' */

#endif

#if Rte_SysCon_Variant_CIDB_U0415_BLUEN

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BRAKE_FD_2_FDCAN3_FaultCriteria;/* '<S284>/Logical1' */

#endif

#if Rte_SysCon_Variant_CIDB_U0415_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BRAKE_FD_2_FDCAN3_Pass;/* '<S357>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0415_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BRAKE_FD_2_FDCAN3_Pass;/* '<S321>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0415_BLUEN

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BRAKE_FD_2_FDCAN3_Pass;/* '<S285>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0415_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BRAKE_FD_3_FDCAN3_Fail;/* '<S367>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0415_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BRAKE_FD_3_FDCAN3_Fail;/* '<S331>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0415_BLUEN

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BRAKE_FD_3_FDCAN3_Fail;/* '<S295>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0415_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BRAKE_FD_3_FDCAN3_FaultCriteria;/* '<S366>/Logical1' */

#endif

#if Rte_SysCon_Variant_CIDB_U0415_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BRAKE_FD_3_FDCAN3_FaultCriteria;/* '<S330>/Logical1' */

#endif

#if Rte_SysCon_Variant_CIDB_U0415_BLUEN

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BRAKE_FD_3_FDCAN3_FaultCriteria;/* '<S294>/Logical1' */

#endif

#if Rte_SysCon_Variant_CIDB_U0415_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BRAKE_FD_3_FDCAN3_Pass;/* '<S367>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0415_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BRAKE_FD_3_FDCAN3_Pass;/* '<S331>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0415_BLUEN

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_BRAKE_FD_3_FDCAN3_Pass;/* '<S295>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_CHARGE_SCHEDULE_HU1_Fail;/* '<S66>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_CHARGE_SCHEDULE_HU1_FaultCriteria;/* '<S65>/Logical1' */

#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_CHARGE_SCHEDULE_HU1_Pass;/* '<S66>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U149A_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_CPIM_HCP_FEEDBACK_Fail;/* '<S40>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U149A_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_CPIM_HCP_FEEDBACK_Fail;/* '<S17>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U149A_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_CPIM_HCP_FEEDBACK_FaultCriteria;/* '<S39>/Logical1' */

#endif

#if Rte_SysCon_Variant_CIDB_U149A_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_CPIM_HCP_FEEDBACK_FaultCriteria;/* '<S16>/Logical1' */

#endif

#if Rte_SysCon_Variant_CIDB_U149A_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_CPIM_HCP_FEEDBACK_Pass;/* '<S40>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U149A_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_CPIM_HCP_FEEDBACK_Pass;/* '<S17>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_DUALCHARGER_THERMAL_Fail;/* '<S785>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_DUALCHARGER_THERMAL_Fail;/* '<S775>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_DUALCHARGER_THERMAL_FaultCriteria;/* '<S784>/Logical1' */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_DUALCHARGER_THERMAL_FaultCriteria;/* '<S774>/Logical1' */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_DUALCHARGER_THERMAL_Pass;/* '<S785>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_DUALCHARGER_THERMAL_Pass;/* '<S775>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_HV_CHARGER1_Fail;/* '<S148>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_HV_CHARGER1_Fail;/* '<S138>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_HV_CHARGER1_FaultCriteria;/* '<S147>/Logical1' */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_HV_CHARGER1_FaultCriteria;/* '<S137>/Logical1' */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_HV_CHARGER1_Pass;/* '<S148>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_HV_CHARGER1_Pass;/* '<S138>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_HV_CHARGER2_Fail;/* '<S809>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_HV_CHARGER2_Fail;/* '<S798>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_HV_CHARGER2_FaultCriteria;/* '<S808>/Cast To Boolean' */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_HV_CHARGER2_FaultCriteria;/* '<S797>/Cast To Boolean' */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_HV_CHARGER2_Pass;/* '<S809>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_HV_CHARGER2_Pass;/* '<S798>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_OBCM_VDCM_Fail;/* '<S673>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_OBCM_VDCM_Fail;/* '<S631>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_OBCM_VDCM_FaultCriteria;/* '<S672>/Logical1' */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_OBCM_VDCM_FaultCriteria;/* '<S630>/Logical1' */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_OBCM_VDCM_Pass;/* '<S673>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_OBCM_VDCM_Pass;/* '<S631>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_TBM_SCHEDULE_FD_1_Fail;/* '<S76>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_TBM_SCHEDULE_FD_1_FaultCriteria;/* '<S75>/Logical1' */

#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_TBM_SCHEDULE_FD_1_Pass;/* '<S76>/Diagnostic Debounce' */

#endif

#if Rte_SysCon_Variant_CIDB_U0404_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_U0404_Fail;/* '<S531>/Comparison4' */

#endif

#if Rte_SysCon_Variant_CIDB_U0404_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_U0404_Fail;/* '<S508>/Comparison4' */

#endif

#if Rte_SysCon_Variant_CIDB_U0404_BLUEN

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_U0404_Fail;/* '<S485>/Comparison4' */

#endif

#if Rte_SysCon_Variant_CIDB_U0404_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_U0404_Pass;/* '<S531>/Logical10' */

#endif

#if Rte_SysCon_Variant_CIDB_U0404_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_U0404_Pass;/* '<S508>/Logical10' */

#endif

#if Rte_SysCon_Variant_CIDB_U0404_BLUEN

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_U0404_Pass;/* '<S485>/Logical10' */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_U0412_Fail;/* '<S240>/Logical11' */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_U0412_Fail;/* '<S202>/Logical11' */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_U0412_Fail;/* '<S164>/Logical11' */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_U0412_Pass;/* '<S240>/Logical10' */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_U0412_Pass;/* '<S202>/Logical10' */

#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_U0412_Pass;/* '<S164>/Logical10' */

#endif

#if Rte_SysCon_Variant_CIDB_U0415_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_U0415_Fail;/* '<S353>/Logical11' */

#endif

#if Rte_SysCon_Variant_CIDB_U0415_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_U0415_Fail;/* '<S317>/Logical11' */

#endif

#if Rte_SysCon_Variant_CIDB_U0415_BLUEN

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_U0415_Fail;/* '<S281>/Logical11' */

#endif

#if Rte_SysCon_Variant_CIDB_U0415_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_U0415_Pass;/* '<S353>/Logical10' */

#endif

#if Rte_SysCon_Variant_CIDB_U0415_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_U0415_Pass;/* '<S317>/Logical10' */

#endif

#if Rte_SysCon_Variant_CIDB_U0415_BLUEN

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_U0415_Pass;/* '<S281>/Logical10' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_U0422_Fail;/* '<S449>/Logical2' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_U0422_Fail;/* '<S420>/Logical2' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_U0422_Fail;/* '<S390>/Logical' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_U0422_Pass;/* '<S449>/Logical10' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_U0422_Pass;/* '<S420>/Logical10' */

#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_U0422_Pass;/* '<S390>/Logical1' */

#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_U044A_Fail;/* '<S62>/Logical11' */

#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_U044A_Pass;/* '<S62>/Logical10' */

#endif

#if Rte_SysCon_Variant_CIDB_U048D_BLUEN

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_U048D_Fail;/* '<S591>/Comparison1' */

#endif

#if Rte_SysCon_Variant_CIDB_U048D_BLUEN

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_U048D_Pass;/* '<S591>/Logical10' */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_U049C_Fail;/* '<S659>/Logical11' */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_U049C_Fail;/* '<S617>/Logical11' */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_U049C_Pass;/* '<S659>/Logical10' */

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_U049C_Pass;/* '<S617>/Logical10' */

#endif

#if Rte_SysCon_Variant_CIDB_U149A_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_U149A_Fail;/* '<S36>/Comparison4' */

#endif

#if Rte_SysCon_Variant_CIDB_U149A_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_U149A_Fail;/* '<S13>/Comparison4' */

#endif

#if Rte_SysCon_Variant_CIDB_U149A_Pegasus

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_U149A_Pass;/* '<S36>/Logical10' */

#endif

#if Rte_SysCon_Variant_CIDB_U149A_Corebev

static VAR(boolean, CIDB_VAR_INIT) VeCIDB_b_U149A_Pass;/* '<S13>/Logical10' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CIDB
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CIDB
#include "MemMap.h"

VAR(B_CIDB_ac_T, CIDB_VAR_INIT) CIDB_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CIDB
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CIDB
#include "MemMap.h"

VAR(DW_CIDB_ac_T, CIDB_VAR_INIT) CIDB_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CIDB
#include "MemMap.h"
#if Rte_SysCon_Variant_CIDB_U149A_Corebev || Rte_SysCon_Variant_CIDB_U149A_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_DiagnosticDebounce(VAR(boolean,
    AUTOMATIC) rtu_EnDiag, VAR(boolean, AUTOMATIC) rtu_Err, VAR(uint16,
    AUTOMATIC) rtu_FThr, VAR(uint8, AUTOMATIC) rtu_FInc, VAR(boolean, AUTOMATIC)
    rtu_Reset, P2VAR(B_DiagnosticDebounce_CIDB_ac_T, AUTOMATIC, CIDB_VAR_INIT)
    localB);

#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN || Rte_SysCon_Variant_CIDB_U0412_Corebev || Rte_SysCon_Variant_CIDB_U0412_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_DiagnosticDebounce_j(VAR(boolean,
    AUTOMATIC) rtu_EnDiag, VAR(boolean, AUTOMATIC) rtu_Err, VAR(uint16,
    AUTOMATIC) rtu_FThr, VAR(uint8, AUTOMATIC) rtu_FInc, VAR(boolean, AUTOMATIC)
    rtu_Reset, P2VAR(B_DiagnosticDebounce_CIDB_ac_l_T, AUTOMATIC, CIDB_VAR_INIT)
    localB);

#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN || Rte_SysCon_Variant_CIDB_U0412_Corebev || Rte_SysCon_Variant_CIDB_U0412_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_DiagnosticDebounce_m(VAR(boolean,
    AUTOMATIC) rtu_EnDiag, VAR(boolean, AUTOMATIC) rtu_Err, VAR(uint16,
    AUTOMATIC) rtu_FThr, VAR(uint8, AUTOMATIC) rtu_FInc, VAR(boolean, AUTOMATIC)
    rtu_Reset, P2VAR(B_DiagnosticDebounce_CIDB_ac_o_T, AUTOMATIC, CIDB_VAR_INIT)
    localB);

#endif

#if Rte_SysCon_Variant_CIDB_U0415_BLUEN || Rte_SysCon_Variant_CIDB_U0415_Corebev || Rte_SysCon_Variant_CIDB_U0415_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_DiagnosticDebounce_p(VAR(boolean,
    AUTOMATIC) rtu_EnDiag, VAR(boolean, AUTOMATIC) rtu_Err, VAR(uint16,
    AUTOMATIC) rtu_FThr, VAR(uint8, AUTOMATIC) rtu_FInc, VAR(boolean, AUTOMATIC)
    rtu_Reset, P2VAR(B_DiagnosticDebounce_CIDB_ac_g_T, AUTOMATIC, CIDB_VAR_INIT)
    localB);

#endif

#if Rte_SysCon_Variant_CIDB_U0415_BLUEN || Rte_SysCon_Variant_CIDB_U0415_Corebev || Rte_SysCon_Variant_CIDB_U0415_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_DiagnosticDebounce_d(VAR(boolean,
    AUTOMATIC) rtu_EnDiag, VAR(boolean, AUTOMATIC) rtu_Err, VAR(uint16,
    AUTOMATIC) rtu_FThr, VAR(uint8, AUTOMATIC) rtu_FInc, VAR(boolean, AUTOMATIC)
    rtu_Reset, P2VAR(B_DiagnosticDebounce_CIDB_ac_j_T, AUTOMATIC, CIDB_VAR_INIT)
    localB);

#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_DiagnosticDebounce_n(VAR(boolean,
    AUTOMATIC) rtu_EnDiag, VAR(boolean, AUTOMATIC) rtu_Err, VAR(uint16,
    AUTOMATIC) rtu_FThr, VAR(uint8, AUTOMATIC) rtu_FInc, VAR(boolean, AUTOMATIC)
    rtu_Reset, P2VAR(B_DiagnosticDebounce_CIDB_ac_a_T, AUTOMATIC, CIDB_VAR_INIT)
    localB);

#endif

#if Rte_SysCon_Variant_CIDB_U0404_BLUEN || Rte_SysCon_Variant_CIDB_U0404_Corebev || Rte_SysCon_Variant_CIDB_U0404_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_DiagnosticDebounce_h(VAR(boolean,
    AUTOMATIC) rtu_EnDiag, VAR(boolean, AUTOMATIC) rtu_Err, VAR(uint16,
    AUTOMATIC) rtu_FThr, VAR(uint8, AUTOMATIC) rtu_FInc, VAR(boolean, AUTOMATIC)
    rtu_Reset, P2VAR(B_DiagnosticDebounce_CIDB_ac_h_T, AUTOMATIC, CIDB_VAR_INIT)
    localB);

#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN || Rte_SysCon_Variant_CIDB_U0412_Corebev || Rte_SysCon_Variant_CIDB_U0412_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_DiagnosticDebounce_o_Init(P2VAR
    (TeDFIB_e_FaultDebounceStatus, AUTOMATIC, CIDB_VAR_INIT) rty_Status);

#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN || Rte_SysCon_Variant_CIDB_U0412_Corebev || Rte_SysCon_Variant_CIDB_U0412_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_DiagnosticDebounce_hp(VAR(boolean,
    AUTOMATIC) rtu_EnDiag, VAR(boolean, AUTOMATIC) rtu_Err, VAR(uint16,
    AUTOMATIC) rtu_FThr, VAR(uint8, AUTOMATIC) rtu_FInc, VAR(boolean, AUTOMATIC)
    rtu_Reset, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, CIDB_VAR_INIT)
    rty_Status);

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_DiagnosticDebounce_pc(VAR(boolean,
    AUTOMATIC) rtu_EnDiag, VAR(boolean, AUTOMATIC) rtu_Err, VAR(uint16,
    AUTOMATIC) rtu_FThr, VAR(uint8, AUTOMATIC) rtu_FInc, VAR(boolean, AUTOMATIC)
    rtu_Reset, P2VAR(B_DiagnosticDebounce_CIDB_ac_hx_T, AUTOMATIC, CIDB_VAR_INIT)
    localB);

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_DiagnosticDebounce_f(VAR(boolean,
    AUTOMATIC) rtu_EnDiag, VAR(boolean, AUTOMATIC) rtu_Err, VAR(uint16,
    AUTOMATIC) rtu_FThr, VAR(uint8, AUTOMATIC) rtu_FInc, VAR(boolean, AUTOMATIC)
    rtu_Reset, P2VAR(B_DiagnosticDebounce_CIDB_ac_i_T, AUTOMATIC, CIDB_VAR_INIT)
    localB);

#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_DiagnosticDebounce_n_Init(P2VAR
    (TeDFIB_e_FaultDebounceStatus, AUTOMATIC, CIDB_VAR_INIT) rty_Status);

#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_DiagnosticDebounce_b(VAR(boolean,
    AUTOMATIC) rtu_EnDiag, VAR(boolean, AUTOMATIC) rtu_Err, VAR(uint16,
    AUTOMATIC) rtu_FThr, VAR(uint8, AUTOMATIC) rtu_FInc, VAR(boolean, AUTOMATIC)
    rtu_Reset, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, CIDB_VAR_INIT)
    rty_Status);

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_DiagnosticDebounce_im_Init(P2VAR
    (TeDFIB_e_FaultDebounceStatus, AUTOMATIC, CIDB_VAR_INIT) rty_Status);

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_DiagnosticDebounce_nn(VAR(boolean,
    AUTOMATIC) rtu_EnDiag, VAR(boolean, AUTOMATIC) rtu_Err, VAR(uint16,
    AUTOMATIC) rtu_FThr, VAR(uint8, AUTOMATIC) rtu_FInc, VAR(boolean, AUTOMATIC)
    rtu_Reset, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, CIDB_VAR_INIT)
    rty_Status);

#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0422_BCM_FD_10_Init(P2VAR
    (TeDFIB_e_FaultDebounceStatus, AUTOMATIC, CIDB_VAR_INIT)
    rty_VeCIDB_e_BCM_FD_10_ErrState, P2VAR(boolean, AUTOMATIC, CIDB_VAR_INIT)
    rty_VeCIDB_b_BCM_FD_10_CalDiagEnbl);

#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0422_BCM_FD_10(VAR(boolean,
    AUTOMATIC) rtu_Enable, VAR(boolean, AUTOMATIC) rtu_VeCIDB_b_U0422_DiagEnbl,
    VAR(boolean, AUTOMATIC) rtu_VeCIDB_b_RstDiagCntr, VAR(uint8, AUTOMATIC)
    rtu_VeSR1B_y_CmdIgnSts_SigSts, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC,
    CIDB_VAR_INIT) rty_VeCIDB_e_BCM_FD_10_ErrState, P2VAR(boolean, AUTOMATIC,
    CIDB_VAR_INIT) rty_VeCIDB_b_BCM_FD_10_CalDiagEnbl, P2VAR
    (DW_U0422_BCM_FD_10_CIDB_ac_T, AUTOMATIC, CIDB_VAR_INIT) localDW, P2VAR
    (uint8, AUTOMATIC, CIDB_VAR_INIT) rtd_StatusByte_InvData_BCM);

#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_DiagnosticDebounce_l_Init(P2VAR
    (TeDFIB_e_FaultDebounceStatus, AUTOMATIC, CIDB_VAR_INIT) rty_Status);

#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_DiagnosticDebounce_m2(VAR(boolean,
    AUTOMATIC) rtu_EnDiag, VAR(boolean, AUTOMATIC) rtu_Err, VAR(uint16,
    AUTOMATIC) rtu_FThr, VAR(uint8, AUTOMATIC) rtu_FInc, VAR(boolean, AUTOMATIC)
    rtu_Reset, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, CIDB_VAR_INIT)
    rty_Status);

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_DiagnosticDebounce_hz_Init(P2VAR
    (TeDFIB_e_FaultDebounceStatus, AUTOMATIC, CIDB_VAR_INIT) rty_Status);

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_DiagnosticDebounce_g(VAR(boolean,
    AUTOMATIC) rtu_EnDiag, VAR(boolean, AUTOMATIC) rtu_Err, VAR(uint16,
    AUTOMATIC) rtu_FThr, VAR(uint8, AUTOMATIC) rtu_FInc, VAR(boolean, AUTOMATIC)
    rtu_Reset, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, CIDB_VAR_INIT)
    rty_Status);

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_HV_CHARGER_2_Init(P2VAR
    (TeDFIB_e_FaultDebounceStatus, AUTOMATIC, CIDB_VAR_INIT)
    rty_VeCIDB_e_HV_CHARGER2_ErrState, P2VAR(boolean, AUTOMATIC, CIDB_VAR_INIT)
    rty_VeCIDB_b_HV_CHARGER2_CalDiagEnbl);

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_HV_CHARGER_2(VAR(boolean, AUTOMATIC)
    rtu_Enable, VAR(boolean, AUTOMATIC) rtu_VeCIDB_b_U049C_DiagEnbl, VAR(boolean,
    AUTOMATIC) rtu_VeCIDB_b_RstDiagCntr, VAR(uint8, AUTOMATIC)
    rtu_VeCRDB_y_ChrgFailSts_SigSts, P2VAR(TeDFIB_e_FaultDebounceStatus,
    AUTOMATIC, CIDB_VAR_INIT) rty_VeCIDB_e_HV_CHARGER2_ErrState, P2VAR(boolean,
    AUTOMATIC, CIDB_VAR_INIT) rty_VeCIDB_b_HV_CHARGER2_CalDiagEnbl, P2VAR
    (DW_HV_CHARGER_2_CIDB_ac_T, AUTOMATIC, CIDB_VAR_INIT) localDW, P2VAR(uint8,
    AUTOMATIC, CIDB_VAR_INIT) rtd_StatusByte_InvData_OBCM);

#endif

#if Rte_SysCon_Variant_CIDB_U149A_Corebev

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U149A_COREBEV_250ms_Init(void);

#endif

#if Rte_SysCon_Variant_CIDB_U149A_Corebev

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U149A_COREBEV_250ms(void);

#endif

#if Rte_SysCon_Variant_CIDB_U149A_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U149A_Pegasus_250ms_Init(void);

#endif

#if Rte_SysCon_Variant_CIDB_U149A_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U149A_Pegasus_250ms(void);

#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0412_Variant_Bluen_10ms_Init(void);

#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0412_Variant_Bluen_10ms(void);

#endif

#if Rte_SysCon_Variant_CIDB_U0412_Corebev

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0412_Variant_Corebev_10ms_Init(void);

#endif

#if Rte_SysCon_Variant_CIDB_U0412_Corebev

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0412_Variant_Corebev_10ms(void);

#endif

#if Rte_SysCon_Variant_CIDB_U0412_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0412_Variant_Pegasus_10ms_Init(void);

#endif

#if Rte_SysCon_Variant_CIDB_U0412_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0412_Variant_Pegasus_10ms(void);

#endif

#if Rte_SysCon_Variant_CIDB_U0415_BLUEN

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0415_Bluen_10ms_Init(void);

#endif

#if Rte_SysCon_Variant_CIDB_U0415_BLUEN

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0415_Bluen_10ms(void);

#endif

#if Rte_SysCon_Variant_CIDB_U0415_Corebev

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0415_COREBEV_10ms_Init(void);

#endif

#if Rte_SysCon_Variant_CIDB_U0415_Corebev

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0415_COREBEV_10ms(void);

#endif

#if Rte_SysCon_Variant_CIDB_U0415_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0415_Pegasus_10ms_Init(void);

#endif

#if Rte_SysCon_Variant_CIDB_U0415_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0415_Pegasus_10ms(void);

#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0422_BLUEN_10ms_Init(void);

#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0422_BLUEN_10ms(void);

#endif

#if Rte_SysCon_Variant_CIDB_U0422_Corebev

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0422_COREBEV_10ms_Init(void);

#endif

#if Rte_SysCon_Variant_CIDB_U0422_Corebev

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0422_COREBEV_10ms(void);

#endif

#if Rte_SysCon_Variant_CIDB_U0422_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0422_Pegasus_10ms_Init(void);

#endif

#if Rte_SysCon_Variant_CIDB_U0422_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0422_Pegasus_10ms(void);

#endif

#if Rte_SysCon_Variant_CIDB_U0404_BLUEN

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0404_BLUEN_20ms_Init(void);

#endif

#if Rte_SysCon_Variant_CIDB_U0404_BLUEN

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0404_BLUEN_20ms(void);

#endif

#if Rte_SysCon_Variant_CIDB_U0404_Corebev

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0404_COREBEV_20ms_Init(void);

#endif

#if Rte_SysCon_Variant_CIDB_U0404_Corebev

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0404_COREBEV_20ms(void);

#endif

#if Rte_SysCon_Variant_CIDB_U0404_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0404_Pegasus_20ms_Init(void);

#endif

#if Rte_SysCon_Variant_CIDB_U0404_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0404_Pegasus_20ms(void);

#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0412_BLUEN_20ms_Init(void);

#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0412_BLUEN_20ms(void);

#endif

#if Rte_SysCon_Variant_CIDB_U0412_Corebev

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0412_COREBEV_20ms_Init(void);

#endif

#if Rte_SysCon_Variant_CIDB_U0412_Corebev

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0412_COREBEV_20ms(void);

#endif

#if Rte_SysCon_Variant_CIDB_U0412_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0412_Pegasus_20ms_Init(void);

#endif

#if Rte_SysCon_Variant_CIDB_U0412_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0412_Pegasus_20ms(void);

#endif

#if Rte_SysCon_Variant_CIDB_U048D_BLUEN

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U048D_BLUEN_20ms(void);

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U049C_COREBEV_20ms_Init(void);

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U049C_COREBEV_20ms(void);

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U049C_Pegasus_20ms_Init(void);

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U049C_Pegasus_20ms(void);

#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0422_Bluen_100ms_Init(void);

#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0422_Bluen_100ms(void);

#endif

#if Rte_SysCon_Variant_CIDB_U0422_Corebev

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0422_COREBEV_100ms_Init(void);

#endif

#if Rte_SysCon_Variant_CIDB_U0422_Corebev

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0422_COREBEV_100ms(void);

#endif

#if Rte_SysCon_Variant_CIDB_U0422_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0422_Pegasus_100ms_Init(void);

#endif

#if Rte_SysCon_Variant_CIDB_U0422_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0422_Pegasus_100ms(void);

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U049C_COREBEV_100ms_Init(void);

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U049C_COREBEV_100ms(void);

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U049C_Pegasus_100ms_Init(void);

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U049C_Pegasus_100ms(void);

#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0422_Bluen_250ms_Init(void);

#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0422_Bluen_250ms(void);

#endif

#if Rte_SysCon_Variant_CIDB_U0422_Corebev

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0422_Corebev_250ms_Init(void);

#endif

#if Rte_SysCon_Variant_CIDB_U0422_Corebev

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0422_Corebev_250ms(void);

#endif

#if Rte_SysCon_Variant_CIDB_U0422_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0422_Pegasus_250ms_Init(void);

#endif

#if Rte_SysCon_Variant_CIDB_U0422_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0422_Pegasus_250ms(void);

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U049C_Corebev_250ms_Init(void);

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U049C_Corebev_250ms(void);

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U049C_Pegasus_250ms_Init(void);

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U049C_Pegasus_250ms(void);

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U049C_Variant_Corebev_500ms_Init(void);

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U049C_Variant_Corebev_500ms(void);

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U049C_Variant_Pegasus_500ms_Init(void);

#endif

#if Rte_SysCon_Variant_CIDB_U049C_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U049C_Variant_Pegasus_500ms(void);

#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U044A_Pegasus_COREBEV_1000ms(void);

#endif

/*
 * Output and update for atomic system:
 *    '<S17>/Diagnostic Debounce'
 *    '<S40>/Diagnostic Debounce'
 */
#if Rte_SysCon_Variant_CIDB_U149A_Corebev || Rte_SysCon_Variant_CIDB_U149A_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_DiagnosticDebounce(VAR(boolean,
    AUTOMATIC) rtu_EnDiag, VAR(boolean, AUTOMATIC) rtu_Err, VAR(uint16,
    AUTOMATIC) rtu_FThr, VAR(uint8, AUTOMATIC) rtu_FInc, VAR(boolean, AUTOMATIC)
    rtu_Reset, P2VAR(B_DiagnosticDebounce_CIDB_ac_T, AUTOMATIC, CIDB_VAR_INIT)
    localB)
{
    sint32 tmp;

    /* Chart: '<S17>/Diagnostic Debounce' */
    /* Gateway: DiagnosticDebounceimplausibleSignalSNA/Diagnostic Debounce */
    /* During: DiagnosticDebounceimplausibleSignalSNA/Diagnostic Debounce */
    /* Entry Internal: DiagnosticDebounceimplausibleSignalSNA/Diagnostic Debounce */
    /* Transition: '<S22>:499' */
    VeCIDB_b_CPIM_HCP_FEEDBACK_Fail = false;
    VeCIDB_b_CPIM_HCP_FEEDBACK_Pass = false;
    if (rtu_Reset)
    {
        /* Transition: '<S22>:500' */
        /* Transition: '<S22>:502' */
        localB->Status = CeDFIB_e_Init;
        VeCIDB_Cnt_CPIM_HCP_FEEDBACK_Fail = 0U;
        VeCIDB_Cnt_CPIM_HCP_FEEDBACK_Init = 0U;

        /* Transition: '<S22>:505' */
        /* Transition: '<S22>:533' */
        /* Transition: '<S22>:545' */
        /* Transition: '<S22>:546' */
    }
    else
    {
        /* Transition: '<S22>:501' */
        if (rtu_EnDiag)
        {
            /* Transition: '<S22>:504' */
            if (((uint32)localB->Status) == CeDFIB_e_Init)
            {
                /* Transition: '<S22>:507' */
                if (!rtu_Err)
                {
                    /* Transition: '<S22>:506' */
                    /* Transition: '<S22>:509' */
                    tmp = ((sint32)VeCIDB_Cnt_CPIM_HCP_FEEDBACK_Init) + ((sint32)
                        rtu_FInc);
                    if (tmp > 65535)
                    {
                        tmp = 65535;
                    }

                    VeCIDB_Cnt_CPIM_HCP_FEEDBACK_Init = (uint16)tmp;
                    if (VeCIDB_Cnt_CPIM_HCP_FEEDBACK_Init >= rtu_FThr)
                    {
                        /* Transition: '<S22>:511' */
                        /* Transition: '<S22>:513' */
                        localB->Status = CeDFIB_e_Pass;
                        VeCIDB_b_CPIM_HCP_FEEDBACK_Pass = true;

                        /* Transition: '<S22>:516' */
                    }
                    else
                    {
                        /* Transition: '<S22>:512' */
                    }

                    /* Transition: '<S22>:515' */
                }
                else
                {
                    /* Transition: '<S22>:508' */
                    VeCIDB_Cnt_CPIM_HCP_FEEDBACK_Init = 0U;
                }

                /* Transition: '<S22>:514' */
            }
            else
            {
                /* Transition: '<S22>:510' */
            }

            /* Transition: '<S22>:517' */
            if ((((((uint32)localB->Status) == CeDFIB_e_Pass) || (((uint32)
                    localB->Status) == CeDFIB_e_Pass_FaultRemoved)) || (((uint32)
                    localB->Status) == CeDFIB_e_Pass_FaultFiltering)) ||
                    (((uint32)localB->Status) == CeDFIB_e_Init))
            {
                /* Transition: '<S22>:518' */
                if (rtu_Err)
                {
                    /* Transition: '<S22>:519' */
                    /* Transition: '<S22>:522' */
                    tmp = ((sint32)VeCIDB_Cnt_CPIM_HCP_FEEDBACK_Fail) + ((sint32)
                        rtu_FInc);
                    if (tmp > 65535)
                    {
                        tmp = 65535;
                    }

                    VeCIDB_Cnt_CPIM_HCP_FEEDBACK_Fail = (uint16)tmp;
                    if (VeCIDB_Cnt_CPIM_HCP_FEEDBACK_Fail > rtu_FThr)
                    {
                        /* Transition: '<S22>:524' */
                        /* Transition: '<S22>:528' */
                        localB->Status = CeDFIB_e_Fail;
                        VeCIDB_b_CPIM_HCP_FEEDBACK_Fail = true;
                        VeCIDB_Cnt_CPIM_HCP_FEEDBACK_Fail = (uint16)((sint32)
                            (((sint32)rtu_FThr) + 1));
                    }
                    else
                    {
                        /* Transition: '<S22>:557' */
                        if (((uint32)localB->Status) != CeDFIB_e_Init)
                        {
                            /* Transition: '<S22>:563' */
                            localB->Status = CeDFIB_e_Pass_FaultFiltering;

                            /* Transition: '<S22>:564' */
                            /* Transition: '<S22>:562' */
                        }
                        else
                        {
                            /* Transition: '<S22>:559' */
                            /* Transition: '<S22>:561' */
                            /* Transition: '<S22>:562' */
                        }
                    }
                }
                else
                {
                    /* Transition: '<S22>:521' */
                    if (((sint32)VeCIDB_Cnt_CPIM_HCP_FEEDBACK_Fail) > 0)
                    {
                        /* Transition: '<S22>:523' */
                        /* Transition: '<S22>:567' */
                        tmp = ((sint32)VeCIDB_Cnt_CPIM_HCP_FEEDBACK_Fail) - 1;
                        if ((((sint32)VeCIDB_Cnt_CPIM_HCP_FEEDBACK_Fail) - 1) <
                                0)
                        {
                            tmp = 0;
                        }

                        VeCIDB_Cnt_CPIM_HCP_FEEDBACK_Fail = (uint16)tmp;
                        if (((uint32)localB->Status) != CeDFIB_e_Init)
                        {
                            /* Transition: '<S22>:574' */
                            localB->Status = CeDFIB_e_Pass_FaultRemoved;

                            /* Transition: '<S22>:569' */
                        }
                        else
                        {
                            /* Transition: '<S22>:572' */
                            /* Transition: '<S22>:573' */
                        }
                    }
                    else
                    {
                        /* Transition: '<S22>:577' */
                        if (((uint32)localB->Status) != CeDFIB_e_Init)
                        {
                            /* Transition: '<S22>:582' */
                            localB->Status = CeDFIB_e_Pass;

                            /* Transition: '<S22>:581' */
                        }
                        else
                        {
                            /* Transition: '<S22>:579' */
                            /* Transition: '<S22>:580' */
                        }

                        /* Transition: '<S22>:583' */
                        /* Transition: '<S22>:569' */
                    }

                    /* Transition: '<S22>:570' */
                    /* Transition: '<S22>:564' */
                    /* Transition: '<S22>:562' */
                }

                /* Transition: '<S22>:532' */
                /* Transition: '<S22>:533' */
                /* Transition: '<S22>:545' */
                /* Transition: '<S22>:546' */
            }
            else
            {
                /* Transition: '<S22>:520' */
                if ((((uint32)localB->Status) == CeDFIB_e_Fail) || (((uint32)
                        localB->Status) == CeDFIB_e_Fail_FaultRemoved))
                {
                    /* Transition: '<S22>:534' */
                    if (rtu_Err)
                    {
                        /* Transition: '<S22>:535' */
                        /* Transition: '<S22>:538' */
                        tmp = ((sint32)rtu_FThr) + 1;
                        if ((((sint32)rtu_FThr) + 1) > 65535)
                        {
                            tmp = 65535;
                        }

                        VeCIDB_Cnt_CPIM_HCP_FEEDBACK_Fail = (uint16)tmp;
                        localB->Status = CeDFIB_e_Fail;
                    }
                    else
                    {
                        /* Transition: '<S22>:537' */
                        tmp = ((sint32)VeCIDB_Cnt_CPIM_HCP_FEEDBACK_Fail) - 1;
                        if ((((sint32)VeCIDB_Cnt_CPIM_HCP_FEEDBACK_Fail) - 1) <
                                0)
                        {
                            tmp = 0;
                        }

                        VeCIDB_Cnt_CPIM_HCP_FEEDBACK_Fail = (uint16)tmp;
                        if (((sint32)VeCIDB_Cnt_CPIM_HCP_FEEDBACK_Fail) <= 0)
                        {
                            /* Transition: '<S22>:539' */
                            /* Transition: '<S22>:541' */
                            localB->Status = CeDFIB_e_Pass;
                            VeCIDB_b_CPIM_HCP_FEEDBACK_Pass = true;
                        }
                        else
                        {
                            /* Transition: '<S22>:540' */
                            localB->Status = CeDFIB_e_Fail_FaultRemoved;

                            /* Transition: '<S22>:542' */
                        }

                        /* Transition: '<S22>:543' */
                    }

                    /* Transition: '<S22>:544' */
                    /* Transition: '<S22>:545' */
                    /* Transition: '<S22>:546' */
                }
                else
                {
                    /* Transition: '<S22>:536' */
                }
            }
        }
        else
        {
            /* Transition: '<S22>:503' */
            /* Transition: '<S22>:505' */
            /* Transition: '<S22>:533' */
            /* Transition: '<S22>:545' */
            /* Transition: '<S22>:546' */
        }
    }

    /* End of Chart: '<S17>/Diagnostic Debounce' */
    /* Transition: '<S22>:547' */
}

#endif

/* System initialize for atomic system: '<S8>/U149A_COREBEV_250ms' */
#if Rte_SysCon_Variant_CIDB_U149A_Corebev

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U149A_COREBEV_250ms_Init(void)
{
    /* SystemInitialize for Outport: '<Root>/VeCIDB_e_FaultSts_InvData_CPIMGen2' incorporates:
     *  Merge: '<S13>/Merge1'
     */
    (void)Rte_Write_VeCIDB_e_FaultSts_InvData_CPIMGen2_Value(CeDFIB_e_Init);
}

#endif

/* Output and update for atomic system: '<S8>/U149A_COREBEV_250ms' */
#if Rte_SysCon_Variant_CIDB_U149A_Corebev

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U149A_COREBEV_250ms(void)
{
    TeDFIB_e_FaultDebounceStatus VeCIDB_b_U149A_Fail_tmp;
    boolean rtb_AND_i;
    boolean rtb_RelationalOperator3;

    /* RelationalOperator: '<S17>/Relational Operator3' incorporates:
     *  Constant: '<S17>/Constant3'
     *  DataStoreRead: '<S15>/Data Store Read'
     *  S-Function (sfix_bitop): '<S17>/Bitwise Operator2'
     */
    rtb_RelationalOperator3 = ((((uint32)CIDB_ac_DW.StatusByte_InvData_CPIMGen2)
        & 64U) == 0U);

    /* Logic: '<S16>/Logical1' incorporates:
     *  Constant: '<S16>/Constant Value'
     *  RelationalOperator: '<S16>/Relational Operator1'
     *  RelationalOperator: '<S16>/Relational Operator2'
     *  RelationalOperator: '<S16>/Relational Operator3'
     *  RelationalOperator: '<S16>/Relational Operator4'
     *  RelationalOperator: '<S16>/Relational Operator5'
     *  RelationalOperator: '<S16>/Relational Operator6'
     */
    VeCIDB_b_CPIM_HCP_FEEDBACK_FaultCriteria = ((((((1 == ((sint32)
        CIDB_ac_B.TmpSignalConversionAtVeLINR_e_CPIM_IND1_)) || (1 == ((sint32)
        CIDB_ac_B.TmpSignalConversionAtVeLINR_e_CPIM_IND2_))) || (1 == ((sint32)
        CIDB_ac_B.TmpSignalConversionAtVeLINR_e_CPIM_IND3_))) || (1 == ((sint32)
        CIDB_ac_B.TmpSignalConversionAtVeLINR_e_CPIM_IND4_))) || (1 == ((sint32)
        CIDB_ac_B.TmpSignalConversionAtVeLINR_e_CPIM_IND5_))) || (1 == ((sint32)
        CIDB_ac_B.TmpSignalConversionAtVeLINR_e_CPIM_IND_C)));

    /* Outputs for Atomic SubSystem: '<S17>/EdgeFalling1' */
    /* Logic: '<S23>/AND' incorporates:
     *  Logic: '<S23>/OR1'
     *  UnitDelay: '<S23>/Unit Delay'
     */
    rtb_AND_i = ((!rtb_RelationalOperator3) && (CIDB_ac_DW.UnitDelay_DSTATE_dg));

    /* Update for UnitDelay: '<S23>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_dg = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S17>/EdgeFalling1' */

    /* Chart: '<S17>/Diagnostic Debounce' incorporates:
     *  Constant: '<S17>/Constant1'
     *  Constant: '<S18>/Calib'
     *  Constant: '<S19>/Calib'
     *  Constant: '<S20>/Calib'
     *  Constant: '<S21>/Calib'
     *  Constant: '<S24>/Calib'
     *  DataStoreRead: '<S15>/Data Store Read'
     *  Logic: '<S12>/Logical Operator'
     *  Logic: '<S12>/Logical Operator2'
     *  Logic: '<S17>/Logical Operator'
     *  Logic: '<S17>/Logical Operator1'
     *  Logic: '<S17>/Logical10'
     *  Logic: '<S17>/Logical12'
     *  Logic: '<S17>/Logical5'
     *  RelationalOperator: '<S17>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S17>/Bitwise Operator3'
     */
    CIDB_ac_DiagnosticDebounce(((KeCIDB_b_CPIM_HCP_FEEDBACK_ePT_SNA_DiagEnbl) &&
        (((CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_IsDiagG_er) &&
          (KeCIDB_b_U149A_DiagEnbl)) &&
         (!CIDB_ac_B.TmpSignalConversionAtVeLINR_b_CPIM_IND1_))) &&
        ((!KeCIDB_b_CPIM_HCP_FEEDBACK_ePT_SNA_FailLatchEnable) || (((((uint32)
        CIDB_ac_DW.StatusByte_InvData_CPIMGen2) & 1U) == 0U) ||
        (!rtb_RelationalOperator3))), VeCIDB_b_CPIM_HCP_FEEDBACK_FaultCriteria,
        KeCIDB_Cnt_CPIM_HCP_FEEDBACK_ePT_SNA_FailLmt,
        KeCIDB_Cnt_CPIM_HCP_FEEDBACK_ePT_SNAFailINC, rtb_AND_i ||
        (CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_RstDi_e1hg),
        &CIDB_ac_B.sf_DiagnosticDebounce);

    /* RelationalOperator: '<S13>/Comparison4' incorporates:
     *  RelationalOperator: '<S13>/Comparison5'
     */
    VeCIDB_b_U149A_Fail_tmp = CIDB_ac_B.sf_DiagnosticDebounce.Status;

    /* RelationalOperator: '<S13>/Comparison4' incorporates:
     *  Constant: '<S26>/Constant'
     */
    VeCIDB_b_U149A_Fail = (((uint32)VeCIDB_b_U149A_Fail_tmp) == CeDFIB_e_Fail);

    /* RelationalOperator: '<S13>/Relational Operator2' incorporates:
     *  Constant: '<S13>/Constant2'
     *  DataStoreRead: '<S13>/StatusByte_InvData_CPIMGen2'
     *  S-Function (sfix_bitop): '<S13>/Bitwise Operator1'
     */
    rtb_RelationalOperator3 = ((((sint32)CIDB_ac_DW.StatusByte_InvData_CPIMGen2)
        & 64) == 64);

    /* Outputs for Atomic SubSystem: '<S13>/EdgeRising' */
    /* Logic: '<S25>/OR1' incorporates:
     *  UnitDelay: '<S25>/Unit Delay'
     */
    rtb_AND_i = !CIDB_ac_DW.UnitDelay_DSTATE_j3;

    /* Update for UnitDelay: '<S25>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_j3 = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S13>/EdgeRising' */

    /* Logic: '<S13>/Logical10' incorporates:
     *  Constant: '<S20>/Calib'
     *  Constant: '<S27>/Constant'
     *  Logic: '<S13>/Logical1'
     *  Logic: '<S13>/Logical9'
     *  RelationalOperator: '<S13>/Comparison5'
     */
    VeCIDB_b_U149A_Pass = (((!KeCIDB_b_CPIM_HCP_FEEDBACK_ePT_SNA_DiagEnbl) ||
                            (((uint32)VeCIDB_b_U149A_Fail_tmp) == CeDFIB_e_Pass))
                           && (KeCIDB_b_CPIM_HCP_FEEDBACK_ePT_SNA_DiagEnbl));

    /* Outputs for Enabled SubSystem: '<S13>/Subsystem1' incorporates:
     *  EnablePort: '<S29>/Enable'
     */
    if (VeCIDB_b_U149A_Fail)
    {
        /* Outport: '<Root>/VeCIDB_e_FaultSts_InvData_CPIMGen2' incorporates:
         *  Constant: '<S32>/Constant'
         */
        (void)Rte_Write_VeCIDB_e_FaultSts_InvData_CPIMGen2_Value(CeDFIB_e_Fail);
    }

    /* End of Outputs for SubSystem: '<S13>/Subsystem1' */

    /* Outputs for Enabled SubSystem: '<S13>/Subsystem' incorporates:
     *  EnablePort: '<S28>/Enable'
     */
    if (VeCIDB_b_U149A_Pass)
    {
        /* Outport: '<Root>/VeCIDB_e_FaultSts_InvData_CPIMGen2' incorporates:
         *  Constant: '<S31>/Constant'
         */
        (void)Rte_Write_VeCIDB_e_FaultSts_InvData_CPIMGen2_Value(CeDFIB_e_Pass);
    }

    /* End of Outputs for SubSystem: '<S13>/Subsystem' */

    /* Outputs for Enabled SubSystem: '<S13>/Subsystem2' incorporates:
     *  EnablePort: '<S30>/Enable'
     */
    /* Outputs for Atomic SubSystem: '<S13>/EdgeRising' */
    /* Logic: '<S25>/AND' */
    if (rtb_RelationalOperator3 && rtb_AND_i)
    {
        /* Outport: '<Root>/VeCIDB_e_FaultSts_InvData_CPIMGen2' incorporates:
         *  Constant: '<S33>/Constant'
         */
        (void)Rte_Write_VeCIDB_e_FaultSts_InvData_CPIMGen2_Value(CeDFIB_e_Init);
    }

    /* End of Logic: '<S25>/AND' */
    /* End of Outputs for SubSystem: '<S13>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S13>/Subsystem2' */
}

#endif

/* System initialize for atomic system: '<S8>/U149A_Pegasus_250ms' */
#if Rte_SysCon_Variant_CIDB_U149A_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U149A_Pegasus_250ms_Init(void)
{
    /* SystemInitialize for Merge: '<S36>/Merge1' */
    (void)Rte_Write_VeCIDB_e_FaultSts_InvData_CPIMGen2_Value(CeDFIB_e_Init);
}

#endif

/* Output and update for atomic system: '<S8>/U149A_Pegasus_250ms' */
#if Rte_SysCon_Variant_CIDB_U149A_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U149A_Pegasus_250ms(void)
{
    TeDFIB_e_FaultDebounceStatus VeCIDB_b_U149A_Fail_tmp;
    boolean rtb_AND_h1;
    boolean rtb_RelationalOperator3;

    /* RelationalOperator: '<S40>/Relational Operator3' incorporates:
     *  Constant: '<S40>/Constant3'
     *  DataStoreRead: '<S38>/Data Store Read'
     *  S-Function (sfix_bitop): '<S40>/Bitwise Operator2'
     */
    rtb_RelationalOperator3 = ((((uint32)CIDB_ac_DW.StatusByte_InvData_CPIMGen2)
        & 64U) == 0U);

    /* Logic: '<S39>/Logical1' incorporates:
     *  Constant: '<S39>/Constant Value'
     *  RelationalOperator: '<S39>/Relational Operator1'
     *  RelationalOperator: '<S39>/Relational Operator2'
     *  RelationalOperator: '<S39>/Relational Operator3'
     *  RelationalOperator: '<S39>/Relational Operator4'
     *  RelationalOperator: '<S39>/Relational Operator5'
     *  RelationalOperator: '<S39>/Relational Operator6'
     */
    VeCIDB_b_CPIM_HCP_FEEDBACK_FaultCriteria = ((((((1 == ((sint32)
        CIDB_ac_B.TmpSignalConversionAtVeLINR_e_CPIM_IND1_)) || (1 == ((sint32)
        CIDB_ac_B.TmpSignalConversionAtVeLINR_e_CPIM_IND2_))) || (1 == ((sint32)
        CIDB_ac_B.TmpSignalConversionAtVeLINR_e_CPIM_IND3_))) || (1 == ((sint32)
        CIDB_ac_B.TmpSignalConversionAtVeLINR_e_CPIM_IND4_))) || (1 == ((sint32)
        CIDB_ac_B.TmpSignalConversionAtVeLINR_e_CPIM_IND5_))) || (1 == ((sint32)
        CIDB_ac_B.TmpSignalConversionAtVeLINR_e_CPIM_IND_C)));

    /* Outputs for Atomic SubSystem: '<S40>/EdgeFalling1' */
    /* Logic: '<S46>/AND' incorporates:
     *  Logic: '<S46>/OR1'
     *  UnitDelay: '<S46>/Unit Delay'
     */
    rtb_AND_h1 = ((!rtb_RelationalOperator3) && (CIDB_ac_DW.UnitDelay_DSTATE_bd));

    /* Update for UnitDelay: '<S46>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_bd = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S40>/EdgeFalling1' */

    /* Chart: '<S40>/Diagnostic Debounce' incorporates:
     *  Constant: '<S40>/Constant1'
     *  Constant: '<S41>/Calib'
     *  Constant: '<S42>/Calib'
     *  Constant: '<S43>/Calib'
     *  Constant: '<S44>/Calib'
     *  Constant: '<S47>/Calib'
     *  DataStoreRead: '<S38>/Data Store Read'
     *  Logic: '<S35>/Logical Operator'
     *  Logic: '<S35>/Logical Operator2'
     *  Logic: '<S40>/Logical Operator'
     *  Logic: '<S40>/Logical Operator1'
     *  Logic: '<S40>/Logical10'
     *  Logic: '<S40>/Logical12'
     *  Logic: '<S40>/Logical5'
     *  RelationalOperator: '<S40>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S40>/Bitwise Operator3'
     */
    CIDB_ac_DiagnosticDebounce(((KeCIDB_b_CPIM_HCP_FEEDBACK_ePT_SNA_DiagEnbl) &&
        (((CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_IsDiagG_er) &&
          (KeCIDB_b_U149A_DiagEnbl)) &&
         (!CIDB_ac_B.TmpSignalConversionAtVeLINR_b_CPIM_IND1_))) &&
        ((!KeCIDB_b_CPIM_HCP_FEEDBACK_ePT_SNA_FailLatchEnable) || (((((uint32)
        CIDB_ac_DW.StatusByte_InvData_CPIMGen2) & 1U) == 0U) ||
        (!rtb_RelationalOperator3))), VeCIDB_b_CPIM_HCP_FEEDBACK_FaultCriteria,
        KeCIDB_Cnt_CPIM_HCP_FEEDBACK_ePT_SNA_FailLmt,
        KeCIDB_Cnt_CPIM_HCP_FEEDBACK_ePT_SNAFailINC, rtb_AND_h1 ||
        (CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_RstDi_e1hg),
        &CIDB_ac_B.sf_DiagnosticDebounce_b);

    /* RelationalOperator: '<S36>/Comparison4' incorporates:
     *  RelationalOperator: '<S36>/Comparison5'
     */
    VeCIDB_b_U149A_Fail_tmp = CIDB_ac_B.sf_DiagnosticDebounce_b.Status;

    /* RelationalOperator: '<S36>/Comparison4' incorporates:
     *  Constant: '<S49>/Constant'
     */
    VeCIDB_b_U149A_Fail = (((uint32)VeCIDB_b_U149A_Fail_tmp) == CeDFIB_e_Fail);

    /* RelationalOperator: '<S36>/Relational Operator2' incorporates:
     *  Constant: '<S36>/Constant2'
     *  DataStoreRead: '<S36>/StatusByte_InvData_CPIMGen2'
     *  S-Function (sfix_bitop): '<S36>/Bitwise Operator1'
     */
    rtb_RelationalOperator3 = ((((sint32)CIDB_ac_DW.StatusByte_InvData_CPIMGen2)
        & 64) == 64);

    /* Outputs for Atomic SubSystem: '<S36>/EdgeRising' */
    /* Logic: '<S48>/OR1' incorporates:
     *  UnitDelay: '<S48>/Unit Delay'
     */
    rtb_AND_h1 = !CIDB_ac_DW.UnitDelay_DSTATE_o3;

    /* Update for UnitDelay: '<S48>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_o3 = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S36>/EdgeRising' */

    /* Logic: '<S36>/Logical10' incorporates:
     *  Constant: '<S43>/Calib'
     *  Constant: '<S50>/Constant'
     *  Logic: '<S36>/Logical1'
     *  Logic: '<S36>/Logical9'
     *  RelationalOperator: '<S36>/Comparison5'
     */
    VeCIDB_b_U149A_Pass = (((!KeCIDB_b_CPIM_HCP_FEEDBACK_ePT_SNA_DiagEnbl) ||
                            (((uint32)VeCIDB_b_U149A_Fail_tmp) == CeDFIB_e_Pass))
                           && (KeCIDB_b_CPIM_HCP_FEEDBACK_ePT_SNA_DiagEnbl));

    /* Outputs for Enabled SubSystem: '<S36>/Subsystem1' incorporates:
     *  EnablePort: '<S52>/Enable'
     */
    if (VeCIDB_b_U149A_Fail)
    {
        /* Constant: '<S55>/Constant' */
        (void)Rte_Write_VeCIDB_e_FaultSts_InvData_CPIMGen2_Value(CeDFIB_e_Fail);
    }

    /* End of Outputs for SubSystem: '<S36>/Subsystem1' */

    /* Outputs for Enabled SubSystem: '<S36>/Subsystem' incorporates:
     *  EnablePort: '<S51>/Enable'
     */
    if (VeCIDB_b_U149A_Pass)
    {
        /* Constant: '<S54>/Constant' */
        (void)Rte_Write_VeCIDB_e_FaultSts_InvData_CPIMGen2_Value(CeDFIB_e_Pass);
    }

    /* End of Outputs for SubSystem: '<S36>/Subsystem' */

    /* Outputs for Enabled SubSystem: '<S36>/Subsystem2' incorporates:
     *  EnablePort: '<S53>/Enable'
     */
    /* Outputs for Atomic SubSystem: '<S36>/EdgeRising' */
    /* Logic: '<S48>/AND' incorporates:
     *  Constant: '<S56>/Constant'
     */
    if (rtb_RelationalOperator3 && rtb_AND_h1)
    {
        (void)Rte_Write_VeCIDB_e_FaultSts_InvData_CPIMGen2_Value(CeDFIB_e_Init);
    }

    /* End of Logic: '<S48>/AND' */
    /* End of Outputs for SubSystem: '<S36>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S36>/Subsystem2' */
}

#endif

/*
 * Output and update for atomic system:
 *    '<S168>/Diagnostic Debounce'
 *    '<S206>/Diagnostic Debounce'
 *    '<S244>/Diagnostic Debounce'
 */
#if Rte_SysCon_Variant_CIDB_U0412_BLUEN || Rte_SysCon_Variant_CIDB_U0412_Corebev || Rte_SysCon_Variant_CIDB_U0412_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_DiagnosticDebounce_j(VAR(boolean,
    AUTOMATIC) rtu_EnDiag, VAR(boolean, AUTOMATIC) rtu_Err, VAR(uint16,
    AUTOMATIC) rtu_FThr, VAR(uint8, AUTOMATIC) rtu_FInc, VAR(boolean, AUTOMATIC)
    rtu_Reset, P2VAR(B_DiagnosticDebounce_CIDB_ac_l_T, AUTOMATIC, CIDB_VAR_INIT)
    localB)
{
    sint32 tmp;

    /* Chart: '<S168>/Diagnostic Debounce' */
    /* Gateway: DiagnosticDebounceimplausibleSignalSNA/Diagnostic Debounce */
    /* During: DiagnosticDebounceimplausibleSignalSNA/Diagnostic Debounce */
    /* Entry Internal: DiagnosticDebounceimplausibleSignalSNA/Diagnostic Debounce */
    /* Transition: '<S173>:499' */
    VeCIDB_b_BATTERY_HV_POWERLIMITS_Fail = false;
    VeCIDB_b_BATTERY_HV_POWERLIMITS_Pass = false;
    if (rtu_Reset)
    {
        /* Transition: '<S173>:500' */
        /* Transition: '<S173>:502' */
        localB->Status = CeDFIB_e_Init;
        VeCIDB_Cnt_BATTERY_HV_POWERLIMITS_Fail = 0U;
        VeCIDB_Cnt_BATTERY_HV_POWERLIMITS_Init = 0U;

        /* Transition: '<S173>:505' */
        /* Transition: '<S173>:533' */
        /* Transition: '<S173>:545' */
        /* Transition: '<S173>:546' */
    }
    else
    {
        /* Transition: '<S173>:501' */
        if (rtu_EnDiag)
        {
            /* Transition: '<S173>:504' */
            if (((uint32)localB->Status) == CeDFIB_e_Init)
            {
                /* Transition: '<S173>:507' */
                if (!rtu_Err)
                {
                    /* Transition: '<S173>:506' */
                    /* Transition: '<S173>:509' */
                    tmp = ((sint32)VeCIDB_Cnt_BATTERY_HV_POWERLIMITS_Init) +
                        ((sint32)rtu_FInc);
                    if (tmp > 65535)
                    {
                        tmp = 65535;
                    }

                    VeCIDB_Cnt_BATTERY_HV_POWERLIMITS_Init = (uint16)tmp;
                    if (VeCIDB_Cnt_BATTERY_HV_POWERLIMITS_Init >= rtu_FThr)
                    {
                        /* Transition: '<S173>:511' */
                        /* Transition: '<S173>:513' */
                        localB->Status = CeDFIB_e_Pass;
                        VeCIDB_b_BATTERY_HV_POWERLIMITS_Pass = true;

                        /* Transition: '<S173>:516' */
                    }
                    else
                    {
                        /* Transition: '<S173>:512' */
                    }

                    /* Transition: '<S173>:515' */
                }
                else
                {
                    /* Transition: '<S173>:508' */
                    VeCIDB_Cnt_BATTERY_HV_POWERLIMITS_Init = 0U;
                }

                /* Transition: '<S173>:514' */
            }
            else
            {
                /* Transition: '<S173>:510' */
            }

            /* Transition: '<S173>:517' */
            if ((((((uint32)localB->Status) == CeDFIB_e_Pass) || (((uint32)
                    localB->Status) == CeDFIB_e_Pass_FaultRemoved)) || (((uint32)
                    localB->Status) == CeDFIB_e_Pass_FaultFiltering)) ||
                    (((uint32)localB->Status) == CeDFIB_e_Init))
            {
                /* Transition: '<S173>:518' */
                if (rtu_Err)
                {
                    /* Transition: '<S173>:519' */
                    /* Transition: '<S173>:522' */
                    tmp = ((sint32)VeCIDB_Cnt_BATTERY_HV_POWERLIMITS_Fail) +
                        ((sint32)rtu_FInc);
                    if (tmp > 65535)
                    {
                        tmp = 65535;
                    }

                    VeCIDB_Cnt_BATTERY_HV_POWERLIMITS_Fail = (uint16)tmp;
                    if (VeCIDB_Cnt_BATTERY_HV_POWERLIMITS_Fail > rtu_FThr)
                    {
                        /* Transition: '<S173>:524' */
                        /* Transition: '<S173>:528' */
                        localB->Status = CeDFIB_e_Fail;
                        VeCIDB_b_BATTERY_HV_POWERLIMITS_Fail = true;
                        VeCIDB_Cnt_BATTERY_HV_POWERLIMITS_Fail = (uint16)
                            ((sint32)(((sint32)rtu_FThr) + 1));
                    }
                    else
                    {
                        /* Transition: '<S173>:557' */
                        if (((uint32)localB->Status) != CeDFIB_e_Init)
                        {
                            /* Transition: '<S173>:563' */
                            localB->Status = CeDFIB_e_Pass_FaultFiltering;

                            /* Transition: '<S173>:564' */
                            /* Transition: '<S173>:562' */
                        }
                        else
                        {
                            /* Transition: '<S173>:559' */
                            /* Transition: '<S173>:561' */
                            /* Transition: '<S173>:562' */
                        }
                    }
                }
                else
                {
                    /* Transition: '<S173>:521' */
                    if (((sint32)VeCIDB_Cnt_BATTERY_HV_POWERLIMITS_Fail) > 0)
                    {
                        /* Transition: '<S173>:523' */
                        /* Transition: '<S173>:567' */
                        tmp = ((sint32)VeCIDB_Cnt_BATTERY_HV_POWERLIMITS_Fail) -
                            1;
                        if ((((sint32)VeCIDB_Cnt_BATTERY_HV_POWERLIMITS_Fail) -
                                1) < 0)
                        {
                            tmp = 0;
                        }

                        VeCIDB_Cnt_BATTERY_HV_POWERLIMITS_Fail = (uint16)tmp;
                        if (((uint32)localB->Status) != CeDFIB_e_Init)
                        {
                            /* Transition: '<S173>:574' */
                            localB->Status = CeDFIB_e_Pass_FaultRemoved;

                            /* Transition: '<S173>:569' */
                        }
                        else
                        {
                            /* Transition: '<S173>:572' */
                            /* Transition: '<S173>:573' */
                        }
                    }
                    else
                    {
                        /* Transition: '<S173>:577' */
                        if (((uint32)localB->Status) != CeDFIB_e_Init)
                        {
                            /* Transition: '<S173>:582' */
                            localB->Status = CeDFIB_e_Pass;

                            /* Transition: '<S173>:581' */
                        }
                        else
                        {
                            /* Transition: '<S173>:579' */
                            /* Transition: '<S173>:580' */
                        }

                        /* Transition: '<S173>:583' */
                        /* Transition: '<S173>:569' */
                    }

                    /* Transition: '<S173>:570' */
                    /* Transition: '<S173>:564' */
                    /* Transition: '<S173>:562' */
                }

                /* Transition: '<S173>:532' */
                /* Transition: '<S173>:533' */
                /* Transition: '<S173>:545' */
                /* Transition: '<S173>:546' */
            }
            else
            {
                /* Transition: '<S173>:520' */
                if ((((uint32)localB->Status) == CeDFIB_e_Fail) || (((uint32)
                        localB->Status) == CeDFIB_e_Fail_FaultRemoved))
                {
                    /* Transition: '<S173>:534' */
                    if (rtu_Err)
                    {
                        /* Transition: '<S173>:535' */
                        /* Transition: '<S173>:538' */
                        tmp = ((sint32)rtu_FThr) + 1;
                        if ((((sint32)rtu_FThr) + 1) > 65535)
                        {
                            tmp = 65535;
                        }

                        VeCIDB_Cnt_BATTERY_HV_POWERLIMITS_Fail = (uint16)tmp;
                        localB->Status = CeDFIB_e_Fail;
                    }
                    else
                    {
                        /* Transition: '<S173>:537' */
                        tmp = ((sint32)VeCIDB_Cnt_BATTERY_HV_POWERLIMITS_Fail) -
                            1;
                        if ((((sint32)VeCIDB_Cnt_BATTERY_HV_POWERLIMITS_Fail) -
                                1) < 0)
                        {
                            tmp = 0;
                        }

                        VeCIDB_Cnt_BATTERY_HV_POWERLIMITS_Fail = (uint16)tmp;
                        if (((sint32)VeCIDB_Cnt_BATTERY_HV_POWERLIMITS_Fail) <=
                                0)
                        {
                            /* Transition: '<S173>:539' */
                            /* Transition: '<S173>:541' */
                            localB->Status = CeDFIB_e_Pass;
                            VeCIDB_b_BATTERY_HV_POWERLIMITS_Pass = true;
                        }
                        else
                        {
                            /* Transition: '<S173>:540' */
                            localB->Status = CeDFIB_e_Fail_FaultRemoved;

                            /* Transition: '<S173>:542' */
                        }

                        /* Transition: '<S173>:543' */
                    }

                    /* Transition: '<S173>:544' */
                    /* Transition: '<S173>:545' */
                    /* Transition: '<S173>:546' */
                }
                else
                {
                    /* Transition: '<S173>:536' */
                }
            }
        }
        else
        {
            /* Transition: '<S173>:503' */
            /* Transition: '<S173>:505' */
            /* Transition: '<S173>:533' */
            /* Transition: '<S173>:545' */
            /* Transition: '<S173>:546' */
        }
    }

    /* End of Chart: '<S168>/Diagnostic Debounce' */
    /* Transition: '<S173>:547' */
}

#endif

/*
 * Output and update for atomic system:
 *    '<S178>/Diagnostic Debounce'
 *    '<S216>/Diagnostic Debounce'
 *    '<S254>/Diagnostic Debounce'
 */
#if Rte_SysCon_Variant_CIDB_U0412_BLUEN || Rte_SysCon_Variant_CIDB_U0412_Corebev || Rte_SysCon_Variant_CIDB_U0412_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_DiagnosticDebounce_m(VAR(boolean,
    AUTOMATIC) rtu_EnDiag, VAR(boolean, AUTOMATIC) rtu_Err, VAR(uint16,
    AUTOMATIC) rtu_FThr, VAR(uint8, AUTOMATIC) rtu_FInc, VAR(boolean, AUTOMATIC)
    rtu_Reset, P2VAR(B_DiagnosticDebounce_CIDB_ac_o_T, AUTOMATIC, CIDB_VAR_INIT)
    localB)
{
    sint32 tmp;

    /* Chart: '<S178>/Diagnostic Debounce' */
    /* Gateway: DiagnosticDebounceimplausibleSignalSNA/Diagnostic Debounce */
    /* During: DiagnosticDebounceimplausibleSignalSNA/Diagnostic Debounce */
    /* Entry Internal: DiagnosticDebounceimplausibleSignalSNA/Diagnostic Debounce */
    /* Transition: '<S183>:499' */
    VeCIDB_b_BATTERY_HV_STATUS1_Fail = false;
    VeCIDB_b_BATTERY_HV_STATUS1_Pass = false;
    if (rtu_Reset)
    {
        /* Transition: '<S183>:500' */
        /* Transition: '<S183>:502' */
        localB->Status = CeDFIB_e_Init;
        VeCIDB_Cnt_BATTERY_HV_STATUS1_Fail = 0U;
        VeCIDB_Cnt_BATTERY_HV_STATUS1_Init = 0U;

        /* Transition: '<S183>:505' */
        /* Transition: '<S183>:533' */
        /* Transition: '<S183>:545' */
        /* Transition: '<S183>:546' */
    }
    else
    {
        /* Transition: '<S183>:501' */
        if (rtu_EnDiag)
        {
            /* Transition: '<S183>:504' */
            if (((uint32)localB->Status) == CeDFIB_e_Init)
            {
                /* Transition: '<S183>:507' */
                if (!rtu_Err)
                {
                    /* Transition: '<S183>:506' */
                    /* Transition: '<S183>:509' */
                    tmp = ((sint32)VeCIDB_Cnt_BATTERY_HV_STATUS1_Init) +
                        ((sint32)rtu_FInc);
                    if (tmp > 65535)
                    {
                        tmp = 65535;
                    }

                    VeCIDB_Cnt_BATTERY_HV_STATUS1_Init = (uint16)tmp;
                    if (VeCIDB_Cnt_BATTERY_HV_STATUS1_Init >= rtu_FThr)
                    {
                        /* Transition: '<S183>:511' */
                        /* Transition: '<S183>:513' */
                        localB->Status = CeDFIB_e_Pass;
                        VeCIDB_b_BATTERY_HV_STATUS1_Pass = true;

                        /* Transition: '<S183>:516' */
                    }
                    else
                    {
                        /* Transition: '<S183>:512' */
                    }

                    /* Transition: '<S183>:515' */
                }
                else
                {
                    /* Transition: '<S183>:508' */
                    VeCIDB_Cnt_BATTERY_HV_STATUS1_Init = 0U;
                }

                /* Transition: '<S183>:514' */
            }
            else
            {
                /* Transition: '<S183>:510' */
            }

            /* Transition: '<S183>:517' */
            if ((((((uint32)localB->Status) == CeDFIB_e_Pass) || (((uint32)
                    localB->Status) == CeDFIB_e_Pass_FaultRemoved)) || (((uint32)
                    localB->Status) == CeDFIB_e_Pass_FaultFiltering)) ||
                    (((uint32)localB->Status) == CeDFIB_e_Init))
            {
                /* Transition: '<S183>:518' */
                if (rtu_Err)
                {
                    /* Transition: '<S183>:519' */
                    /* Transition: '<S183>:522' */
                    tmp = ((sint32)VeCIDB_Cnt_BATTERY_HV_STATUS1_Fail) +
                        ((sint32)rtu_FInc);
                    if (tmp > 65535)
                    {
                        tmp = 65535;
                    }

                    VeCIDB_Cnt_BATTERY_HV_STATUS1_Fail = (uint16)tmp;
                    if (VeCIDB_Cnt_BATTERY_HV_STATUS1_Fail > rtu_FThr)
                    {
                        /* Transition: '<S183>:524' */
                        /* Transition: '<S183>:528' */
                        localB->Status = CeDFIB_e_Fail;
                        VeCIDB_b_BATTERY_HV_STATUS1_Fail = true;
                        VeCIDB_Cnt_BATTERY_HV_STATUS1_Fail = (uint16)((sint32)
                            (((sint32)rtu_FThr) + 1));
                    }
                    else
                    {
                        /* Transition: '<S183>:557' */
                        if (((uint32)localB->Status) != CeDFIB_e_Init)
                        {
                            /* Transition: '<S183>:563' */
                            localB->Status = CeDFIB_e_Pass_FaultFiltering;

                            /* Transition: '<S183>:564' */
                            /* Transition: '<S183>:562' */
                        }
                        else
                        {
                            /* Transition: '<S183>:559' */
                            /* Transition: '<S183>:561' */
                            /* Transition: '<S183>:562' */
                        }
                    }
                }
                else
                {
                    /* Transition: '<S183>:521' */
                    if (((sint32)VeCIDB_Cnt_BATTERY_HV_STATUS1_Fail) > 0)
                    {
                        /* Transition: '<S183>:523' */
                        /* Transition: '<S183>:567' */
                        tmp = ((sint32)VeCIDB_Cnt_BATTERY_HV_STATUS1_Fail) - 1;
                        if ((((sint32)VeCIDB_Cnt_BATTERY_HV_STATUS1_Fail) - 1) <
                            0)
                        {
                            tmp = 0;
                        }

                        VeCIDB_Cnt_BATTERY_HV_STATUS1_Fail = (uint16)tmp;
                        if (((uint32)localB->Status) != CeDFIB_e_Init)
                        {
                            /* Transition: '<S183>:574' */
                            localB->Status = CeDFIB_e_Pass_FaultRemoved;

                            /* Transition: '<S183>:569' */
                        }
                        else
                        {
                            /* Transition: '<S183>:572' */
                            /* Transition: '<S183>:573' */
                        }
                    }
                    else
                    {
                        /* Transition: '<S183>:577' */
                        if (((uint32)localB->Status) != CeDFIB_e_Init)
                        {
                            /* Transition: '<S183>:582' */
                            localB->Status = CeDFIB_e_Pass;

                            /* Transition: '<S183>:581' */
                        }
                        else
                        {
                            /* Transition: '<S183>:579' */
                            /* Transition: '<S183>:580' */
                        }

                        /* Transition: '<S183>:583' */
                        /* Transition: '<S183>:569' */
                    }

                    /* Transition: '<S183>:570' */
                    /* Transition: '<S183>:564' */
                    /* Transition: '<S183>:562' */
                }

                /* Transition: '<S183>:532' */
                /* Transition: '<S183>:533' */
                /* Transition: '<S183>:545' */
                /* Transition: '<S183>:546' */
            }
            else
            {
                /* Transition: '<S183>:520' */
                if ((((uint32)localB->Status) == CeDFIB_e_Fail) || (((uint32)
                        localB->Status) == CeDFIB_e_Fail_FaultRemoved))
                {
                    /* Transition: '<S183>:534' */
                    if (rtu_Err)
                    {
                        /* Transition: '<S183>:535' */
                        /* Transition: '<S183>:538' */
                        tmp = ((sint32)rtu_FThr) + 1;
                        if ((((sint32)rtu_FThr) + 1) > 65535)
                        {
                            tmp = 65535;
                        }

                        VeCIDB_Cnt_BATTERY_HV_STATUS1_Fail = (uint16)tmp;
                        localB->Status = CeDFIB_e_Fail;
                    }
                    else
                    {
                        /* Transition: '<S183>:537' */
                        tmp = ((sint32)VeCIDB_Cnt_BATTERY_HV_STATUS1_Fail) - 1;
                        if ((((sint32)VeCIDB_Cnt_BATTERY_HV_STATUS1_Fail) - 1) <
                            0)
                        {
                            tmp = 0;
                        }

                        VeCIDB_Cnt_BATTERY_HV_STATUS1_Fail = (uint16)tmp;
                        if (((sint32)VeCIDB_Cnt_BATTERY_HV_STATUS1_Fail) <= 0)
                        {
                            /* Transition: '<S183>:539' */
                            /* Transition: '<S183>:541' */
                            localB->Status = CeDFIB_e_Pass;
                            VeCIDB_b_BATTERY_HV_STATUS1_Pass = true;
                        }
                        else
                        {
                            /* Transition: '<S183>:540' */
                            localB->Status = CeDFIB_e_Fail_FaultRemoved;

                            /* Transition: '<S183>:542' */
                        }

                        /* Transition: '<S183>:543' */
                    }

                    /* Transition: '<S183>:544' */
                    /* Transition: '<S183>:545' */
                    /* Transition: '<S183>:546' */
                }
                else
                {
                    /* Transition: '<S183>:536' */
                }
            }
        }
        else
        {
            /* Transition: '<S183>:503' */
            /* Transition: '<S183>:505' */
            /* Transition: '<S183>:533' */
            /* Transition: '<S183>:545' */
            /* Transition: '<S183>:546' */
        }
    }

    /* End of Chart: '<S178>/Diagnostic Debounce' */
    /* Transition: '<S183>:547' */
}

#endif

/* System initialize for atomic system: '<S155>/U0412_Variant_Bluen_10ms' */
#if Rte_SysCon_Variant_CIDB_U0412_BLUEN

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0412_Variant_Bluen_10ms_Init(void)
{
    /* SystemInitialize for Outport: '<Root>/VeCIDB_e_FaultSts_InvData_BECM' incorporates:
     *  Merge: '<S164>/Merge1'
     */
    (void)Rte_Write_VeCIDB_e_FaultSts_InvData_BECM_Value(CeDFIB_e_Init);
}

#endif

/* Output and update for atomic system: '<S155>/U0412_Variant_Bluen_10ms' */
#if Rte_SysCon_Variant_CIDB_U0412_BLUEN

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0412_Variant_Bluen_10ms(void)
{
    uint32 rtb_RelationalOperator3_a_tmp;
    TeDFIB_e_FaultDebounceStatus VeCIDB_b_U0412_Pass_tmp;
    TeDFIB_e_FaultDebounceStatus VeCIDB_b_U0412_Pass_tmp_0;
    boolean rtb_AND_e1;
    boolean rtb_RelationalOperator3;

    /* VariantMerge generated from: '<S155>/VeCIDB_b_U0412_DiagEnbl' incorporates:
     *  Constant: '<S163>/Constant Value'
     *  Constant: '<S185>/Calib'
     *  Logic: '<S163>/Logical Operator'
     *  Logic: '<S163>/Logical Operator2'
     *  S-Function (sfix_bitop): '<S163>/Bitwise Operator'
     */
    CIDB_ac_B.VariantMergeForOutportVeCIDB_b_U0412_Dia =
        (((CIDB_ac_B.TmpSignalConversionAtVeDFIR_b_IsDiagGlob) &&
          (KeCIDB_b_U0412_DiagEnbl)) && ((((uint32)
            CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HV_Cu) & 4U) == 0U));

    /* S-Function (sfix_bitop): '<S168>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S166>/Data Store Read'
     *  S-Function (sfix_bitop): '<S178>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_a_tmp = ((uint32)CIDB_ac_DW.StatusByte_InvData_BECM)
        & 64U;

    /* RelationalOperator: '<S168>/Relational Operator3' incorporates:
     *  Constant: '<S168>/Constant3'
     *  S-Function (sfix_bitop): '<S168>/Bitwise Operator2'
     */
    rtb_RelationalOperator3 = (rtb_RelationalOperator3_a_tmp == 0U);

    /* Logic: '<S167>/Logical1' incorporates:
     *  Constant: '<S167>/Constant Value'
     *  DataTypeConversion: '<S167>/Cast To Boolean'
     *  DataTypeConversion: '<S167>/Cast To Boolean1'
     *  DataTypeConversion: '<S167>/Cast To Boolean2'
     *  DataTypeConversion: '<S167>/Cast To Boolean3'
     *  DataTypeConversion: '<S167>/Cast To Boolean4'
     *  DataTypeConversion: '<S167>/Cast To Boolean5'
     *  DataTypeConversion: '<S167>/Cast To Boolean6'
     *  S-Function (sfix_bitop): '<S167>/Bitwise Operator'
     *  S-Function (sfix_bitop): '<S167>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S167>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S167>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S167>/Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S167>/Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S167>/Bitwise Operator6'
     */
    VeCIDB_b_BATTERY_HV_POWERLIMITS_FaultCriteria = ((((((((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HVChr) & 8U) != 0U) ||
        ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HVPwr) & 8U) !=
         0U)) || ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HVP_b)
                   & 8U) != 0U)) || ((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HVP_k) & 8U) != 0U)) ||
        ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HVP_f) & 8U) !=
         0U)) || ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HV_bv)
                   & 8U) != 0U)) || ((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HVP_i) & 8U) != 0U));

    /* Outputs for Atomic SubSystem: '<S168>/EdgeFalling1' */
    /* Logic: '<S174>/AND' incorporates:
     *  Logic: '<S174>/OR1'
     *  UnitDelay: '<S174>/Unit Delay'
     */
    rtb_AND_e1 = ((!rtb_RelationalOperator3) && (CIDB_ac_DW.UnitDelay_DSTATE_ds));

    /* Update for UnitDelay: '<S174>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_ds = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S168>/EdgeFalling1' */

    /* Chart: '<S168>/Diagnostic Debounce' incorporates:
     *  Constant: '<S168>/Constant1'
     *  Constant: '<S169>/Calib'
     *  Constant: '<S170>/Calib'
     *  Constant: '<S171>/Calib'
     *  Constant: '<S172>/Calib'
     *  DataStoreRead: '<S166>/Data Store Read'
     *  Logic: '<S168>/Logical Operator'
     *  Logic: '<S168>/Logical Operator1'
     *  Logic: '<S168>/Logical10'
     *  Logic: '<S168>/Logical12'
     *  Logic: '<S168>/Logical5'
     *  RelationalOperator: '<S168>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S168>/Bitwise Operator3'
     */
    CIDB_ac_DiagnosticDebounce_j
        (((KeCIDB_b_BATTERY_HV_POWERLIMITS_ePT_SNA_DiagEnbl) &&
          (CIDB_ac_B.VariantMergeForOutportVeCIDB_b_U0412_Dia)) &&
         ((!KeCIDB_b_BATTERY_HV_POWERLIMITS_ePT_SNA_FailLatchEnable) ||
          (((((uint32)CIDB_ac_DW.StatusByte_InvData_BECM) & 1U) == 0U) ||
           (!rtb_RelationalOperator3))),
         VeCIDB_b_BATTERY_HV_POWERLIMITS_FaultCriteria,
         KeCIDB_Cnt_BATTERY_HV_POWERLIMITS_ePT_SNA_FailLmt,
         KeCIDB_Cnt_BATTERY_HV_POWERLIMITS_ePT_SNAFailINC, rtb_AND_e1 ||
         (CIDB_ac_B.OR_c), &CIDB_ac_B.sf_DiagnosticDebounce_j);

    /* RelationalOperator: '<S178>/Relational Operator3' incorporates:
     *  Constant: '<S178>/Constant3'
     */
    rtb_RelationalOperator3 = (rtb_RelationalOperator3_a_tmp == 0U);

    /* Logic: '<S177>/Logical1' incorporates:
     *  Constant: '<S177>/Constant Value'
     *  DataTypeConversion: '<S177>/Cast To Boolean10'
     *  DataTypeConversion: '<S177>/Cast To Boolean11'
     *  DataTypeConversion: '<S177>/Cast To Boolean12'
     *  DataTypeConversion: '<S177>/Cast To Boolean13'
     *  DataTypeConversion: '<S177>/Cast To Boolean7'
     *  DataTypeConversion: '<S177>/Cast To Boolean8'
     *  DataTypeConversion: '<S177>/Cast To Boolean9'
     *  S-Function (sfix_bitop): '<S177>/Bitwise Operator10'
     *  S-Function (sfix_bitop): '<S177>/Bitwise Operator11'
     *  S-Function (sfix_bitop): '<S177>/Bitwise Operator12'
     *  S-Function (sfix_bitop): '<S177>/Bitwise Operator13'
     *  S-Function (sfix_bitop): '<S177>/Bitwise Operator7'
     *  S-Function (sfix_bitop): '<S177>/Bitwise Operator8'
     *  S-Function (sfix_bitop): '<S177>/Bitwise Operator9'
     */
    VeCIDB_b_BATTERY_HV_STATUS1_FaultCriteria = ((((((((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HV_Cu) & 8U) != 0U) ||
        ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HV_In) & 8U) !=
         0U)) || ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HV_SO)
                   & 8U) != 0U)) || ((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HV_Te) & 8U) != 0U)) ||
        ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HV__m) & 8U) !=
         0U)) || ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HV__p)
                   & 8U) != 0U)) || ((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HV_Tr) & 8U) != 0U));

    /* Outputs for Atomic SubSystem: '<S178>/EdgeFalling1' */
    /* Logic: '<S184>/AND' incorporates:
     *  Logic: '<S184>/OR1'
     *  UnitDelay: '<S184>/Unit Delay'
     */
    rtb_AND_e1 = ((!rtb_RelationalOperator3) && (CIDB_ac_DW.UnitDelay_DSTATE_n0));

    /* Update for UnitDelay: '<S184>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_n0 = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S178>/EdgeFalling1' */

    /* Chart: '<S178>/Diagnostic Debounce' incorporates:
     *  Constant: '<S178>/Constant1'
     *  Constant: '<S179>/Calib'
     *  Constant: '<S180>/Calib'
     *  Constant: '<S181>/Calib'
     *  Constant: '<S182>/Calib'
     *  DataStoreRead: '<S176>/Data Store Read'
     *  Logic: '<S178>/Logical Operator'
     *  Logic: '<S178>/Logical Operator1'
     *  Logic: '<S178>/Logical10'
     *  Logic: '<S178>/Logical12'
     *  Logic: '<S178>/Logical5'
     *  RelationalOperator: '<S178>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S178>/Bitwise Operator3'
     */
    CIDB_ac_DiagnosticDebounce_m(((KeCIDB_b_BATTERY_HV_STATUS1_ePT_SNA_DiagEnbl)
        && (CIDB_ac_B.VariantMergeForOutportVeCIDB_b_U0412_Dia)) &&
        ((!KeCIDB_b_BATTERY_HV_STATUS1_ePT_SNA_FailLatchEnable) || (((((uint32)
        CIDB_ac_DW.StatusByte_InvData_BECM) & 1U) == 0U) ||
        (!rtb_RelationalOperator3))), VeCIDB_b_BATTERY_HV_STATUS1_FaultCriteria,
        KeCIDB_Cnt_BATTERY_HV_STATUS1_ePT_SNA_FailLmt,
        KeCIDB_Cnt_BATTERY_HV_STATUS1_ePT_SNAFailINC, rtb_AND_e1 ||
        (CIDB_ac_B.OR_c), &CIDB_ac_B.sf_DiagnosticDebounce_m);

    /* RelationalOperator: '<S164>/Relational Operator2' incorporates:
     *  Constant: '<S164>/Constant2'
     *  DataStoreRead: '<S164>/StatusByte_InvData_IDCM'
     *  S-Function (sfix_bitop): '<S164>/Bitwise Operator1'
     */
    rtb_RelationalOperator3 = ((((sint32)CIDB_ac_DW.StatusByte_InvData_BECM) &
        64) == 64);

    /* Outputs for Atomic SubSystem: '<S164>/EdgeRising' */
    /* Logic: '<S186>/OR1' incorporates:
     *  UnitDelay: '<S186>/Unit Delay'
     */
    rtb_AND_e1 = !CIDB_ac_DW.UnitDelay_DSTATE_c;

    /* Update for UnitDelay: '<S186>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_c = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S164>/EdgeRising' */

    /* RelationalOperator: '<S164>/Comparison5' incorporates:
     *  RelationalOperator: '<S164>/Comparison4'
     */
    VeCIDB_b_U0412_Pass_tmp = CIDB_ac_B.sf_DiagnosticDebounce_j.Status;

    /* RelationalOperator: '<S164>/Comparison2' incorporates:
     *  RelationalOperator: '<S164>/Comparison1'
     */
    VeCIDB_b_U0412_Pass_tmp_0 = CIDB_ac_B.sf_DiagnosticDebounce_m.Status;

    /* Logic: '<S164>/Logical10' incorporates:
     *  Constant: '<S171>/Calib'
     *  Constant: '<S181>/Calib'
     *  Constant: '<S189>/Constant'
     *  Constant: '<S191>/Constant'
     *  Constant: '<S192>/Constant'
     *  Logic: '<S164>/Logical1'
     *  Logic: '<S164>/Logical2'
     *  Logic: '<S164>/Logical3'
     *  Logic: '<S164>/Logical4'
     *  Logic: '<S164>/Logical5'
     *  Logic: '<S164>/Logical6'
     *  Logic: '<S164>/Logical9'
     *  RelationalOperator: '<S164>/Comparison2'
     *  RelationalOperator: '<S164>/Comparison5'
     *  RelationalOperator: '<S164>/Comparison6'
     */
    VeCIDB_b_U0412_Pass = (((((!KeCIDB_b_BATTERY_HV_POWERLIMITS_ePT_SNA_DiagEnbl)
        || (((uint32)VeCIDB_b_U0412_Pass_tmp) == CeDFIB_e_Pass)) &&
        ((!KeCIDB_b_BATTERY_HV_STATUS1_ePT_SNA_DiagEnbl) || (((uint32)
        VeCIDB_b_U0412_Pass_tmp_0) == CeDFIB_e_Pass))) &&
                            ((!CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_BATTERY__c)
        || (((uint32)CIDB_ac_B.TmpSignalConversionAtVeCIDB_e_BATTERY__h) ==
            CeDFIB_e_Pass))) &&
                           (((KeCIDB_b_BATTERY_HV_POWERLIMITS_ePT_SNA_DiagEnbl) ||
        (KeCIDB_b_BATTERY_HV_STATUS1_ePT_SNA_DiagEnbl)) ||
                            (CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_BATTERY__c)));

    /* Logic: '<S164>/Logical11' incorporates:
     *  Constant: '<S187>/Constant'
     *  Constant: '<S188>/Constant'
     *  Constant: '<S190>/Constant'
     *  RelationalOperator: '<S164>/Comparison1'
     *  RelationalOperator: '<S164>/Comparison3'
     *  RelationalOperator: '<S164>/Comparison4'
     */
    VeCIDB_b_U0412_Fail = (((((uint32)VeCIDB_b_U0412_Pass_tmp) == CeDFIB_e_Fail)
                            || (((uint32)VeCIDB_b_U0412_Pass_tmp_0) ==
        CeDFIB_e_Fail)) || (((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCIDB_e_BATTERY__h) == CeDFIB_e_Fail));

    /* Outputs for Enabled SubSystem: '<S164>/Subsystem1' incorporates:
     *  EnablePort: '<S194>/Enable'
     */
    if (VeCIDB_b_U0412_Fail)
    {
        /* Outport: '<Root>/VeCIDB_e_FaultSts_InvData_BECM' incorporates:
         *  Constant: '<S197>/Constant'
         */
        (void)Rte_Write_VeCIDB_e_FaultSts_InvData_BECM_Value(CeDFIB_e_Fail);
    }

    /* End of Outputs for SubSystem: '<S164>/Subsystem1' */

    /* Outputs for Enabled SubSystem: '<S164>/Subsystem' incorporates:
     *  EnablePort: '<S193>/Enable'
     */
    if (VeCIDB_b_U0412_Pass)
    {
        /* Outport: '<Root>/VeCIDB_e_FaultSts_InvData_BECM' incorporates:
         *  Constant: '<S196>/Constant'
         */
        (void)Rte_Write_VeCIDB_e_FaultSts_InvData_BECM_Value(CeDFIB_e_Pass);
    }

    /* End of Outputs for SubSystem: '<S164>/Subsystem' */

    /* Outputs for Enabled SubSystem: '<S164>/Subsystem2' incorporates:
     *  EnablePort: '<S195>/Enable'
     */
    /* Outputs for Atomic SubSystem: '<S164>/EdgeRising' */
    /* Logic: '<S186>/AND' */
    if (rtb_RelationalOperator3 && rtb_AND_e1)
    {
        /* Outport: '<Root>/VeCIDB_e_FaultSts_InvData_BECM' incorporates:
         *  Constant: '<S198>/Constant'
         */
        (void)Rte_Write_VeCIDB_e_FaultSts_InvData_BECM_Value(CeDFIB_e_Init);
    }

    /* End of Logic: '<S186>/AND' */
    /* End of Outputs for SubSystem: '<S164>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S164>/Subsystem2' */
}

#endif

/* System initialize for atomic system: '<S155>/U0412_Variant_Corebev_10ms' */
#if Rte_SysCon_Variant_CIDB_U0412_Corebev

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0412_Variant_Corebev_10ms_Init(void)
{
    /* SystemInitialize for Merge: '<S202>/Merge1' */
    (void)Rte_Write_VeCIDB_e_FaultSts_InvData_BECM_Value(CeDFIB_e_Init);
}

#endif

/* Output and update for atomic system: '<S155>/U0412_Variant_Corebev_10ms' */
#if Rte_SysCon_Variant_CIDB_U0412_Corebev

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0412_Variant_Corebev_10ms(void)
{
    uint32 rtb_RelationalOperator3_ac_tmp;
    TeDFIB_e_FaultDebounceStatus VeCIDB_b_U0412_Pass_tmp;
    TeDFIB_e_FaultDebounceStatus VeCIDB_b_U0412_Pass_tmp_0;
    boolean rtb_AND_gm;
    boolean rtb_RelationalOperator3;

    /* Logic: '<S201>/Logical Operator' incorporates:
     *  Constant: '<S201>/Constant Value'
     *  Constant: '<S223>/Calib'
     *  Logic: '<S201>/Logical Operator2'
     *  S-Function (sfix_bitop): '<S201>/Bitwise Operator'
     */
    CIDB_ac_B.VariantMergeForOutportVeCIDB_b_U0412_Dia =
        (((CIDB_ac_B.TmpSignalConversionAtVeDFIR_b_IsDiagGlob) &&
          (KeCIDB_b_U0412_DiagEnbl)) && ((((uint32)
            CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HV_Cu) & 4U) == 0U));

    /* S-Function (sfix_bitop): '<S206>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S204>/Data Store Read'
     *  S-Function (sfix_bitop): '<S216>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_ac_tmp = ((uint32)CIDB_ac_DW.StatusByte_InvData_BECM)
        & 64U;

    /* RelationalOperator: '<S206>/Relational Operator3' incorporates:
     *  Constant: '<S206>/Constant3'
     *  S-Function (sfix_bitop): '<S206>/Bitwise Operator2'
     */
    rtb_RelationalOperator3 = (rtb_RelationalOperator3_ac_tmp == 0U);

    /* Logic: '<S205>/Logical1' incorporates:
     *  Constant: '<S205>/Constant Value'
     *  DataTypeConversion: '<S205>/Cast To Boolean'
     *  DataTypeConversion: '<S205>/Cast To Boolean1'
     *  DataTypeConversion: '<S205>/Cast To Boolean2'
     *  DataTypeConversion: '<S205>/Cast To Boolean3'
     *  DataTypeConversion: '<S205>/Cast To Boolean4'
     *  DataTypeConversion: '<S205>/Cast To Boolean5'
     *  DataTypeConversion: '<S205>/Cast To Boolean6'
     *  S-Function (sfix_bitop): '<S205>/Bitwise Operator'
     *  S-Function (sfix_bitop): '<S205>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S205>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S205>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S205>/Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S205>/Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S205>/Bitwise Operator6'
     */
    VeCIDB_b_BATTERY_HV_POWERLIMITS_FaultCriteria = ((((((((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HVChr) & 8U) != 0U) ||
        ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HVPwr) & 8U) !=
         0U)) || ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HVP_b)
                   & 8U) != 0U)) || ((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HVP_k) & 8U) != 0U)) ||
        ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HVP_f) & 8U) !=
         0U)) || ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HV_bv)
                   & 8U) != 0U)) || ((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HVP_i) & 8U) != 0U));

    /* Outputs for Atomic SubSystem: '<S206>/EdgeFalling1' */
    /* Logic: '<S212>/AND' incorporates:
     *  Logic: '<S212>/OR1'
     *  UnitDelay: '<S212>/Unit Delay'
     */
    rtb_AND_gm = ((!rtb_RelationalOperator3) && (CIDB_ac_DW.UnitDelay_DSTATE_ip));

    /* Update for UnitDelay: '<S212>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_ip = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S206>/EdgeFalling1' */

    /* Chart: '<S206>/Diagnostic Debounce' incorporates:
     *  Constant: '<S206>/Constant1'
     *  Constant: '<S207>/Calib'
     *  Constant: '<S208>/Calib'
     *  Constant: '<S209>/Calib'
     *  Constant: '<S210>/Calib'
     *  DataStoreRead: '<S204>/Data Store Read'
     *  Logic: '<S206>/Logical Operator'
     *  Logic: '<S206>/Logical Operator1'
     *  Logic: '<S206>/Logical10'
     *  Logic: '<S206>/Logical12'
     *  Logic: '<S206>/Logical5'
     *  RelationalOperator: '<S206>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S206>/Bitwise Operator3'
     */
    CIDB_ac_DiagnosticDebounce_j
        (((KeCIDB_b_BATTERY_HV_POWERLIMITS_ePT_SNA_DiagEnbl) &&
          (CIDB_ac_B.VariantMergeForOutportVeCIDB_b_U0412_Dia)) &&
         ((!KeCIDB_b_BATTERY_HV_POWERLIMITS_ePT_SNA_FailLatchEnable) ||
          (((((uint32)CIDB_ac_DW.StatusByte_InvData_BECM) & 1U) == 0U) ||
           (!rtb_RelationalOperator3))),
         VeCIDB_b_BATTERY_HV_POWERLIMITS_FaultCriteria,
         KeCIDB_Cnt_BATTERY_HV_POWERLIMITS_ePT_SNA_FailLmt,
         KeCIDB_Cnt_BATTERY_HV_POWERLIMITS_ePT_SNAFailINC, rtb_AND_gm ||
         (CIDB_ac_B.OR_c), &CIDB_ac_B.sf_DiagnosticDebounce_o);

    /* RelationalOperator: '<S216>/Relational Operator3' incorporates:
     *  Constant: '<S216>/Constant3'
     */
    rtb_RelationalOperator3 = (rtb_RelationalOperator3_ac_tmp == 0U);

    /* Logic: '<S215>/Logical1' incorporates:
     *  Constant: '<S215>/Constant Value'
     *  DataTypeConversion: '<S215>/Cast To Boolean10'
     *  DataTypeConversion: '<S215>/Cast To Boolean11'
     *  DataTypeConversion: '<S215>/Cast To Boolean12'
     *  DataTypeConversion: '<S215>/Cast To Boolean13'
     *  DataTypeConversion: '<S215>/Cast To Boolean7'
     *  DataTypeConversion: '<S215>/Cast To Boolean8'
     *  DataTypeConversion: '<S215>/Cast To Boolean9'
     *  S-Function (sfix_bitop): '<S215>/Bitwise Operator10'
     *  S-Function (sfix_bitop): '<S215>/Bitwise Operator11'
     *  S-Function (sfix_bitop): '<S215>/Bitwise Operator12'
     *  S-Function (sfix_bitop): '<S215>/Bitwise Operator13'
     *  S-Function (sfix_bitop): '<S215>/Bitwise Operator7'
     *  S-Function (sfix_bitop): '<S215>/Bitwise Operator8'
     *  S-Function (sfix_bitop): '<S215>/Bitwise Operator9'
     */
    VeCIDB_b_BATTERY_HV_STATUS1_FaultCriteria = ((((((((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HV_Cu) & 8U) != 0U) ||
        ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HV_In) & 8U) !=
         0U)) || ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HV_SO)
                   & 8U) != 0U)) || ((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HV_Te) & 8U) != 0U)) ||
        ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HV__m) & 8U) !=
         0U)) || ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HV__p)
                   & 8U) != 0U)) || ((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HV_Tr) & 8U) != 0U));

    /* Outputs for Atomic SubSystem: '<S216>/EdgeFalling1' */
    /* Logic: '<S222>/AND' incorporates:
     *  Logic: '<S222>/OR1'
     *  UnitDelay: '<S222>/Unit Delay'
     */
    rtb_AND_gm = ((!rtb_RelationalOperator3) && (CIDB_ac_DW.UnitDelay_DSTATE_od));

    /* Update for UnitDelay: '<S222>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_od = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S216>/EdgeFalling1' */

    /* Chart: '<S216>/Diagnostic Debounce' incorporates:
     *  Constant: '<S216>/Constant1'
     *  Constant: '<S217>/Calib'
     *  Constant: '<S218>/Calib'
     *  Constant: '<S219>/Calib'
     *  Constant: '<S220>/Calib'
     *  DataStoreRead: '<S214>/Data Store Read'
     *  Logic: '<S216>/Logical Operator'
     *  Logic: '<S216>/Logical Operator1'
     *  Logic: '<S216>/Logical10'
     *  Logic: '<S216>/Logical12'
     *  Logic: '<S216>/Logical5'
     *  RelationalOperator: '<S216>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S216>/Bitwise Operator3'
     */
    CIDB_ac_DiagnosticDebounce_m(((KeCIDB_b_BATTERY_HV_STATUS1_ePT_SNA_DiagEnbl)
        && (CIDB_ac_B.VariantMergeForOutportVeCIDB_b_U0412_Dia)) &&
        ((!KeCIDB_b_BATTERY_HV_STATUS1_ePT_SNA_FailLatchEnable) || (((((uint32)
        CIDB_ac_DW.StatusByte_InvData_BECM) & 1U) == 0U) ||
        (!rtb_RelationalOperator3))), VeCIDB_b_BATTERY_HV_STATUS1_FaultCriteria,
        KeCIDB_Cnt_BATTERY_HV_STATUS1_ePT_SNA_FailLmt,
        KeCIDB_Cnt_BATTERY_HV_STATUS1_ePT_SNAFailINC, rtb_AND_gm ||
        (CIDB_ac_B.OR_c), &CIDB_ac_B.sf_DiagnosticDebounce_e);

    /* RelationalOperator: '<S202>/Relational Operator2' incorporates:
     *  Constant: '<S202>/Constant2'
     *  DataStoreRead: '<S202>/StatusByte_InvData_IDCM'
     *  S-Function (sfix_bitop): '<S202>/Bitwise Operator1'
     */
    rtb_RelationalOperator3 = ((((sint32)CIDB_ac_DW.StatusByte_InvData_BECM) &
        64) == 64);

    /* Outputs for Atomic SubSystem: '<S202>/EdgeRising' */
    /* Logic: '<S224>/OR1' incorporates:
     *  UnitDelay: '<S224>/Unit Delay'
     */
    rtb_AND_gm = !CIDB_ac_DW.UnitDelay_DSTATE_h0;

    /* Update for UnitDelay: '<S224>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_h0 = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S202>/EdgeRising' */

    /* RelationalOperator: '<S202>/Comparison5' incorporates:
     *  RelationalOperator: '<S202>/Comparison4'
     */
    VeCIDB_b_U0412_Pass_tmp = CIDB_ac_B.sf_DiagnosticDebounce_o.Status;

    /* RelationalOperator: '<S202>/Comparison2' incorporates:
     *  RelationalOperator: '<S202>/Comparison1'
     */
    VeCIDB_b_U0412_Pass_tmp_0 = CIDB_ac_B.sf_DiagnosticDebounce_e.Status;

    /* Logic: '<S202>/Logical10' incorporates:
     *  Constant: '<S209>/Calib'
     *  Constant: '<S219>/Calib'
     *  Constant: '<S227>/Constant'
     *  Constant: '<S229>/Constant'
     *  Constant: '<S230>/Constant'
     *  Logic: '<S202>/Logical1'
     *  Logic: '<S202>/Logical2'
     *  Logic: '<S202>/Logical3'
     *  Logic: '<S202>/Logical4'
     *  Logic: '<S202>/Logical5'
     *  Logic: '<S202>/Logical6'
     *  Logic: '<S202>/Logical9'
     *  RelationalOperator: '<S202>/Comparison2'
     *  RelationalOperator: '<S202>/Comparison5'
     *  RelationalOperator: '<S202>/Comparison6'
     */
    VeCIDB_b_U0412_Pass = (((((!KeCIDB_b_BATTERY_HV_POWERLIMITS_ePT_SNA_DiagEnbl)
        || (((uint32)VeCIDB_b_U0412_Pass_tmp) == CeDFIB_e_Pass)) &&
        ((!KeCIDB_b_BATTERY_HV_STATUS1_ePT_SNA_DiagEnbl) || (((uint32)
        VeCIDB_b_U0412_Pass_tmp_0) == CeDFIB_e_Pass))) &&
                            ((!CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_BATTERY__c)
        || (((uint32)CIDB_ac_B.TmpSignalConversionAtVeCIDB_e_BATTERY__h) ==
            CeDFIB_e_Pass))) &&
                           (((KeCIDB_b_BATTERY_HV_POWERLIMITS_ePT_SNA_DiagEnbl) ||
        (KeCIDB_b_BATTERY_HV_STATUS1_ePT_SNA_DiagEnbl)) ||
                            (CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_BATTERY__c)));

    /* Logic: '<S202>/Logical11' incorporates:
     *  Constant: '<S225>/Constant'
     *  Constant: '<S226>/Constant'
     *  Constant: '<S228>/Constant'
     *  RelationalOperator: '<S202>/Comparison1'
     *  RelationalOperator: '<S202>/Comparison3'
     *  RelationalOperator: '<S202>/Comparison4'
     */
    VeCIDB_b_U0412_Fail = (((((uint32)VeCIDB_b_U0412_Pass_tmp) == CeDFIB_e_Fail)
                            || (((uint32)VeCIDB_b_U0412_Pass_tmp_0) ==
        CeDFIB_e_Fail)) || (((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCIDB_e_BATTERY__h) == CeDFIB_e_Fail));

    /* Outputs for Enabled SubSystem: '<S202>/Subsystem1' incorporates:
     *  EnablePort: '<S232>/Enable'
     */
    if (VeCIDB_b_U0412_Fail)
    {
        /* Constant: '<S235>/Constant' */
        (void)Rte_Write_VeCIDB_e_FaultSts_InvData_BECM_Value(CeDFIB_e_Fail);
    }

    /* End of Outputs for SubSystem: '<S202>/Subsystem1' */

    /* Outputs for Enabled SubSystem: '<S202>/Subsystem' incorporates:
     *  EnablePort: '<S231>/Enable'
     */
    if (VeCIDB_b_U0412_Pass)
    {
        /* Constant: '<S234>/Constant' */
        (void)Rte_Write_VeCIDB_e_FaultSts_InvData_BECM_Value(CeDFIB_e_Pass);
    }

    /* End of Outputs for SubSystem: '<S202>/Subsystem' */

    /* Outputs for Enabled SubSystem: '<S202>/Subsystem2' incorporates:
     *  EnablePort: '<S233>/Enable'
     */
    /* Outputs for Atomic SubSystem: '<S202>/EdgeRising' */
    /* Logic: '<S224>/AND' incorporates:
     *  Constant: '<S236>/Constant'
     */
    if (rtb_RelationalOperator3 && rtb_AND_gm)
    {
        (void)Rte_Write_VeCIDB_e_FaultSts_InvData_BECM_Value(CeDFIB_e_Init);
    }

    /* End of Logic: '<S224>/AND' */
    /* End of Outputs for SubSystem: '<S202>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S202>/Subsystem2' */
}

#endif

/* System initialize for atomic system: '<S155>/U0412_Variant_Pegasus_10ms' */
#if Rte_SysCon_Variant_CIDB_U0412_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0412_Variant_Pegasus_10ms_Init(void)
{
    /* SystemInitialize for Merge: '<S240>/Merge1' */
    (void)Rte_Write_VeCIDB_e_FaultSts_InvData_BECM_Value(CeDFIB_e_Init);
}

#endif

/* Output and update for atomic system: '<S155>/U0412_Variant_Pegasus_10ms' */
#if Rte_SysCon_Variant_CIDB_U0412_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0412_Variant_Pegasus_10ms(void)
{
    uint32 rtb_RelationalOperator3_d_tmp;
    TeDFIB_e_FaultDebounceStatus VeCIDB_b_U0412_Pass_tmp;
    TeDFIB_e_FaultDebounceStatus VeCIDB_b_U0412_Pass_tmp_0;
    boolean rtb_AND_be;
    boolean rtb_RelationalOperator3;

    /* Logic: '<S239>/Logical Operator' incorporates:
     *  Constant: '<S239>/Constant Value'
     *  Constant: '<S261>/Calib'
     *  Logic: '<S239>/Logical Operator2'
     *  S-Function (sfix_bitop): '<S239>/Bitwise Operator'
     */
    CIDB_ac_B.VariantMergeForOutportVeCIDB_b_U0412_Dia =
        (((CIDB_ac_B.TmpSignalConversionAtVeDFIR_b_IsDiagGlob) &&
          (KeCIDB_b_U0412_DiagEnbl)) && ((((uint32)
            CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HV_Cu) & 4U) == 0U));

    /* S-Function (sfix_bitop): '<S244>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S242>/Data Store Read'
     *  S-Function (sfix_bitop): '<S254>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_d_tmp = ((uint32)CIDB_ac_DW.StatusByte_InvData_BECM)
        & 64U;

    /* RelationalOperator: '<S244>/Relational Operator3' incorporates:
     *  Constant: '<S244>/Constant3'
     *  S-Function (sfix_bitop): '<S244>/Bitwise Operator2'
     */
    rtb_RelationalOperator3 = (rtb_RelationalOperator3_d_tmp == 0U);

    /* Logic: '<S243>/Logical1' incorporates:
     *  Constant: '<S243>/Constant Value'
     *  DataTypeConversion: '<S243>/Cast To Boolean'
     *  DataTypeConversion: '<S243>/Cast To Boolean1'
     *  DataTypeConversion: '<S243>/Cast To Boolean2'
     *  DataTypeConversion: '<S243>/Cast To Boolean3'
     *  DataTypeConversion: '<S243>/Cast To Boolean4'
     *  DataTypeConversion: '<S243>/Cast To Boolean5'
     *  DataTypeConversion: '<S243>/Cast To Boolean6'
     *  S-Function (sfix_bitop): '<S243>/Bitwise Operator'
     *  S-Function (sfix_bitop): '<S243>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S243>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S243>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S243>/Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S243>/Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S243>/Bitwise Operator6'
     */
    VeCIDB_b_BATTERY_HV_POWERLIMITS_FaultCriteria = ((((((((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HVChr) & 8U) != 0U) ||
        ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HVPwr) & 8U) !=
         0U)) || ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HVP_b)
                   & 8U) != 0U)) || ((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HVP_k) & 8U) != 0U)) ||
        ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HVP_f) & 8U) !=
         0U)) || ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HV_bv)
                   & 8U) != 0U)) || ((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HVP_i) & 8U) != 0U));

    /* Outputs for Atomic SubSystem: '<S244>/EdgeFalling1' */
    /* Logic: '<S250>/AND' incorporates:
     *  Logic: '<S250>/OR1'
     *  UnitDelay: '<S250>/Unit Delay'
     */
    rtb_AND_be = ((!rtb_RelationalOperator3) && (CIDB_ac_DW.UnitDelay_DSTATE_hr));

    /* Update for UnitDelay: '<S250>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_hr = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S244>/EdgeFalling1' */

    /* Chart: '<S244>/Diagnostic Debounce' incorporates:
     *  Constant: '<S244>/Constant1'
     *  Constant: '<S245>/Calib'
     *  Constant: '<S246>/Calib'
     *  Constant: '<S247>/Calib'
     *  Constant: '<S248>/Calib'
     *  DataStoreRead: '<S242>/Data Store Read'
     *  Logic: '<S244>/Logical Operator'
     *  Logic: '<S244>/Logical Operator1'
     *  Logic: '<S244>/Logical10'
     *  Logic: '<S244>/Logical12'
     *  Logic: '<S244>/Logical5'
     *  RelationalOperator: '<S244>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S244>/Bitwise Operator3'
     */
    CIDB_ac_DiagnosticDebounce_j
        (((KeCIDB_b_BATTERY_HV_POWERLIMITS_ePT_SNA_DiagEnbl) &&
          (CIDB_ac_B.VariantMergeForOutportVeCIDB_b_U0412_Dia)) &&
         ((!KeCIDB_b_BATTERY_HV_POWERLIMITS_ePT_SNA_FailLatchEnable) ||
          (((((uint32)CIDB_ac_DW.StatusByte_InvData_BECM) & 1U) == 0U) ||
           (!rtb_RelationalOperator3))),
         VeCIDB_b_BATTERY_HV_POWERLIMITS_FaultCriteria,
         KeCIDB_Cnt_BATTERY_HV_POWERLIMITS_ePT_SNA_FailLmt,
         KeCIDB_Cnt_BATTERY_HV_POWERLIMITS_ePT_SNAFailINC, rtb_AND_be ||
         (CIDB_ac_B.OR_c), &CIDB_ac_B.sf_DiagnosticDebounce_jg);

    /* RelationalOperator: '<S254>/Relational Operator3' incorporates:
     *  Constant: '<S254>/Constant3'
     */
    rtb_RelationalOperator3 = (rtb_RelationalOperator3_d_tmp == 0U);

    /* Logic: '<S253>/Logical1' incorporates:
     *  Constant: '<S253>/Constant Value'
     *  DataTypeConversion: '<S253>/Cast To Boolean10'
     *  DataTypeConversion: '<S253>/Cast To Boolean11'
     *  DataTypeConversion: '<S253>/Cast To Boolean12'
     *  DataTypeConversion: '<S253>/Cast To Boolean13'
     *  DataTypeConversion: '<S253>/Cast To Boolean7'
     *  DataTypeConversion: '<S253>/Cast To Boolean8'
     *  DataTypeConversion: '<S253>/Cast To Boolean9'
     *  S-Function (sfix_bitop): '<S253>/Bitwise Operator10'
     *  S-Function (sfix_bitop): '<S253>/Bitwise Operator11'
     *  S-Function (sfix_bitop): '<S253>/Bitwise Operator12'
     *  S-Function (sfix_bitop): '<S253>/Bitwise Operator13'
     *  S-Function (sfix_bitop): '<S253>/Bitwise Operator7'
     *  S-Function (sfix_bitop): '<S253>/Bitwise Operator8'
     *  S-Function (sfix_bitop): '<S253>/Bitwise Operator9'
     */
    VeCIDB_b_BATTERY_HV_STATUS1_FaultCriteria = ((((((((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HV_Cu) & 8U) != 0U) ||
        ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HV_In) & 8U) !=
         0U)) || ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HV_SO)
                   & 8U) != 0U)) || ((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HV_Te) & 8U) != 0U)) ||
        ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HV__m) & 8U) !=
         0U)) || ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HV__p)
                   & 8U) != 0U)) || ((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HV_Tr) & 8U) != 0U));

    /* Outputs for Atomic SubSystem: '<S254>/EdgeFalling1' */
    /* Logic: '<S260>/AND' incorporates:
     *  Logic: '<S260>/OR1'
     *  UnitDelay: '<S260>/Unit Delay'
     */
    rtb_AND_be = ((!rtb_RelationalOperator3) && (CIDB_ac_DW.UnitDelay_DSTATE_jh));

    /* Update for UnitDelay: '<S260>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_jh = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S254>/EdgeFalling1' */

    /* Chart: '<S254>/Diagnostic Debounce' incorporates:
     *  Constant: '<S254>/Constant1'
     *  Constant: '<S255>/Calib'
     *  Constant: '<S256>/Calib'
     *  Constant: '<S257>/Calib'
     *  Constant: '<S258>/Calib'
     *  DataStoreRead: '<S252>/Data Store Read'
     *  Logic: '<S254>/Logical Operator'
     *  Logic: '<S254>/Logical Operator1'
     *  Logic: '<S254>/Logical10'
     *  Logic: '<S254>/Logical12'
     *  Logic: '<S254>/Logical5'
     *  RelationalOperator: '<S254>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S254>/Bitwise Operator3'
     */
    CIDB_ac_DiagnosticDebounce_m(((KeCIDB_b_BATTERY_HV_STATUS1_ePT_SNA_DiagEnbl)
        && (CIDB_ac_B.VariantMergeForOutportVeCIDB_b_U0412_Dia)) &&
        ((!KeCIDB_b_BATTERY_HV_STATUS1_ePT_SNA_FailLatchEnable) || (((((uint32)
        CIDB_ac_DW.StatusByte_InvData_BECM) & 1U) == 0U) ||
        (!rtb_RelationalOperator3))), VeCIDB_b_BATTERY_HV_STATUS1_FaultCriteria,
        KeCIDB_Cnt_BATTERY_HV_STATUS1_ePT_SNA_FailLmt,
        KeCIDB_Cnt_BATTERY_HV_STATUS1_ePT_SNAFailINC, rtb_AND_be ||
        (CIDB_ac_B.OR_c), &CIDB_ac_B.sf_DiagnosticDebounce_l);

    /* RelationalOperator: '<S240>/Relational Operator2' incorporates:
     *  Constant: '<S240>/Constant2'
     *  DataStoreRead: '<S240>/StatusByte_InvData_IDCM'
     *  S-Function (sfix_bitop): '<S240>/Bitwise Operator1'
     */
    rtb_RelationalOperator3 = ((((sint32)CIDB_ac_DW.StatusByte_InvData_BECM) &
        64) == 64);

    /* Outputs for Atomic SubSystem: '<S240>/EdgeRising' */
    /* Logic: '<S262>/OR1' incorporates:
     *  UnitDelay: '<S262>/Unit Delay'
     */
    rtb_AND_be = !CIDB_ac_DW.UnitDelay_DSTATE_ee;

    /* Update for UnitDelay: '<S262>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_ee = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S240>/EdgeRising' */

    /* RelationalOperator: '<S240>/Comparison5' incorporates:
     *  RelationalOperator: '<S240>/Comparison4'
     */
    VeCIDB_b_U0412_Pass_tmp = CIDB_ac_B.sf_DiagnosticDebounce_jg.Status;

    /* RelationalOperator: '<S240>/Comparison2' incorporates:
     *  RelationalOperator: '<S240>/Comparison1'
     */
    VeCIDB_b_U0412_Pass_tmp_0 = CIDB_ac_B.sf_DiagnosticDebounce_l.Status;

    /* Logic: '<S240>/Logical10' incorporates:
     *  Constant: '<S247>/Calib'
     *  Constant: '<S257>/Calib'
     *  Constant: '<S265>/Constant'
     *  Constant: '<S267>/Constant'
     *  Constant: '<S268>/Constant'
     *  Logic: '<S240>/Logical1'
     *  Logic: '<S240>/Logical2'
     *  Logic: '<S240>/Logical3'
     *  Logic: '<S240>/Logical4'
     *  Logic: '<S240>/Logical5'
     *  Logic: '<S240>/Logical6'
     *  Logic: '<S240>/Logical9'
     *  RelationalOperator: '<S240>/Comparison2'
     *  RelationalOperator: '<S240>/Comparison5'
     *  RelationalOperator: '<S240>/Comparison6'
     */
    VeCIDB_b_U0412_Pass = (((((!KeCIDB_b_BATTERY_HV_POWERLIMITS_ePT_SNA_DiagEnbl)
        || (((uint32)VeCIDB_b_U0412_Pass_tmp) == CeDFIB_e_Pass)) &&
        ((!KeCIDB_b_BATTERY_HV_STATUS1_ePT_SNA_DiagEnbl) || (((uint32)
        VeCIDB_b_U0412_Pass_tmp_0) == CeDFIB_e_Pass))) &&
                            ((!CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_BATTERY__c)
        || (((uint32)CIDB_ac_B.TmpSignalConversionAtVeCIDB_e_BATTERY__h) ==
            CeDFIB_e_Pass))) &&
                           (((KeCIDB_b_BATTERY_HV_POWERLIMITS_ePT_SNA_DiagEnbl) ||
        (KeCIDB_b_BATTERY_HV_STATUS1_ePT_SNA_DiagEnbl)) ||
                            (CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_BATTERY__c)));

    /* Logic: '<S240>/Logical11' incorporates:
     *  Constant: '<S263>/Constant'
     *  Constant: '<S264>/Constant'
     *  Constant: '<S266>/Constant'
     *  RelationalOperator: '<S240>/Comparison1'
     *  RelationalOperator: '<S240>/Comparison3'
     *  RelationalOperator: '<S240>/Comparison4'
     */
    VeCIDB_b_U0412_Fail = (((((uint32)VeCIDB_b_U0412_Pass_tmp) == CeDFIB_e_Fail)
                            || (((uint32)VeCIDB_b_U0412_Pass_tmp_0) ==
        CeDFIB_e_Fail)) || (((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCIDB_e_BATTERY__h) == CeDFIB_e_Fail));

    /* Outputs for Enabled SubSystem: '<S240>/Subsystem1' incorporates:
     *  EnablePort: '<S270>/Enable'
     */
    if (VeCIDB_b_U0412_Fail)
    {
        /* Constant: '<S273>/Constant' */
        (void)Rte_Write_VeCIDB_e_FaultSts_InvData_BECM_Value(CeDFIB_e_Fail);
    }

    /* End of Outputs for SubSystem: '<S240>/Subsystem1' */

    /* Outputs for Enabled SubSystem: '<S240>/Subsystem' incorporates:
     *  EnablePort: '<S269>/Enable'
     */
    if (VeCIDB_b_U0412_Pass)
    {
        /* Constant: '<S272>/Constant' */
        (void)Rte_Write_VeCIDB_e_FaultSts_InvData_BECM_Value(CeDFIB_e_Pass);
    }

    /* End of Outputs for SubSystem: '<S240>/Subsystem' */

    /* Outputs for Enabled SubSystem: '<S240>/Subsystem2' incorporates:
     *  EnablePort: '<S271>/Enable'
     */
    /* Outputs for Atomic SubSystem: '<S240>/EdgeRising' */
    /* Logic: '<S262>/AND' incorporates:
     *  Constant: '<S274>/Constant'
     */
    if (rtb_RelationalOperator3 && rtb_AND_be)
    {
        (void)Rte_Write_VeCIDB_e_FaultSts_InvData_BECM_Value(CeDFIB_e_Init);
    }

    /* End of Logic: '<S262>/AND' */
    /* End of Outputs for SubSystem: '<S240>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S240>/Subsystem2' */
}

#endif

/*
 * Output and update for atomic system:
 *    '<S285>/Diagnostic Debounce'
 *    '<S321>/Diagnostic Debounce'
 *    '<S357>/Diagnostic Debounce'
 */
#if Rte_SysCon_Variant_CIDB_U0415_BLUEN || Rte_SysCon_Variant_CIDB_U0415_Corebev || Rte_SysCon_Variant_CIDB_U0415_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_DiagnosticDebounce_p(VAR(boolean,
    AUTOMATIC) rtu_EnDiag, VAR(boolean, AUTOMATIC) rtu_Err, VAR(uint16,
    AUTOMATIC) rtu_FThr, VAR(uint8, AUTOMATIC) rtu_FInc, VAR(boolean, AUTOMATIC)
    rtu_Reset, P2VAR(B_DiagnosticDebounce_CIDB_ac_g_T, AUTOMATIC, CIDB_VAR_INIT)
    localB)
{
    sint32 tmp;

    /* Chart: '<S285>/Diagnostic Debounce' */
    /* Gateway: DiagnosticDebounceimplausibleSignalSNA/Diagnostic Debounce */
    /* During: DiagnosticDebounceimplausibleSignalSNA/Diagnostic Debounce */
    /* Entry Internal: DiagnosticDebounceimplausibleSignalSNA/Diagnostic Debounce */
    /* Transition: '<S290>:499' */
    VeCIDB_b_BRAKE_FD_2_FDCAN3_Fail = false;
    VeCIDB_b_BRAKE_FD_2_FDCAN3_Pass = false;
    if (rtu_Reset)
    {
        /* Transition: '<S290>:500' */
        /* Transition: '<S290>:502' */
        localB->Status = CeDFIB_e_Init;
        VeCIDB_Cnt_BRAKE_FD_2_FDCAN3_Fail = 0U;
        VeCIDB_Cnt_BRAKE_FD_2_FDCAN3_Init = 0U;

        /* Transition: '<S290>:505' */
        /* Transition: '<S290>:533' */
        /* Transition: '<S290>:545' */
        /* Transition: '<S290>:546' */
    }
    else
    {
        /* Transition: '<S290>:501' */
        if (rtu_EnDiag)
        {
            /* Transition: '<S290>:504' */
            if (((uint32)localB->Status) == CeDFIB_e_Init)
            {
                /* Transition: '<S290>:507' */
                if (!rtu_Err)
                {
                    /* Transition: '<S290>:506' */
                    /* Transition: '<S290>:509' */
                    tmp = ((sint32)VeCIDB_Cnt_BRAKE_FD_2_FDCAN3_Init) + ((sint32)
                        rtu_FInc);
                    if (tmp > 65535)
                    {
                        tmp = 65535;
                    }

                    VeCIDB_Cnt_BRAKE_FD_2_FDCAN3_Init = (uint16)tmp;
                    if (VeCIDB_Cnt_BRAKE_FD_2_FDCAN3_Init >= rtu_FThr)
                    {
                        /* Transition: '<S290>:511' */
                        /* Transition: '<S290>:513' */
                        localB->Status = CeDFIB_e_Pass;
                        VeCIDB_b_BRAKE_FD_2_FDCAN3_Pass = true;

                        /* Transition: '<S290>:516' */
                    }
                    else
                    {
                        /* Transition: '<S290>:512' */
                    }

                    /* Transition: '<S290>:515' */
                }
                else
                {
                    /* Transition: '<S290>:508' */
                    VeCIDB_Cnt_BRAKE_FD_2_FDCAN3_Init = 0U;
                }

                /* Transition: '<S290>:514' */
            }
            else
            {
                /* Transition: '<S290>:510' */
            }

            /* Transition: '<S290>:517' */
            if ((((((uint32)localB->Status) == CeDFIB_e_Pass) || (((uint32)
                    localB->Status) == CeDFIB_e_Pass_FaultRemoved)) || (((uint32)
                    localB->Status) == CeDFIB_e_Pass_FaultFiltering)) ||
                    (((uint32)localB->Status) == CeDFIB_e_Init))
            {
                /* Transition: '<S290>:518' */
                if (rtu_Err)
                {
                    /* Transition: '<S290>:519' */
                    /* Transition: '<S290>:522' */
                    tmp = ((sint32)VeCIDB_Cnt_BRAKE_FD_2_FDCAN3_Fail) + ((sint32)
                        rtu_FInc);
                    if (tmp > 65535)
                    {
                        tmp = 65535;
                    }

                    VeCIDB_Cnt_BRAKE_FD_2_FDCAN3_Fail = (uint16)tmp;
                    if (VeCIDB_Cnt_BRAKE_FD_2_FDCAN3_Fail > rtu_FThr)
                    {
                        /* Transition: '<S290>:524' */
                        /* Transition: '<S290>:528' */
                        localB->Status = CeDFIB_e_Fail;
                        VeCIDB_b_BRAKE_FD_2_FDCAN3_Fail = true;
                        VeCIDB_Cnt_BRAKE_FD_2_FDCAN3_Fail = (uint16)((sint32)
                            (((sint32)rtu_FThr) + 1));
                    }
                    else
                    {
                        /* Transition: '<S290>:557' */
                        if (((uint32)localB->Status) != CeDFIB_e_Init)
                        {
                            /* Transition: '<S290>:563' */
                            localB->Status = CeDFIB_e_Pass_FaultFiltering;

                            /* Transition: '<S290>:564' */
                            /* Transition: '<S290>:562' */
                        }
                        else
                        {
                            /* Transition: '<S290>:559' */
                            /* Transition: '<S290>:561' */
                            /* Transition: '<S290>:562' */
                        }
                    }
                }
                else
                {
                    /* Transition: '<S290>:521' */
                    if (((sint32)VeCIDB_Cnt_BRAKE_FD_2_FDCAN3_Fail) > 0)
                    {
                        /* Transition: '<S290>:523' */
                        /* Transition: '<S290>:567' */
                        tmp = ((sint32)VeCIDB_Cnt_BRAKE_FD_2_FDCAN3_Fail) - 1;
                        if ((((sint32)VeCIDB_Cnt_BRAKE_FD_2_FDCAN3_Fail) - 1) <
                                0)
                        {
                            tmp = 0;
                        }

                        VeCIDB_Cnt_BRAKE_FD_2_FDCAN3_Fail = (uint16)tmp;
                        if (((uint32)localB->Status) != CeDFIB_e_Init)
                        {
                            /* Transition: '<S290>:574' */
                            localB->Status = CeDFIB_e_Pass_FaultRemoved;

                            /* Transition: '<S290>:569' */
                        }
                        else
                        {
                            /* Transition: '<S290>:572' */
                            /* Transition: '<S290>:573' */
                        }
                    }
                    else
                    {
                        /* Transition: '<S290>:577' */
                        if (((uint32)localB->Status) != CeDFIB_e_Init)
                        {
                            /* Transition: '<S290>:582' */
                            localB->Status = CeDFIB_e_Pass;

                            /* Transition: '<S290>:581' */
                        }
                        else
                        {
                            /* Transition: '<S290>:579' */
                            /* Transition: '<S290>:580' */
                        }

                        /* Transition: '<S290>:583' */
                        /* Transition: '<S290>:569' */
                    }

                    /* Transition: '<S290>:570' */
                    /* Transition: '<S290>:564' */
                    /* Transition: '<S290>:562' */
                }

                /* Transition: '<S290>:532' */
                /* Transition: '<S290>:533' */
                /* Transition: '<S290>:545' */
                /* Transition: '<S290>:546' */
            }
            else
            {
                /* Transition: '<S290>:520' */
                if ((((uint32)localB->Status) == CeDFIB_e_Fail) || (((uint32)
                        localB->Status) == CeDFIB_e_Fail_FaultRemoved))
                {
                    /* Transition: '<S290>:534' */
                    if (rtu_Err)
                    {
                        /* Transition: '<S290>:535' */
                        /* Transition: '<S290>:538' */
                        tmp = ((sint32)rtu_FThr) + 1;
                        if ((((sint32)rtu_FThr) + 1) > 65535)
                        {
                            tmp = 65535;
                        }

                        VeCIDB_Cnt_BRAKE_FD_2_FDCAN3_Fail = (uint16)tmp;
                        localB->Status = CeDFIB_e_Fail;
                    }
                    else
                    {
                        /* Transition: '<S290>:537' */
                        tmp = ((sint32)VeCIDB_Cnt_BRAKE_FD_2_FDCAN3_Fail) - 1;
                        if ((((sint32)VeCIDB_Cnt_BRAKE_FD_2_FDCAN3_Fail) - 1) <
                                0)
                        {
                            tmp = 0;
                        }

                        VeCIDB_Cnt_BRAKE_FD_2_FDCAN3_Fail = (uint16)tmp;
                        if (((sint32)VeCIDB_Cnt_BRAKE_FD_2_FDCAN3_Fail) <= 0)
                        {
                            /* Transition: '<S290>:539' */
                            /* Transition: '<S290>:541' */
                            localB->Status = CeDFIB_e_Pass;
                            VeCIDB_b_BRAKE_FD_2_FDCAN3_Pass = true;
                        }
                        else
                        {
                            /* Transition: '<S290>:540' */
                            localB->Status = CeDFIB_e_Fail_FaultRemoved;

                            /* Transition: '<S290>:542' */
                        }

                        /* Transition: '<S290>:543' */
                    }

                    /* Transition: '<S290>:544' */
                    /* Transition: '<S290>:545' */
                    /* Transition: '<S290>:546' */
                }
                else
                {
                    /* Transition: '<S290>:536' */
                }
            }
        }
        else
        {
            /* Transition: '<S290>:503' */
            /* Transition: '<S290>:505' */
            /* Transition: '<S290>:533' */
            /* Transition: '<S290>:545' */
            /* Transition: '<S290>:546' */
        }
    }

    /* End of Chart: '<S285>/Diagnostic Debounce' */
    /* Transition: '<S290>:547' */
}

#endif

/*
 * Output and update for atomic system:
 *    '<S295>/Diagnostic Debounce'
 *    '<S331>/Diagnostic Debounce'
 *    '<S367>/Diagnostic Debounce'
 */
#if Rte_SysCon_Variant_CIDB_U0415_BLUEN || Rte_SysCon_Variant_CIDB_U0415_Corebev || Rte_SysCon_Variant_CIDB_U0415_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_DiagnosticDebounce_d(VAR(boolean,
    AUTOMATIC) rtu_EnDiag, VAR(boolean, AUTOMATIC) rtu_Err, VAR(uint16,
    AUTOMATIC) rtu_FThr, VAR(uint8, AUTOMATIC) rtu_FInc, VAR(boolean, AUTOMATIC)
    rtu_Reset, P2VAR(B_DiagnosticDebounce_CIDB_ac_j_T, AUTOMATIC, CIDB_VAR_INIT)
    localB)
{
    sint32 tmp;

    /* Chart: '<S295>/Diagnostic Debounce' */
    /* Gateway: DiagnosticDebounceimplausibleSignalSNA/Diagnostic Debounce */
    /* During: DiagnosticDebounceimplausibleSignalSNA/Diagnostic Debounce */
    /* Entry Internal: DiagnosticDebounceimplausibleSignalSNA/Diagnostic Debounce */
    /* Transition: '<S300>:499' */
    VeCIDB_b_BRAKE_FD_3_FDCAN3_Fail = false;
    VeCIDB_b_BRAKE_FD_3_FDCAN3_Pass = false;
    if (rtu_Reset)
    {
        /* Transition: '<S300>:500' */
        /* Transition: '<S300>:502' */
        localB->Status = CeDFIB_e_Init;
        VeCIDB_Cnt_BRAKE_FD_3_FDCAN3_Fail = 0U;
        VeCIDB_Cnt_BRAKE_FD_3_FDCAN3_Init = 0U;

        /* Transition: '<S300>:505' */
        /* Transition: '<S300>:533' */
        /* Transition: '<S300>:545' */
        /* Transition: '<S300>:546' */
    }
    else
    {
        /* Transition: '<S300>:501' */
        if (rtu_EnDiag)
        {
            /* Transition: '<S300>:504' */
            if (((uint32)localB->Status) == CeDFIB_e_Init)
            {
                /* Transition: '<S300>:507' */
                if (!rtu_Err)
                {
                    /* Transition: '<S300>:506' */
                    /* Transition: '<S300>:509' */
                    tmp = ((sint32)VeCIDB_Cnt_BRAKE_FD_3_FDCAN3_Init) + ((sint32)
                        rtu_FInc);
                    if (tmp > 65535)
                    {
                        tmp = 65535;
                    }

                    VeCIDB_Cnt_BRAKE_FD_3_FDCAN3_Init = (uint16)tmp;
                    if (VeCIDB_Cnt_BRAKE_FD_3_FDCAN3_Init >= rtu_FThr)
                    {
                        /* Transition: '<S300>:511' */
                        /* Transition: '<S300>:513' */
                        localB->Status = CeDFIB_e_Pass;
                        VeCIDB_b_BRAKE_FD_3_FDCAN3_Pass = true;

                        /* Transition: '<S300>:516' */
                    }
                    else
                    {
                        /* Transition: '<S300>:512' */
                    }

                    /* Transition: '<S300>:515' */
                }
                else
                {
                    /* Transition: '<S300>:508' */
                    VeCIDB_Cnt_BRAKE_FD_3_FDCAN3_Init = 0U;
                }

                /* Transition: '<S300>:514' */
            }
            else
            {
                /* Transition: '<S300>:510' */
            }

            /* Transition: '<S300>:517' */
            if ((((((uint32)localB->Status) == CeDFIB_e_Pass) || (((uint32)
                    localB->Status) == CeDFIB_e_Pass_FaultRemoved)) || (((uint32)
                    localB->Status) == CeDFIB_e_Pass_FaultFiltering)) ||
                    (((uint32)localB->Status) == CeDFIB_e_Init))
            {
                /* Transition: '<S300>:518' */
                if (rtu_Err)
                {
                    /* Transition: '<S300>:519' */
                    /* Transition: '<S300>:522' */
                    tmp = ((sint32)VeCIDB_Cnt_BRAKE_FD_3_FDCAN3_Fail) + ((sint32)
                        rtu_FInc);
                    if (tmp > 65535)
                    {
                        tmp = 65535;
                    }

                    VeCIDB_Cnt_BRAKE_FD_3_FDCAN3_Fail = (uint16)tmp;
                    if (VeCIDB_Cnt_BRAKE_FD_3_FDCAN3_Fail > rtu_FThr)
                    {
                        /* Transition: '<S300>:524' */
                        /* Transition: '<S300>:528' */
                        localB->Status = CeDFIB_e_Fail;
                        VeCIDB_b_BRAKE_FD_3_FDCAN3_Fail = true;
                        VeCIDB_Cnt_BRAKE_FD_3_FDCAN3_Fail = (uint16)((sint32)
                            (((sint32)rtu_FThr) + 1));
                    }
                    else
                    {
                        /* Transition: '<S300>:557' */
                        if (((uint32)localB->Status) != CeDFIB_e_Init)
                        {
                            /* Transition: '<S300>:563' */
                            localB->Status = CeDFIB_e_Pass_FaultFiltering;

                            /* Transition: '<S300>:564' */
                            /* Transition: '<S300>:562' */
                        }
                        else
                        {
                            /* Transition: '<S300>:559' */
                            /* Transition: '<S300>:561' */
                            /* Transition: '<S300>:562' */
                        }
                    }
                }
                else
                {
                    /* Transition: '<S300>:521' */
                    if (((sint32)VeCIDB_Cnt_BRAKE_FD_3_FDCAN3_Fail) > 0)
                    {
                        /* Transition: '<S300>:523' */
                        /* Transition: '<S300>:567' */
                        tmp = ((sint32)VeCIDB_Cnt_BRAKE_FD_3_FDCAN3_Fail) - 1;
                        if ((((sint32)VeCIDB_Cnt_BRAKE_FD_3_FDCAN3_Fail) - 1) <
                                0)
                        {
                            tmp = 0;
                        }

                        VeCIDB_Cnt_BRAKE_FD_3_FDCAN3_Fail = (uint16)tmp;
                        if (((uint32)localB->Status) != CeDFIB_e_Init)
                        {
                            /* Transition: '<S300>:574' */
                            localB->Status = CeDFIB_e_Pass_FaultRemoved;

                            /* Transition: '<S300>:569' */
                        }
                        else
                        {
                            /* Transition: '<S300>:572' */
                            /* Transition: '<S300>:573' */
                        }
                    }
                    else
                    {
                        /* Transition: '<S300>:577' */
                        if (((uint32)localB->Status) != CeDFIB_e_Init)
                        {
                            /* Transition: '<S300>:582' */
                            localB->Status = CeDFIB_e_Pass;

                            /* Transition: '<S300>:581' */
                        }
                        else
                        {
                            /* Transition: '<S300>:579' */
                            /* Transition: '<S300>:580' */
                        }

                        /* Transition: '<S300>:583' */
                        /* Transition: '<S300>:569' */
                    }

                    /* Transition: '<S300>:570' */
                    /* Transition: '<S300>:564' */
                    /* Transition: '<S300>:562' */
                }

                /* Transition: '<S300>:532' */
                /* Transition: '<S300>:533' */
                /* Transition: '<S300>:545' */
                /* Transition: '<S300>:546' */
            }
            else
            {
                /* Transition: '<S300>:520' */
                if ((((uint32)localB->Status) == CeDFIB_e_Fail) || (((uint32)
                        localB->Status) == CeDFIB_e_Fail_FaultRemoved))
                {
                    /* Transition: '<S300>:534' */
                    if (rtu_Err)
                    {
                        /* Transition: '<S300>:535' */
                        /* Transition: '<S300>:538' */
                        tmp = ((sint32)rtu_FThr) + 1;
                        if ((((sint32)rtu_FThr) + 1) > 65535)
                        {
                            tmp = 65535;
                        }

                        VeCIDB_Cnt_BRAKE_FD_3_FDCAN3_Fail = (uint16)tmp;
                        localB->Status = CeDFIB_e_Fail;
                    }
                    else
                    {
                        /* Transition: '<S300>:537' */
                        tmp = ((sint32)VeCIDB_Cnt_BRAKE_FD_3_FDCAN3_Fail) - 1;
                        if ((((sint32)VeCIDB_Cnt_BRAKE_FD_3_FDCAN3_Fail) - 1) <
                                0)
                        {
                            tmp = 0;
                        }

                        VeCIDB_Cnt_BRAKE_FD_3_FDCAN3_Fail = (uint16)tmp;
                        if (((sint32)VeCIDB_Cnt_BRAKE_FD_3_FDCAN3_Fail) <= 0)
                        {
                            /* Transition: '<S300>:539' */
                            /* Transition: '<S300>:541' */
                            localB->Status = CeDFIB_e_Pass;
                            VeCIDB_b_BRAKE_FD_3_FDCAN3_Pass = true;
                        }
                        else
                        {
                            /* Transition: '<S300>:540' */
                            localB->Status = CeDFIB_e_Fail_FaultRemoved;

                            /* Transition: '<S300>:542' */
                        }

                        /* Transition: '<S300>:543' */
                    }

                    /* Transition: '<S300>:544' */
                    /* Transition: '<S300>:545' */
                    /* Transition: '<S300>:546' */
                }
                else
                {
                    /* Transition: '<S300>:536' */
                }
            }
        }
        else
        {
            /* Transition: '<S300>:503' */
            /* Transition: '<S300>:505' */
            /* Transition: '<S300>:533' */
            /* Transition: '<S300>:545' */
            /* Transition: '<S300>:546' */
        }
    }

    /* End of Chart: '<S295>/Diagnostic Debounce' */
    /* Transition: '<S300>:547' */
}

#endif

/* System initialize for atomic system: '<S156>/U0415_Bluen_10ms' */
#if Rte_SysCon_Variant_CIDB_U0415_BLUEN

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0415_Bluen_10ms_Init(void)
{
    /* SystemInitialize for Outport: '<Root>/VeCIDB_e_FaultSts_InvData_ABS' incorporates:
     *  Merge: '<S281>/Merge1'
     */
    (void)Rte_Write_VeCIDB_e_FaultSts_InvData_ABS_Value(CeDFIB_e_Init);
}

#endif

/* Output and update for atomic system: '<S156>/U0415_Bluen_10ms' */
#if Rte_SysCon_Variant_CIDB_U0415_BLUEN

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0415_Bluen_10ms(void)
{
    uint32 rtb_RelationalOperator3_h_tmp;
    TeDFIB_e_FaultDebounceStatus VeCIDB_b_U0415_Pass_tmp;
    TeDFIB_e_FaultDebounceStatus VeCIDB_b_U0415_Pass_tmp_0;
    uint8 tmpRead;
    boolean rtb_AND_as;
    boolean rtb_CastToBoolean3;
    boolean rtb_RelationalOperator3;

    /* Inport: '<Root>/VeSR1B_y_VehSpeedVSOSig_FD14_SigSts' */
    (void)Rte_Read_VeSR1B_y_VehSpeedVSOSig_FD14_SigSts_Value(&tmpRead);

    /* DataTypeConversion: '<S294>/Cast To Boolean3' incorporates:
     *  Constant: '<S280>/Constant'
     *  Constant: '<S302>/Calib'
     *  Logic: '<S280>/Logical Operator'
     *  Logic: '<S280>/Logical Operator2'
     *  S-Function (sfix_bitop): '<S280>/Bitwise AND'
     */
    rtb_CastToBoolean3 = (((CIDB_ac_B.TmpSignalConversionAtVeDFIR_b_IsDiagGlob) &&
                           (KeCIDB_b_U0415_DiagEnbl)) && ((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_LongAccelt) & 4U) == 0U));

    /* S-Function (sfix_bitop): '<S285>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S283>/Data Store Read'
     *  S-Function (sfix_bitop): '<S295>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_h_tmp = ((uint32)CIDB_ac_DW.StatusByte_InvData_ABS)
        & 64U;

    /* RelationalOperator: '<S285>/Relational Operator3' incorporates:
     *  Constant: '<S285>/Constant3'
     *  S-Function (sfix_bitop): '<S285>/Bitwise Operator2'
     */
    rtb_RelationalOperator3 = (rtb_RelationalOperator3_h_tmp == 0U);

    /* Logic: '<S284>/Logical1' incorporates:
     *  Constant: '<S284>/Constant Value'
     *  DataTypeConversion: '<S284>/Cast To Boolean'
     *  DataTypeConversion: '<S284>/Cast To Boolean1'
     *  DataTypeConversion: '<S284>/Cast To Boolean2'
     *  S-Function (sfix_bitop): '<S284>/Bitwise Operator'
     *  S-Function (sfix_bitop): '<S284>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S284>/Bitwise Operator2'
     */
    VeCIDB_b_BRAKE_FD_2_FDCAN3_FaultCriteria = ((((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_LongAccelt) & 8U) != 0U) ||
        ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_VehicleSpe) & 8U) !=
         0U)) || ((((uint32)tmpRead) & 8U) != 0U));

    /* Outputs for Atomic SubSystem: '<S285>/EdgeFalling1' */
    /* Logic: '<S291>/AND' incorporates:
     *  Logic: '<S291>/OR1'
     *  UnitDelay: '<S291>/Unit Delay'
     */
    rtb_AND_as = ((!rtb_RelationalOperator3) && (CIDB_ac_DW.UnitDelay_DSTATE_jr));

    /* Update for UnitDelay: '<S291>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_jr = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S285>/EdgeFalling1' */

    /* Chart: '<S285>/Diagnostic Debounce' incorporates:
     *  Constant: '<S285>/Constant1'
     *  Constant: '<S286>/Calib'
     *  Constant: '<S287>/Calib'
     *  Constant: '<S288>/Calib'
     *  Constant: '<S289>/Calib'
     *  DataStoreRead: '<S283>/Data Store Read'
     *  Logic: '<S285>/Logical Operator'
     *  Logic: '<S285>/Logical Operator1'
     *  Logic: '<S285>/Logical10'
     *  Logic: '<S285>/Logical12'
     *  Logic: '<S285>/Logical5'
     *  RelationalOperator: '<S285>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S285>/Bitwise Operator3'
     */
    CIDB_ac_DiagnosticDebounce_p(((KeCIDB_b_BRAKE_FD_2_FDCAN3_SNA_DiagEnbl) &&
        rtb_CastToBoolean3) && ((!KeCIDB_b_BRAKE_FD_2_FDCAN3_SNA_FailLatchEnable)
        || (((((uint32)CIDB_ac_DW.StatusByte_InvData_ABS) & 1U) == 0U) ||
            (!rtb_RelationalOperator3))),
        VeCIDB_b_BRAKE_FD_2_FDCAN3_FaultCriteria,
        KeCIDB_Cnt_BRAKE_FD_2_FDCAN3_SNA_FailLmt,
        KeCIDB_Cnt_BRAKE_FD_2_FDCAN3_SNAFailINC, rtb_AND_as || (CIDB_ac_B.OR_c),
        &CIDB_ac_B.sf_DiagnosticDebounce_p);

    /* RelationalOperator: '<S295>/Relational Operator3' incorporates:
     *  Constant: '<S295>/Constant3'
     */
    rtb_RelationalOperator3 = (rtb_RelationalOperator3_h_tmp == 0U);

    /* Logic: '<S294>/Logical1' incorporates:
     *  Constant: '<S294>/Constant Value'
     *  DataTypeConversion: '<S294>/Cast To Boolean'
     *  DataTypeConversion: '<S294>/Cast To Boolean1'
     *  DataTypeConversion: '<S294>/Cast To Boolean2'
     *  DataTypeConversion: '<S294>/Cast To Boolean3'
     *  DataTypeConversion: '<S294>/Cast To Boolean4'
     *  DataTypeConversion: '<S294>/Cast To Boolean5'
     *  DataTypeConversion: '<S294>/Cast To Boolean6'
     *  DataTypeConversion: '<S294>/Cast To Boolean7'
     *  S-Function (sfix_bitop): '<S294>/Bitwise Operator'
     *  S-Function (sfix_bitop): '<S294>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S294>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S294>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S294>/Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S294>/Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S294>/Bitwise Operator6'
     *  S-Function (sfix_bitop): '<S294>/Bitwise Operator7'
     */
    VeCIDB_b_BRAKE_FD_3_FDCAN3_FaultCriteria = (((((((((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_LHF_Spin_F) & 8U) != 0U) ||
        ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_LHFWheelSp) & 8U) !=
         0U)) || ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_LHR_Spin_F)
                   & 8U) != 0U)) || ((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_LHRWheelSp) & 8U) != 0U)) ||
        ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_RHF_Spin_F) & 8U) !=
         0U)) || ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_RHFWheelSp)
                   & 8U) != 0U)) || ((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_RHR_Spin_F) & 8U) != 0U)) ||
        ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_RHRWheelSp) & 8U) !=
         0U));

    /* Outputs for Atomic SubSystem: '<S295>/EdgeFalling1' */
    /* Logic: '<S301>/AND' incorporates:
     *  Logic: '<S301>/OR1'
     *  UnitDelay: '<S301>/Unit Delay'
     */
    rtb_AND_as = ((!rtb_RelationalOperator3) && (CIDB_ac_DW.UnitDelay_DSTATE_mi));

    /* Update for UnitDelay: '<S301>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_mi = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S295>/EdgeFalling1' */

    /* Chart: '<S295>/Diagnostic Debounce' incorporates:
     *  Constant: '<S295>/Constant1'
     *  Constant: '<S296>/Calib'
     *  Constant: '<S297>/Calib'
     *  Constant: '<S298>/Calib'
     *  Constant: '<S299>/Calib'
     *  DataStoreRead: '<S293>/Data Store Read'
     *  Logic: '<S295>/Logical Operator'
     *  Logic: '<S295>/Logical Operator1'
     *  Logic: '<S295>/Logical10'
     *  Logic: '<S295>/Logical12'
     *  Logic: '<S295>/Logical5'
     *  RelationalOperator: '<S295>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S295>/Bitwise Operator3'
     */
    CIDB_ac_DiagnosticDebounce_d(((KeCIDB_b_BRAKE_FD_3_FDCAN3_SNA_DiagEnbl) &&
        rtb_CastToBoolean3) && ((!KeCIDB_b_BRAKE_FD_3_FDCAN3_SNA_FailLatchEnable)
        || (((((uint32)CIDB_ac_DW.StatusByte_InvData_ABS) & 1U) == 0U) ||
            (!rtb_RelationalOperator3))),
        VeCIDB_b_BRAKE_FD_3_FDCAN3_FaultCriteria,
        KeCIDB_Cnt_BRAKE_FD_3_FDCAN3_SNA_FailLmt,
        KeCIDB_Cnt_BRAKE_FD_3_FDCAN3_SNAFailINC, rtb_AND_as || (CIDB_ac_B.OR_c),
        &CIDB_ac_B.sf_DiagnosticDebounce_d);

    /* RelationalOperator: '<S281>/Relational Operator2' incorporates:
     *  Constant: '<S281>/Constant2'
     *  DataStoreRead: '<S281>/StatusByte_InvData_ABS'
     *  S-Function (sfix_bitop): '<S281>/Bitwise Operator1'
     */
    rtb_CastToBoolean3 = ((((sint32)CIDB_ac_DW.StatusByte_InvData_ABS) & 64) ==
                          64);

    /* Outputs for Atomic SubSystem: '<S281>/EdgeRising' */
    /* Logic: '<S303>/OR1' incorporates:
     *  UnitDelay: '<S303>/Unit Delay'
     */
    rtb_RelationalOperator3 = !CIDB_ac_DW.UnitDelay_DSTATE_hf;

    /* Update for UnitDelay: '<S303>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_hf = rtb_CastToBoolean3;

    /* End of Outputs for SubSystem: '<S281>/EdgeRising' */

    /* RelationalOperator: '<S281>/Comparison5' incorporates:
     *  RelationalOperator: '<S281>/Comparison4'
     */
    VeCIDB_b_U0415_Pass_tmp = CIDB_ac_B.sf_DiagnosticDebounce_p.Status;

    /* RelationalOperator: '<S281>/Comparison6' incorporates:
     *  RelationalOperator: '<S281>/Comparison3'
     */
    VeCIDB_b_U0415_Pass_tmp_0 = CIDB_ac_B.sf_DiagnosticDebounce_d.Status;

    /* Logic: '<S281>/Logical10' incorporates:
     *  Constant: '<S288>/Calib'
     *  Constant: '<S298>/Calib'
     *  Constant: '<S306>/Constant'
     *  Constant: '<S307>/Constant'
     *  Logic: '<S281>/Logical1'
     *  Logic: '<S281>/Logical13'
     *  Logic: '<S281>/Logical14'
     *  Logic: '<S281>/Logical2'
     *  Logic: '<S281>/Logical9'
     *  RelationalOperator: '<S281>/Comparison5'
     *  RelationalOperator: '<S281>/Comparison6'
     */
    VeCIDB_b_U0415_Pass = ((((!KeCIDB_b_BRAKE_FD_2_FDCAN3_SNA_DiagEnbl) ||
        (((uint32)VeCIDB_b_U0415_Pass_tmp) == CeDFIB_e_Pass)) &&
                            ((!KeCIDB_b_BRAKE_FD_3_FDCAN3_SNA_DiagEnbl) ||
        (((uint32)VeCIDB_b_U0415_Pass_tmp_0) == CeDFIB_e_Pass))) &&
                           ((KeCIDB_b_BRAKE_FD_3_FDCAN3_SNA_DiagEnbl) ||
                            (KeCIDB_b_BRAKE_FD_2_FDCAN3_SNA_DiagEnbl)));

    /* Logic: '<S281>/Logical11' incorporates:
     *  Constant: '<S304>/Constant'
     *  Constant: '<S305>/Constant'
     *  RelationalOperator: '<S281>/Comparison3'
     *  RelationalOperator: '<S281>/Comparison4'
     */
    VeCIDB_b_U0415_Fail = ((((uint32)VeCIDB_b_U0415_Pass_tmp) == CeDFIB_e_Fail) ||
                           (((uint32)VeCIDB_b_U0415_Pass_tmp_0) == CeDFIB_e_Fail));

    /* Outputs for Enabled SubSystem: '<S281>/Subsystem1' incorporates:
     *  EnablePort: '<S309>/Enable'
     */
    if (VeCIDB_b_U0415_Fail)
    {
        /* Outport: '<Root>/VeCIDB_e_FaultSts_InvData_ABS' incorporates:
         *  Constant: '<S312>/Constant'
         */
        (void)Rte_Write_VeCIDB_e_FaultSts_InvData_ABS_Value(CeDFIB_e_Fail);
    }

    /* End of Outputs for SubSystem: '<S281>/Subsystem1' */

    /* Outputs for Enabled SubSystem: '<S281>/Subsystem' incorporates:
     *  EnablePort: '<S308>/Enable'
     */
    if (VeCIDB_b_U0415_Pass)
    {
        /* Outport: '<Root>/VeCIDB_e_FaultSts_InvData_ABS' incorporates:
         *  Constant: '<S311>/Constant'
         */
        (void)Rte_Write_VeCIDB_e_FaultSts_InvData_ABS_Value(CeDFIB_e_Pass);
    }

    /* End of Outputs for SubSystem: '<S281>/Subsystem' */

    /* Outputs for Enabled SubSystem: '<S281>/Subsystem2' incorporates:
     *  EnablePort: '<S310>/Enable'
     */
    /* Outputs for Atomic SubSystem: '<S281>/EdgeRising' */
    /* Logic: '<S303>/AND' */
    if (rtb_CastToBoolean3 && rtb_RelationalOperator3)
    {
        /* Outport: '<Root>/VeCIDB_e_FaultSts_InvData_ABS' incorporates:
         *  Constant: '<S313>/Constant'
         */
        (void)Rte_Write_VeCIDB_e_FaultSts_InvData_ABS_Value(CeDFIB_e_Init);
    }

    /* End of Logic: '<S303>/AND' */
    /* End of Outputs for SubSystem: '<S281>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S281>/Subsystem2' */
}

#endif

/* System initialize for atomic system: '<S156>/U0415_COREBEV_10ms' */
#if Rte_SysCon_Variant_CIDB_U0415_Corebev

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0415_COREBEV_10ms_Init(void)
{
    /* SystemInitialize for Merge: '<S317>/Merge1' */
    (void)Rte_Write_VeCIDB_e_FaultSts_InvData_ABS_Value(CeDFIB_e_Init);
}

#endif

/* Output and update for atomic system: '<S156>/U0415_COREBEV_10ms' */
#if Rte_SysCon_Variant_CIDB_U0415_Corebev

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0415_COREBEV_10ms(void)
{
    uint32 rtb_RelationalOperator3_p_tmp;
    TeDFIB_e_FaultDebounceStatus VeCIDB_b_U0415_Pass_tmp;
    TeDFIB_e_FaultDebounceStatus VeCIDB_b_U0415_Pass_tmp_0;
    boolean rtb_AND_i1;
    boolean rtb_CastToBoolean3;
    boolean rtb_RelationalOperator3;

    /* DataTypeConversion: '<S330>/Cast To Boolean3' incorporates:
     *  Constant: '<S316>/Constant'
     *  Constant: '<S338>/Calib'
     *  Logic: '<S316>/Logical Operator'
     *  Logic: '<S316>/Logical Operator2'
     *  S-Function (sfix_bitop): '<S316>/Bitwise AND'
     */
    rtb_CastToBoolean3 = (((CIDB_ac_B.TmpSignalConversionAtVeDFIR_b_IsDiagGlob) &&
                           (KeCIDB_b_U0415_DiagEnbl)) && ((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_LongAccele) & 4U) == 0U));

    /* S-Function (sfix_bitop): '<S321>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S319>/Data Store Read'
     *  S-Function (sfix_bitop): '<S331>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_p_tmp = ((uint32)CIDB_ac_DW.StatusByte_InvData_ABS)
        & 64U;

    /* RelationalOperator: '<S321>/Relational Operator3' incorporates:
     *  Constant: '<S321>/Constant3'
     *  S-Function (sfix_bitop): '<S321>/Bitwise Operator2'
     */
    rtb_RelationalOperator3 = (rtb_RelationalOperator3_p_tmp == 0U);

    /* Logic: '<S320>/Logical1' incorporates:
     *  Constant: '<S320>/Constant Value'
     *  DataTypeConversion: '<S320>/Cast To Boolean'
     *  DataTypeConversion: '<S320>/Cast To Boolean1'
     *  DataTypeConversion: '<S320>/Cast To Boolean2'
     *  S-Function (sfix_bitop): '<S320>/Bitwise Operator'
     *  S-Function (sfix_bitop): '<S320>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S320>/Bitwise Operator2'
     */
    VeCIDB_b_BRAKE_FD_2_FDCAN3_FaultCriteria = ((((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_LongAccele) & 8U) != 0U) ||
        ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_VehicleSpe) & 8U) !=
         0U)) || ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_VehiclSpee)
                   & 8U) != 0U));

    /* Outputs for Atomic SubSystem: '<S321>/EdgeFalling1' */
    /* Logic: '<S327>/AND' incorporates:
     *  Logic: '<S327>/OR1'
     *  UnitDelay: '<S327>/Unit Delay'
     */
    rtb_AND_i1 = ((!rtb_RelationalOperator3) && (CIDB_ac_DW.UnitDelay_DSTATE_f5));

    /* Update for UnitDelay: '<S327>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_f5 = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S321>/EdgeFalling1' */

    /* Chart: '<S321>/Diagnostic Debounce' incorporates:
     *  Constant: '<S321>/Constant1'
     *  Constant: '<S322>/Calib'
     *  Constant: '<S323>/Calib'
     *  Constant: '<S324>/Calib'
     *  Constant: '<S325>/Calib'
     *  DataStoreRead: '<S319>/Data Store Read'
     *  Logic: '<S321>/Logical Operator'
     *  Logic: '<S321>/Logical Operator1'
     *  Logic: '<S321>/Logical10'
     *  Logic: '<S321>/Logical12'
     *  Logic: '<S321>/Logical5'
     *  RelationalOperator: '<S321>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S321>/Bitwise Operator3'
     */
    CIDB_ac_DiagnosticDebounce_p(((KeCIDB_b_BRAKE_FD_2_FDCAN3_SNA_DiagEnbl) &&
        rtb_CastToBoolean3) && ((!KeCIDB_b_BRAKE_FD_2_FDCAN3_SNA_FailLatchEnable)
        || (((((uint32)CIDB_ac_DW.StatusByte_InvData_ABS) & 1U) == 0U) ||
            (!rtb_RelationalOperator3))),
        VeCIDB_b_BRAKE_FD_2_FDCAN3_FaultCriteria,
        KeCIDB_Cnt_BRAKE_FD_2_FDCAN3_SNA_FailLmt,
        KeCIDB_Cnt_BRAKE_FD_2_FDCAN3_SNAFailINC, rtb_AND_i1 || (CIDB_ac_B.OR_c),
        &CIDB_ac_B.sf_DiagnosticDebounce_f);

    /* RelationalOperator: '<S331>/Relational Operator3' incorporates:
     *  Constant: '<S331>/Constant3'
     */
    rtb_RelationalOperator3 = (rtb_RelationalOperator3_p_tmp == 0U);

    /* Logic: '<S330>/Logical1' incorporates:
     *  Constant: '<S330>/Constant Value'
     *  DataTypeConversion: '<S330>/Cast To Boolean'
     *  DataTypeConversion: '<S330>/Cast To Boolean1'
     *  DataTypeConversion: '<S330>/Cast To Boolean2'
     *  DataTypeConversion: '<S330>/Cast To Boolean3'
     *  DataTypeConversion: '<S330>/Cast To Boolean4'
     *  DataTypeConversion: '<S330>/Cast To Boolean5'
     *  DataTypeConversion: '<S330>/Cast To Boolean6'
     *  DataTypeConversion: '<S330>/Cast To Boolean7'
     *  S-Function (sfix_bitop): '<S330>/Bitwise Operator'
     *  S-Function (sfix_bitop): '<S330>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S330>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S330>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S330>/Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S330>/Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S330>/Bitwise Operator6'
     *  S-Function (sfix_bitop): '<S330>/Bitwise Operator7'
     */
    VeCIDB_b_BRAKE_FD_3_FDCAN3_FaultCriteria = (((((((((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_LHF_Spin_F) & 8U) != 0U) ||
        ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_LHFWheelSp) & 8U) !=
         0U)) || ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_LHR_Spin_F)
                   & 8U) != 0U)) || ((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_LHRWheelSp) & 8U) != 0U)) ||
        ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_RHF_Spin_F) & 8U) !=
         0U)) || ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_RHFWheelSp)
                   & 8U) != 0U)) || ((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_RHR_Spin_F) & 8U) != 0U)) ||
        ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_RHRWheelSp) & 8U) !=
         0U));

    /* Outputs for Atomic SubSystem: '<S331>/EdgeFalling1' */
    /* Logic: '<S337>/AND' incorporates:
     *  Logic: '<S337>/OR1'
     *  UnitDelay: '<S337>/Unit Delay'
     */
    rtb_AND_i1 = ((!rtb_RelationalOperator3) && (CIDB_ac_DW.UnitDelay_DSTATE_be));

    /* Update for UnitDelay: '<S337>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_be = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S331>/EdgeFalling1' */

    /* Chart: '<S331>/Diagnostic Debounce' incorporates:
     *  Constant: '<S331>/Constant1'
     *  Constant: '<S332>/Calib'
     *  Constant: '<S333>/Calib'
     *  Constant: '<S334>/Calib'
     *  Constant: '<S335>/Calib'
     *  DataStoreRead: '<S329>/Data Store Read'
     *  Logic: '<S331>/Logical Operator'
     *  Logic: '<S331>/Logical Operator1'
     *  Logic: '<S331>/Logical10'
     *  Logic: '<S331>/Logical12'
     *  Logic: '<S331>/Logical5'
     *  RelationalOperator: '<S331>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S331>/Bitwise Operator3'
     */
    CIDB_ac_DiagnosticDebounce_d(((KeCIDB_b_BRAKE_FD_3_FDCAN3_SNA_DiagEnbl) &&
        rtb_CastToBoolean3) && ((!KeCIDB_b_BRAKE_FD_3_FDCAN3_SNA_FailLatchEnable)
        || (((((uint32)CIDB_ac_DW.StatusByte_InvData_ABS) & 1U) == 0U) ||
            (!rtb_RelationalOperator3))),
        VeCIDB_b_BRAKE_FD_3_FDCAN3_FaultCriteria,
        KeCIDB_Cnt_BRAKE_FD_3_FDCAN3_SNA_FailLmt,
        KeCIDB_Cnt_BRAKE_FD_3_FDCAN3_SNAFailINC, rtb_AND_i1 || (CIDB_ac_B.OR_c),
        &CIDB_ac_B.sf_DiagnosticDebounce_c);

    /* RelationalOperator: '<S317>/Relational Operator2' incorporates:
     *  Constant: '<S317>/Constant2'
     *  DataStoreRead: '<S317>/StatusByte_InvData_ABS'
     *  S-Function (sfix_bitop): '<S317>/Bitwise Operator1'
     */
    rtb_CastToBoolean3 = ((((sint32)CIDB_ac_DW.StatusByte_InvData_ABS) & 64) ==
                          64);

    /* Outputs for Atomic SubSystem: '<S317>/EdgeRising' */
    /* Logic: '<S339>/OR1' incorporates:
     *  UnitDelay: '<S339>/Unit Delay'
     */
    rtb_RelationalOperator3 = !CIDB_ac_DW.UnitDelay_DSTATE_jv;

    /* Update for UnitDelay: '<S339>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_jv = rtb_CastToBoolean3;

    /* End of Outputs for SubSystem: '<S317>/EdgeRising' */

    /* RelationalOperator: '<S317>/Comparison5' incorporates:
     *  RelationalOperator: '<S317>/Comparison4'
     */
    VeCIDB_b_U0415_Pass_tmp = CIDB_ac_B.sf_DiagnosticDebounce_f.Status;

    /* RelationalOperator: '<S317>/Comparison6' incorporates:
     *  RelationalOperator: '<S317>/Comparison3'
     */
    VeCIDB_b_U0415_Pass_tmp_0 = CIDB_ac_B.sf_DiagnosticDebounce_c.Status;

    /* Logic: '<S317>/Logical10' incorporates:
     *  Constant: '<S324>/Calib'
     *  Constant: '<S334>/Calib'
     *  Constant: '<S342>/Constant'
     *  Constant: '<S343>/Constant'
     *  Logic: '<S317>/Logical1'
     *  Logic: '<S317>/Logical13'
     *  Logic: '<S317>/Logical14'
     *  Logic: '<S317>/Logical2'
     *  Logic: '<S317>/Logical9'
     *  RelationalOperator: '<S317>/Comparison5'
     *  RelationalOperator: '<S317>/Comparison6'
     */
    VeCIDB_b_U0415_Pass = ((((!KeCIDB_b_BRAKE_FD_2_FDCAN3_SNA_DiagEnbl) ||
        (((uint32)VeCIDB_b_U0415_Pass_tmp) == CeDFIB_e_Pass)) &&
                            ((!KeCIDB_b_BRAKE_FD_3_FDCAN3_SNA_DiagEnbl) ||
        (((uint32)VeCIDB_b_U0415_Pass_tmp_0) == CeDFIB_e_Pass))) &&
                           ((KeCIDB_b_BRAKE_FD_3_FDCAN3_SNA_DiagEnbl) ||
                            (KeCIDB_b_BRAKE_FD_2_FDCAN3_SNA_DiagEnbl)));

    /* Logic: '<S317>/Logical11' incorporates:
     *  Constant: '<S340>/Constant'
     *  Constant: '<S341>/Constant'
     *  RelationalOperator: '<S317>/Comparison3'
     *  RelationalOperator: '<S317>/Comparison4'
     */
    VeCIDB_b_U0415_Fail = ((((uint32)VeCIDB_b_U0415_Pass_tmp) == CeDFIB_e_Fail) ||
                           (((uint32)VeCIDB_b_U0415_Pass_tmp_0) == CeDFIB_e_Fail));

    /* Outputs for Enabled SubSystem: '<S317>/Subsystem1' incorporates:
     *  EnablePort: '<S345>/Enable'
     */
    if (VeCIDB_b_U0415_Fail)
    {
        /* Constant: '<S348>/Constant' */
        (void)Rte_Write_VeCIDB_e_FaultSts_InvData_ABS_Value(CeDFIB_e_Fail);
    }

    /* End of Outputs for SubSystem: '<S317>/Subsystem1' */

    /* Outputs for Enabled SubSystem: '<S317>/Subsystem' incorporates:
     *  EnablePort: '<S344>/Enable'
     */
    if (VeCIDB_b_U0415_Pass)
    {
        /* Constant: '<S347>/Constant' */
        (void)Rte_Write_VeCIDB_e_FaultSts_InvData_ABS_Value(CeDFIB_e_Pass);
    }

    /* End of Outputs for SubSystem: '<S317>/Subsystem' */

    /* Outputs for Enabled SubSystem: '<S317>/Subsystem2' incorporates:
     *  EnablePort: '<S346>/Enable'
     */
    /* Outputs for Atomic SubSystem: '<S317>/EdgeRising' */
    /* Logic: '<S339>/AND' incorporates:
     *  Constant: '<S349>/Constant'
     */
    if (rtb_CastToBoolean3 && rtb_RelationalOperator3)
    {
        (void)Rte_Write_VeCIDB_e_FaultSts_InvData_ABS_Value(CeDFIB_e_Init);
    }

    /* End of Logic: '<S339>/AND' */
    /* End of Outputs for SubSystem: '<S317>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S317>/Subsystem2' */
}

#endif

/* System initialize for atomic system: '<S156>/U0415_Pegasus_10ms' */
#if Rte_SysCon_Variant_CIDB_U0415_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0415_Pegasus_10ms_Init(void)
{
    /* SystemInitialize for Merge: '<S353>/Merge1' */
    (void)Rte_Write_VeCIDB_e_FaultSts_InvData_ABS_Value(CeDFIB_e_Init);
}

#endif

/* Output and update for atomic system: '<S156>/U0415_Pegasus_10ms' */
#if Rte_SysCon_Variant_CIDB_U0415_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0415_Pegasus_10ms(void)
{
    uint32 rtb_RelationalOperator3_i_tmp;
    TeDFIB_e_FaultDebounceStatus VeCIDB_b_U0415_Pass_tmp;
    TeDFIB_e_FaultDebounceStatus VeCIDB_b_U0415_Pass_tmp_0;
    boolean rtb_AND_kh;
    boolean rtb_CastToBoolean3;
    boolean rtb_RelationalOperator3;

    /* DataTypeConversion: '<S366>/Cast To Boolean3' incorporates:
     *  Constant: '<S352>/Constant'
     *  Constant: '<S374>/Calib'
     *  Logic: '<S352>/Logical Operator'
     *  Logic: '<S352>/Logical Operator2'
     *  S-Function (sfix_bitop): '<S352>/Bitwise AND'
     */
    rtb_CastToBoolean3 = (((CIDB_ac_B.TmpSignalConversionAtVeDFIR_b_IsDiagGlob) &&
                           (KeCIDB_b_U0415_DiagEnbl)) && ((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_LongAccele) & 4U) == 0U));

    /* S-Function (sfix_bitop): '<S357>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S355>/Data Store Read'
     *  S-Function (sfix_bitop): '<S367>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_i_tmp = ((uint32)CIDB_ac_DW.StatusByte_InvData_ABS)
        & 64U;

    /* RelationalOperator: '<S357>/Relational Operator3' incorporates:
     *  Constant: '<S357>/Constant3'
     *  S-Function (sfix_bitop): '<S357>/Bitwise Operator2'
     */
    rtb_RelationalOperator3 = (rtb_RelationalOperator3_i_tmp == 0U);

    /* Logic: '<S356>/Logical1' incorporates:
     *  Constant: '<S356>/Constant Value'
     *  DataTypeConversion: '<S356>/Cast To Boolean'
     *  DataTypeConversion: '<S356>/Cast To Boolean1'
     *  DataTypeConversion: '<S356>/Cast To Boolean2'
     *  S-Function (sfix_bitop): '<S356>/Bitwise Operator'
     *  S-Function (sfix_bitop): '<S356>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S356>/Bitwise Operator2'
     */
    VeCIDB_b_BRAKE_FD_2_FDCAN3_FaultCriteria = ((((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_LongAccele) & 8U) != 0U) ||
        ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_VehicleSpe) & 8U) !=
         0U)) || ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_VehiclSpee)
                   & 8U) != 0U));

    /* Outputs for Atomic SubSystem: '<S357>/EdgeFalling1' */
    /* Logic: '<S363>/AND' incorporates:
     *  Logic: '<S363>/OR1'
     *  UnitDelay: '<S363>/Unit Delay'
     */
    rtb_AND_kh = ((!rtb_RelationalOperator3) && (CIDB_ac_DW.UnitDelay_DSTATE_kn));

    /* Update for UnitDelay: '<S363>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_kn = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S357>/EdgeFalling1' */

    /* Chart: '<S357>/Diagnostic Debounce' incorporates:
     *  Constant: '<S357>/Constant1'
     *  Constant: '<S358>/Calib'
     *  Constant: '<S359>/Calib'
     *  Constant: '<S360>/Calib'
     *  Constant: '<S361>/Calib'
     *  DataStoreRead: '<S355>/Data Store Read'
     *  Logic: '<S357>/Logical Operator'
     *  Logic: '<S357>/Logical Operator1'
     *  Logic: '<S357>/Logical10'
     *  Logic: '<S357>/Logical12'
     *  Logic: '<S357>/Logical5'
     *  RelationalOperator: '<S357>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S357>/Bitwise Operator3'
     */
    CIDB_ac_DiagnosticDebounce_p(((KeCIDB_b_BRAKE_FD_2_FDCAN3_SNA_DiagEnbl) &&
        rtb_CastToBoolean3) && ((!KeCIDB_b_BRAKE_FD_2_FDCAN3_SNA_FailLatchEnable)
        || (((((uint32)CIDB_ac_DW.StatusByte_InvData_ABS) & 1U) == 0U) ||
            (!rtb_RelationalOperator3))),
        VeCIDB_b_BRAKE_FD_2_FDCAN3_FaultCriteria,
        KeCIDB_Cnt_BRAKE_FD_2_FDCAN3_SNA_FailLmt,
        KeCIDB_Cnt_BRAKE_FD_2_FDCAN3_SNAFailINC, rtb_AND_kh || (CIDB_ac_B.OR_c),
        &CIDB_ac_B.sf_DiagnosticDebounce_h);

    /* RelationalOperator: '<S367>/Relational Operator3' incorporates:
     *  Constant: '<S367>/Constant3'
     */
    rtb_RelationalOperator3 = (rtb_RelationalOperator3_i_tmp == 0U);

    /* Logic: '<S366>/Logical1' incorporates:
     *  Constant: '<S366>/Constant Value'
     *  DataTypeConversion: '<S366>/Cast To Boolean'
     *  DataTypeConversion: '<S366>/Cast To Boolean1'
     *  DataTypeConversion: '<S366>/Cast To Boolean2'
     *  DataTypeConversion: '<S366>/Cast To Boolean3'
     *  DataTypeConversion: '<S366>/Cast To Boolean4'
     *  DataTypeConversion: '<S366>/Cast To Boolean5'
     *  DataTypeConversion: '<S366>/Cast To Boolean6'
     *  DataTypeConversion: '<S366>/Cast To Boolean7'
     *  S-Function (sfix_bitop): '<S366>/Bitwise Operator'
     *  S-Function (sfix_bitop): '<S366>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S366>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S366>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S366>/Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S366>/Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S366>/Bitwise Operator6'
     *  S-Function (sfix_bitop): '<S366>/Bitwise Operator7'
     */
    VeCIDB_b_BRAKE_FD_3_FDCAN3_FaultCriteria = (((((((((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_LHF_Spin_F) & 8U) != 0U) ||
        ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_LHFWheelSp) & 8U) !=
         0U)) || ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_LHR_Spin_F)
                   & 8U) != 0U)) || ((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_LHRWheelSp) & 8U) != 0U)) ||
        ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_RHF_Spin_F) & 8U) !=
         0U)) || ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_RHFWheelSp)
                   & 8U) != 0U)) || ((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_RHR_Spin_F) & 8U) != 0U)) ||
        ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_RHRWheelSp) & 8U) !=
         0U));

    /* Outputs for Atomic SubSystem: '<S367>/EdgeFalling1' */
    /* Logic: '<S373>/AND' incorporates:
     *  Logic: '<S373>/OR1'
     *  UnitDelay: '<S373>/Unit Delay'
     */
    rtb_AND_kh = ((!rtb_RelationalOperator3) && (CIDB_ac_DW.UnitDelay_DSTATE_l2));

    /* Update for UnitDelay: '<S373>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_l2 = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S367>/EdgeFalling1' */

    /* Chart: '<S367>/Diagnostic Debounce' incorporates:
     *  Constant: '<S367>/Constant1'
     *  Constant: '<S368>/Calib'
     *  Constant: '<S369>/Calib'
     *  Constant: '<S370>/Calib'
     *  Constant: '<S371>/Calib'
     *  DataStoreRead: '<S365>/Data Store Read'
     *  Logic: '<S367>/Logical Operator'
     *  Logic: '<S367>/Logical Operator1'
     *  Logic: '<S367>/Logical10'
     *  Logic: '<S367>/Logical12'
     *  Logic: '<S367>/Logical5'
     *  RelationalOperator: '<S367>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S367>/Bitwise Operator3'
     */
    CIDB_ac_DiagnosticDebounce_d(((KeCIDB_b_BRAKE_FD_3_FDCAN3_SNA_DiagEnbl) &&
        rtb_CastToBoolean3) && ((!KeCIDB_b_BRAKE_FD_3_FDCAN3_SNA_FailLatchEnable)
        || (((((uint32)CIDB_ac_DW.StatusByte_InvData_ABS) & 1U) == 0U) ||
            (!rtb_RelationalOperator3))),
        VeCIDB_b_BRAKE_FD_3_FDCAN3_FaultCriteria,
        KeCIDB_Cnt_BRAKE_FD_3_FDCAN3_SNA_FailLmt,
        KeCIDB_Cnt_BRAKE_FD_3_FDCAN3_SNAFailINC, rtb_AND_kh || (CIDB_ac_B.OR_c),
        &CIDB_ac_B.sf_DiagnosticDebounce_n);

    /* RelationalOperator: '<S353>/Relational Operator2' incorporates:
     *  Constant: '<S353>/Constant2'
     *  DataStoreRead: '<S353>/StatusByte_InvData_ABS'
     *  S-Function (sfix_bitop): '<S353>/Bitwise Operator1'
     */
    rtb_CastToBoolean3 = ((((sint32)CIDB_ac_DW.StatusByte_InvData_ABS) & 64) ==
                          64);

    /* Outputs for Atomic SubSystem: '<S353>/EdgeRising' */
    /* Logic: '<S375>/OR1' incorporates:
     *  UnitDelay: '<S375>/Unit Delay'
     */
    rtb_RelationalOperator3 = !CIDB_ac_DW.UnitDelay_DSTATE_p3;

    /* Update for UnitDelay: '<S375>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_p3 = rtb_CastToBoolean3;

    /* End of Outputs for SubSystem: '<S353>/EdgeRising' */

    /* RelationalOperator: '<S353>/Comparison5' incorporates:
     *  RelationalOperator: '<S353>/Comparison4'
     */
    VeCIDB_b_U0415_Pass_tmp = CIDB_ac_B.sf_DiagnosticDebounce_h.Status;

    /* RelationalOperator: '<S353>/Comparison6' incorporates:
     *  RelationalOperator: '<S353>/Comparison3'
     */
    VeCIDB_b_U0415_Pass_tmp_0 = CIDB_ac_B.sf_DiagnosticDebounce_n.Status;

    /* Logic: '<S353>/Logical10' incorporates:
     *  Constant: '<S360>/Calib'
     *  Constant: '<S370>/Calib'
     *  Constant: '<S378>/Constant'
     *  Constant: '<S379>/Constant'
     *  Logic: '<S353>/Logical1'
     *  Logic: '<S353>/Logical13'
     *  Logic: '<S353>/Logical14'
     *  Logic: '<S353>/Logical2'
     *  Logic: '<S353>/Logical9'
     *  RelationalOperator: '<S353>/Comparison5'
     *  RelationalOperator: '<S353>/Comparison6'
     */
    VeCIDB_b_U0415_Pass = ((((!KeCIDB_b_BRAKE_FD_2_FDCAN3_SNA_DiagEnbl) ||
        (((uint32)VeCIDB_b_U0415_Pass_tmp) == CeDFIB_e_Pass)) &&
                            ((!KeCIDB_b_BRAKE_FD_3_FDCAN3_SNA_DiagEnbl) ||
        (((uint32)VeCIDB_b_U0415_Pass_tmp_0) == CeDFIB_e_Pass))) &&
                           ((KeCIDB_b_BRAKE_FD_3_FDCAN3_SNA_DiagEnbl) ||
                            (KeCIDB_b_BRAKE_FD_2_FDCAN3_SNA_DiagEnbl)));

    /* Logic: '<S353>/Logical11' incorporates:
     *  Constant: '<S376>/Constant'
     *  Constant: '<S377>/Constant'
     *  RelationalOperator: '<S353>/Comparison3'
     *  RelationalOperator: '<S353>/Comparison4'
     */
    VeCIDB_b_U0415_Fail = ((((uint32)VeCIDB_b_U0415_Pass_tmp) == CeDFIB_e_Fail) ||
                           (((uint32)VeCIDB_b_U0415_Pass_tmp_0) == CeDFIB_e_Fail));

    /* Outputs for Enabled SubSystem: '<S353>/Subsystem1' incorporates:
     *  EnablePort: '<S381>/Enable'
     */
    if (VeCIDB_b_U0415_Fail)
    {
        /* Constant: '<S384>/Constant' */
        (void)Rte_Write_VeCIDB_e_FaultSts_InvData_ABS_Value(CeDFIB_e_Fail);
    }

    /* End of Outputs for SubSystem: '<S353>/Subsystem1' */

    /* Outputs for Enabled SubSystem: '<S353>/Subsystem' incorporates:
     *  EnablePort: '<S380>/Enable'
     */
    if (VeCIDB_b_U0415_Pass)
    {
        /* Constant: '<S383>/Constant' */
        (void)Rte_Write_VeCIDB_e_FaultSts_InvData_ABS_Value(CeDFIB_e_Pass);
    }

    /* End of Outputs for SubSystem: '<S353>/Subsystem' */

    /* Outputs for Enabled SubSystem: '<S353>/Subsystem2' incorporates:
     *  EnablePort: '<S382>/Enable'
     */
    /* Outputs for Atomic SubSystem: '<S353>/EdgeRising' */
    /* Logic: '<S375>/AND' incorporates:
     *  Constant: '<S385>/Constant'
     */
    if (rtb_CastToBoolean3 && rtb_RelationalOperator3)
    {
        (void)Rte_Write_VeCIDB_e_FaultSts_InvData_ABS_Value(CeDFIB_e_Init);
    }

    /* End of Logic: '<S375>/AND' */
    /* End of Outputs for SubSystem: '<S353>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S353>/Subsystem2' */
}

#endif

/*
 * Output and update for atomic system:
 *    '<S395>/Diagnostic Debounce'
 *    '<S424>/Diagnostic Debounce'
 *    '<S453>/Diagnostic Debounce'
 */
#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_DiagnosticDebounce_n(VAR(boolean,
    AUTOMATIC) rtu_EnDiag, VAR(boolean, AUTOMATIC) rtu_Err, VAR(uint16,
    AUTOMATIC) rtu_FThr, VAR(uint8, AUTOMATIC) rtu_FInc, VAR(boolean, AUTOMATIC)
    rtu_Reset, P2VAR(B_DiagnosticDebounce_CIDB_ac_a_T, AUTOMATIC, CIDB_VAR_INIT)
    localB)
{
    sint32 tmp;

    /* Chart: '<S395>/Diagnostic Debounce' */
    /* Gateway: DiagnosticDebounceimplausibleSignalSNA/Diagnostic Debounce */
    /* During: DiagnosticDebounceimplausibleSignalSNA/Diagnostic Debounce */
    /* Entry Internal: DiagnosticDebounceimplausibleSignalSNA/Diagnostic Debounce */
    /* Transition: '<S400>:499' */
    VeCIDB_b_BCM_FD_2_Fail = false;
    VeCIDB_b_BCM_FD_2_Pass = false;
    if (rtu_Reset)
    {
        /* Transition: '<S400>:500' */
        /* Transition: '<S400>:502' */
        localB->Status = CeDFIB_e_Init;
        VeCIDB_Cnt_BCM_FD_2_Fail = 0U;
        VeCIDB_Cnt_BCM_FD_2_Init = 0U;

        /* Transition: '<S400>:505' */
        /* Transition: '<S400>:533' */
        /* Transition: '<S400>:545' */
        /* Transition: '<S400>:546' */
    }
    else
    {
        /* Transition: '<S400>:501' */
        if (rtu_EnDiag)
        {
            /* Transition: '<S400>:504' */
            if (((uint32)localB->Status) == CeDFIB_e_Init)
            {
                /* Transition: '<S400>:507' */
                if (!rtu_Err)
                {
                    /* Transition: '<S400>:506' */
                    /* Transition: '<S400>:509' */
                    tmp = ((sint32)VeCIDB_Cnt_BCM_FD_2_Init) + ((sint32)rtu_FInc);
                    if (tmp > 65535)
                    {
                        tmp = 65535;
                    }

                    VeCIDB_Cnt_BCM_FD_2_Init = (uint16)tmp;
                    if (VeCIDB_Cnt_BCM_FD_2_Init >= rtu_FThr)
                    {
                        /* Transition: '<S400>:511' */
                        /* Transition: '<S400>:513' */
                        localB->Status = CeDFIB_e_Pass;
                        VeCIDB_b_BCM_FD_2_Pass = true;

                        /* Transition: '<S400>:516' */
                    }
                    else
                    {
                        /* Transition: '<S400>:512' */
                    }

                    /* Transition: '<S400>:515' */
                }
                else
                {
                    /* Transition: '<S400>:508' */
                    VeCIDB_Cnt_BCM_FD_2_Init = 0U;
                }

                /* Transition: '<S400>:514' */
            }
            else
            {
                /* Transition: '<S400>:510' */
            }

            /* Transition: '<S400>:517' */
            if ((((((uint32)localB->Status) == CeDFIB_e_Pass) || (((uint32)
                    localB->Status) == CeDFIB_e_Pass_FaultRemoved)) || (((uint32)
                    localB->Status) == CeDFIB_e_Pass_FaultFiltering)) ||
                    (((uint32)localB->Status) == CeDFIB_e_Init))
            {
                /* Transition: '<S400>:518' */
                if (rtu_Err)
                {
                    /* Transition: '<S400>:519' */
                    /* Transition: '<S400>:522' */
                    tmp = ((sint32)VeCIDB_Cnt_BCM_FD_2_Fail) + ((sint32)rtu_FInc);
                    if (tmp > 65535)
                    {
                        tmp = 65535;
                    }

                    VeCIDB_Cnt_BCM_FD_2_Fail = (uint16)tmp;
                    if (VeCIDB_Cnt_BCM_FD_2_Fail > rtu_FThr)
                    {
                        /* Transition: '<S400>:524' */
                        /* Transition: '<S400>:528' */
                        localB->Status = CeDFIB_e_Fail;
                        VeCIDB_b_BCM_FD_2_Fail = true;
                        VeCIDB_Cnt_BCM_FD_2_Fail = (uint16)((sint32)(((sint32)
                            rtu_FThr) + 1));
                    }
                    else
                    {
                        /* Transition: '<S400>:557' */
                        if (((uint32)localB->Status) != CeDFIB_e_Init)
                        {
                            /* Transition: '<S400>:563' */
                            localB->Status = CeDFIB_e_Pass_FaultFiltering;

                            /* Transition: '<S400>:564' */
                            /* Transition: '<S400>:562' */
                        }
                        else
                        {
                            /* Transition: '<S400>:559' */
                            /* Transition: '<S400>:561' */
                            /* Transition: '<S400>:562' */
                        }
                    }
                }
                else
                {
                    /* Transition: '<S400>:521' */
                    if (((sint32)VeCIDB_Cnt_BCM_FD_2_Fail) > 0)
                    {
                        /* Transition: '<S400>:523' */
                        /* Transition: '<S400>:567' */
                        tmp = ((sint32)VeCIDB_Cnt_BCM_FD_2_Fail) - 1;
                        if ((((sint32)VeCIDB_Cnt_BCM_FD_2_Fail) - 1) < 0)
                        {
                            tmp = 0;
                        }

                        VeCIDB_Cnt_BCM_FD_2_Fail = (uint16)tmp;
                        if (((uint32)localB->Status) != CeDFIB_e_Init)
                        {
                            /* Transition: '<S400>:574' */
                            localB->Status = CeDFIB_e_Pass_FaultRemoved;

                            /* Transition: '<S400>:569' */
                        }
                        else
                        {
                            /* Transition: '<S400>:572' */
                            /* Transition: '<S400>:573' */
                        }
                    }
                    else
                    {
                        /* Transition: '<S400>:577' */
                        if (((uint32)localB->Status) != CeDFIB_e_Init)
                        {
                            /* Transition: '<S400>:582' */
                            localB->Status = CeDFIB_e_Pass;

                            /* Transition: '<S400>:581' */
                        }
                        else
                        {
                            /* Transition: '<S400>:579' */
                            /* Transition: '<S400>:580' */
                        }

                        /* Transition: '<S400>:583' */
                        /* Transition: '<S400>:569' */
                    }

                    /* Transition: '<S400>:570' */
                    /* Transition: '<S400>:564' */
                    /* Transition: '<S400>:562' */
                }

                /* Transition: '<S400>:532' */
                /* Transition: '<S400>:533' */
                /* Transition: '<S400>:545' */
                /* Transition: '<S400>:546' */
            }
            else
            {
                /* Transition: '<S400>:520' */
                if ((((uint32)localB->Status) == CeDFIB_e_Fail) || (((uint32)
                        localB->Status) == CeDFIB_e_Fail_FaultRemoved))
                {
                    /* Transition: '<S400>:534' */
                    if (rtu_Err)
                    {
                        /* Transition: '<S400>:535' */
                        /* Transition: '<S400>:538' */
                        tmp = ((sint32)rtu_FThr) + 1;
                        if ((((sint32)rtu_FThr) + 1) > 65535)
                        {
                            tmp = 65535;
                        }

                        VeCIDB_Cnt_BCM_FD_2_Fail = (uint16)tmp;
                        localB->Status = CeDFIB_e_Fail;
                    }
                    else
                    {
                        /* Transition: '<S400>:537' */
                        tmp = ((sint32)VeCIDB_Cnt_BCM_FD_2_Fail) - 1;
                        if ((((sint32)VeCIDB_Cnt_BCM_FD_2_Fail) - 1) < 0)
                        {
                            tmp = 0;
                        }

                        VeCIDB_Cnt_BCM_FD_2_Fail = (uint16)tmp;
                        if (((sint32)VeCIDB_Cnt_BCM_FD_2_Fail) <= 0)
                        {
                            /* Transition: '<S400>:539' */
                            /* Transition: '<S400>:541' */
                            localB->Status = CeDFIB_e_Pass;
                            VeCIDB_b_BCM_FD_2_Pass = true;
                        }
                        else
                        {
                            /* Transition: '<S400>:540' */
                            localB->Status = CeDFIB_e_Fail_FaultRemoved;

                            /* Transition: '<S400>:542' */
                        }

                        /* Transition: '<S400>:543' */
                    }

                    /* Transition: '<S400>:544' */
                    /* Transition: '<S400>:545' */
                    /* Transition: '<S400>:546' */
                }
                else
                {
                    /* Transition: '<S400>:536' */
                }
            }
        }
        else
        {
            /* Transition: '<S400>:503' */
            /* Transition: '<S400>:505' */
            /* Transition: '<S400>:533' */
            /* Transition: '<S400>:545' */
            /* Transition: '<S400>:546' */
        }
    }

    /* End of Chart: '<S395>/Diagnostic Debounce' */
    /* Transition: '<S400>:547' */
}

#endif

/* System initialize for atomic system: '<S157>/U0422_BLUEN_10ms' */
#if Rte_SysCon_Variant_CIDB_U0422_BLUEN

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0422_BLUEN_10ms_Init(void)
{
    /* SystemInitialize for Outport: '<Root>/VeCIDB_e_FaultSts_InvData_BCM' incorporates:
     *  Merge: '<S390>/Merge1'
     */
    (void)Rte_Write_VeCIDB_e_FaultSts_InvData_BCM_Value(CeDFIB_e_Init);
}

#endif

/* Output and update for atomic system: '<S157>/U0422_BLUEN_10ms' */
#if Rte_SysCon_Variant_CIDB_U0422_BLUEN

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0422_BLUEN_10ms(void)
{
    TeDFIB_e_FaultDebounceStatus VeCIDB_b_U0422_Fail_tmp;
    uint8 tmpRead;
    boolean rtb_AND_cp;
    boolean rtb_RelationalOperator3;

    /* Inport: '<Root>/VeSR1B_y_OperationalModeSts_FD3_SigSts' */
    (void)Rte_Read_VeSR1B_y_OperationalModeSts_FD3_SigSts_Value(&tmpRead);

    /* VariantMerge generated from: '<S157>/VeCIDB_b_U0422_DiagEnbl' incorporates:
     *  Constant: '<S391>/Constant'
     *  Constant: '<S417>/Calib'
     *  Logic: '<S391>/Logical Operator'
     *  Logic: '<S391>/Logical Operator2'
     *  S-Function (sfix_bitop): '<S391>/Bitwise AND'
     */
    CIDB_ac_B.VariantMergeForOutportVeCIDB_b_U0422_Dia =
        (((CIDB_ac_B.TmpSignalConversionAtVeDFIR_b_IsDiagGlob) &&
          (KeCIDB_b_U0422_DiagEnbl)) && ((((uint32)
            CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_KeyInIgnSt) & 4U) == 0U));

    /* RelationalOperator: '<S395>/Relational Operator3' incorporates:
     *  Constant: '<S395>/Constant3'
     *  DataStoreRead: '<S393>/Data Store Read'
     *  S-Function (sfix_bitop): '<S395>/Bitwise Operator2'
     */
    rtb_RelationalOperator3 = ((((uint32)CIDB_ac_DW.StatusByte_InvData_BCM) &
        64U) == 0U);

    /* Logic: '<S394>/Logical1' incorporates:
     *  Constant: '<S394>/Constant Value'
     *  DataTypeConversion: '<S394>/Cast To Boolean'
     *  DataTypeConversion: '<S394>/Cast To Boolean1'
     *  S-Function (sfix_bitop): '<S394>/Bitwise Operator'
     *  S-Function (sfix_bitop): '<S394>/Bitwise Operator1'
     */
    VeCIDB_b_BCM_FD_2_FaultCriteria = (((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_KeyInIgnSt) & 8U) != 0U) ||
        ((((uint32)tmpRead) & 8U) != 0U));

    /* Outputs for Atomic SubSystem: '<S395>/EdgeFalling1' */
    /* Logic: '<S401>/AND' incorporates:
     *  Logic: '<S401>/OR1'
     *  UnitDelay: '<S401>/Unit Delay'
     */
    rtb_AND_cp = ((!rtb_RelationalOperator3) && (CIDB_ac_DW.UnitDelay_DSTATE_nk));

    /* Update for UnitDelay: '<S401>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_nk = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S395>/EdgeFalling1' */

    /* Chart: '<S395>/Diagnostic Debounce' incorporates:
     *  Constant: '<S395>/Constant1'
     *  Constant: '<S396>/Calib'
     *  Constant: '<S397>/Calib'
     *  Constant: '<S398>/Calib'
     *  Constant: '<S399>/Calib'
     *  DataStoreRead: '<S393>/Data Store Read'
     *  Logic: '<S395>/Logical Operator'
     *  Logic: '<S395>/Logical Operator1'
     *  Logic: '<S395>/Logical10'
     *  Logic: '<S395>/Logical12'
     *  Logic: '<S395>/Logical5'
     *  RelationalOperator: '<S395>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S395>/Bitwise Operator3'
     */
    CIDB_ac_DiagnosticDebounce_n(((KeCIDB_b_BCM_FD_2_ePT_SNA_DiagEnbl) &&
        (CIDB_ac_B.VariantMergeForOutportVeCIDB_b_U0422_Dia)) &&
        ((!KeCIDB_b_BCM_FD_2_ePT_SNA_FailLatchEnable) || (((((uint32)
        CIDB_ac_DW.StatusByte_InvData_BCM) & 1U) == 0U) ||
        (!rtb_RelationalOperator3))), VeCIDB_b_BCM_FD_2_FaultCriteria,
        KeCIDB_Cnt_BCM_FD_2_ePT_SNA_FailLmt, KeCIDB_Cnt_BCM_FD_2_ePT_SNAFailINC,
        rtb_AND_cp || (CIDB_ac_B.OR_c), &CIDB_ac_B.sf_DiagnosticDebounce_nh);

    /* RelationalOperator: '<S390>/Relational Operator2' incorporates:
     *  Constant: '<S390>/Constant2'
     *  DataStoreRead: '<S390>/StatusByte_InvData_IDCM'
     *  S-Function (sfix_bitop): '<S390>/Bitwise Operator1'
     */
    rtb_RelationalOperator3 = ((((sint32)CIDB_ac_DW.StatusByte_InvData_BCM) & 64)
        == 64);

    /* Outputs for Atomic SubSystem: '<S390>/EdgeRising' */
    /* Logic: '<S402>/OR1' incorporates:
     *  UnitDelay: '<S402>/Unit Delay'
     */
    rtb_AND_cp = !CIDB_ac_DW.UnitDelay_DSTATE_jt;

    /* Update for UnitDelay: '<S402>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_jt = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S390>/EdgeRising' */

    /* RelationalOperator: '<S390>/Comparison4' incorporates:
     *  RelationalOperator: '<S390>/Comparison_4'
     */
    VeCIDB_b_U0422_Fail_tmp = CIDB_ac_B.sf_DiagnosticDebounce_nh.Status;

    /* Logic: '<S390>/Logical' incorporates:
     *  Constant: '<S403>/Constant'
     *  Constant: '<S404>/Constant'
     *  Constant: '<S405>/Constant'
     *  Constant: '<S406>/Constant'
     *  RelationalOperator: '<S390>/Comparison'
     *  RelationalOperator: '<S390>/Comparison1'
     *  RelationalOperator: '<S390>/Comparison4'
     *  RelationalOperator: '<S390>/Comparison6'
     */
    VeCIDB_b_U0422_Fail = ((((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCIDB_e_BCM_FD_1_b) == CeDFIB_e_Fail) ||
        (((uint32)CIDB_ac_B.TmpSignalConversionAtVeCIDB_e_BCM_FD_1_j) ==
         CeDFIB_e_Fail)) || (((uint32)VeCIDB_b_U0422_Fail_tmp) == CeDFIB_e_Fail))
                           || (((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCIDB_e_BCM_FD_9_d) == CeDFIB_e_Fail));

    /* Logic: '<S390>/Logical1' incorporates:
     *  Constant: '<S398>/Calib'
     *  Constant: '<S407>/Constant'
     *  Constant: '<S408>/Constant'
     *  Constant: '<S409>/Constant'
     *  Constant: '<S410>/Constant'
     *  Logic: '<S390>/Logical2'
     *  Logic: '<S390>/LogicalNot'
     *  Logic: '<S390>/LogicalNot1'
     *  Logic: '<S390>/LogicalNot4'
     *  Logic: '<S390>/LogicalNot6'
     *  Logic: '<S390>/LogicalOR'
     *  Logic: '<S390>/LogicalOR1'
     *  Logic: '<S390>/LogicalOR4'
     *  Logic: '<S390>/LogicalOR6'
     *  RelationalOperator: '<S390>/Comparison_'
     *  RelationalOperator: '<S390>/Comparison_1'
     *  RelationalOperator: '<S390>/Comparison_4'
     *  RelationalOperator: '<S390>/Comparison_6'
     */
    VeCIDB_b_U0422_Pass =
        ((((((!CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_BCM_FD_1_o) || (((uint32)
               CIDB_ac_B.TmpSignalConversionAtVeCIDB_e_BCM_FD_1_b) ==
              CeDFIB_e_Pass)) &&
            ((!CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_BCM_FD_1_h) || (((uint32)
               CIDB_ac_B.TmpSignalConversionAtVeCIDB_e_BCM_FD_1_j) ==
              CeDFIB_e_Pass))) && ((!KeCIDB_b_BCM_FD_2_ePT_SNA_DiagEnbl) ||
            (((uint32)VeCIDB_b_U0422_Fail_tmp) == CeDFIB_e_Pass))) &&
          ((!CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_BCM_FD_9_k) || (((uint32)
             CIDB_ac_B.TmpSignalConversionAtVeCIDB_e_BCM_FD_9_d) ==
            CeDFIB_e_Pass))) &&
         ((((CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_BCM_FD_1_o) ||
            (CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_BCM_FD_1_h)) ||
           (KeCIDB_b_BCM_FD_2_ePT_SNA_DiagEnbl)) ||
          (CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_BCM_FD_9_k)));

    /* Outputs for Enabled SubSystem: '<S390>/Subsystem1' incorporates:
     *  EnablePort: '<S412>/Enable'
     */
    if (VeCIDB_b_U0422_Fail)
    {
        /* Outport: '<Root>/VeCIDB_e_FaultSts_InvData_BCM' incorporates:
         *  Constant: '<S415>/Constant'
         */
        (void)Rte_Write_VeCIDB_e_FaultSts_InvData_BCM_Value(CeDFIB_e_Fail);
    }

    /* End of Outputs for SubSystem: '<S390>/Subsystem1' */

    /* Outputs for Enabled SubSystem: '<S390>/Subsystem' incorporates:
     *  EnablePort: '<S411>/Enable'
     */
    if (VeCIDB_b_U0422_Pass)
    {
        /* Outport: '<Root>/VeCIDB_e_FaultSts_InvData_BCM' incorporates:
         *  Constant: '<S414>/Constant'
         */
        (void)Rte_Write_VeCIDB_e_FaultSts_InvData_BCM_Value(CeDFIB_e_Pass);
    }

    /* End of Outputs for SubSystem: '<S390>/Subsystem' */

    /* Outputs for Enabled SubSystem: '<S390>/Subsystem2' incorporates:
     *  EnablePort: '<S413>/Enable'
     */
    /* Outputs for Atomic SubSystem: '<S390>/EdgeRising' */
    /* Logic: '<S402>/AND' */
    if (rtb_RelationalOperator3 && rtb_AND_cp)
    {
        /* Outport: '<Root>/VeCIDB_e_FaultSts_InvData_BCM' incorporates:
         *  Constant: '<S416>/Constant'
         */
        (void)Rte_Write_VeCIDB_e_FaultSts_InvData_BCM_Value(CeDFIB_e_Init);
    }

    /* End of Logic: '<S402>/AND' */
    /* End of Outputs for SubSystem: '<S390>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S390>/Subsystem2' */
}

#endif

/* System initialize for atomic system: '<S157>/U0422_COREBEV_10ms' */
#if Rte_SysCon_Variant_CIDB_U0422_Corebev

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0422_COREBEV_10ms_Init(void)
{
    /* SystemInitialize for Merge: '<S420>/Merge1' */
    (void)Rte_Write_VeCIDB_e_FaultSts_InvData_BCM_Value(CeDFIB_e_Init);
}

#endif

/* Output and update for atomic system: '<S157>/U0422_COREBEV_10ms' */
#if Rte_SysCon_Variant_CIDB_U0422_Corebev

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0422_COREBEV_10ms(void)
{
    TeDFIB_e_FaultDebounceStatus VeCIDB_b_U0422_Pass_tmp;
    boolean rtb_AND_el;
    boolean rtb_RelationalOperator3;

    /* Logic: '<S419>/Logical Operator' incorporates:
     *  Constant: '<S419>/Constant'
     *  Constant: '<S431>/Calib'
     *  Logic: '<S419>/Logical Operator2'
     *  S-Function (sfix_bitop): '<S419>/Bitwise AND'
     */
    CIDB_ac_B.VariantMergeForOutportVeCIDB_b_U0422_Dia =
        (((CIDB_ac_B.TmpSignalConversionAtVeDFIR_b_IsDiagGlob) &&
          (KeCIDB_b_U0422_DiagEnbl)) && ((((uint32)
            CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_KeyInIgnSt) & 4U) == 0U));

    /* RelationalOperator: '<S424>/Relational Operator3' incorporates:
     *  Constant: '<S424>/Constant3'
     *  DataStoreRead: '<S422>/Data Store Read'
     *  S-Function (sfix_bitop): '<S424>/Bitwise Operator2'
     */
    rtb_RelationalOperator3 = ((((uint32)CIDB_ac_DW.StatusByte_InvData_BCM) &
        64U) == 0U);

    /* Logic: '<S423>/Logical1' incorporates:
     *  Constant: '<S423>/Constant Value'
     *  DataTypeConversion: '<S423>/Cast To Boolean'
     *  DataTypeConversion: '<S423>/Cast To Boolean1'
     *  S-Function (sfix_bitop): '<S423>/Bitwise Operator'
     *  S-Function (sfix_bitop): '<S423>/Bitwise Operator1'
     */
    VeCIDB_b_BCM_FD_2_FaultCriteria = (((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_KeyInIgnSt) & 8U) != 0U) ||
        ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_Operationa) & 8U) !=
         0U));

    /* Outputs for Atomic SubSystem: '<S424>/EdgeFalling1' */
    /* Logic: '<S430>/AND' incorporates:
     *  Logic: '<S430>/OR1'
     *  UnitDelay: '<S430>/Unit Delay'
     */
    rtb_AND_el = ((!rtb_RelationalOperator3) && (CIDB_ac_DW.UnitDelay_DSTATE_ku));

    /* Update for UnitDelay: '<S430>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_ku = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S424>/EdgeFalling1' */

    /* Chart: '<S424>/Diagnostic Debounce' incorporates:
     *  Constant: '<S424>/Constant1'
     *  Constant: '<S425>/Calib'
     *  Constant: '<S426>/Calib'
     *  Constant: '<S427>/Calib'
     *  Constant: '<S428>/Calib'
     *  DataStoreRead: '<S422>/Data Store Read'
     *  Logic: '<S424>/Logical Operator'
     *  Logic: '<S424>/Logical Operator1'
     *  Logic: '<S424>/Logical10'
     *  Logic: '<S424>/Logical12'
     *  Logic: '<S424>/Logical5'
     *  RelationalOperator: '<S424>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S424>/Bitwise Operator3'
     */
    CIDB_ac_DiagnosticDebounce_n(((KeCIDB_b_BCM_FD_2_ePT_SNA_DiagEnbl) &&
        (CIDB_ac_B.VariantMergeForOutportVeCIDB_b_U0422_Dia)) &&
        ((!KeCIDB_b_BCM_FD_2_ePT_SNA_FailLatchEnable) || (((((uint32)
        CIDB_ac_DW.StatusByte_InvData_BCM) & 1U) == 0U) ||
        (!rtb_RelationalOperator3))), VeCIDB_b_BCM_FD_2_FaultCriteria,
        KeCIDB_Cnt_BCM_FD_2_ePT_SNA_FailLmt, KeCIDB_Cnt_BCM_FD_2_ePT_SNAFailINC,
        rtb_AND_el || (CIDB_ac_B.OR_c), &CIDB_ac_B.sf_DiagnosticDebounce_ma);

    /* RelationalOperator: '<S420>/Relational Operator2' incorporates:
     *  Constant: '<S420>/Constant2'
     *  DataStoreRead: '<S420>/StatusByte_InvData_IDCM'
     *  S-Function (sfix_bitop): '<S420>/Bitwise Operator1'
     */
    rtb_RelationalOperator3 = ((((sint32)CIDB_ac_DW.StatusByte_InvData_BCM) & 64)
        == 64);

    /* Outputs for Atomic SubSystem: '<S420>/EdgeRising' */
    /* Logic: '<S432>/OR1' incorporates:
     *  UnitDelay: '<S432>/Unit Delay'
     */
    rtb_AND_el = !CIDB_ac_DW.UnitDelay_DSTATE_pp;

    /* Update for UnitDelay: '<S432>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_pp = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S420>/EdgeRising' */

    /* RelationalOperator: '<S420>/Comparison5' incorporates:
     *  RelationalOperator: '<S420>/Comparison4'
     */
    VeCIDB_b_U0422_Pass_tmp = CIDB_ac_B.sf_DiagnosticDebounce_ma.Status;

    /* Logic: '<S420>/Logical10' incorporates:
     *  Constant: '<S427>/Calib'
     *  Constant: '<S437>/Constant'
     *  Constant: '<S438>/Constant'
     *  Constant: '<S439>/Constant'
     *  Constant: '<S440>/Constant'
     *  Logic: '<S420>/Logical1'
     *  Logic: '<S420>/Logical11'
     *  Logic: '<S420>/Logical3'
     *  Logic: '<S420>/Logical4'
     *  Logic: '<S420>/Logical5'
     *  Logic: '<S420>/Logical6'
     *  Logic: '<S420>/Logical7'
     *  Logic: '<S420>/Logical8'
     *  Logic: '<S420>/Logical9'
     *  RelationalOperator: '<S420>/Comparison5'
     *  RelationalOperator: '<S420>/Comparison6'
     *  RelationalOperator: '<S420>/Comparison7'
     *  RelationalOperator: '<S420>/Comparison8'
     */
    VeCIDB_b_U0422_Pass = ((((((!KeCIDB_b_BCM_FD_2_ePT_SNA_DiagEnbl) ||
        (((uint32)VeCIDB_b_U0422_Pass_tmp) == CeDFIB_e_Pass)) &&
        ((!CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_BCM_FD_9_k) || (((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCIDB_e_BCM_FD_9_d) == CeDFIB_e_Pass))) &&
        ((!CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_BCM_FD_1_o) || (((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCIDB_e_BCM_FD_1_b) == CeDFIB_e_Pass))) &&
                            ((!CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_BCM_FD_1_h)
        || (((uint32)CIDB_ac_B.TmpSignalConversionAtVeCIDB_e_BCM_FD_1_j) ==
            CeDFIB_e_Pass))) && ((((KeCIDB_b_BCM_FD_2_ePT_SNA_DiagEnbl) ||
        (CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_BCM_FD_9_k)) ||
        (CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_BCM_FD_1_o)) ||
                            (CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_BCM_FD_1_h)));

    /* Logic: '<S420>/Logical2' incorporates:
     *  Constant: '<S433>/Constant'
     *  Constant: '<S434>/Constant'
     *  Constant: '<S435>/Constant'
     *  Constant: '<S436>/Constant'
     *  RelationalOperator: '<S420>/Comparison1'
     *  RelationalOperator: '<S420>/Comparison2'
     *  RelationalOperator: '<S420>/Comparison3'
     *  RelationalOperator: '<S420>/Comparison4'
     */
    VeCIDB_b_U0422_Fail = ((((((uint32)VeCIDB_b_U0422_Pass_tmp) == CeDFIB_e_Fail)
        || (((uint32)CIDB_ac_B.TmpSignalConversionAtVeCIDB_e_BCM_FD_9_d) ==
            CeDFIB_e_Fail)) || (((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCIDB_e_BCM_FD_1_b) == CeDFIB_e_Fail)) ||
                           (((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCIDB_e_BCM_FD_1_j) == CeDFIB_e_Fail));

    /* Outputs for Enabled SubSystem: '<S420>/Subsystem1' incorporates:
     *  EnablePort: '<S442>/Enable'
     */
    if (VeCIDB_b_U0422_Fail)
    {
        /* Constant: '<S445>/Constant' */
        (void)Rte_Write_VeCIDB_e_FaultSts_InvData_BCM_Value(CeDFIB_e_Fail);
    }

    /* End of Outputs for SubSystem: '<S420>/Subsystem1' */

    /* Outputs for Enabled SubSystem: '<S420>/Subsystem' incorporates:
     *  EnablePort: '<S441>/Enable'
     */
    if (VeCIDB_b_U0422_Pass)
    {
        /* Constant: '<S444>/Constant' */
        (void)Rte_Write_VeCIDB_e_FaultSts_InvData_BCM_Value(CeDFIB_e_Pass);
    }

    /* End of Outputs for SubSystem: '<S420>/Subsystem' */

    /* Outputs for Enabled SubSystem: '<S420>/Subsystem2' incorporates:
     *  EnablePort: '<S443>/Enable'
     */
    /* Outputs for Atomic SubSystem: '<S420>/EdgeRising' */
    /* Logic: '<S432>/AND' incorporates:
     *  Constant: '<S446>/Constant'
     */
    if (rtb_RelationalOperator3 && rtb_AND_el)
    {
        (void)Rte_Write_VeCIDB_e_FaultSts_InvData_BCM_Value(CeDFIB_e_Init);
    }

    /* End of Logic: '<S432>/AND' */
    /* End of Outputs for SubSystem: '<S420>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S420>/Subsystem2' */
}

#endif

/* System initialize for atomic system: '<S157>/U0422_Pegasus_10ms' */
#if Rte_SysCon_Variant_CIDB_U0422_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0422_Pegasus_10ms_Init(void)
{
    /* SystemInitialize for Merge: '<S449>/Merge1' */
    (void)Rte_Write_VeCIDB_e_FaultSts_InvData_BCM_Value(CeDFIB_e_Init);
}

#endif

/* Output and update for atomic system: '<S157>/U0422_Pegasus_10ms' */
#if Rte_SysCon_Variant_CIDB_U0422_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0422_Pegasus_10ms(void)
{
    TeDFIB_e_FaultDebounceStatus VeCIDB_b_U0422_Pass_tmp;
    boolean rtb_AND_h4;
    boolean rtb_RelationalOperator3;

    /* Logic: '<S448>/Logical Operator' incorporates:
     *  Constant: '<S448>/Constant'
     *  Constant: '<S460>/Calib'
     *  Logic: '<S448>/Logical Operator2'
     *  S-Function (sfix_bitop): '<S448>/Bitwise AND'
     */
    CIDB_ac_B.VariantMergeForOutportVeCIDB_b_U0422_Dia =
        (((CIDB_ac_B.TmpSignalConversionAtVeDFIR_b_IsDiagGlob) &&
          (KeCIDB_b_U0422_DiagEnbl)) && ((((uint32)
            CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_KeyInIgnSt) & 4U) == 0U));

    /* RelationalOperator: '<S453>/Relational Operator3' incorporates:
     *  Constant: '<S453>/Constant3'
     *  DataStoreRead: '<S451>/Data Store Read'
     *  S-Function (sfix_bitop): '<S453>/Bitwise Operator2'
     */
    rtb_RelationalOperator3 = ((((uint32)CIDB_ac_DW.StatusByte_InvData_BCM) &
        64U) == 0U);

    /* Logic: '<S452>/Logical1' incorporates:
     *  Constant: '<S452>/Constant Value'
     *  DataTypeConversion: '<S452>/Cast To Boolean'
     *  DataTypeConversion: '<S452>/Cast To Boolean1'
     *  S-Function (sfix_bitop): '<S452>/Bitwise Operator'
     *  S-Function (sfix_bitop): '<S452>/Bitwise Operator1'
     */
    VeCIDB_b_BCM_FD_2_FaultCriteria = (((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_KeyInIgnSt) & 8U) != 0U) ||
        ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_Operationa) & 8U) !=
         0U));

    /* Outputs for Atomic SubSystem: '<S453>/EdgeFalling1' */
    /* Logic: '<S459>/AND' incorporates:
     *  Logic: '<S459>/OR1'
     *  UnitDelay: '<S459>/Unit Delay'
     */
    rtb_AND_h4 = ((!rtb_RelationalOperator3) && (CIDB_ac_DW.UnitDelay_DSTATE_b));

    /* Update for UnitDelay: '<S459>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_b = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S453>/EdgeFalling1' */

    /* Chart: '<S453>/Diagnostic Debounce' incorporates:
     *  Constant: '<S453>/Constant1'
     *  Constant: '<S454>/Calib'
     *  Constant: '<S455>/Calib'
     *  Constant: '<S456>/Calib'
     *  Constant: '<S457>/Calib'
     *  DataStoreRead: '<S451>/Data Store Read'
     *  Logic: '<S453>/Logical Operator'
     *  Logic: '<S453>/Logical Operator1'
     *  Logic: '<S453>/Logical10'
     *  Logic: '<S453>/Logical12'
     *  Logic: '<S453>/Logical5'
     *  RelationalOperator: '<S453>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S453>/Bitwise Operator3'
     */
    CIDB_ac_DiagnosticDebounce_n(((KeCIDB_b_BCM_FD_2_ePT_SNA_DiagEnbl) &&
        (CIDB_ac_B.VariantMergeForOutportVeCIDB_b_U0422_Dia)) &&
        ((!KeCIDB_b_BCM_FD_2_ePT_SNA_FailLatchEnable) || (((((uint32)
        CIDB_ac_DW.StatusByte_InvData_BCM) & 1U) == 0U) ||
        (!rtb_RelationalOperator3))), VeCIDB_b_BCM_FD_2_FaultCriteria,
        KeCIDB_Cnt_BCM_FD_2_ePT_SNA_FailLmt, KeCIDB_Cnt_BCM_FD_2_ePT_SNAFailINC,
        rtb_AND_h4 || (CIDB_ac_B.OR_c), &CIDB_ac_B.sf_DiagnosticDebounce_hs);

    /* RelationalOperator: '<S449>/Relational Operator2' incorporates:
     *  Constant: '<S449>/Constant2'
     *  DataStoreRead: '<S449>/StatusByte_InvData_IDCM'
     *  S-Function (sfix_bitop): '<S449>/Bitwise Operator1'
     */
    rtb_RelationalOperator3 = ((((sint32)CIDB_ac_DW.StatusByte_InvData_BCM) & 64)
        == 64);

    /* Outputs for Atomic SubSystem: '<S449>/EdgeRising' */
    /* Logic: '<S461>/OR1' incorporates:
     *  UnitDelay: '<S461>/Unit Delay'
     */
    rtb_AND_h4 = !CIDB_ac_DW.UnitDelay_DSTATE_pv;

    /* Update for UnitDelay: '<S461>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_pv = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S449>/EdgeRising' */

    /* RelationalOperator: '<S449>/Comparison5' incorporates:
     *  RelationalOperator: '<S449>/Comparison4'
     */
    VeCIDB_b_U0422_Pass_tmp = CIDB_ac_B.sf_DiagnosticDebounce_hs.Status;

    /* Logic: '<S449>/Logical10' incorporates:
     *  Constant: '<S456>/Calib'
     *  Constant: '<S466>/Constant'
     *  Constant: '<S467>/Constant'
     *  Constant: '<S468>/Constant'
     *  Constant: '<S469>/Constant'
     *  Logic: '<S449>/Logical1'
     *  Logic: '<S449>/Logical11'
     *  Logic: '<S449>/Logical3'
     *  Logic: '<S449>/Logical4'
     *  Logic: '<S449>/Logical5'
     *  Logic: '<S449>/Logical6'
     *  Logic: '<S449>/Logical7'
     *  Logic: '<S449>/Logical8'
     *  Logic: '<S449>/Logical9'
     *  RelationalOperator: '<S449>/Comparison5'
     *  RelationalOperator: '<S449>/Comparison6'
     *  RelationalOperator: '<S449>/Comparison7'
     *  RelationalOperator: '<S449>/Comparison8'
     */
    VeCIDB_b_U0422_Pass = ((((((!KeCIDB_b_BCM_FD_2_ePT_SNA_DiagEnbl) ||
        (((uint32)VeCIDB_b_U0422_Pass_tmp) == CeDFIB_e_Pass)) &&
        ((!CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_BCM_FD_9_k) || (((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCIDB_e_BCM_FD_9_d) == CeDFIB_e_Pass))) &&
        ((!CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_BCM_FD_1_o) || (((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCIDB_e_BCM_FD_1_b) == CeDFIB_e_Pass))) &&
                            ((!CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_BCM_FD_1_h)
        || (((uint32)CIDB_ac_B.TmpSignalConversionAtVeCIDB_e_BCM_FD_1_j) ==
            CeDFIB_e_Pass))) && ((((KeCIDB_b_BCM_FD_2_ePT_SNA_DiagEnbl) ||
        (CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_BCM_FD_9_k)) ||
        (CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_BCM_FD_1_o)) ||
                            (CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_BCM_FD_1_h)));

    /* Logic: '<S449>/Logical2' incorporates:
     *  Constant: '<S462>/Constant'
     *  Constant: '<S463>/Constant'
     *  Constant: '<S464>/Constant'
     *  Constant: '<S465>/Constant'
     *  RelationalOperator: '<S449>/Comparison1'
     *  RelationalOperator: '<S449>/Comparison2'
     *  RelationalOperator: '<S449>/Comparison3'
     *  RelationalOperator: '<S449>/Comparison4'
     */
    VeCIDB_b_U0422_Fail = ((((((uint32)VeCIDB_b_U0422_Pass_tmp) == CeDFIB_e_Fail)
        || (((uint32)CIDB_ac_B.TmpSignalConversionAtVeCIDB_e_BCM_FD_9_d) ==
            CeDFIB_e_Fail)) || (((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCIDB_e_BCM_FD_1_b) == CeDFIB_e_Fail)) ||
                           (((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCIDB_e_BCM_FD_1_j) == CeDFIB_e_Fail));

    /* Outputs for Enabled SubSystem: '<S449>/Subsystem1' incorporates:
     *  EnablePort: '<S471>/Enable'
     */
    if (VeCIDB_b_U0422_Fail)
    {
        /* Constant: '<S474>/Constant' */
        (void)Rte_Write_VeCIDB_e_FaultSts_InvData_BCM_Value(CeDFIB_e_Fail);
    }

    /* End of Outputs for SubSystem: '<S449>/Subsystem1' */

    /* Outputs for Enabled SubSystem: '<S449>/Subsystem' incorporates:
     *  EnablePort: '<S470>/Enable'
     */
    if (VeCIDB_b_U0422_Pass)
    {
        /* Constant: '<S473>/Constant' */
        (void)Rte_Write_VeCIDB_e_FaultSts_InvData_BCM_Value(CeDFIB_e_Pass);
    }

    /* End of Outputs for SubSystem: '<S449>/Subsystem' */

    /* Outputs for Enabled SubSystem: '<S449>/Subsystem2' incorporates:
     *  EnablePort: '<S472>/Enable'
     */
    /* Outputs for Atomic SubSystem: '<S449>/EdgeRising' */
    /* Logic: '<S461>/AND' incorporates:
     *  Constant: '<S475>/Constant'
     */
    if (rtb_RelationalOperator3 && rtb_AND_h4)
    {
        (void)Rte_Write_VeCIDB_e_FaultSts_InvData_BCM_Value(CeDFIB_e_Init);
    }

    /* End of Logic: '<S461>/AND' */
    /* End of Outputs for SubSystem: '<S449>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S449>/Subsystem2' */
}

#endif

/*
 * Output and update for atomic system:
 *    '<S489>/Diagnostic Debounce'
 *    '<S512>/Diagnostic Debounce'
 *    '<S535>/Diagnostic Debounce'
 */
#if Rte_SysCon_Variant_CIDB_U0404_BLUEN || Rte_SysCon_Variant_CIDB_U0404_Corebev || Rte_SysCon_Variant_CIDB_U0404_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_DiagnosticDebounce_h(VAR(boolean,
    AUTOMATIC) rtu_EnDiag, VAR(boolean, AUTOMATIC) rtu_Err, VAR(uint16,
    AUTOMATIC) rtu_FThr, VAR(uint8, AUTOMATIC) rtu_FInc, VAR(boolean, AUTOMATIC)
    rtu_Reset, P2VAR(B_DiagnosticDebounce_CIDB_ac_h_T, AUTOMATIC, CIDB_VAR_INIT)
    localB)
{
    sint32 tmp;

    /* Chart: '<S489>/Diagnostic Debounce' */
    /* Gateway: DiagnosticDebounceimplausibleSignalSNA/Diagnostic Debounce */
    /* During: DiagnosticDebounceimplausibleSignalSNA/Diagnostic Debounce */
    /* Entry Internal: DiagnosticDebounceimplausibleSignalSNA/Diagnostic Debounce */
    /* Transition: '<S494>:499' */
    VeCIDB_b_AGSM_FD_2_FDCAN3_Fail = false;
    VeCIDB_b_AGSM_FD_2_FDCAN3_Pass = false;
    if (rtu_Reset)
    {
        /* Transition: '<S494>:500' */
        /* Transition: '<S494>:502' */
        localB->Status = CeDFIB_e_Init;
        VeCIDB_Cnt_AGSM_FD_2_FDCAN3_Fail = 0U;
        VeCIDB_Cnt_AGSM_FD_2_FDCAN3_Init = 0U;

        /* Transition: '<S494>:505' */
        /* Transition: '<S494>:533' */
        /* Transition: '<S494>:545' */
        /* Transition: '<S494>:546' */
    }
    else
    {
        /* Transition: '<S494>:501' */
        if (rtu_EnDiag)
        {
            /* Transition: '<S494>:504' */
            if (((uint32)localB->Status) == CeDFIB_e_Init)
            {
                /* Transition: '<S494>:507' */
                if (!rtu_Err)
                {
                    /* Transition: '<S494>:506' */
                    /* Transition: '<S494>:509' */
                    tmp = ((sint32)VeCIDB_Cnt_AGSM_FD_2_FDCAN3_Init) + ((sint32)
                        rtu_FInc);
                    if (tmp > 65535)
                    {
                        tmp = 65535;
                    }

                    VeCIDB_Cnt_AGSM_FD_2_FDCAN3_Init = (uint16)tmp;
                    if (VeCIDB_Cnt_AGSM_FD_2_FDCAN3_Init >= rtu_FThr)
                    {
                        /* Transition: '<S494>:511' */
                        /* Transition: '<S494>:513' */
                        localB->Status = CeDFIB_e_Pass;
                        VeCIDB_b_AGSM_FD_2_FDCAN3_Pass = true;

                        /* Transition: '<S494>:516' */
                    }
                    else
                    {
                        /* Transition: '<S494>:512' */
                    }

                    /* Transition: '<S494>:515' */
                }
                else
                {
                    /* Transition: '<S494>:508' */
                    VeCIDB_Cnt_AGSM_FD_2_FDCAN3_Init = 0U;
                }

                /* Transition: '<S494>:514' */
            }
            else
            {
                /* Transition: '<S494>:510' */
            }

            /* Transition: '<S494>:517' */
            if ((((((uint32)localB->Status) == CeDFIB_e_Pass) || (((uint32)
                    localB->Status) == CeDFIB_e_Pass_FaultRemoved)) || (((uint32)
                    localB->Status) == CeDFIB_e_Pass_FaultFiltering)) ||
                    (((uint32)localB->Status) == CeDFIB_e_Init))
            {
                /* Transition: '<S494>:518' */
                if (rtu_Err)
                {
                    /* Transition: '<S494>:519' */
                    /* Transition: '<S494>:522' */
                    tmp = ((sint32)VeCIDB_Cnt_AGSM_FD_2_FDCAN3_Fail) + ((sint32)
                        rtu_FInc);
                    if (tmp > 65535)
                    {
                        tmp = 65535;
                    }

                    VeCIDB_Cnt_AGSM_FD_2_FDCAN3_Fail = (uint16)tmp;
                    if (VeCIDB_Cnt_AGSM_FD_2_FDCAN3_Fail > rtu_FThr)
                    {
                        /* Transition: '<S494>:524' */
                        /* Transition: '<S494>:528' */
                        localB->Status = CeDFIB_e_Fail;
                        VeCIDB_b_AGSM_FD_2_FDCAN3_Fail = true;
                        VeCIDB_Cnt_AGSM_FD_2_FDCAN3_Fail = (uint16)((sint32)
                            (((sint32)rtu_FThr) + 1));
                    }
                    else
                    {
                        /* Transition: '<S494>:557' */
                        if (((uint32)localB->Status) != CeDFIB_e_Init)
                        {
                            /* Transition: '<S494>:563' */
                            localB->Status = CeDFIB_e_Pass_FaultFiltering;

                            /* Transition: '<S494>:564' */
                            /* Transition: '<S494>:562' */
                        }
                        else
                        {
                            /* Transition: '<S494>:559' */
                            /* Transition: '<S494>:561' */
                            /* Transition: '<S494>:562' */
                        }
                    }
                }
                else
                {
                    /* Transition: '<S494>:521' */
                    if (((sint32)VeCIDB_Cnt_AGSM_FD_2_FDCAN3_Fail) > 0)
                    {
                        /* Transition: '<S494>:523' */
                        /* Transition: '<S494>:567' */
                        tmp = ((sint32)VeCIDB_Cnt_AGSM_FD_2_FDCAN3_Fail) - 1;
                        if ((((sint32)VeCIDB_Cnt_AGSM_FD_2_FDCAN3_Fail) - 1) < 0)
                        {
                            tmp = 0;
                        }

                        VeCIDB_Cnt_AGSM_FD_2_FDCAN3_Fail = (uint16)tmp;
                        if (((uint32)localB->Status) != CeDFIB_e_Init)
                        {
                            /* Transition: '<S494>:574' */
                            localB->Status = CeDFIB_e_Pass_FaultRemoved;

                            /* Transition: '<S494>:569' */
                        }
                        else
                        {
                            /* Transition: '<S494>:572' */
                            /* Transition: '<S494>:573' */
                        }
                    }
                    else
                    {
                        /* Transition: '<S494>:577' */
                        if (((uint32)localB->Status) != CeDFIB_e_Init)
                        {
                            /* Transition: '<S494>:582' */
                            localB->Status = CeDFIB_e_Pass;

                            /* Transition: '<S494>:581' */
                        }
                        else
                        {
                            /* Transition: '<S494>:579' */
                            /* Transition: '<S494>:580' */
                        }

                        /* Transition: '<S494>:583' */
                        /* Transition: '<S494>:569' */
                    }

                    /* Transition: '<S494>:570' */
                    /* Transition: '<S494>:564' */
                    /* Transition: '<S494>:562' */
                }

                /* Transition: '<S494>:532' */
                /* Transition: '<S494>:533' */
                /* Transition: '<S494>:545' */
                /* Transition: '<S494>:546' */
            }
            else
            {
                /* Transition: '<S494>:520' */
                if ((((uint32)localB->Status) == CeDFIB_e_Fail) || (((uint32)
                        localB->Status) == CeDFIB_e_Fail_FaultRemoved))
                {
                    /* Transition: '<S494>:534' */
                    if (rtu_Err)
                    {
                        /* Transition: '<S494>:535' */
                        /* Transition: '<S494>:538' */
                        tmp = ((sint32)rtu_FThr) + 1;
                        if ((((sint32)rtu_FThr) + 1) > 65535)
                        {
                            tmp = 65535;
                        }

                        VeCIDB_Cnt_AGSM_FD_2_FDCAN3_Fail = (uint16)tmp;
                        localB->Status = CeDFIB_e_Fail;
                    }
                    else
                    {
                        /* Transition: '<S494>:537' */
                        tmp = ((sint32)VeCIDB_Cnt_AGSM_FD_2_FDCAN3_Fail) - 1;
                        if ((((sint32)VeCIDB_Cnt_AGSM_FD_2_FDCAN3_Fail) - 1) < 0)
                        {
                            tmp = 0;
                        }

                        VeCIDB_Cnt_AGSM_FD_2_FDCAN3_Fail = (uint16)tmp;
                        if (((sint32)VeCIDB_Cnt_AGSM_FD_2_FDCAN3_Fail) <= 0)
                        {
                            /* Transition: '<S494>:539' */
                            /* Transition: '<S494>:541' */
                            localB->Status = CeDFIB_e_Pass;
                            VeCIDB_b_AGSM_FD_2_FDCAN3_Pass = true;
                        }
                        else
                        {
                            /* Transition: '<S494>:540' */
                            localB->Status = CeDFIB_e_Fail_FaultRemoved;

                            /* Transition: '<S494>:542' */
                        }

                        /* Transition: '<S494>:543' */
                    }

                    /* Transition: '<S494>:544' */
                    /* Transition: '<S494>:545' */
                    /* Transition: '<S494>:546' */
                }
                else
                {
                    /* Transition: '<S494>:536' */
                }
            }
        }
        else
        {
            /* Transition: '<S494>:503' */
            /* Transition: '<S494>:505' */
            /* Transition: '<S494>:533' */
            /* Transition: '<S494>:545' */
            /* Transition: '<S494>:546' */
        }
    }

    /* End of Chart: '<S489>/Diagnostic Debounce' */
    /* Transition: '<S494>:547' */
}

#endif

/* System initialize for atomic system: '<S476>/U0404_BLUEN_20ms' */
#if Rte_SysCon_Variant_CIDB_U0404_BLUEN

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0404_BLUEN_20ms_Init(void)
{
    /* SystemInitialize for Outport: '<Root>/VeCIDB_e_FaultSts_InvData_ESM' incorporates:
     *  Merge: '<S485>/Merge1'
     */
    (void)Rte_Write_VeCIDB_e_FaultSts_InvData_ESM_Value(CeDFIB_e_Init);
}

#endif

/* Output and update for atomic system: '<S476>/U0404_BLUEN_20ms' */
#if Rte_SysCon_Variant_CIDB_U0404_BLUEN

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0404_BLUEN_20ms(void)
{
    TeDFIB_e_FaultDebounceStatus VeCIDB_b_U0404_Fail_tmp;
    boolean rtb_AND_l;
    boolean rtb_RelationalOperator3;

    /* RelationalOperator: '<S489>/Relational Operator3' incorporates:
     *  Constant: '<S489>/Constant3'
     *  DataStoreRead: '<S487>/Data Store Read'
     *  S-Function (sfix_bitop): '<S489>/Bitwise Operator2'
     */
    rtb_RelationalOperator3 = ((((uint32)CIDB_ac_DW.StatusByte_InvData_ESM) &
        64U) == 0U);

    /* DataTypeConversion: '<S488>/Cast To Boolean' incorporates:
     *  Constant: '<S488>/Constant Value'
     *  S-Function (sfix_bitop): '<S488>/Bitwise Operator'
     */
    VeCIDB_b_AGSM_FD_2_FDCAN3_FaultCriteria = ((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_ShiftLev_p) & 8U) != 0U);

    /* Outputs for Atomic SubSystem: '<S489>/EdgeFalling1' */
    /* Logic: '<S495>/AND' incorporates:
     *  Logic: '<S495>/OR1'
     *  UnitDelay: '<S495>/Unit Delay'
     */
    rtb_AND_l = ((!rtb_RelationalOperator3) && (CIDB_ac_DW.UnitDelay_DSTATE_oz));

    /* Update for UnitDelay: '<S495>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_oz = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S489>/EdgeFalling1' */

    /* Chart: '<S489>/Diagnostic Debounce' incorporates:
     *  Constant: '<S484>/Constant Value'
     *  Constant: '<S489>/Constant1'
     *  Constant: '<S490>/Calib'
     *  Constant: '<S491>/Calib'
     *  Constant: '<S492>/Calib'
     *  Constant: '<S493>/Calib'
     *  Constant: '<S496>/Calib'
     *  DataStoreRead: '<S487>/Data Store Read'
     *  Logic: '<S484>/Logical Operator'
     *  Logic: '<S484>/Logical Operator2'
     *  Logic: '<S489>/Logical Operator'
     *  Logic: '<S489>/Logical Operator1'
     *  Logic: '<S489>/Logical10'
     *  Logic: '<S489>/Logical12'
     *  Logic: '<S489>/Logical5'
     *  RelationalOperator: '<S489>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S484>/Bitwise Operator'
     *  S-Function (sfix_bitop): '<S489>/Bitwise Operator3'
     */
    CIDB_ac_DiagnosticDebounce_h(((KeCIDB_b_AGSM_FD_2_ePT_SNA_DiagEnbl) &&
        (((CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_IsDiagGl_e) &&
          (KeCIDB_b_U0404_DiagEnbl)) && ((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_ShiftLev_p) & 4U) == 0U))) && ((
        !KeCIDB_b_AGSM_FD_2_ePT_SNA_FailLatchEnable) || (((((uint32)
        CIDB_ac_DW.StatusByte_InvData_ESM) & 1U) == 0U) ||
        (!rtb_RelationalOperator3))), VeCIDB_b_AGSM_FD_2_FDCAN3_FaultCriteria,
        KeCIDB_Cnt_AGSM_FD_2_ePT_SNA_FailLmt,
        KeCIDB_Cnt_AGSM_FD_2_ePT_SNAFailINC, rtb_AND_l ||
        (CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_RstDia_e1h),
        &CIDB_ac_B.sf_DiagnosticDebounce_hy);

    /* RelationalOperator: '<S485>/Comparison4' incorporates:
     *  RelationalOperator: '<S485>/Comparison5'
     */
    VeCIDB_b_U0404_Fail_tmp = CIDB_ac_B.sf_DiagnosticDebounce_hy.Status;

    /* RelationalOperator: '<S485>/Comparison4' incorporates:
     *  Constant: '<S498>/Constant'
     */
    VeCIDB_b_U0404_Fail = (((uint32)VeCIDB_b_U0404_Fail_tmp) == CeDFIB_e_Fail);

    /* RelationalOperator: '<S485>/Relational Operator2' incorporates:
     *  Constant: '<S485>/Constant2'
     *  DataStoreRead: '<S485>/StatusByte_InvData_IDCM'
     *  S-Function (sfix_bitop): '<S485>/Bitwise Operator1'
     */
    rtb_RelationalOperator3 = ((((sint32)CIDB_ac_DW.StatusByte_InvData_ESM) & 64)
        == 64);

    /* Outputs for Atomic SubSystem: '<S485>/EdgeRising' */
    /* Logic: '<S497>/OR1' incorporates:
     *  UnitDelay: '<S497>/Unit Delay'
     */
    rtb_AND_l = !CIDB_ac_DW.UnitDelay_DSTATE_ep;

    /* Update for UnitDelay: '<S497>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_ep = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S485>/EdgeRising' */

    /* Logic: '<S485>/Logical10' incorporates:
     *  Constant: '<S492>/Calib'
     *  Constant: '<S499>/Constant'
     *  Logic: '<S485>/Logical1'
     *  Logic: '<S485>/Logical9'
     *  RelationalOperator: '<S485>/Comparison5'
     */
    VeCIDB_b_U0404_Pass = (((!KeCIDB_b_AGSM_FD_2_ePT_SNA_DiagEnbl) || (((uint32)
        VeCIDB_b_U0404_Fail_tmp) == CeDFIB_e_Pass)) &&
                           (KeCIDB_b_AGSM_FD_2_ePT_SNA_DiagEnbl));

    /* Outputs for Enabled SubSystem: '<S485>/Subsystem1' incorporates:
     *  EnablePort: '<S501>/Enable'
     */
    if (VeCIDB_b_U0404_Fail)
    {
        /* Outport: '<Root>/VeCIDB_e_FaultSts_InvData_ESM' incorporates:
         *  Constant: '<S504>/Constant'
         */
        (void)Rte_Write_VeCIDB_e_FaultSts_InvData_ESM_Value(CeDFIB_e_Fail);
    }

    /* End of Outputs for SubSystem: '<S485>/Subsystem1' */

    /* Outputs for Enabled SubSystem: '<S485>/Subsystem' incorporates:
     *  EnablePort: '<S500>/Enable'
     */
    if (VeCIDB_b_U0404_Pass)
    {
        /* Outport: '<Root>/VeCIDB_e_FaultSts_InvData_ESM' incorporates:
         *  Constant: '<S503>/Constant'
         */
        (void)Rte_Write_VeCIDB_e_FaultSts_InvData_ESM_Value(CeDFIB_e_Pass);
    }

    /* End of Outputs for SubSystem: '<S485>/Subsystem' */

    /* Outputs for Enabled SubSystem: '<S485>/Subsystem2' incorporates:
     *  EnablePort: '<S502>/Enable'
     */
    /* Outputs for Atomic SubSystem: '<S485>/EdgeRising' */
    /* Logic: '<S497>/AND' */
    if (rtb_RelationalOperator3 && rtb_AND_l)
    {
        /* Outport: '<Root>/VeCIDB_e_FaultSts_InvData_ESM' incorporates:
         *  Constant: '<S505>/Constant'
         */
        (void)Rte_Write_VeCIDB_e_FaultSts_InvData_ESM_Value(CeDFIB_e_Init);
    }

    /* End of Logic: '<S497>/AND' */
    /* End of Outputs for SubSystem: '<S485>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S485>/Subsystem2' */
}

#endif

/* System initialize for atomic system: '<S476>/U0404_COREBEV_20ms' */
#if Rte_SysCon_Variant_CIDB_U0404_Corebev

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0404_COREBEV_20ms_Init(void)
{
    /* SystemInitialize for Merge: '<S508>/Merge1' */
    (void)Rte_Write_VeCIDB_e_FaultSts_InvData_ESM_Value(CeDFIB_e_Init);
}

#endif

/* Output and update for atomic system: '<S476>/U0404_COREBEV_20ms' */
#if Rte_SysCon_Variant_CIDB_U0404_Corebev

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0404_COREBEV_20ms(void)
{
    TeDFIB_e_FaultDebounceStatus VeCIDB_b_U0404_Fail_tmp;
    boolean rtb_AND_m;
    boolean rtb_RelationalOperator3;

    /* RelationalOperator: '<S512>/Relational Operator3' incorporates:
     *  Constant: '<S512>/Constant3'
     *  DataStoreRead: '<S510>/Data Store Read'
     *  S-Function (sfix_bitop): '<S512>/Bitwise Operator2'
     */
    rtb_RelationalOperator3 = ((((uint32)CIDB_ac_DW.StatusByte_InvData_ESM) &
        64U) == 0U);

    /* DataTypeConversion: '<S511>/Cast To Boolean' incorporates:
     *  Constant: '<S511>/Constant Value'
     *  S-Function (sfix_bitop): '<S511>/Bitwise Operator'
     */
    VeCIDB_b_AGSM_FD_2_FDCAN3_FaultCriteria = ((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_ShiftLever) & 8U) != 0U);

    /* Outputs for Atomic SubSystem: '<S512>/EdgeFalling1' */
    /* Logic: '<S518>/AND' incorporates:
     *  Logic: '<S518>/OR1'
     *  UnitDelay: '<S518>/Unit Delay'
     */
    rtb_AND_m = ((!rtb_RelationalOperator3) && (CIDB_ac_DW.UnitDelay_DSTATE_gl));

    /* Update for UnitDelay: '<S518>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_gl = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S512>/EdgeFalling1' */

    /* Chart: '<S512>/Diagnostic Debounce' incorporates:
     *  Constant: '<S507>/Constant Value'
     *  Constant: '<S512>/Constant1'
     *  Constant: '<S513>/Calib'
     *  Constant: '<S514>/Calib'
     *  Constant: '<S515>/Calib'
     *  Constant: '<S516>/Calib'
     *  Constant: '<S519>/Calib'
     *  DataStoreRead: '<S510>/Data Store Read'
     *  Logic: '<S507>/Logical Operator'
     *  Logic: '<S507>/Logical Operator2'
     *  Logic: '<S512>/Logical Operator'
     *  Logic: '<S512>/Logical Operator1'
     *  Logic: '<S512>/Logical10'
     *  Logic: '<S512>/Logical12'
     *  Logic: '<S512>/Logical5'
     *  RelationalOperator: '<S512>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S507>/Bitwise Operator'
     *  S-Function (sfix_bitop): '<S512>/Bitwise Operator3'
     */
    CIDB_ac_DiagnosticDebounce_h(((KeCIDB_b_AGSM_FD_2_ePT_SNA_DiagEnbl) &&
        (((CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_IsDiagGl_e) &&
          (KeCIDB_b_U0404_DiagEnbl)) && ((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_ShiftLever) & 4U) == 0U))) && ((
        !KeCIDB_b_AGSM_FD_2_ePT_SNA_FailLatchEnable) || (((((uint32)
        CIDB_ac_DW.StatusByte_InvData_ESM) & 1U) == 0U) ||
        (!rtb_RelationalOperator3))), VeCIDB_b_AGSM_FD_2_FDCAN3_FaultCriteria,
        KeCIDB_Cnt_AGSM_FD_2_ePT_SNA_FailLmt,
        KeCIDB_Cnt_AGSM_FD_2_ePT_SNAFailINC, rtb_AND_m ||
        (CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_RstDia_e1h),
        &CIDB_ac_B.sf_DiagnosticDebounce_cw);

    /* RelationalOperator: '<S508>/Comparison4' incorporates:
     *  RelationalOperator: '<S508>/Comparison5'
     */
    VeCIDB_b_U0404_Fail_tmp = CIDB_ac_B.sf_DiagnosticDebounce_cw.Status;

    /* RelationalOperator: '<S508>/Comparison4' incorporates:
     *  Constant: '<S521>/Constant'
     */
    VeCIDB_b_U0404_Fail = (((uint32)VeCIDB_b_U0404_Fail_tmp) == CeDFIB_e_Fail);

    /* RelationalOperator: '<S508>/Relational Operator2' incorporates:
     *  Constant: '<S508>/Constant2'
     *  DataStoreRead: '<S508>/StatusByte_InvData_IDCM'
     *  S-Function (sfix_bitop): '<S508>/Bitwise Operator1'
     */
    rtb_RelationalOperator3 = ((((sint32)CIDB_ac_DW.StatusByte_InvData_ESM) & 64)
        == 64);

    /* Outputs for Atomic SubSystem: '<S508>/EdgeRising' */
    /* Logic: '<S520>/OR1' incorporates:
     *  UnitDelay: '<S520>/Unit Delay'
     */
    rtb_AND_m = !CIDB_ac_DW.UnitDelay_DSTATE_o;

    /* Update for UnitDelay: '<S520>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_o = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S508>/EdgeRising' */

    /* Logic: '<S508>/Logical10' incorporates:
     *  Constant: '<S515>/Calib'
     *  Constant: '<S522>/Constant'
     *  Logic: '<S508>/Logical1'
     *  Logic: '<S508>/Logical9'
     *  RelationalOperator: '<S508>/Comparison5'
     */
    VeCIDB_b_U0404_Pass = (((!KeCIDB_b_AGSM_FD_2_ePT_SNA_DiagEnbl) || (((uint32)
        VeCIDB_b_U0404_Fail_tmp) == CeDFIB_e_Pass)) &&
                           (KeCIDB_b_AGSM_FD_2_ePT_SNA_DiagEnbl));

    /* Outputs for Enabled SubSystem: '<S508>/Subsystem1' incorporates:
     *  EnablePort: '<S524>/Enable'
     */
    if (VeCIDB_b_U0404_Fail)
    {
        /* Constant: '<S527>/Constant' */
        (void)Rte_Write_VeCIDB_e_FaultSts_InvData_ESM_Value(CeDFIB_e_Fail);
    }

    /* End of Outputs for SubSystem: '<S508>/Subsystem1' */

    /* Outputs for Enabled SubSystem: '<S508>/Subsystem' incorporates:
     *  EnablePort: '<S523>/Enable'
     */
    if (VeCIDB_b_U0404_Pass)
    {
        /* Constant: '<S526>/Constant' */
        (void)Rte_Write_VeCIDB_e_FaultSts_InvData_ESM_Value(CeDFIB_e_Pass);
    }

    /* End of Outputs for SubSystem: '<S508>/Subsystem' */

    /* Outputs for Enabled SubSystem: '<S508>/Subsystem2' incorporates:
     *  EnablePort: '<S525>/Enable'
     */
    /* Outputs for Atomic SubSystem: '<S508>/EdgeRising' */
    /* Logic: '<S520>/AND' incorporates:
     *  Constant: '<S528>/Constant'
     */
    if (rtb_RelationalOperator3 && rtb_AND_m)
    {
        (void)Rte_Write_VeCIDB_e_FaultSts_InvData_ESM_Value(CeDFIB_e_Init);
    }

    /* End of Logic: '<S520>/AND' */
    /* End of Outputs for SubSystem: '<S508>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S508>/Subsystem2' */
}

#endif

/* System initialize for atomic system: '<S476>/U0404_Pegasus_20ms' */
#if Rte_SysCon_Variant_CIDB_U0404_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0404_Pegasus_20ms_Init(void)
{
    /* SystemInitialize for Merge: '<S531>/Merge1' */
    (void)Rte_Write_VeCIDB_e_FaultSts_InvData_ESM_Value(CeDFIB_e_Init);
}

#endif

/* Output and update for atomic system: '<S476>/U0404_Pegasus_20ms' */
#if Rte_SysCon_Variant_CIDB_U0404_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0404_Pegasus_20ms(void)
{
    TeDFIB_e_FaultDebounceStatus VeCIDB_b_U0404_Fail_tmp;
    boolean rtb_AND_bq;
    boolean rtb_RelationalOperator3;

    /* RelationalOperator: '<S535>/Relational Operator3' incorporates:
     *  Constant: '<S535>/Constant3'
     *  DataStoreRead: '<S533>/Data Store Read'
     *  S-Function (sfix_bitop): '<S535>/Bitwise Operator2'
     */
    rtb_RelationalOperator3 = ((((uint32)CIDB_ac_DW.StatusByte_InvData_ESM) &
        64U) == 0U);

    /* DataTypeConversion: '<S534>/Cast To Boolean' incorporates:
     *  Constant: '<S534>/Constant Value'
     *  S-Function (sfix_bitop): '<S534>/Bitwise Operator'
     */
    VeCIDB_b_AGSM_FD_2_FDCAN3_FaultCriteria = ((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_ShiftLever) & 8U) != 0U);

    /* Outputs for Atomic SubSystem: '<S535>/EdgeFalling1' */
    /* Logic: '<S541>/AND' incorporates:
     *  Logic: '<S541>/OR1'
     *  UnitDelay: '<S541>/Unit Delay'
     */
    rtb_AND_bq = ((!rtb_RelationalOperator3) && (CIDB_ac_DW.UnitDelay_DSTATE_l));

    /* Update for UnitDelay: '<S541>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_l = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S535>/EdgeFalling1' */

    /* Chart: '<S535>/Diagnostic Debounce' incorporates:
     *  Constant: '<S530>/Constant Value'
     *  Constant: '<S535>/Constant1'
     *  Constant: '<S536>/Calib'
     *  Constant: '<S537>/Calib'
     *  Constant: '<S538>/Calib'
     *  Constant: '<S539>/Calib'
     *  Constant: '<S542>/Calib'
     *  DataStoreRead: '<S533>/Data Store Read'
     *  Logic: '<S530>/Logical Operator'
     *  Logic: '<S530>/Logical Operator2'
     *  Logic: '<S535>/Logical Operator'
     *  Logic: '<S535>/Logical Operator1'
     *  Logic: '<S535>/Logical10'
     *  Logic: '<S535>/Logical12'
     *  Logic: '<S535>/Logical5'
     *  RelationalOperator: '<S535>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S530>/Bitwise Operator'
     *  S-Function (sfix_bitop): '<S535>/Bitwise Operator3'
     */
    CIDB_ac_DiagnosticDebounce_h(((KeCIDB_b_AGSM_FD_2_ePT_SNA_DiagEnbl) &&
        (((CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_IsDiagGl_e) &&
          (KeCIDB_b_U0404_DiagEnbl)) && ((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_ShiftLever) & 4U) == 0U))) && ((
        !KeCIDB_b_AGSM_FD_2_ePT_SNA_FailLatchEnable) || (((((uint32)
        CIDB_ac_DW.StatusByte_InvData_ESM) & 1U) == 0U) ||
        (!rtb_RelationalOperator3))), VeCIDB_b_AGSM_FD_2_FDCAN3_FaultCriteria,
        KeCIDB_Cnt_AGSM_FD_2_ePT_SNA_FailLmt,
        KeCIDB_Cnt_AGSM_FD_2_ePT_SNAFailINC, rtb_AND_bq ||
        (CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_RstDia_e1h),
        &CIDB_ac_B.sf_DiagnosticDebounce_oc);

    /* RelationalOperator: '<S531>/Comparison4' incorporates:
     *  RelationalOperator: '<S531>/Comparison5'
     */
    VeCIDB_b_U0404_Fail_tmp = CIDB_ac_B.sf_DiagnosticDebounce_oc.Status;

    /* RelationalOperator: '<S531>/Comparison4' incorporates:
     *  Constant: '<S544>/Constant'
     */
    VeCIDB_b_U0404_Fail = (((uint32)VeCIDB_b_U0404_Fail_tmp) == CeDFIB_e_Fail);

    /* RelationalOperator: '<S531>/Relational Operator2' incorporates:
     *  Constant: '<S531>/Constant2'
     *  DataStoreRead: '<S531>/StatusByte_InvData_IDCM'
     *  S-Function (sfix_bitop): '<S531>/Bitwise Operator1'
     */
    rtb_RelationalOperator3 = ((((sint32)CIDB_ac_DW.StatusByte_InvData_ESM) & 64)
        == 64);

    /* Outputs for Atomic SubSystem: '<S531>/EdgeRising' */
    /* Logic: '<S543>/OR1' incorporates:
     *  UnitDelay: '<S543>/Unit Delay'
     */
    rtb_AND_bq = !CIDB_ac_DW.UnitDelay_DSTATE_d0;

    /* Update for UnitDelay: '<S543>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_d0 = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S531>/EdgeRising' */

    /* Logic: '<S531>/Logical10' incorporates:
     *  Constant: '<S538>/Calib'
     *  Constant: '<S545>/Constant'
     *  Logic: '<S531>/Logical1'
     *  Logic: '<S531>/Logical9'
     *  RelationalOperator: '<S531>/Comparison5'
     */
    VeCIDB_b_U0404_Pass = (((!KeCIDB_b_AGSM_FD_2_ePT_SNA_DiagEnbl) || (((uint32)
        VeCIDB_b_U0404_Fail_tmp) == CeDFIB_e_Pass)) &&
                           (KeCIDB_b_AGSM_FD_2_ePT_SNA_DiagEnbl));

    /* Outputs for Enabled SubSystem: '<S531>/Subsystem1' incorporates:
     *  EnablePort: '<S547>/Enable'
     */
    if (VeCIDB_b_U0404_Fail)
    {
        /* Constant: '<S550>/Constant' */
        (void)Rte_Write_VeCIDB_e_FaultSts_InvData_ESM_Value(CeDFIB_e_Fail);
    }

    /* End of Outputs for SubSystem: '<S531>/Subsystem1' */

    /* Outputs for Enabled SubSystem: '<S531>/Subsystem' incorporates:
     *  EnablePort: '<S546>/Enable'
     */
    if (VeCIDB_b_U0404_Pass)
    {
        /* Constant: '<S549>/Constant' */
        (void)Rte_Write_VeCIDB_e_FaultSts_InvData_ESM_Value(CeDFIB_e_Pass);
    }

    /* End of Outputs for SubSystem: '<S531>/Subsystem' */

    /* Outputs for Enabled SubSystem: '<S531>/Subsystem2' incorporates:
     *  EnablePort: '<S548>/Enable'
     */
    /* Outputs for Atomic SubSystem: '<S531>/EdgeRising' */
    /* Logic: '<S543>/AND' incorporates:
     *  Constant: '<S551>/Constant'
     */
    if (rtb_RelationalOperator3 && rtb_AND_bq)
    {
        (void)Rte_Write_VeCIDB_e_FaultSts_InvData_ESM_Value(CeDFIB_e_Init);
    }

    /* End of Logic: '<S543>/AND' */
    /* End of Outputs for SubSystem: '<S531>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S531>/Subsystem2' */
}

#endif

/*
 * System initialize for atomic system:
 *    '<S559>/Diagnostic Debounce'
 *    '<S570>/Diagnostic Debounce'
 *    '<S581>/Diagnostic Debounce'
 */
#if Rte_SysCon_Variant_CIDB_U0412_BLUEN || Rte_SysCon_Variant_CIDB_U0412_Corebev || Rte_SysCon_Variant_CIDB_U0412_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_DiagnosticDebounce_o_Init(P2VAR
    (TeDFIB_e_FaultDebounceStatus, AUTOMATIC, CIDB_VAR_INIT) rty_Status)
{
    *rty_Status = CeDFIB_e_Init;
}

#endif

/*
 * Output and update for atomic system:
 *    '<S559>/Diagnostic Debounce'
 *    '<S570>/Diagnostic Debounce'
 *    '<S581>/Diagnostic Debounce'
 */
#if Rte_SysCon_Variant_CIDB_U0412_BLUEN || Rte_SysCon_Variant_CIDB_U0412_Corebev || Rte_SysCon_Variant_CIDB_U0412_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_DiagnosticDebounce_hp(VAR(boolean,
    AUTOMATIC) rtu_EnDiag, VAR(boolean, AUTOMATIC) rtu_Err, VAR(uint16,
    AUTOMATIC) rtu_FThr, VAR(uint8, AUTOMATIC) rtu_FInc, VAR(boolean, AUTOMATIC)
    rtu_Reset, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, CIDB_VAR_INIT)
    rty_Status)
{
    sint32 tmp;

    /* Chart: '<S559>/Diagnostic Debounce' */
    /* Gateway: DiagnosticDebounceimplausibleSignalSNA/Diagnostic Debounce */
    /* During: DiagnosticDebounceimplausibleSignalSNA/Diagnostic Debounce */
    /* Entry Internal: DiagnosticDebounceimplausibleSignalSNA/Diagnostic Debounce */
    /* Transition: '<S564>:499' */
    VeCIDB_b_BATTERY_HV_VLIMITS_Fail = false;
    VeCIDB_b_BATTERY_HV_VLIMITS_Pass = false;
    if (rtu_Reset)
    {
        /* Transition: '<S564>:500' */
        /* Transition: '<S564>:502' */
        *rty_Status = CeDFIB_e_Init;
        VeCIDB_Cnt_BATTERY_HV_VLIMITS_Fail = 0U;
        VeCIDB_Cnt_BATTERY_HV_VLIMITS_Init = 0U;

        /* Transition: '<S564>:505' */
        /* Transition: '<S564>:533' */
        /* Transition: '<S564>:545' */
        /* Transition: '<S564>:546' */
    }
    else
    {
        /* Transition: '<S564>:501' */
        if (rtu_EnDiag)
        {
            /* Transition: '<S564>:504' */
            if (((uint32)(*rty_Status)) == CeDFIB_e_Init)
            {
                /* Transition: '<S564>:507' */
                if (!rtu_Err)
                {
                    /* Transition: '<S564>:506' */
                    /* Transition: '<S564>:509' */
                    tmp = ((sint32)VeCIDB_Cnt_BATTERY_HV_VLIMITS_Init) +
                        ((sint32)rtu_FInc);
                    if (tmp > 65535)
                    {
                        tmp = 65535;
                    }

                    VeCIDB_Cnt_BATTERY_HV_VLIMITS_Init = (uint16)tmp;
                    if (VeCIDB_Cnt_BATTERY_HV_VLIMITS_Init >= rtu_FThr)
                    {
                        /* Transition: '<S564>:511' */
                        /* Transition: '<S564>:513' */
                        *rty_Status = CeDFIB_e_Pass;
                        VeCIDB_b_BATTERY_HV_VLIMITS_Pass = true;

                        /* Transition: '<S564>:516' */
                    }
                    else
                    {
                        /* Transition: '<S564>:512' */
                    }

                    /* Transition: '<S564>:515' */
                }
                else
                {
                    /* Transition: '<S564>:508' */
                    VeCIDB_Cnt_BATTERY_HV_VLIMITS_Init = 0U;
                }

                /* Transition: '<S564>:514' */
            }
            else
            {
                /* Transition: '<S564>:510' */
            }

            /* Transition: '<S564>:517' */
            if ((((((uint32)(*rty_Status)) == CeDFIB_e_Pass) || (((uint32)
                    (*rty_Status)) == CeDFIB_e_Pass_FaultRemoved)) || (((uint32)
                    (*rty_Status)) == CeDFIB_e_Pass_FaultFiltering)) ||
                    (((uint32)(*rty_Status)) == CeDFIB_e_Init))
            {
                /* Transition: '<S564>:518' */
                if (rtu_Err)
                {
                    /* Transition: '<S564>:519' */
                    /* Transition: '<S564>:522' */
                    tmp = ((sint32)VeCIDB_Cnt_BATTERY_HV_VLIMITS_Fail) +
                        ((sint32)rtu_FInc);
                    if (tmp > 65535)
                    {
                        tmp = 65535;
                    }

                    VeCIDB_Cnt_BATTERY_HV_VLIMITS_Fail = (uint16)tmp;
                    if (VeCIDB_Cnt_BATTERY_HV_VLIMITS_Fail > rtu_FThr)
                    {
                        /* Transition: '<S564>:524' */
                        /* Transition: '<S564>:528' */
                        *rty_Status = CeDFIB_e_Fail;
                        VeCIDB_b_BATTERY_HV_VLIMITS_Fail = true;
                        VeCIDB_Cnt_BATTERY_HV_VLIMITS_Fail = (uint16)((sint32)
                            (((sint32)rtu_FThr) + 1));
                    }
                    else
                    {
                        /* Transition: '<S564>:557' */
                        if (((uint32)(*rty_Status)) != CeDFIB_e_Init)
                        {
                            /* Transition: '<S564>:563' */
                            *rty_Status = CeDFIB_e_Pass_FaultFiltering;

                            /* Transition: '<S564>:564' */
                            /* Transition: '<S564>:562' */
                        }
                        else
                        {
                            /* Transition: '<S564>:559' */
                            /* Transition: '<S564>:561' */
                            /* Transition: '<S564>:562' */
                        }
                    }
                }
                else
                {
                    /* Transition: '<S564>:521' */
                    if (((sint32)VeCIDB_Cnt_BATTERY_HV_VLIMITS_Fail) > 0)
                    {
                        /* Transition: '<S564>:523' */
                        /* Transition: '<S564>:567' */
                        tmp = ((sint32)VeCIDB_Cnt_BATTERY_HV_VLIMITS_Fail) - 1;
                        if ((((sint32)VeCIDB_Cnt_BATTERY_HV_VLIMITS_Fail) - 1) <
                            0)
                        {
                            tmp = 0;
                        }

                        VeCIDB_Cnt_BATTERY_HV_VLIMITS_Fail = (uint16)tmp;
                        if (((uint32)(*rty_Status)) != CeDFIB_e_Init)
                        {
                            /* Transition: '<S564>:574' */
                            *rty_Status = CeDFIB_e_Pass_FaultRemoved;

                            /* Transition: '<S564>:569' */
                        }
                        else
                        {
                            /* Transition: '<S564>:572' */
                            /* Transition: '<S564>:573' */
                        }
                    }
                    else
                    {
                        /* Transition: '<S564>:577' */
                        if (((uint32)(*rty_Status)) != CeDFIB_e_Init)
                        {
                            /* Transition: '<S564>:582' */
                            *rty_Status = CeDFIB_e_Pass;

                            /* Transition: '<S564>:581' */
                        }
                        else
                        {
                            /* Transition: '<S564>:579' */
                            /* Transition: '<S564>:580' */
                        }

                        /* Transition: '<S564>:583' */
                        /* Transition: '<S564>:569' */
                    }

                    /* Transition: '<S564>:570' */
                    /* Transition: '<S564>:564' */
                    /* Transition: '<S564>:562' */
                }

                /* Transition: '<S564>:532' */
                /* Transition: '<S564>:533' */
                /* Transition: '<S564>:545' */
                /* Transition: '<S564>:546' */
            }
            else
            {
                /* Transition: '<S564>:520' */
                if ((((uint32)(*rty_Status)) == CeDFIB_e_Fail) || (((uint32)
                        (*rty_Status)) == CeDFIB_e_Fail_FaultRemoved))
                {
                    /* Transition: '<S564>:534' */
                    if (rtu_Err)
                    {
                        /* Transition: '<S564>:535' */
                        /* Transition: '<S564>:538' */
                        tmp = ((sint32)rtu_FThr) + 1;
                        if ((((sint32)rtu_FThr) + 1) > 65535)
                        {
                            tmp = 65535;
                        }

                        VeCIDB_Cnt_BATTERY_HV_VLIMITS_Fail = (uint16)tmp;
                        *rty_Status = CeDFIB_e_Fail;
                    }
                    else
                    {
                        /* Transition: '<S564>:537' */
                        tmp = ((sint32)VeCIDB_Cnt_BATTERY_HV_VLIMITS_Fail) - 1;
                        if ((((sint32)VeCIDB_Cnt_BATTERY_HV_VLIMITS_Fail) - 1) <
                            0)
                        {
                            tmp = 0;
                        }

                        VeCIDB_Cnt_BATTERY_HV_VLIMITS_Fail = (uint16)tmp;
                        if (((sint32)VeCIDB_Cnt_BATTERY_HV_VLIMITS_Fail) <= 0)
                        {
                            /* Transition: '<S564>:539' */
                            /* Transition: '<S564>:541' */
                            *rty_Status = CeDFIB_e_Pass;
                            VeCIDB_b_BATTERY_HV_VLIMITS_Pass = true;
                        }
                        else
                        {
                            /* Transition: '<S564>:540' */
                            *rty_Status = CeDFIB_e_Fail_FaultRemoved;

                            /* Transition: '<S564>:542' */
                        }

                        /* Transition: '<S564>:543' */
                    }

                    /* Transition: '<S564>:544' */
                    /* Transition: '<S564>:545' */
                    /* Transition: '<S564>:546' */
                }
                else
                {
                    /* Transition: '<S564>:536' */
                }
            }
        }
        else
        {
            /* Transition: '<S564>:503' */
            /* Transition: '<S564>:505' */
            /* Transition: '<S564>:533' */
            /* Transition: '<S564>:545' */
            /* Transition: '<S564>:546' */
        }
    }

    /* End of Chart: '<S559>/Diagnostic Debounce' */
    /* Transition: '<S564>:547' */
}

#endif

/* System initialize for atomic system: '<S477>/U0412_BLUEN_20ms' */
#if Rte_SysCon_Variant_CIDB_U0412_BLUEN

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0412_BLUEN_20ms_Init(void)
{
    /* Start for VariantMerge generated from: '<S477>/VeCIDB_b_BATTERY_HV_VLIMITS_CalDiagEnbl' incorporates:
     *  Constant: '<S562>/Calib'
     */
    CIDB_ac_B.VariantMergeForOutportVeCIDB_b_BATTERY_H =
        KeCIDB_b_BATTERY_HV_VLIMITS_ePT_SNA_DiagEnbl;

    /* SystemInitialize for Chart: '<S559>/Diagnostic Debounce' */
    CIDB_ac_DiagnosticDebounce_o_Init
        (&CIDB_ac_B.VeCIDB_e_BATTERY_HV_VLIMITS_ErrState);
}

#endif

/* Output and update for atomic system: '<S477>/U0412_BLUEN_20ms' */
#if Rte_SysCon_Variant_CIDB_U0412_BLUEN

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0412_BLUEN_20ms(void)
{
    uint8 tmpRead;
    uint8 tmpRead_0;
    boolean rtb_AND_bk;
    boolean rtb_RelationalOperator3;

    /* Inport: '<Root>/VeCRDB_y_BPCM_Cell_VoltMax_SigSts' */
    (void)Rte_Read_VeCRDB_y_BPCM_Cell_VoltMax_SigSts_Value(&tmpRead_0);

    /* Inport: '<Root>/VeCRDB_y_BPCM_Cell_VoltMin_SigSts' */
    (void)Rte_Read_VeCRDB_y_BPCM_Cell_VoltMin_SigSts_Value(&tmpRead);

    /* VariantMerge generated from: '<S477>/VeCIDB_b_BATTERY_HV_VLIMITS_CalDiagEnbl' incorporates:
     *  Constant: '<S562>/Calib'
     */
    CIDB_ac_B.VariantMergeForOutportVeCIDB_b_BATTERY_H =
        KeCIDB_b_BATTERY_HV_VLIMITS_ePT_SNA_DiagEnbl;

    /* RelationalOperator: '<S559>/Relational Operator3' incorporates:
     *  Constant: '<S559>/Constant3'
     *  DataStoreRead: '<S557>/Data Store Read1'
     *  S-Function (sfix_bitop): '<S559>/Bitwise Operator2'
     */
    rtb_RelationalOperator3 = ((((uint32)CIDB_ac_DW.StatusByte_InvData_BECM) &
        64U) == 0U);

    /* Logic: '<S558>/Logical1' incorporates:
     *  Constant: '<S558>/Constant Value'
     *  DataTypeConversion: '<S558>/Cast To Boolean7'
     *  DataTypeConversion: '<S558>/Cast To Boolean8'
     *  S-Function (sfix_bitop): '<S558>/Bitwise Operator7'
     *  S-Function (sfix_bitop): '<S558>/Bitwise Operator8'
     */
    VeCIDB_b_BATTERY_HV_VLIMITS_FaultCriteria = (((((uint32)tmpRead_0) & 8U) !=
        0U) || ((((uint32)tmpRead) & 8U) != 0U));

    /* Outputs for Atomic SubSystem: '<S559>/EdgeFalling1' */
    /* Logic: '<S565>/AND' incorporates:
     *  Logic: '<S565>/OR1'
     *  UnitDelay: '<S565>/Unit Delay'
     */
    rtb_AND_bk = ((!rtb_RelationalOperator3) && (CIDB_ac_DW.UnitDelay_DSTATE_k));

    /* Update for UnitDelay: '<S565>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_k = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S559>/EdgeFalling1' */

    /* Chart: '<S559>/Diagnostic Debounce' incorporates:
     *  Constant: '<S559>/Constant1'
     *  Constant: '<S560>/Calib'
     *  Constant: '<S561>/Calib'
     *  Constant: '<S563>/Calib'
     *  DataStoreRead: '<S557>/Data Store Read1'
     *  Logic: '<S559>/Logical Operator'
     *  Logic: '<S559>/Logical Operator1'
     *  Logic: '<S559>/Logical10'
     *  Logic: '<S559>/Logical12'
     *  Logic: '<S559>/Logical5'
     *  RelationalOperator: '<S559>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S559>/Bitwise Operator3'
     */
    CIDB_ac_DiagnosticDebounce_hp
        (((CIDB_ac_B.VariantMergeForOutportVeCIDB_b_BATTERY_H) &&
          (CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_U0412_Diag)) &&
         ((!KeCIDB_b_BATTERY_HV_VLIMITS_ePT_SNA_FailLatchEnable) || (((((uint32)
              CIDB_ac_DW.StatusByte_InvData_BECM) & 1U) == 0U) ||
           (!rtb_RelationalOperator3))),
         VeCIDB_b_BATTERY_HV_VLIMITS_FaultCriteria,
         KeCIDB_Cnt_BATTERY_HV_VLIMITS_ePT_SNA_FailLmt,
         KeCIDB_Cnt_BATTERY_HV_VLIMITS_ePT_SNAFailINC, rtb_AND_bk ||
         (CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_RstDia_e1h),
         &CIDB_ac_B.VeCIDB_e_BATTERY_HV_VLIMITS_ErrState);
}

#endif

/* System initialize for atomic system: '<S477>/U0412_COREBEV_20ms' */
#if Rte_SysCon_Variant_CIDB_U0412_Corebev

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0412_COREBEV_20ms_Init(void)
{
    /* Start for Constant: '<S573>/Calib' */
    CIDB_ac_B.VariantMergeForOutportVeCIDB_b_BATTERY_H =
        KeCIDB_b_BATTERY_HV_VLIMITS_ePT_SNA_DiagEnbl;

    /* SystemInitialize for Chart: '<S570>/Diagnostic Debounce' */
    CIDB_ac_DiagnosticDebounce_o_Init
        (&CIDB_ac_B.VeCIDB_e_BATTERY_HV_VLIMITS_ErrState);
}

#endif

/* Output and update for atomic system: '<S477>/U0412_COREBEV_20ms' */
#if Rte_SysCon_Variant_CIDB_U0412_Corebev

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0412_COREBEV_20ms(void)
{
    boolean rtb_AND_ny;
    boolean rtb_RelationalOperator3;

    /* Constant: '<S573>/Calib' */
    CIDB_ac_B.VariantMergeForOutportVeCIDB_b_BATTERY_H =
        KeCIDB_b_BATTERY_HV_VLIMITS_ePT_SNA_DiagEnbl;

    /* RelationalOperator: '<S570>/Relational Operator3' incorporates:
     *  Constant: '<S570>/Constant3'
     *  DataStoreRead: '<S568>/Data Store Read1'
     *  S-Function (sfix_bitop): '<S570>/Bitwise Operator2'
     */
    rtb_RelationalOperator3 = ((((uint32)CIDB_ac_DW.StatusByte_InvData_BECM) &
        64U) == 0U);

    /* Logic: '<S569>/Logical1' incorporates:
     *  Constant: '<S569>/Constant Value'
     *  DataTypeConversion: '<S569>/Cast To Boolean1'
     *  DataTypeConversion: '<S569>/Cast To Boolean7'
     *  S-Function (sfix_bitop): '<S569>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S569>/Bitwise Operator7'
     */
    VeCIDB_b_BATTERY_HV_VLIMITS_FaultCriteria = (((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_Cell_) & 8U) != 0U) ||
        ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_Cel_n) & 8U) !=
         0U));

    /* Outputs for Atomic SubSystem: '<S570>/EdgeFalling1' */
    /* Logic: '<S576>/AND' incorporates:
     *  Logic: '<S576>/OR1'
     *  UnitDelay: '<S576>/Unit Delay'
     */
    rtb_AND_ny = ((!rtb_RelationalOperator3) && (CIDB_ac_DW.UnitDelay_DSTATE_mq));

    /* Update for UnitDelay: '<S576>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_mq = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S570>/EdgeFalling1' */

    /* Chart: '<S570>/Diagnostic Debounce' incorporates:
     *  Constant: '<S570>/Constant1'
     *  Constant: '<S571>/Calib'
     *  Constant: '<S572>/Calib'
     *  Constant: '<S574>/Calib'
     *  DataStoreRead: '<S568>/Data Store Read1'
     *  Logic: '<S570>/Logical Operator'
     *  Logic: '<S570>/Logical Operator1'
     *  Logic: '<S570>/Logical10'
     *  Logic: '<S570>/Logical12'
     *  Logic: '<S570>/Logical5'
     *  RelationalOperator: '<S570>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S570>/Bitwise Operator3'
     */
    CIDB_ac_DiagnosticDebounce_hp
        (((CIDB_ac_B.VariantMergeForOutportVeCIDB_b_BATTERY_H) &&
          (CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_U0412_Diag)) &&
         ((!KeCIDB_b_BATTERY_HV_VLIMITS_ePT_SNA_FailLatchEnable) || (((((uint32)
              CIDB_ac_DW.StatusByte_InvData_BECM) & 1U) == 0U) ||
           (!rtb_RelationalOperator3))),
         VeCIDB_b_BATTERY_HV_VLIMITS_FaultCriteria,
         KeCIDB_Cnt_BATTERY_HV_VLIMITS_ePT_SNA_FailLmt,
         KeCIDB_Cnt_BATTERY_HV_VLIMITS_ePT_SNAFailINC, rtb_AND_ny ||
         (CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_RstDia_e1h),
         &CIDB_ac_B.VeCIDB_e_BATTERY_HV_VLIMITS_ErrState);
}

#endif

/* System initialize for atomic system: '<S477>/U0412_Pegasus_20ms' */
#if Rte_SysCon_Variant_CIDB_U0412_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0412_Pegasus_20ms_Init(void)
{
    /* Start for Constant: '<S584>/Calib' */
    CIDB_ac_B.VariantMergeForOutportVeCIDB_b_BATTERY_H =
        KeCIDB_b_BATTERY_HV_VLIMITS_ePT_SNA_DiagEnbl;

    /* SystemInitialize for Chart: '<S581>/Diagnostic Debounce' */
    CIDB_ac_DiagnosticDebounce_o_Init
        (&CIDB_ac_B.VeCIDB_e_BATTERY_HV_VLIMITS_ErrState);
}

#endif

/* Output and update for atomic system: '<S477>/U0412_Pegasus_20ms' */
#if Rte_SysCon_Variant_CIDB_U0412_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0412_Pegasus_20ms(void)
{
    boolean rtb_AND_ex;
    boolean rtb_RelationalOperator3;

    /* Constant: '<S584>/Calib' */
    CIDB_ac_B.VariantMergeForOutportVeCIDB_b_BATTERY_H =
        KeCIDB_b_BATTERY_HV_VLIMITS_ePT_SNA_DiagEnbl;

    /* RelationalOperator: '<S581>/Relational Operator3' incorporates:
     *  Constant: '<S581>/Constant3'
     *  DataStoreRead: '<S579>/Data Store Read1'
     *  S-Function (sfix_bitop): '<S581>/Bitwise Operator2'
     */
    rtb_RelationalOperator3 = ((((uint32)CIDB_ac_DW.StatusByte_InvData_BECM) &
        64U) == 0U);

    /* Logic: '<S580>/Logical1' incorporates:
     *  Constant: '<S580>/Constant Value'
     *  DataTypeConversion: '<S580>/Cast To Boolean1'
     *  DataTypeConversion: '<S580>/Cast To Boolean7'
     *  S-Function (sfix_bitop): '<S580>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S580>/Bitwise Operator7'
     */
    VeCIDB_b_BATTERY_HV_VLIMITS_FaultCriteria = (((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_Cell_) & 8U) != 0U) ||
        ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_Cel_n) & 8U) !=
         0U));

    /* Outputs for Atomic SubSystem: '<S581>/EdgeFalling1' */
    /* Logic: '<S587>/AND' incorporates:
     *  Logic: '<S587>/OR1'
     *  UnitDelay: '<S587>/Unit Delay'
     */
    rtb_AND_ex = ((!rtb_RelationalOperator3) && (CIDB_ac_DW.UnitDelay_DSTATE_an));

    /* Update for UnitDelay: '<S587>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_an = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S581>/EdgeFalling1' */

    /* Chart: '<S581>/Diagnostic Debounce' incorporates:
     *  Constant: '<S581>/Constant1'
     *  Constant: '<S582>/Calib'
     *  Constant: '<S583>/Calib'
     *  Constant: '<S585>/Calib'
     *  DataStoreRead: '<S579>/Data Store Read1'
     *  Logic: '<S581>/Logical Operator'
     *  Logic: '<S581>/Logical Operator1'
     *  Logic: '<S581>/Logical10'
     *  Logic: '<S581>/Logical12'
     *  Logic: '<S581>/Logical5'
     *  RelationalOperator: '<S581>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S581>/Bitwise Operator3'
     */
    CIDB_ac_DiagnosticDebounce_hp
        (((CIDB_ac_B.VariantMergeForOutportVeCIDB_b_BATTERY_H) &&
          (CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_U0412_Diag)) &&
         ((!KeCIDB_b_BATTERY_HV_VLIMITS_ePT_SNA_FailLatchEnable) || (((((uint32)
              CIDB_ac_DW.StatusByte_InvData_BECM) & 1U) == 0U) ||
           (!rtb_RelationalOperator3))),
         VeCIDB_b_BATTERY_HV_VLIMITS_FaultCriteria,
         KeCIDB_Cnt_BATTERY_HV_VLIMITS_ePT_SNA_FailLmt,
         KeCIDB_Cnt_BATTERY_HV_VLIMITS_ePT_SNAFailINC, rtb_AND_ex ||
         (CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_RstDia_e1h),
         &CIDB_ac_B.VeCIDB_e_BATTERY_HV_VLIMITS_ErrState);
}

#endif

/* Output and update for atomic system: '<S478>/U048D_BLUEN_20ms' */
#if Rte_SysCon_Variant_CIDB_U048D_BLUEN

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U048D_BLUEN_20ms(void)
{
    sint32 tmp;
    boolean rtb_AND_ai;
    boolean rtb_RelationalOperator3;

    /* RelationalOperator: '<S595>/Relational Operator3' incorporates:
     *  Constant: '<S595>/Constant3'
     *  DataStoreRead: '<S593>/Data Store Read'
     *  S-Function (sfix_bitop): '<S595>/Bitwise Operator2'
     */
    rtb_RelationalOperator3 = ((((uint32)CIDB_ac_DW.StatusByte_InvData_DM_PICM)
        & 64U) == 0U);

    /* Logic: '<S594>/Logical1' incorporates:
     *  Constant: '<S594>/Constant Value'
     *  DataTypeConversion: '<S594>/Cast To Boolean'
     *  DataTypeConversion: '<S594>/Cast To Boolean1'
     *  DataTypeConversion: '<S594>/Cast To Boolean2'
     *  DataTypeConversion: '<S594>/Cast To Boolean3'
     *  DataTypeConversion: '<S594>/Cast To Boolean4'
     *  DataTypeConversion: '<S594>/Cast To Boolean5'
     *  DataTypeConversion: '<S594>/Cast To Boolean6'
     *  DataTypeConversion: '<S594>/Cast To Boolean7'
     *  DataTypeConversion: '<S594>/Cast To Boolean8'
     *  DataTypeConversion: '<S594>/Cast To Boolean9'
     *  S-Function (sfix_bitop): '<S594>/Bitwise Operator'
     *  S-Function (sfix_bitop): '<S594>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S594>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S594>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S594>/Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S594>/Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S594>/Bitwise Operator6'
     *  S-Function (sfix_bitop): '<S594>/Bitwise Operator7'
     *  S-Function (sfix_bitop): '<S594>/Bitwise Operator8'
     *  S-Function (sfix_bitop): '<S594>/Bitwise Operator9'
     */
    VeCIDB_b_APM_VDCM_DMPI_FaultCriteria = (((((((((((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_APM_CtrlSt) & 8U) != 0U) ||
        ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_APM_Failur) & 8U) !=
         0U)) || ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_APM_Fail_k)
                   & 8U) != 0U)) || ((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_APM_HV_I_F) & 8U) != 0U)) ||
        ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_APM_HV_V_F) & 8U) !=
         0U)) || ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_APM_IdcHvS)
                   & 8U) != 0U)) || ((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_APM_LV_I_F) & 8U) != 0U)) ||
        ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_APM_LV_V_F) & 8U) !=
         0U)) || ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_APM_PSFB_k)
                   & 8U) != 0U)) || ((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_APM_PSFB_T) & 8U) != 0U));

    /* Outputs for Atomic SubSystem: '<S595>/EdgeFalling1' */
    /* Logic: '<S601>/AND' incorporates:
     *  Logic: '<S601>/OR1'
     *  UnitDelay: '<S601>/Unit Delay'
     */
    rtb_AND_ai = ((!rtb_RelationalOperator3) && (CIDB_ac_DW.UnitDelay_DSTATE_eb));

    /* Update for UnitDelay: '<S601>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_eb = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S595>/EdgeFalling1' */

    /* Chart: '<S595>/Diagnostic Debounce' incorporates:
     *  Constant: '<S590>/Constant'
     *  Constant: '<S595>/Constant1'
     *  Constant: '<S596>/Calib'
     *  Constant: '<S597>/Calib'
     *  Constant: '<S598>/Calib'
     *  Constant: '<S599>/Calib'
     *  Constant: '<S602>/Calib'
     *  DataStoreRead: '<S593>/Data Store Read'
     *  Logic: '<S590>/Logical Operator'
     *  Logic: '<S590>/Logical Operator2'
     *  Logic: '<S595>/Logical Operator'
     *  Logic: '<S595>/Logical Operator1'
     *  Logic: '<S595>/Logical10'
     *  Logic: '<S595>/Logical12'
     *  Logic: '<S595>/Logical5'
     *  RelationalOperator: '<S595>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S590>/Bitwise AND'
     *  S-Function (sfix_bitop): '<S595>/Bitwise Operator3'
     */
    /* Gateway: DiagnosticDebounceimplausibleSignalSNA/Diagnostic Debounce */
    /* During: DiagnosticDebounceimplausibleSignalSNA/Diagnostic Debounce */
    /* Entry Internal: DiagnosticDebounceimplausibleSignalSNA/Diagnostic Debounce */
    /* Transition: '<S600>:499' */
    VeCIDB_b_APM_VDCM_DMPI_Fail = false;
    VeCIDB_b_APM_VDCM_DMPI_Pass = false;
    if (rtb_AND_ai || (CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_RstDia_e1h))
    {
        /* RelationalOperator: '<S591>/Comparison1' */
        /* Transition: '<S600>:500' */
        /* Transition: '<S600>:502' */
        CIDB_ac_B.Status_f = CeDFIB_e_Init;
        VeCIDB_Cnt_APM_VDCM_DMPI_Fail = 0U;
        VeCIDB_Cnt_APM_VDCM_DMPI_Init = 0U;

        /* Transition: '<S600>:505' */
        /* Transition: '<S600>:533' */
        /* Transition: '<S600>:545' */
        /* Transition: '<S600>:546' */
    }
    else
    {
        /* Transition: '<S600>:501' */
        if (((KeCIDB_b_APM_VDCM_ePT_SNA_DiagEnbl) &&
                (((CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_IsDiagGl_e) &&
                  (KeCIDB_b_U048D_DiagEnbl)) && ((((uint32)
                 CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_APM_CtrlSt) & 4U) == 0U)))
            && ((!KeCIDB_b_APM_VDCM_ePT_SNA_FailLatchEnable) || (((((uint32)
                 CIDB_ac_DW.StatusByte_InvData_DM_PICM) & 1U) == 0U) ||
                (!rtb_RelationalOperator3))))
        {
            /* Transition: '<S600>:504' */
            if (((uint32)CIDB_ac_B.Status_f) == CeDFIB_e_Init)
            {
                /* Transition: '<S600>:507' */
                if (!VeCIDB_b_APM_VDCM_DMPI_FaultCriteria)
                {
                    /* Transition: '<S600>:506' */
                    /* Transition: '<S600>:509' */
                    tmp = ((sint32)VeCIDB_Cnt_APM_VDCM_DMPI_Init) + ((sint32)
                        KeCIDB_Cnt_APM_VDCM_ePT_SNAFailINC);
                    if (tmp > 65535)
                    {
                        tmp = 65535;
                    }

                    VeCIDB_Cnt_APM_VDCM_DMPI_Init = (uint16)tmp;
                    if (VeCIDB_Cnt_APM_VDCM_DMPI_Init >=
                            KeCIDB_Cnt_APM_VDCM_ePT_SNA_FailLmt)
                    {
                        /* RelationalOperator: '<S591>/Comparison1' */
                        /* Transition: '<S600>:511' */
                        /* Transition: '<S600>:513' */
                        CIDB_ac_B.Status_f = CeDFIB_e_Pass;
                        VeCIDB_b_APM_VDCM_DMPI_Pass = true;

                        /* Transition: '<S600>:516' */
                    }
                    else
                    {
                        /* Transition: '<S600>:512' */
                    }

                    /* Transition: '<S600>:515' */
                }
                else
                {
                    /* Transition: '<S600>:508' */
                    VeCIDB_Cnt_APM_VDCM_DMPI_Init = 0U;
                }

                /* Transition: '<S600>:514' */
            }
            else
            {
                /* Transition: '<S600>:510' */
            }

            /* Transition: '<S600>:517' */
            if ((((((uint32)CIDB_ac_B.Status_f) == CeDFIB_e_Pass) || (((uint32)
                    CIDB_ac_B.Status_f) == CeDFIB_e_Pass_FaultRemoved)) ||
                    (((uint32)CIDB_ac_B.Status_f) ==
                     CeDFIB_e_Pass_FaultFiltering)) || (((uint32)
                    CIDB_ac_B.Status_f) == CeDFIB_e_Init))
            {
                /* Transition: '<S600>:518' */
                if (VeCIDB_b_APM_VDCM_DMPI_FaultCriteria)
                {
                    /* Transition: '<S600>:519' */
                    /* Transition: '<S600>:522' */
                    tmp = ((sint32)VeCIDB_Cnt_APM_VDCM_DMPI_Fail) + ((sint32)
                        KeCIDB_Cnt_APM_VDCM_ePT_SNAFailINC);
                    if (tmp > 65535)
                    {
                        tmp = 65535;
                    }

                    VeCIDB_Cnt_APM_VDCM_DMPI_Fail = (uint16)tmp;
                    if (VeCIDB_Cnt_APM_VDCM_DMPI_Fail >
                            KeCIDB_Cnt_APM_VDCM_ePT_SNA_FailLmt)
                    {
                        /* RelationalOperator: '<S591>/Comparison1' */
                        /* Transition: '<S600>:524' */
                        /* Transition: '<S600>:528' */
                        CIDB_ac_B.Status_f = CeDFIB_e_Fail;
                        VeCIDB_b_APM_VDCM_DMPI_Fail = true;
                        tmp = ((sint32)KeCIDB_Cnt_APM_VDCM_ePT_SNA_FailLmt) + 1;
                        if ((((sint32)KeCIDB_Cnt_APM_VDCM_ePT_SNA_FailLmt) + 1) >
                            65535)
                        {
                            tmp = 65535;
                        }

                        VeCIDB_Cnt_APM_VDCM_DMPI_Fail = (uint16)tmp;
                    }
                    else
                    {
                        /* Transition: '<S600>:557' */
                        if (((uint32)CIDB_ac_B.Status_f) != CeDFIB_e_Init)
                        {
                            /* RelationalOperator: '<S591>/Comparison1' */
                            /* Transition: '<S600>:563' */
                            CIDB_ac_B.Status_f = CeDFIB_e_Pass_FaultFiltering;

                            /* Transition: '<S600>:564' */
                            /* Transition: '<S600>:562' */
                        }
                        else
                        {
                            /* Transition: '<S600>:559' */
                            /* Transition: '<S600>:561' */
                            /* Transition: '<S600>:562' */
                        }
                    }
                }
                else
                {
                    /* Transition: '<S600>:521' */
                    if (((sint32)VeCIDB_Cnt_APM_VDCM_DMPI_Fail) > 0)
                    {
                        /* Transition: '<S600>:523' */
                        /* Transition: '<S600>:567' */
                        tmp = ((sint32)VeCIDB_Cnt_APM_VDCM_DMPI_Fail) - 1;
                        if ((((sint32)VeCIDB_Cnt_APM_VDCM_DMPI_Fail) - 1) < 0)
                        {
                            tmp = 0;
                        }

                        VeCIDB_Cnt_APM_VDCM_DMPI_Fail = (uint16)tmp;
                        if (((uint32)CIDB_ac_B.Status_f) != CeDFIB_e_Init)
                        {
                            /* RelationalOperator: '<S591>/Comparison1' */
                            /* Transition: '<S600>:574' */
                            CIDB_ac_B.Status_f = CeDFIB_e_Pass_FaultRemoved;

                            /* Transition: '<S600>:569' */
                        }
                        else
                        {
                            /* Transition: '<S600>:572' */
                            /* Transition: '<S600>:573' */
                        }
                    }
                    else
                    {
                        /* Transition: '<S600>:577' */
                        if (((uint32)CIDB_ac_B.Status_f) != CeDFIB_e_Init)
                        {
                            /* RelationalOperator: '<S591>/Comparison1' */
                            /* Transition: '<S600>:582' */
                            CIDB_ac_B.Status_f = CeDFIB_e_Pass;

                            /* Transition: '<S600>:581' */
                        }
                        else
                        {
                            /* Transition: '<S600>:579' */
                            /* Transition: '<S600>:580' */
                        }

                        /* Transition: '<S600>:583' */
                        /* Transition: '<S600>:569' */
                    }

                    /* Transition: '<S600>:570' */
                    /* Transition: '<S600>:564' */
                    /* Transition: '<S600>:562' */
                }

                /* Transition: '<S600>:532' */
                /* Transition: '<S600>:533' */
                /* Transition: '<S600>:545' */
                /* Transition: '<S600>:546' */
            }
            else
            {
                /* Transition: '<S600>:520' */
                if ((((uint32)CIDB_ac_B.Status_f) == CeDFIB_e_Fail) || (((uint32)
                        CIDB_ac_B.Status_f) == CeDFIB_e_Fail_FaultRemoved))
                {
                    /* Transition: '<S600>:534' */
                    if (VeCIDB_b_APM_VDCM_DMPI_FaultCriteria)
                    {
                        /* Transition: '<S600>:535' */
                        /* Transition: '<S600>:538' */
                        tmp = ((sint32)KeCIDB_Cnt_APM_VDCM_ePT_SNA_FailLmt) + 1;
                        if ((((sint32)KeCIDB_Cnt_APM_VDCM_ePT_SNA_FailLmt) + 1) >
                            65535)
                        {
                            tmp = 65535;
                        }

                        VeCIDB_Cnt_APM_VDCM_DMPI_Fail = (uint16)tmp;

                        /* RelationalOperator: '<S591>/Comparison1' incorporates:
                         *  Constant: '<S597>/Calib'
                         */
                        CIDB_ac_B.Status_f = CeDFIB_e_Fail;
                    }
                    else
                    {
                        /* Transition: '<S600>:537' */
                        tmp = ((sint32)VeCIDB_Cnt_APM_VDCM_DMPI_Fail) - 1;
                        if ((((sint32)VeCIDB_Cnt_APM_VDCM_DMPI_Fail) - 1) < 0)
                        {
                            tmp = 0;
                        }

                        VeCIDB_Cnt_APM_VDCM_DMPI_Fail = (uint16)tmp;
                        if (((sint32)VeCIDB_Cnt_APM_VDCM_DMPI_Fail) <= 0)
                        {
                            /* RelationalOperator: '<S591>/Comparison1' */
                            /* Transition: '<S600>:539' */
                            /* Transition: '<S600>:541' */
                            CIDB_ac_B.Status_f = CeDFIB_e_Pass;
                            VeCIDB_b_APM_VDCM_DMPI_Pass = true;
                        }
                        else
                        {
                            /* RelationalOperator: '<S591>/Comparison1' */
                            /* Transition: '<S600>:540' */
                            CIDB_ac_B.Status_f = CeDFIB_e_Fail_FaultRemoved;

                            /* Transition: '<S600>:542' */
                        }

                        /* Transition: '<S600>:543' */
                    }

                    /* Transition: '<S600>:544' */
                    /* Transition: '<S600>:545' */
                    /* Transition: '<S600>:546' */
                }
                else
                {
                    /* Transition: '<S600>:536' */
                }
            }
        }
        else
        {
            /* Transition: '<S600>:503' */
            /* Transition: '<S600>:505' */
            /* Transition: '<S600>:533' */
            /* Transition: '<S600>:545' */
            /* Transition: '<S600>:546' */
        }
    }

    /* End of Chart: '<S595>/Diagnostic Debounce' */

    /* RelationalOperator: '<S591>/Comparison1' incorporates:
     *  Constant: '<S604>/Constant'
     */
    /* Transition: '<S600>:547' */
    VeCIDB_b_U048D_Fail = (((uint32)CIDB_ac_B.Status_f) == CeDFIB_e_Fail);

    /* RelationalOperator: '<S591>/Relational Operator2' incorporates:
     *  Constant: '<S591>/Constant2'
     *  DataStoreRead: '<S591>/StatusByte_InvData_IDCM'
     *  S-Function (sfix_bitop): '<S591>/Bitwise Operator1'
     */
    rtb_RelationalOperator3 = ((((sint32)CIDB_ac_DW.StatusByte_InvData_DM_PICM)
        & 64) == 64);

    /* Outputs for Atomic SubSystem: '<S591>/EdgeRising' */
    /* Logic: '<S603>/OR1' incorporates:
     *  UnitDelay: '<S603>/Unit Delay'
     */
    rtb_AND_ai = !CIDB_ac_DW.UnitDelay_DSTATE_iv;

    /* Update for UnitDelay: '<S603>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_iv = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S591>/EdgeRising' */

    /* Logic: '<S591>/Logical10' incorporates:
     *  Constant: '<S598>/Calib'
     *  Constant: '<S605>/Constant'
     *  Logic: '<S591>/Logical3'
     *  Logic: '<S591>/Logical4'
     *  RelationalOperator: '<S591>/Comparison8'
     */
    VeCIDB_b_U048D_Pass = (((!KeCIDB_b_APM_VDCM_ePT_SNA_DiagEnbl) || (((uint32)
        CIDB_ac_B.Status_f) == CeDFIB_e_Pass)) &&
                           (KeCIDB_b_APM_VDCM_ePT_SNA_DiagEnbl));

    /* Outputs for Enabled SubSystem: '<S591>/Subsystem1' incorporates:
     *  EnablePort: '<S607>/Enable'
     */
    if (VeCIDB_b_U048D_Fail)
    {
        /* Outport: '<Root>/VeCIDB_e_FaultSts_InvData_DM_PICM' incorporates:
         *  Constant: '<S610>/Constant'
         */
        (void)Rte_Write_VeCIDB_e_FaultSts_InvData_DM_PICM_Value(CeDFIB_e_Fail);
    }

    /* End of Outputs for SubSystem: '<S591>/Subsystem1' */

    /* Outputs for Enabled SubSystem: '<S591>/Subsystem' incorporates:
     *  EnablePort: '<S606>/Enable'
     */
    if (VeCIDB_b_U048D_Pass)
    {
        /* Outport: '<Root>/VeCIDB_e_FaultSts_InvData_DM_PICM' incorporates:
         *  Constant: '<S609>/Constant'
         */
        (void)Rte_Write_VeCIDB_e_FaultSts_InvData_DM_PICM_Value(CeDFIB_e_Pass);
    }

    /* End of Outputs for SubSystem: '<S591>/Subsystem' */

    /* Outputs for Enabled SubSystem: '<S591>/Subsystem2' incorporates:
     *  EnablePort: '<S608>/Enable'
     */
    /* Outputs for Atomic SubSystem: '<S591>/EdgeRising' */
    /* Logic: '<S603>/AND' */
    if (rtb_RelationalOperator3 && rtb_AND_ai)
    {
        /* Outport: '<Root>/VeCIDB_e_FaultSts_InvData_DM_PICM' incorporates:
         *  Constant: '<S611>/Constant'
         */
        (void)Rte_Write_VeCIDB_e_FaultSts_InvData_DM_PICM_Value(CeDFIB_e_Init);
    }

    /* End of Logic: '<S603>/AND' */
    /* End of Outputs for SubSystem: '<S591>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S591>/Subsystem2' */
}

#endif

/*
 * Output and update for atomic system:
 *    '<S621>/Diagnostic Debounce'
 *    '<S663>/Diagnostic Debounce'
 */
#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_DiagnosticDebounce_pc(VAR(boolean,
    AUTOMATIC) rtu_EnDiag, VAR(boolean, AUTOMATIC) rtu_Err, VAR(uint16,
    AUTOMATIC) rtu_FThr, VAR(uint8, AUTOMATIC) rtu_FInc, VAR(boolean, AUTOMATIC)
    rtu_Reset, P2VAR(B_DiagnosticDebounce_CIDB_ac_hx_T, AUTOMATIC, CIDB_VAR_INIT)
    localB)
{
    sint32 tmp;

    /* Chart: '<S621>/Diagnostic Debounce' */
    /* Gateway: DiagnosticDebounceimplausibleSignalSNA/Diagnostic Debounce */
    /* During: DiagnosticDebounceimplausibleSignalSNA/Diagnostic Debounce */
    /* Entry Internal: DiagnosticDebounceimplausibleSignalSNA/Diagnostic Debounce */
    /* Transition: '<S626>:499' */
    VeCIDB_b_APM_VDCM_Fail = false;
    VeCIDB_b_APM_VDCM_Pass = false;
    if (rtu_Reset)
    {
        /* Transition: '<S626>:500' */
        /* Transition: '<S626>:502' */
        localB->Status = CeDFIB_e_Init;
        VeCIDB_Cnt_APM_VDCM_Fail = 0U;
        VeCIDB_Cnt_APM_VDCM_Init = 0U;

        /* Transition: '<S626>:505' */
        /* Transition: '<S626>:533' */
        /* Transition: '<S626>:545' */
        /* Transition: '<S626>:546' */
    }
    else
    {
        /* Transition: '<S626>:501' */
        if (rtu_EnDiag)
        {
            /* Transition: '<S626>:504' */
            if (((uint32)localB->Status) == CeDFIB_e_Init)
            {
                /* Transition: '<S626>:507' */
                if (!rtu_Err)
                {
                    /* Transition: '<S626>:506' */
                    /* Transition: '<S626>:509' */
                    tmp = ((sint32)VeCIDB_Cnt_APM_VDCM_Init) + ((sint32)rtu_FInc);
                    if (tmp > 65535)
                    {
                        tmp = 65535;
                    }

                    VeCIDB_Cnt_APM_VDCM_Init = (uint16)tmp;
                    if (VeCIDB_Cnt_APM_VDCM_Init >= rtu_FThr)
                    {
                        /* Transition: '<S626>:511' */
                        /* Transition: '<S626>:513' */
                        localB->Status = CeDFIB_e_Pass;
                        VeCIDB_b_APM_VDCM_Pass = true;

                        /* Transition: '<S626>:516' */
                    }
                    else
                    {
                        /* Transition: '<S626>:512' */
                    }

                    /* Transition: '<S626>:515' */
                }
                else
                {
                    /* Transition: '<S626>:508' */
                    VeCIDB_Cnt_APM_VDCM_Init = 0U;
                }

                /* Transition: '<S626>:514' */
            }
            else
            {
                /* Transition: '<S626>:510' */
            }

            /* Transition: '<S626>:517' */
            if ((((((uint32)localB->Status) == CeDFIB_e_Pass) || (((uint32)
                    localB->Status) == CeDFIB_e_Pass_FaultRemoved)) || (((uint32)
                    localB->Status) == CeDFIB_e_Pass_FaultFiltering)) ||
                    (((uint32)localB->Status) == CeDFIB_e_Init))
            {
                /* Transition: '<S626>:518' */
                if (rtu_Err)
                {
                    /* Transition: '<S626>:519' */
                    /* Transition: '<S626>:522' */
                    tmp = ((sint32)VeCIDB_Cnt_APM_VDCM_Fail) + ((sint32)rtu_FInc);
                    if (tmp > 65535)
                    {
                        tmp = 65535;
                    }

                    VeCIDB_Cnt_APM_VDCM_Fail = (uint16)tmp;
                    if (VeCIDB_Cnt_APM_VDCM_Fail > rtu_FThr)
                    {
                        /* Transition: '<S626>:524' */
                        /* Transition: '<S626>:528' */
                        localB->Status = CeDFIB_e_Fail;
                        VeCIDB_b_APM_VDCM_Fail = true;
                        VeCIDB_Cnt_APM_VDCM_Fail = (uint16)((sint32)(((sint32)
                            rtu_FThr) + 1));
                    }
                    else
                    {
                        /* Transition: '<S626>:557' */
                        if (((uint32)localB->Status) != CeDFIB_e_Init)
                        {
                            /* Transition: '<S626>:563' */
                            localB->Status = CeDFIB_e_Pass_FaultFiltering;

                            /* Transition: '<S626>:564' */
                            /* Transition: '<S626>:562' */
                        }
                        else
                        {
                            /* Transition: '<S626>:559' */
                            /* Transition: '<S626>:561' */
                            /* Transition: '<S626>:562' */
                        }
                    }
                }
                else
                {
                    /* Transition: '<S626>:521' */
                    if (((sint32)VeCIDB_Cnt_APM_VDCM_Fail) > 0)
                    {
                        /* Transition: '<S626>:523' */
                        /* Transition: '<S626>:567' */
                        tmp = ((sint32)VeCIDB_Cnt_APM_VDCM_Fail) - 1;
                        if ((((sint32)VeCIDB_Cnt_APM_VDCM_Fail) - 1) < 0)
                        {
                            tmp = 0;
                        }

                        VeCIDB_Cnt_APM_VDCM_Fail = (uint16)tmp;
                        if (((uint32)localB->Status) != CeDFIB_e_Init)
                        {
                            /* Transition: '<S626>:574' */
                            localB->Status = CeDFIB_e_Pass_FaultRemoved;

                            /* Transition: '<S626>:569' */
                        }
                        else
                        {
                            /* Transition: '<S626>:572' */
                            /* Transition: '<S626>:573' */
                        }
                    }
                    else
                    {
                        /* Transition: '<S626>:577' */
                        if (((uint32)localB->Status) != CeDFIB_e_Init)
                        {
                            /* Transition: '<S626>:582' */
                            localB->Status = CeDFIB_e_Pass;

                            /* Transition: '<S626>:581' */
                        }
                        else
                        {
                            /* Transition: '<S626>:579' */
                            /* Transition: '<S626>:580' */
                        }

                        /* Transition: '<S626>:583' */
                        /* Transition: '<S626>:569' */
                    }

                    /* Transition: '<S626>:570' */
                    /* Transition: '<S626>:564' */
                    /* Transition: '<S626>:562' */
                }

                /* Transition: '<S626>:532' */
                /* Transition: '<S626>:533' */
                /* Transition: '<S626>:545' */
                /* Transition: '<S626>:546' */
            }
            else
            {
                /* Transition: '<S626>:520' */
                if ((((uint32)localB->Status) == CeDFIB_e_Fail) || (((uint32)
                        localB->Status) == CeDFIB_e_Fail_FaultRemoved))
                {
                    /* Transition: '<S626>:534' */
                    if (rtu_Err)
                    {
                        /* Transition: '<S626>:535' */
                        /* Transition: '<S626>:538' */
                        tmp = ((sint32)rtu_FThr) + 1;
                        if ((((sint32)rtu_FThr) + 1) > 65535)
                        {
                            tmp = 65535;
                        }

                        VeCIDB_Cnt_APM_VDCM_Fail = (uint16)tmp;
                        localB->Status = CeDFIB_e_Fail;
                    }
                    else
                    {
                        /* Transition: '<S626>:537' */
                        tmp = ((sint32)VeCIDB_Cnt_APM_VDCM_Fail) - 1;
                        if ((((sint32)VeCIDB_Cnt_APM_VDCM_Fail) - 1) < 0)
                        {
                            tmp = 0;
                        }

                        VeCIDB_Cnt_APM_VDCM_Fail = (uint16)tmp;
                        if (((sint32)VeCIDB_Cnt_APM_VDCM_Fail) <= 0)
                        {
                            /* Transition: '<S626>:539' */
                            /* Transition: '<S626>:541' */
                            localB->Status = CeDFIB_e_Pass;
                            VeCIDB_b_APM_VDCM_Pass = true;
                        }
                        else
                        {
                            /* Transition: '<S626>:540' */
                            localB->Status = CeDFIB_e_Fail_FaultRemoved;

                            /* Transition: '<S626>:542' */
                        }

                        /* Transition: '<S626>:543' */
                    }

                    /* Transition: '<S626>:544' */
                    /* Transition: '<S626>:545' */
                    /* Transition: '<S626>:546' */
                }
                else
                {
                    /* Transition: '<S626>:536' */
                }
            }
        }
        else
        {
            /* Transition: '<S626>:503' */
            /* Transition: '<S626>:505' */
            /* Transition: '<S626>:533' */
            /* Transition: '<S626>:545' */
            /* Transition: '<S626>:546' */
        }
    }

    /* End of Chart: '<S621>/Diagnostic Debounce' */
    /* Transition: '<S626>:547' */
}

#endif

/*
 * Output and update for atomic system:
 *    '<S631>/Diagnostic Debounce'
 *    '<S673>/Diagnostic Debounce'
 */
#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_DiagnosticDebounce_f(VAR(boolean,
    AUTOMATIC) rtu_EnDiag, VAR(boolean, AUTOMATIC) rtu_Err, VAR(uint16,
    AUTOMATIC) rtu_FThr, VAR(uint8, AUTOMATIC) rtu_FInc, VAR(boolean, AUTOMATIC)
    rtu_Reset, P2VAR(B_DiagnosticDebounce_CIDB_ac_i_T, AUTOMATIC, CIDB_VAR_INIT)
    localB)
{
    sint32 tmp;

    /* Chart: '<S631>/Diagnostic Debounce' */
    /* Gateway: DiagnosticDebounceimplausibleSignalSNA/Diagnostic Debounce */
    /* During: DiagnosticDebounceimplausibleSignalSNA/Diagnostic Debounce */
    /* Entry Internal: DiagnosticDebounceimplausibleSignalSNA/Diagnostic Debounce */
    /* Transition: '<S636>:499' */
    VeCIDB_b_OBCM_VDCM_Fail = false;
    VeCIDB_b_OBCM_VDCM_Pass = false;
    if (rtu_Reset)
    {
        /* Transition: '<S636>:500' */
        /* Transition: '<S636>:502' */
        localB->Status = CeDFIB_e_Init;
        VeCIDB_Cnt_OBCM_VDCM_Fail = 0U;
        VeCIDB_Cnt_OBCM_VDCM_Init = 0U;

        /* Transition: '<S636>:505' */
        /* Transition: '<S636>:533' */
        /* Transition: '<S636>:545' */
        /* Transition: '<S636>:546' */
    }
    else
    {
        /* Transition: '<S636>:501' */
        if (rtu_EnDiag)
        {
            /* Transition: '<S636>:504' */
            if (((uint32)localB->Status) == CeDFIB_e_Init)
            {
                /* Transition: '<S636>:507' */
                if (!rtu_Err)
                {
                    /* Transition: '<S636>:506' */
                    /* Transition: '<S636>:509' */
                    tmp = ((sint32)VeCIDB_Cnt_OBCM_VDCM_Init) + ((sint32)
                        rtu_FInc);
                    if (tmp > 65535)
                    {
                        tmp = 65535;
                    }

                    VeCIDB_Cnt_OBCM_VDCM_Init = (uint16)tmp;
                    if (VeCIDB_Cnt_OBCM_VDCM_Init >= rtu_FThr)
                    {
                        /* Transition: '<S636>:511' */
                        /* Transition: '<S636>:513' */
                        localB->Status = CeDFIB_e_Pass;
                        VeCIDB_b_OBCM_VDCM_Pass = true;

                        /* Transition: '<S636>:516' */
                    }
                    else
                    {
                        /* Transition: '<S636>:512' */
                    }

                    /* Transition: '<S636>:515' */
                }
                else
                {
                    /* Transition: '<S636>:508' */
                    VeCIDB_Cnt_OBCM_VDCM_Init = 0U;
                }

                /* Transition: '<S636>:514' */
            }
            else
            {
                /* Transition: '<S636>:510' */
            }

            /* Transition: '<S636>:517' */
            if ((((((uint32)localB->Status) == CeDFIB_e_Pass) || (((uint32)
                    localB->Status) == CeDFIB_e_Pass_FaultRemoved)) || (((uint32)
                    localB->Status) == CeDFIB_e_Pass_FaultFiltering)) ||
                    (((uint32)localB->Status) == CeDFIB_e_Init))
            {
                /* Transition: '<S636>:518' */
                if (rtu_Err)
                {
                    /* Transition: '<S636>:519' */
                    /* Transition: '<S636>:522' */
                    tmp = ((sint32)VeCIDB_Cnt_OBCM_VDCM_Fail) + ((sint32)
                        rtu_FInc);
                    if (tmp > 65535)
                    {
                        tmp = 65535;
                    }

                    VeCIDB_Cnt_OBCM_VDCM_Fail = (uint16)tmp;
                    if (VeCIDB_Cnt_OBCM_VDCM_Fail > rtu_FThr)
                    {
                        /* Transition: '<S636>:524' */
                        /* Transition: '<S636>:528' */
                        localB->Status = CeDFIB_e_Fail;
                        VeCIDB_b_OBCM_VDCM_Fail = true;
                        VeCIDB_Cnt_OBCM_VDCM_Fail = (uint16)((sint32)(((sint32)
                            rtu_FThr) + 1));
                    }
                    else
                    {
                        /* Transition: '<S636>:557' */
                        if (((uint32)localB->Status) != CeDFIB_e_Init)
                        {
                            /* Transition: '<S636>:563' */
                            localB->Status = CeDFIB_e_Pass_FaultFiltering;

                            /* Transition: '<S636>:564' */
                            /* Transition: '<S636>:562' */
                        }
                        else
                        {
                            /* Transition: '<S636>:559' */
                            /* Transition: '<S636>:561' */
                            /* Transition: '<S636>:562' */
                        }
                    }
                }
                else
                {
                    /* Transition: '<S636>:521' */
                    if (((sint32)VeCIDB_Cnt_OBCM_VDCM_Fail) > 0)
                    {
                        /* Transition: '<S636>:523' */
                        /* Transition: '<S636>:567' */
                        tmp = ((sint32)VeCIDB_Cnt_OBCM_VDCM_Fail) - 1;
                        if ((((sint32)VeCIDB_Cnt_OBCM_VDCM_Fail) - 1) < 0)
                        {
                            tmp = 0;
                        }

                        VeCIDB_Cnt_OBCM_VDCM_Fail = (uint16)tmp;
                        if (((uint32)localB->Status) != CeDFIB_e_Init)
                        {
                            /* Transition: '<S636>:574' */
                            localB->Status = CeDFIB_e_Pass_FaultRemoved;

                            /* Transition: '<S636>:569' */
                        }
                        else
                        {
                            /* Transition: '<S636>:572' */
                            /* Transition: '<S636>:573' */
                        }
                    }
                    else
                    {
                        /* Transition: '<S636>:577' */
                        if (((uint32)localB->Status) != CeDFIB_e_Init)
                        {
                            /* Transition: '<S636>:582' */
                            localB->Status = CeDFIB_e_Pass;

                            /* Transition: '<S636>:581' */
                        }
                        else
                        {
                            /* Transition: '<S636>:579' */
                            /* Transition: '<S636>:580' */
                        }

                        /* Transition: '<S636>:583' */
                        /* Transition: '<S636>:569' */
                    }

                    /* Transition: '<S636>:570' */
                    /* Transition: '<S636>:564' */
                    /* Transition: '<S636>:562' */
                }

                /* Transition: '<S636>:532' */
                /* Transition: '<S636>:533' */
                /* Transition: '<S636>:545' */
                /* Transition: '<S636>:546' */
            }
            else
            {
                /* Transition: '<S636>:520' */
                if ((((uint32)localB->Status) == CeDFIB_e_Fail) || (((uint32)
                        localB->Status) == CeDFIB_e_Fail_FaultRemoved))
                {
                    /* Transition: '<S636>:534' */
                    if (rtu_Err)
                    {
                        /* Transition: '<S636>:535' */
                        /* Transition: '<S636>:538' */
                        tmp = ((sint32)rtu_FThr) + 1;
                        if ((((sint32)rtu_FThr) + 1) > 65535)
                        {
                            tmp = 65535;
                        }

                        VeCIDB_Cnt_OBCM_VDCM_Fail = (uint16)tmp;
                        localB->Status = CeDFIB_e_Fail;
                    }
                    else
                    {
                        /* Transition: '<S636>:537' */
                        tmp = ((sint32)VeCIDB_Cnt_OBCM_VDCM_Fail) - 1;
                        if ((((sint32)VeCIDB_Cnt_OBCM_VDCM_Fail) - 1) < 0)
                        {
                            tmp = 0;
                        }

                        VeCIDB_Cnt_OBCM_VDCM_Fail = (uint16)tmp;
                        if (((sint32)VeCIDB_Cnt_OBCM_VDCM_Fail) <= 0)
                        {
                            /* Transition: '<S636>:539' */
                            /* Transition: '<S636>:541' */
                            localB->Status = CeDFIB_e_Pass;
                            VeCIDB_b_OBCM_VDCM_Pass = true;
                        }
                        else
                        {
                            /* Transition: '<S636>:540' */
                            localB->Status = CeDFIB_e_Fail_FaultRemoved;

                            /* Transition: '<S636>:542' */
                        }

                        /* Transition: '<S636>:543' */
                    }

                    /* Transition: '<S636>:544' */
                    /* Transition: '<S636>:545' */
                    /* Transition: '<S636>:546' */
                }
                else
                {
                    /* Transition: '<S636>:536' */
                }
            }
        }
        else
        {
            /* Transition: '<S636>:503' */
            /* Transition: '<S636>:505' */
            /* Transition: '<S636>:533' */
            /* Transition: '<S636>:545' */
            /* Transition: '<S636>:546' */
        }
    }

    /* End of Chart: '<S631>/Diagnostic Debounce' */
    /* Transition: '<S636>:547' */
}

#endif

/* System initialize for atomic system: '<S479>/U049C_COREBEV_20ms' */
#if Rte_SysCon_Variant_CIDB_U049C_Corebev

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U049C_COREBEV_20ms_Init(void)
{
    /* SystemInitialize for Outport: '<Root>/VeCIDB_e_FaultSts_InvData_OBCM' incorporates:
     *  Merge: '<S617>/Merge1'
     */
    (void)Rte_Write_VeCIDB_e_FaultSts_InvData_OBCM_Value(CeDFIB_e_Init);
}

#endif

/* Output and update for atomic system: '<S479>/U049C_COREBEV_20ms' */
#if Rte_SysCon_Variant_CIDB_U049C_Corebev

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U049C_COREBEV_20ms(void)
{
    uint32 rtb_RelationalOperator3_j2_tmp;
    TeDFIB_e_FaultDebounceStatus VeCIDB_b_U049C_Pass_tmp;
    TeDFIB_e_FaultDebounceStatus VeCIDB_b_U049C_Pass_tmp_0;
    boolean rtb_AND_o;
    boolean rtb_RelationalOperator3;

    /* VariantMerge generated from: '<S479>/VeCIDB_b_U049C_DiagEnbl' incorporates:
     *  Constant: '<S616>/Constant'
     *  Constant: '<S638>/Calib'
     *  Logic: '<S616>/Logical Operator'
     *  Logic: '<S616>/Logical Operator2'
     *  S-Function (sfix_bitop): '<S616>/Bitwise AND'
     */
    CIDB_ac_B.VeCIDB_b_U049C_DiagEnbl =
        (((CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_IsDiagGl_e) &&
          (KeCIDB_b_U049C_DiagEnbl)) && ((((uint32)
            CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_APM_CtrlSt) & 4U) == 0U));

    /* S-Function (sfix_bitop): '<S621>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S619>/Data Store Read'
     *  S-Function (sfix_bitop): '<S631>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_j2_tmp = ((uint32)CIDB_ac_DW.StatusByte_InvData_OBCM)
        & 64U;

    /* RelationalOperator: '<S621>/Relational Operator3' incorporates:
     *  Constant: '<S621>/Constant3'
     *  S-Function (sfix_bitop): '<S621>/Bitwise Operator2'
     */
    rtb_RelationalOperator3 = (rtb_RelationalOperator3_j2_tmp == 0U);

    /* Logic: '<S620>/Logical1' incorporates:
     *  Constant: '<S620>/Constant Value'
     *  DataTypeConversion: '<S620>/Cast To Boolean'
     *  DataTypeConversion: '<S620>/Cast To Boolean1'
     *  DataTypeConversion: '<S620>/Cast To Boolean2'
     *  DataTypeConversion: '<S620>/Cast To Boolean3'
     *  DataTypeConversion: '<S620>/Cast To Boolean4'
     *  DataTypeConversion: '<S620>/Cast To Boolean5'
     *  DataTypeConversion: '<S620>/Cast To Boolean6'
     *  DataTypeConversion: '<S620>/Cast To Boolean7'
     *  DataTypeConversion: '<S620>/Cast To Boolean8'
     *  DataTypeConversion: '<S620>/Cast To Boolean9'
     *  S-Function (sfix_bitop): '<S620>/Bitwise Operator'
     *  S-Function (sfix_bitop): '<S620>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S620>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S620>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S620>/Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S620>/Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S620>/Bitwise Operator6'
     *  S-Function (sfix_bitop): '<S620>/Bitwise Operator7'
     *  S-Function (sfix_bitop): '<S620>/Bitwise Operator8'
     *  S-Function (sfix_bitop): '<S620>/Bitwise Operator9'
     */
    VeCIDB_b_APM_VDCM_FaultCriteria = (((((((((((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_APM_CtrlSt) & 8U) != 0U) ||
        ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_APM_Failur) & 8U) !=
         0U)) || ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_APM_Fail_k)
                   & 8U) != 0U)) || ((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_APM_HV_I_F) & 8U) != 0U)) ||
        ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_APM_HV_V_F) & 8U) !=
         0U)) || ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_APM_IdcHvS)
                   & 8U) != 0U)) || ((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_APM_LV_I_F) & 8U) != 0U)) ||
        ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_APM_LV_V_F) & 8U) !=
         0U)) || ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_APM_PSFB_k)
                   & 8U) != 0U)) || ((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_APM_PSFB_T) & 8U) != 0U));

    /* Outputs for Atomic SubSystem: '<S621>/EdgeFalling1' */
    /* Logic: '<S627>/AND' incorporates:
     *  Logic: '<S627>/OR1'
     *  UnitDelay: '<S627>/Unit Delay'
     */
    rtb_AND_o = ((!rtb_RelationalOperator3) && (CIDB_ac_DW.UnitDelay_DSTATE_i));

    /* Update for UnitDelay: '<S627>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_i = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S621>/EdgeFalling1' */

    /* Chart: '<S621>/Diagnostic Debounce' incorporates:
     *  Constant: '<S621>/Constant1'
     *  Constant: '<S622>/Calib'
     *  Constant: '<S623>/Calib'
     *  Constant: '<S624>/Calib'
     *  Constant: '<S625>/Calib'
     *  DataStoreRead: '<S619>/Data Store Read'
     *  Logic: '<S621>/Logical Operator'
     *  Logic: '<S621>/Logical Operator1'
     *  Logic: '<S621>/Logical10'
     *  Logic: '<S621>/Logical12'
     *  Logic: '<S621>/Logical5'
     *  RelationalOperator: '<S621>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S621>/Bitwise Operator3'
     */
    CIDB_ac_DiagnosticDebounce_pc(((KeCIDB_b_APM_VDCM_ePT_SNA_DiagEnbl) &&
        (CIDB_ac_B.VeCIDB_b_U049C_DiagEnbl)) &&
        ((!KeCIDB_b_APM_VDCM_ePT_SNA_FailLatchEnable) || (((((uint32)
        CIDB_ac_DW.StatusByte_InvData_OBCM) & 1U) == 0U) ||
        (!rtb_RelationalOperator3))), VeCIDB_b_APM_VDCM_FaultCriteria,
        KeCIDB_Cnt_APM_VDCM_ePT_SNA_FailLmt, KeCIDB_Cnt_APM_VDCM_ePT_SNAFailINC,
        rtb_AND_o || (CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_RstDia_e1h),
        &CIDB_ac_B.sf_DiagnosticDebounce_pc);

    /* RelationalOperator: '<S631>/Relational Operator3' incorporates:
     *  Constant: '<S631>/Constant3'
     */
    rtb_RelationalOperator3 = (rtb_RelationalOperator3_j2_tmp == 0U);

    /* Logic: '<S630>/Logical1' incorporates:
     *  Constant: '<S630>/Constant Value1'
     *  DataTypeConversion: '<S630>/Cast To Boolean'
     *  DataTypeConversion: '<S630>/Cast To Boolean1'
     *  DataTypeConversion: '<S630>/Cast To Boolean2'
     *  DataTypeConversion: '<S630>/Cast To Boolean3'
     *  DataTypeConversion: '<S630>/Cast To Boolean4'
     *  DataTypeConversion: '<S630>/Cast To Boolean5'
     *  DataTypeConversion: '<S630>/Cast To Boolean6'
     *  S-Function (sfix_bitop): '<S630>/Bitwise Operator'
     *  S-Function (sfix_bitop): '<S630>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S630>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S630>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S630>/Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S630>/Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S630>/Bitwise Operator6'
     */
    VeCIDB_b_OBCM_VDCM_FaultCriteria = ((((((((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_HVCMS_EVSE) & 8U) != 0U) ||
        ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_HVCMS_EV_g) & 8U) !=
         0U)) || ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_HVCMS_EV_n)
                   & 8U) != 0U)) || ((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_HVCMS_EV_m) & 8U) != 0U)) ||
        ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_HVCMS_E_no) & 8U) !=
         0U)) || ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_HVCMS_EV_a)
                   & 8U) != 0U)) || ((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_HVCMS_Resp) & 8U) != 0U));

    /* Outputs for Atomic SubSystem: '<S631>/EdgeFalling1' */
    /* Logic: '<S637>/AND' incorporates:
     *  Logic: '<S637>/OR1'
     *  UnitDelay: '<S637>/Unit Delay'
     */
    rtb_AND_o = ((!rtb_RelationalOperator3) && (CIDB_ac_DW.UnitDelay_DSTATE_pm));

    /* Update for UnitDelay: '<S637>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_pm = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S631>/EdgeFalling1' */

    /* Chart: '<S631>/Diagnostic Debounce' incorporates:
     *  Constant: '<S631>/Constant1'
     *  Constant: '<S632>/Calib'
     *  Constant: '<S633>/Calib'
     *  Constant: '<S634>/Calib'
     *  Constant: '<S635>/Calib'
     *  DataStoreRead: '<S629>/Data Store Read'
     *  Logic: '<S631>/Logical Operator'
     *  Logic: '<S631>/Logical Operator1'
     *  Logic: '<S631>/Logical10'
     *  Logic: '<S631>/Logical12'
     *  Logic: '<S631>/Logical5'
     *  RelationalOperator: '<S631>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S631>/Bitwise Operator3'
     */
    CIDB_ac_DiagnosticDebounce_f(((KeCIDB_b_OBCM_VDCM_ePT_SNA_DiagEnbl) &&
        (CIDB_ac_B.VeCIDB_b_U049C_DiagEnbl)) &&
        ((!KeCIDB_b_OBCM_VDCM_ePT_SNA_FailLatchEnable) || (((((uint32)
        CIDB_ac_DW.StatusByte_InvData_OBCM) & 1U) == 0U) ||
        (!rtb_RelationalOperator3))), VeCIDB_b_OBCM_VDCM_FaultCriteria,
        KeCIDB_Cnt_OBCM_VDCM_ePT_SNA_FailLmt,
        KeCIDB_Cnt_OBCM_VDCM_ePT_SNAFailINC, rtb_AND_o ||
        (CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_RstDia_e1h),
        &CIDB_ac_B.sf_DiagnosticDebounce_ff);

    /* RelationalOperator: '<S617>/Relational Operator2' incorporates:
     *  Constant: '<S617>/Constant2'
     *  DataStoreRead: '<S617>/StatusByte_InvData_IDCM'
     *  S-Function (sfix_bitop): '<S617>/Bitwise Operator1'
     */
    rtb_RelationalOperator3 = ((((sint32)CIDB_ac_DW.StatusByte_InvData_OBCM) &
        64) == 64);

    /* Outputs for Atomic SubSystem: '<S617>/EdgeRising' */
    /* Logic: '<S639>/OR1' incorporates:
     *  UnitDelay: '<S639>/Unit Delay'
     */
    rtb_AND_o = !CIDB_ac_DW.UnitDelay_DSTATE_j;

    /* Update for UnitDelay: '<S639>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_j = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S617>/EdgeRising' */

    /* RelationalOperator: '<S617>/Comparison5' incorporates:
     *  RelationalOperator: '<S617>/Comparison4'
     */
    VeCIDB_b_U049C_Pass_tmp = CIDB_ac_B.sf_DiagnosticDebounce_ff.Status;

    /* RelationalOperator: '<S617>/Comparison8' incorporates:
     *  RelationalOperator: '<S617>/Comparison1'
     */
    VeCIDB_b_U049C_Pass_tmp_0 = CIDB_ac_B.sf_DiagnosticDebounce_pc.Status;

    /* Logic: '<S617>/Logical10' incorporates:
     *  Constant: '<S624>/Calib'
     *  Constant: '<S634>/Calib'
     *  Constant: '<S644>/Constant'
     *  Constant: '<S645>/Constant'
     *  Constant: '<S647>/Constant'
     *  Constant: '<S648>/Constant'
     *  Constant: '<S649>/Constant'
     *  Logic: '<S617>/Logical1'
     *  Logic: '<S617>/Logical13'
     *  Logic: '<S617>/Logical14'
     *  Logic: '<S617>/Logical2'
     *  Logic: '<S617>/Logical3'
     *  Logic: '<S617>/Logical4'
     *  Logic: '<S617>/Logical5'
     *  Logic: '<S617>/Logical6'
     *  Logic: '<S617>/Logical7'
     *  Logic: '<S617>/Logical8'
     *  Logic: '<S617>/Logical9'
     *  RelationalOperator: '<S617>/Comparison10'
     *  RelationalOperator: '<S617>/Comparison5'
     *  RelationalOperator: '<S617>/Comparison6'
     *  RelationalOperator: '<S617>/Comparison8'
     *  RelationalOperator: '<S617>/Comparison9'
     */
    VeCIDB_b_U049C_Pass = (((((((!KeCIDB_b_OBCM_VDCM_ePT_SNA_DiagEnbl) ||
        (((uint32)VeCIDB_b_U049C_Pass_tmp) == CeDFIB_e_Pass)) &&
        ((!CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_DUALCHAR_j) || (((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCIDB_e_DUALCHAR_p) == CeDFIB_e_Pass))) &&
        ((!KeCIDB_b_APM_VDCM_ePT_SNA_DiagEnbl) || (((uint32)
        VeCIDB_b_U049C_Pass_tmp_0) == CeDFIB_e_Pass))) &&
        ((!CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_HV_CHARG_l) || (((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCIDB_e_HV_CHARG_f) == CeDFIB_e_Pass))) &&
                            ((!CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_HV_CHARG_o)
        || (((uint32)CIDB_ac_B.TmpSignalConversionAtVeCIDB_e_HV_CHARG_h) ==
            CeDFIB_e_Pass))) &&
                           (((((CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_DUALCHAR_j)
        || (KeCIDB_b_OBCM_VDCM_ePT_SNA_DiagEnbl)) ||
        (KeCIDB_b_APM_VDCM_ePT_SNA_DiagEnbl)) ||
        (CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_HV_CHARG_l)) ||
                            (CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_HV_CHARG_o)));

    /* Logic: '<S617>/Logical11' incorporates:
     *  Constant: '<S640>/Constant'
     *  Constant: '<S641>/Constant'
     *  Constant: '<S642>/Constant'
     *  Constant: '<S643>/Constant'
     *  Constant: '<S646>/Constant'
     *  RelationalOperator: '<S617>/Comparison1'
     *  RelationalOperator: '<S617>/Comparison2'
     *  RelationalOperator: '<S617>/Comparison3'
     *  RelationalOperator: '<S617>/Comparison4'
     *  RelationalOperator: '<S617>/Comparison7'
     */
    VeCIDB_b_U049C_Fail = (((((((uint32)VeCIDB_b_U049C_Pass_tmp) ==
        CeDFIB_e_Fail) || (((uint32)
                            CIDB_ac_B.TmpSignalConversionAtVeCIDB_e_DUALCHAR_p) ==
                           CeDFIB_e_Fail)) || (((uint32)
        VeCIDB_b_U049C_Pass_tmp_0) == CeDFIB_e_Fail)) || (((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCIDB_e_HV_CHARG_f) == CeDFIB_e_Fail)) ||
                           (((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCIDB_e_HV_CHARG_h) == CeDFIB_e_Fail));

    /* Outputs for Enabled SubSystem: '<S617>/Subsystem1' incorporates:
     *  EnablePort: '<S651>/Enable'
     */
    if (VeCIDB_b_U049C_Fail)
    {
        /* Outport: '<Root>/VeCIDB_e_FaultSts_InvData_OBCM' incorporates:
         *  Constant: '<S654>/Constant'
         */
        (void)Rte_Write_VeCIDB_e_FaultSts_InvData_OBCM_Value(CeDFIB_e_Fail);
    }

    /* End of Outputs for SubSystem: '<S617>/Subsystem1' */

    /* Outputs for Enabled SubSystem: '<S617>/Subsystem' incorporates:
     *  EnablePort: '<S650>/Enable'
     */
    if (VeCIDB_b_U049C_Pass)
    {
        /* Outport: '<Root>/VeCIDB_e_FaultSts_InvData_OBCM' incorporates:
         *  Constant: '<S653>/Constant'
         */
        (void)Rte_Write_VeCIDB_e_FaultSts_InvData_OBCM_Value(CeDFIB_e_Pass);
    }

    /* End of Outputs for SubSystem: '<S617>/Subsystem' */

    /* Outputs for Enabled SubSystem: '<S617>/Subsystem2' incorporates:
     *  EnablePort: '<S652>/Enable'
     */
    /* Outputs for Atomic SubSystem: '<S617>/EdgeRising' */
    /* Logic: '<S639>/AND' */
    if (rtb_RelationalOperator3 && rtb_AND_o)
    {
        /* Outport: '<Root>/VeCIDB_e_FaultSts_InvData_OBCM' incorporates:
         *  Constant: '<S655>/Constant'
         */
        (void)Rte_Write_VeCIDB_e_FaultSts_InvData_OBCM_Value(CeDFIB_e_Init);
    }

    /* End of Logic: '<S639>/AND' */
    /* End of Outputs for SubSystem: '<S617>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S617>/Subsystem2' */
}

#endif

/* System initialize for atomic system: '<S479>/U049C_Pegasus_20ms' */
#if Rte_SysCon_Variant_CIDB_U049C_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U049C_Pegasus_20ms_Init(void)
{
    /* SystemInitialize for Merge: '<S659>/Merge1' */
    (void)Rte_Write_VeCIDB_e_FaultSts_InvData_OBCM_Value(CeDFIB_e_Init);
}

#endif

/* Output and update for atomic system: '<S479>/U049C_Pegasus_20ms' */
#if Rte_SysCon_Variant_CIDB_U049C_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U049C_Pegasus_20ms(void)
{
    uint32 rtb_RelationalOperator3_o_tmp;
    TeDFIB_e_FaultDebounceStatus VeCIDB_b_U049C_Pass_tmp;
    TeDFIB_e_FaultDebounceStatus VeCIDB_b_U049C_Pass_tmp_0;
    boolean rtb_AND_c;
    boolean rtb_RelationalOperator3;

    /* Logic: '<S658>/Logical Operator' incorporates:
     *  Constant: '<S658>/Constant'
     *  Constant: '<S680>/Calib'
     *  Logic: '<S658>/Logical Operator2'
     *  S-Function (sfix_bitop): '<S658>/Bitwise AND'
     */
    CIDB_ac_B.VeCIDB_b_U049C_DiagEnbl =
        (((CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_IsDiagGl_e) &&
          (KeCIDB_b_U049C_DiagEnbl)) && ((((uint32)
            CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_APM_CtrlSt) & 4U) == 0U));

    /* S-Function (sfix_bitop): '<S663>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S661>/Data Store Read'
     *  S-Function (sfix_bitop): '<S673>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_o_tmp = ((uint32)CIDB_ac_DW.StatusByte_InvData_OBCM)
        & 64U;

    /* RelationalOperator: '<S663>/Relational Operator3' incorporates:
     *  Constant: '<S663>/Constant3'
     *  S-Function (sfix_bitop): '<S663>/Bitwise Operator2'
     */
    rtb_RelationalOperator3 = (rtb_RelationalOperator3_o_tmp == 0U);

    /* Logic: '<S662>/Logical1' incorporates:
     *  Constant: '<S662>/Constant Value'
     *  DataTypeConversion: '<S662>/Cast To Boolean'
     *  DataTypeConversion: '<S662>/Cast To Boolean1'
     *  DataTypeConversion: '<S662>/Cast To Boolean2'
     *  DataTypeConversion: '<S662>/Cast To Boolean3'
     *  DataTypeConversion: '<S662>/Cast To Boolean4'
     *  DataTypeConversion: '<S662>/Cast To Boolean5'
     *  DataTypeConversion: '<S662>/Cast To Boolean6'
     *  DataTypeConversion: '<S662>/Cast To Boolean7'
     *  DataTypeConversion: '<S662>/Cast To Boolean8'
     *  DataTypeConversion: '<S662>/Cast To Boolean9'
     *  S-Function (sfix_bitop): '<S662>/Bitwise Operator'
     *  S-Function (sfix_bitop): '<S662>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S662>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S662>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S662>/Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S662>/Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S662>/Bitwise Operator6'
     *  S-Function (sfix_bitop): '<S662>/Bitwise Operator7'
     *  S-Function (sfix_bitop): '<S662>/Bitwise Operator8'
     *  S-Function (sfix_bitop): '<S662>/Bitwise Operator9'
     */
    VeCIDB_b_APM_VDCM_FaultCriteria = (((((((((((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_APM_CtrlSt) & 8U) != 0U) ||
        ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_APM_Failur) & 8U) !=
         0U)) || ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_APM_Fail_k)
                   & 8U) != 0U)) || ((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_APM_HV_I_F) & 8U) != 0U)) ||
        ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_APM_HV_V_F) & 8U) !=
         0U)) || ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_APM_IdcHvS)
                   & 8U) != 0U)) || ((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_APM_LV_I_F) & 8U) != 0U)) ||
        ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_APM_LV_V_F) & 8U) !=
         0U)) || ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_APM_PSFB_k)
                   & 8U) != 0U)) || ((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_APM_PSFB_T) & 8U) != 0U));

    /* Outputs for Atomic SubSystem: '<S663>/EdgeFalling1' */
    /* Logic: '<S669>/AND' incorporates:
     *  Logic: '<S669>/OR1'
     *  UnitDelay: '<S669>/Unit Delay'
     */
    rtb_AND_c = ((!rtb_RelationalOperator3) && (CIDB_ac_DW.UnitDelay_DSTATE_eg));

    /* Update for UnitDelay: '<S669>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_eg = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S663>/EdgeFalling1' */

    /* Chart: '<S663>/Diagnostic Debounce' incorporates:
     *  Constant: '<S663>/Constant1'
     *  Constant: '<S664>/Calib'
     *  Constant: '<S665>/Calib'
     *  Constant: '<S666>/Calib'
     *  Constant: '<S667>/Calib'
     *  DataStoreRead: '<S661>/Data Store Read'
     *  Logic: '<S663>/Logical Operator'
     *  Logic: '<S663>/Logical Operator1'
     *  Logic: '<S663>/Logical10'
     *  Logic: '<S663>/Logical12'
     *  Logic: '<S663>/Logical5'
     *  RelationalOperator: '<S663>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S663>/Bitwise Operator3'
     */
    CIDB_ac_DiagnosticDebounce_pc(((KeCIDB_b_APM_VDCM_ePT_SNA_DiagEnbl) &&
        (CIDB_ac_B.VeCIDB_b_U049C_DiagEnbl)) &&
        ((!KeCIDB_b_APM_VDCM_ePT_SNA_FailLatchEnable) || (((((uint32)
        CIDB_ac_DW.StatusByte_InvData_OBCM) & 1U) == 0U) ||
        (!rtb_RelationalOperator3))), VeCIDB_b_APM_VDCM_FaultCriteria,
        KeCIDB_Cnt_APM_VDCM_ePT_SNA_FailLmt, KeCIDB_Cnt_APM_VDCM_ePT_SNAFailINC,
        rtb_AND_c || (CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_RstDia_e1h),
        &CIDB_ac_B.sf_DiagnosticDebounce_maz);

    /* RelationalOperator: '<S673>/Relational Operator3' incorporates:
     *  Constant: '<S673>/Constant3'
     */
    rtb_RelationalOperator3 = (rtb_RelationalOperator3_o_tmp == 0U);

    /* Logic: '<S672>/Logical1' incorporates:
     *  Constant: '<S672>/Constant Value1'
     *  DataTypeConversion: '<S672>/Cast To Boolean'
     *  DataTypeConversion: '<S672>/Cast To Boolean1'
     *  DataTypeConversion: '<S672>/Cast To Boolean2'
     *  DataTypeConversion: '<S672>/Cast To Boolean3'
     *  DataTypeConversion: '<S672>/Cast To Boolean4'
     *  DataTypeConversion: '<S672>/Cast To Boolean5'
     *  DataTypeConversion: '<S672>/Cast To Boolean6'
     *  S-Function (sfix_bitop): '<S672>/Bitwise Operator'
     *  S-Function (sfix_bitop): '<S672>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S672>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S672>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S672>/Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S672>/Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S672>/Bitwise Operator6'
     */
    VeCIDB_b_OBCM_VDCM_FaultCriteria = ((((((((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_HVCMS_EVSE) & 8U) != 0U) ||
        ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_HVCMS_EV_g) & 8U) !=
         0U)) || ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_HVCMS_EV_n)
                   & 8U) != 0U)) || ((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_HVCMS_EV_m) & 8U) != 0U)) ||
        ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_HVCMS_E_no) & 8U) !=
         0U)) || ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_HVCMS_EV_a)
                   & 8U) != 0U)) || ((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_HVCMS_Resp) & 8U) != 0U));

    /* Outputs for Atomic SubSystem: '<S673>/EdgeFalling1' */
    /* Logic: '<S679>/AND' incorporates:
     *  Logic: '<S679>/OR1'
     *  UnitDelay: '<S679>/Unit Delay'
     */
    rtb_AND_c = ((!rtb_RelationalOperator3) && (CIDB_ac_DW.UnitDelay_DSTATE_fw));

    /* Update for UnitDelay: '<S679>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_fw = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S673>/EdgeFalling1' */

    /* Chart: '<S673>/Diagnostic Debounce' incorporates:
     *  Constant: '<S673>/Constant1'
     *  Constant: '<S674>/Calib'
     *  Constant: '<S675>/Calib'
     *  Constant: '<S676>/Calib'
     *  Constant: '<S677>/Calib'
     *  DataStoreRead: '<S671>/Data Store Read'
     *  Logic: '<S673>/Logical Operator'
     *  Logic: '<S673>/Logical Operator1'
     *  Logic: '<S673>/Logical10'
     *  Logic: '<S673>/Logical12'
     *  Logic: '<S673>/Logical5'
     *  RelationalOperator: '<S673>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S673>/Bitwise Operator3'
     */
    CIDB_ac_DiagnosticDebounce_f(((KeCIDB_b_OBCM_VDCM_ePT_SNA_DiagEnbl) &&
        (CIDB_ac_B.VeCIDB_b_U049C_DiagEnbl)) &&
        ((!KeCIDB_b_OBCM_VDCM_ePT_SNA_FailLatchEnable) || (((((uint32)
        CIDB_ac_DW.StatusByte_InvData_OBCM) & 1U) == 0U) ||
        (!rtb_RelationalOperator3))), VeCIDB_b_OBCM_VDCM_FaultCriteria,
        KeCIDB_Cnt_OBCM_VDCM_ePT_SNA_FailLmt,
        KeCIDB_Cnt_OBCM_VDCM_ePT_SNAFailINC, rtb_AND_c ||
        (CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_RstDia_e1h),
        &CIDB_ac_B.sf_DiagnosticDebounce_gd);

    /* RelationalOperator: '<S659>/Relational Operator2' incorporates:
     *  Constant: '<S659>/Constant2'
     *  DataStoreRead: '<S659>/StatusByte_InvData_IDCM'
     *  S-Function (sfix_bitop): '<S659>/Bitwise Operator1'
     */
    rtb_RelationalOperator3 = ((((sint32)CIDB_ac_DW.StatusByte_InvData_OBCM) &
        64) == 64);

    /* Outputs for Atomic SubSystem: '<S659>/EdgeRising' */
    /* Logic: '<S681>/OR1' incorporates:
     *  UnitDelay: '<S681>/Unit Delay'
     */
    rtb_AND_c = !CIDB_ac_DW.UnitDelay_DSTATE_dv;

    /* Update for UnitDelay: '<S681>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_dv = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S659>/EdgeRising' */

    /* RelationalOperator: '<S659>/Comparison5' incorporates:
     *  RelationalOperator: '<S659>/Comparison4'
     */
    VeCIDB_b_U049C_Pass_tmp = CIDB_ac_B.sf_DiagnosticDebounce_gd.Status;

    /* RelationalOperator: '<S659>/Comparison8' incorporates:
     *  RelationalOperator: '<S659>/Comparison1'
     */
    VeCIDB_b_U049C_Pass_tmp_0 = CIDB_ac_B.sf_DiagnosticDebounce_maz.Status;

    /* Logic: '<S659>/Logical10' incorporates:
     *  Constant: '<S666>/Calib'
     *  Constant: '<S676>/Calib'
     *  Constant: '<S686>/Constant'
     *  Constant: '<S687>/Constant'
     *  Constant: '<S689>/Constant'
     *  Constant: '<S690>/Constant'
     *  Constant: '<S691>/Constant'
     *  Logic: '<S659>/Logical1'
     *  Logic: '<S659>/Logical13'
     *  Logic: '<S659>/Logical14'
     *  Logic: '<S659>/Logical2'
     *  Logic: '<S659>/Logical3'
     *  Logic: '<S659>/Logical4'
     *  Logic: '<S659>/Logical5'
     *  Logic: '<S659>/Logical6'
     *  Logic: '<S659>/Logical7'
     *  Logic: '<S659>/Logical8'
     *  Logic: '<S659>/Logical9'
     *  RelationalOperator: '<S659>/Comparison10'
     *  RelationalOperator: '<S659>/Comparison5'
     *  RelationalOperator: '<S659>/Comparison6'
     *  RelationalOperator: '<S659>/Comparison8'
     *  RelationalOperator: '<S659>/Comparison9'
     */
    VeCIDB_b_U049C_Pass = (((((((!KeCIDB_b_OBCM_VDCM_ePT_SNA_DiagEnbl) ||
        (((uint32)VeCIDB_b_U049C_Pass_tmp) == CeDFIB_e_Pass)) &&
        ((!CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_DUALCHAR_j) || (((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCIDB_e_DUALCHAR_p) == CeDFIB_e_Pass))) &&
        ((!KeCIDB_b_APM_VDCM_ePT_SNA_DiagEnbl) || (((uint32)
        VeCIDB_b_U049C_Pass_tmp_0) == CeDFIB_e_Pass))) &&
        ((!CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_HV_CHARG_l) || (((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCIDB_e_HV_CHARG_f) == CeDFIB_e_Pass))) &&
                            ((!CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_HV_CHARG_o)
        || (((uint32)CIDB_ac_B.TmpSignalConversionAtVeCIDB_e_HV_CHARG_h) ==
            CeDFIB_e_Pass))) &&
                           (((((CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_DUALCHAR_j)
        || (KeCIDB_b_OBCM_VDCM_ePT_SNA_DiagEnbl)) ||
        (KeCIDB_b_APM_VDCM_ePT_SNA_DiagEnbl)) ||
        (CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_HV_CHARG_l)) ||
                            (CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_HV_CHARG_o)));

    /* Logic: '<S659>/Logical11' incorporates:
     *  Constant: '<S682>/Constant'
     *  Constant: '<S683>/Constant'
     *  Constant: '<S684>/Constant'
     *  Constant: '<S685>/Constant'
     *  Constant: '<S688>/Constant'
     *  RelationalOperator: '<S659>/Comparison1'
     *  RelationalOperator: '<S659>/Comparison2'
     *  RelationalOperator: '<S659>/Comparison3'
     *  RelationalOperator: '<S659>/Comparison4'
     *  RelationalOperator: '<S659>/Comparison7'
     */
    VeCIDB_b_U049C_Fail = (((((((uint32)VeCIDB_b_U049C_Pass_tmp) ==
        CeDFIB_e_Fail) || (((uint32)
                            CIDB_ac_B.TmpSignalConversionAtVeCIDB_e_DUALCHAR_p) ==
                           CeDFIB_e_Fail)) || (((uint32)
        VeCIDB_b_U049C_Pass_tmp_0) == CeDFIB_e_Fail)) || (((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCIDB_e_HV_CHARG_f) == CeDFIB_e_Fail)) ||
                           (((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCIDB_e_HV_CHARG_h) == CeDFIB_e_Fail));

    /* Outputs for Enabled SubSystem: '<S659>/Subsystem1' incorporates:
     *  EnablePort: '<S693>/Enable'
     */
    if (VeCIDB_b_U049C_Fail)
    {
        /* Constant: '<S696>/Constant' */
        (void)Rte_Write_VeCIDB_e_FaultSts_InvData_OBCM_Value(CeDFIB_e_Fail);
    }

    /* End of Outputs for SubSystem: '<S659>/Subsystem1' */

    /* Outputs for Enabled SubSystem: '<S659>/Subsystem' incorporates:
     *  EnablePort: '<S692>/Enable'
     */
    if (VeCIDB_b_U049C_Pass)
    {
        /* Constant: '<S695>/Constant' */
        (void)Rte_Write_VeCIDB_e_FaultSts_InvData_OBCM_Value(CeDFIB_e_Pass);
    }

    /* End of Outputs for SubSystem: '<S659>/Subsystem' */

    /* Outputs for Enabled SubSystem: '<S659>/Subsystem2' incorporates:
     *  EnablePort: '<S694>/Enable'
     */
    /* Outputs for Atomic SubSystem: '<S659>/EdgeRising' */
    /* Logic: '<S681>/AND' incorporates:
     *  Constant: '<S697>/Constant'
     */
    if (rtb_RelationalOperator3 && rtb_AND_c)
    {
        (void)Rte_Write_VeCIDB_e_FaultSts_InvData_OBCM_Value(CeDFIB_e_Init);
    }

    /* End of Logic: '<S681>/AND' */
    /* End of Outputs for SubSystem: '<S659>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S659>/Subsystem2' */
}

#endif

/*
 * System initialize for atomic system:
 *    '<S104>/Diagnostic Debounce'
 *    '<S115>/Diagnostic Debounce'
 *    '<S126>/Diagnostic Debounce'
 */
#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_DiagnosticDebounce_n_Init(P2VAR
    (TeDFIB_e_FaultDebounceStatus, AUTOMATIC, CIDB_VAR_INIT) rty_Status)
{
    *rty_Status = CeDFIB_e_Init;
}

#endif

/*
 * Output and update for atomic system:
 *    '<S104>/Diagnostic Debounce'
 *    '<S115>/Diagnostic Debounce'
 *    '<S126>/Diagnostic Debounce'
 */
#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_DiagnosticDebounce_b(VAR(boolean,
    AUTOMATIC) rtu_EnDiag, VAR(boolean, AUTOMATIC) rtu_Err, VAR(uint16,
    AUTOMATIC) rtu_FThr, VAR(uint8, AUTOMATIC) rtu_FInc, VAR(boolean, AUTOMATIC)
    rtu_Reset, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, CIDB_VAR_INIT)
    rty_Status)
{
    sint32 tmp;

    /* Chart: '<S104>/Diagnostic Debounce' */
    /* Gateway: DiagnosticDebounceimplausibleSignalSNA/Diagnostic Debounce */
    /* During: DiagnosticDebounceimplausibleSignalSNA/Diagnostic Debounce */
    /* Entry Internal: DiagnosticDebounceimplausibleSignalSNA/Diagnostic Debounce */
    /* Transition: '<S109>:499' */
    VeCIDB_b_BCM_FD_12_Fail = false;
    VeCIDB_b_BCM_FD_12_Pass = false;
    if (rtu_Reset)
    {
        /* Transition: '<S109>:500' */
        /* Transition: '<S109>:502' */
        *rty_Status = CeDFIB_e_Init;
        VeCIDB_Cnt_BCM_FD_12_Fail = 0U;
        VeCIDB_Cnt_BCM_FD_12_Init = 0U;

        /* Transition: '<S109>:505' */
        /* Transition: '<S109>:533' */
        /* Transition: '<S109>:545' */
        /* Transition: '<S109>:546' */
    }
    else
    {
        /* Transition: '<S109>:501' */
        if (rtu_EnDiag)
        {
            /* Transition: '<S109>:504' */
            if (((uint32)(*rty_Status)) == CeDFIB_e_Init)
            {
                /* Transition: '<S109>:507' */
                if (!rtu_Err)
                {
                    /* Transition: '<S109>:506' */
                    /* Transition: '<S109>:509' */
                    tmp = ((sint32)VeCIDB_Cnt_BCM_FD_12_Init) + ((sint32)
                        rtu_FInc);
                    if (tmp > 65535)
                    {
                        tmp = 65535;
                    }

                    VeCIDB_Cnt_BCM_FD_12_Init = (uint16)tmp;
                    if (VeCIDB_Cnt_BCM_FD_12_Init >= rtu_FThr)
                    {
                        /* Transition: '<S109>:511' */
                        /* Transition: '<S109>:513' */
                        *rty_Status = CeDFIB_e_Pass;
                        VeCIDB_b_BCM_FD_12_Pass = true;

                        /* Transition: '<S109>:516' */
                    }
                    else
                    {
                        /* Transition: '<S109>:512' */
                    }

                    /* Transition: '<S109>:515' */
                }
                else
                {
                    /* Transition: '<S109>:508' */
                    VeCIDB_Cnt_BCM_FD_12_Init = 0U;
                }

                /* Transition: '<S109>:514' */
            }
            else
            {
                /* Transition: '<S109>:510' */
            }

            /* Transition: '<S109>:517' */
            if ((((((uint32)(*rty_Status)) == CeDFIB_e_Pass) || (((uint32)
                    (*rty_Status)) == CeDFIB_e_Pass_FaultRemoved)) || (((uint32)
                    (*rty_Status)) == CeDFIB_e_Pass_FaultFiltering)) ||
                    (((uint32)(*rty_Status)) == CeDFIB_e_Init))
            {
                /* Transition: '<S109>:518' */
                if (rtu_Err)
                {
                    /* Transition: '<S109>:519' */
                    /* Transition: '<S109>:522' */
                    tmp = ((sint32)VeCIDB_Cnt_BCM_FD_12_Fail) + ((sint32)
                        rtu_FInc);
                    if (tmp > 65535)
                    {
                        tmp = 65535;
                    }

                    VeCIDB_Cnt_BCM_FD_12_Fail = (uint16)tmp;
                    if (VeCIDB_Cnt_BCM_FD_12_Fail > rtu_FThr)
                    {
                        /* Transition: '<S109>:524' */
                        /* Transition: '<S109>:528' */
                        *rty_Status = CeDFIB_e_Fail;
                        VeCIDB_b_BCM_FD_12_Fail = true;
                        VeCIDB_Cnt_BCM_FD_12_Fail = (uint16)((sint32)(((sint32)
                            rtu_FThr) + 1));
                    }
                    else
                    {
                        /* Transition: '<S109>:557' */
                        if (((uint32)(*rty_Status)) != CeDFIB_e_Init)
                        {
                            /* Transition: '<S109>:563' */
                            *rty_Status = CeDFIB_e_Pass_FaultFiltering;

                            /* Transition: '<S109>:564' */
                            /* Transition: '<S109>:562' */
                        }
                        else
                        {
                            /* Transition: '<S109>:559' */
                            /* Transition: '<S109>:561' */
                            /* Transition: '<S109>:562' */
                        }
                    }
                }
                else
                {
                    /* Transition: '<S109>:521' */
                    if (((sint32)VeCIDB_Cnt_BCM_FD_12_Fail) > 0)
                    {
                        /* Transition: '<S109>:523' */
                        /* Transition: '<S109>:567' */
                        tmp = ((sint32)VeCIDB_Cnt_BCM_FD_12_Fail) - 1;
                        if ((((sint32)VeCIDB_Cnt_BCM_FD_12_Fail) - 1) < 0)
                        {
                            tmp = 0;
                        }

                        VeCIDB_Cnt_BCM_FD_12_Fail = (uint16)tmp;
                        if (((uint32)(*rty_Status)) != CeDFIB_e_Init)
                        {
                            /* Transition: '<S109>:574' */
                            *rty_Status = CeDFIB_e_Pass_FaultRemoved;

                            /* Transition: '<S109>:569' */
                        }
                        else
                        {
                            /* Transition: '<S109>:572' */
                            /* Transition: '<S109>:573' */
                        }
                    }
                    else
                    {
                        /* Transition: '<S109>:577' */
                        if (((uint32)(*rty_Status)) != CeDFIB_e_Init)
                        {
                            /* Transition: '<S109>:582' */
                            *rty_Status = CeDFIB_e_Pass;

                            /* Transition: '<S109>:581' */
                        }
                        else
                        {
                            /* Transition: '<S109>:579' */
                            /* Transition: '<S109>:580' */
                        }

                        /* Transition: '<S109>:583' */
                        /* Transition: '<S109>:569' */
                    }

                    /* Transition: '<S109>:570' */
                    /* Transition: '<S109>:564' */
                    /* Transition: '<S109>:562' */
                }

                /* Transition: '<S109>:532' */
                /* Transition: '<S109>:533' */
                /* Transition: '<S109>:545' */
                /* Transition: '<S109>:546' */
            }
            else
            {
                /* Transition: '<S109>:520' */
                if ((((uint32)(*rty_Status)) == CeDFIB_e_Fail) || (((uint32)
                        (*rty_Status)) == CeDFIB_e_Fail_FaultRemoved))
                {
                    /* Transition: '<S109>:534' */
                    if (rtu_Err)
                    {
                        /* Transition: '<S109>:535' */
                        /* Transition: '<S109>:538' */
                        tmp = ((sint32)rtu_FThr) + 1;
                        if ((((sint32)rtu_FThr) + 1) > 65535)
                        {
                            tmp = 65535;
                        }

                        VeCIDB_Cnt_BCM_FD_12_Fail = (uint16)tmp;
                        *rty_Status = CeDFIB_e_Fail;
                    }
                    else
                    {
                        /* Transition: '<S109>:537' */
                        tmp = ((sint32)VeCIDB_Cnt_BCM_FD_12_Fail) - 1;
                        if ((((sint32)VeCIDB_Cnt_BCM_FD_12_Fail) - 1) < 0)
                        {
                            tmp = 0;
                        }

                        VeCIDB_Cnt_BCM_FD_12_Fail = (uint16)tmp;
                        if (((sint32)VeCIDB_Cnt_BCM_FD_12_Fail) <= 0)
                        {
                            /* Transition: '<S109>:539' */
                            /* Transition: '<S109>:541' */
                            *rty_Status = CeDFIB_e_Pass;
                            VeCIDB_b_BCM_FD_12_Pass = true;
                        }
                        else
                        {
                            /* Transition: '<S109>:540' */
                            *rty_Status = CeDFIB_e_Fail_FaultRemoved;

                            /* Transition: '<S109>:542' */
                        }

                        /* Transition: '<S109>:543' */
                    }

                    /* Transition: '<S109>:544' */
                    /* Transition: '<S109>:545' */
                    /* Transition: '<S109>:546' */
                }
                else
                {
                    /* Transition: '<S109>:536' */
                }
            }
        }
        else
        {
            /* Transition: '<S109>:503' */
            /* Transition: '<S109>:505' */
            /* Transition: '<S109>:533' */
            /* Transition: '<S109>:545' */
            /* Transition: '<S109>:546' */
        }
    }

    /* End of Chart: '<S104>/Diagnostic Debounce' */
    /* Transition: '<S109>:547' */
}

#endif

/* System initialize for atomic system: '<S95>/U0422_Bluen_100ms' */
#if Rte_SysCon_Variant_CIDB_U0422_BLUEN

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0422_Bluen_100ms_Init(void)
{
    /* Start for VariantMerge generated from: '<S95>/VeCIDB_b_BCM_FD_12_CalDiagEnbl' incorporates:
     *  Constant: '<S107>/Calib'
     */
    CIDB_ac_B.VariantMergeForOutportVeCIDB_b_BCM_FD_12 =
        KeCIDB_b_BCM_FD_12_ePT_SNA_DiagEnbl;

    /* SystemInitialize for Chart: '<S104>/Diagnostic Debounce' */
    CIDB_ac_DiagnosticDebounce_n_Init(&CIDB_ac_B.Status_edcdnm);
}

#endif

/* Output and update for atomic system: '<S95>/U0422_Bluen_100ms' */
#if Rte_SysCon_Variant_CIDB_U0422_BLUEN

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0422_Bluen_100ms(void)
{
    boolean rtb_AND_kd;
    boolean rtb_RelationalOperator3;

    /* VariantMerge generated from: '<S95>/VeCIDB_b_BCM_FD_12_CalDiagEnbl' incorporates:
     *  Constant: '<S107>/Calib'
     */
    CIDB_ac_B.VariantMergeForOutportVeCIDB_b_BCM_FD_12 =
        KeCIDB_b_BCM_FD_12_ePT_SNA_DiagEnbl;

    /* RelationalOperator: '<S104>/Relational Operator3' incorporates:
     *  Constant: '<S104>/Constant3'
     *  DataStoreRead: '<S102>/Data Store Read'
     *  S-Function (sfix_bitop): '<S104>/Bitwise Operator2'
     */
    rtb_RelationalOperator3 = ((((uint32)CIDB_ac_DW.StatusByte_InvData_BCM) &
        64U) == 0U);

    /* DataTypeConversion: '<S103>/Cast To Boolean' incorporates:
     *  Constant: '<S103>/Constant Value'
     *  S-Function (sfix_bitop): '<S103>/Bitwise Operator'
     */
    VeCIDB_b_BCM_FD_12_FaultCriteria = ((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_PreCondCab) & 8U) != 0U);

    /* Outputs for Atomic SubSystem: '<S104>/EdgeFalling1' */
    /* Logic: '<S110>/AND' incorporates:
     *  Logic: '<S110>/OR1'
     *  UnitDelay: '<S110>/Unit Delay'
     */
    rtb_AND_kd = ((!rtb_RelationalOperator3) && (CIDB_ac_DW.UnitDelay_DSTATE_e));

    /* Update for UnitDelay: '<S110>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_e = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S104>/EdgeFalling1' */

    /* Chart: '<S104>/Diagnostic Debounce' incorporates:
     *  Constant: '<S104>/Constant1'
     *  Constant: '<S105>/Calib'
     *  Constant: '<S106>/Calib'
     *  Constant: '<S108>/Calib'
     *  DataStoreRead: '<S102>/Data Store Read'
     *  Logic: '<S104>/Logical Operator'
     *  Logic: '<S104>/Logical Operator1'
     *  Logic: '<S104>/Logical10'
     *  Logic: '<S104>/Logical12'
     *  Logic: '<S104>/Logical5'
     *  RelationalOperator: '<S104>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S104>/Bitwise Operator3'
     */
    CIDB_ac_DiagnosticDebounce_b
        (((CIDB_ac_B.VariantMergeForOutportVeCIDB_b_BCM_FD_12) &&
          (CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_U0422_Di_p)) &&
         ((!KeCIDB_b_BCM_FD_12_ePT_SNA_FailLatchEnable) || (((((uint32)
              CIDB_ac_DW.StatusByte_InvData_BCM) & 1U) == 0U) ||
           (!rtb_RelationalOperator3))), VeCIDB_b_BCM_FD_12_FaultCriteria,
         KeCIDB_Cnt_BCM_FD_12_ePT_SNA_FailLmt,
         KeCIDB_Cnt_BCM_FD_12_ePT_SNAFailINC, rtb_AND_kd ||
         (CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_RstDiag_e1),
         &CIDB_ac_B.Status_edcdnm);
}

#endif

/* System initialize for atomic system: '<S95>/U0422_COREBEV_100ms' */
#if Rte_SysCon_Variant_CIDB_U0422_Corebev

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0422_COREBEV_100ms_Init(void)
{
    /* Start for Constant: '<S118>/Calib' */
    CIDB_ac_B.VariantMergeForOutportVeCIDB_b_BCM_FD_12 =
        KeCIDB_b_BCM_FD_12_ePT_SNA_DiagEnbl;

    /* SystemInitialize for Chart: '<S115>/Diagnostic Debounce' */
    CIDB_ac_DiagnosticDebounce_n_Init(&CIDB_ac_B.Status_edcdnm);
}

#endif

/* Output and update for atomic system: '<S95>/U0422_COREBEV_100ms' */
#if Rte_SysCon_Variant_CIDB_U0422_Corebev

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0422_COREBEV_100ms(void)
{
    boolean rtb_AND_lc;
    boolean rtb_RelationalOperator3;

    /* Constant: '<S118>/Calib' */
    CIDB_ac_B.VariantMergeForOutportVeCIDB_b_BCM_FD_12 =
        KeCIDB_b_BCM_FD_12_ePT_SNA_DiagEnbl;

    /* RelationalOperator: '<S115>/Relational Operator3' incorporates:
     *  Constant: '<S115>/Constant3'
     *  DataStoreRead: '<S113>/Data Store Read'
     *  S-Function (sfix_bitop): '<S115>/Bitwise Operator2'
     */
    rtb_RelationalOperator3 = ((((uint32)CIDB_ac_DW.StatusByte_InvData_BCM) &
        64U) == 0U);

    /* DataTypeConversion: '<S114>/Cast To Boolean' incorporates:
     *  Constant: '<S114>/Constant Value'
     *  S-Function (sfix_bitop): '<S114>/Bitwise Operator'
     */
    VeCIDB_b_BCM_FD_12_FaultCriteria = ((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_PreCondCab) & 8U) != 0U);

    /* Outputs for Atomic SubSystem: '<S115>/EdgeFalling1' */
    /* Logic: '<S121>/AND' incorporates:
     *  Logic: '<S121>/OR1'
     *  UnitDelay: '<S121>/Unit Delay'
     */
    rtb_AND_lc = ((!rtb_RelationalOperator3) && (CIDB_ac_DW.UnitDelay_DSTATE_m));

    /* Update for UnitDelay: '<S121>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_m = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S115>/EdgeFalling1' */

    /* Chart: '<S115>/Diagnostic Debounce' incorporates:
     *  Constant: '<S115>/Constant1'
     *  Constant: '<S116>/Calib'
     *  Constant: '<S117>/Calib'
     *  Constant: '<S119>/Calib'
     *  DataStoreRead: '<S113>/Data Store Read'
     *  Logic: '<S115>/Logical Operator'
     *  Logic: '<S115>/Logical Operator1'
     *  Logic: '<S115>/Logical10'
     *  Logic: '<S115>/Logical12'
     *  Logic: '<S115>/Logical5'
     *  RelationalOperator: '<S115>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S115>/Bitwise Operator3'
     */
    CIDB_ac_DiagnosticDebounce_b
        (((CIDB_ac_B.VariantMergeForOutportVeCIDB_b_BCM_FD_12) &&
          (CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_U0422_Di_p)) &&
         ((!KeCIDB_b_BCM_FD_12_ePT_SNA_FailLatchEnable) || (((((uint32)
              CIDB_ac_DW.StatusByte_InvData_BCM) & 1U) == 0U) ||
           (!rtb_RelationalOperator3))), VeCIDB_b_BCM_FD_12_FaultCriteria,
         KeCIDB_Cnt_BCM_FD_12_ePT_SNA_FailLmt,
         KeCIDB_Cnt_BCM_FD_12_ePT_SNAFailINC, rtb_AND_lc ||
         (CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_RstDiag_e1),
         &CIDB_ac_B.Status_edcdnm);
}

#endif

/* System initialize for atomic system: '<S95>/U0422_Pegasus_100ms' */
#if Rte_SysCon_Variant_CIDB_U0422_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0422_Pegasus_100ms_Init(void)
{
    /* Start for Constant: '<S129>/Calib' */
    CIDB_ac_B.VariantMergeForOutportVeCIDB_b_BCM_FD_12 =
        KeCIDB_b_BCM_FD_12_ePT_SNA_DiagEnbl;

    /* SystemInitialize for Chart: '<S126>/Diagnostic Debounce' */
    CIDB_ac_DiagnosticDebounce_n_Init(&CIDB_ac_B.Status_edcdnm);
}

#endif

/* Output and update for atomic system: '<S95>/U0422_Pegasus_100ms' */
#if Rte_SysCon_Variant_CIDB_U0422_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0422_Pegasus_100ms(void)
{
    boolean rtb_AND_a;
    boolean rtb_RelationalOperator3;

    /* Constant: '<S129>/Calib' */
    CIDB_ac_B.VariantMergeForOutportVeCIDB_b_BCM_FD_12 =
        KeCIDB_b_BCM_FD_12_ePT_SNA_DiagEnbl;

    /* RelationalOperator: '<S126>/Relational Operator3' incorporates:
     *  Constant: '<S126>/Constant3'
     *  DataStoreRead: '<S124>/Data Store Read'
     *  S-Function (sfix_bitop): '<S126>/Bitwise Operator2'
     */
    rtb_RelationalOperator3 = ((((uint32)CIDB_ac_DW.StatusByte_InvData_BCM) &
        64U) == 0U);

    /* DataTypeConversion: '<S125>/Cast To Boolean' incorporates:
     *  Constant: '<S125>/Constant Value'
     *  S-Function (sfix_bitop): '<S125>/Bitwise Operator'
     */
    VeCIDB_b_BCM_FD_12_FaultCriteria = ((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_PreCondCab) & 8U) != 0U);

    /* Outputs for Atomic SubSystem: '<S126>/EdgeFalling1' */
    /* Logic: '<S132>/AND' incorporates:
     *  Logic: '<S132>/OR1'
     *  UnitDelay: '<S132>/Unit Delay'
     */
    rtb_AND_a = ((!rtb_RelationalOperator3) && (CIDB_ac_DW.UnitDelay_DSTATE_gp));

    /* Update for UnitDelay: '<S132>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_gp = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S126>/EdgeFalling1' */

    /* Chart: '<S126>/Diagnostic Debounce' incorporates:
     *  Constant: '<S126>/Constant1'
     *  Constant: '<S127>/Calib'
     *  Constant: '<S128>/Calib'
     *  Constant: '<S130>/Calib'
     *  DataStoreRead: '<S124>/Data Store Read'
     *  Logic: '<S126>/Logical Operator'
     *  Logic: '<S126>/Logical Operator1'
     *  Logic: '<S126>/Logical10'
     *  Logic: '<S126>/Logical12'
     *  Logic: '<S126>/Logical5'
     *  RelationalOperator: '<S126>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S126>/Bitwise Operator3'
     */
    CIDB_ac_DiagnosticDebounce_b
        (((CIDB_ac_B.VariantMergeForOutportVeCIDB_b_BCM_FD_12) &&
          (CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_U0422_Di_p)) &&
         ((!KeCIDB_b_BCM_FD_12_ePT_SNA_FailLatchEnable) || (((((uint32)
              CIDB_ac_DW.StatusByte_InvData_BCM) & 1U) == 0U) ||
           (!rtb_RelationalOperator3))), VeCIDB_b_BCM_FD_12_FaultCriteria,
         KeCIDB_Cnt_BCM_FD_12_ePT_SNA_FailLmt,
         KeCIDB_Cnt_BCM_FD_12_ePT_SNAFailINC, rtb_AND_a ||
         (CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_RstDiag_e1),
         &CIDB_ac_B.Status_edcdnm);
}

#endif

/*
 * System initialize for atomic system:
 *    '<S138>/Diagnostic Debounce'
 *    '<S148>/Diagnostic Debounce'
 */
#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_DiagnosticDebounce_im_Init(P2VAR
    (TeDFIB_e_FaultDebounceStatus, AUTOMATIC, CIDB_VAR_INIT) rty_Status)
{
    *rty_Status = CeDFIB_e_Init;
}

#endif

/*
 * Output and update for atomic system:
 *    '<S138>/Diagnostic Debounce'
 *    '<S148>/Diagnostic Debounce'
 */
#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_DiagnosticDebounce_nn(VAR(boolean,
    AUTOMATIC) rtu_EnDiag, VAR(boolean, AUTOMATIC) rtu_Err, VAR(uint16,
    AUTOMATIC) rtu_FThr, VAR(uint8, AUTOMATIC) rtu_FInc, VAR(boolean, AUTOMATIC)
    rtu_Reset, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, CIDB_VAR_INIT)
    rty_Status)
{
    sint32 tmp;

    /* Chart: '<S138>/Diagnostic Debounce' */
    /* Gateway: DiagnosticDebounceimplausibleSignalSNA/Diagnostic Debounce */
    /* During: DiagnosticDebounceimplausibleSignalSNA/Diagnostic Debounce */
    /* Entry Internal: DiagnosticDebounceimplausibleSignalSNA/Diagnostic Debounce */
    /* Transition: '<S143>:499' */
    VeCIDB_b_HV_CHARGER1_Fail = false;
    VeCIDB_b_HV_CHARGER1_Pass = false;
    if (rtu_Reset)
    {
        /* Transition: '<S143>:500' */
        /* Transition: '<S143>:502' */
        *rty_Status = CeDFIB_e_Init;
        VeCIDB_Cnt_HV_CHARGER1_Fail = 0U;
        VeCIDB_Cnt_HV_CHARGER1_Init = 0U;

        /* Transition: '<S143>:505' */
        /* Transition: '<S143>:533' */
        /* Transition: '<S143>:545' */
        /* Transition: '<S143>:546' */
    }
    else
    {
        /* Transition: '<S143>:501' */
        if (rtu_EnDiag)
        {
            /* Transition: '<S143>:504' */
            if (((uint32)(*rty_Status)) == CeDFIB_e_Init)
            {
                /* Transition: '<S143>:507' */
                if (!rtu_Err)
                {
                    /* Transition: '<S143>:506' */
                    /* Transition: '<S143>:509' */
                    tmp = ((sint32)VeCIDB_Cnt_HV_CHARGER1_Init) + ((sint32)
                        rtu_FInc);
                    if (tmp > 65535)
                    {
                        tmp = 65535;
                    }

                    VeCIDB_Cnt_HV_CHARGER1_Init = (uint16)tmp;
                    if (VeCIDB_Cnt_HV_CHARGER1_Init >= rtu_FThr)
                    {
                        /* Transition: '<S143>:511' */
                        /* Transition: '<S143>:513' */
                        *rty_Status = CeDFIB_e_Pass;
                        VeCIDB_b_HV_CHARGER1_Pass = true;

                        /* Transition: '<S143>:516' */
                    }
                    else
                    {
                        /* Transition: '<S143>:512' */
                    }

                    /* Transition: '<S143>:515' */
                }
                else
                {
                    /* Transition: '<S143>:508' */
                    VeCIDB_Cnt_HV_CHARGER1_Init = 0U;
                }

                /* Transition: '<S143>:514' */
            }
            else
            {
                /* Transition: '<S143>:510' */
            }

            /* Transition: '<S143>:517' */
            if ((((((uint32)(*rty_Status)) == CeDFIB_e_Pass) || (((uint32)
                    (*rty_Status)) == CeDFIB_e_Pass_FaultRemoved)) || (((uint32)
                    (*rty_Status)) == CeDFIB_e_Pass_FaultFiltering)) ||
                    (((uint32)(*rty_Status)) == CeDFIB_e_Init))
            {
                /* Transition: '<S143>:518' */
                if (rtu_Err)
                {
                    /* Transition: '<S143>:519' */
                    /* Transition: '<S143>:522' */
                    tmp = ((sint32)VeCIDB_Cnt_HV_CHARGER1_Fail) + ((sint32)
                        rtu_FInc);
                    if (tmp > 65535)
                    {
                        tmp = 65535;
                    }

                    VeCIDB_Cnt_HV_CHARGER1_Fail = (uint16)tmp;
                    if (VeCIDB_Cnt_HV_CHARGER1_Fail > rtu_FThr)
                    {
                        /* Transition: '<S143>:524' */
                        /* Transition: '<S143>:528' */
                        *rty_Status = CeDFIB_e_Fail;
                        VeCIDB_b_HV_CHARGER1_Fail = true;
                        VeCIDB_Cnt_HV_CHARGER1_Fail = (uint16)((sint32)(((sint32)
                            rtu_FThr) + 1));
                    }
                    else
                    {
                        /* Transition: '<S143>:557' */
                        if (((uint32)(*rty_Status)) != CeDFIB_e_Init)
                        {
                            /* Transition: '<S143>:563' */
                            *rty_Status = CeDFIB_e_Pass_FaultFiltering;

                            /* Transition: '<S143>:564' */
                            /* Transition: '<S143>:562' */
                        }
                        else
                        {
                            /* Transition: '<S143>:559' */
                            /* Transition: '<S143>:561' */
                            /* Transition: '<S143>:562' */
                        }
                    }
                }
                else
                {
                    /* Transition: '<S143>:521' */
                    if (((sint32)VeCIDB_Cnt_HV_CHARGER1_Fail) > 0)
                    {
                        /* Transition: '<S143>:523' */
                        /* Transition: '<S143>:567' */
                        tmp = ((sint32)VeCIDB_Cnt_HV_CHARGER1_Fail) - 1;
                        if ((((sint32)VeCIDB_Cnt_HV_CHARGER1_Fail) - 1) < 0)
                        {
                            tmp = 0;
                        }

                        VeCIDB_Cnt_HV_CHARGER1_Fail = (uint16)tmp;
                        if (((uint32)(*rty_Status)) != CeDFIB_e_Init)
                        {
                            /* Transition: '<S143>:574' */
                            *rty_Status = CeDFIB_e_Pass_FaultRemoved;

                            /* Transition: '<S143>:569' */
                        }
                        else
                        {
                            /* Transition: '<S143>:572' */
                            /* Transition: '<S143>:573' */
                        }
                    }
                    else
                    {
                        /* Transition: '<S143>:577' */
                        if (((uint32)(*rty_Status)) != CeDFIB_e_Init)
                        {
                            /* Transition: '<S143>:582' */
                            *rty_Status = CeDFIB_e_Pass;

                            /* Transition: '<S143>:581' */
                        }
                        else
                        {
                            /* Transition: '<S143>:579' */
                            /* Transition: '<S143>:580' */
                        }

                        /* Transition: '<S143>:583' */
                        /* Transition: '<S143>:569' */
                    }

                    /* Transition: '<S143>:570' */
                    /* Transition: '<S143>:564' */
                    /* Transition: '<S143>:562' */
                }

                /* Transition: '<S143>:532' */
                /* Transition: '<S143>:533' */
                /* Transition: '<S143>:545' */
                /* Transition: '<S143>:546' */
            }
            else
            {
                /* Transition: '<S143>:520' */
                if ((((uint32)(*rty_Status)) == CeDFIB_e_Fail) || (((uint32)
                        (*rty_Status)) == CeDFIB_e_Fail_FaultRemoved))
                {
                    /* Transition: '<S143>:534' */
                    if (rtu_Err)
                    {
                        /* Transition: '<S143>:535' */
                        /* Transition: '<S143>:538' */
                        tmp = ((sint32)rtu_FThr) + 1;
                        if ((((sint32)rtu_FThr) + 1) > 65535)
                        {
                            tmp = 65535;
                        }

                        VeCIDB_Cnt_HV_CHARGER1_Fail = (uint16)tmp;
                        *rty_Status = CeDFIB_e_Fail;
                    }
                    else
                    {
                        /* Transition: '<S143>:537' */
                        tmp = ((sint32)VeCIDB_Cnt_HV_CHARGER1_Fail) - 1;
                        if ((((sint32)VeCIDB_Cnt_HV_CHARGER1_Fail) - 1) < 0)
                        {
                            tmp = 0;
                        }

                        VeCIDB_Cnt_HV_CHARGER1_Fail = (uint16)tmp;
                        if (((sint32)VeCIDB_Cnt_HV_CHARGER1_Fail) <= 0)
                        {
                            /* Transition: '<S143>:539' */
                            /* Transition: '<S143>:541' */
                            *rty_Status = CeDFIB_e_Pass;
                            VeCIDB_b_HV_CHARGER1_Pass = true;
                        }
                        else
                        {
                            /* Transition: '<S143>:540' */
                            *rty_Status = CeDFIB_e_Fail_FaultRemoved;

                            /* Transition: '<S143>:542' */
                        }

                        /* Transition: '<S143>:543' */
                    }

                    /* Transition: '<S143>:544' */
                    /* Transition: '<S143>:545' */
                    /* Transition: '<S143>:546' */
                }
                else
                {
                    /* Transition: '<S143>:536' */
                }
            }
        }
        else
        {
            /* Transition: '<S143>:503' */
            /* Transition: '<S143>:505' */
            /* Transition: '<S143>:533' */
            /* Transition: '<S143>:545' */
            /* Transition: '<S143>:546' */
        }
    }

    /* End of Chart: '<S138>/Diagnostic Debounce' */
    /* Transition: '<S143>:547' */
}

#endif

/* System initialize for atomic system: '<S96>/U049C_COREBEV_100ms' */
#if Rte_SysCon_Variant_CIDB_U049C_Corebev

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U049C_COREBEV_100ms_Init(void)
{
    /* Start for VariantMerge generated from: '<S96>/VeCIDB_b_HV_CHARGER1_CalDiagEnbl' incorporates:
     *  Constant: '<S141>/Calib'
     */
    CIDB_ac_B.VariantMergeForOutportVeCIDB_b_HV_CHAR_c =
        KeCIDB_b_HV_CHARGER1_ePT_SNA_DiagEnbl;

    /* SystemInitialize for Chart: '<S138>/Diagnostic Debounce' */
    CIDB_ac_DiagnosticDebounce_im_Init(&CIDB_ac_B.Status_edcdn);
}

#endif

/* Output and update for atomic system: '<S96>/U049C_COREBEV_100ms' */
#if Rte_SysCon_Variant_CIDB_U049C_Corebev

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U049C_COREBEV_100ms(void)
{
    boolean rtb_AND_o4;
    boolean rtb_RelationalOperator3;

    /* VariantMerge generated from: '<S96>/VeCIDB_b_HV_CHARGER1_CalDiagEnbl' incorporates:
     *  Constant: '<S141>/Calib'
     */
    CIDB_ac_B.VariantMergeForOutportVeCIDB_b_HV_CHAR_c =
        KeCIDB_b_HV_CHARGER1_ePT_SNA_DiagEnbl;

    /* RelationalOperator: '<S138>/Relational Operator3' incorporates:
     *  Constant: '<S138>/Constant3'
     *  DataStoreRead: '<S136>/Data Store Read'
     *  S-Function (sfix_bitop): '<S138>/Bitwise Operator2'
     */
    rtb_RelationalOperator3 = ((((uint32)CIDB_ac_DW.StatusByte_InvData_OBCM) &
        64U) == 0U);

    /* Logic: '<S137>/Logical1' incorporates:
     *  Constant: '<S137>/Constant Value'
     *  DataTypeConversion: '<S137>/Cast To Boolean'
     *  DataTypeConversion: '<S137>/Cast To Boolean1'
     *  DataTypeConversion: '<S137>/Cast To Boolean10'
     *  DataTypeConversion: '<S137>/Cast To Boolean11'
     *  DataTypeConversion: '<S137>/Cast To Boolean12'
     *  DataTypeConversion: '<S137>/Cast To Boolean2'
     *  DataTypeConversion: '<S137>/Cast To Boolean3'
     *  DataTypeConversion: '<S137>/Cast To Boolean4'
     *  DataTypeConversion: '<S137>/Cast To Boolean5'
     *  DataTypeConversion: '<S137>/Cast To Boolean6'
     *  DataTypeConversion: '<S137>/Cast To Boolean7'
     *  DataTypeConversion: '<S137>/Cast To Boolean8'
     *  DataTypeConversion: '<S137>/Cast To Boolean9'
     *  S-Function (sfix_bitop): '<S137>/Bitwise Operator'
     *  S-Function (sfix_bitop): '<S137>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S137>/Bitwise Operator10'
     *  S-Function (sfix_bitop): '<S137>/Bitwise Operator11'
     *  S-Function (sfix_bitop): '<S137>/Bitwise Operator12'
     *  S-Function (sfix_bitop): '<S137>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S137>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S137>/Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S137>/Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S137>/Bitwise Operator6'
     *  S-Function (sfix_bitop): '<S137>/Bitwise Operator7'
     *  S-Function (sfix_bitop): '<S137>/Bitwise Operator8'
     *  S-Function (sfix_bitop): '<S137>/Bitwise Operator9'
     */
    VeCIDB_b_HV_CHARGER1_FaultCriteria = ((((((((((((((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_AC_Side_Cu) & 8U) != 0U) ||
        ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_AC_Side__p) & 8U) !=
         0U)) || ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_AC_Side__m)
                   & 8U) != 0U)) || ((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_AC_Side_Vo) & 8U) != 0U)) ||
        ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_AC_Side__j) & 8U) !=
         0U)) || ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_AC_Side__g)
                   & 8U) != 0U)) || ((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BatterySid) & 8U) != 0U)) ||
        ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BatteryS_i) & 8U) !=
         0U)) || ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_ChargeCurr)
                   & 8U) != 0U)) || ((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_ChrgCurrAv) & 8U) != 0U)) ||
        ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_InputCurre) & 8U) !=
         0U)) || ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_J1772_Stat)
                   & 8U) != 0U)) || ((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_SuprtdProt) & 8U) != 0U));

    /* Outputs for Atomic SubSystem: '<S138>/EdgeFalling1' */
    /* Logic: '<S144>/AND' incorporates:
     *  Logic: '<S144>/OR1'
     *  UnitDelay: '<S144>/Unit Delay'
     */
    rtb_AND_o4 = ((!rtb_RelationalOperator3) && (CIDB_ac_DW.UnitDelay_DSTATE_gk));

    /* Update for UnitDelay: '<S144>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_gk = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S138>/EdgeFalling1' */

    /* Chart: '<S138>/Diagnostic Debounce' incorporates:
     *  Constant: '<S138>/Constant1'
     *  Constant: '<S139>/Calib'
     *  Constant: '<S140>/Calib'
     *  Constant: '<S142>/Calib'
     *  DataStoreRead: '<S136>/Data Store Read'
     *  Logic: '<S138>/Logical Operator'
     *  Logic: '<S138>/Logical Operator1'
     *  Logic: '<S138>/Logical10'
     *  Logic: '<S138>/Logical12'
     *  Logic: '<S138>/Logical5'
     *  RelationalOperator: '<S138>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S138>/Bitwise Operator3'
     */
    CIDB_ac_DiagnosticDebounce_nn
        (((CIDB_ac_B.VariantMergeForOutportVeCIDB_b_HV_CHAR_c) &&
          (CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_U057B_Diag)) &&
         ((!KeCIDB_b_HV_CHARGER1_ePT_SNA_FailLatchEnable) || (((((uint32)
              CIDB_ac_DW.StatusByte_InvData_OBCM) & 1U) == 0U) ||
           (!rtb_RelationalOperator3))), VeCIDB_b_HV_CHARGER1_FaultCriteria,
         KeCIDB_Cnt_HV_CHARGER1_ePT_SNA_FailLmt,
         KeCIDB_Cnt_HV_CHARGER1_ePT_SNAFailINC, rtb_AND_o4 ||
         (CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_RstDiag_e1),
         &CIDB_ac_B.Status_edcdn);
}

#endif

/* System initialize for atomic system: '<S96>/U049C_Pegasus_100ms' */
#if Rte_SysCon_Variant_CIDB_U049C_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U049C_Pegasus_100ms_Init(void)
{
    /* Start for Constant: '<S151>/Calib' */
    CIDB_ac_B.VariantMergeForOutportVeCIDB_b_HV_CHAR_c =
        KeCIDB_b_HV_CHARGER1_ePT_SNA_DiagEnbl;

    /* SystemInitialize for Chart: '<S148>/Diagnostic Debounce' */
    CIDB_ac_DiagnosticDebounce_im_Init(&CIDB_ac_B.Status_edcdn);
}

#endif

/* Output and update for atomic system: '<S96>/U049C_Pegasus_100ms' */
#if Rte_SysCon_Variant_CIDB_U049C_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U049C_Pegasus_100ms(void)
{
    boolean rtb_AND_a;
    boolean rtb_RelationalOperator3;

    /* Constant: '<S151>/Calib' */
    CIDB_ac_B.VariantMergeForOutportVeCIDB_b_HV_CHAR_c =
        KeCIDB_b_HV_CHARGER1_ePT_SNA_DiagEnbl;

    /* RelationalOperator: '<S148>/Relational Operator3' incorporates:
     *  Constant: '<S148>/Constant3'
     *  DataStoreRead: '<S146>/Data Store Read'
     *  S-Function (sfix_bitop): '<S148>/Bitwise Operator2'
     */
    rtb_RelationalOperator3 = ((((uint32)CIDB_ac_DW.StatusByte_InvData_OBCM) &
        64U) == 0U);

    /* Logic: '<S147>/Logical1' incorporates:
     *  Constant: '<S147>/Constant Value'
     *  DataTypeConversion: '<S147>/Cast To Boolean'
     *  DataTypeConversion: '<S147>/Cast To Boolean1'
     *  DataTypeConversion: '<S147>/Cast To Boolean10'
     *  DataTypeConversion: '<S147>/Cast To Boolean11'
     *  DataTypeConversion: '<S147>/Cast To Boolean12'
     *  DataTypeConversion: '<S147>/Cast To Boolean2'
     *  DataTypeConversion: '<S147>/Cast To Boolean3'
     *  DataTypeConversion: '<S147>/Cast To Boolean4'
     *  DataTypeConversion: '<S147>/Cast To Boolean5'
     *  DataTypeConversion: '<S147>/Cast To Boolean6'
     *  DataTypeConversion: '<S147>/Cast To Boolean7'
     *  DataTypeConversion: '<S147>/Cast To Boolean8'
     *  DataTypeConversion: '<S147>/Cast To Boolean9'
     *  S-Function (sfix_bitop): '<S147>/Bitwise Operator'
     *  S-Function (sfix_bitop): '<S147>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S147>/Bitwise Operator10'
     *  S-Function (sfix_bitop): '<S147>/Bitwise Operator11'
     *  S-Function (sfix_bitop): '<S147>/Bitwise Operator12'
     *  S-Function (sfix_bitop): '<S147>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S147>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S147>/Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S147>/Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S147>/Bitwise Operator6'
     *  S-Function (sfix_bitop): '<S147>/Bitwise Operator7'
     *  S-Function (sfix_bitop): '<S147>/Bitwise Operator8'
     *  S-Function (sfix_bitop): '<S147>/Bitwise Operator9'
     */
    VeCIDB_b_HV_CHARGER1_FaultCriteria = ((((((((((((((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_AC_Side_Cu) & 8U) != 0U) ||
        ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_AC_Side__p) & 8U) !=
         0U)) || ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_AC_Side__m)
                   & 8U) != 0U)) || ((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_AC_Side_Vo) & 8U) != 0U)) ||
        ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_AC_Side__j) & 8U) !=
         0U)) || ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_AC_Side__g)
                   & 8U) != 0U)) || ((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BatterySid) & 8U) != 0U)) ||
        ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BatteryS_i) & 8U) !=
         0U)) || ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_ChargeCurr)
                   & 8U) != 0U)) || ((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_ChrgCurrAv) & 8U) != 0U)) ||
        ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_InputCurre) & 8U) !=
         0U)) || ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_J1772_Stat)
                   & 8U) != 0U)) || ((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_SuprtdProt) & 8U) != 0U));

    /* Outputs for Atomic SubSystem: '<S148>/EdgeFalling1' */
    /* Logic: '<S154>/AND' incorporates:
     *  Logic: '<S154>/OR1'
     *  UnitDelay: '<S154>/Unit Delay'
     */
    rtb_AND_a = ((!rtb_RelationalOperator3) && (CIDB_ac_DW.UnitDelay_DSTATE_p));

    /* Update for UnitDelay: '<S154>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_p = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S148>/EdgeFalling1' */

    /* Chart: '<S148>/Diagnostic Debounce' incorporates:
     *  Constant: '<S148>/Constant1'
     *  Constant: '<S149>/Calib'
     *  Constant: '<S150>/Calib'
     *  Constant: '<S152>/Calib'
     *  DataStoreRead: '<S146>/Data Store Read'
     *  Logic: '<S148>/Logical Operator'
     *  Logic: '<S148>/Logical Operator1'
     *  Logic: '<S148>/Logical10'
     *  Logic: '<S148>/Logical12'
     *  Logic: '<S148>/Logical5'
     *  RelationalOperator: '<S148>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S148>/Bitwise Operator3'
     */
    CIDB_ac_DiagnosticDebounce_nn
        (((CIDB_ac_B.VariantMergeForOutportVeCIDB_b_HV_CHAR_c) &&
          (CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_U057B_Diag)) &&
         ((!KeCIDB_b_HV_CHARGER1_ePT_SNA_FailLatchEnable) || (((((uint32)
              CIDB_ac_DW.StatusByte_InvData_OBCM) & 1U) == 0U) ||
           (!rtb_RelationalOperator3))), VeCIDB_b_HV_CHARGER1_FaultCriteria,
         KeCIDB_Cnt_HV_CHARGER1_ePT_SNA_FailLmt,
         KeCIDB_Cnt_HV_CHARGER1_ePT_SNAFailINC, rtb_AND_a ||
         (CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_RstDiag_e1),
         &CIDB_ac_B.Status_edcdn);
}

#endif

/*
 * System initialize for enable system:
 *    '<S701>/U0422_BCM_FD_10'
 *    '<S702>/U0422_BCM_FD_10'
 *    '<S703>/U0422_BCM_FD_10'
 */
#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0422_BCM_FD_10_Init(P2VAR
    (TeDFIB_e_FaultDebounceStatus, AUTOMATIC, CIDB_VAR_INIT)
    rty_VeCIDB_e_BCM_FD_10_ErrState, P2VAR(boolean, AUTOMATIC, CIDB_VAR_INIT)
    rty_VeCIDB_b_BCM_FD_10_CalDiagEnbl)
{
    /* SystemInitialize for SignalConversion generated from: '<S704>/VeCIDB_b_BCM_FD_10_CalDiagEnbl' incorporates:
     *  Constant: '<S712>/Calib'
     */
    *rty_VeCIDB_b_BCM_FD_10_CalDiagEnbl = KeCIDB_b_BCM_FD_10_ePT_SNA_DiagEnbl;

    /* SystemInitialize for Chart: '<S709>/Diagnostic Debounce' */
    *rty_VeCIDB_e_BCM_FD_10_ErrState = CeDFIB_e_Init;
}

#endif

/*
 * Output and update for enable system:
 *    '<S701>/U0422_BCM_FD_10'
 *    '<S702>/U0422_BCM_FD_10'
 *    '<S703>/U0422_BCM_FD_10'
 * Common block description:
 *   If the electrical diagnostics is enabled and the sensor raw value is less
 *   than a calibratable threshold, the low circuit OBD1 fault is set after the
 *   maturation process. During the maturation process a flag is raised.
 */
#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0422_BCM_FD_10(VAR(boolean,
    AUTOMATIC) rtu_Enable, VAR(boolean, AUTOMATIC) rtu_VeCIDB_b_U0422_DiagEnbl,
    VAR(boolean, AUTOMATIC) rtu_VeCIDB_b_RstDiagCntr, VAR(uint8, AUTOMATIC)
    rtu_VeSR1B_y_CmdIgnSts_SigSts, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC,
    CIDB_VAR_INIT) rty_VeCIDB_e_BCM_FD_10_ErrState, P2VAR(boolean, AUTOMATIC,
    CIDB_VAR_INIT) rty_VeCIDB_b_BCM_FD_10_CalDiagEnbl, P2VAR
    (DW_U0422_BCM_FD_10_CIDB_ac_T, AUTOMATIC, CIDB_VAR_INIT) localDW, P2VAR
    (uint8, AUTOMATIC, CIDB_VAR_INIT) rtd_StatusByte_InvData_BCM)
{
    sint32 tmp;
    boolean rtb_AND_hz;
    boolean rtb_RelationalOperator3_gvh;

    /* Outputs for Enabled SubSystem: '<S701>/U0422_BCM_FD_10' incorporates:
     *  EnablePort: '<S704>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S704>/VeCIDB_b_BCM_FD_10_CalDiagEnbl' incorporates:
         *  Constant: '<S712>/Calib'
         */
        *rty_VeCIDB_b_BCM_FD_10_CalDiagEnbl =
            KeCIDB_b_BCM_FD_10_ePT_SNA_DiagEnbl;

        /* RelationalOperator: '<S709>/Relational Operator3' incorporates:
         *  Constant: '<S709>/Constant3'
         *  S-Function (sfix_bitop): '<S709>/Bitwise Operator2'
         */
        rtb_RelationalOperator3_gvh = ((((uint32)(*rtd_StatusByte_InvData_BCM))
            & 64U) == 0U);

        /* DataTypeConversion: '<S708>/Cast To Boolean' incorporates:
         *  Constant: '<S708>/Constant Value'
         *  S-Function (sfix_bitop): '<S708>/Bitwise Operator'
         */
        VeCIDB_b_BCM_FD_10_FaultCriteria = ((((uint32)
            rtu_VeSR1B_y_CmdIgnSts_SigSts) & 8U) != 0U);

        /* Outputs for Atomic SubSystem: '<S709>/EdgeFalling1' */
        /* Logic: '<S715>/AND' incorporates:
         *  Logic: '<S715>/OR1'
         *  UnitDelay: '<S715>/Unit Delay'
         */
        rtb_AND_hz = ((!rtb_RelationalOperator3_gvh) &&
                      (localDW->UnitDelay_DSTATE));

        /* Update for UnitDelay: '<S715>/Unit Delay' */
        localDW->UnitDelay_DSTATE = rtb_RelationalOperator3_gvh;

        /* End of Outputs for SubSystem: '<S709>/EdgeFalling1' */

        /* Chart: '<S709>/Diagnostic Debounce' incorporates:
         *  Constant: '<S709>/Constant1'
         *  Constant: '<S710>/Calib'
         *  Constant: '<S711>/Calib'
         *  Constant: '<S712>/Calib'
         *  Constant: '<S713>/Calib'
         *  Logic: '<S709>/Logical Operator'
         *  Logic: '<S709>/Logical Operator1'
         *  Logic: '<S709>/Logical10'
         *  Logic: '<S709>/Logical12'
         *  Logic: '<S709>/Logical5'
         *  RelationalOperator: '<S709>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S709>/Bitwise Operator3'
         */
        /* Gateway: DiagnosticDebounceimplausibleSignalSNA/Diagnostic Debounce */
        /* During: DiagnosticDebounceimplausibleSignalSNA/Diagnostic Debounce */
        /* Entry Internal: DiagnosticDebounceimplausibleSignalSNA/Diagnostic Debounce */
        /* Transition: '<S714>:499' */
        VeCIDB_b_BCM_FD_10_Fail = false;
        VeCIDB_b_BCM_FD_10_Pass = false;
        if (rtb_AND_hz || rtu_VeCIDB_b_RstDiagCntr)
        {
            /* Transition: '<S714>:500' */
            /* Transition: '<S714>:502' */
            *rty_VeCIDB_e_BCM_FD_10_ErrState = CeDFIB_e_Init;
            VeCIDB_Cnt_BCM_FD_10_Fail = 0U;
            VeCIDB_Cnt_BCM_FD_10_Init = 0U;

            /* Transition: '<S714>:505' */
            /* Transition: '<S714>:533' */
            /* Transition: '<S714>:545' */
            /* Transition: '<S714>:546' */
        }
        else
        {
            /* Transition: '<S714>:501' */
            if (((KeCIDB_b_BCM_FD_10_ePT_SNA_DiagEnbl) &&
                    rtu_VeCIDB_b_U0422_DiagEnbl) &&
                    ((!KeCIDB_b_BCM_FD_10_ePT_SNA_FailLatchEnable) ||
                     (((((uint32)(*rtd_StatusByte_InvData_BCM)) & 1U) == 0U) ||
                      (!rtb_RelationalOperator3_gvh))))
            {
                /* Transition: '<S714>:504' */
                if (((uint32)(*rty_VeCIDB_e_BCM_FD_10_ErrState)) ==
                        CeDFIB_e_Init)
                {
                    /* Transition: '<S714>:507' */
                    if (!VeCIDB_b_BCM_FD_10_FaultCriteria)
                    {
                        /* Transition: '<S714>:506' */
                        /* Transition: '<S714>:509' */
                        tmp = ((sint32)VeCIDB_Cnt_BCM_FD_10_Init) + ((sint32)
                            KeCIDB_Cnt_BCM_FD_10_ePT_SNAFailINC);
                        if (tmp > 65535)
                        {
                            tmp = 65535;
                        }

                        VeCIDB_Cnt_BCM_FD_10_Init = (uint16)tmp;
                        if (VeCIDB_Cnt_BCM_FD_10_Init >=
                                KeCIDB_Cnt_BCM_FD_10_ePT_SNA_FailLmt)
                        {
                            /* Transition: '<S714>:511' */
                            /* Transition: '<S714>:513' */
                            *rty_VeCIDB_e_BCM_FD_10_ErrState = CeDFIB_e_Pass;
                            VeCIDB_b_BCM_FD_10_Pass = true;

                            /* Transition: '<S714>:516' */
                        }
                        else
                        {
                            /* Transition: '<S714>:512' */
                        }

                        /* Transition: '<S714>:515' */
                    }
                    else
                    {
                        /* Transition: '<S714>:508' */
                        VeCIDB_Cnt_BCM_FD_10_Init = 0U;
                    }

                    /* Transition: '<S714>:514' */
                }
                else
                {
                    /* Transition: '<S714>:510' */
                }

                /* Transition: '<S714>:517' */
                if ((((((uint32)(*rty_VeCIDB_e_BCM_FD_10_ErrState)) ==
                        CeDFIB_e_Pass) || (((uint32)
                                            (*rty_VeCIDB_e_BCM_FD_10_ErrState)) ==
                       CeDFIB_e_Pass_FaultRemoved)) || (((uint32)
                        (*rty_VeCIDB_e_BCM_FD_10_ErrState)) ==
                        CeDFIB_e_Pass_FaultFiltering)) || (((uint32)
                        (*rty_VeCIDB_e_BCM_FD_10_ErrState)) == CeDFIB_e_Init))
                {
                    /* Transition: '<S714>:518' */
                    if (VeCIDB_b_BCM_FD_10_FaultCriteria)
                    {
                        /* Transition: '<S714>:519' */
                        /* Transition: '<S714>:522' */
                        tmp = ((sint32)VeCIDB_Cnt_BCM_FD_10_Fail) + ((sint32)
                            KeCIDB_Cnt_BCM_FD_10_ePT_SNAFailINC);
                        if (tmp > 65535)
                        {
                            tmp = 65535;
                        }

                        VeCIDB_Cnt_BCM_FD_10_Fail = (uint16)tmp;
                        if (VeCIDB_Cnt_BCM_FD_10_Fail >
                                KeCIDB_Cnt_BCM_FD_10_ePT_SNA_FailLmt)
                        {
                            /* Transition: '<S714>:524' */
                            /* Transition: '<S714>:528' */
                            *rty_VeCIDB_e_BCM_FD_10_ErrState = CeDFIB_e_Fail;
                            VeCIDB_b_BCM_FD_10_Fail = true;
                            tmp = ((sint32)KeCIDB_Cnt_BCM_FD_10_ePT_SNA_FailLmt)
                                + 1;
                            if ((((sint32)KeCIDB_Cnt_BCM_FD_10_ePT_SNA_FailLmt)
                                    + 1) > 65535)
                            {
                                tmp = 65535;
                            }

                            VeCIDB_Cnt_BCM_FD_10_Fail = (uint16)tmp;
                        }
                        else
                        {
                            /* Transition: '<S714>:557' */
                            if (((uint32)(*rty_VeCIDB_e_BCM_FD_10_ErrState)) !=
                                    CeDFIB_e_Init)
                            {
                                /* Transition: '<S714>:563' */
                                *rty_VeCIDB_e_BCM_FD_10_ErrState =
                                    CeDFIB_e_Pass_FaultFiltering;

                                /* Transition: '<S714>:564' */
                                /* Transition: '<S714>:562' */
                            }
                            else
                            {
                                /* Transition: '<S714>:559' */
                                /* Transition: '<S714>:561' */
                                /* Transition: '<S714>:562' */
                            }
                        }
                    }
                    else
                    {
                        /* Transition: '<S714>:521' */
                        if (((sint32)VeCIDB_Cnt_BCM_FD_10_Fail) > 0)
                        {
                            /* Transition: '<S714>:523' */
                            /* Transition: '<S714>:567' */
                            tmp = ((sint32)VeCIDB_Cnt_BCM_FD_10_Fail) - 1;
                            if ((((sint32)VeCIDB_Cnt_BCM_FD_10_Fail) - 1) < 0)
                            {
                                tmp = 0;
                            }

                            VeCIDB_Cnt_BCM_FD_10_Fail = (uint16)tmp;
                            if (((uint32)(*rty_VeCIDB_e_BCM_FD_10_ErrState)) !=
                                    CeDFIB_e_Init)
                            {
                                /* Transition: '<S714>:574' */
                                *rty_VeCIDB_e_BCM_FD_10_ErrState =
                                    CeDFIB_e_Pass_FaultRemoved;

                                /* Transition: '<S714>:569' */
                            }
                            else
                            {
                                /* Transition: '<S714>:572' */
                                /* Transition: '<S714>:573' */
                            }
                        }
                        else
                        {
                            /* Transition: '<S714>:577' */
                            if (((uint32)(*rty_VeCIDB_e_BCM_FD_10_ErrState)) !=
                                    CeDFIB_e_Init)
                            {
                                /* Transition: '<S714>:582' */
                                *rty_VeCIDB_e_BCM_FD_10_ErrState = CeDFIB_e_Pass;

                                /* Transition: '<S714>:581' */
                            }
                            else
                            {
                                /* Transition: '<S714>:579' */
                                /* Transition: '<S714>:580' */
                            }

                            /* Transition: '<S714>:583' */
                            /* Transition: '<S714>:569' */
                        }

                        /* Transition: '<S714>:570' */
                        /* Transition: '<S714>:564' */
                        /* Transition: '<S714>:562' */
                    }

                    /* Transition: '<S714>:532' */
                    /* Transition: '<S714>:533' */
                    /* Transition: '<S714>:545' */
                    /* Transition: '<S714>:546' */
                }
                else
                {
                    /* Transition: '<S714>:520' */
                    if ((((uint32)(*rty_VeCIDB_e_BCM_FD_10_ErrState)) ==
                            CeDFIB_e_Fail) || (((uint32)
                                                (*rty_VeCIDB_e_BCM_FD_10_ErrState))
                         == CeDFIB_e_Fail_FaultRemoved))
                    {
                        /* Transition: '<S714>:534' */
                        if (VeCIDB_b_BCM_FD_10_FaultCriteria)
                        {
                            /* Transition: '<S714>:535' */
                            /* Transition: '<S714>:538' */
                            tmp = ((sint32)KeCIDB_Cnt_BCM_FD_10_ePT_SNA_FailLmt)
                                + 1;
                            if ((((sint32)KeCIDB_Cnt_BCM_FD_10_ePT_SNA_FailLmt)
                                    + 1) > 65535)
                            {
                                tmp = 65535;
                            }

                            VeCIDB_Cnt_BCM_FD_10_Fail = (uint16)tmp;
                            *rty_VeCIDB_e_BCM_FD_10_ErrState = CeDFIB_e_Fail;
                        }
                        else
                        {
                            /* Transition: '<S714>:537' */
                            tmp = ((sint32)VeCIDB_Cnt_BCM_FD_10_Fail) - 1;
                            if ((((sint32)VeCIDB_Cnt_BCM_FD_10_Fail) - 1) < 0)
                            {
                                tmp = 0;
                            }

                            VeCIDB_Cnt_BCM_FD_10_Fail = (uint16)tmp;
                            if (((sint32)VeCIDB_Cnt_BCM_FD_10_Fail) <= 0)
                            {
                                /* Transition: '<S714>:539' */
                                /* Transition: '<S714>:541' */
                                *rty_VeCIDB_e_BCM_FD_10_ErrState = CeDFIB_e_Pass;
                                VeCIDB_b_BCM_FD_10_Pass = true;
                            }
                            else
                            {
                                /* Transition: '<S714>:540' */
                                *rty_VeCIDB_e_BCM_FD_10_ErrState =
                                    CeDFIB_e_Fail_FaultRemoved;

                                /* Transition: '<S714>:542' */
                            }

                            /* Transition: '<S714>:543' */
                        }

                        /* Transition: '<S714>:544' */
                        /* Transition: '<S714>:545' */
                        /* Transition: '<S714>:546' */
                    }
                    else
                    {
                        /* Transition: '<S714>:536' */
                    }
                }
            }
            else
            {
                /* Transition: '<S714>:503' */
                /* Transition: '<S714>:505' */
                /* Transition: '<S714>:533' */
                /* Transition: '<S714>:545' */
                /* Transition: '<S714>:546' */
            }
        }

        /* End of Chart: '<S709>/Diagnostic Debounce' */
        /* Transition: '<S714>:547' */
    }

    /* End of Outputs for SubSystem: '<S701>/U0422_BCM_FD_10' */
}

#endif

/*
 * System initialize for atomic system:
 *    '<S719>/Diagnostic Debounce'
 *    '<S741>/Diagnostic Debounce'
 *    '<S763>/Diagnostic Debounce'
 */
#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_DiagnosticDebounce_l_Init(P2VAR
    (TeDFIB_e_FaultDebounceStatus, AUTOMATIC, CIDB_VAR_INIT) rty_Status)
{
    *rty_Status = CeDFIB_e_Init;
}

#endif

/*
 * Output and update for atomic system:
 *    '<S719>/Diagnostic Debounce'
 *    '<S741>/Diagnostic Debounce'
 *    '<S763>/Diagnostic Debounce'
 */
#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_DiagnosticDebounce_m2(VAR(boolean,
    AUTOMATIC) rtu_EnDiag, VAR(boolean, AUTOMATIC) rtu_Err, VAR(uint16,
    AUTOMATIC) rtu_FThr, VAR(uint8, AUTOMATIC) rtu_FInc, VAR(boolean, AUTOMATIC)
    rtu_Reset, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, CIDB_VAR_INIT)
    rty_Status)
{
    sint32 tmp;

    /* Chart: '<S719>/Diagnostic Debounce' */
    /* Gateway: DiagnosticDebounceimplausibleSignalSNA/Diagnostic Debounce */
    /* During: DiagnosticDebounceimplausibleSignalSNA/Diagnostic Debounce */
    /* Entry Internal: DiagnosticDebounceimplausibleSignalSNA/Diagnostic Debounce */
    /* Transition: '<S724>:499' */
    VeCIDB_b_BCM_FD_9_Fail = false;
    VeCIDB_b_BCM_FD_9_Pass = false;
    if (rtu_Reset)
    {
        /* Transition: '<S724>:500' */
        /* Transition: '<S724>:502' */
        *rty_Status = CeDFIB_e_Init;
        VeCIDB_Cnt_BCM_FD_9_Fail = 0U;
        VeCIDB_Cnt_BCM_FD_9_Init = 0U;

        /* Transition: '<S724>:505' */
        /* Transition: '<S724>:533' */
        /* Transition: '<S724>:545' */
        /* Transition: '<S724>:546' */
    }
    else
    {
        /* Transition: '<S724>:501' */
        if (rtu_EnDiag)
        {
            /* Transition: '<S724>:504' */
            if (((uint32)(*rty_Status)) == CeDFIB_e_Init)
            {
                /* Transition: '<S724>:507' */
                if (!rtu_Err)
                {
                    /* Transition: '<S724>:506' */
                    /* Transition: '<S724>:509' */
                    tmp = ((sint32)VeCIDB_Cnt_BCM_FD_9_Init) + ((sint32)rtu_FInc);
                    if (tmp > 65535)
                    {
                        tmp = 65535;
                    }

                    VeCIDB_Cnt_BCM_FD_9_Init = (uint16)tmp;
                    if (VeCIDB_Cnt_BCM_FD_9_Init >= rtu_FThr)
                    {
                        /* Transition: '<S724>:511' */
                        /* Transition: '<S724>:513' */
                        *rty_Status = CeDFIB_e_Pass;
                        VeCIDB_b_BCM_FD_9_Pass = true;

                        /* Transition: '<S724>:516' */
                    }
                    else
                    {
                        /* Transition: '<S724>:512' */
                    }

                    /* Transition: '<S724>:515' */
                }
                else
                {
                    /* Transition: '<S724>:508' */
                    VeCIDB_Cnt_BCM_FD_9_Init = 0U;
                }

                /* Transition: '<S724>:514' */
            }
            else
            {
                /* Transition: '<S724>:510' */
            }

            /* Transition: '<S724>:517' */
            if ((((((uint32)(*rty_Status)) == CeDFIB_e_Pass) || (((uint32)
                    (*rty_Status)) == CeDFIB_e_Pass_FaultRemoved)) || (((uint32)
                    (*rty_Status)) == CeDFIB_e_Pass_FaultFiltering)) ||
                    (((uint32)(*rty_Status)) == CeDFIB_e_Init))
            {
                /* Transition: '<S724>:518' */
                if (rtu_Err)
                {
                    /* Transition: '<S724>:519' */
                    /* Transition: '<S724>:522' */
                    tmp = ((sint32)VeCIDB_Cnt_BCM_FD_9_Fail) + ((sint32)rtu_FInc);
                    if (tmp > 65535)
                    {
                        tmp = 65535;
                    }

                    VeCIDB_Cnt_BCM_FD_9_Fail = (uint16)tmp;
                    if (VeCIDB_Cnt_BCM_FD_9_Fail > rtu_FThr)
                    {
                        /* Transition: '<S724>:524' */
                        /* Transition: '<S724>:528' */
                        *rty_Status = CeDFIB_e_Fail;
                        VeCIDB_b_BCM_FD_9_Fail = true;
                        VeCIDB_Cnt_BCM_FD_9_Fail = (uint16)((sint32)(((sint32)
                            rtu_FThr) + 1));
                    }
                    else
                    {
                        /* Transition: '<S724>:557' */
                        if (((uint32)(*rty_Status)) != CeDFIB_e_Init)
                        {
                            /* Transition: '<S724>:563' */
                            *rty_Status = CeDFIB_e_Pass_FaultFiltering;

                            /* Transition: '<S724>:564' */
                            /* Transition: '<S724>:562' */
                        }
                        else
                        {
                            /* Transition: '<S724>:559' */
                            /* Transition: '<S724>:561' */
                            /* Transition: '<S724>:562' */
                        }
                    }
                }
                else
                {
                    /* Transition: '<S724>:521' */
                    if (((sint32)VeCIDB_Cnt_BCM_FD_9_Fail) > 0)
                    {
                        /* Transition: '<S724>:523' */
                        /* Transition: '<S724>:567' */
                        tmp = ((sint32)VeCIDB_Cnt_BCM_FD_9_Fail) - 1;
                        if ((((sint32)VeCIDB_Cnt_BCM_FD_9_Fail) - 1) < 0)
                        {
                            tmp = 0;
                        }

                        VeCIDB_Cnt_BCM_FD_9_Fail = (uint16)tmp;
                        if (((uint32)(*rty_Status)) != CeDFIB_e_Init)
                        {
                            /* Transition: '<S724>:574' */
                            *rty_Status = CeDFIB_e_Pass_FaultRemoved;

                            /* Transition: '<S724>:569' */
                        }
                        else
                        {
                            /* Transition: '<S724>:572' */
                            /* Transition: '<S724>:573' */
                        }
                    }
                    else
                    {
                        /* Transition: '<S724>:577' */
                        if (((uint32)(*rty_Status)) != CeDFIB_e_Init)
                        {
                            /* Transition: '<S724>:582' */
                            *rty_Status = CeDFIB_e_Pass;

                            /* Transition: '<S724>:581' */
                        }
                        else
                        {
                            /* Transition: '<S724>:579' */
                            /* Transition: '<S724>:580' */
                        }

                        /* Transition: '<S724>:583' */
                        /* Transition: '<S724>:569' */
                    }

                    /* Transition: '<S724>:570' */
                    /* Transition: '<S724>:564' */
                    /* Transition: '<S724>:562' */
                }

                /* Transition: '<S724>:532' */
                /* Transition: '<S724>:533' */
                /* Transition: '<S724>:545' */
                /* Transition: '<S724>:546' */
            }
            else
            {
                /* Transition: '<S724>:520' */
                if ((((uint32)(*rty_Status)) == CeDFIB_e_Fail) || (((uint32)
                        (*rty_Status)) == CeDFIB_e_Fail_FaultRemoved))
                {
                    /* Transition: '<S724>:534' */
                    if (rtu_Err)
                    {
                        /* Transition: '<S724>:535' */
                        /* Transition: '<S724>:538' */
                        tmp = ((sint32)rtu_FThr) + 1;
                        if ((((sint32)rtu_FThr) + 1) > 65535)
                        {
                            tmp = 65535;
                        }

                        VeCIDB_Cnt_BCM_FD_9_Fail = (uint16)tmp;
                        *rty_Status = CeDFIB_e_Fail;
                    }
                    else
                    {
                        /* Transition: '<S724>:537' */
                        tmp = ((sint32)VeCIDB_Cnt_BCM_FD_9_Fail) - 1;
                        if ((((sint32)VeCIDB_Cnt_BCM_FD_9_Fail) - 1) < 0)
                        {
                            tmp = 0;
                        }

                        VeCIDB_Cnt_BCM_FD_9_Fail = (uint16)tmp;
                        if (((sint32)VeCIDB_Cnt_BCM_FD_9_Fail) <= 0)
                        {
                            /* Transition: '<S724>:539' */
                            /* Transition: '<S724>:541' */
                            *rty_Status = CeDFIB_e_Pass;
                            VeCIDB_b_BCM_FD_9_Pass = true;
                        }
                        else
                        {
                            /* Transition: '<S724>:540' */
                            *rty_Status = CeDFIB_e_Fail_FaultRemoved;

                            /* Transition: '<S724>:542' */
                        }

                        /* Transition: '<S724>:543' */
                    }

                    /* Transition: '<S724>:544' */
                    /* Transition: '<S724>:545' */
                    /* Transition: '<S724>:546' */
                }
                else
                {
                    /* Transition: '<S724>:536' */
                }
            }
        }
        else
        {
            /* Transition: '<S724>:503' */
            /* Transition: '<S724>:505' */
            /* Transition: '<S724>:533' */
            /* Transition: '<S724>:545' */
            /* Transition: '<S724>:546' */
        }
    }

    /* End of Chart: '<S719>/Diagnostic Debounce' */
    /* Transition: '<S724>:547' */
}

#endif

/* System initialize for atomic system: '<S698>/U0422_Bluen_250ms' */
#if Rte_SysCon_Variant_CIDB_U0422_BLUEN

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0422_Bluen_250ms_Init(void)
{
    /* Start for VariantMerge generated from: '<S698>/VeCIDB_b_BCM_FD_9_CalDiagEnbl' incorporates:
     *  Constant: '<S722>/Calib'
     */
    CIDB_ac_B.VeCIDB_b_BCM_FD_9_CalDiagEnbl = KeCIDB_b_BCM_FD_9_ePT_SNA_DiagEnbl;

    /* SystemInitialize for Enabled SubSystem: '<S701>/U0422_BCM_FD_10' */
    CIDB_ac_U0422_BCM_FD_10_Init(&CIDB_ac_B.Status_edc,
        &CIDB_ac_B.VariantMergeForOutportVeCIDB_b_BCM_FD_10);

    /* End of SystemInitialize for SubSystem: '<S701>/U0422_BCM_FD_10' */

    /* SystemInitialize for Chart: '<S719>/Diagnostic Debounce' */
    CIDB_ac_DiagnosticDebounce_l_Init(&CIDB_ac_B.Status_edcd);
}

#endif

/* Output and update for atomic system: '<S698>/U0422_Bluen_250ms' */
#if Rte_SysCon_Variant_CIDB_U0422_BLUEN

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0422_Bluen_250ms(void)
{
    boolean rtb_AND_l;
    boolean rtb_RelationalOperator3;

    /* Outputs for Enabled SubSystem: '<S701>/U0422_BCM_FD_10' */
    CIDB_ac_U0422_BCM_FD_10(CIDB_ac_B.NOT,
                            CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_U0422_Diag,
                            CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_RstDiagC_e,
                            CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_CmdIgnSts_,
                            &CIDB_ac_B.Status_edc,
                            &CIDB_ac_B.VariantMergeForOutportVeCIDB_b_BCM_FD_10,
                            &CIDB_ac_DW.U0422_BCM_FD_10,
                            &CIDB_ac_DW.StatusByte_InvData_BCM);

    /* End of Outputs for SubSystem: '<S701>/U0422_BCM_FD_10' */

    /* VariantMerge generated from: '<S698>/VeCIDB_b_BCM_FD_9_CalDiagEnbl' incorporates:
     *  Constant: '<S722>/Calib'
     */
    CIDB_ac_B.VeCIDB_b_BCM_FD_9_CalDiagEnbl = KeCIDB_b_BCM_FD_9_ePT_SNA_DiagEnbl;

    /* RelationalOperator: '<S719>/Relational Operator3' incorporates:
     *  Constant: '<S719>/Constant3'
     *  DataStoreRead: '<S717>/Data Store Read'
     *  S-Function (sfix_bitop): '<S719>/Bitwise Operator2'
     */
    rtb_RelationalOperator3 = ((((uint32)CIDB_ac_DW.StatusByte_InvData_BCM) &
        64U) == 0U);

    /* DataTypeConversion: '<S718>/Cast To Boolean' incorporates:
     *  Constant: '<S718>/Constant Value'
     *  S-Function (sfix_bitop): '<S718>/Bitwise Operator'
     */
    VeCIDB_b_BCM_FD_9_FaultCriteria = ((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_DoorLockLa) & 8U) != 0U);

    /* Outputs for Atomic SubSystem: '<S719>/EdgeFalling1' */
    /* Logic: '<S725>/AND' incorporates:
     *  Logic: '<S725>/OR1'
     *  UnitDelay: '<S725>/Unit Delay'
     */
    rtb_AND_l = ((!rtb_RelationalOperator3) && (CIDB_ac_DW.UnitDelay_DSTATE_d));

    /* Update for UnitDelay: '<S725>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_d = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S719>/EdgeFalling1' */

    /* Chart: '<S719>/Diagnostic Debounce' incorporates:
     *  Constant: '<S719>/Constant1'
     *  Constant: '<S720>/Calib'
     *  Constant: '<S721>/Calib'
     *  Constant: '<S723>/Calib'
     *  DataStoreRead: '<S717>/Data Store Read'
     *  Logic: '<S719>/Logical Operator'
     *  Logic: '<S719>/Logical Operator1'
     *  Logic: '<S719>/Logical10'
     *  Logic: '<S719>/Logical12'
     *  Logic: '<S719>/Logical5'
     *  RelationalOperator: '<S719>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S719>/Bitwise Operator3'
     */
    CIDB_ac_DiagnosticDebounce_m2(((CIDB_ac_B.VeCIDB_b_BCM_FD_9_CalDiagEnbl) &&
        (CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_U0422_Diag)) &&
        ((!KeCIDB_b_BCM_FD_9_ePT_SNA_FailLatchEnable) || (((((uint32)
        CIDB_ac_DW.StatusByte_InvData_BCM) & 1U) == 0U) ||
        (!rtb_RelationalOperator3))), VeCIDB_b_BCM_FD_9_FaultCriteria,
        KeCIDB_Cnt_BCM_FD_9_ePT_SNA_FailLmt, KeCIDB_Cnt_BCM_FD_9_ePT_SNAFailINC,
        rtb_AND_l || (CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_RstDiagC_e),
        &CIDB_ac_B.Status_edcd);
}

#endif

/* System initialize for atomic system: '<S698>/U0422_Corebev_250ms' */
#if Rte_SysCon_Variant_CIDB_U0422_Corebev

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0422_Corebev_250ms_Init(void)
{
    /* Start for Constant: '<S744>/Calib' */
    CIDB_ac_B.VeCIDB_b_BCM_FD_9_CalDiagEnbl = KeCIDB_b_BCM_FD_9_ePT_SNA_DiagEnbl;

    /* SystemInitialize for Enabled SubSystem: '<S702>/U0422_BCM_FD_10' */
    CIDB_ac_U0422_BCM_FD_10_Init(&CIDB_ac_B.Status_edc,
        &CIDB_ac_B.VariantMergeForOutportVeCIDB_b_BCM_FD_10);

    /* End of SystemInitialize for SubSystem: '<S702>/U0422_BCM_FD_10' */

    /* SystemInitialize for Chart: '<S741>/Diagnostic Debounce' */
    CIDB_ac_DiagnosticDebounce_l_Init(&CIDB_ac_B.Status_edcd);
}

#endif

/* Output and update for atomic system: '<S698>/U0422_Corebev_250ms' */
#if Rte_SysCon_Variant_CIDB_U0422_Corebev

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0422_Corebev_250ms(void)
{
    boolean rtb_AND_cf;
    boolean rtb_RelationalOperator3;

    /* Outputs for Enabled SubSystem: '<S702>/U0422_BCM_FD_10' */
    CIDB_ac_U0422_BCM_FD_10(CIDB_ac_B.NOT,
                            CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_U0422_Diag,
                            CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_RstDiagC_e,
                            CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_CmdIgnSts_,
                            &CIDB_ac_B.Status_edc,
                            &CIDB_ac_B.VariantMergeForOutportVeCIDB_b_BCM_FD_10,
                            &CIDB_ac_DW.U0422_BCM_FD_10_o,
                            &CIDB_ac_DW.StatusByte_InvData_BCM);

    /* End of Outputs for SubSystem: '<S702>/U0422_BCM_FD_10' */

    /* Constant: '<S744>/Calib' */
    CIDB_ac_B.VeCIDB_b_BCM_FD_9_CalDiagEnbl = KeCIDB_b_BCM_FD_9_ePT_SNA_DiagEnbl;

    /* RelationalOperator: '<S741>/Relational Operator3' incorporates:
     *  Constant: '<S741>/Constant3'
     *  DataStoreRead: '<S739>/Data Store Read'
     *  S-Function (sfix_bitop): '<S741>/Bitwise Operator2'
     */
    rtb_RelationalOperator3 = ((((uint32)CIDB_ac_DW.StatusByte_InvData_BCM) &
        64U) == 0U);

    /* DataTypeConversion: '<S740>/Cast To Boolean' incorporates:
     *  Constant: '<S740>/Constant Value'
     *  S-Function (sfix_bitop): '<S740>/Bitwise Operator'
     */
    VeCIDB_b_BCM_FD_9_FaultCriteria = ((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_DoorLockLa) & 8U) != 0U);

    /* Outputs for Atomic SubSystem: '<S741>/EdgeFalling1' */
    /* Logic: '<S747>/AND' incorporates:
     *  Logic: '<S747>/OR1'
     *  UnitDelay: '<S747>/Unit Delay'
     */
    rtb_AND_cf = ((!rtb_RelationalOperator3) && (CIDB_ac_DW.UnitDelay_DSTATE_nc));

    /* Update for UnitDelay: '<S747>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_nc = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S741>/EdgeFalling1' */

    /* Chart: '<S741>/Diagnostic Debounce' incorporates:
     *  Constant: '<S741>/Constant1'
     *  Constant: '<S742>/Calib'
     *  Constant: '<S743>/Calib'
     *  Constant: '<S745>/Calib'
     *  DataStoreRead: '<S739>/Data Store Read'
     *  Logic: '<S741>/Logical Operator'
     *  Logic: '<S741>/Logical Operator1'
     *  Logic: '<S741>/Logical10'
     *  Logic: '<S741>/Logical12'
     *  Logic: '<S741>/Logical5'
     *  RelationalOperator: '<S741>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S741>/Bitwise Operator3'
     */
    CIDB_ac_DiagnosticDebounce_m2(((CIDB_ac_B.VeCIDB_b_BCM_FD_9_CalDiagEnbl) &&
        (CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_U0422_Diag)) &&
        ((!KeCIDB_b_BCM_FD_9_ePT_SNA_FailLatchEnable) || (((((uint32)
        CIDB_ac_DW.StatusByte_InvData_BCM) & 1U) == 0U) ||
        (!rtb_RelationalOperator3))), VeCIDB_b_BCM_FD_9_FaultCriteria,
        KeCIDB_Cnt_BCM_FD_9_ePT_SNA_FailLmt, KeCIDB_Cnt_BCM_FD_9_ePT_SNAFailINC,
        rtb_AND_cf || (CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_RstDiagC_e),
        &CIDB_ac_B.Status_edcd);
}

#endif

/* System initialize for atomic system: '<S698>/U0422_Pegasus_250ms' */
#if Rte_SysCon_Variant_CIDB_U0422_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0422_Pegasus_250ms_Init(void)
{
    /* Start for Constant: '<S766>/Calib' */
    CIDB_ac_B.VeCIDB_b_BCM_FD_9_CalDiagEnbl = KeCIDB_b_BCM_FD_9_ePT_SNA_DiagEnbl;

    /* SystemInitialize for Enabled SubSystem: '<S703>/U0422_BCM_FD_10' */
    CIDB_ac_U0422_BCM_FD_10_Init(&CIDB_ac_B.Status_edc,
        &CIDB_ac_B.VariantMergeForOutportVeCIDB_b_BCM_FD_10);

    /* End of SystemInitialize for SubSystem: '<S703>/U0422_BCM_FD_10' */

    /* SystemInitialize for Chart: '<S763>/Diagnostic Debounce' */
    CIDB_ac_DiagnosticDebounce_l_Init(&CIDB_ac_B.Status_edcd);
}

#endif

/* Output and update for atomic system: '<S698>/U0422_Pegasus_250ms' */
#if Rte_SysCon_Variant_CIDB_U0422_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U0422_Pegasus_250ms(void)
{
    boolean rtb_AND_l;
    boolean rtb_RelationalOperator3;

    /* Outputs for Enabled SubSystem: '<S703>/U0422_BCM_FD_10' */
    CIDB_ac_U0422_BCM_FD_10(CIDB_ac_B.NOT,
                            CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_U0422_Diag,
                            CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_RstDiagC_e,
                            CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_CmdIgnSts_,
                            &CIDB_ac_B.Status_edc,
                            &CIDB_ac_B.VariantMergeForOutportVeCIDB_b_BCM_FD_10,
                            &CIDB_ac_DW.U0422_BCM_FD_10_m,
                            &CIDB_ac_DW.StatusByte_InvData_BCM);

    /* End of Outputs for SubSystem: '<S703>/U0422_BCM_FD_10' */

    /* Constant: '<S766>/Calib' */
    CIDB_ac_B.VeCIDB_b_BCM_FD_9_CalDiagEnbl = KeCIDB_b_BCM_FD_9_ePT_SNA_DiagEnbl;

    /* RelationalOperator: '<S763>/Relational Operator3' incorporates:
     *  Constant: '<S763>/Constant3'
     *  DataStoreRead: '<S761>/Data Store Read'
     *  S-Function (sfix_bitop): '<S763>/Bitwise Operator2'
     */
    rtb_RelationalOperator3 = ((((uint32)CIDB_ac_DW.StatusByte_InvData_BCM) &
        64U) == 0U);

    /* DataTypeConversion: '<S762>/Cast To Boolean' incorporates:
     *  Constant: '<S762>/Constant Value'
     *  S-Function (sfix_bitop): '<S762>/Bitwise Operator'
     */
    VeCIDB_b_BCM_FD_9_FaultCriteria = ((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_DoorLockLa) & 8U) != 0U);

    /* Outputs for Atomic SubSystem: '<S763>/EdgeFalling1' */
    /* Logic: '<S769>/AND' incorporates:
     *  Logic: '<S769>/OR1'
     *  UnitDelay: '<S769>/Unit Delay'
     */
    rtb_AND_l = ((!rtb_RelationalOperator3) && (CIDB_ac_DW.UnitDelay_DSTATE_h));

    /* Update for UnitDelay: '<S769>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_h = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S763>/EdgeFalling1' */

    /* Chart: '<S763>/Diagnostic Debounce' incorporates:
     *  Constant: '<S763>/Constant1'
     *  Constant: '<S764>/Calib'
     *  Constant: '<S765>/Calib'
     *  Constant: '<S767>/Calib'
     *  DataStoreRead: '<S761>/Data Store Read'
     *  Logic: '<S763>/Logical Operator'
     *  Logic: '<S763>/Logical Operator1'
     *  Logic: '<S763>/Logical10'
     *  Logic: '<S763>/Logical12'
     *  Logic: '<S763>/Logical5'
     *  RelationalOperator: '<S763>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S763>/Bitwise Operator3'
     */
    CIDB_ac_DiagnosticDebounce_m2(((CIDB_ac_B.VeCIDB_b_BCM_FD_9_CalDiagEnbl) &&
        (CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_U0422_Diag)) &&
        ((!KeCIDB_b_BCM_FD_9_ePT_SNA_FailLatchEnable) || (((((uint32)
        CIDB_ac_DW.StatusByte_InvData_BCM) & 1U) == 0U) ||
        (!rtb_RelationalOperator3))), VeCIDB_b_BCM_FD_9_FaultCriteria,
        KeCIDB_Cnt_BCM_FD_9_ePT_SNA_FailLmt, KeCIDB_Cnt_BCM_FD_9_ePT_SNAFailINC,
        rtb_AND_l || (CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_RstDiagC_e),
        &CIDB_ac_B.Status_edcd);
}

#endif

/*
 * System initialize for atomic system:
 *    '<S775>/Diagnostic Debounce'
 *    '<S785>/Diagnostic Debounce'
 */
#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_DiagnosticDebounce_hz_Init(P2VAR
    (TeDFIB_e_FaultDebounceStatus, AUTOMATIC, CIDB_VAR_INIT) rty_Status)
{
    *rty_Status = CeDFIB_e_Init;
}

#endif

/*
 * Output and update for atomic system:
 *    '<S775>/Diagnostic Debounce'
 *    '<S785>/Diagnostic Debounce'
 */
#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_DiagnosticDebounce_g(VAR(boolean,
    AUTOMATIC) rtu_EnDiag, VAR(boolean, AUTOMATIC) rtu_Err, VAR(uint16,
    AUTOMATIC) rtu_FThr, VAR(uint8, AUTOMATIC) rtu_FInc, VAR(boolean, AUTOMATIC)
    rtu_Reset, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, CIDB_VAR_INIT)
    rty_Status)
{
    sint32 tmp;

    /* Chart: '<S775>/Diagnostic Debounce' */
    /* Gateway: DiagnosticDebounceimplausibleSignalSNA/Diagnostic Debounce */
    /* During: DiagnosticDebounceimplausibleSignalSNA/Diagnostic Debounce */
    /* Entry Internal: DiagnosticDebounceimplausibleSignalSNA/Diagnostic Debounce */
    /* Transition: '<S780>:499' */
    VeCIDB_b_DUALCHARGER_THERMAL_Fail = false;
    VeCIDB_b_DUALCHARGER_THERMAL_Pass = false;
    if (rtu_Reset)
    {
        /* Transition: '<S780>:500' */
        /* Transition: '<S780>:502' */
        *rty_Status = CeDFIB_e_Init;
        VeCIDB_Cnt_DUALCHARGER_THERMAL_Fail = 0U;
        VeCIDB_Cnt_DUALCHARGER_THERMAL_Init = 0U;

        /* Transition: '<S780>:505' */
        /* Transition: '<S780>:533' */
        /* Transition: '<S780>:545' */
        /* Transition: '<S780>:546' */
    }
    else
    {
        /* Transition: '<S780>:501' */
        if (rtu_EnDiag)
        {
            /* Transition: '<S780>:504' */
            if (((uint32)(*rty_Status)) == CeDFIB_e_Init)
            {
                /* Transition: '<S780>:507' */
                if (!rtu_Err)
                {
                    /* Transition: '<S780>:506' */
                    /* Transition: '<S780>:509' */
                    tmp = ((sint32)VeCIDB_Cnt_DUALCHARGER_THERMAL_Init) +
                        ((sint32)rtu_FInc);
                    if (tmp > 65535)
                    {
                        tmp = 65535;
                    }

                    VeCIDB_Cnt_DUALCHARGER_THERMAL_Init = (uint16)tmp;
                    if (VeCIDB_Cnt_DUALCHARGER_THERMAL_Init >= rtu_FThr)
                    {
                        /* Transition: '<S780>:511' */
                        /* Transition: '<S780>:513' */
                        *rty_Status = CeDFIB_e_Pass;
                        VeCIDB_b_DUALCHARGER_THERMAL_Pass = true;

                        /* Transition: '<S780>:516' */
                    }
                    else
                    {
                        /* Transition: '<S780>:512' */
                    }

                    /* Transition: '<S780>:515' */
                }
                else
                {
                    /* Transition: '<S780>:508' */
                    VeCIDB_Cnt_DUALCHARGER_THERMAL_Init = 0U;
                }

                /* Transition: '<S780>:514' */
            }
            else
            {
                /* Transition: '<S780>:510' */
            }

            /* Transition: '<S780>:517' */
            if ((((((uint32)(*rty_Status)) == CeDFIB_e_Pass) || (((uint32)
                    (*rty_Status)) == CeDFIB_e_Pass_FaultRemoved)) || (((uint32)
                    (*rty_Status)) == CeDFIB_e_Pass_FaultFiltering)) ||
                    (((uint32)(*rty_Status)) == CeDFIB_e_Init))
            {
                /* Transition: '<S780>:518' */
                if (rtu_Err)
                {
                    /* Transition: '<S780>:519' */
                    /* Transition: '<S780>:522' */
                    tmp = ((sint32)VeCIDB_Cnt_DUALCHARGER_THERMAL_Fail) +
                        ((sint32)rtu_FInc);
                    if (tmp > 65535)
                    {
                        tmp = 65535;
                    }

                    VeCIDB_Cnt_DUALCHARGER_THERMAL_Fail = (uint16)tmp;
                    if (VeCIDB_Cnt_DUALCHARGER_THERMAL_Fail > rtu_FThr)
                    {
                        /* Transition: '<S780>:524' */
                        /* Transition: '<S780>:528' */
                        *rty_Status = CeDFIB_e_Fail;
                        VeCIDB_b_DUALCHARGER_THERMAL_Fail = true;
                        VeCIDB_Cnt_DUALCHARGER_THERMAL_Fail = (uint16)((sint32)
                            (((sint32)rtu_FThr) + 1));
                    }
                    else
                    {
                        /* Transition: '<S780>:557' */
                        if (((uint32)(*rty_Status)) != CeDFIB_e_Init)
                        {
                            /* Transition: '<S780>:563' */
                            *rty_Status = CeDFIB_e_Pass_FaultFiltering;

                            /* Transition: '<S780>:564' */
                            /* Transition: '<S780>:562' */
                        }
                        else
                        {
                            /* Transition: '<S780>:559' */
                            /* Transition: '<S780>:561' */
                            /* Transition: '<S780>:562' */
                        }
                    }
                }
                else
                {
                    /* Transition: '<S780>:521' */
                    if (((sint32)VeCIDB_Cnt_DUALCHARGER_THERMAL_Fail) > 0)
                    {
                        /* Transition: '<S780>:523' */
                        /* Transition: '<S780>:567' */
                        tmp = ((sint32)VeCIDB_Cnt_DUALCHARGER_THERMAL_Fail) - 1;
                        if ((((sint32)VeCIDB_Cnt_DUALCHARGER_THERMAL_Fail) - 1) <
                            0)
                        {
                            tmp = 0;
                        }

                        VeCIDB_Cnt_DUALCHARGER_THERMAL_Fail = (uint16)tmp;
                        if (((uint32)(*rty_Status)) != CeDFIB_e_Init)
                        {
                            /* Transition: '<S780>:574' */
                            *rty_Status = CeDFIB_e_Pass_FaultRemoved;

                            /* Transition: '<S780>:569' */
                        }
                        else
                        {
                            /* Transition: '<S780>:572' */
                            /* Transition: '<S780>:573' */
                        }
                    }
                    else
                    {
                        /* Transition: '<S780>:577' */
                        if (((uint32)(*rty_Status)) != CeDFIB_e_Init)
                        {
                            /* Transition: '<S780>:582' */
                            *rty_Status = CeDFIB_e_Pass;

                            /* Transition: '<S780>:581' */
                        }
                        else
                        {
                            /* Transition: '<S780>:579' */
                            /* Transition: '<S780>:580' */
                        }

                        /* Transition: '<S780>:583' */
                        /* Transition: '<S780>:569' */
                    }

                    /* Transition: '<S780>:570' */
                    /* Transition: '<S780>:564' */
                    /* Transition: '<S780>:562' */
                }

                /* Transition: '<S780>:532' */
                /* Transition: '<S780>:533' */
                /* Transition: '<S780>:545' */
                /* Transition: '<S780>:546' */
            }
            else
            {
                /* Transition: '<S780>:520' */
                if ((((uint32)(*rty_Status)) == CeDFIB_e_Fail) || (((uint32)
                        (*rty_Status)) == CeDFIB_e_Fail_FaultRemoved))
                {
                    /* Transition: '<S780>:534' */
                    if (rtu_Err)
                    {
                        /* Transition: '<S780>:535' */
                        /* Transition: '<S780>:538' */
                        tmp = ((sint32)rtu_FThr) + 1;
                        if ((((sint32)rtu_FThr) + 1) > 65535)
                        {
                            tmp = 65535;
                        }

                        VeCIDB_Cnt_DUALCHARGER_THERMAL_Fail = (uint16)tmp;
                        *rty_Status = CeDFIB_e_Fail;
                    }
                    else
                    {
                        /* Transition: '<S780>:537' */
                        tmp = ((sint32)VeCIDB_Cnt_DUALCHARGER_THERMAL_Fail) - 1;
                        if ((((sint32)VeCIDB_Cnt_DUALCHARGER_THERMAL_Fail) - 1) <
                            0)
                        {
                            tmp = 0;
                        }

                        VeCIDB_Cnt_DUALCHARGER_THERMAL_Fail = (uint16)tmp;
                        if (((sint32)VeCIDB_Cnt_DUALCHARGER_THERMAL_Fail) <= 0)
                        {
                            /* Transition: '<S780>:539' */
                            /* Transition: '<S780>:541' */
                            *rty_Status = CeDFIB_e_Pass;
                            VeCIDB_b_DUALCHARGER_THERMAL_Pass = true;
                        }
                        else
                        {
                            /* Transition: '<S780>:540' */
                            *rty_Status = CeDFIB_e_Fail_FaultRemoved;

                            /* Transition: '<S780>:542' */
                        }

                        /* Transition: '<S780>:543' */
                    }

                    /* Transition: '<S780>:544' */
                    /* Transition: '<S780>:545' */
                    /* Transition: '<S780>:546' */
                }
                else
                {
                    /* Transition: '<S780>:536' */
                }
            }
        }
        else
        {
            /* Transition: '<S780>:503' */
            /* Transition: '<S780>:505' */
            /* Transition: '<S780>:533' */
            /* Transition: '<S780>:545' */
            /* Transition: '<S780>:546' */
        }
    }

    /* End of Chart: '<S775>/Diagnostic Debounce' */
    /* Transition: '<S780>:547' */
}

#endif

/* System initialize for atomic system: '<S699>/U049C_Corebev_250ms' */
#if Rte_SysCon_Variant_CIDB_U049C_Corebev

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U049C_Corebev_250ms_Init(void)
{
    /* Start for VariantMerge generated from: '<S699>/VeCIDB_b_DUALCHARGER_THERMAL_CalDiagEnbl' incorporates:
     *  Constant: '<S778>/Calib'
     */
    CIDB_ac_B.VariantMergeForOutportVeCIDB_b_DUALCHARG =
        KeCIDB_b_DUALCHARGER_THERMAL_ePT_SNA_DiagEnbl;

    /* SystemInitialize for Chart: '<S775>/Diagnostic Debounce' */
    CIDB_ac_DiagnosticDebounce_hz_Init(&CIDB_ac_B.Status_ed);
}

#endif

/* Output and update for atomic system: '<S699>/U049C_Corebev_250ms' */
#if Rte_SysCon_Variant_CIDB_U049C_Corebev

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U049C_Corebev_250ms(void)
{
    boolean rtb_AND_h;
    boolean rtb_RelationalOperator3;

    /* VariantMerge generated from: '<S699>/VeCIDB_b_DUALCHARGER_THERMAL_CalDiagEnbl' incorporates:
     *  Constant: '<S778>/Calib'
     */
    CIDB_ac_B.VariantMergeForOutportVeCIDB_b_DUALCHARG =
        KeCIDB_b_DUALCHARGER_THERMAL_ePT_SNA_DiagEnbl;

    /* RelationalOperator: '<S775>/Relational Operator3' incorporates:
     *  Constant: '<S775>/Constant3'
     *  DataStoreRead: '<S773>/Data Store Read'
     *  S-Function (sfix_bitop): '<S775>/Bitwise Operator2'
     */
    rtb_RelationalOperator3 = ((((uint32)CIDB_ac_DW.StatusByte_InvData_OBCM) &
        64U) == 0U);

    /* Logic: '<S774>/Logical1' incorporates:
     *  Constant: '<S774>/Constant Value1'
     *  DataTypeConversion: '<S774>/Cast To Boolean'
     *  DataTypeConversion: '<S774>/Cast To Boolean1'
     *  DataTypeConversion: '<S774>/Cast To Boolean2'
     *  DataTypeConversion: '<S774>/Cast To Boolean3'
     *  S-Function (sfix_bitop): '<S774>/Bitwise Operator'
     *  S-Function (sfix_bitop): '<S774>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S774>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S774>/Bitwise Operator3'
     */
    VeCIDB_b_DUALCHARGER_THERMAL_FaultCriteria = (((((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_OBC_Temp1_) & 8U) != 0U) ||
        ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_OBC_Temp2_) & 8U) !=
         0U)) || ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_OBC_Temp3_)
                   & 8U) != 0U)) || ((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_OBC_Temp4_) & 8U) != 0U));

    /* Outputs for Atomic SubSystem: '<S775>/EdgeFalling1' */
    /* Logic: '<S781>/AND' incorporates:
     *  Logic: '<S781>/OR1'
     *  UnitDelay: '<S781>/Unit Delay'
     */
    rtb_AND_h = ((!rtb_RelationalOperator3) && (CIDB_ac_DW.UnitDelay_DSTATE_nx));

    /* Update for UnitDelay: '<S781>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_nx = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S775>/EdgeFalling1' */

    /* Chart: '<S775>/Diagnostic Debounce' incorporates:
     *  Constant: '<S775>/Constant1'
     *  Constant: '<S776>/Calib'
     *  Constant: '<S777>/Calib'
     *  Constant: '<S779>/Calib'
     *  DataStoreRead: '<S773>/Data Store Read'
     *  Logic: '<S775>/Logical Operator'
     *  Logic: '<S775>/Logical Operator1'
     *  Logic: '<S775>/Logical10'
     *  Logic: '<S775>/Logical12'
     *  Logic: '<S775>/Logical5'
     *  RelationalOperator: '<S775>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S775>/Bitwise Operator3'
     */
    CIDB_ac_DiagnosticDebounce_g
        (((CIDB_ac_B.VariantMergeForOutportVeCIDB_b_DUALCHARG) &&
          (CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_U049C_Diag)) &&
         ((!KeCIDB_b_DUALCHARGER_THERMAL_ePT_SNA_FailLatchEnable) || (((((uint32)
              CIDB_ac_DW.StatusByte_InvData_OBCM) & 1U) == 0U) ||
           (!rtb_RelationalOperator3))),
         VeCIDB_b_DUALCHARGER_THERMAL_FaultCriteria,
         KeCIDB_Cnt_DUALCHARGER_THERMAL_ePT_SNA_FailLmt,
         KeCIDB_Cnt_DUALCHARGER_THERMAL_ePT_SNAFailINC, rtb_AND_h ||
         (CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_RstDiagC_e),
         &CIDB_ac_B.Status_ed);
}

#endif

/* System initialize for atomic system: '<S699>/U049C_Pegasus_250ms' */
#if Rte_SysCon_Variant_CIDB_U049C_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U049C_Pegasus_250ms_Init(void)
{
    /* Start for Constant: '<S788>/Calib' */
    CIDB_ac_B.VariantMergeForOutportVeCIDB_b_DUALCHARG =
        KeCIDB_b_DUALCHARGER_THERMAL_ePT_SNA_DiagEnbl;

    /* SystemInitialize for Chart: '<S785>/Diagnostic Debounce' */
    CIDB_ac_DiagnosticDebounce_hz_Init(&CIDB_ac_B.Status_ed);
}

#endif

/* Output and update for atomic system: '<S699>/U049C_Pegasus_250ms' */
#if Rte_SysCon_Variant_CIDB_U049C_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U049C_Pegasus_250ms(void)
{
    boolean rtb_AND_l;
    boolean rtb_RelationalOperator3;

    /* Constant: '<S788>/Calib' */
    CIDB_ac_B.VariantMergeForOutportVeCIDB_b_DUALCHARG =
        KeCIDB_b_DUALCHARGER_THERMAL_ePT_SNA_DiagEnbl;

    /* RelationalOperator: '<S785>/Relational Operator3' incorporates:
     *  Constant: '<S785>/Constant3'
     *  DataStoreRead: '<S783>/Data Store Read'
     *  S-Function (sfix_bitop): '<S785>/Bitwise Operator2'
     */
    rtb_RelationalOperator3 = ((((uint32)CIDB_ac_DW.StatusByte_InvData_OBCM) &
        64U) == 0U);

    /* Logic: '<S784>/Logical1' incorporates:
     *  Constant: '<S784>/Constant Value1'
     *  DataTypeConversion: '<S784>/Cast To Boolean'
     *  DataTypeConversion: '<S784>/Cast To Boolean1'
     *  DataTypeConversion: '<S784>/Cast To Boolean2'
     *  DataTypeConversion: '<S784>/Cast To Boolean3'
     *  S-Function (sfix_bitop): '<S784>/Bitwise Operator'
     *  S-Function (sfix_bitop): '<S784>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S784>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S784>/Bitwise Operator3'
     */
    VeCIDB_b_DUALCHARGER_THERMAL_FaultCriteria = (((((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_OBC_Temp1_) & 8U) != 0U) ||
        ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_OBC_Temp2_) & 8U) !=
         0U)) || ((((uint32)CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_OBC_Temp3_)
                   & 8U) != 0U)) || ((((uint32)
        CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_OBC_Temp4_) & 8U) != 0U));

    /* Outputs for Atomic SubSystem: '<S785>/EdgeFalling1' */
    /* Logic: '<S791>/AND' incorporates:
     *  Logic: '<S791>/OR1'
     *  UnitDelay: '<S791>/Unit Delay'
     */
    rtb_AND_l = ((!rtb_RelationalOperator3) && (CIDB_ac_DW.UnitDelay_DSTATE_n));

    /* Update for UnitDelay: '<S791>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_n = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S785>/EdgeFalling1' */

    /* Chart: '<S785>/Diagnostic Debounce' incorporates:
     *  Constant: '<S785>/Constant1'
     *  Constant: '<S786>/Calib'
     *  Constant: '<S787>/Calib'
     *  Constant: '<S789>/Calib'
     *  DataStoreRead: '<S783>/Data Store Read'
     *  Logic: '<S785>/Logical Operator'
     *  Logic: '<S785>/Logical Operator1'
     *  Logic: '<S785>/Logical10'
     *  Logic: '<S785>/Logical12'
     *  Logic: '<S785>/Logical5'
     *  RelationalOperator: '<S785>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S785>/Bitwise Operator3'
     */
    CIDB_ac_DiagnosticDebounce_g
        (((CIDB_ac_B.VariantMergeForOutportVeCIDB_b_DUALCHARG) &&
          (CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_U049C_Diag)) &&
         ((!KeCIDB_b_DUALCHARGER_THERMAL_ePT_SNA_FailLatchEnable) || (((((uint32)
              CIDB_ac_DW.StatusByte_InvData_OBCM) & 1U) == 0U) ||
           (!rtb_RelationalOperator3))),
         VeCIDB_b_DUALCHARGER_THERMAL_FaultCriteria,
         KeCIDB_Cnt_DUALCHARGER_THERMAL_ePT_SNA_FailLmt,
         KeCIDB_Cnt_DUALCHARGER_THERMAL_ePT_SNAFailINC, rtb_AND_l ||
         (CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_RstDiagC_e),
         &CIDB_ac_B.Status_ed);
}

#endif

/*
 * System initialize for enable system:
 *    '<S792>/HV_CHARGER_2'
 *    '<S793>/HV_CHARGER_2'
 */
#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_HV_CHARGER_2_Init(P2VAR
    (TeDFIB_e_FaultDebounceStatus, AUTOMATIC, CIDB_VAR_INIT)
    rty_VeCIDB_e_HV_CHARGER2_ErrState, P2VAR(boolean, AUTOMATIC, CIDB_VAR_INIT)
    rty_VeCIDB_b_HV_CHARGER2_CalDiagEnbl)
{
    /* SystemInitialize for SignalConversion generated from: '<S794>/VeCIDB_b_HV_CHARGER2_CalDiagEnbl' incorporates:
     *  Constant: '<S801>/Calib'
     */
    *rty_VeCIDB_b_HV_CHARGER2_CalDiagEnbl =
        KeCIDB_b_HV_CHARGER2_ePT_SNA_DiagEnbl;

    /* SystemInitialize for Chart: '<S798>/Diagnostic Debounce' */
    *rty_VeCIDB_e_HV_CHARGER2_ErrState = CeDFIB_e_Init;
}

#endif

/*
 * Output and update for enable system:
 *    '<S792>/HV_CHARGER_2'
 *    '<S793>/HV_CHARGER_2'
 */
#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_HV_CHARGER_2(VAR(boolean, AUTOMATIC)
    rtu_Enable, VAR(boolean, AUTOMATIC) rtu_VeCIDB_b_U049C_DiagEnbl, VAR(boolean,
    AUTOMATIC) rtu_VeCIDB_b_RstDiagCntr, VAR(uint8, AUTOMATIC)
    rtu_VeCRDB_y_ChrgFailSts_SigSts, P2VAR(TeDFIB_e_FaultDebounceStatus,
    AUTOMATIC, CIDB_VAR_INIT) rty_VeCIDB_e_HV_CHARGER2_ErrState, P2VAR(boolean,
    AUTOMATIC, CIDB_VAR_INIT) rty_VeCIDB_b_HV_CHARGER2_CalDiagEnbl, P2VAR
    (DW_HV_CHARGER_2_CIDB_ac_T, AUTOMATIC, CIDB_VAR_INIT) localDW, P2VAR(uint8,
    AUTOMATIC, CIDB_VAR_INIT) rtd_StatusByte_InvData_OBCM)
{
    sint32 tmp;
    boolean rtb_AND_e4;
    boolean rtb_RelationalOperator3_jx;

    /* Outputs for Enabled SubSystem: '<S792>/HV_CHARGER_2' incorporates:
     *  EnablePort: '<S794>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S794>/VeCIDB_b_HV_CHARGER2_CalDiagEnbl' incorporates:
         *  Constant: '<S801>/Calib'
         */
        *rty_VeCIDB_b_HV_CHARGER2_CalDiagEnbl =
            KeCIDB_b_HV_CHARGER2_ePT_SNA_DiagEnbl;

        /* RelationalOperator: '<S798>/Relational Operator3' incorporates:
         *  Constant: '<S798>/Constant3'
         *  S-Function (sfix_bitop): '<S798>/Bitwise Operator2'
         */
        rtb_RelationalOperator3_jx = ((((uint32)(*rtd_StatusByte_InvData_OBCM))
            & 64U) == 0U);

        /* DataTypeConversion: '<S797>/Cast To Boolean' incorporates:
         *  Constant: '<S797>/Constant Value1'
         *  S-Function (sfix_bitop): '<S797>/Bitwise Operator'
         */
        VeCIDB_b_HV_CHARGER2_FaultCriteria = ((((uint32)
            rtu_VeCRDB_y_ChrgFailSts_SigSts) & 8U) != 0U);

        /* Outputs for Atomic SubSystem: '<S798>/EdgeFalling1' */
        /* Logic: '<S804>/AND' incorporates:
         *  Logic: '<S804>/OR1'
         *  UnitDelay: '<S804>/Unit Delay'
         */
        rtb_AND_e4 = ((!rtb_RelationalOperator3_jx) &&
                      (localDW->UnitDelay_DSTATE));

        /* Update for UnitDelay: '<S804>/Unit Delay' */
        localDW->UnitDelay_DSTATE = rtb_RelationalOperator3_jx;

        /* End of Outputs for SubSystem: '<S798>/EdgeFalling1' */

        /* Chart: '<S798>/Diagnostic Debounce' incorporates:
         *  Constant: '<S798>/Constant1'
         *  Constant: '<S799>/Calib'
         *  Constant: '<S800>/Calib'
         *  Constant: '<S801>/Calib'
         *  Constant: '<S802>/Calib'
         *  Logic: '<S798>/Logical Operator'
         *  Logic: '<S798>/Logical Operator1'
         *  Logic: '<S798>/Logical10'
         *  Logic: '<S798>/Logical12'
         *  Logic: '<S798>/Logical5'
         *  RelationalOperator: '<S798>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S798>/Bitwise Operator3'
         */
        /* Gateway: DiagnosticDebounceimplausibleSignalSNA/Diagnostic Debounce */
        /* During: DiagnosticDebounceimplausibleSignalSNA/Diagnostic Debounce */
        /* Entry Internal: DiagnosticDebounceimplausibleSignalSNA/Diagnostic Debounce */
        /* Transition: '<S803>:499' */
        VeCIDB_b_HV_CHARGER2_Fail = false;
        VeCIDB_b_HV_CHARGER2_Pass = false;
        if (rtb_AND_e4 || rtu_VeCIDB_b_RstDiagCntr)
        {
            /* Transition: '<S803>:500' */
            /* Transition: '<S803>:502' */
            *rty_VeCIDB_e_HV_CHARGER2_ErrState = CeDFIB_e_Init;
            VeCIDB_Cnt_HV_CHARGER2_Fail = 0U;
            VeCIDB_Cnt_HV_CHARGER2_Init = 0U;

            /* Transition: '<S803>:505' */
            /* Transition: '<S803>:533' */
            /* Transition: '<S803>:545' */
            /* Transition: '<S803>:546' */
        }
        else
        {
            /* Transition: '<S803>:501' */
            if (((KeCIDB_b_HV_CHARGER2_ePT_SNA_DiagEnbl) &&
                    rtu_VeCIDB_b_U049C_DiagEnbl) &&
                    ((!KeCIDB_b_HV_CHARGER2_ePT_SNA_FailLatchEnable) ||
                     (((((uint32)(*rtd_StatusByte_InvData_OBCM)) & 1U) == 0U) ||
                      (!rtb_RelationalOperator3_jx))))
            {
                /* Transition: '<S803>:504' */
                if (((uint32)(*rty_VeCIDB_e_HV_CHARGER2_ErrState)) ==
                        CeDFIB_e_Init)
                {
                    /* Transition: '<S803>:507' */
                    if (!VeCIDB_b_HV_CHARGER2_FaultCriteria)
                    {
                        /* Transition: '<S803>:506' */
                        /* Transition: '<S803>:509' */
                        tmp = ((sint32)VeCIDB_Cnt_HV_CHARGER2_Init) + ((sint32)
                            KeCIDB_Cnt_HV_CHARGER2_ePT_SNAFailINC);
                        if (tmp > 65535)
                        {
                            tmp = 65535;
                        }

                        VeCIDB_Cnt_HV_CHARGER2_Init = (uint16)tmp;
                        if (VeCIDB_Cnt_HV_CHARGER2_Init >=
                                KeCIDB_Cnt_HV_CHARGER2_ePT_SNA_FailLmt)
                        {
                            /* Transition: '<S803>:511' */
                            /* Transition: '<S803>:513' */
                            *rty_VeCIDB_e_HV_CHARGER2_ErrState = CeDFIB_e_Pass;
                            VeCIDB_b_HV_CHARGER2_Pass = true;

                            /* Transition: '<S803>:516' */
                        }
                        else
                        {
                            /* Transition: '<S803>:512' */
                        }

                        /* Transition: '<S803>:515' */
                    }
                    else
                    {
                        /* Transition: '<S803>:508' */
                        VeCIDB_Cnt_HV_CHARGER2_Init = 0U;
                    }

                    /* Transition: '<S803>:514' */
                }
                else
                {
                    /* Transition: '<S803>:510' */
                }

                /* Transition: '<S803>:517' */
                if ((((((uint32)(*rty_VeCIDB_e_HV_CHARGER2_ErrState)) ==
                        CeDFIB_e_Pass) || (((uint32)
                                            (*rty_VeCIDB_e_HV_CHARGER2_ErrState))
                       == CeDFIB_e_Pass_FaultRemoved)) || (((uint32)
                        (*rty_VeCIDB_e_HV_CHARGER2_ErrState)) ==
                        CeDFIB_e_Pass_FaultFiltering)) || (((uint32)
                        (*rty_VeCIDB_e_HV_CHARGER2_ErrState)) == CeDFIB_e_Init))
                {
                    /* Transition: '<S803>:518' */
                    if (VeCIDB_b_HV_CHARGER2_FaultCriteria)
                    {
                        /* Transition: '<S803>:519' */
                        /* Transition: '<S803>:522' */
                        tmp = ((sint32)VeCIDB_Cnt_HV_CHARGER2_Fail) + ((sint32)
                            KeCIDB_Cnt_HV_CHARGER2_ePT_SNAFailINC);
                        if (tmp > 65535)
                        {
                            tmp = 65535;
                        }

                        VeCIDB_Cnt_HV_CHARGER2_Fail = (uint16)tmp;
                        if (VeCIDB_Cnt_HV_CHARGER2_Fail >
                                KeCIDB_Cnt_HV_CHARGER2_ePT_SNA_FailLmt)
                        {
                            /* Transition: '<S803>:524' */
                            /* Transition: '<S803>:528' */
                            *rty_VeCIDB_e_HV_CHARGER2_ErrState = CeDFIB_e_Fail;
                            VeCIDB_b_HV_CHARGER2_Fail = true;
                            tmp = ((sint32)
                                   KeCIDB_Cnt_HV_CHARGER2_ePT_SNA_FailLmt) + 1;
                            if ((((sint32)KeCIDB_Cnt_HV_CHARGER2_ePT_SNA_FailLmt)
                                 + 1) > 65535)
                            {
                                tmp = 65535;
                            }

                            VeCIDB_Cnt_HV_CHARGER2_Fail = (uint16)tmp;
                        }
                        else
                        {
                            /* Transition: '<S803>:557' */
                            if (((uint32)(*rty_VeCIDB_e_HV_CHARGER2_ErrState))
                                    != CeDFIB_e_Init)
                            {
                                /* Transition: '<S803>:563' */
                                *rty_VeCIDB_e_HV_CHARGER2_ErrState =
                                    CeDFIB_e_Pass_FaultFiltering;

                                /* Transition: '<S803>:564' */
                                /* Transition: '<S803>:562' */
                            }
                            else
                            {
                                /* Transition: '<S803>:559' */
                                /* Transition: '<S803>:561' */
                                /* Transition: '<S803>:562' */
                            }
                        }
                    }
                    else
                    {
                        /* Transition: '<S803>:521' */
                        if (((sint32)VeCIDB_Cnt_HV_CHARGER2_Fail) > 0)
                        {
                            /* Transition: '<S803>:523' */
                            /* Transition: '<S803>:567' */
                            tmp = ((sint32)VeCIDB_Cnt_HV_CHARGER2_Fail) - 1;
                            if ((((sint32)VeCIDB_Cnt_HV_CHARGER2_Fail) - 1) < 0)
                            {
                                tmp = 0;
                            }

                            VeCIDB_Cnt_HV_CHARGER2_Fail = (uint16)tmp;
                            if (((uint32)(*rty_VeCIDB_e_HV_CHARGER2_ErrState))
                                    != CeDFIB_e_Init)
                            {
                                /* Transition: '<S803>:574' */
                                *rty_VeCIDB_e_HV_CHARGER2_ErrState =
                                    CeDFIB_e_Pass_FaultRemoved;

                                /* Transition: '<S803>:569' */
                            }
                            else
                            {
                                /* Transition: '<S803>:572' */
                                /* Transition: '<S803>:573' */
                            }
                        }
                        else
                        {
                            /* Transition: '<S803>:577' */
                            if (((uint32)(*rty_VeCIDB_e_HV_CHARGER2_ErrState))
                                    != CeDFIB_e_Init)
                            {
                                /* Transition: '<S803>:582' */
                                *rty_VeCIDB_e_HV_CHARGER2_ErrState =
                                    CeDFIB_e_Pass;

                                /* Transition: '<S803>:581' */
                            }
                            else
                            {
                                /* Transition: '<S803>:579' */
                                /* Transition: '<S803>:580' */
                            }

                            /* Transition: '<S803>:583' */
                            /* Transition: '<S803>:569' */
                        }

                        /* Transition: '<S803>:570' */
                        /* Transition: '<S803>:564' */
                        /* Transition: '<S803>:562' */
                    }

                    /* Transition: '<S803>:532' */
                    /* Transition: '<S803>:533' */
                    /* Transition: '<S803>:545' */
                    /* Transition: '<S803>:546' */
                }
                else
                {
                    /* Transition: '<S803>:520' */
                    if ((((uint32)(*rty_VeCIDB_e_HV_CHARGER2_ErrState)) ==
                            CeDFIB_e_Fail) || (((uint32)
                                                (*rty_VeCIDB_e_HV_CHARGER2_ErrState))
                         == CeDFIB_e_Fail_FaultRemoved))
                    {
                        /* Transition: '<S803>:534' */
                        if (VeCIDB_b_HV_CHARGER2_FaultCriteria)
                        {
                            /* Transition: '<S803>:535' */
                            /* Transition: '<S803>:538' */
                            tmp = ((sint32)
                                   KeCIDB_Cnt_HV_CHARGER2_ePT_SNA_FailLmt) + 1;
                            if ((((sint32)KeCIDB_Cnt_HV_CHARGER2_ePT_SNA_FailLmt)
                                 + 1) > 65535)
                            {
                                tmp = 65535;
                            }

                            VeCIDB_Cnt_HV_CHARGER2_Fail = (uint16)tmp;
                            *rty_VeCIDB_e_HV_CHARGER2_ErrState = CeDFIB_e_Fail;
                        }
                        else
                        {
                            /* Transition: '<S803>:537' */
                            tmp = ((sint32)VeCIDB_Cnt_HV_CHARGER2_Fail) - 1;
                            if ((((sint32)VeCIDB_Cnt_HV_CHARGER2_Fail) - 1) < 0)
                            {
                                tmp = 0;
                            }

                            VeCIDB_Cnt_HV_CHARGER2_Fail = (uint16)tmp;
                            if (((sint32)VeCIDB_Cnt_HV_CHARGER2_Fail) <= 0)
                            {
                                /* Transition: '<S803>:539' */
                                /* Transition: '<S803>:541' */
                                *rty_VeCIDB_e_HV_CHARGER2_ErrState =
                                    CeDFIB_e_Pass;
                                VeCIDB_b_HV_CHARGER2_Pass = true;
                            }
                            else
                            {
                                /* Transition: '<S803>:540' */
                                *rty_VeCIDB_e_HV_CHARGER2_ErrState =
                                    CeDFIB_e_Fail_FaultRemoved;

                                /* Transition: '<S803>:542' */
                            }

                            /* Transition: '<S803>:543' */
                        }

                        /* Transition: '<S803>:544' */
                        /* Transition: '<S803>:545' */
                        /* Transition: '<S803>:546' */
                    }
                    else
                    {
                        /* Transition: '<S803>:536' */
                    }
                }
            }
            else
            {
                /* Transition: '<S803>:503' */
                /* Transition: '<S803>:505' */
                /* Transition: '<S803>:533' */
                /* Transition: '<S803>:545' */
                /* Transition: '<S803>:546' */
            }
        }

        /* End of Chart: '<S798>/Diagnostic Debounce' */
        /* Transition: '<S803>:547' */
    }

    /* End of Outputs for SubSystem: '<S792>/HV_CHARGER_2' */
}

#endif

/* System initialize for atomic system: '<S700>/U049C_Variant_Corebev_500ms' */
#if Rte_SysCon_Variant_CIDB_U049C_Corebev

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U049C_Variant_Corebev_500ms_Init(void)
{
    /* SystemInitialize for Enabled SubSystem: '<S792>/HV_CHARGER_2' */
    CIDB_ac_HV_CHARGER_2_Init(&CIDB_ac_B.Status_e,
        &CIDB_ac_B.VariantMergeForOutportVeCIDB_b_HV_CHARGE);

    /* End of SystemInitialize for SubSystem: '<S792>/HV_CHARGER_2' */
}

#endif

/* Output and update for atomic system: '<S700>/U049C_Variant_Corebev_500ms' */
#if Rte_SysCon_Variant_CIDB_U049C_Corebev

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U049C_Variant_Corebev_500ms(void)
{
    /* Outputs for Enabled SubSystem: '<S792>/HV_CHARGER_2' */
    CIDB_ac_HV_CHARGER_2(CIDB_ac_B.NOT,
                         CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_U049C_Diag,
                         CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_RstDiagC_e,
                         CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_ChrgFailSt,
                         &CIDB_ac_B.Status_e,
                         &CIDB_ac_B.VariantMergeForOutportVeCIDB_b_HV_CHARGE,
                         &CIDB_ac_DW.HV_CHARGER_2,
                         &CIDB_ac_DW.StatusByte_InvData_OBCM);

    /* End of Outputs for SubSystem: '<S792>/HV_CHARGER_2' */
}

#endif

/* System initialize for atomic system: '<S700>/U049C_Variant_Pegasus_500ms' */
#if Rte_SysCon_Variant_CIDB_U049C_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U049C_Variant_Pegasus_500ms_Init(void)
{
    /* SystemInitialize for Enabled SubSystem: '<S793>/HV_CHARGER_2' */
    CIDB_ac_HV_CHARGER_2_Init(&CIDB_ac_B.Status_e,
        &CIDB_ac_B.VariantMergeForOutportVeCIDB_b_HV_CHARGE);

    /* End of SystemInitialize for SubSystem: '<S793>/HV_CHARGER_2' */
}

#endif

/* Output and update for atomic system: '<S700>/U049C_Variant_Pegasus_500ms' */
#if Rte_SysCon_Variant_CIDB_U049C_Pegasus

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U049C_Variant_Pegasus_500ms(void)
{
    /* Outputs for Enabled SubSystem: '<S793>/HV_CHARGER_2' */
    CIDB_ac_HV_CHARGER_2(CIDB_ac_B.NOT,
                         CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_U049C_Diag,
                         CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_RstDiagC_e,
                         CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_ChrgFailSt,
                         &CIDB_ac_B.Status_e,
                         &CIDB_ac_B.VariantMergeForOutportVeCIDB_b_HV_CHARGE,
                         &CIDB_ac_DW.HV_CHARGER_2_i,
                         &CIDB_ac_DW.StatusByte_InvData_OBCM);

    /* End of Outputs for SubSystem: '<S793>/HV_CHARGER_2' */
}

#endif

/* Output and update for atomic system: '<S57>/U044A_Pegasus_COREBEV_1000ms' */
#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

static FUNC(void, CIDB_CODE_LOCAL) CIDB_ac_U044A_Pegasus_COREBEV_1000ms(void)
{
    sint32 tmp;
    uint32 rtb_RelationalOperator3_ps_tmp;
    boolean rtb_AND_ec;
    boolean rtb_RelationalOperator3;
    boolean rtb_UnitDelay_i;

    /* Inport: '<Root>/VeCANR_b_TBM_Start_Time_Hr2TO' */
    (void)Rte_Read_VeCANR_b_TBM_Start_Time_Hr2TO_VeCANR_b_TBM_Start_Time_Hr2TO
        (&rtb_UnitDelay_i);

    /* UnitDelay: '<S84>/Unit Delay' incorporates:
     *  Constant: '<S83>/Calib'
     *  Logic: '<S61>/Logical Operator'
     *  Logic: '<S61>/Logical Operator2'
     */
    rtb_UnitDelay_i = (((CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_IsDiagGlob) &&
                        (KeCIDB_b_U044A_DiagEnbl)) && (!rtb_UnitDelay_i));

    /* S-Function (sfix_bitop): '<S66>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S64>/Data Store Read'
     *  S-Function (sfix_bitop): '<S76>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_ps_tmp = ((uint32)
        CIDB_ac_DW.StatusByte_InvData_SecurGateway) & 64U;

    /* RelationalOperator: '<S66>/Relational Operator3' incorporates:
     *  Constant: '<S66>/Constant3'
     *  S-Function (sfix_bitop): '<S66>/Bitwise Operator2'
     */
    rtb_RelationalOperator3 = (rtb_RelationalOperator3_ps_tmp == 0U);

    /* Logic: '<S65>/Logical1' incorporates:
     *  Constant: '<S65>/Constant Value'
     *  RelationalOperator: '<S65>/Relational Operator1'
     *  RelationalOperator: '<S65>/Relational Operator2'
     *  RelationalOperator: '<S65>/Relational Operator3'
     *  RelationalOperator: '<S65>/Relational Operator4'
     *  RelationalOperator: '<S65>/Relational Operator5'
     *  RelationalOperator: '<S65>/Relational Operator6'
     *  RelationalOperator: '<S65>/Relational Operator7'
     *  RelationalOperator: '<S65>/Relational Operator8'
     */
    VeCIDB_b_CHARGE_SCHEDULE_HU1_FaultCriteria = ((((((((1 == ((sint32)
        CIDB_ac_B.TmpSignalConversionAtVeCANR_e_End_Time_H)) || (1 == ((sint32)
        CIDB_ac_B.TmpSignalConversionAtVeCANR_e_End_Time_e))) || (1 == ((sint32)
        CIDB_ac_B.TmpSignalConversionAtVeCANR_e_End_Time_M))) || (1 == ((sint32)
        CIDB_ac_B.TmpSignalConversionAtVeCANR_e_End_Time_h))) || (1 == ((sint32)
        CIDB_ac_B.TmpSignalConversionAtVeCANR_e_Start_Time))) || (1 == ((sint32)
        CIDB_ac_B.TmpSignalConversionAtVeCANR_e_Start_Ti_e))) || (1 == ((sint32)
        CIDB_ac_B.TmpSignalConversionAtVeCANR_e_Start_Ti_k))) || (1 == ((sint32)
        CIDB_ac_B.TmpSignalConversionAtVeCANR_e_Start_Ti_i)));

    /* Outputs for Atomic SubSystem: '<S66>/EdgeFalling1' */
    /* Logic: '<S72>/AND' incorporates:
     *  Logic: '<S72>/OR1'
     *  UnitDelay: '<S72>/Unit Delay'
     */
    rtb_AND_ec = ((!rtb_RelationalOperator3) && (CIDB_ac_DW.UnitDelay_DSTATE_f));

    /* Update for UnitDelay: '<S72>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_f = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S66>/EdgeFalling1' */

    /* Chart: '<S66>/Diagnostic Debounce' incorporates:
     *  Constant: '<S66>/Constant1'
     *  Constant: '<S67>/Calib'
     *  Constant: '<S68>/Calib'
     *  Constant: '<S69>/Calib'
     *  Constant: '<S70>/Calib'
     *  DataStoreRead: '<S64>/Data Store Read'
     *  Logic: '<S66>/Logical Operator'
     *  Logic: '<S66>/Logical Operator1'
     *  Logic: '<S66>/Logical10'
     *  Logic: '<S66>/Logical12'
     *  Logic: '<S66>/Logical5'
     *  RelationalOperator: '<S66>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S66>/Bitwise Operator3'
     */
    /* Gateway: DiagnosticDebounceimplausibleSignalSNA/Diagnostic Debounce */
    /* During: DiagnosticDebounceimplausibleSignalSNA/Diagnostic Debounce */
    /* Entry Internal: DiagnosticDebounceimplausibleSignalSNA/Diagnostic Debounce */
    /* Transition: '<S71>:499' */
    VeCIDB_b_CHARGE_SCHEDULE_HU1_Fail = false;
    VeCIDB_b_CHARGE_SCHEDULE_HU1_Pass = false;
    if (rtb_AND_ec || (CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_RstDiagCnt))
    {
        /* RelationalOperator: '<S62>/Comparison5' */
        /* Transition: '<S71>:500' */
        /* Transition: '<S71>:502' */
        CIDB_ac_B.Status_n = CeDFIB_e_Init;
        VeCIDB_Cnt_CHARGE_SCHEDULE_HU1_Fail = 0U;
        VeCIDB_Cnt_CHARGE_SCHEDULE_HU1_Init = 0U;

        /* Transition: '<S71>:505' */
        /* Transition: '<S71>:533' */
        /* Transition: '<S71>:545' */
        /* Transition: '<S71>:546' */
    }
    else
    {
        /* Transition: '<S71>:501' */
        if (((KeCIDB_b_CHARGE_SCHEDULE_HU1_ePT_SNA_DiagEnbl) && rtb_UnitDelay_i)
            && ((!KeCIDB_b_CHARGE_SCHEDULE_HU1_ePT_SNA_FailLatchEnable) ||
                (((((uint32)CIDB_ac_DW.StatusByte_InvData_SecurGateway) & 1U) ==
                  0U) || (!rtb_RelationalOperator3))))
        {
            /* Transition: '<S71>:504' */
            if (((uint32)CIDB_ac_B.Status_n) == CeDFIB_e_Init)
            {
                /* Transition: '<S71>:507' */
                if (!VeCIDB_b_CHARGE_SCHEDULE_HU1_FaultCriteria)
                {
                    /* Transition: '<S71>:506' */
                    /* Transition: '<S71>:509' */
                    tmp = ((sint32)VeCIDB_Cnt_CHARGE_SCHEDULE_HU1_Init) +
                        ((sint32)KeCIDB_Cnt_CHARGE_SCHEDULE_HU1_ePT_SNAFailINC);
                    if (tmp > 65535)
                    {
                        tmp = 65535;
                    }

                    VeCIDB_Cnt_CHARGE_SCHEDULE_HU1_Init = (uint16)tmp;
                    if (VeCIDB_Cnt_CHARGE_SCHEDULE_HU1_Init >=
                            KeCIDB_Cnt_CHARGE_SCHEDULE_HU1_ePT_SNA_FailLmt)
                    {
                        /* RelationalOperator: '<S62>/Comparison5' */
                        /* Transition: '<S71>:511' */
                        /* Transition: '<S71>:513' */
                        CIDB_ac_B.Status_n = CeDFIB_e_Pass;
                        VeCIDB_b_CHARGE_SCHEDULE_HU1_Pass = true;

                        /* Transition: '<S71>:516' */
                    }
                    else
                    {
                        /* Transition: '<S71>:512' */
                    }

                    /* Transition: '<S71>:515' */
                }
                else
                {
                    /* Transition: '<S71>:508' */
                    VeCIDB_Cnt_CHARGE_SCHEDULE_HU1_Init = 0U;
                }

                /* Transition: '<S71>:514' */
            }
            else
            {
                /* Transition: '<S71>:510' */
            }

            /* Transition: '<S71>:517' */
            if ((((((uint32)CIDB_ac_B.Status_n) == CeDFIB_e_Pass) || (((uint32)
                    CIDB_ac_B.Status_n) == CeDFIB_e_Pass_FaultRemoved)) ||
                    (((uint32)CIDB_ac_B.Status_n) ==
                     CeDFIB_e_Pass_FaultFiltering)) || (((uint32)
                    CIDB_ac_B.Status_n) == CeDFIB_e_Init))
            {
                /* Transition: '<S71>:518' */
                if (VeCIDB_b_CHARGE_SCHEDULE_HU1_FaultCriteria)
                {
                    /* Transition: '<S71>:519' */
                    /* Transition: '<S71>:522' */
                    tmp = ((sint32)VeCIDB_Cnt_CHARGE_SCHEDULE_HU1_Fail) +
                        ((sint32)KeCIDB_Cnt_CHARGE_SCHEDULE_HU1_ePT_SNAFailINC);
                    if (tmp > 65535)
                    {
                        tmp = 65535;
                    }

                    VeCIDB_Cnt_CHARGE_SCHEDULE_HU1_Fail = (uint16)tmp;
                    if (VeCIDB_Cnt_CHARGE_SCHEDULE_HU1_Fail >
                            KeCIDB_Cnt_CHARGE_SCHEDULE_HU1_ePT_SNA_FailLmt)
                    {
                        /* RelationalOperator: '<S62>/Comparison5' */
                        /* Transition: '<S71>:524' */
                        /* Transition: '<S71>:528' */
                        CIDB_ac_B.Status_n = CeDFIB_e_Fail;
                        VeCIDB_b_CHARGE_SCHEDULE_HU1_Fail = true;
                        tmp = ((sint32)
                               KeCIDB_Cnt_CHARGE_SCHEDULE_HU1_ePT_SNA_FailLmt) +
                            1;
                        if ((((sint32)
                                KeCIDB_Cnt_CHARGE_SCHEDULE_HU1_ePT_SNA_FailLmt)
                                + 1) > 65535)
                        {
                            tmp = 65535;
                        }

                        VeCIDB_Cnt_CHARGE_SCHEDULE_HU1_Fail = (uint16)tmp;
                    }
                    else
                    {
                        /* Transition: '<S71>:557' */
                        if (((uint32)CIDB_ac_B.Status_n) != CeDFIB_e_Init)
                        {
                            /* RelationalOperator: '<S62>/Comparison5' */
                            /* Transition: '<S71>:563' */
                            CIDB_ac_B.Status_n = CeDFIB_e_Pass_FaultFiltering;

                            /* Transition: '<S71>:564' */
                            /* Transition: '<S71>:562' */
                        }
                        else
                        {
                            /* Transition: '<S71>:559' */
                            /* Transition: '<S71>:561' */
                            /* Transition: '<S71>:562' */
                        }
                    }
                }
                else
                {
                    /* Transition: '<S71>:521' */
                    if (((sint32)VeCIDB_Cnt_CHARGE_SCHEDULE_HU1_Fail) > 0)
                    {
                        /* Transition: '<S71>:523' */
                        /* Transition: '<S71>:567' */
                        tmp = ((sint32)VeCIDB_Cnt_CHARGE_SCHEDULE_HU1_Fail) - 1;
                        if ((((sint32)VeCIDB_Cnt_CHARGE_SCHEDULE_HU1_Fail) - 1) <
                            0)
                        {
                            tmp = 0;
                        }

                        VeCIDB_Cnt_CHARGE_SCHEDULE_HU1_Fail = (uint16)tmp;
                        if (((uint32)CIDB_ac_B.Status_n) != CeDFIB_e_Init)
                        {
                            /* RelationalOperator: '<S62>/Comparison5' */
                            /* Transition: '<S71>:574' */
                            CIDB_ac_B.Status_n = CeDFIB_e_Pass_FaultRemoved;

                            /* Transition: '<S71>:569' */
                        }
                        else
                        {
                            /* Transition: '<S71>:572' */
                            /* Transition: '<S71>:573' */
                        }
                    }
                    else
                    {
                        /* Transition: '<S71>:577' */
                        if (((uint32)CIDB_ac_B.Status_n) != CeDFIB_e_Init)
                        {
                            /* RelationalOperator: '<S62>/Comparison5' */
                            /* Transition: '<S71>:582' */
                            CIDB_ac_B.Status_n = CeDFIB_e_Pass;

                            /* Transition: '<S71>:581' */
                        }
                        else
                        {
                            /* Transition: '<S71>:579' */
                            /* Transition: '<S71>:580' */
                        }

                        /* Transition: '<S71>:583' */
                        /* Transition: '<S71>:569' */
                    }

                    /* Transition: '<S71>:570' */
                    /* Transition: '<S71>:564' */
                    /* Transition: '<S71>:562' */
                }

                /* Transition: '<S71>:532' */
                /* Transition: '<S71>:533' */
                /* Transition: '<S71>:545' */
                /* Transition: '<S71>:546' */
            }
            else
            {
                /* Transition: '<S71>:520' */
                if ((((uint32)CIDB_ac_B.Status_n) == CeDFIB_e_Fail) || (((uint32)
                        CIDB_ac_B.Status_n) == CeDFIB_e_Fail_FaultRemoved))
                {
                    /* Transition: '<S71>:534' */
                    if (VeCIDB_b_CHARGE_SCHEDULE_HU1_FaultCriteria)
                    {
                        /* Transition: '<S71>:535' */
                        /* Transition: '<S71>:538' */
                        tmp = ((sint32)
                               KeCIDB_Cnt_CHARGE_SCHEDULE_HU1_ePT_SNA_FailLmt) +
                            1;
                        if ((((sint32)
                                KeCIDB_Cnt_CHARGE_SCHEDULE_HU1_ePT_SNA_FailLmt)
                                + 1) > 65535)
                        {
                            tmp = 65535;
                        }

                        VeCIDB_Cnt_CHARGE_SCHEDULE_HU1_Fail = (uint16)tmp;

                        /* RelationalOperator: '<S62>/Comparison5' incorporates:
                         *  Constant: '<S68>/Calib'
                         */
                        CIDB_ac_B.Status_n = CeDFIB_e_Fail;
                    }
                    else
                    {
                        /* Transition: '<S71>:537' */
                        tmp = ((sint32)VeCIDB_Cnt_CHARGE_SCHEDULE_HU1_Fail) - 1;
                        if ((((sint32)VeCIDB_Cnt_CHARGE_SCHEDULE_HU1_Fail) - 1) <
                            0)
                        {
                            tmp = 0;
                        }

                        VeCIDB_Cnt_CHARGE_SCHEDULE_HU1_Fail = (uint16)tmp;
                        if (((sint32)VeCIDB_Cnt_CHARGE_SCHEDULE_HU1_Fail) <= 0)
                        {
                            /* RelationalOperator: '<S62>/Comparison5' */
                            /* Transition: '<S71>:539' */
                            /* Transition: '<S71>:541' */
                            CIDB_ac_B.Status_n = CeDFIB_e_Pass;
                            VeCIDB_b_CHARGE_SCHEDULE_HU1_Pass = true;
                        }
                        else
                        {
                            /* RelationalOperator: '<S62>/Comparison5' */
                            /* Transition: '<S71>:540' */
                            CIDB_ac_B.Status_n = CeDFIB_e_Fail_FaultRemoved;

                            /* Transition: '<S71>:542' */
                        }

                        /* Transition: '<S71>:543' */
                    }

                    /* Transition: '<S71>:544' */
                    /* Transition: '<S71>:545' */
                    /* Transition: '<S71>:546' */
                }
                else
                {
                    /* Transition: '<S71>:536' */
                }
            }
        }
        else
        {
            /* Transition: '<S71>:503' */
            /* Transition: '<S71>:505' */
            /* Transition: '<S71>:533' */
            /* Transition: '<S71>:545' */
            /* Transition: '<S71>:546' */
        }
    }

    /* End of Chart: '<S66>/Diagnostic Debounce' */

    /* RelationalOperator: '<S76>/Relational Operator3' incorporates:
     *  Constant: '<S76>/Constant3'
     */
    /* Transition: '<S71>:547' */
    rtb_RelationalOperator3 = (rtb_RelationalOperator3_ps_tmp == 0U);

    /* Logic: '<S75>/Logical1' incorporates:
     *  Constant: '<S75>/Constant Value'
     *  RelationalOperator: '<S75>/Relational Operator1'
     *  RelationalOperator: '<S75>/Relational Operator2'
     *  RelationalOperator: '<S75>/Relational Operator3'
     *  RelationalOperator: '<S75>/Relational Operator4'
     *  RelationalOperator: '<S75>/Relational Operator5'
     *  RelationalOperator: '<S75>/Relational Operator6'
     *  RelationalOperator: '<S75>/Relational Operator7'
     *  RelationalOperator: '<S75>/Relational Operator8'
     */
    VeCIDB_b_TBM_SCHEDULE_FD_1_FaultCriteria = ((((((((1 == ((sint32)
        CIDB_ac_B.TmpSignalConversionAtVeCANR_e_TBM_End_Ti)) || (1 == ((sint32)
        CIDB_ac_B.TmpSignalConversionAtVeCANR_e_TBM_End__d))) || (1 == ((sint32)
        CIDB_ac_B.TmpSignalConversionAtVeCANR_e_TBM_End__n))) || (1 == ((sint32)
        CIDB_ac_B.TmpSignalConversionAtVeCANR_e_TBM_End__j))) || (1 == ((sint32)
        CIDB_ac_B.TmpSignalConversionAtVeCANR_e_TBM_Start_))) || (1 == ((sint32)
        CIDB_ac_B.TmpSignalConversionAtVeCANR_e_TBM_Star_h))) || (1 == ((sint32)
        CIDB_ac_B.TmpSignalConversionAtVeCANR_e_TBM_Star_p))) || (1 == ((sint32)
        CIDB_ac_B.TmpSignalConversionAtVeCANR_e_TBM_Star_n)));

    /* Outputs for Atomic SubSystem: '<S76>/EdgeFalling1' */
    /* Logic: '<S82>/AND' incorporates:
     *  Logic: '<S82>/OR1'
     *  UnitDelay: '<S82>/Unit Delay'
     */
    rtb_AND_ec = ((!rtb_RelationalOperator3) && (CIDB_ac_DW.UnitDelay_DSTATE_a));

    /* Update for UnitDelay: '<S82>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_a = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S76>/EdgeFalling1' */

    /* Chart: '<S76>/Diagnostic Debounce' incorporates:
     *  Constant: '<S76>/Constant1'
     *  Constant: '<S77>/Calib'
     *  Constant: '<S78>/Calib'
     *  Constant: '<S79>/Calib'
     *  Constant: '<S80>/Calib'
     *  DataStoreRead: '<S74>/Data Store Read'
     *  Logic: '<S76>/Logical Operator'
     *  Logic: '<S76>/Logical Operator1'
     *  Logic: '<S76>/Logical10'
     *  Logic: '<S76>/Logical12'
     *  Logic: '<S76>/Logical5'
     *  RelationalOperator: '<S76>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S76>/Bitwise Operator3'
     */
    /* Gateway: DiagnosticDebounceimplausibleSignalSNA/Diagnostic Debounce */
    /* During: DiagnosticDebounceimplausibleSignalSNA/Diagnostic Debounce */
    /* Entry Internal: DiagnosticDebounceimplausibleSignalSNA/Diagnostic Debounce */
    /* Transition: '<S81>:499' */
    VeCIDB_b_TBM_SCHEDULE_FD_1_Fail = false;
    VeCIDB_b_TBM_SCHEDULE_FD_1_Pass = false;
    if (rtb_AND_ec || (CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_RstDiagCnt))
    {
        /* RelationalOperator: '<S62>/Comparison6' */
        /* Transition: '<S81>:500' */
        /* Transition: '<S81>:502' */
        CIDB_ac_B.Status = CeDFIB_e_Init;
        VeCIDB_Cnt_TBM_SCHEDULE_FD_1_Fail = 0U;
        VeCIDB_Cnt_TBM_SCHEDULE_FD_1_Init = 0U;

        /* Transition: '<S81>:505' */
        /* Transition: '<S81>:533' */
        /* Transition: '<S81>:545' */
        /* Transition: '<S81>:546' */
    }
    else
    {
        /* Transition: '<S81>:501' */
        if (((KeCIDB_b_TBM_SCHEDULE_FD_1_ePT_SNA_DiagEnbl) && rtb_UnitDelay_i) &&
            ((!KeCIDB_b_TBM_SCHEDULE_FD_1_ePT_SNA_FailLatchEnable) ||
                (((((uint32)CIDB_ac_DW.StatusByte_InvData_SecurGateway) & 1U) ==
                  0U) || (!rtb_RelationalOperator3))))
        {
            /* Transition: '<S81>:504' */
            if (((uint32)CIDB_ac_B.Status) == CeDFIB_e_Init)
            {
                /* Transition: '<S81>:507' */
                if (!VeCIDB_b_TBM_SCHEDULE_FD_1_FaultCriteria)
                {
                    /* Transition: '<S81>:506' */
                    /* Transition: '<S81>:509' */
                    tmp = ((sint32)VeCIDB_Cnt_TBM_SCHEDULE_FD_1_Init) + ((sint32)
                        KeCIDB_Cnt_TBM_SCHEDULE_FD_1_ePT_SNAFailINC);
                    if (tmp > 65535)
                    {
                        tmp = 65535;
                    }

                    VeCIDB_Cnt_TBM_SCHEDULE_FD_1_Init = (uint16)tmp;
                    if (VeCIDB_Cnt_TBM_SCHEDULE_FD_1_Init >=
                            KeCIDB_Cnt_TBM_SCHEDULE_FD_1_ePT_SNA_FailLmt)
                    {
                        /* RelationalOperator: '<S62>/Comparison6' */
                        /* Transition: '<S81>:511' */
                        /* Transition: '<S81>:513' */
                        CIDB_ac_B.Status = CeDFIB_e_Pass;
                        VeCIDB_b_TBM_SCHEDULE_FD_1_Pass = true;

                        /* Transition: '<S81>:516' */
                    }
                    else
                    {
                        /* Transition: '<S81>:512' */
                    }

                    /* Transition: '<S81>:515' */
                }
                else
                {
                    /* Transition: '<S81>:508' */
                    VeCIDB_Cnt_TBM_SCHEDULE_FD_1_Init = 0U;
                }

                /* Transition: '<S81>:514' */
            }
            else
            {
                /* Transition: '<S81>:510' */
            }

            /* Transition: '<S81>:517' */
            if ((((((uint32)CIDB_ac_B.Status) == CeDFIB_e_Pass) || (((uint32)
                    CIDB_ac_B.Status) == CeDFIB_e_Pass_FaultRemoved)) ||
                    (((uint32)CIDB_ac_B.Status) == CeDFIB_e_Pass_FaultFiltering))
                || (((uint32)CIDB_ac_B.Status) == CeDFIB_e_Init))
            {
                /* Transition: '<S81>:518' */
                if (VeCIDB_b_TBM_SCHEDULE_FD_1_FaultCriteria)
                {
                    /* Transition: '<S81>:519' */
                    /* Transition: '<S81>:522' */
                    tmp = ((sint32)VeCIDB_Cnt_TBM_SCHEDULE_FD_1_Fail) + ((sint32)
                        KeCIDB_Cnt_TBM_SCHEDULE_FD_1_ePT_SNAFailINC);
                    if (tmp > 65535)
                    {
                        tmp = 65535;
                    }

                    VeCIDB_Cnt_TBM_SCHEDULE_FD_1_Fail = (uint16)tmp;
                    if (VeCIDB_Cnt_TBM_SCHEDULE_FD_1_Fail >
                            KeCIDB_Cnt_TBM_SCHEDULE_FD_1_ePT_SNA_FailLmt)
                    {
                        /* RelationalOperator: '<S62>/Comparison6' */
                        /* Transition: '<S81>:524' */
                        /* Transition: '<S81>:528' */
                        CIDB_ac_B.Status = CeDFIB_e_Fail;
                        VeCIDB_b_TBM_SCHEDULE_FD_1_Fail = true;
                        tmp = ((sint32)
                               KeCIDB_Cnt_TBM_SCHEDULE_FD_1_ePT_SNA_FailLmt) + 1;
                        if ((((sint32)
                                KeCIDB_Cnt_TBM_SCHEDULE_FD_1_ePT_SNA_FailLmt) +
                                1) > 65535)
                        {
                            tmp = 65535;
                        }

                        VeCIDB_Cnt_TBM_SCHEDULE_FD_1_Fail = (uint16)tmp;
                    }
                    else
                    {
                        /* Transition: '<S81>:557' */
                        if (((uint32)CIDB_ac_B.Status) != CeDFIB_e_Init)
                        {
                            /* RelationalOperator: '<S62>/Comparison6' */
                            /* Transition: '<S81>:563' */
                            CIDB_ac_B.Status = CeDFIB_e_Pass_FaultFiltering;

                            /* Transition: '<S81>:564' */
                            /* Transition: '<S81>:562' */
                        }
                        else
                        {
                            /* Transition: '<S81>:559' */
                            /* Transition: '<S81>:561' */
                            /* Transition: '<S81>:562' */
                        }
                    }
                }
                else
                {
                    /* Transition: '<S81>:521' */
                    if (((sint32)VeCIDB_Cnt_TBM_SCHEDULE_FD_1_Fail) > 0)
                    {
                        /* Transition: '<S81>:523' */
                        /* Transition: '<S81>:567' */
                        tmp = ((sint32)VeCIDB_Cnt_TBM_SCHEDULE_FD_1_Fail) - 1;
                        if ((((sint32)VeCIDB_Cnt_TBM_SCHEDULE_FD_1_Fail) - 1) <
                                0)
                        {
                            tmp = 0;
                        }

                        VeCIDB_Cnt_TBM_SCHEDULE_FD_1_Fail = (uint16)tmp;
                        if (((uint32)CIDB_ac_B.Status) != CeDFIB_e_Init)
                        {
                            /* RelationalOperator: '<S62>/Comparison6' */
                            /* Transition: '<S81>:574' */
                            CIDB_ac_B.Status = CeDFIB_e_Pass_FaultRemoved;

                            /* Transition: '<S81>:569' */
                        }
                        else
                        {
                            /* Transition: '<S81>:572' */
                            /* Transition: '<S81>:573' */
                        }
                    }
                    else
                    {
                        /* Transition: '<S81>:577' */
                        if (((uint32)CIDB_ac_B.Status) != CeDFIB_e_Init)
                        {
                            /* RelationalOperator: '<S62>/Comparison6' */
                            /* Transition: '<S81>:582' */
                            CIDB_ac_B.Status = CeDFIB_e_Pass;

                            /* Transition: '<S81>:581' */
                        }
                        else
                        {
                            /* Transition: '<S81>:579' */
                            /* Transition: '<S81>:580' */
                        }

                        /* Transition: '<S81>:583' */
                        /* Transition: '<S81>:569' */
                    }

                    /* Transition: '<S81>:570' */
                    /* Transition: '<S81>:564' */
                    /* Transition: '<S81>:562' */
                }

                /* Transition: '<S81>:532' */
                /* Transition: '<S81>:533' */
                /* Transition: '<S81>:545' */
                /* Transition: '<S81>:546' */
            }
            else
            {
                /* Transition: '<S81>:520' */
                if ((((uint32)CIDB_ac_B.Status) == CeDFIB_e_Fail) || (((uint32)
                        CIDB_ac_B.Status) == CeDFIB_e_Fail_FaultRemoved))
                {
                    /* Transition: '<S81>:534' */
                    if (VeCIDB_b_TBM_SCHEDULE_FD_1_FaultCriteria)
                    {
                        /* Transition: '<S81>:535' */
                        /* Transition: '<S81>:538' */
                        tmp = ((sint32)
                               KeCIDB_Cnt_TBM_SCHEDULE_FD_1_ePT_SNA_FailLmt) + 1;
                        if ((((sint32)
                                KeCIDB_Cnt_TBM_SCHEDULE_FD_1_ePT_SNA_FailLmt) +
                                1) > 65535)
                        {
                            tmp = 65535;
                        }

                        VeCIDB_Cnt_TBM_SCHEDULE_FD_1_Fail = (uint16)tmp;

                        /* RelationalOperator: '<S62>/Comparison6' incorporates:
                         *  Constant: '<S78>/Calib'
                         */
                        CIDB_ac_B.Status = CeDFIB_e_Fail;
                    }
                    else
                    {
                        /* Transition: '<S81>:537' */
                        tmp = ((sint32)VeCIDB_Cnt_TBM_SCHEDULE_FD_1_Fail) - 1;
                        if ((((sint32)VeCIDB_Cnt_TBM_SCHEDULE_FD_1_Fail) - 1) <
                                0)
                        {
                            tmp = 0;
                        }

                        VeCIDB_Cnt_TBM_SCHEDULE_FD_1_Fail = (uint16)tmp;
                        if (((sint32)VeCIDB_Cnt_TBM_SCHEDULE_FD_1_Fail) <= 0)
                        {
                            /* RelationalOperator: '<S62>/Comparison6' */
                            /* Transition: '<S81>:539' */
                            /* Transition: '<S81>:541' */
                            CIDB_ac_B.Status = CeDFIB_e_Pass;
                            VeCIDB_b_TBM_SCHEDULE_FD_1_Pass = true;
                        }
                        else
                        {
                            /* RelationalOperator: '<S62>/Comparison6' */
                            /* Transition: '<S81>:540' */
                            CIDB_ac_B.Status = CeDFIB_e_Fail_FaultRemoved;

                            /* Transition: '<S81>:542' */
                        }

                        /* Transition: '<S81>:543' */
                    }

                    /* Transition: '<S81>:544' */
                    /* Transition: '<S81>:545' */
                    /* Transition: '<S81>:546' */
                }
                else
                {
                    /* Transition: '<S81>:536' */
                }
            }
        }
        else
        {
            /* Transition: '<S81>:503' */
            /* Transition: '<S81>:505' */
            /* Transition: '<S81>:533' */
            /* Transition: '<S81>:545' */
            /* Transition: '<S81>:546' */
        }
    }

    /* End of Chart: '<S76>/Diagnostic Debounce' */

    /* RelationalOperator: '<S62>/Relational Operator2' incorporates:
     *  Constant: '<S62>/Constant2'
     *  DataStoreRead: '<S62>/StatusByte_InvData_SecurGateway'
     *  S-Function (sfix_bitop): '<S62>/Bitwise Operator1'
     */
    /* Transition: '<S81>:547' */
    rtb_UnitDelay_i = ((((sint32)CIDB_ac_DW.StatusByte_InvData_SecurGateway) &
                        64) == 64);

    /* Outputs for Atomic SubSystem: '<S62>/EdgeRising' */
    /* Logic: '<S84>/OR1' incorporates:
     *  UnitDelay: '<S84>/Unit Delay'
     */
    rtb_RelationalOperator3 = !CIDB_ac_DW.UnitDelay_DSTATE;

    /* Update for UnitDelay: '<S84>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE = rtb_UnitDelay_i;

    /* End of Outputs for SubSystem: '<S62>/EdgeRising' */

    /* Logic: '<S62>/Logical10' incorporates:
     *  Constant: '<S69>/Calib'
     *  Constant: '<S79>/Calib'
     *  Constant: '<S87>/Constant'
     *  Constant: '<S88>/Constant'
     *  Logic: '<S62>/Logical1'
     *  Logic: '<S62>/Logical13'
     *  Logic: '<S62>/Logical14'
     *  Logic: '<S62>/Logical2'
     *  Logic: '<S62>/Logical9'
     *  RelationalOperator: '<S62>/Comparison5'
     *  RelationalOperator: '<S62>/Comparison6'
     */
    VeCIDB_b_U044A_Pass = ((((!KeCIDB_b_CHARGE_SCHEDULE_HU1_ePT_SNA_DiagEnbl) ||
        (((uint32)CIDB_ac_B.Status_n) == CeDFIB_e_Pass)) &&
                            ((!KeCIDB_b_TBM_SCHEDULE_FD_1_ePT_SNA_DiagEnbl) ||
        (((uint32)CIDB_ac_B.Status) == CeDFIB_e_Pass))) &&
                           ((KeCIDB_b_TBM_SCHEDULE_FD_1_ePT_SNA_DiagEnbl) ||
                            (KeCIDB_b_CHARGE_SCHEDULE_HU1_ePT_SNA_DiagEnbl)));

    /* Logic: '<S62>/Logical11' incorporates:
     *  Constant: '<S85>/Constant'
     *  Constant: '<S86>/Constant'
     *  RelationalOperator: '<S62>/Comparison3'
     *  RelationalOperator: '<S62>/Comparison4'
     */
    VeCIDB_b_U044A_Fail = ((((uint32)CIDB_ac_B.Status_n) == CeDFIB_e_Fail) ||
                           (((uint32)CIDB_ac_B.Status) == CeDFIB_e_Fail));

    /* Outputs for Enabled SubSystem: '<S62>/Subsystem1' incorporates:
     *  EnablePort: '<S90>/Enable'
     */
    if (VeCIDB_b_U044A_Fail)
    {
        /* Outport: '<Root>/VeCIDB_e_FaultSts_InvData_SecurGateway' incorporates:
         *  Constant: '<S93>/Constant'
         */
        (void)Rte_Write_VeCIDB_e_FaultSts_InvData_SecurGateway_Value
            (CeDFIB_e_Fail);
    }

    /* End of Outputs for SubSystem: '<S62>/Subsystem1' */

    /* Outputs for Enabled SubSystem: '<S62>/Subsystem' incorporates:
     *  EnablePort: '<S89>/Enable'
     */
    if (VeCIDB_b_U044A_Pass)
    {
        /* Outport: '<Root>/VeCIDB_e_FaultSts_InvData_SecurGateway' incorporates:
         *  Constant: '<S92>/Constant'
         */
        (void)Rte_Write_VeCIDB_e_FaultSts_InvData_SecurGateway_Value
            (CeDFIB_e_Pass);
    }

    /* End of Outputs for SubSystem: '<S62>/Subsystem' */

    /* Outputs for Enabled SubSystem: '<S62>/Subsystem2' incorporates:
     *  EnablePort: '<S91>/Enable'
     */
    /* Outputs for Atomic SubSystem: '<S62>/EdgeRising' */
    /* Logic: '<S84>/AND' */
    if (rtb_UnitDelay_i && rtb_RelationalOperator3)
    {
        /* Outport: '<Root>/VeCIDB_e_FaultSts_InvData_SecurGateway' incorporates:
         *  Constant: '<S94>/Constant'
         */
        (void)Rte_Write_VeCIDB_e_FaultSts_InvData_SecurGateway_Value
            (CeDFIB_e_Init);
    }

    /* End of Logic: '<S84>/AND' */
    /* End of Outputs for SubSystem: '<S62>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S62>/Subsystem2' */
}

#endif

/* Model step function for TID1 */
FUNC(void, CIDB_CODE) CIDB_MedTEB(void) /* Explicit Task: MedTEB */
{
    boolean tmpRead;
    boolean tmpRead_0;

    /* Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe' */
    (void)Rte_Read_VeDFIR_b_DsblDiagFailSafe_Value(&tmpRead_0);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/ImplausibleMgmt_10ms'
     */
    /* DataStoreWrite: '<S4>/Data Store Write2' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_BCM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_BCM_Value
        (&CIDB_ac_DW.StatusByte_InvData_BCM);

    /* DataStoreWrite: '<S4>/Data Store Write1' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_ABS'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_ABS_Value
        (&CIDB_ac_DW.StatusByte_InvData_ABS);

    /* DataStoreWrite: '<S4>/Data Store Write' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_BECM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_BECM_Value
        (&CIDB_ac_DW.StatusByte_InvData_BECM);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl' */
    (void)Rte_Read_VeDFIR_b_PostCodeClrDiagDsbl_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/ImplausibleMgmt_10ms'
     */
    /* Logic: '<S4>/OR' */
    CIDB_ac_B.OR_c = (tmpRead || tmpRead_0);

    /* SignalConversion generated from: '<S4>/VeCIDB_b_BATTERY_HV_VLIMITS_CalDiagEnbl' incorporates:
     *  SignalConversion generated from: '<S5>/VeCIDB_b_BATTERY_HV_VLIMITS_CalDiagEnbl'
     */
#if Rte_SysCon_Variant_CIDB_U0412_BLUEN || Rte_SysCon_Variant_CIDB_U0412_Corebev || Rte_SysCon_Variant_CIDB_U0412_Pegasus

    CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_BATTERY__c =
        Rte_IrvRead_CIDB_MedTEB_VeCIDB_b_BATTERY_HV_VLIMITS_CalDiagEnbl_IRV();

#endif

    /* End of SignalConversion generated from: '<S4>/VeCIDB_b_BATTERY_HV_VLIMITS_CalDiagEnbl' */

    /* SignalConversion generated from: '<S4>/VeCIDB_b_BCM_FD_10_CalDiagEnbl' incorporates:
     *  SignalConversion generated from: '<S3>/VeCIDB_b_BCM_FD_12_CalDiagEnbl'
     *  SignalConversion generated from: '<S4>/VeCIDB_b_BCM_FD_12_CalDiagEnbl'
     *  SignalConversion generated from: '<S4>/VeCIDB_b_BCM_FD_9_CalDiagEnbl'
     *  SignalConversion generated from: '<S6>/VeCIDB_b_BCM_FD_10_CalDiagEnbl'
     *  SignalConversion generated from: '<S6>/VeCIDB_b_BCM_FD_9_CalDiagEnbl'
     */
#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

    CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_BCM_FD_1_o =
        Rte_IrvRead_CIDB_MedTEB_VeCIDB_b_BCM_FD_10_CalDiagEnbl_IRV();
    CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_BCM_FD_1_h =
        Rte_IrvRead_CIDB_MedTEB_VeCIDB_b_BCM_FD_12_CalDiagEnbl_IRV();
    CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_BCM_FD_9_k =
        Rte_IrvRead_CIDB_MedTEB_VeCIDB_b_BCM_FD_9_CalDiagEnbl_IRV();

#endif

    /* End of SignalConversion generated from: '<S4>/VeCIDB_b_BCM_FD_10_CalDiagEnbl' */

    /* SignalConversion generated from: '<S4>/VeDFIR_b_IsDiagGlobalConditionsValid' incorporates:
     *  Inport: '<Root>/VeDFIR_b_IsDiagGlobalConditionsValid'
     */
    (void)Rte_Read_VeDFIR_b_IsDiagGlobalConditionsValid_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeDFIR_b_IsDiagGlob);

    /* SignalConversion generated from: '<S4>/VeCIDB_b_IsDiagGlobalConditionsValid_out' */
    Rte_IrvWrite_CIDB_MedTEB_VeCIDB_b_IsDiagGlobalConditionsValid_out1_IRV
        (CIDB_ac_B.TmpSignalConversionAtVeDFIR_b_IsDiagGlob);

    /* SignalConversion generated from: '<S4>/VeCIDB_b_RstDiagCntr_out' */
    Rte_IrvWrite_CIDB_MedTEB_VeCIDB_b_RstDiagCntr_out1_IRV(CIDB_ac_B.OR_c);

    /* SignalConversion generated from: '<S4>/VeCRDB_y_BPCM_HV_Current_SigSts' incorporates:
     *  Inport: '<Root>/VeCRDB_y_BPCM_HVChrgCurProf_SigSts'
     *  Inport: '<Root>/VeCRDB_y_BPCM_HVPwrMaxChgLT_SigSts'
     *  Inport: '<Root>/VeCRDB_y_BPCM_HVPwrMaxChgMT_SigSts'
     *  Inport: '<Root>/VeCRDB_y_BPCM_HVPwrMaxChgST_SigSts'
     *  Inport: '<Root>/VeCRDB_y_BPCM_HVPwrMxDchgLT_SigSts'
     *  Inport: '<Root>/VeCRDB_y_BPCM_HVPwrMxDchgMT_SigSts'
     *  Inport: '<Root>/VeCRDB_y_BPCM_HVPwrMxDchgST_SigSts'
     *  Inport: '<Root>/VeCRDB_y_BPCM_HV_Current_SigSts'
     *  Inport: '<Root>/VeCRDB_y_BPCM_HV_IntVolt_SigSts'
     *  Inport: '<Root>/VeCRDB_y_BPCM_HV_SOC_SigSts'
     *  Inport: '<Root>/VeCRDB_y_BPCM_HV_Temp_Avg_SigSts'
     *  Inport: '<Root>/VeCRDB_y_BPCM_HV_Temp_Max_SigSts'
     *  Inport: '<Root>/VeCRDB_y_BPCM_HV_Temp_Min_SigSts'
     *  Inport: '<Root>/VeCRDB_y_BPCM_HV_TracBusSts_SigSts'
     *  SignalConversion generated from: '<S4>/VeCIDB_b_U0412_DiagEnbl'
     *  SignalConversion generated from: '<S4>/VeCIDB_e_BATTERY_HV_VLIMITS_ErrState'
     *  SignalConversion generated from: '<S4>/VeCRDB_y_BPCM_HVChrgCurProf_SigSts'
     *  SignalConversion generated from: '<S4>/VeCRDB_y_BPCM_HVPwrMaxChgLT_SigSts'
     *  SignalConversion generated from: '<S4>/VeCRDB_y_BPCM_HVPwrMaxChgMT_SigSts'
     *  SignalConversion generated from: '<S4>/VeCRDB_y_BPCM_HVPwrMaxChgST_SigSts'
     *  SignalConversion generated from: '<S4>/VeCRDB_y_BPCM_HVPwrMxDchgLT_SigSts'
     *  SignalConversion generated from: '<S4>/VeCRDB_y_BPCM_HVPwrMxDchgMT_SigSts'
     *  SignalConversion generated from: '<S4>/VeCRDB_y_BPCM_HVPwrMxDchgST_SigSts'
     *  SignalConversion generated from: '<S4>/VeCRDB_y_BPCM_HV_IntVolt_SigSts'
     *  SignalConversion generated from: '<S4>/VeCRDB_y_BPCM_HV_SOC_SigSts'
     *  SignalConversion generated from: '<S4>/VeCRDB_y_BPCM_HV_Temp_Avg_SigSts'
     *  SignalConversion generated from: '<S4>/VeCRDB_y_BPCM_HV_Temp_Max_SigSts'
     *  SignalConversion generated from: '<S4>/VeCRDB_y_BPCM_HV_Temp_Min_SigSts'
     *  SignalConversion generated from: '<S4>/VeCRDB_y_BPCM_HV_TracBusSts_SigSts'
     *  SignalConversion generated from: '<S5>/VeCIDB_e_BATTERY_HV_VLIMITS_ErrState'
     */
#if Rte_SysCon_Variant_CIDB_U0412_BLUEN || Rte_SysCon_Variant_CIDB_U0412_Corebev || Rte_SysCon_Variant_CIDB_U0412_Pegasus

    /* Outputs for Atomic SubSystem: '<S4>/U0412_Variant_Pegasus_Corebev_Bluen_10ms' */
    (void)Rte_Read_VeCRDB_y_BPCM_HV_Current_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HV_Cu);
    (void)Rte_Read_VeCRDB_y_BPCM_HV_IntVolt_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HV_In);
    (void)Rte_Read_VeCRDB_y_BPCM_HV_SOC_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HV_SO);
    (void)Rte_Read_VeCRDB_y_BPCM_HV_Temp_Avg_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HV_Te);
    (void)Rte_Read_VeCRDB_y_BPCM_HV_Temp_Max_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HV__m);
    (void)Rte_Read_VeCRDB_y_BPCM_HV_Temp_Min_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HV__p);
    (void)Rte_Read_VeCRDB_y_BPCM_HV_TracBusSts_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HV_Tr);
    (void)Rte_Read_VeCRDB_y_BPCM_HVChrgCurProf_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HVChr);
    (void)Rte_Read_VeCRDB_y_BPCM_HVPwrMaxChgLT_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HVPwr);
    (void)Rte_Read_VeCRDB_y_BPCM_HVPwrMaxChgMT_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HVP_b);
    (void)Rte_Read_VeCRDB_y_BPCM_HVPwrMaxChgST_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HVP_k);
    (void)Rte_Read_VeCRDB_y_BPCM_HVPwrMxDchgLT_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HVP_f);
    (void)Rte_Read_VeCRDB_y_BPCM_HVPwrMxDchgMT_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HV_bv);
    (void)Rte_Read_VeCRDB_y_BPCM_HVPwrMxDchgST_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_HVP_i);
    CIDB_ac_B.TmpSignalConversionAtVeCIDB_e_BATTERY__h =
        Rte_IrvRead_CIDB_MedTEB_VeCIDB_e_BATTERY_HV_VLIMITS_ErrState_IRV();

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN

    /* Outputs for Atomic SubSystem: '<S155>/U0412_Variant_Bluen_10ms' */
    CIDB_ac_U0412_Variant_Bluen_10ms();

    /* End of Outputs for SubSystem: '<S155>/U0412_Variant_Bluen_10ms' */
#elif Rte_SysCon_Variant_CIDB_U0412_Corebev

    /* Outputs for Atomic SubSystem: '<S155>/U0412_Variant_Corebev_10ms' */
    CIDB_ac_U0412_Variant_Corebev_10ms();

    /* End of Outputs for SubSystem: '<S155>/U0412_Variant_Corebev_10ms' */
#elif Rte_SysCon_Variant_CIDB_U0412_Pegasus

    /* Outputs for Atomic SubSystem: '<S155>/U0412_Variant_Pegasus_10ms' */
    CIDB_ac_U0412_Variant_Pegasus_10ms();

    /* End of Outputs for SubSystem: '<S155>/U0412_Variant_Pegasus_10ms' */
#endif

    /* SignalConversion generated from: '<S4>/VeCIDB_b_U0412_DiagEnbl' incorporates:
     *  Inport: '<Root>/VeCRDB_y_BPCM_HVChrgCurProf_SigSts'
     *  Inport: '<Root>/VeCRDB_y_BPCM_HVPwrMaxChgLT_SigSts'
     *  Inport: '<Root>/VeCRDB_y_BPCM_HVPwrMaxChgMT_SigSts'
     *  Inport: '<Root>/VeCRDB_y_BPCM_HVPwrMaxChgST_SigSts'
     *  Inport: '<Root>/VeCRDB_y_BPCM_HVPwrMxDchgLT_SigSts'
     *  Inport: '<Root>/VeCRDB_y_BPCM_HVPwrMxDchgMT_SigSts'
     *  Inport: '<Root>/VeCRDB_y_BPCM_HVPwrMxDchgST_SigSts'
     *  Inport: '<Root>/VeCRDB_y_BPCM_HV_Current_SigSts'
     *  Inport: '<Root>/VeCRDB_y_BPCM_HV_IntVolt_SigSts'
     *  Inport: '<Root>/VeCRDB_y_BPCM_HV_SOC_SigSts'
     *  Inport: '<Root>/VeCRDB_y_BPCM_HV_Temp_Avg_SigSts'
     *  Inport: '<Root>/VeCRDB_y_BPCM_HV_Temp_Max_SigSts'
     *  Inport: '<Root>/VeCRDB_y_BPCM_HV_Temp_Min_SigSts'
     *  Inport: '<Root>/VeCRDB_y_BPCM_HV_TracBusSts_SigSts'
     *  SignalConversion generated from: '<S4>/VeCIDB_e_BATTERY_HV_VLIMITS_ErrState'
     *  SignalConversion generated from: '<S5>/VeCIDB_e_BATTERY_HV_VLIMITS_ErrState'
     */
    Rte_IrvWrite_CIDB_MedTEB_VeCIDB_b_U0412_DiagEnbl_IRV
        (CIDB_ac_B.VariantMergeForOutportVeCIDB_b_U0412_Dia);

    /* End of Outputs for SubSystem: '<S4>/U0412_Variant_Pegasus_Corebev_Bluen_10ms' */
#endif

    /* End of SignalConversion generated from: '<S4>/VeCRDB_y_BPCM_HV_Current_SigSts' */

    /* SignalConversion generated from: '<S4>/VeSR1B_y_KeyInIgnSts_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_KeyInIgnSts_SigSts'
     *  SignalConversion generated from: '<S3>/VeCIDB_e_BCM_FD_12_ErrState'
     *  SignalConversion generated from: '<S4>/VeCIDB_e_BCM_FD_10_ErrState'
     *  SignalConversion generated from: '<S4>/VeCIDB_e_BCM_FD_12_ErrState'
     *  SignalConversion generated from: '<S4>/VeCIDB_e_BCM_FD_9_ErrState'
     *  SignalConversion generated from: '<S6>/VeCIDB_e_BCM_FD_10_ErrState'
     *  SignalConversion generated from: '<S6>/VeCIDB_e_BCM_FD_9_ErrState'
     */
#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

    (void)Rte_Read_VeSR1B_y_KeyInIgnSts_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_KeyInIgnSt);
    CIDB_ac_B.TmpSignalConversionAtVeCIDB_e_BCM_FD_9_d =
        Rte_IrvRead_CIDB_MedTEB_VeCIDB_e_BCM_FD_9_ErrState_IRV();
    CIDB_ac_B.TmpSignalConversionAtVeCIDB_e_BCM_FD_1_b =
        Rte_IrvRead_CIDB_MedTEB_VeCIDB_e_BCM_FD_10_ErrState_IRV();
    CIDB_ac_B.TmpSignalConversionAtVeCIDB_e_BCM_FD_1_j =
        Rte_IrvRead_CIDB_MedTEB_VeCIDB_e_BCM_FD_12_ErrState_IRV();

#endif

    /* End of SignalConversion generated from: '<S4>/VeSR1B_y_KeyInIgnSts_SigSts' */

    /* SignalConversion generated from: '<S4>/VeSR1B_y_OperationalModeSts_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_OperationalModeSts_SigSts'
     */
#if Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

    (void)Rte_Read_VeSR1B_y_OperationalModeSts_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_Operationa);

#endif

    /* End of SignalConversion generated from: '<S4>/VeSR1B_y_OperationalModeSts_SigSts' */

    /* SignalConversion generated from: '<S4>/VeCIDB_b_U0422_DiagnEnbl' */
#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

    /* Outputs for Atomic SubSystem: '<S4>/U0422_Variant_10ms' */
#if Rte_SysCon_Variant_CIDB_U0422_BLUEN

    /* Outputs for Atomic SubSystem: '<S157>/U0422_BLUEN_10ms' */
    CIDB_ac_U0422_BLUEN_10ms();

    /* End of Outputs for SubSystem: '<S157>/U0422_BLUEN_10ms' */
#elif Rte_SysCon_Variant_CIDB_U0422_Corebev

    /* Outputs for Atomic SubSystem: '<S157>/U0422_COREBEV_10ms' */
    CIDB_ac_U0422_COREBEV_10ms();

    /* End of Outputs for SubSystem: '<S157>/U0422_COREBEV_10ms' */
#elif Rte_SysCon_Variant_CIDB_U0422_Pegasus

    /* Outputs for Atomic SubSystem: '<S157>/U0422_Pegasus_10ms' */
    CIDB_ac_U0422_Pegasus_10ms();

    /* End of Outputs for SubSystem: '<S157>/U0422_Pegasus_10ms' */
#endif

    /* SignalConversion generated from: '<S4>/VeCIDB_b_U0422_DiagnEnbl' */
    Rte_IrvWrite_CIDB_MedTEB_VeCIDB_b_U0422_DiagnEnbl1_IRV
        (CIDB_ac_B.VariantMergeForOutportVeCIDB_b_U0422_Dia);

    /* End of Outputs for SubSystem: '<S4>/U0422_Variant_10ms' */
#endif

    /* End of SignalConversion generated from: '<S4>/VeCIDB_b_U0422_DiagnEnbl' */

    /* SignalConversion generated from: '<S4>/VeSR1B_y_LHFWheelSpeed_FD3_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_LHFWheelSpeed_FD3_SigSts'
     *  Inport: '<Root>/VeSR1B_y_LHF_Spin_FD3_SigSts'
     *  Inport: '<Root>/VeSR1B_y_LHRWheelSpeed_FD3_SigSts'
     *  Inport: '<Root>/VeSR1B_y_LHR_Spin_FD3_SigSts'
     *  SignalConversion generated from: '<S4>/VeSR1B_y_LHF_Spin_FD3_SigSts'
     *  SignalConversion generated from: '<S4>/VeSR1B_y_LHRWheelSpeed_FD3_SigSts'
     *  SignalConversion generated from: '<S4>/VeSR1B_y_LHR_Spin_FD3_SigSts'
     */
#if Rte_SysCon_Variant_CIDB_U0415_BLUEN || Rte_SysCon_Variant_CIDB_U0415_Corebev || Rte_SysCon_Variant_CIDB_U0415_Pegasus

    (void)Rte_Read_VeSR1B_y_LHFWheelSpeed_FD3_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_LHFWheelSp);
    (void)Rte_Read_VeSR1B_y_LHF_Spin_FD3_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_LHF_Spin_F);
    (void)Rte_Read_VeSR1B_y_LHRWheelSpeed_FD3_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_LHRWheelSp);
    (void)Rte_Read_VeSR1B_y_LHR_Spin_FD3_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_LHR_Spin_F);

#endif

    /* End of SignalConversion generated from: '<S4>/VeSR1B_y_LHFWheelSpeed_FD3_SigSts' */

    /* SignalConversion generated from: '<S4>/VeSR1B_y_LongAcceleration_BSM_FD3_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_LongAcceleration_BSM_FD3_SigSts'
     */
#if Rte_SysCon_Variant_CIDB_U0415_Corebev || Rte_SysCon_Variant_CIDB_U0415_Pegasus

    (void)Rte_Read_VeSR1B_y_LongAcceleration_BSM_FD3_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_LongAccele);

#endif

    /* End of SignalConversion generated from: '<S4>/VeSR1B_y_LongAcceleration_BSM_FD3_SigSts' */

    /* SignalConversion generated from: '<S4>/VeSR1B_y_LongAcceltn_BSM_FD3_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_LongAcceltn_BSM_FD3_SigSts'
     */
#if Rte_SysCon_Variant_CIDB_U0415_BLUEN

    (void)Rte_Read_VeSR1B_y_LongAcceltn_BSM_FD3_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_LongAccelt);

#endif

    /* End of SignalConversion generated from: '<S4>/VeSR1B_y_LongAcceltn_BSM_FD3_SigSts' */

    /* SignalConversion generated from: '<S4>/VeSR1B_y_RHFWheelSpeed_FD3_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_RHFWheelSpeed_FD3_SigSts'
     *  Inport: '<Root>/VeSR1B_y_RHF_Spin_FD3_SigSts'
     *  Inport: '<Root>/VeSR1B_y_RHRWheelSpeed_FD3_SigSts'
     *  Inport: '<Root>/VeSR1B_y_RHR_Spin_FD3_SigSts'
     *  SignalConversion generated from: '<S4>/VeSR1B_y_RHF_Spin_FD3_SigSts'
     *  SignalConversion generated from: '<S4>/VeSR1B_y_RHRWheelSpeed_FD3_SigSts'
     *  SignalConversion generated from: '<S4>/VeSR1B_y_RHR_Spin_FD3_SigSts'
     */
#if Rte_SysCon_Variant_CIDB_U0415_BLUEN || Rte_SysCon_Variant_CIDB_U0415_Corebev || Rte_SysCon_Variant_CIDB_U0415_Pegasus

    (void)Rte_Read_VeSR1B_y_RHFWheelSpeed_FD3_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_RHFWheelSp);
    (void)Rte_Read_VeSR1B_y_RHF_Spin_FD3_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_RHF_Spin_F);
    (void)Rte_Read_VeSR1B_y_RHRWheelSpeed_FD3_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_RHRWheelSp);
    (void)Rte_Read_VeSR1B_y_RHR_Spin_FD3_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_RHR_Spin_F);

#endif

    /* End of SignalConversion generated from: '<S4>/VeSR1B_y_RHFWheelSpeed_FD3_SigSts' */

    /* SignalConversion generated from: '<S4>/VeSR1B_y_VehiclSpeedVSOSig_FD14_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_VehiclSpeedVSOSig_FD14_SigSts'
     */
#if Rte_SysCon_Variant_CIDB_U0415_Corebev || Rte_SysCon_Variant_CIDB_U0415_Pegasus

    (void)Rte_Read_VeSR1B_y_VehiclSpeedVSOSig_FD14_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_VehiclSpee);

#endif

    /* End of SignalConversion generated from: '<S4>/VeSR1B_y_VehiclSpeedVSOSig_FD14_SigSts' */

    /* SignalConversion generated from: '<S4>/VeSR1B_y_VehicleSpeedVSOSig_FD3_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_VehicleSpeedVSOSig_FD3_SigSts'
     */
#if Rte_SysCon_Variant_CIDB_U0415_BLUEN || Rte_SysCon_Variant_CIDB_U0415_Corebev || Rte_SysCon_Variant_CIDB_U0415_Pegasus

    /* Outputs for Atomic SubSystem: '<S4>/U0415_Variant_Pegasus_Corebev_Bluen_10ms' */
    (void)Rte_Read_VeSR1B_y_VehicleSpeedVSOSig_FD3_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_VehicleSpe);

#if Rte_SysCon_Variant_CIDB_U0415_BLUEN

    /* Outputs for Atomic SubSystem: '<S156>/U0415_Bluen_10ms' */
    CIDB_ac_U0415_Bluen_10ms();

    /* End of Outputs for SubSystem: '<S156>/U0415_Bluen_10ms' */
#elif Rte_SysCon_Variant_CIDB_U0415_Corebev

    /* Outputs for Atomic SubSystem: '<S156>/U0415_COREBEV_10ms' */
    CIDB_ac_U0415_COREBEV_10ms();

    /* End of Outputs for SubSystem: '<S156>/U0415_COREBEV_10ms' */
#elif Rte_SysCon_Variant_CIDB_U0415_Pegasus

    /* Outputs for Atomic SubSystem: '<S156>/U0415_Pegasus_10ms' */
    CIDB_ac_U0415_Pegasus_10ms();

    /* End of Outputs for SubSystem: '<S156>/U0415_Pegasus_10ms' */
#endif

    /* End of Outputs for SubSystem: '<S4>/U0415_Variant_Pegasus_Corebev_Bluen_10ms' */
#endif

    /* End of SignalConversion generated from: '<S4>/VeSR1B_y_VehicleSpeedVSOSig_FD3_SigSts' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
}

/* Model step function for TID2 */
FUNC(void, CIDB_CODE) CIDB_MedTED(void) /* Explicit Task: MedTED */
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/ImplausibleMgmt_20ms'
     */
    /* DataStoreWrite: '<S5>/Data Store Write3' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_DM_PICM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_DM_PICM_Value
        (&CIDB_ac_DW.StatusByte_InvData_DM_PICM);

    /* DataStoreWrite: '<S5>/Data Store Write2' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_BCCM_C'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_BCCM_C_Value
        (&CIDB_ac_DW.StatusByte_InvData_OBCM);

    /* DataStoreWrite: '<S5>/Data Store Write1' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_ESM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_ESM_Value
        (&CIDB_ac_DW.StatusByte_InvData_ESM);

    /* SignalConversion generated from: '<S5>/VeCIDB_b_U0412_DiagEnbl' incorporates:
     *  SignalConversion generated from: '<S4>/VeCIDB_b_U0412_DiagEnbl'
     */
#if Rte_SysCon_Variant_CIDB_U0412_BLUEN || Rte_SysCon_Variant_CIDB_U0412_Corebev || Rte_SysCon_Variant_CIDB_U0412_Pegasus

    CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_U0412_Diag =
        Rte_IrvRead_CIDB_MedTED_VeCIDB_b_U0412_DiagEnbl_IRV();

#endif

    /* End of SignalConversion generated from: '<S5>/VeCIDB_b_U0412_DiagEnbl' */

    /* SignalConversion generated from: '<S5>/VeCIDB_b_RstDiagCntr' incorporates:
     *  SignalConversion generated from: '<S4>/VeCIDB_b_RstDiagCntr_out'
     */
#if Rte_SysCon_Variant_CIDB_U0404_BLUEN || Rte_SysCon_Variant_CIDB_U0404_Corebev || Rte_SysCon_Variant_CIDB_U0404_Pegasus || Rte_SysCon_Variant_CIDB_U0412_BLUEN || Rte_SysCon_Variant_CIDB_U0412_Corebev || Rte_SysCon_Variant_CIDB_U0412_Pegasus || Rte_SysCon_Variant_CIDB_U048D_BLUEN || Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_RstDia_e1h =
        Rte_IrvRead_CIDB_MedTED_VeCIDB_b_RstDiagCntr_out1_IRV();

#endif

    /* End of SignalConversion generated from: '<S5>/VeCIDB_b_RstDiagCntr' */

    /* SignalConversion generated from: '<S5>/VeCRDB_y_BPCM_Cell_Volt_Max_SigSts' incorporates:
     *  Inport: '<Root>/VeCRDB_y_BPCM_Cell_Volt_Max_SigSts'
     *  Inport: '<Root>/VeCRDB_y_BPCM_Cell_Volt_Min_SigSts'
     *  SignalConversion generated from: '<S5>/VeCRDB_y_BPCM_Cell_Volt_Min_SigSts'
     */
#if Rte_SysCon_Variant_CIDB_U0412_Corebev || Rte_SysCon_Variant_CIDB_U0412_Pegasus

    (void)Rte_Read_VeCRDB_y_BPCM_Cell_Volt_Max_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_Cell_);
    (void)Rte_Read_VeCRDB_y_BPCM_Cell_Volt_Min_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BPCM_Cel_n);

#endif

    /* End of SignalConversion generated from: '<S5>/VeCRDB_y_BPCM_Cell_Volt_Max_SigSts' */

    /* SignalConversion generated from: '<S5>/VeCIDB_b_BATTERY_HV_VLIMITS_CalDiagEnbl' */
#if Rte_SysCon_Variant_CIDB_U0412_BLUEN || Rte_SysCon_Variant_CIDB_U0412_Corebev || Rte_SysCon_Variant_CIDB_U0412_Pegasus

    /* Outputs for Atomic SubSystem: '<S5>/U0412_Variant_20ms' */
#if Rte_SysCon_Variant_CIDB_U0412_BLUEN

    /* Outputs for Atomic SubSystem: '<S477>/U0412_BLUEN_20ms' */
    CIDB_ac_U0412_BLUEN_20ms();

    /* End of Outputs for SubSystem: '<S477>/U0412_BLUEN_20ms' */
#elif Rte_SysCon_Variant_CIDB_U0412_Corebev

    /* Outputs for Atomic SubSystem: '<S477>/U0412_COREBEV_20ms' */
    CIDB_ac_U0412_COREBEV_20ms();

    /* End of Outputs for SubSystem: '<S477>/U0412_COREBEV_20ms' */
#elif Rte_SysCon_Variant_CIDB_U0412_Pegasus

    /* Outputs for Atomic SubSystem: '<S477>/U0412_Pegasus_20ms' */
    CIDB_ac_U0412_Pegasus_20ms();

    /* End of Outputs for SubSystem: '<S477>/U0412_Pegasus_20ms' */
#endif

    /* SignalConversion generated from: '<S5>/VeCIDB_b_BATTERY_HV_VLIMITS_CalDiagEnbl' */
    Rte_IrvWrite_CIDB_MedTED_VeCIDB_b_BATTERY_HV_VLIMITS_CalDiagEnbl_IRV
        (CIDB_ac_B.VariantMergeForOutportVeCIDB_b_BATTERY_H);

    /* End of Outputs for SubSystem: '<S5>/U0412_Variant_20ms' */
#endif

    /* End of SignalConversion generated from: '<S5>/VeCIDB_b_BATTERY_HV_VLIMITS_CalDiagEnbl' */

    /* SignalConversion generated from: '<S5>/VeCIDB_b_IsDiagGlobalConditionsValid' incorporates:
     *  SignalConversion generated from: '<S4>/VeCIDB_b_IsDiagGlobalConditionsValid_out'
     */
#if Rte_SysCon_Variant_CIDB_U0404_BLUEN || Rte_SysCon_Variant_CIDB_U0404_Corebev || Rte_SysCon_Variant_CIDB_U0404_Pegasus || Rte_SysCon_Variant_CIDB_U048D_BLUEN || Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_IsDiagGl_e =
        Rte_IrvRead_CIDB_MedTED_VeCIDB_b_IsDiagGlobalConditionsValid_out1_IRV();

#endif

    /* End of SignalConversion generated from: '<S5>/VeCIDB_b_IsDiagGlobalConditionsValid' */

    /* SignalConversion generated from: '<S5>/VeCIDB_b_DUALCHARGER_THERMAL_CalDiagEnbl' incorporates:
     *  Inport: '<Root>/VeCRDB_y_HVCMS_EVSEMaxCurLm_SigSts'
     *  Inport: '<Root>/VeCRDB_y_HVCMS_EVSEMaxVltLm_SigSts'
     *  Inport: '<Root>/VeCRDB_y_HVCMS_EVSEMinCurLm_SigSts'
     *  Inport: '<Root>/VeCRDB_y_HVCMS_EVSEMinVltLm_SigSts'
     *  Inport: '<Root>/VeCRDB_y_HVCMS_EVSEPrsntCur_SigSts'
     *  Inport: '<Root>/VeCRDB_y_HVCMS_EVSEPrsntVlt_SigSts'
     *  Inport: '<Root>/VeCRDB_y_HVCMS_ResponseCode_SigSts'
     *  SignalConversion generated from: '<S3>/VeCIDB_b_HV_CHARGER1_CalDiagEnbl'
     *  SignalConversion generated from: '<S5>/VeCIDB_b_HV_CHARGER1_CalDiagEnbl'
     *  SignalConversion generated from: '<S5>/VeCIDB_b_HV_CHARGER2_CalDiagEnbl'
     *  SignalConversion generated from: '<S5>/VeCRDB_y_HVCMS_EVSEMaxCurLm_SigSts'
     *  SignalConversion generated from: '<S5>/VeCRDB_y_HVCMS_EVSEMaxVltLm_SigSts'
     *  SignalConversion generated from: '<S5>/VeCRDB_y_HVCMS_EVSEMinCurLm_SigSts'
     *  SignalConversion generated from: '<S5>/VeCRDB_y_HVCMS_EVSEMinVltLm_SigSts'
     *  SignalConversion generated from: '<S5>/VeCRDB_y_HVCMS_EVSEPrsntCur_SigSts'
     *  SignalConversion generated from: '<S5>/VeCRDB_y_HVCMS_EVSEPrsntVlt_SigSts'
     *  SignalConversion generated from: '<S5>/VeCRDB_y_HVCMS_ResponseCode_SigSts'
     *  SignalConversion generated from: '<S6>/VeCIDB_b_DUALCHARGER_THERMAL_CalDiagEnbl'
     *  SignalConversion generated from: '<S6>/VeCIDB_b_HV_CHARGER2_CalDiagEnbl'
     */
#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_DUALCHAR_j =
        Rte_IrvRead_CIDB_MedTED_VeCIDB_b_DUALCHARGER_THERMAL_CalDiagEnbl_IRV();
    CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_HV_CHARG_o =
        Rte_IrvRead_CIDB_MedTED_VeCIDB_b_HV_CHARGER1_CalDiagEnbl_IRV();
    CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_HV_CHARG_l =
        Rte_IrvRead_CIDB_MedTED_VeCIDB_b_HV_CHARGER2_CalDiagEnbl_IRV();
    (void)Rte_Read_VeCRDB_y_HVCMS_EVSEMaxCurLm_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_HVCMS_EVSE);
    (void)Rte_Read_VeCRDB_y_HVCMS_EVSEMaxVltLm_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_HVCMS_EV_g);
    (void)Rte_Read_VeCRDB_y_HVCMS_EVSEMinCurLm_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_HVCMS_EV_n);
    (void)Rte_Read_VeCRDB_y_HVCMS_EVSEMinVltLm_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_HVCMS_EV_m);
    (void)Rte_Read_VeCRDB_y_HVCMS_EVSEPrsntCur_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_HVCMS_E_no);
    (void)Rte_Read_VeCRDB_y_HVCMS_EVSEPrsntVlt_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_HVCMS_EV_a);
    (void)Rte_Read_VeCRDB_y_HVCMS_ResponseCode_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_HVCMS_Resp);

#endif

    /* End of SignalConversion generated from: '<S5>/VeCIDB_b_DUALCHARGER_THERMAL_CalDiagEnbl' */

    /* SignalConversion generated from: '<S5>/VeCRDB_y_APM_CtrlSts_Fbk_SigSts' incorporates:
     *  Inport: '<Root>/VeCRDB_y_APM_CtrlSts_Fbk_SigSts'
     *  Inport: '<Root>/VeCRDB_y_APM_FailureReason_SigSts'
     *  Inport: '<Root>/VeCRDB_y_APM_FailureType_SigSts'
     *  Inport: '<Root>/VeCRDB_y_APM_HV_I_Fbk_SigSts'
     *  Inport: '<Root>/VeCRDB_y_APM_HV_V_Fbk_SigSts'
     *  Inport: '<Root>/VeCRDB_y_APM_IdcHvSetPFdbk_SigSts'
     *  Inport: '<Root>/VeCRDB_y_APM_LV_I_Fbk_SigSts'
     *  Inport: '<Root>/VeCRDB_y_APM_LV_V_Fbk_SigSts'
     *  Inport: '<Root>/VeCRDB_y_APM_PSFB_Temp1_SigSts'
     *  Inport: '<Root>/VeCRDB_y_APM_PSFB_Temp2_SigSts'
     *  SignalConversion generated from: '<S5>/VeCRDB_y_APM_FailureReason_SigSts'
     *  SignalConversion generated from: '<S5>/VeCRDB_y_APM_FailureType_SigSts'
     *  SignalConversion generated from: '<S5>/VeCRDB_y_APM_HV_I_Fbk_SigSts'
     *  SignalConversion generated from: '<S5>/VeCRDB_y_APM_HV_V_Fbk_SigSts'
     *  SignalConversion generated from: '<S5>/VeCRDB_y_APM_IdcHvSetPFdbk_SigSts'
     *  SignalConversion generated from: '<S5>/VeCRDB_y_APM_LV_I_Fbk_SigSts'
     *  SignalConversion generated from: '<S5>/VeCRDB_y_APM_LV_V_Fbk_SigSts'
     *  SignalConversion generated from: '<S5>/VeCRDB_y_APM_PSFB_Temp1_SigSts'
     *  SignalConversion generated from: '<S5>/VeCRDB_y_APM_PSFB_Temp2_SigSts'
     */
#if Rte_SysCon_Variant_CIDB_U048D_BLUEN || Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    (void)Rte_Read_VeCRDB_y_APM_CtrlSts_Fbk_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_APM_CtrlSt);
    (void)Rte_Read_VeCRDB_y_APM_FailureReason_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_APM_Failur);
    (void)Rte_Read_VeCRDB_y_APM_FailureType_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_APM_Fail_k);
    (void)Rte_Read_VeCRDB_y_APM_HV_I_Fbk_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_APM_HV_I_F);
    (void)Rte_Read_VeCRDB_y_APM_HV_V_Fbk_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_APM_HV_V_F);
    (void)Rte_Read_VeCRDB_y_APM_IdcHvSetPFdbk_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_APM_IdcHvS);
    (void)Rte_Read_VeCRDB_y_APM_LV_I_Fbk_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_APM_LV_I_F);
    (void)Rte_Read_VeCRDB_y_APM_LV_V_Fbk_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_APM_LV_V_F);
    (void)Rte_Read_VeCRDB_y_APM_PSFB_Temp2_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_APM_PSFB_T);
    (void)Rte_Read_VeCRDB_y_APM_PSFB_Temp1_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_APM_PSFB_k);

#endif

    /* End of SignalConversion generated from: '<S5>/VeCRDB_y_APM_CtrlSts_Fbk_SigSts' */

    /* SignalConversion generated from: '<S5>/VeCIDB_e_DUALCHARGER_THERMAL_ErrState' incorporates:
     *  SignalConversion generated from: '<S3>/VeCIDB_e_HV_CHARGER1_ErrState'
     *  SignalConversion generated from: '<S5>/VeCIDB_b_U049C_DiagEnbl'
     *  SignalConversion generated from: '<S5>/VeCIDB_e_HV_CHARGER1_ErrState'
     *  SignalConversion generated from: '<S5>/VeCIDB_e_HV_CHARGER2_ErrState'
     *  SignalConversion generated from: '<S6>/VeCIDB_e_DUALCHARGER_THERMAL_ErrState'
     *  SignalConversion generated from: '<S6>/VeCIDB_e_HV_CHARGER2_ErrState'
     */
#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    /* Outputs for Atomic SubSystem: '<S5>/U049C_Variant_Pegasus_Corebev_20ms' */
    CIDB_ac_B.TmpSignalConversionAtVeCIDB_e_DUALCHAR_p =
        Rte_IrvRead_CIDB_MedTED_VeCIDB_e_DUALCHARGER_THERMAL_ErrState_IRV();
    CIDB_ac_B.TmpSignalConversionAtVeCIDB_e_HV_CHARG_f =
        Rte_IrvRead_CIDB_MedTED_VeCIDB_e_HV_CHARGER2_ErrState_IRV();
    CIDB_ac_B.TmpSignalConversionAtVeCIDB_e_HV_CHARG_h =
        Rte_IrvRead_CIDB_MedTED_VeCIDB_e_HV_CHARGER1_ErrState_IRV();

#if Rte_SysCon_Variant_CIDB_U049C_Corebev

    /* Outputs for Atomic SubSystem: '<S479>/U049C_COREBEV_20ms' */
    CIDB_ac_U049C_COREBEV_20ms();

    /* End of Outputs for SubSystem: '<S479>/U049C_COREBEV_20ms' */
#elif Rte_SysCon_Variant_CIDB_U049C_Pegasus

    /* Outputs for Atomic SubSystem: '<S479>/U049C_Pegasus_20ms' */
    CIDB_ac_U049C_Pegasus_20ms();

    /* End of Outputs for SubSystem: '<S479>/U049C_Pegasus_20ms' */
#endif

    /* SignalConversion generated from: '<S5>/VeCIDB_b_U049C_DiagEnbl' incorporates:
     *  SignalConversion generated from: '<S3>/VeCIDB_e_HV_CHARGER1_ErrState'
     *  SignalConversion generated from: '<S5>/VeCIDB_e_DUALCHARGER_THERMAL_ErrState'
     *  SignalConversion generated from: '<S5>/VeCIDB_e_HV_CHARGER1_ErrState'
     *  SignalConversion generated from: '<S5>/VeCIDB_e_HV_CHARGER2_ErrState'
     *  SignalConversion generated from: '<S6>/VeCIDB_e_DUALCHARGER_THERMAL_ErrState'
     *  SignalConversion generated from: '<S6>/VeCIDB_e_HV_CHARGER2_ErrState'
     */
    Rte_IrvWrite_CIDB_MedTED_VeCIDB_b_U049C_DiagEnbl1_IRV
        (CIDB_ac_B.VeCIDB_b_U049C_DiagEnbl);

    /* End of Outputs for SubSystem: '<S5>/U049C_Variant_Pegasus_Corebev_20ms' */
#endif

    /* End of SignalConversion generated from: '<S5>/VeCIDB_e_DUALCHARGER_THERMAL_ErrState' */

    /* SignalConversion generated from: '<S5>/VeCIDB_e_BATTERY_HV_VLIMITS_ErrState' */
#if Rte_SysCon_Variant_CIDB_U0412_BLUEN || Rte_SysCon_Variant_CIDB_U0412_Corebev || Rte_SysCon_Variant_CIDB_U0412_Pegasus

    /* SignalConversion generated from: '<S5>/VeCIDB_e_BATTERY_HV_VLIMITS_ErrState' incorporates:
     *  VariantMerge generated from: '<S477>/VeCIDB_e_BATTERY_HV_VLIMITS_ErrState'
     */
    Rte_IrvWrite_CIDB_MedTED_VeCIDB_e_BATTERY_HV_VLIMITS_ErrState_IRV
        (CIDB_ac_B.VeCIDB_e_BATTERY_HV_VLIMITS_ErrState);

#endif

    /* End of SignalConversion generated from: '<S5>/VeCIDB_e_BATTERY_HV_VLIMITS_ErrState' */

    /* SignalConversion generated from: '<S5>/VeSR1B_y_ShiftLeverPositionReq_FD3_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_ShiftLeverPositionReq_FD3_SigSts'
     */
#if Rte_SysCon_Variant_CIDB_U0404_Corebev || Rte_SysCon_Variant_CIDB_U0404_Pegasus

    (void)Rte_Read_VeSR1B_y_ShiftLeverPositionReq_FD3_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_ShiftLever);

#endif

    /* End of SignalConversion generated from: '<S5>/VeSR1B_y_ShiftLeverPositionReq_FD3_SigSts' */

    /* SignalConversion generated from: '<S5>/VeSR1B_y_ShiftLeverPosnReq_FD3_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_ShiftLeverPosnReq_FD3_SigSts'
     */
#if Rte_SysCon_Variant_CIDB_U0404_BLUEN

    (void)Rte_Read_VeSR1B_y_ShiftLeverPosnReq_FD3_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_ShiftLev_p);

#endif

    /* End of SignalConversion generated from: '<S5>/VeSR1B_y_ShiftLeverPosnReq_FD3_SigSts' */
#if Rte_SysCon_Variant_CIDB_U0404_BLUEN || Rte_SysCon_Variant_CIDB_U0404_Corebev || Rte_SysCon_Variant_CIDB_U0404_Pegasus

    /* Outputs for Atomic SubSystem: '<S5>/U0404_Variant_Pegasus_Corebev_BLUEN_20ms' */
#if Rte_SysCon_Variant_CIDB_U0404_BLUEN

    /* Outputs for Atomic SubSystem: '<S476>/U0404_BLUEN_20ms' */
    CIDB_ac_U0404_BLUEN_20ms();

    /* End of Outputs for SubSystem: '<S476>/U0404_BLUEN_20ms' */
#elif Rte_SysCon_Variant_CIDB_U0404_Corebev

    /* Outputs for Atomic SubSystem: '<S476>/U0404_COREBEV_20ms' */
    CIDB_ac_U0404_COREBEV_20ms();

    /* End of Outputs for SubSystem: '<S476>/U0404_COREBEV_20ms' */
#elif Rte_SysCon_Variant_CIDB_U0404_Pegasus

    /* Outputs for Atomic SubSystem: '<S476>/U0404_Pegasus_20ms' */
    CIDB_ac_U0404_Pegasus_20ms();

    /* End of Outputs for SubSystem: '<S476>/U0404_Pegasus_20ms' */
#endif

    /* End of Outputs for SubSystem: '<S5>/U0404_Variant_Pegasus_Corebev_BLUEN_20ms' */
#endif

#if Rte_SysCon_Variant_CIDB_U048D_BLUEN

    /* Outputs for Atomic SubSystem: '<S5>/U048D_Variant_Bluen_20ms' */
    /* Outputs for Atomic SubSystem: '<S478>/U048D_BLUEN_20ms' */
    CIDB_ac_U048D_BLUEN_20ms();

    /* End of Outputs for SubSystem: '<S478>/U048D_BLUEN_20ms' */
    /* End of Outputs for SubSystem: '<S5>/U048D_Variant_Bluen_20ms' */
#endif

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
}

/* Model step function for TID3 */
FUNC(void, CIDB_CODE) CIDB_MedTEH(void) /* Explicit Task: MedTEH */
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/ImplausibleMgmt_100ms'
     */
    /* SignalConversion generated from: '<S3>/VeCIDB_b_RstDiagCntr' incorporates:
     *  SignalConversion generated from: '<S4>/VeCIDB_b_RstDiagCntr_out'
     */
#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus || Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_RstDiag_e1 =
        Rte_IrvRead_CIDB_MedTEH_VeCIDB_b_RstDiagCntr_out1_IRV();

#endif

    /* End of SignalConversion generated from: '<S3>/VeCIDB_b_RstDiagCntr' */

    /* SignalConversion generated from: '<S3>/VeCIDB_b_U0422_DiagEnbl' incorporates:
     *  Inport: '<Root>/VeSR1B_y_PreCondCabinSts_SigSts'
     *  SignalConversion generated from: '<S3>/VeCIDB_b_BCM_FD_12_CalDiagEnbl'
     *  SignalConversion generated from: '<S3>/VeSR1B_y_PreCondCabinSts_SigSts'
     *  SignalConversion generated from: '<S4>/VeCIDB_b_U0422_DiagnEnbl'
     */
#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

    /* Outputs for Atomic SubSystem: '<S3>/U0422_Variant_Pegasus_Corebev_Bluen_100ms' */
    CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_U0422_Di_p =
        Rte_IrvRead_CIDB_MedTEH_VeCIDB_b_U0422_DiagnEnbl1_IRV();
    (void)Rte_Read_VeSR1B_y_PreCondCabinSts_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_PreCondCab);

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN

    /* Outputs for Atomic SubSystem: '<S95>/U0422_Bluen_100ms' */
    CIDB_ac_U0422_Bluen_100ms();

    /* End of Outputs for SubSystem: '<S95>/U0422_Bluen_100ms' */
#elif Rte_SysCon_Variant_CIDB_U0422_Corebev

    /* Outputs for Atomic SubSystem: '<S95>/U0422_COREBEV_100ms' */
    CIDB_ac_U0422_COREBEV_100ms();

    /* End of Outputs for SubSystem: '<S95>/U0422_COREBEV_100ms' */
#elif Rte_SysCon_Variant_CIDB_U0422_Pegasus

    /* Outputs for Atomic SubSystem: '<S95>/U0422_Pegasus_100ms' */
    CIDB_ac_U0422_Pegasus_100ms();

    /* End of Outputs for SubSystem: '<S95>/U0422_Pegasus_100ms' */
#endif

    /* SignalConversion generated from: '<S3>/VeCIDB_b_BCM_FD_12_CalDiagEnbl' incorporates:
     *  Inport: '<Root>/VeSR1B_y_PreCondCabinSts_SigSts'
     *  SignalConversion generated from: '<S4>/VeCIDB_b_U0422_DiagnEnbl'
     */
    Rte_IrvWrite_CIDB_MedTEH_VeCIDB_b_BCM_FD_12_CalDiagEnbl_IRV
        (CIDB_ac_B.VariantMergeForOutportVeCIDB_b_BCM_FD_12);

    /* End of Outputs for SubSystem: '<S3>/U0422_Variant_Pegasus_Corebev_Bluen_100ms' */
#endif

    /* End of SignalConversion generated from: '<S3>/VeCIDB_b_U0422_DiagEnbl' */

    /* SignalConversion generated from: '<S3>/VeCIDB_b_U057B_DiagEnbl' incorporates:
     *  Inport: '<Root>/VeCRDB_y_AC_Side_Curr1_SigSts'
     *  Inport: '<Root>/VeCRDB_y_AC_Side_Curr2_SigSts'
     *  Inport: '<Root>/VeCRDB_y_AC_Side_Curr3_SigSts'
     *  Inport: '<Root>/VeCRDB_y_AC_Side_Volt1_SigSts'
     *  Inport: '<Root>/VeCRDB_y_AC_Side_Volt2_SigSts'
     *  Inport: '<Root>/VeCRDB_y_AC_Side_Volt3_SigSts'
     *  Inport: '<Root>/VeCRDB_y_BatterySideCurrent_SigSts'
     *  Inport: '<Root>/VeCRDB_y_BatterySideVoltage_SigSts'
     *  Inport: '<Root>/VeCRDB_y_ChargeCurrent_SigSts'
     *  Inport: '<Root>/VeCRDB_y_ChrgCurrAvail_SigSts'
     *  Inport: '<Root>/VeCRDB_y_InputCurrentAvail_SigSts'
     *  Inport: '<Root>/VeCRDB_y_J1772_State_SigSts'
     *  Inport: '<Root>/VeCRDB_y_SuprtdProtocolName_SigSts'
     *  SignalConversion generated from: '<S3>/VeCIDB_b_HV_CHARGER1_CalDiagEnbl'
     *  SignalConversion generated from: '<S3>/VeCRDB_y_AC_Side_Curr1_SigSts'
     *  SignalConversion generated from: '<S3>/VeCRDB_y_AC_Side_Curr2_SigSts'
     *  SignalConversion generated from: '<S3>/VeCRDB_y_AC_Side_Curr3_SigSts'
     *  SignalConversion generated from: '<S3>/VeCRDB_y_AC_Side_Volt1_SigSts'
     *  SignalConversion generated from: '<S3>/VeCRDB_y_AC_Side_Volt2_SigSts'
     *  SignalConversion generated from: '<S3>/VeCRDB_y_AC_Side_Volt3_SigSts'
     *  SignalConversion generated from: '<S3>/VeCRDB_y_BatterySideCurrent_SigSts'
     *  SignalConversion generated from: '<S3>/VeCRDB_y_BatterySideVoltage_SigSts'
     *  SignalConversion generated from: '<S3>/VeCRDB_y_ChargeCurrent_SigSts'
     *  SignalConversion generated from: '<S3>/VeCRDB_y_ChrgCurrAvail_SigSts'
     *  SignalConversion generated from: '<S3>/VeCRDB_y_InputCurrentAvail_SigSts'
     *  SignalConversion generated from: '<S3>/VeCRDB_y_J1772_State_SigSts'
     *  SignalConversion generated from: '<S3>/VeCRDB_y_SuprtdProtocolName_SigSts'
     *  SignalConversion generated from: '<S5>/VeCIDB_b_U049C_DiagEnbl'
     */
#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    /* Outputs for Atomic SubSystem: '<S3>/U049C_Variant_Pegasus_COREBEV_100ms' */
    CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_U057B_Diag =
        Rte_IrvRead_CIDB_MedTEH_VeCIDB_b_U049C_DiagEnbl1_IRV();
    (void)Rte_Read_VeCRDB_y_AC_Side_Curr1_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_AC_Side_Cu);
    (void)Rte_Read_VeCRDB_y_AC_Side_Curr2_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_AC_Side__p);
    (void)Rte_Read_VeCRDB_y_AC_Side_Curr3_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_AC_Side__m);
    (void)Rte_Read_VeCRDB_y_AC_Side_Volt1_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_AC_Side_Vo);
    (void)Rte_Read_VeCRDB_y_AC_Side_Volt2_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_AC_Side__j);
    (void)Rte_Read_VeCRDB_y_AC_Side_Volt3_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_AC_Side__g);
    (void)Rte_Read_VeCRDB_y_BatterySideCurrent_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BatterySid);
    (void)Rte_Read_VeCRDB_y_BatterySideVoltage_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_BatteryS_i);
    (void)Rte_Read_VeCRDB_y_ChargeCurrent_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_ChargeCurr);
    (void)Rte_Read_VeCRDB_y_ChrgCurrAvail_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_ChrgCurrAv);
    (void)Rte_Read_VeCRDB_y_InputCurrentAvail_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_InputCurre);
    (void)Rte_Read_VeCRDB_y_J1772_State_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_J1772_Stat);
    (void)Rte_Read_VeCRDB_y_SuprtdProtocolName_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_SuprtdProt);

#if Rte_SysCon_Variant_CIDB_U049C_Corebev

    /* Outputs for Atomic SubSystem: '<S96>/U049C_COREBEV_100ms' */
    CIDB_ac_U049C_COREBEV_100ms();

    /* End of Outputs for SubSystem: '<S96>/U049C_COREBEV_100ms' */
#elif Rte_SysCon_Variant_CIDB_U049C_Pegasus

    /* Outputs for Atomic SubSystem: '<S96>/U049C_Pegasus_100ms' */
    CIDB_ac_U049C_Pegasus_100ms();

    /* End of Outputs for SubSystem: '<S96>/U049C_Pegasus_100ms' */
#endif

    /* SignalConversion generated from: '<S3>/VeCIDB_b_HV_CHARGER1_CalDiagEnbl' incorporates:
     *  Inport: '<Root>/VeCRDB_y_AC_Side_Curr1_SigSts'
     *  Inport: '<Root>/VeCRDB_y_AC_Side_Curr2_SigSts'
     *  Inport: '<Root>/VeCRDB_y_AC_Side_Curr3_SigSts'
     *  Inport: '<Root>/VeCRDB_y_AC_Side_Volt1_SigSts'
     *  Inport: '<Root>/VeCRDB_y_AC_Side_Volt2_SigSts'
     *  Inport: '<Root>/VeCRDB_y_AC_Side_Volt3_SigSts'
     *  Inport: '<Root>/VeCRDB_y_BatterySideCurrent_SigSts'
     *  Inport: '<Root>/VeCRDB_y_BatterySideVoltage_SigSts'
     *  Inport: '<Root>/VeCRDB_y_ChargeCurrent_SigSts'
     *  Inport: '<Root>/VeCRDB_y_ChrgCurrAvail_SigSts'
     *  Inport: '<Root>/VeCRDB_y_InputCurrentAvail_SigSts'
     *  Inport: '<Root>/VeCRDB_y_J1772_State_SigSts'
     *  Inport: '<Root>/VeCRDB_y_SuprtdProtocolName_SigSts'
     *  SignalConversion generated from: '<S5>/VeCIDB_b_U049C_DiagEnbl'
     */
    Rte_IrvWrite_CIDB_MedTEH_VeCIDB_b_HV_CHARGER1_CalDiagEnbl_IRV
        (CIDB_ac_B.VariantMergeForOutportVeCIDB_b_HV_CHAR_c);

    /* End of Outputs for SubSystem: '<S3>/U049C_Variant_Pegasus_COREBEV_100ms' */
#endif

    /* End of SignalConversion generated from: '<S3>/VeCIDB_b_U057B_DiagEnbl' */

    /* SignalConversion generated from: '<S3>/VeCIDB_e_BCM_FD_12_ErrState' */
#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

    /* SignalConversion generated from: '<S3>/VeCIDB_e_BCM_FD_12_ErrState' incorporates:
     *  VariantMerge generated from: '<S95>/VeCIDB_e_BCM_FD_12_ErrState'
     */
    Rte_IrvWrite_CIDB_MedTEH_VeCIDB_e_BCM_FD_12_ErrState_IRV
        (CIDB_ac_B.Status_edcdnm);

#endif

    /* End of SignalConversion generated from: '<S3>/VeCIDB_e_BCM_FD_12_ErrState' */

    /* SignalConversion generated from: '<S3>/VeCIDB_e_HV_CHARGER1_ErrState' */
#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    /* SignalConversion generated from: '<S3>/VeCIDB_e_HV_CHARGER1_ErrState' incorporates:
     *  VariantMerge generated from: '<S96>/VeCIDB_e_HV_CHARGER1_ErrState'
     */
    Rte_IrvWrite_CIDB_MedTEH_VeCIDB_e_HV_CHARGER1_ErrState_IRV
        (CIDB_ac_B.Status_edcdn);

#endif

    /* End of SignalConversion generated from: '<S3>/VeCIDB_e_HV_CHARGER1_ErrState' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
}

/* Model step function for TID4 */
FUNC(void, CIDB_CODE) CIDB_SlowTEB(void) /* Explicit Task: SlowTEB */
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/SlowTEB' incorporates:
     *  SubSystem: '<Root>/ImplausibleMgmt_250ms'
     */
    /* Logic: '<S6>/NOT' incorporates:
     *  UnitDelay: '<S6>/Unit Delay'
     */
    CIDB_ac_B.NOT = !CIDB_ac_DW.UnitDelay_DSTATE_g;

    /* SignalConversion generated from: '<S6>/VeCIDB_b_RstDiagCntr' incorporates:
     *  SignalConversion generated from: '<S4>/VeCIDB_b_RstDiagCntr_out'
     */
#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus || Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_RstDiagC_e =
        Rte_IrvRead_CIDB_SlowTEB_VeCIDB_b_RstDiagCntr_out1_IRV();

#endif

    /* End of SignalConversion generated from: '<S6>/VeCIDB_b_RstDiagCntr' */

    /* SignalConversion generated from: '<S6>/VeCIDB_b_U0422_DiagEnbl' incorporates:
     *  Inport: '<Root>/VeSR1B_y_CmdIgnSts_SigSts'
     *  Inport: '<Root>/VeSR1B_y_DoorLockLastElSts_SigSts'
     *  SignalConversion generated from: '<S4>/VeCIDB_b_U0422_DiagnEnbl'
     *  SignalConversion generated from: '<S6>/VeCIDB_b_BCM_FD_10_CalDiagEnbl'
     *  SignalConversion generated from: '<S6>/VeCIDB_b_BCM_FD_9_CalDiagEnbl'
     *  SignalConversion generated from: '<S6>/VeSR1B_y_CmdIgnSts_SigSts'
     *  SignalConversion generated from: '<S6>/VeSR1B_y_DoorLockLastElSts_SigSts'
     */
#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

    /* Outputs for Atomic SubSystem: '<S6>/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms' */
    CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_U0422_Diag =
        Rte_IrvRead_CIDB_SlowTEB_VeCIDB_b_U0422_DiagnEnbl1_IRV();
    (void)Rte_Read_VeSR1B_y_DoorLockLastElSts_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_DoorLockLa);
    (void)Rte_Read_VeSR1B_y_CmdIgnSts_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeSR1B_y_CmdIgnSts_);

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN

    /* Outputs for Atomic SubSystem: '<S698>/U0422_Bluen_250ms' */
    CIDB_ac_U0422_Bluen_250ms();

    /* End of Outputs for SubSystem: '<S698>/U0422_Bluen_250ms' */
#elif Rte_SysCon_Variant_CIDB_U0422_Corebev

    /* Outputs for Atomic SubSystem: '<S698>/U0422_Corebev_250ms' */
    CIDB_ac_U0422_Corebev_250ms();

    /* End of Outputs for SubSystem: '<S698>/U0422_Corebev_250ms' */
#elif Rte_SysCon_Variant_CIDB_U0422_Pegasus

    /* Outputs for Atomic SubSystem: '<S698>/U0422_Pegasus_250ms' */
    CIDB_ac_U0422_Pegasus_250ms();

    /* End of Outputs for SubSystem: '<S698>/U0422_Pegasus_250ms' */
#endif

    /* SignalConversion generated from: '<S6>/VeCIDB_b_BCM_FD_10_CalDiagEnbl' incorporates:
     *  Inport: '<Root>/VeSR1B_y_CmdIgnSts_SigSts'
     *  Inport: '<Root>/VeSR1B_y_DoorLockLastElSts_SigSts'
     *  SignalConversion generated from: '<S4>/VeCIDB_b_U0422_DiagnEnbl'
     */
    Rte_IrvWrite_CIDB_SlowTEB_VeCIDB_b_BCM_FD_10_CalDiagEnbl_IRV
        (CIDB_ac_B.VariantMergeForOutportVeCIDB_b_BCM_FD_10);

    /* SignalConversion generated from: '<S6>/VeCIDB_b_BCM_FD_9_CalDiagEnbl' */
    Rte_IrvWrite_CIDB_SlowTEB_VeCIDB_b_BCM_FD_9_CalDiagEnbl_IRV
        (CIDB_ac_B.VeCIDB_b_BCM_FD_9_CalDiagEnbl);

    /* End of Outputs for SubSystem: '<S6>/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms' */
#endif

    /* End of SignalConversion generated from: '<S6>/VeCIDB_b_U0422_DiagEnbl' */

    /* SignalConversion generated from: '<S6>/VeCIDB_b_U049C_DiagEnbl' incorporates:
     *  Inport: '<Root>/VeCRDB_y_ChrgFailSts_SigSts'
     *  Inport: '<Root>/VeCRDB_y_OBC_Temp1_SigSts'
     *  Inport: '<Root>/VeCRDB_y_OBC_Temp2_SigSts'
     *  Inport: '<Root>/VeCRDB_y_OBC_Temp3_SigSts'
     *  Inport: '<Root>/VeCRDB_y_OBC_Temp4_SigSts'
     *  SignalConversion generated from: '<S5>/VeCIDB_b_U049C_DiagEnbl'
     *  SignalConversion generated from: '<S6>/VeCIDB_b_DUALCHARGER_THERMAL_CalDiagEnbl'
     *  SignalConversion generated from: '<S6>/VeCIDB_b_HV_CHARGER2_CalDiagEnbl'
     *  SignalConversion generated from: '<S6>/VeCRDB_y_ChrgFailSts_SigSts'
     *  SignalConversion generated from: '<S6>/VeCRDB_y_OBC_Temp1_SigSts'
     *  SignalConversion generated from: '<S6>/VeCRDB_y_OBC_Temp2_SigSts'
     *  SignalConversion generated from: '<S6>/VeCRDB_y_OBC_Temp3_SigSts'
     *  SignalConversion generated from: '<S6>/VeCRDB_y_OBC_Temp4_SigSts'
     */
#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    /* Outputs for Atomic SubSystem: '<S6>/U049C_Variant_Pegasus_Corebev_500ms' */
    /* Outputs for Atomic SubSystem: '<S6>/U049C_Variant_Pegasus_Corebev_250ms' */
    CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_U049C_Diag =
        Rte_IrvRead_CIDB_SlowTEB_VeCIDB_b_U049C_DiagEnbl1_IRV();
    (void)Rte_Read_VeCRDB_y_OBC_Temp1_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_OBC_Temp1_);
    (void)Rte_Read_VeCRDB_y_OBC_Temp2_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_OBC_Temp2_);
    (void)Rte_Read_VeCRDB_y_OBC_Temp3_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_OBC_Temp3_);
    (void)Rte_Read_VeCRDB_y_OBC_Temp4_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_OBC_Temp4_);

#if Rte_SysCon_Variant_CIDB_U049C_Corebev

    /* Outputs for Atomic SubSystem: '<S699>/U049C_Corebev_250ms' */
    CIDB_ac_U049C_Corebev_250ms();

    /* End of Outputs for SubSystem: '<S699>/U049C_Corebev_250ms' */
#elif Rte_SysCon_Variant_CIDB_U049C_Pegasus

    /* Outputs for Atomic SubSystem: '<S699>/U049C_Pegasus_250ms' */
    CIDB_ac_U049C_Pegasus_250ms();

    /* End of Outputs for SubSystem: '<S699>/U049C_Pegasus_250ms' */
#endif

    /* SignalConversion generated from: '<S6>/VeCIDB_b_DUALCHARGER_THERMAL_CalDiagEnbl' incorporates:
     *  Inport: '<Root>/VeCRDB_y_OBC_Temp1_SigSts'
     *  Inport: '<Root>/VeCRDB_y_OBC_Temp2_SigSts'
     *  Inport: '<Root>/VeCRDB_y_OBC_Temp3_SigSts'
     *  Inport: '<Root>/VeCRDB_y_OBC_Temp4_SigSts'
     *  SignalConversion generated from: '<S5>/VeCIDB_b_U049C_DiagEnbl'
     */
    Rte_IrvWrite_CIDB_SlowTEB_VeCIDB_b_DUALCHARGER_THERMAL_CalDiagEnbl_IRV
        (CIDB_ac_B.VariantMergeForOutportVeCIDB_b_DUALCHARG);
    (void)Rte_Read_VeCRDB_y_ChrgFailSts_SigSts_Value
        (&CIDB_ac_B.TmpSignalConversionAtVeCRDB_y_ChrgFailSt);

#if Rte_SysCon_Variant_CIDB_U049C_Corebev

    /* Outputs for Atomic SubSystem: '<S700>/U049C_Variant_Corebev_500ms' */
    CIDB_ac_U049C_Variant_Corebev_500ms();

    /* End of Outputs for SubSystem: '<S700>/U049C_Variant_Corebev_500ms' */
#elif Rte_SysCon_Variant_CIDB_U049C_Pegasus

    /* Outputs for Atomic SubSystem: '<S700>/U049C_Variant_Pegasus_500ms' */
    CIDB_ac_U049C_Variant_Pegasus_500ms();

    /* End of Outputs for SubSystem: '<S700>/U049C_Variant_Pegasus_500ms' */
#endif

    /* SignalConversion generated from: '<S6>/VeCIDB_b_HV_CHARGER2_CalDiagEnbl' incorporates:
     *  Inport: '<Root>/VeCRDB_y_ChrgFailSts_SigSts'
     */
    Rte_IrvWrite_CIDB_SlowTEB_VeCIDB_b_HV_CHARGER2_CalDiagEnbl_IRV
        (CIDB_ac_B.VariantMergeForOutportVeCIDB_b_HV_CHARGE);

    /* End of Outputs for SubSystem: '<S6>/U049C_Variant_Pegasus_Corebev_250ms' */
    /* End of Outputs for SubSystem: '<S6>/U049C_Variant_Pegasus_Corebev_500ms' */
#endif

    /* End of SignalConversion generated from: '<S6>/VeCIDB_b_U049C_DiagEnbl' */

    /* SignalConversion generated from: '<S6>/VeCIDB_e_BCM_FD_10_ErrState' incorporates:
     *  SignalConversion generated from: '<S6>/VeCIDB_e_BCM_FD_9_ErrState'
     */
#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

    /* SignalConversion generated from: '<S6>/VeCIDB_e_BCM_FD_10_ErrState' incorporates:
     *  VariantMerge generated from: '<S698>/VeCIDB_e_BCM_FD_10_ErrState'
     */
    Rte_IrvWrite_CIDB_SlowTEB_VeCIDB_e_BCM_FD_10_ErrState_IRV
        (CIDB_ac_B.Status_edc);

    /* SignalConversion generated from: '<S6>/VeCIDB_e_BCM_FD_9_ErrState' incorporates:
     *  VariantMerge generated from: '<S698>/VeCIDB_e_BCM_FD_9_ErrState'
     */
    Rte_IrvWrite_CIDB_SlowTEB_VeCIDB_e_BCM_FD_9_ErrState_IRV
        (CIDB_ac_B.Status_edcd);

#endif

    /* End of SignalConversion generated from: '<S6>/VeCIDB_e_BCM_FD_10_ErrState' */

    /* SignalConversion generated from: '<S6>/VeCIDB_e_DUALCHARGER_THERMAL_ErrState' incorporates:
     *  SignalConversion generated from: '<S6>/VeCIDB_e_HV_CHARGER2_ErrState'
     */
#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    /* SignalConversion generated from: '<S6>/VeCIDB_e_DUALCHARGER_THERMAL_ErrState' incorporates:
     *  VariantMerge generated from: '<S699>/VeCIDB_e_DUALCHARGER_THERMAL_ErrState'
     */
    Rte_IrvWrite_CIDB_SlowTEB_VeCIDB_e_DUALCHARGER_THERMAL_ErrState_IRV
        (CIDB_ac_B.Status_ed);

    /* SignalConversion generated from: '<S6>/VeCIDB_e_HV_CHARGER2_ErrState' incorporates:
     *  VariantMerge generated from: '<S700>/VeCIDB_e_HV_CHARGER2_ErrState'
     */
    Rte_IrvWrite_CIDB_SlowTEB_VeCIDB_e_HV_CHARGER2_ErrState_IRV
        (CIDB_ac_B.Status_e);

#endif

    /* End of SignalConversion generated from: '<S6>/VeCIDB_e_DUALCHARGER_THERMAL_ErrState' */

    /* Update for UnitDelay: '<S6>/Unit Delay' */
    CIDB_ac_DW.UnitDelay_DSTATE_g = CIDB_ac_B.NOT;

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/SlowTEB' */
}

/* Model step function for TID5 */
FUNC(void, CIDB_CODE) CIDB_SlowTEF(void) /* Explicit Task: SlowTEF */
{

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

    float32 tmp;

#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

    float32 tmp_0;

#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

    float32 tmp_1;

#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

    float32 tmp_2;

#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

    float32 tmp_3;

#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

    float32 tmp_4;

#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

    float32 tmp_5;

#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

    float32 tmp_6;

#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

    float32 tmp_7;

#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

    float32 tmp_8;

#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

    float32 tmp_9;

#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

    float32 tmp_a;

#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

    float32 tmp_b;

#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

    float32 tmp_c;

#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

    float32 tmp_d;

#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

    float32 tmp_e;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/SlowTEF' incorporates:
     *  SubSystem: '<Root>/ImplausibleMgmt_1000ms'
     */
    /* DataStoreWrite: '<S2>/Data Store Write' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_SecurGateway'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_SecurGateway_Value
        (&CIDB_ac_DW.StatusByte_InvData_SecurGateway);

    /* SignalConversion generated from: '<S2>/VeCANR_e_End_Time_Hr1_ErrSts' incorporates:
     *  Inport: '<Root>/VeCANR_e_End_Time_Hr1_ErrSts'
     *  Inport: '<Root>/VeCANR_e_End_Time_Hr2_ErrSts'
     *  Inport: '<Root>/VeCANR_e_End_Time_Min1_ErrSts'
     *  Inport: '<Root>/VeCANR_e_End_Time_Min2_ErrSts'
     *  Inport: '<Root>/VeCANR_e_Start_Time_Hr1_ErrSts'
     *  Inport: '<Root>/VeCANR_e_Start_Time_Hr2_ErrSts'
     *  Inport: '<Root>/VeCANR_e_Start_Time_Min1_ErrSts'
     *  Inport: '<Root>/VeCANR_e_Start_Time_Min2_ErrSts'
     *  Inport: '<Root>/VeCANR_e_TBM_End_Time_Hr1_ErrSts'
     *  Inport: '<Root>/VeCANR_e_TBM_End_Time_Hr2_ErrSts'
     *  Inport: '<Root>/VeCANR_e_TBM_End_Time_Min1_ErrSts'
     *  Inport: '<Root>/VeCANR_e_TBM_End_Time_Min2_ErrSts'
     *  Inport: '<Root>/VeCANR_e_TBM_Start_Time_Hr1_ErrSts'
     *  Inport: '<Root>/VeCANR_e_TBM_Start_Time_Hr2_ErrSts'
     *  Inport: '<Root>/VeCANR_e_TBM_Start_Time_Min1_ErrSts'
     *  Inport: '<Root>/VeCANR_e_TBM_Start_Time_Min2_ErrSts'
     *  SignalConversion generated from: '<S2>/VeCANR_e_End_Time_Hr2_ErrSts'
     *  SignalConversion generated from: '<S2>/VeCANR_e_End_Time_Min1_ErrSts'
     *  SignalConversion generated from: '<S2>/VeCANR_e_End_Time_Min2_ErrSts'
     *  SignalConversion generated from: '<S2>/VeCANR_e_Start_Time_Hr1_ErrSts'
     *  SignalConversion generated from: '<S2>/VeCANR_e_Start_Time_Hr2_ErrSts'
     *  SignalConversion generated from: '<S2>/VeCANR_e_Start_Time_Min1_ErrSts'
     *  SignalConversion generated from: '<S2>/VeCANR_e_Start_Time_Min2_ErrSts'
     *  SignalConversion generated from: '<S2>/VeCANR_e_TBM_End_Time_Hr1_ErrSts'
     *  SignalConversion generated from: '<S2>/VeCANR_e_TBM_End_Time_Hr2_ErrSts'
     *  SignalConversion generated from: '<S2>/VeCANR_e_TBM_End_Time_Min1_ErrSts'
     *  SignalConversion generated from: '<S2>/VeCANR_e_TBM_End_Time_Min2_ErrSts'
     *  SignalConversion generated from: '<S2>/VeCANR_e_TBM_Start_Time_Hr1_ErrSts'
     *  SignalConversion generated from: '<S2>/VeCANR_e_TBM_Start_Time_Hr2_ErrSts'
     *  SignalConversion generated from: '<S2>/VeCANR_e_TBM_Start_Time_Min1_ErrSts'
     *  SignalConversion generated from: '<S2>/VeCANR_e_TBM_Start_Time_Min2_ErrSts'
     *  SignalConversion generated from: '<S2>/VeCIDB_b_IsDiagGlobalConditionsValid'
     *  SignalConversion generated from: '<S2>/VeCIDB_b_RstDiagCntr'
     *  SignalConversion generated from: '<S4>/VeCIDB_b_IsDiagGlobalConditionsValid_out'
     *  SignalConversion generated from: '<S4>/VeCIDB_b_RstDiagCntr_out'
     */
#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

    /* Outputs for Atomic SubSystem: '<S2>/U044A_Variant_Pegasus_COREBEV_1000ms' */
    CIDB_ac_B.TmpSignalConversionAtVeCANR_e_End_Time_H =
        Rte_Read_VeCANR_t_End_Time_Hr1_VeCANR_t_End_Time_Hr1(&tmp);
    CIDB_ac_B.TmpSignalConversionAtVeCANR_e_End_Time_e =
        Rte_Read_VeCANR_t_End_Time_Hr2_VeCANR_t_End_Time_Hr2(&tmp_0);
    CIDB_ac_B.TmpSignalConversionAtVeCANR_e_End_Time_M =
        Rte_Read_VeCANR_t_End_Time_Min1_VeCANR_t_End_Time_Min1(&tmp_1);
    CIDB_ac_B.TmpSignalConversionAtVeCANR_e_End_Time_h =
        Rte_Read_VeCANR_t_End_Time_Min2_VeCANR_t_End_Time_Min2(&tmp_2);
    CIDB_ac_B.TmpSignalConversionAtVeCANR_e_Start_Time =
        Rte_Read_VeCANR_t_Start_Time_Hr1_VeCANR_t_Start_Time_Hr1(&tmp_3);
    CIDB_ac_B.TmpSignalConversionAtVeCANR_e_Start_Ti_e =
        Rte_Read_VeCANR_t_Start_Time_Hr2_VeCANR_t_Start_Time_Hr2(&tmp_4);
    CIDB_ac_B.TmpSignalConversionAtVeCANR_e_Start_Ti_k =
        Rte_Read_VeCANR_t_Start_Time_Min1_VeCANR_t_Start_Time_Min1(&tmp_5);
    CIDB_ac_B.TmpSignalConversionAtVeCANR_e_Start_Ti_i =
        Rte_Read_VeCANR_t_Start_Time_Min2_VeCANR_t_Start_Time_Min2(&tmp_6);
    CIDB_ac_B.TmpSignalConversionAtVeCANR_e_TBM_End_Ti =
        Rte_Read_VeCANR_t_TBM_End_Time_Hr1_VeCANR_t_TBM_End_Time_Hr1(&tmp_7);
    CIDB_ac_B.TmpSignalConversionAtVeCANR_e_TBM_End__d =
        Rte_Read_VeCANR_t_TBM_End_Time_Hr2_VeCANR_t_TBM_End_Time_Hr2(&tmp_8);
    CIDB_ac_B.TmpSignalConversionAtVeCANR_e_TBM_End__n =
        Rte_Read_VeCANR_t_TBM_End_Time_Min1_VeCANR_t_TBM_End_Time_Min1(&tmp_9);
    CIDB_ac_B.TmpSignalConversionAtVeCANR_e_TBM_End__j =
        Rte_Read_VeCANR_t_TBM_End_Time_Min2_VeCANR_t_TBM_End_Time_Min2(&tmp_a);
    CIDB_ac_B.TmpSignalConversionAtVeCANR_e_TBM_Start_ =
        Rte_Read_VeCANR_t_TBM_Start_Time_Hr1_VeCANR_t_TBM_Start_Time_Hr1(&tmp_b);
    CIDB_ac_B.TmpSignalConversionAtVeCANR_e_TBM_Star_h =
        Rte_Read_VeCANR_t_TBM_Start_Time_Hr2_VeCANR_t_TBM_Start_Time_Hr2(&tmp_c);
    CIDB_ac_B.TmpSignalConversionAtVeCANR_e_TBM_Star_p =
        Rte_Read_VeCANR_t_TBM_Start_Time_Min1_VeCANR_t_TBM_Start_Time_Min1
        (&tmp_d);
    CIDB_ac_B.TmpSignalConversionAtVeCANR_e_TBM_Star_n =
        Rte_Read_VeCANR_t_TBM_Start_Time_Min2_VeCANR_t_TBM_Start_Time_Min2
        (&tmp_e);
    CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_IsDiagGlob =
        Rte_IrvRead_CIDB_SlowTEF_VeCIDB_b_IsDiagGlobalConditionsValid_out1_IRV();
    CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_RstDiagCnt =
        Rte_IrvRead_CIDB_SlowTEF_VeCIDB_b_RstDiagCntr_out1_IRV();

    /* Outputs for Atomic SubSystem: '<S57>/U044A_Pegasus_COREBEV_1000ms' */
    CIDB_ac_U044A_Pegasus_COREBEV_1000ms();

    /* End of Outputs for SubSystem: '<S57>/U044A_Pegasus_COREBEV_1000ms' */
    /* End of Outputs for SubSystem: '<S2>/U044A_Variant_Pegasus_COREBEV_1000ms' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeCANR_e_End_Time_Hr1_ErrSts' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/SlowTEF' */
}

/* Output function */
FUNC(void, CIDB_CODE) CIDB_CPIM_HCP_FEEDBACK_Received(void)
{

#if Rte_SysCon_Variant_CIDB_U149A_Corebev || Rte_SysCon_Variant_CIDB_U149A_Pegasus

    uint8 tmp;

#endif

#if Rte_SysCon_Variant_CIDB_U149A_Corebev || Rte_SysCon_Variant_CIDB_U149A_Pegasus

    uint8 tmp_0;

#endif

#if Rte_SysCon_Variant_CIDB_U149A_Corebev || Rte_SysCon_Variant_CIDB_U149A_Pegasus

    uint8 tmp_1;

#endif

#if Rte_SysCon_Variant_CIDB_U149A_Corebev || Rte_SysCon_Variant_CIDB_U149A_Pegasus

    uint8 tmp_2;

#endif

#if Rte_SysCon_Variant_CIDB_U149A_Corebev || Rte_SysCon_Variant_CIDB_U149A_Pegasus

    uint8 tmp_3;

#endif

#if Rte_SysCon_Variant_CIDB_U149A_Corebev || Rte_SysCon_Variant_CIDB_U149A_Pegasus

    uint8 tmp_4;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/CIDBDRE_CPIM_HCP_FEEDBACK' incorporates:
     *  SubSystem: '<Root>/CPIM_HCP_FEEDBACK'
     */
    /* DataStoreWrite: '<S1>/Data Store Write' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_CPIMGen2'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_CPIMGen2_Value
        (&CIDB_ac_DW.StatusByte_InvData_CPIMGen2);

    /* SignalConversion generated from: '<S1>/VeCIDB_b_IsDiagGlobalConditionsValid' incorporates:
     *  Inport: '<Root>/VeLINR_b_CPIM_IND1_FailStsTO'
     *  Inport: '<Root>/VeLINR_e_CPIM_IND1_Fdbk_ErrSts'
     *  Inport: '<Root>/VeLINR_e_CPIM_IND2_Fdbk_ErrSts'
     *  Inport: '<Root>/VeLINR_e_CPIM_IND3_Fdbk_ErrSts'
     *  Inport: '<Root>/VeLINR_e_CPIM_IND4_Fdbk_ErrSts'
     *  Inport: '<Root>/VeLINR_e_CPIM_IND5_Fdbk_ErrSts'
     *  Inport: '<Root>/VeLINR_e_CPIM_IND_Color_Fdbk_ErrSts'
     *  SignalConversion generated from: '<S1>/VeCIDB_b_RstDiagCntr'
     *  SignalConversion generated from: '<S1>/VeLINR_b_CPIM_IND1_FailStsTO'
     *  SignalConversion generated from: '<S1>/VeLINR_e_CPIM_IND1_Fdbk_ErrSts'
     *  SignalConversion generated from: '<S1>/VeLINR_e_CPIM_IND2_Fdbk_ErrSts'
     *  SignalConversion generated from: '<S1>/VeLINR_e_CPIM_IND3_Fdbk_ErrSts'
     *  SignalConversion generated from: '<S1>/VeLINR_e_CPIM_IND4_Fdbk_ErrSts'
     *  SignalConversion generated from: '<S1>/VeLINR_e_CPIM_IND5_Fdbk_ErrSts'
     *  SignalConversion generated from: '<S1>/VeLINR_e_CPIM_IND_Color_Fdbk_ErrSts'
     *  SignalConversion generated from: '<S4>/VeCIDB_b_IsDiagGlobalConditionsValid_out'
     *  SignalConversion generated from: '<S4>/VeCIDB_b_RstDiagCntr_out'
     */
#if Rte_SysCon_Variant_CIDB_U149A_Corebev || Rte_SysCon_Variant_CIDB_U149A_Pegasus

    /* Outputs for Atomic SubSystem: '<S1>/U149A_Variant_Pegasus_COREBEV' */
    CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_IsDiagG_er =
        Rte_IrvRead_CIDB_CPIM_HCP_FEEDBACK_Received_VeCIDB_b_IsDiagGlobalConditionsValid_out1_IRV
        ();
    CIDB_ac_B.TmpSignalConversionAtVeCIDB_b_RstDi_e1hg =
        Rte_IrvRead_CIDB_CPIM_HCP_FEEDBACK_Received_VeCIDB_b_RstDiagCntr_out1_IRV
        ();
    (void)Rte_Read_VeLINR_b_CPIM_IND1_FailStsTO_VeLINR_b_CPIM_IND1_FailStsTO
        (&CIDB_ac_B.TmpSignalConversionAtVeLINR_b_CPIM_IND1_);
    CIDB_ac_B.TmpSignalConversionAtVeLINR_e_CPIM_IND1_ =
        Rte_Read_VeLINR_e_CPIM_IND1_Fdbk_VeLINR_e_CPIM_IND1_Fdbk(&tmp);
    CIDB_ac_B.TmpSignalConversionAtVeLINR_e_CPIM_IND2_ =
        Rte_Read_VeLINR_e_CPIM_IND2_Fdbk_VeLINR_e_CPIM_IND2_Fdbk(&tmp_0);
    CIDB_ac_B.TmpSignalConversionAtVeLINR_e_CPIM_IND3_ =
        Rte_Read_VeLINR_e_CPIM_IND3_Fdbk_VeLINR_e_CPIM_IND3_Fdbk(&tmp_1);
    CIDB_ac_B.TmpSignalConversionAtVeLINR_e_CPIM_IND4_ =
        Rte_Read_VeLINR_e_CPIM_IND4_Fdbk_VeLINR_e_CPIM_IND4_Fdbk(&tmp_2);
    CIDB_ac_B.TmpSignalConversionAtVeLINR_e_CPIM_IND5_ =
        Rte_Read_VeLINR_e_CPIM_IND5_Fdbk_VeLINR_e_CPIM_IND5_Fdbk(&tmp_3);
    CIDB_ac_B.TmpSignalConversionAtVeLINR_e_CPIM_IND_C =
        Rte_Read_VeLINR_e_CPIM_IND_Color_Fdbk_VeLINR_e_CPIM_IND_Color_Fdbk
        (&tmp_4);

#if Rte_SysCon_Variant_CIDB_U149A_Corebev

    /* Outputs for Atomic SubSystem: '<S8>/U149A_COREBEV_250ms' */
    CIDB_ac_U149A_COREBEV_250ms();

    /* End of Outputs for SubSystem: '<S8>/U149A_COREBEV_250ms' */
#elif Rte_SysCon_Variant_CIDB_U149A_Pegasus

    /* Outputs for Atomic SubSystem: '<S8>/U149A_Pegasus_250ms' */
    CIDB_ac_U149A_Pegasus_250ms();

    /* End of Outputs for SubSystem: '<S8>/U149A_Pegasus_250ms' */
#endif

    /* End of Outputs for SubSystem: '<S1>/U149A_Variant_Pegasus_COREBEV' */
#endif

    /* End of SignalConversion generated from: '<S1>/VeCIDB_b_IsDiagGlobalConditionsValid' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/CIDBDRE_CPIM_HCP_FEEDBACK' */
}

/* Model initialize function */
FUNC(void, CIDB_CODE) CIDB_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/ImplausibleMgmt_10ms'
     */
#if Rte_SysCon_Variant_CIDB_U0412_BLUEN || Rte_SysCon_Variant_CIDB_U0412_Corebev || Rte_SysCon_Variant_CIDB_U0412_Pegasus

    /* SystemInitialize for Atomic SubSystem: '<S4>/U0412_Variant_Pegasus_Corebev_Bluen_10ms' */
#if Rte_SysCon_Variant_CIDB_U0412_BLUEN

    /* SystemInitialize for Atomic SubSystem: '<S155>/U0412_Variant_Bluen_10ms' */
    CIDB_ac_U0412_Variant_Bluen_10ms_Init();

    /* End of SystemInitialize for SubSystem: '<S155>/U0412_Variant_Bluen_10ms' */
#elif Rte_SysCon_Variant_CIDB_U0412_Corebev

    /* SystemInitialize for Atomic SubSystem: '<S155>/U0412_Variant_Corebev_10ms' */
    CIDB_ac_U0412_Variant_Corebev_10ms_Init();

    /* End of SystemInitialize for SubSystem: '<S155>/U0412_Variant_Corebev_10ms' */
#elif Rte_SysCon_Variant_CIDB_U0412_Pegasus

    /* SystemInitialize for Atomic SubSystem: '<S155>/U0412_Variant_Pegasus_10ms' */
    CIDB_ac_U0412_Variant_Pegasus_10ms_Init();

    /* End of SystemInitialize for SubSystem: '<S155>/U0412_Variant_Pegasus_10ms' */
#endif

    /* End of SystemInitialize for SubSystem: '<S4>/U0412_Variant_Pegasus_Corebev_Bluen_10ms' */
#endif

#if Rte_SysCon_Variant_CIDB_U0415_BLUEN || Rte_SysCon_Variant_CIDB_U0415_Corebev || Rte_SysCon_Variant_CIDB_U0415_Pegasus

    /* SystemInitialize for Atomic SubSystem: '<S4>/U0415_Variant_Pegasus_Corebev_Bluen_10ms' */
#if Rte_SysCon_Variant_CIDB_U0415_BLUEN

    /* SystemInitialize for Atomic SubSystem: '<S156>/U0415_Bluen_10ms' */
    CIDB_ac_U0415_Bluen_10ms_Init();

    /* End of SystemInitialize for SubSystem: '<S156>/U0415_Bluen_10ms' */
#elif Rte_SysCon_Variant_CIDB_U0415_Corebev

    /* SystemInitialize for Atomic SubSystem: '<S156>/U0415_COREBEV_10ms' */
    CIDB_ac_U0415_COREBEV_10ms_Init();

    /* End of SystemInitialize for SubSystem: '<S156>/U0415_COREBEV_10ms' */
#elif Rte_SysCon_Variant_CIDB_U0415_Pegasus

    /* SystemInitialize for Atomic SubSystem: '<S156>/U0415_Pegasus_10ms' */
    CIDB_ac_U0415_Pegasus_10ms_Init();

    /* End of SystemInitialize for SubSystem: '<S156>/U0415_Pegasus_10ms' */
#endif

    /* End of SystemInitialize for SubSystem: '<S4>/U0415_Variant_Pegasus_Corebev_Bluen_10ms' */
#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

    /* SystemInitialize for Atomic SubSystem: '<S4>/U0422_Variant_10ms' */
#if Rte_SysCon_Variant_CIDB_U0422_BLUEN

    /* SystemInitialize for Atomic SubSystem: '<S157>/U0422_BLUEN_10ms' */
    CIDB_ac_U0422_BLUEN_10ms_Init();

    /* End of SystemInitialize for SubSystem: '<S157>/U0422_BLUEN_10ms' */
#elif Rte_SysCon_Variant_CIDB_U0422_Corebev

    /* SystemInitialize for Atomic SubSystem: '<S157>/U0422_COREBEV_10ms' */
    CIDB_ac_U0422_COREBEV_10ms_Init();

    /* End of SystemInitialize for SubSystem: '<S157>/U0422_COREBEV_10ms' */
#elif Rte_SysCon_Variant_CIDB_U0422_Pegasus

    /* SystemInitialize for Atomic SubSystem: '<S157>/U0422_Pegasus_10ms' */
    CIDB_ac_U0422_Pegasus_10ms_Init();

    /* End of SystemInitialize for SubSystem: '<S157>/U0422_Pegasus_10ms' */
#endif

    /* End of SystemInitialize for SubSystem: '<S4>/U0422_Variant_10ms' */
#endif

    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/ImplausibleMgmt_20ms'
     */
    /* SystemInitialize for SignalConversion generated from: '<S5>/VeCIDB_b_BATTERY_HV_VLIMITS_CalDiagEnbl' incorporates:
     *  SignalConversion generated from: '<S5>/VeCIDB_e_BATTERY_HV_VLIMITS_ErrState'
     */
#if Rte_SysCon_Variant_CIDB_U0412_BLUEN || Rte_SysCon_Variant_CIDB_U0412_Corebev || Rte_SysCon_Variant_CIDB_U0412_Pegasus

    /* SystemInitialize for Atomic SubSystem: '<S5>/U0412_Variant_20ms' */
#if Rte_SysCon_Variant_CIDB_U0412_BLUEN

    /* SystemInitialize for Atomic SubSystem: '<S477>/U0412_BLUEN_20ms' */
    CIDB_ac_U0412_BLUEN_20ms_Init();

    /* End of SystemInitialize for SubSystem: '<S477>/U0412_BLUEN_20ms' */
#elif Rte_SysCon_Variant_CIDB_U0412_Corebev

    /* SystemInitialize for Atomic SubSystem: '<S477>/U0412_COREBEV_20ms' */
    CIDB_ac_U0412_COREBEV_20ms_Init();

    /* End of SystemInitialize for SubSystem: '<S477>/U0412_COREBEV_20ms' */
#elif Rte_SysCon_Variant_CIDB_U0412_Pegasus

    /* SystemInitialize for Atomic SubSystem: '<S477>/U0412_Pegasus_20ms' */
    CIDB_ac_U0412_Pegasus_20ms_Init();

    /* End of SystemInitialize for SubSystem: '<S477>/U0412_Pegasus_20ms' */
#endif

    /* SystemInitialize for SignalConversion generated from: '<S5>/VeCIDB_b_BATTERY_HV_VLIMITS_CalDiagEnbl' */
    Rte_IrvWrite_CIDB_ac_Init_VeCIDB_b_BATTERY_HV_VLIMITS_CalDiagEnbl_IRV
        (CIDB_ac_B.VariantMergeForOutportVeCIDB_b_BATTERY_H);

    /* SystemInitialize for SignalConversion generated from: '<S5>/VeCIDB_e_BATTERY_HV_VLIMITS_ErrState' incorporates:
     *  VariantMerge generated from: '<S477>/VeCIDB_e_BATTERY_HV_VLIMITS_ErrState'
     */
    Rte_IrvWrite_CIDB_ac_Init_VeCIDB_e_BATTERY_HV_VLIMITS_ErrState_IRV
        (CIDB_ac_B.VeCIDB_e_BATTERY_HV_VLIMITS_ErrState);

    /* End of SystemInitialize for SubSystem: '<S5>/U0412_Variant_20ms' */
#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S5>/VeCIDB_b_BATTERY_HV_VLIMITS_CalDiagEnbl' */
#if Rte_SysCon_Variant_CIDB_U0404_BLUEN || Rte_SysCon_Variant_CIDB_U0404_Corebev || Rte_SysCon_Variant_CIDB_U0404_Pegasus

    /* SystemInitialize for Atomic SubSystem: '<S5>/U0404_Variant_Pegasus_Corebev_BLUEN_20ms' */
#if Rte_SysCon_Variant_CIDB_U0404_BLUEN

    /* SystemInitialize for Atomic SubSystem: '<S476>/U0404_BLUEN_20ms' */
    CIDB_ac_U0404_BLUEN_20ms_Init();

    /* End of SystemInitialize for SubSystem: '<S476>/U0404_BLUEN_20ms' */
#elif Rte_SysCon_Variant_CIDB_U0404_Corebev

    /* SystemInitialize for Atomic SubSystem: '<S476>/U0404_COREBEV_20ms' */
    CIDB_ac_U0404_COREBEV_20ms_Init();

    /* End of SystemInitialize for SubSystem: '<S476>/U0404_COREBEV_20ms' */
#elif Rte_SysCon_Variant_CIDB_U0404_Pegasus

    /* SystemInitialize for Atomic SubSystem: '<S476>/U0404_Pegasus_20ms' */
    CIDB_ac_U0404_Pegasus_20ms_Init();

    /* End of SystemInitialize for SubSystem: '<S476>/U0404_Pegasus_20ms' */
#endif

    /* End of SystemInitialize for SubSystem: '<S5>/U0404_Variant_Pegasus_Corebev_BLUEN_20ms' */
#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    /* SystemInitialize for Atomic SubSystem: '<S5>/U049C_Variant_Pegasus_Corebev_20ms' */
#if Rte_SysCon_Variant_CIDB_U049C_Corebev

    /* SystemInitialize for Atomic SubSystem: '<S479>/U049C_COREBEV_20ms' */
    CIDB_ac_U049C_COREBEV_20ms_Init();

    /* End of SystemInitialize for SubSystem: '<S479>/U049C_COREBEV_20ms' */
#elif Rte_SysCon_Variant_CIDB_U049C_Pegasus

    /* SystemInitialize for Atomic SubSystem: '<S479>/U049C_Pegasus_20ms' */
    CIDB_ac_U049C_Pegasus_20ms_Init();

    /* End of SystemInitialize for SubSystem: '<S479>/U049C_Pegasus_20ms' */
#endif

    /* End of SystemInitialize for SubSystem: '<S5>/U049C_Variant_Pegasus_Corebev_20ms' */
#endif

    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/CIDBDRE_CPIM_HCP_FEEDBACK' incorporates:
     *  SubSystem: '<Root>/CPIM_HCP_FEEDBACK'
     */
#if Rte_SysCon_Variant_CIDB_U149A_Corebev || Rte_SysCon_Variant_CIDB_U149A_Pegasus

    /* SystemInitialize for Atomic SubSystem: '<S1>/U149A_Variant_Pegasus_COREBEV' */
#if Rte_SysCon_Variant_CIDB_U149A_Corebev

    /* SystemInitialize for Atomic SubSystem: '<S8>/U149A_COREBEV_250ms' */
    CIDB_ac_U149A_COREBEV_250ms_Init();

    /* End of SystemInitialize for SubSystem: '<S8>/U149A_COREBEV_250ms' */
#elif Rte_SysCon_Variant_CIDB_U149A_Pegasus

    /* SystemInitialize for Atomic SubSystem: '<S8>/U149A_Pegasus_250ms' */
    CIDB_ac_U149A_Pegasus_250ms_Init();

    /* End of SystemInitialize for SubSystem: '<S8>/U149A_Pegasus_250ms' */
#endif

    /* End of SystemInitialize for SubSystem: '<S1>/U149A_Variant_Pegasus_COREBEV' */
#endif

    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/CIDBDRE_CPIM_HCP_FEEDBACK' */

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/ImplausibleMgmt_100ms'
     */
    /* SystemInitialize for SignalConversion generated from: '<S3>/VeCIDB_b_BCM_FD_12_CalDiagEnbl' */
#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

    /* SystemInitialize for Atomic SubSystem: '<S3>/U0422_Variant_Pegasus_Corebev_Bluen_100ms' */
#if Rte_SysCon_Variant_CIDB_U0422_BLUEN

    /* SystemInitialize for Atomic SubSystem: '<S95>/U0422_Bluen_100ms' */
    CIDB_ac_U0422_Bluen_100ms_Init();

    /* End of SystemInitialize for SubSystem: '<S95>/U0422_Bluen_100ms' */
#elif Rte_SysCon_Variant_CIDB_U0422_Corebev

    /* SystemInitialize for Atomic SubSystem: '<S95>/U0422_COREBEV_100ms' */
    CIDB_ac_U0422_COREBEV_100ms_Init();

    /* End of SystemInitialize for SubSystem: '<S95>/U0422_COREBEV_100ms' */
#elif Rte_SysCon_Variant_CIDB_U0422_Pegasus

    /* SystemInitialize for Atomic SubSystem: '<S95>/U0422_Pegasus_100ms' */
    CIDB_ac_U0422_Pegasus_100ms_Init();

    /* End of SystemInitialize for SubSystem: '<S95>/U0422_Pegasus_100ms' */
#endif

    /* SystemInitialize for SignalConversion generated from: '<S3>/VeCIDB_b_BCM_FD_12_CalDiagEnbl' */
    Rte_IrvWrite_CIDB_ac_Init_VeCIDB_b_BCM_FD_12_CalDiagEnbl_IRV
        (CIDB_ac_B.VariantMergeForOutportVeCIDB_b_BCM_FD_12);

    /* End of SystemInitialize for SubSystem: '<S3>/U0422_Variant_Pegasus_Corebev_Bluen_100ms' */
#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S3>/VeCIDB_b_BCM_FD_12_CalDiagEnbl' */

    /* SystemInitialize for SignalConversion generated from: '<S3>/VeCIDB_b_HV_CHARGER1_CalDiagEnbl' */
#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    /* SystemInitialize for Atomic SubSystem: '<S3>/U049C_Variant_Pegasus_COREBEV_100ms' */
#if Rte_SysCon_Variant_CIDB_U049C_Corebev

    /* SystemInitialize for Atomic SubSystem: '<S96>/U049C_COREBEV_100ms' */
    CIDB_ac_U049C_COREBEV_100ms_Init();

    /* End of SystemInitialize for SubSystem: '<S96>/U049C_COREBEV_100ms' */
#elif Rte_SysCon_Variant_CIDB_U049C_Pegasus

    /* SystemInitialize for Atomic SubSystem: '<S96>/U049C_Pegasus_100ms' */
    CIDB_ac_U049C_Pegasus_100ms_Init();

    /* End of SystemInitialize for SubSystem: '<S96>/U049C_Pegasus_100ms' */
#endif

    /* SystemInitialize for SignalConversion generated from: '<S3>/VeCIDB_b_HV_CHARGER1_CalDiagEnbl' */
    Rte_IrvWrite_CIDB_ac_Init_VeCIDB_b_HV_CHARGER1_CalDiagEnbl_IRV
        (CIDB_ac_B.VariantMergeForOutportVeCIDB_b_HV_CHAR_c);

    /* End of SystemInitialize for SubSystem: '<S3>/U049C_Variant_Pegasus_COREBEV_100ms' */
#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S3>/VeCIDB_b_HV_CHARGER1_CalDiagEnbl' */

    /* SystemInitialize for SignalConversion generated from: '<S3>/VeCIDB_e_BCM_FD_12_ErrState' */
#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

    /* SystemInitialize for SignalConversion generated from: '<S3>/VeCIDB_e_BCM_FD_12_ErrState' incorporates:
     *  VariantMerge generated from: '<S95>/VeCIDB_e_BCM_FD_12_ErrState'
     */
    Rte_IrvWrite_CIDB_ac_Init_VeCIDB_e_BCM_FD_12_ErrState_IRV
        (CIDB_ac_B.Status_edcdnm);

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S3>/VeCIDB_e_BCM_FD_12_ErrState' */

    /* SystemInitialize for SignalConversion generated from: '<S3>/VeCIDB_e_HV_CHARGER1_ErrState' */
#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    /* SystemInitialize for SignalConversion generated from: '<S3>/VeCIDB_e_HV_CHARGER1_ErrState' incorporates:
     *  VariantMerge generated from: '<S96>/VeCIDB_e_HV_CHARGER1_ErrState'
     */
    Rte_IrvWrite_CIDB_ac_Init_VeCIDB_e_HV_CHARGER1_ErrState_IRV
        (CIDB_ac_B.Status_edcdn);

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S3>/VeCIDB_e_HV_CHARGER1_ErrState' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/SlowTEB' incorporates:
     *  SubSystem: '<Root>/ImplausibleMgmt_250ms'
     */
    /* SystemInitialize for SignalConversion generated from: '<S6>/VeCIDB_b_BCM_FD_10_CalDiagEnbl' incorporates:
     *  SignalConversion generated from: '<S6>/VeCIDB_b_BCM_FD_9_CalDiagEnbl'
     */
#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

    /* SystemInitialize for Atomic SubSystem: '<S6>/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms' */
#if Rte_SysCon_Variant_CIDB_U0422_BLUEN

    /* SystemInitialize for Atomic SubSystem: '<S698>/U0422_Bluen_250ms' */
    CIDB_ac_U0422_Bluen_250ms_Init();

    /* End of SystemInitialize for SubSystem: '<S698>/U0422_Bluen_250ms' */
#elif Rte_SysCon_Variant_CIDB_U0422_Corebev

    /* SystemInitialize for Atomic SubSystem: '<S698>/U0422_Corebev_250ms' */
    CIDB_ac_U0422_Corebev_250ms_Init();

    /* End of SystemInitialize for SubSystem: '<S698>/U0422_Corebev_250ms' */
#elif Rte_SysCon_Variant_CIDB_U0422_Pegasus

    /* SystemInitialize for Atomic SubSystem: '<S698>/U0422_Pegasus_250ms' */
    CIDB_ac_U0422_Pegasus_250ms_Init();

    /* End of SystemInitialize for SubSystem: '<S698>/U0422_Pegasus_250ms' */
#endif

    /* SystemInitialize for SignalConversion generated from: '<S6>/VeCIDB_b_BCM_FD_10_CalDiagEnbl' */
    Rte_IrvWrite_CIDB_ac_Init_VeCIDB_b_BCM_FD_10_CalDiagEnbl_IRV
        (CIDB_ac_B.VariantMergeForOutportVeCIDB_b_BCM_FD_10);

    /* SystemInitialize for SignalConversion generated from: '<S6>/VeCIDB_b_BCM_FD_9_CalDiagEnbl' */
    Rte_IrvWrite_CIDB_ac_Init_VeCIDB_b_BCM_FD_9_CalDiagEnbl_IRV
        (CIDB_ac_B.VeCIDB_b_BCM_FD_9_CalDiagEnbl);

    /* End of SystemInitialize for SubSystem: '<S6>/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms' */
#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S6>/VeCIDB_b_BCM_FD_10_CalDiagEnbl' */

    /* SystemInitialize for SignalConversion generated from: '<S6>/VeCIDB_b_DUALCHARGER_THERMAL_CalDiagEnbl' incorporates:
     *  SignalConversion generated from: '<S6>/VeCIDB_b_HV_CHARGER2_CalDiagEnbl'
     */
#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    /* SystemInitialize for Atomic SubSystem: '<S6>/U049C_Variant_Pegasus_Corebev_500ms' */
    /* SystemInitialize for Atomic SubSystem: '<S6>/U049C_Variant_Pegasus_Corebev_250ms' */
#if Rte_SysCon_Variant_CIDB_U049C_Corebev

    /* SystemInitialize for Atomic SubSystem: '<S699>/U049C_Corebev_250ms' */
    CIDB_ac_U049C_Corebev_250ms_Init();

    /* End of SystemInitialize for SubSystem: '<S699>/U049C_Corebev_250ms' */
#elif Rte_SysCon_Variant_CIDB_U049C_Pegasus

    /* SystemInitialize for Atomic SubSystem: '<S699>/U049C_Pegasus_250ms' */
    CIDB_ac_U049C_Pegasus_250ms_Init();

    /* End of SystemInitialize for SubSystem: '<S699>/U049C_Pegasus_250ms' */
#endif

    /* SystemInitialize for SignalConversion generated from: '<S6>/VeCIDB_b_DUALCHARGER_THERMAL_CalDiagEnbl' */
    Rte_IrvWrite_CIDB_ac_Init_VeCIDB_b_DUALCHARGER_THERMAL_CalDiagEnbl_IRV
        (CIDB_ac_B.VariantMergeForOutportVeCIDB_b_DUALCHARG);

#if Rte_SysCon_Variant_CIDB_U049C_Corebev

    /* SystemInitialize for Atomic SubSystem: '<S700>/U049C_Variant_Corebev_500ms' */
    CIDB_ac_U049C_Variant_Corebev_500ms_Init();

    /* End of SystemInitialize for SubSystem: '<S700>/U049C_Variant_Corebev_500ms' */
#elif Rte_SysCon_Variant_CIDB_U049C_Pegasus

    /* SystemInitialize for Atomic SubSystem: '<S700>/U049C_Variant_Pegasus_500ms' */
    CIDB_ac_U049C_Variant_Pegasus_500ms_Init();

    /* End of SystemInitialize for SubSystem: '<S700>/U049C_Variant_Pegasus_500ms' */
#endif

    /* SystemInitialize for SignalConversion generated from: '<S6>/VeCIDB_b_HV_CHARGER2_CalDiagEnbl' */
    Rte_IrvWrite_CIDB_ac_Init_VeCIDB_b_HV_CHARGER2_CalDiagEnbl_IRV
        (CIDB_ac_B.VariantMergeForOutportVeCIDB_b_HV_CHARGE);

    /* End of SystemInitialize for SubSystem: '<S6>/U049C_Variant_Pegasus_Corebev_250ms' */
    /* End of SystemInitialize for SubSystem: '<S6>/U049C_Variant_Pegasus_Corebev_500ms' */
#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S6>/VeCIDB_b_DUALCHARGER_THERMAL_CalDiagEnbl' */

    /* SystemInitialize for SignalConversion generated from: '<S6>/VeCIDB_e_BCM_FD_10_ErrState' incorporates:
     *  SignalConversion generated from: '<S6>/VeCIDB_e_BCM_FD_9_ErrState'
     */
#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

    /* SystemInitialize for SignalConversion generated from: '<S6>/VeCIDB_e_BCM_FD_10_ErrState' incorporates:
     *  VariantMerge generated from: '<S698>/VeCIDB_e_BCM_FD_10_ErrState'
     */
    Rte_IrvWrite_CIDB_ac_Init_VeCIDB_e_BCM_FD_10_ErrState_IRV
        (CIDB_ac_B.Status_edc);

    /* SystemInitialize for SignalConversion generated from: '<S6>/VeCIDB_e_BCM_FD_9_ErrState' incorporates:
     *  VariantMerge generated from: '<S698>/VeCIDB_e_BCM_FD_9_ErrState'
     */
    Rte_IrvWrite_CIDB_ac_Init_VeCIDB_e_BCM_FD_9_ErrState_IRV
        (CIDB_ac_B.Status_edcd);

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S6>/VeCIDB_e_BCM_FD_10_ErrState' */

    /* SystemInitialize for SignalConversion generated from: '<S6>/VeCIDB_e_DUALCHARGER_THERMAL_ErrState' incorporates:
     *  SignalConversion generated from: '<S6>/VeCIDB_e_HV_CHARGER2_ErrState'
     */
#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    /* SystemInitialize for SignalConversion generated from: '<S6>/VeCIDB_e_DUALCHARGER_THERMAL_ErrState' incorporates:
     *  VariantMerge generated from: '<S699>/VeCIDB_e_DUALCHARGER_THERMAL_ErrState'
     */
    Rte_IrvWrite_CIDB_ac_Init_VeCIDB_e_DUALCHARGER_THERMAL_ErrState_IRV
        (CIDB_ac_B.Status_ed);

    /* SystemInitialize for SignalConversion generated from: '<S6>/VeCIDB_e_HV_CHARGER2_ErrState' incorporates:
     *  VariantMerge generated from: '<S700>/VeCIDB_e_HV_CHARGER2_ErrState'
     */
    Rte_IrvWrite_CIDB_ac_Init_VeCIDB_e_HV_CHARGER2_ErrState_IRV
        (CIDB_ac_B.Status_e);

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S6>/VeCIDB_e_DUALCHARGER_THERMAL_ErrState' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/SlowTEB' */

    /* Outputs for Atomic SubSystem: '<Root>/Initialize Function' */
#if Rte_SysCon_Variant_CIDB_U0412_BLUEN || Rte_SysCon_Variant_CIDB_U0412_Corebev || Rte_SysCon_Variant_CIDB_U0412_Pegasus

    /* Outputs for Atomic SubSystem: '<S7>/Subsystem1' */
#if Rte_SysCon_Variant_CIDB_U0412_BLUEN

    /* Outputs for Atomic SubSystem: '<S816>/U0412_BLUEN_Init' */
    /* Constant: '<S827>/Constant' */
    (void)Rte_Write_VeCIDB_e_FaultSts_InvData_BECM_Value(CeDFIB_e_Init);

    /* End of Outputs for SubSystem: '<S816>/U0412_BLUEN_Init' */
#elif Rte_SysCon_Variant_CIDB_U0412_Corebev

    /* Outputs for Atomic SubSystem: '<S816>/U0412_Corebev_Init' */
    /* Constant: '<S828>/Constant' */
    (void)Rte_Write_VeCIDB_e_FaultSts_InvData_BECM_Value(CeDFIB_e_Init);

    /* End of Outputs for SubSystem: '<S816>/U0412_Corebev_Init' */
#elif Rte_SysCon_Variant_CIDB_U0412_Pegasus

    /* Outputs for Atomic SubSystem: '<S816>/U0412_Pegasus_Init' */
    /* Constant: '<S829>/Constant' */
    (void)Rte_Write_VeCIDB_e_FaultSts_InvData_BECM_Value(CeDFIB_e_Init);

    /* End of Outputs for SubSystem: '<S816>/U0412_Pegasus_Init' */
#endif

    /* End of Outputs for SubSystem: '<S7>/Subsystem1' */
#endif

#if Rte_SysCon_Variant_CIDB_U0415_BLUEN || Rte_SysCon_Variant_CIDB_U0415_Corebev || Rte_SysCon_Variant_CIDB_U0415_Pegasus

    /* Outputs for Atomic SubSystem: '<S7>/U0415_Init' */
#if Rte_SysCon_Variant_CIDB_U0415_BLUEN

    /* Outputs for Atomic SubSystem: '<S819>/U0415_Bluen_Init' */
    /* Constant: '<S845>/Constant' */
    (void)Rte_Write_VeCIDB_e_FaultSts_InvData_ABS_Value(CeDFIB_e_Init);

    /* End of Outputs for SubSystem: '<S819>/U0415_Bluen_Init' */
#elif Rte_SysCon_Variant_CIDB_U0415_Corebev

    /* Outputs for Atomic SubSystem: '<S819>/U0415_Corebev_Init' */
    /* Constant: '<S846>/Constant' */
    (void)Rte_Write_VeCIDB_e_FaultSts_InvData_ABS_Value(CeDFIB_e_Init);

    /* End of Outputs for SubSystem: '<S819>/U0415_Corebev_Init' */
#elif Rte_SysCon_Variant_CIDB_U0415_Pegasus

    /* Outputs for Atomic SubSystem: '<S819>/U0415_Pegasus_Init' */
    /* Constant: '<S847>/Constant' */
    (void)Rte_Write_VeCIDB_e_FaultSts_InvData_ABS_Value(CeDFIB_e_Init);

    /* End of Outputs for SubSystem: '<S819>/U0415_Pegasus_Init' */
#endif

    /* End of Outputs for SubSystem: '<S7>/U0415_Init' */
#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

    /* Outputs for Atomic SubSystem: '<S7>/Subsystem3' */
#if Rte_SysCon_Variant_CIDB_U0422_BLUEN

    /* Outputs for Atomic SubSystem: '<S817>/U0422_BLUEN_Init' */
    /* Constant: '<S833>/Constant' */
    (void)Rte_Write_VeCIDB_e_FaultSts_InvData_BCM_Value(CeDFIB_e_Init);

    /* End of Outputs for SubSystem: '<S817>/U0422_BLUEN_Init' */
#elif Rte_SysCon_Variant_CIDB_U0422_Corebev

    /* Outputs for Atomic SubSystem: '<S817>/U0422_Corebev_Init' */
    /* Constant: '<S834>/Constant' */
    (void)Rte_Write_VeCIDB_e_FaultSts_InvData_BCM_Value(CeDFIB_e_Init);

    /* End of Outputs for SubSystem: '<S817>/U0422_Corebev_Init' */
#elif Rte_SysCon_Variant_CIDB_U0422_Pegasus

    /* Outputs for Atomic SubSystem: '<S817>/U0422_Pegasus_Init' */
    /* Constant: '<S835>/Constant' */
    (void)Rte_Write_VeCIDB_e_FaultSts_InvData_BCM_Value(CeDFIB_e_Init);

    /* End of Outputs for SubSystem: '<S817>/U0422_Pegasus_Init' */
#endif

    /* End of Outputs for SubSystem: '<S7>/Subsystem3' */
#endif

#if Rte_SysCon_Variant_CIDB_U044A_BLUEN || Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

    /* Outputs for Atomic SubSystem: '<S7>/U044A_Init' */
#if Rte_SysCon_Variant_CIDB_U044A_BLUEN

    /* Outputs for Atomic SubSystem: '<S820>/U044A_BLUEN_Init' */
    /* Constant: '<S850>/Constant' */
    (void)Rte_Write_VeCIDB_e_FaultSts_InvData_SecurGateway_Value(CeDFIB_e_Init);

    /* End of Outputs for SubSystem: '<S820>/U044A_BLUEN_Init' */
#elif Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

    /* Outputs for Atomic SubSystem: '<S820>/U044A_Init' */
    /* Constant: '<S851>/Constant' */
    (void)Rte_Write_VeCIDB_e_FaultSts_InvData_SecurGateway_Value(CeDFIB_e_Init);

    /* End of Outputs for SubSystem: '<S820>/U044A_Init' */
#endif

    /* End of Outputs for SubSystem: '<S7>/U044A_Init' */
#endif

#if Rte_SysCon_Variant_CIDB_U0404_BLUEN || Rte_SysCon_Variant_CIDB_U0404_Corebev || Rte_SysCon_Variant_CIDB_U0404_Pegasus

    /* Outputs for Atomic SubSystem: '<S7>/U0404_Init' */
#if Rte_SysCon_Variant_CIDB_U0404_BLUEN

    /* Outputs for Atomic SubSystem: '<S818>/U0404_BLUEN_Init' */
    /* Constant: '<S839>/Constant' */
    (void)Rte_Write_VeCIDB_e_FaultSts_InvData_ESM_Value(CeDFIB_e_Init);

    /* End of Outputs for SubSystem: '<S818>/U0404_BLUEN_Init' */
#elif Rte_SysCon_Variant_CIDB_U0404_Corebev

    /* Outputs for Atomic SubSystem: '<S818>/U0404_Corebev_Init' */
    /* Constant: '<S840>/Constant' */
    (void)Rte_Write_VeCIDB_e_FaultSts_InvData_ESM_Value(CeDFIB_e_Init);

    /* End of Outputs for SubSystem: '<S818>/U0404_Corebev_Init' */
#elif Rte_SysCon_Variant_CIDB_U0404_Pegasus

    /* Outputs for Atomic SubSystem: '<S818>/U0404_Pegasus_Init' */
    /* Constant: '<S841>/Constant' */
    (void)Rte_Write_VeCIDB_e_FaultSts_InvData_ESM_Value(CeDFIB_e_Init);

    /* End of Outputs for SubSystem: '<S818>/U0404_Pegasus_Init' */
#endif

    /* End of Outputs for SubSystem: '<S7>/U0404_Init' */
#endif

#if Rte_SysCon_Variant_CIDB_U149A_Corebev || Rte_SysCon_Variant_CIDB_U149A_Pegasus

    /* Outputs for Atomic SubSystem: '<S7>/U149A_Init' */
#if Rte_SysCon_Variant_CIDB_U149A_Corebev

    /* Outputs for Atomic SubSystem: '<S823>/U149A_Corebev_Init' */
    /* Constant: '<S860>/Constant' */
    (void)Rte_Write_VeCIDB_e_FaultSts_InvData_CPIMGen2_Value(CeDFIB_e_Init);

    /* End of Outputs for SubSystem: '<S823>/U149A_Corebev_Init' */
#elif Rte_SysCon_Variant_CIDB_U149A_Pegasus

    /* Outputs for Atomic SubSystem: '<S823>/U149A_Pegasus_Init' */
    /* Constant: '<S861>/Constant' */
    (void)Rte_Write_VeCIDB_e_FaultSts_InvData_CPIMGen2_Value(CeDFIB_e_Init);

    /* End of Outputs for SubSystem: '<S823>/U149A_Pegasus_Init' */
#endif

    /* End of Outputs for SubSystem: '<S7>/U149A_Init' */
#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    /* Outputs for Atomic SubSystem: '<S7>/U049C_Init' */
#if Rte_SysCon_Variant_CIDB_U049C_Corebev

    /* Outputs for Atomic SubSystem: '<S822>/U049C_Corebev_Init' */
    /* Constant: '<S856>/Constant' */
    (void)Rte_Write_VeCIDB_e_FaultSts_InvData_OBCM_Value(CeDFIB_e_Init);

    /* End of Outputs for SubSystem: '<S822>/U049C_Corebev_Init' */
#elif Rte_SysCon_Variant_CIDB_U049C_Pegasus

    /* Outputs for Atomic SubSystem: '<S822>/U049C_Pegasus_Init' */
    /* Constant: '<S857>/Constant' */
    (void)Rte_Write_VeCIDB_e_FaultSts_InvData_OBCM_Value(CeDFIB_e_Init);

    /* End of Outputs for SubSystem: '<S822>/U049C_Pegasus_Init' */
#endif

    /* End of Outputs for SubSystem: '<S7>/U049C_Init' */
#endif

#if Rte_SysCon_Variant_CIDB_U048D_BLUEN

    /* Outputs for Atomic SubSystem: '<S7>/U048D_Init' */
    /* Outputs for Atomic SubSystem: '<S821>/U048D_Bluen_Init' */
    /* Constant: '<S853>/Constant' */
    (void)Rte_Write_VeCIDB_e_FaultSts_InvData_DM_PICM_Value(CeDFIB_e_Init);

    /* End of Outputs for SubSystem: '<S821>/U048D_Bluen_Init' */
    /* End of Outputs for SubSystem: '<S7>/U048D_Init' */
    /* End of Outputs for SubSystem: '<Root>/Initialize Function' */
#endif

}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
