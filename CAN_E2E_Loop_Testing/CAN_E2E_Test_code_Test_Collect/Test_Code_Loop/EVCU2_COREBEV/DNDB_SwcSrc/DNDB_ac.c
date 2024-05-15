/*
 * File: DNDB_ac.c
 *
 * Code generated for Simulink model 'DNDB_ac'.
 *
 * Model version                  : 1.787
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:29:30 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "DNDB_ac.h"

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Exported data definition */
#define START_SEC_CONST_UNSPECIFIED_DNDB
#include "MemMap.h"

/* Definition for custom storage class: FCALocalConstant */
#if Rte_SysCon_Variant_DNDB_IDCM_PEGASUS || Rte_SysCon_Variant_DNDB_MCPA_PEGASUS || Rte_SysCon_Variant_DNDB_MCPB_PEGASUS || Rte_SysCon_Variant_DNDB_SGCP_PEGASUS

static volatile CONST(uint8, DNDB_VAR_INIT) CeDNDB_e_DiagFaild = 4U;/* Referenced by:
                                                                     * '<S11>/Constant Value1'
                                                                     * '<S12>/Constant Value1'
                                                                     * '<S13>/Constant Value1'
                                                                     * '<S14>/Constant Value1'
                                                                     * '<S15>/Constant Value1'
                                                                     * '<S16>/Constant Value1'
                                                                     * '<S17>/Constant Value1'
                                                                     * '<S18>/Constant Value1'
                                                                     * '<S19>/Constant Value1'
                                                                     * '<S20>/Constant Value1'
                                                                     * '<S21>/Constant Value1'
                                                                     * '<S22>/Constant Value1'
                                                                     * '<S23>/Constant Value1'
                                                                     * '<S24>/Constant Value1'
                                                                     * '<S25>/Constant Value1'
                                                                     * '<S26>/Constant Value1'
                                                                     * '<S27>/Constant Value1'
                                                                     * '<S28>/Constant Value1'
                                                                     * '<S29>/Constant Value1'
                                                                     * '<S30>/Constant Value1'
                                                                     * '<S31>/Constant Value1'
                                                                     * '<S32>/Constant Value1'
                                                                     * '<S33>/Constant Value1'
                                                                     * '<S34>/Constant Value1'
                                                                     * '<S35>/Constant Value1'
                                                                     * '<S36>/Constant Value1'
                                                                     * '<S37>/Constant Value1'
                                                                     * '<S147>/Constant Value1'
                                                                     * '<S148>/Constant Value1'
                                                                     * '<S149>/Constant Value1'
                                                                     * '<S150>/Constant Value1'
                                                                     * '<S151>/Constant Value1'
                                                                     * '<S152>/Constant Value1'
                                                                     * '<S153>/Constant Value1'
                                                                     * '<S154>/Constant Value1'
                                                                     * '<S155>/Constant Value1'
                                                                     * '<S156>/Constant Value1'
                                                                     * '<S157>/Constant Value1'
                                                                     * '<S158>/Constant Value1'
                                                                     * '<S159>/Constant Value1'
                                                                     * '<S160>/Constant Value1'
                                                                     * '<S161>/Constant Value1'
                                                                     * '<S162>/Constant Value1'
                                                                     * '<S231>/Constant Value1'
                                                                     * '<S232>/Constant Value1'
                                                                     * '<S233>/Constant Value1'
                                                                     * '<S234>/Constant Value1'
                                                                     * '<S235>/Constant Value1'
                                                                     * '<S236>/Constant Value1'
                                                                     * '<S237>/Constant Value1'
                                                                     * '<S238>/Constant Value1'
                                                                     * '<S239>/Constant Value1'
                                                                     * '<S240>/Constant Value1'
                                                                     * '<S241>/Constant Value1'
                                                                     * '<S242>/Constant Value1'
                                                                     * '<S243>/Constant Value1'
                                                                     * '<S244>/Constant Value1'
                                                                     * '<S245>/Constant Value1'
                                                                     * '<S246>/Constant Value1'
                                                                     * '<S247>/Constant Value1'
                                                                     * '<S248>/Constant Value1'
                                                                     * '<S249>/Constant Value1'
                                                                     * '<S250>/Constant Value1'
                                                                     * '<S251>/Constant Value1'
                                                                     * '<S252>/Constant Value1'
                                                                     * '<S253>/Constant Value1'
                                                                     * '<S254>/Constant Value1'
                                                                     * '<S255>/Constant Value1'
                                                                     * '<S256>/Constant Value1'
                                                                     * '<S257>/Constant Value1'
                                                                     * '<S258>/Constant Value1'
                                                                     * '<S259>/Constant Value1'
                                                                     * '<S260>/Constant Value1'
                                                                     * '<S261>/Constant Value1'
                                                                     * '<S387>/Constant Value1'
                                                                     * '<S388>/Constant Value1'
                                                                     * '<S389>/Constant Value1'
                                                                     * '<S390>/Constant Value1'
                                                                     * '<S391>/Constant Value1'
                                                                     * '<S392>/Constant Value1'
                                                                     * '<S393>/Constant Value1'
                                                                     * '<S394>/Constant Value1'
                                                                     * '<S395>/Constant Value1'
                                                                     * '<S396>/Constant Value1'
                                                                     * '<S397>/Constant Value1'
                                                                     * '<S398>/Constant Value1'
                                                                     * '<S399>/Constant Value1'
                                                                     * '<S400>/Constant Value1'
                                                                     * '<S401>/Constant Value1'
                                                                     * '<S402>/Constant Value1'
                                                                     * '<S403>/Constant Value1'
                                                                     * '<S404>/Constant Value1'
                                                                     * '<S405>/Constant Value1'
                                                                     * '<S406>/Constant Value1'
                                                                     * '<S407>/Constant Value1'
                                                                     * '<S408>/Constant Value1'
                                                                     * '<S409>/Constant Value1'
                                                                     * '<S410>/Constant Value1'
                                                                     * '<S411>/Constant Value1'
                                                                     * '<S517>/Constant Value1'
                                                                     * '<S518>/Constant Value1'
                                                                     * '<S519>/Constant Value1'
                                                                     * '<S520>/Constant Value1'
                                                                     * '<S521>/Constant Value1'
                                                                     * '<S522>/Constant Value1'
                                                                     * '<S523>/Constant Value1'
                                                                     * '<S524>/Constant Value1'
                                                                     * '<S525>/Constant Value1'
                                                                     * '<S526>/Constant Value1'
                                                                     * '<S527>/Constant Value1'
                                                                     * '<S528>/Constant Value1'
                                                                     * '<S529>/Constant Value1'
                                                                     * '<S530>/Constant Value1'
                                                                     * '<S531>/Constant Value1'
                                                                     * '<S532>/Constant Value1'
                                                                     * '<S533>/Constant Value1'
                                                                     * '<S534>/Constant Value1'
                                                                     * '<S535>/Constant Value1'
                                                                     * '<S536>/Constant Value1'
                                                                     * '<S537>/Constant Value1'
                                                                     * '<S538>/Constant Value1'
                                                                     * '<S539>/Constant Value1'
                                                                     * '<S540>/Constant Value1'
                                                                     * '<S541>/Constant Value1'
                                                                     * '<S542>/Constant Value1'
                                                                     * '<S543>/Constant Value1'
                                                                     * '<S544>/Constant Value1'
                                                                     * '<S545>/Constant Value1'
                                                                     * '<S546>/Constant Value1'
                                                                     * '<S547>/Constant Value1'
                                                                     * '<S673>/Constant Value1'
                                                                     * '<S674>/Constant Value1'
                                                                     * '<S675>/Constant Value1'
                                                                     * '<S676>/Constant Value1'
                                                                     * '<S677>/Constant Value1'
                                                                     * '<S678>/Constant Value1'
                                                                     * '<S679>/Constant Value1'
                                                                     * '<S680>/Constant Value1'
                                                                     * '<S681>/Constant Value1'
                                                                     * '<S682>/Constant Value1'
                                                                     * '<S683>/Constant Value1'
                                                                     * '<S684>/Constant Value1'
                                                                     * '<S685>/Constant Value1'
                                                                     * '<S686>/Constant Value1'
                                                                     * '<S687>/Constant Value1'
                                                                     * '<S688>/Constant Value1'
                                                                     * '<S689>/Constant Value1'
                                                                     * '<S690>/Constant Value1'
                                                                     * '<S691>/Constant Value1'
                                                                     * '<S692>/Constant Value1'
                                                                     * '<S693>/Constant Value1'
                                                                     * '<S694>/Constant Value1'
                                                                     * '<S695>/Constant Value1'
                                                                     * '<S696>/Constant Value1'
                                                                     * '<S697>/Constant Value1'
                                                                     * '<S799>/Constant Value1'
                                                                     * '<S800>/Constant Value1'
                                                                     * '<S801>/Constant Value1'
                                                                     * '<S818>/Constant Value1'
                                                                     * '<S819>/Constant Value1'
                                                                     * '<S820>/Constant Value1'
                                                                     * '<S821>/Constant Value1'
                                                                     * '<S822>/Constant Value1'
                                                                     * '<S823>/Constant Value1'
                                                                     * '<S824>/Constant Value1'
                                                                     * '<S825>/Constant Value1'
                                                                     * '<S826>/Constant Value1'
                                                                     * '<S827>/Constant Value1'
                                                                     * '<S828>/Constant Value1'
                                                                     * '<S829>/Constant Value1'
                                                                     * '<S830>/Constant Value1'
                                                                     * '<S831>/Constant Value1'
                                                                     * '<S832>/Constant Value1'
                                                                     * '<S833>/Constant Value1'
                                                                     * '<S834>/Constant Value1'
                                                                     * '<S835>/Constant Value1'
                                                                     * '<S836>/Constant Value1'
                                                                     * '<S837>/Constant Value1'
                                                                     * '<S838>/Constant Value1'
                                                                     * '<S839>/Constant Value1'
                                                                     * '<S840>/Constant Value1'
                                                                     * '<S841>/Constant Value1'
                                                                     * '<S842>/Constant Value1'
                                                                     * '<S843>/Constant Value1'
                                                                     * '<S844>/Constant Value1'
                                                                     * '<S845>/Constant Value1'
                                                                     * '<S846>/Constant Value1'
                                                                     * '<S847>/Constant Value1'
                                                                     * '<S848>/Constant Value1'
                                                                     * '<S974>/Constant Value1'
                                                                     * '<S975>/Constant Value1'
                                                                     * '<S976>/Constant Value1'
                                                                     * '<S977>/Constant Value1'
                                                                     * '<S978>/Constant Value1'
                                                                     * '<S979>/Constant Value1'
                                                                     * '<S980>/Constant Value1'
                                                                     * '<S981>/Constant Value1'
                                                                     * '<S982>/Constant Value1'
                                                                     * '<S983>/Constant Value1'
                                                                     * '<S984>/Constant Value1'
                                                                     * '<S985>/Constant Value1'
                                                                     * '<S986>/Constant Value1'
                                                                     * '<S987>/Constant Value1'
                                                                     * '<S988>/Constant Value1'
                                                                     * '<S989>/Constant Value1'
                                                                     * '<S990>/Constant Value1'
                                                                     * '<S991>/Constant Value1'
                                                                     * '<S992>/Constant Value1'
                                                                     * '<S993>/Constant Value1'
                                                                     * '<S994>/Constant Value1'
                                                                     * '<S995>/Constant Value1'
                                                                     * '<S996>/Constant Value1'
                                                                     * '<S997>/Constant Value1'
                                                                     * '<S998>/Constant Value1'
                                                                     */

#endif

#if Rte_SysCon_Variant_DNDB_IDCM_PEGASUS || Rte_SysCon_Variant_DNDB_MCPA_PEGASUS || Rte_SysCon_Variant_DNDB_MCPB_PEGASUS || Rte_SysCon_Variant_DNDB_SGCP_PEGASUS

static volatile CONST(uint8, DNDB_VAR_INIT) CeDNDB_e_DiagPassd = 3U;/* Referenced by:
                                                                     * '<S11>/Constant Value'
                                                                     * '<S12>/Constant Value'
                                                                     * '<S13>/Constant Value'
                                                                     * '<S14>/Constant Value'
                                                                     * '<S15>/Constant Value'
                                                                     * '<S16>/Constant Value'
                                                                     * '<S17>/Constant Value'
                                                                     * '<S18>/Constant Value'
                                                                     * '<S19>/Constant Value'
                                                                     * '<S20>/Constant Value'
                                                                     * '<S21>/Constant Value'
                                                                     * '<S22>/Constant Value'
                                                                     * '<S23>/Constant Value'
                                                                     * '<S24>/Constant Value'
                                                                     * '<S25>/Constant Value'
                                                                     * '<S26>/Constant Value'
                                                                     * '<S27>/Constant Value'
                                                                     * '<S28>/Constant Value'
                                                                     * '<S29>/Constant Value'
                                                                     * '<S30>/Constant Value'
                                                                     * '<S31>/Constant Value'
                                                                     * '<S32>/Constant Value'
                                                                     * '<S33>/Constant Value'
                                                                     * '<S34>/Constant Value'
                                                                     * '<S35>/Constant Value'
                                                                     * '<S36>/Constant Value'
                                                                     * '<S37>/Constant Value'
                                                                     * '<S147>/Constant Value'
                                                                     * '<S148>/Constant Value'
                                                                     * '<S149>/Constant Value'
                                                                     * '<S150>/Constant Value'
                                                                     * '<S151>/Constant Value'
                                                                     * '<S152>/Constant Value'
                                                                     * '<S153>/Constant Value'
                                                                     * '<S154>/Constant Value'
                                                                     * '<S155>/Constant Value'
                                                                     * '<S156>/Constant Value'
                                                                     * '<S157>/Constant Value'
                                                                     * '<S158>/Constant Value'
                                                                     * '<S159>/Constant Value'
                                                                     * '<S160>/Constant Value'
                                                                     * '<S161>/Constant Value'
                                                                     * '<S162>/Constant Value'
                                                                     * '<S231>/Constant Value'
                                                                     * '<S232>/Constant Value'
                                                                     * '<S233>/Constant Value'
                                                                     * '<S234>/Constant Value'
                                                                     * '<S235>/Constant Value'
                                                                     * '<S236>/Constant Value'
                                                                     * '<S237>/Constant Value'
                                                                     * '<S238>/Constant Value'
                                                                     * '<S239>/Constant Value'
                                                                     * '<S240>/Constant Value'
                                                                     * '<S241>/Constant Value'
                                                                     * '<S242>/Constant Value'
                                                                     * '<S243>/Constant Value'
                                                                     * '<S244>/Constant Value'
                                                                     * '<S245>/Constant Value'
                                                                     * '<S246>/Constant Value'
                                                                     * '<S247>/Constant Value'
                                                                     * '<S248>/Constant Value'
                                                                     * '<S249>/Constant Value'
                                                                     * '<S250>/Constant Value'
                                                                     * '<S251>/Constant Value'
                                                                     * '<S252>/Constant Value'
                                                                     * '<S253>/Constant Value'
                                                                     * '<S254>/Constant Value'
                                                                     * '<S255>/Constant Value'
                                                                     * '<S256>/Constant Value'
                                                                     * '<S257>/Constant Value'
                                                                     * '<S258>/Constant Value'
                                                                     * '<S259>/Constant Value'
                                                                     * '<S260>/Constant Value'
                                                                     * '<S261>/Constant Value'
                                                                     * '<S387>/Constant Value'
                                                                     * '<S388>/Constant Value'
                                                                     * '<S389>/Constant Value'
                                                                     * '<S390>/Constant Value'
                                                                     * '<S391>/Constant Value'
                                                                     * '<S392>/Constant Value'
                                                                     * '<S393>/Constant Value'
                                                                     * '<S394>/Constant Value'
                                                                     * '<S395>/Constant Value'
                                                                     * '<S396>/Constant Value'
                                                                     * '<S397>/Constant Value'
                                                                     * '<S398>/Constant Value'
                                                                     * '<S399>/Constant Value'
                                                                     * '<S400>/Constant Value'
                                                                     * '<S401>/Constant Value'
                                                                     * '<S402>/Constant Value'
                                                                     * '<S403>/Constant Value'
                                                                     * '<S404>/Constant Value'
                                                                     * '<S405>/Constant Value'
                                                                     * '<S406>/Constant Value'
                                                                     * '<S407>/Constant Value'
                                                                     * '<S408>/Constant Value'
                                                                     * '<S409>/Constant Value'
                                                                     * '<S410>/Constant Value'
                                                                     * '<S411>/Constant Value'
                                                                     * '<S517>/Constant Value'
                                                                     * '<S518>/Constant Value'
                                                                     * '<S519>/Constant Value'
                                                                     * '<S520>/Constant Value'
                                                                     * '<S521>/Constant Value'
                                                                     * '<S522>/Constant Value'
                                                                     * '<S523>/Constant Value'
                                                                     * '<S524>/Constant Value'
                                                                     * '<S525>/Constant Value'
                                                                     * '<S526>/Constant Value'
                                                                     * '<S527>/Constant Value'
                                                                     * '<S528>/Constant Value'
                                                                     * '<S529>/Constant Value'
                                                                     * '<S530>/Constant Value'
                                                                     * '<S531>/Constant Value'
                                                                     * '<S532>/Constant Value'
                                                                     * '<S533>/Constant Value'
                                                                     * '<S534>/Constant Value'
                                                                     * '<S535>/Constant Value'
                                                                     * '<S536>/Constant Value'
                                                                     * '<S537>/Constant Value'
                                                                     * '<S538>/Constant Value'
                                                                     * '<S539>/Constant Value'
                                                                     * '<S540>/Constant Value'
                                                                     * '<S541>/Constant Value'
                                                                     * '<S542>/Constant Value'
                                                                     * '<S543>/Constant Value'
                                                                     * '<S544>/Constant Value'
                                                                     * '<S545>/Constant Value'
                                                                     * '<S546>/Constant Value'
                                                                     * '<S547>/Constant Value'
                                                                     * '<S673>/Constant Value'
                                                                     * '<S674>/Constant Value'
                                                                     * '<S675>/Constant Value'
                                                                     * '<S676>/Constant Value'
                                                                     * '<S677>/Constant Value'
                                                                     * '<S678>/Constant Value'
                                                                     * '<S679>/Constant Value'
                                                                     * '<S680>/Constant Value'
                                                                     * '<S681>/Constant Value'
                                                                     * '<S682>/Constant Value'
                                                                     * '<S683>/Constant Value'
                                                                     * '<S684>/Constant Value'
                                                                     * '<S685>/Constant Value'
                                                                     * '<S686>/Constant Value'
                                                                     * '<S687>/Constant Value'
                                                                     * '<S688>/Constant Value'
                                                                     * '<S689>/Constant Value'
                                                                     * '<S690>/Constant Value'
                                                                     * '<S691>/Constant Value'
                                                                     * '<S692>/Constant Value'
                                                                     * '<S693>/Constant Value'
                                                                     * '<S694>/Constant Value'
                                                                     * '<S695>/Constant Value'
                                                                     * '<S696>/Constant Value'
                                                                     * '<S697>/Constant Value'
                                                                     * '<S799>/Constant Value'
                                                                     * '<S800>/Constant Value'
                                                                     * '<S801>/Constant Value'
                                                                     * '<S818>/Constant Value'
                                                                     * '<S819>/Constant Value'
                                                                     * '<S820>/Constant Value'
                                                                     * '<S821>/Constant Value'
                                                                     * '<S822>/Constant Value'
                                                                     * '<S823>/Constant Value'
                                                                     * '<S824>/Constant Value'
                                                                     * '<S825>/Constant Value'
                                                                     * '<S826>/Constant Value'
                                                                     * '<S827>/Constant Value'
                                                                     * '<S828>/Constant Value'
                                                                     * '<S829>/Constant Value'
                                                                     * '<S830>/Constant Value'
                                                                     * '<S831>/Constant Value'
                                                                     * '<S832>/Constant Value'
                                                                     * '<S833>/Constant Value'
                                                                     * '<S834>/Constant Value'
                                                                     * '<S835>/Constant Value'
                                                                     * '<S836>/Constant Value'
                                                                     * '<S837>/Constant Value'
                                                                     * '<S838>/Constant Value'
                                                                     * '<S839>/Constant Value'
                                                                     * '<S840>/Constant Value'
                                                                     * '<S841>/Constant Value'
                                                                     * '<S842>/Constant Value'
                                                                     * '<S843>/Constant Value'
                                                                     * '<S844>/Constant Value'
                                                                     * '<S845>/Constant Value'
                                                                     * '<S846>/Constant Value'
                                                                     * '<S847>/Constant Value'
                                                                     * '<S848>/Constant Value'
                                                                     * '<S974>/Constant Value'
                                                                     * '<S975>/Constant Value'
                                                                     * '<S976>/Constant Value'
                                                                     * '<S977>/Constant Value'
                                                                     * '<S978>/Constant Value'
                                                                     * '<S979>/Constant Value'
                                                                     * '<S980>/Constant Value'
                                                                     * '<S981>/Constant Value'
                                                                     * '<S982>/Constant Value'
                                                                     * '<S983>/Constant Value'
                                                                     * '<S984>/Constant Value'
                                                                     * '<S985>/Constant Value'
                                                                     * '<S986>/Constant Value'
                                                                     * '<S987>/Constant Value'
                                                                     * '<S988>/Constant Value'
                                                                     * '<S989>/Constant Value'
                                                                     * '<S990>/Constant Value'
                                                                     * '<S991>/Constant Value'
                                                                     * '<S992>/Constant Value'
                                                                     * '<S993>/Constant Value'
                                                                     * '<S994>/Constant Value'
                                                                     * '<S995>/Constant Value'
                                                                     * '<S996>/Constant Value'
                                                                     * '<S997>/Constant Value'
                                                                     * '<S998>/Constant Value'
                                                                     */

#endif

#define STOP_SEC_CONST_UNSPECIFIED_DNDB
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_DNDB
#include "MemMap.h"

VAR(B_DNDB_ac_T, DNDB_VAR_INIT) DNDB_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_DNDB
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_DNDB
#include "MemMap.h"

VAR(DW_DNDB_ac_T, DNDB_VAR_INIT) DNDB_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_DNDB
#include "MemMap.h"

/* Model step function for TID1 */
FUNC(void, DNDB_CODE) DNDB_MedTEF(void) /* Explicit Task: MedTEF */
{

#if Rte_SysCon_Variant_DNDB_SGCP_PEGASUS

    uint8 rtb_TmpSignalConversionAtSGCP_D;

#endif

#if Rte_SysCon_Variant_DNDB_SGCP_PEGASUS

    uint8 rtb_TmpSignalConversionAtSGCP_g;

#endif

#if Rte_SysCon_Variant_DNDB_MCPB_PEGASUS

    uint8 rtb_TmpSignalConversionAtMCPB_D;

#endif

#if Rte_SysCon_Variant_DNDB_MCPB_PEGASUS

    uint8 rtb_TmpSignalConversionAtMCPB_m;

#endif

#if Rte_SysCon_Variant_DNDB_MCPA_PEGASUS

    uint8 rtb_TmpSignalConversionAtMCPA_D;

#endif

#if Rte_SysCon_Variant_DNDB_MCPA_PEGASUS

    uint8 rtb_TmpSignalConversionAtMCP_ey;

#endif

#if Rte_SysCon_Variant_DNDB_SGCP_PEGASUS

    uint8 rtb_TmpSignalConversionAtSGCP_i;

#endif

#if Rte_SysCon_Variant_DNDB_SGCP_PEGASUS

    uint8 rtb_TmpSignalConversionAtSGCP_j;

#endif

#if Rte_SysCon_Variant_DNDB_MCPB_PEGASUS

    uint8 rtb_TmpSignalConversionAtMCPB_e;

#endif

#if Rte_SysCon_Variant_DNDB_MCPB_PEGASUS

    uint8 rtb_TmpSignalConversionAtMCPB_n;

#endif

#if Rte_SysCon_Variant_DNDB_MCPA_PEGASUS

    uint8 rtb_TmpSignalConversionAtMCPA_c;

#endif

#if Rte_SysCon_Variant_DNDB_MCPA_PEGASUS

    uint8 rtb_TmpSignalConversionAtMCPA_b;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' incorporates:
     *  SubSystem: '<Root>/BlockIndexMngt_50ms'
     */
    /* SignalConversion generated from: '<S1>/SGCP_DTC_Idx1' incorporates:
     *  RelationalOperator: '<S814>/Relational Operator'
     *  RelationalOperator: '<S814>/Relational Operator1'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P062C_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P063B_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P063D_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P065A_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0698_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0699_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P06E8_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0A1A_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0A37_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0A38_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0A39_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0A3B_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0A4B_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0A4C_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0A4F_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0A50_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0BCC_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0BCD_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0BCE_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0BCF_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0DF0_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0DF4_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0DF5_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0DF6_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0DF7_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0DF8_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0DF9_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0DFA_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0DFB_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0DFC_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0E01_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0E02_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0E03_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0E05_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0E06_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0E07_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0E09_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0E0A_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0E0B_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0E0C_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0E0F_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0E71_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P104D_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P1B1C_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P1B1D_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P1CDA_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P29B0_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P3048_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P30A8_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P30A9_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_U153B_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_U153C_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_U153D_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_U153E_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_U153F_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_U358C_PassFail'
     *  SignalConversion generated from: '<S1>/SGCP_DTC_Idx2'
     *  SignalConversion generated from: '<S1>/SGCP_DTC_Stat1'
     *  SignalConversion generated from: '<S1>/SGCP_DTC_Stat2'
     *  UnitDelay: '<S814>/Unit Delay'
     *  UnitDelay: '<S814>/Unit Delay1'
     */
#if Rte_SysCon_Variant_DNDB_SGCP_PEGASUS

    /* Outputs for Atomic SubSystem: '<S1>/SGCP_PEGASUS_BlockIndexMngt' */
    /* SignalConversion generated from: '<S1>/SGCP_DTC_Idx1' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCP_DTC_Idx1'
     */
    (void)Rte_Read_VeCRDB_y_SGCP_DTC_Idx1_Value(&rtb_TmpSignalConversionAtSGCP_D);

    /* SignalConversion generated from: '<S1>/SGCP_DTC_Stat1' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCP_DTC_Stat1'
     */
    (void)Rte_Read_VeCRDB_y_SGCP_DTC_Stat1_Value
        (&rtb_TmpSignalConversionAtSGCP_i);

    /* SignalConversion generated from: '<S1>/SGCP_DTC_Idx2' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCP_DTC_Idx2'
     */
    (void)Rte_Read_VeCRDB_y_SGCP_DTC_Idx2_Value(&rtb_TmpSignalConversionAtSGCP_g);

    /* SignalConversion generated from: '<S1>/SGCP_DTC_Stat2' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCP_DTC_Stat2'
     */
    (void)Rte_Read_VeCRDB_y_SGCP_DTC_Stat2_Value
        (&rtb_TmpSignalConversionAtSGCP_j);

    /* Outputs for Atomic SubSystem: '<S6>/SGCP_PEGASUS_BlockIndexMngt' */
    /* Outputs for Enabled SubSystem: '<S814>/BlocksIndex1' incorporates:
     *  EnablePort: '<S815>/Enable'
     */
    if (DNDB_ac_DW.UnitDelay_DSTATE != rtb_TmpSignalConversionAtSGCP_D)
    {
        /* SwitchCase: '<S817>/SwitchCase' incorporates:
         *  Constant: '<S818>/Constant Value'
         *  Constant: '<S818>/Constant Value1'
         *  Constant: '<S819>/Constant Value'
         *  Constant: '<S819>/Constant Value1'
         *  Constant: '<S820>/Constant Value'
         *  Constant: '<S820>/Constant Value1'
         *  Constant: '<S821>/Constant Value'
         *  Constant: '<S821>/Constant Value1'
         *  Constant: '<S822>/Constant Value'
         *  Constant: '<S822>/Constant Value1'
         *  Constant: '<S823>/Constant Value'
         *  Constant: '<S823>/Constant Value1'
         *  Constant: '<S824>/Constant Value'
         *  Constant: '<S824>/Constant Value1'
         *  Constant: '<S825>/Constant Value'
         *  Constant: '<S825>/Constant Value1'
         *  Constant: '<S826>/Constant Value'
         *  Constant: '<S826>/Constant Value1'
         *  Constant: '<S827>/Constant Value'
         *  Constant: '<S827>/Constant Value1'
         *  Constant: '<S828>/Constant Value'
         *  Constant: '<S828>/Constant Value1'
         *  Constant: '<S829>/Constant Value'
         *  Constant: '<S829>/Constant Value1'
         *  Constant: '<S830>/Constant Value'
         *  Constant: '<S830>/Constant Value1'
         *  Constant: '<S831>/Constant Value'
         *  Constant: '<S831>/Constant Value1'
         *  Constant: '<S832>/Constant Value'
         *  Constant: '<S832>/Constant Value1'
         *  Constant: '<S833>/Constant Value'
         *  Constant: '<S833>/Constant Value1'
         *  Constant: '<S834>/Constant Value'
         *  Constant: '<S834>/Constant Value1'
         *  Constant: '<S835>/Constant Value'
         *  Constant: '<S835>/Constant Value1'
         *  Constant: '<S836>/Constant Value'
         *  Constant: '<S836>/Constant Value1'
         *  Constant: '<S837>/Constant Value'
         *  Constant: '<S837>/Constant Value1'
         *  Constant: '<S838>/Constant Value'
         *  Constant: '<S838>/Constant Value1'
         *  Constant: '<S839>/Constant Value'
         *  Constant: '<S839>/Constant Value1'
         *  Constant: '<S840>/Constant Value'
         *  Constant: '<S840>/Constant Value1'
         *  Constant: '<S841>/Constant Value'
         *  Constant: '<S841>/Constant Value1'
         *  Constant: '<S842>/Constant Value'
         *  Constant: '<S842>/Constant Value1'
         *  Constant: '<S843>/Constant Value'
         *  Constant: '<S843>/Constant Value1'
         *  Constant: '<S844>/Constant Value'
         *  Constant: '<S844>/Constant Value1'
         *  Constant: '<S845>/Constant Value'
         *  Constant: '<S845>/Constant Value1'
         *  Constant: '<S846>/Constant Value'
         *  Constant: '<S846>/Constant Value1'
         *  Constant: '<S847>/Constant Value'
         *  Constant: '<S847>/Constant Value1'
         *  Constant: '<S848>/Constant Value'
         *  Constant: '<S848>/Constant Value1'
         *  RelationalOperator: '<S818>/E1'
         *  RelationalOperator: '<S818>/E2'
         *  RelationalOperator: '<S819>/E1'
         *  RelationalOperator: '<S819>/E2'
         *  RelationalOperator: '<S820>/E1'
         *  RelationalOperator: '<S820>/E2'
         *  RelationalOperator: '<S821>/E1'
         *  RelationalOperator: '<S821>/E2'
         *  RelationalOperator: '<S822>/E1'
         *  RelationalOperator: '<S822>/E2'
         *  RelationalOperator: '<S823>/E1'
         *  RelationalOperator: '<S823>/E2'
         *  RelationalOperator: '<S824>/E1'
         *  RelationalOperator: '<S824>/E2'
         *  RelationalOperator: '<S825>/E1'
         *  RelationalOperator: '<S825>/E2'
         *  RelationalOperator: '<S826>/E1'
         *  RelationalOperator: '<S826>/E2'
         *  RelationalOperator: '<S827>/E1'
         *  RelationalOperator: '<S827>/E2'
         *  RelationalOperator: '<S828>/E1'
         *  RelationalOperator: '<S828>/E2'
         *  RelationalOperator: '<S829>/E1'
         *  RelationalOperator: '<S829>/E2'
         *  RelationalOperator: '<S830>/E1'
         *  RelationalOperator: '<S830>/E2'
         *  RelationalOperator: '<S831>/E1'
         *  RelationalOperator: '<S831>/E2'
         *  RelationalOperator: '<S832>/E1'
         *  RelationalOperator: '<S832>/E2'
         *  RelationalOperator: '<S833>/E1'
         *  RelationalOperator: '<S833>/E2'
         *  RelationalOperator: '<S834>/E1'
         *  RelationalOperator: '<S834>/E2'
         *  RelationalOperator: '<S835>/E1'
         *  RelationalOperator: '<S835>/E2'
         *  RelationalOperator: '<S836>/E1'
         *  RelationalOperator: '<S836>/E2'
         *  RelationalOperator: '<S837>/E1'
         *  RelationalOperator: '<S837>/E2'
         *  RelationalOperator: '<S838>/E1'
         *  RelationalOperator: '<S838>/E2'
         *  RelationalOperator: '<S839>/E1'
         *  RelationalOperator: '<S839>/E2'
         *  RelationalOperator: '<S840>/E1'
         *  RelationalOperator: '<S840>/E2'
         *  RelationalOperator: '<S841>/E1'
         *  RelationalOperator: '<S841>/E2'
         *  RelationalOperator: '<S842>/E1'
         *  RelationalOperator: '<S842>/E2'
         *  RelationalOperator: '<S843>/E1'
         *  RelationalOperator: '<S843>/E2'
         *  RelationalOperator: '<S844>/E1'
         *  RelationalOperator: '<S844>/E2'
         *  RelationalOperator: '<S845>/E1'
         *  RelationalOperator: '<S845>/E2'
         *  RelationalOperator: '<S846>/E1'
         *  RelationalOperator: '<S846>/E2'
         *  RelationalOperator: '<S847>/E1'
         *  RelationalOperator: '<S847>/E2'
         *  RelationalOperator: '<S848>/E1'
         *  RelationalOperator: '<S848>/E2'
         */
        switch (rtb_TmpSignalConversionAtSGCP_D)
        {
          case 0:
            /* Outputs for IfAction SubSystem: '<S817>/P0A1A' incorporates:
             *  ActionPort: '<S821>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S821>/Subsystem' incorporates:
             *  EnablePort: '<S861>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S821>/Merge1' incorporates:
                 *  Constant: '<S863>/Constant'
                 *  SignalConversion generated from: '<S861>/VeDNDB_e_FaultSts_GenCntrlMode'
                 */
                DNDB_ac_B.Merge1_fg = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S821>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S821>/Subsystem1' incorporates:
             *  EnablePort: '<S862>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S821>/Merge1' incorporates:
                 *  Constant: '<S864>/Constant'
                 *  SignalConversion generated from: '<S862>/VeDNDB_e_FaultSts_GenCntrlMode'
                 */
                DNDB_ac_B.Merge1_fg = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S821>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S817>/P0A1A' */
            break;

          case 1:
            break;

          case 2:
            /* Outputs for IfAction SubSystem: '<S817>/P3048' incorporates:
             *  ActionPort: '<S847>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S847>/Subsystem' incorporates:
             *  EnablePort: '<S965>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S847>/Merge1' incorporates:
                 *  Constant: '<S967>/Constant'
                 *  SignalConversion generated from: '<S965>/VeDNDB_e_FaultSts_DrMtr_C_IntCMTorqCalPerf'
                 */
                DNDB_ac_B.Merge1_mh = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S847>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S847>/Subsystem1' incorporates:
             *  EnablePort: '<S966>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S847>/Merge1' incorporates:
                 *  Constant: '<S968>/Constant'
                 *  SignalConversion generated from: '<S966>/VeDNDB_e_FaultSts_DrMtr_C_IntCMTorqCalPerf'
                 */
                DNDB_ac_B.Merge1_mh = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S847>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S817>/P3048' */
            break;

          case 3:
            /* Outputs for IfAction SubSystem: '<S817>/P062C' incorporates:
             *  ActionPort: '<S818>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S818>/Subsystem' incorporates:
             *  EnablePort: '<S849>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S818>/Merge1' incorporates:
                 *  Constant: '<S851>/Constant'
                 *  SignalConversion generated from: '<S849>/VeDNDB_e_FaultSts_CM_VehSpdPerf'
                 */
                DNDB_ac_B.Merge1_ie = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S818>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S818>/Subsystem1' incorporates:
             *  EnablePort: '<S850>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S818>/Merge1' incorporates:
                 *  Constant: '<S852>/Constant'
                 *  SignalConversion generated from: '<S850>/VeDNDB_e_FaultSts_CM_VehSpdPerf'
                 */
                DNDB_ac_B.Merge1_ie = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S818>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S817>/P062C' */
            break;

          case 4:
            /* Outputs for IfAction SubSystem: '<S817>/U358C' incorporates:
             *  ActionPort: '<S848>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S848>/Subsystem' incorporates:
             *  EnablePort: '<S969>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S848>/Merge1' incorporates:
                 *  Constant: '<S971>/Constant'
                 *  SignalConversion generated from: '<S969>/VeDNDB_e_FaultSts_CM_IntrnlTmpSenr_C_Perf'
                 */
                DNDB_ac_B.Merge1_cn = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S848>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S848>/Subsystem1' incorporates:
             *  EnablePort: '<S970>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S848>/Merge1' incorporates:
                 *  Constant: '<S972>/Constant'
                 *  SignalConversion generated from: '<S970>/VeDNDB_e_FaultSts_CM_IntrnlTmpSenr_C_Perf'
                 */
                DNDB_ac_B.Merge1_cn = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S848>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S817>/U358C' */
            break;

          case 5:
            /* Outputs for IfAction SubSystem: '<S817>/P0698' incorporates:
             *  ActionPort: '<S819>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S819>/Subsystem' incorporates:
             *  EnablePort: '<S853>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S819>/Merge1' incorporates:
                 *  Constant: '<S855>/Constant'
                 *  SignalConversion generated from: '<S853>/VeDNDB_e_FaultSts_SnsrRefVolt3CktLo'
                 */
                DNDB_ac_B.Merge1_hl = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S819>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S819>/Subsystem1' incorporates:
             *  EnablePort: '<S854>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S819>/Merge1' incorporates:
                 *  Constant: '<S856>/Constant'
                 *  SignalConversion generated from: '<S854>/VeDNDB_e_FaultSts_SnsrRefVolt3CktLo'
                 */
                DNDB_ac_B.Merge1_hl = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S819>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S817>/P0698' */
            break;

          case 6:
            /* Outputs for IfAction SubSystem: '<S817>/P0699' incorporates:
             *  ActionPort: '<S820>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S820>/Subsystem' incorporates:
             *  EnablePort: '<S857>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S820>/Merge1' incorporates:
                 *  Constant: '<S859>/Constant'
                 *  SignalConversion generated from: '<S857>/VeDNDB_e_FaultSts_SnsrRefVolt3CktHi'
                 */
                DNDB_ac_B.Merge1_nt = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S820>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S820>/Subsystem1' incorporates:
             *  EnablePort: '<S858>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S820>/Merge1' incorporates:
                 *  Constant: '<S860>/Constant'
                 *  SignalConversion generated from: '<S858>/VeDNDB_e_FaultSts_SnsrRefVolt3CktHi'
                 */
                DNDB_ac_B.Merge1_nt = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S820>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S817>/P0699' */
            break;

          case 7:
            /* Outputs for IfAction SubSystem: '<S817>/P0A37' incorporates:
             *  ActionPort: '<S822>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S822>/Subsystem' incorporates:
             *  EnablePort: '<S865>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S822>/Merge1' incorporates:
                 *  Constant: '<S867>/Constant'
                 *  SignalConversion generated from: '<S865>/VeDNDB_e_FaultSts_GenrTempSnsrPerf'
                 */
                DNDB_ac_B.Merge1_hh = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S822>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S822>/Subsystem1' incorporates:
             *  EnablePort: '<S866>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S822>/Merge1' incorporates:
                 *  Constant: '<S868>/Constant'
                 *  SignalConversion generated from: '<S866>/VeDNDB_e_FaultSts_GenrTempSnsrPerf'
                 */
                DNDB_ac_B.Merge1_hh = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S822>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S817>/P0A37' */
            break;

          case 8:
            /* Outputs for IfAction SubSystem: '<S817>/P0A38' incorporates:
             *  ActionPort: '<S823>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S823>/Subsystem' incorporates:
             *  EnablePort: '<S869>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S823>/Merge1' incorporates:
                 *  Constant: '<S871>/Constant'
                 *  SignalConversion generated from: '<S869>/VeDNDB_e_FaultSts_GenrTempSnsrCktLo'
                 */
                DNDB_ac_B.Merge1_pe = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S823>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S823>/Subsystem1' incorporates:
             *  EnablePort: '<S870>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S823>/Merge1' incorporates:
                 *  Constant: '<S872>/Constant'
                 *  SignalConversion generated from: '<S870>/VeDNDB_e_FaultSts_GenrTempSnsrCktLo'
                 */
                DNDB_ac_B.Merge1_pe = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S823>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S817>/P0A38' */
            break;

          case 9:
            /* Outputs for IfAction SubSystem: '<S817>/P0A39' incorporates:
             *  ActionPort: '<S824>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S824>/Subsystem' incorporates:
             *  EnablePort: '<S873>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S824>/Merge1' incorporates:
                 *  Constant: '<S875>/Constant'
                 *  SignalConversion generated from: '<S873>/VeDNDB_e_FaultSts_GenrTempSnsrCktHi'
                 */
                DNDB_ac_B.Merge1_g4 = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S824>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S824>/Subsystem1' incorporates:
             *  EnablePort: '<S874>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S824>/Merge1' incorporates:
                 *  Constant: '<S876>/Constant'
                 *  SignalConversion generated from: '<S874>/VeDNDB_e_FaultSts_GenrTempSnsrCktHi'
                 */
                DNDB_ac_B.Merge1_g4 = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S824>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S817>/P0A39' */
            break;

          case 10:
            /* Outputs for IfAction SubSystem: '<S817>/P0A3B' incorporates:
             *  ActionPort: '<S825>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S825>/Subsystem' incorporates:
             *  EnablePort: '<S877>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S825>/Merge1' incorporates:
                 *  Constant: '<S879>/Constant'
                 *  SignalConversion generated from: '<S877>/VeDNDB_e_FaultSts_GenrOvrtemp'
                 */
                DNDB_ac_B.Merge1_mq = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S825>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S825>/Subsystem1' incorporates:
             *  EnablePort: '<S878>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S825>/Merge1' incorporates:
                 *  Constant: '<S880>/Constant'
                 *  SignalConversion generated from: '<S878>/VeDNDB_e_FaultSts_GenrOvrtemp'
                 */
                DNDB_ac_B.Merge1_mq = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S825>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S817>/P0A3B' */
            break;

          case 11:
            /* Outputs for IfAction SubSystem: '<S817>/P0DF6' incorporates:
             *  ActionPort: '<S832>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S832>/Subsystem' incorporates:
             *  EnablePort: '<S905>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S832>/Merge1' incorporates:
                 *  Constant: '<S907>/Constant'
                 *  SignalConversion generated from: '<S905>/VeDNDB_e_FaultSts_GenrInvrtTempSnsr2_CktHi'
                 */
                DNDB_ac_B.Merge1_ps = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S832>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S832>/Subsystem1' incorporates:
             *  EnablePort: '<S906>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S832>/Merge1' incorporates:
                 *  Constant: '<S908>/Constant'
                 *  SignalConversion generated from: '<S906>/VeDNDB_e_FaultSts_GenrInvrtTempSnsr2_CktHi'
                 */
                DNDB_ac_B.Merge1_ps = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S832>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S817>/P0DF6' */
            break;

          case 12:
            /* Outputs for IfAction SubSystem: '<S817>/P0DF8' incorporates:
             *  ActionPort: '<S833>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S833>/Subsystem' incorporates:
             *  EnablePort: '<S909>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S833>/Merge1' incorporates:
                 *  Constant: '<S911>/Constant'
                 *  SignalConversion generated from: '<S909>/VeDNDB_e_FaultSts_GenrInvrtTempSnsr3_CktLo'
                 */
                DNDB_ac_B.Merge1_p = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S833>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S833>/Subsystem1' incorporates:
             *  EnablePort: '<S910>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S833>/Merge1' incorporates:
                 *  Constant: '<S912>/Constant'
                 *  SignalConversion generated from: '<S910>/VeDNDB_e_FaultSts_GenrInvrtTempSnsr3_CktLo'
                 */
                DNDB_ac_B.Merge1_p = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S833>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S817>/P0DF8' */
            break;

          case 13:
            /* Outputs for IfAction SubSystem: '<S817>/P0DF9' incorporates:
             *  ActionPort: '<S834>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S834>/Subsystem' incorporates:
             *  EnablePort: '<S913>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S834>/Merge1' incorporates:
                 *  Constant: '<S915>/Constant'
                 *  SignalConversion generated from: '<S913>/VeDNDB_e_FaultSts_GenrInvrtTempSnsr3_CktHi'
                 */
                DNDB_ac_B.Merge1_or = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S834>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S834>/Subsystem1' incorporates:
             *  EnablePort: '<S914>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S834>/Merge1' incorporates:
                 *  Constant: '<S916>/Constant'
                 *  SignalConversion generated from: '<S914>/VeDNDB_e_FaultSts_GenrInvrtTempSnsr3_CktHi'
                 */
                DNDB_ac_B.Merge1_or = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S834>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S817>/P0DF9' */
            break;

          case 14:
            /* Outputs for IfAction SubSystem: '<S817>/P0BCF' incorporates:
             *  ActionPort: '<S829>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S829>/Subsystem' incorporates:
             *  EnablePort: '<S893>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S829>/Merge1' incorporates:
                 *  Constant: '<S895>/Constant'
                 *  SignalConversion generated from: '<S893>/VeDNDB_e_FaultSts_GenrInvrtTempSnsr_CktHi'
                 */
                DNDB_ac_B.Merge1_gb = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S829>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S829>/Subsystem1' incorporates:
             *  EnablePort: '<S894>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S829>/Merge1' incorporates:
                 *  Constant: '<S896>/Constant'
                 *  SignalConversion generated from: '<S894>/VeDNDB_e_FaultSts_GenrInvrtTempSnsr_CktHi'
                 */
                DNDB_ac_B.Merge1_gb = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S829>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S817>/P0BCF' */
            break;

          case 15:
            /* Outputs for IfAction SubSystem: '<S817>/P0BCE' incorporates:
             *  ActionPort: '<S828>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S828>/Subsystem' incorporates:
             *  EnablePort: '<S889>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S828>/Merge1' incorporates:
                 *  Constant: '<S891>/Constant'
                 *  SignalConversion generated from: '<S889>/VeDNDB_e_FaultSts_GenrInvrtTempSnsr_CktLo'
                 */
                DNDB_ac_B.Merge1_ifk = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S828>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S828>/Subsystem1' incorporates:
             *  EnablePort: '<S890>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S828>/Merge1' incorporates:
                 *  Constant: '<S892>/Constant'
                 *  SignalConversion generated from: '<S890>/VeDNDB_e_FaultSts_GenrInvrtTempSnsr_CktLo'
                 */
                DNDB_ac_B.Merge1_ifk = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S828>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S817>/P0BCE' */
            break;

          case 16:
            /* Outputs for IfAction SubSystem: '<S817>/P0BCD' incorporates:
             *  ActionPort: '<S827>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S827>/Subsystem' incorporates:
             *  EnablePort: '<S885>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S827>/Merge1' incorporates:
                 *  Constant: '<S887>/Constant'
                 *  SignalConversion generated from: '<S885>/VeDNDB_e_FaultSts_GenrInvrtTempSnsr_CktPerf'
                 */
                DNDB_ac_B.Merge1_al = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S827>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S827>/Subsystem1' incorporates:
             *  EnablePort: '<S886>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S827>/Merge1' incorporates:
                 *  Constant: '<S888>/Constant'
                 *  SignalConversion generated from: '<S886>/VeDNDB_e_FaultSts_GenrInvrtTempSnsr_CktPerf'
                 */
                DNDB_ac_B.Merge1_al = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S827>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S817>/P0BCD' */
            break;

          case 17:
            /* Outputs for IfAction SubSystem: '<S817>/P0DF5' incorporates:
             *  ActionPort: '<S831>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S831>/Subsystem' incorporates:
             *  EnablePort: '<S901>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S831>/Merge1' incorporates:
                 *  Constant: '<S903>/Constant'
                 *  SignalConversion generated from: '<S901>/VeDNDB_e_FaultSts_GenrInvrtTempSnsr2_CktLo'
                 */
                DNDB_ac_B.Merge1_ou = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S831>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S831>/Subsystem1' incorporates:
             *  EnablePort: '<S902>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S831>/Merge1' incorporates:
                 *  Constant: '<S904>/Constant'
                 *  SignalConversion generated from: '<S902>/VeDNDB_e_FaultSts_GenrInvrtTempSnsr2_CktLo'
                 */
                DNDB_ac_B.Merge1_ou = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S831>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S817>/P0DF5' */
            break;

          case 18:
            /* Outputs for IfAction SubSystem: '<S817>/P0BCC' incorporates:
             *  ActionPort: '<S826>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S826>/Subsystem' incorporates:
             *  EnablePort: '<S881>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S826>/Merge1' incorporates:
                 *  Constant: '<S883>/Constant'
                 *  SignalConversion generated from: '<S881>/VeDNDB_e_FaultSts_GenrInvrtTempSnsr_Ckt'
                 */
                DNDB_ac_B.Merge1_hf = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S826>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S826>/Subsystem1' incorporates:
             *  EnablePort: '<S882>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S826>/Merge1' incorporates:
                 *  Constant: '<S884>/Constant'
                 *  SignalConversion generated from: '<S882>/VeDNDB_e_FaultSts_GenrInvrtTempSnsr_Ckt'
                 */
                DNDB_ac_B.Merge1_hf = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S826>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S817>/P0BCC' */
            break;

          case 19:
            /* Outputs for IfAction SubSystem: '<S817>/P0DF0' incorporates:
             *  ActionPort: '<S830>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S830>/Subsystem' incorporates:
             *  EnablePort: '<S897>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S830>/Merge1' incorporates:
                 *  Constant: '<S899>/Constant'
                 *  SignalConversion generated from: '<S897>/VeDNDB_e_FaultSts_GenrInvrtTempSnsr2_Ckt'
                 */
                DNDB_ac_B.Merge1_hn = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S830>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S830>/Subsystem1' incorporates:
             *  EnablePort: '<S898>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S830>/Merge1' incorporates:
                 *  Constant: '<S900>/Constant'
                 *  SignalConversion generated from: '<S898>/VeDNDB_e_FaultSts_GenrInvrtTempSnsr2_Ckt'
                 */
                DNDB_ac_B.Merge1_hn = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S830>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S817>/P0DF0' */
            break;

          case 20:
            /* Outputs for IfAction SubSystem: '<S817>/P0E01' incorporates:
             *  ActionPort: '<S836>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S836>/Subsystem' incorporates:
             *  EnablePort: '<S921>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S836>/Merge1' incorporates:
                 *  Constant: '<S923>/Constant'
                 *  SignalConversion generated from: '<S921>/VeDNDB_e_FaultSts_Genr_PU_CurrSnsr_CktPerf'
                 */
                DNDB_ac_B.Merge1_lf = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S836>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S836>/Subsystem1' incorporates:
             *  EnablePort: '<S922>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S836>/Merge1' incorporates:
                 *  Constant: '<S924>/Constant'
                 *  SignalConversion generated from: '<S922>/VeDNDB_e_FaultSts_Genr_PU_CurrSnsr_CktPerf'
                 */
                DNDB_ac_B.Merge1_lf = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S836>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S817>/P0E01' */
            break;

          case 21:
            /* Outputs for IfAction SubSystem: '<S817>/P0E02' incorporates:
             *  ActionPort: '<S837>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S837>/Subsystem' incorporates:
             *  EnablePort: '<S925>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S837>/Merge1' incorporates:
                 *  Constant: '<S927>/Constant'
                 *  SignalConversion generated from: '<S925>/VeDNDB_e_FaultSts_Genr_PU_CurrSnsr_CktLo'
                 */
                DNDB_ac_B.Merge1_eg = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S837>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S837>/Subsystem1' incorporates:
             *  EnablePort: '<S926>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S837>/Merge1' incorporates:
                 *  Constant: '<S928>/Constant'
                 *  SignalConversion generated from: '<S926>/VeDNDB_e_FaultSts_Genr_PU_CurrSnsr_CktLo'
                 */
                DNDB_ac_B.Merge1_eg = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S837>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S817>/P0E02' */
            break;

          case 22:
            /* Outputs for IfAction SubSystem: '<S817>/P0E03' incorporates:
             *  ActionPort: '<S838>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S838>/Subsystem' incorporates:
             *  EnablePort: '<S929>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S838>/Merge1' incorporates:
                 *  Constant: '<S931>/Constant'
                 *  SignalConversion generated from: '<S929>/VeDNDB_e_FaultSts_Genr_PU_CurrSnsr_CktHi'
                 */
                DNDB_ac_B.Merge1_if = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S838>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S838>/Subsystem1' incorporates:
             *  EnablePort: '<S930>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S838>/Merge1' incorporates:
                 *  Constant: '<S932>/Constant'
                 *  SignalConversion generated from: '<S930>/VeDNDB_e_FaultSts_Genr_PU_CurrSnsr_CktHi'
                 */
                DNDB_ac_B.Merge1_if = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S838>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S817>/P0E03' */
            break;

          case 23:
            /* Outputs for IfAction SubSystem: '<S817>/P0E05' incorporates:
             *  ActionPort: '<S839>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S839>/Subsystem' incorporates:
             *  EnablePort: '<S933>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S839>/Merge1' incorporates:
                 *  Constant: '<S935>/Constant'
                 *  SignalConversion generated from: '<S933>/VeDNDB_e_FaultSts_Genr_PV_CurrSnsr_CktPerf'
                 */
                DNDB_ac_B.Merge1_gt = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S839>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S839>/Subsystem1' incorporates:
             *  EnablePort: '<S934>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S839>/Merge1' incorporates:
                 *  Constant: '<S936>/Constant'
                 *  SignalConversion generated from: '<S934>/VeDNDB_e_FaultSts_Genr_PV_CurrSnsr_CktPerf'
                 */
                DNDB_ac_B.Merge1_gt = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S839>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S817>/P0E05' */
            break;

          case 24:
            /* Outputs for IfAction SubSystem: '<S817>/P0E06' incorporates:
             *  ActionPort: '<S840>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S840>/Subsystem' incorporates:
             *  EnablePort: '<S937>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S840>/Merge1' incorporates:
                 *  Constant: '<S939>/Constant'
                 *  SignalConversion generated from: '<S937>/VeDNDB_e_FaultSts_Genr_PV_CurrSnsr_CktLo'
                 */
                DNDB_ac_B.Merge1_l = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S840>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S840>/Subsystem1' incorporates:
             *  EnablePort: '<S938>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S840>/Merge1' incorporates:
                 *  Constant: '<S940>/Constant'
                 *  SignalConversion generated from: '<S938>/VeDNDB_e_FaultSts_Genr_PV_CurrSnsr_CktLo'
                 */
                DNDB_ac_B.Merge1_l = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S840>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S817>/P0E06' */
            break;

          case 25:
            /* Outputs for IfAction SubSystem: '<S817>/P0E07' incorporates:
             *  ActionPort: '<S841>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S841>/Subsystem' incorporates:
             *  EnablePort: '<S941>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S841>/Merge1' incorporates:
                 *  Constant: '<S943>/Constant'
                 *  SignalConversion generated from: '<S941>/VeDNDB_e_FaultSts_Genr_PV_CurrSnsr_CktHi'
                 */
                DNDB_ac_B.Merge1_gg = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S841>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S841>/Subsystem1' incorporates:
             *  EnablePort: '<S942>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S841>/Merge1' incorporates:
                 *  Constant: '<S944>/Constant'
                 *  SignalConversion generated from: '<S942>/VeDNDB_e_FaultSts_Genr_PV_CurrSnsr_CktHi'
                 */
                DNDB_ac_B.Merge1_gg = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S841>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S817>/P0E07' */
            break;

          case 26:
            /* Outputs for IfAction SubSystem: '<S817>/P0E09' incorporates:
             *  ActionPort: '<S842>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S842>/Subsystem' incorporates:
             *  EnablePort: '<S945>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S842>/Merge1' incorporates:
                 *  Constant: '<S947>/Constant'
                 *  SignalConversion generated from: '<S945>/VeDNDB_e_FaultSts_Genr_PW_CurrSnsr_CktPerf'
                 */
                DNDB_ac_B.Merge1_o3 = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S842>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S842>/Subsystem1' incorporates:
             *  EnablePort: '<S946>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S842>/Merge1' incorporates:
                 *  Constant: '<S948>/Constant'
                 *  SignalConversion generated from: '<S946>/VeDNDB_e_FaultSts_Genr_PW_CurrSnsr_CktPerf'
                 */
                DNDB_ac_B.Merge1_o3 = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S842>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S817>/P0E09' */
            break;

          case 27:
            /* Outputs for IfAction SubSystem: '<S817>/P0E0A' incorporates:
             *  ActionPort: '<S843>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S843>/Subsystem' incorporates:
             *  EnablePort: '<S949>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S843>/Merge1' incorporates:
                 *  Constant: '<S951>/Constant'
                 *  SignalConversion generated from: '<S949>/VeDNDB_e_FaultSts_Genr_PW_CurrSnsr_CktLo'
                 */
                DNDB_ac_B.Merge1_da = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S843>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S843>/Subsystem1' incorporates:
             *  EnablePort: '<S950>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S843>/Merge1' incorporates:
                 *  Constant: '<S952>/Constant'
                 *  SignalConversion generated from: '<S950>/VeDNDB_e_FaultSts_Genr_PW_CurrSnsr_CktLo'
                 */
                DNDB_ac_B.Merge1_da = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S843>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S817>/P0E0A' */
            break;

          case 28:
            /* Outputs for IfAction SubSystem: '<S817>/P0E0B' incorporates:
             *  ActionPort: '<S844>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S844>/Subsystem' incorporates:
             *  EnablePort: '<S953>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S844>/Merge1' incorporates:
                 *  Constant: '<S955>/Constant'
                 *  SignalConversion generated from: '<S953>/VeDNDB_e_FaultSts_Genr_PW_CurrSnsr_CktHi'
                 */
                DNDB_ac_B.Merge1_a4 = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S844>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S844>/Subsystem1' incorporates:
             *  EnablePort: '<S954>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S844>/Merge1' incorporates:
                 *  Constant: '<S956>/Constant'
                 *  SignalConversion generated from: '<S954>/VeDNDB_e_FaultSts_Genr_PW_CurrSnsr_CktHi'
                 */
                DNDB_ac_B.Merge1_a4 = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S844>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S817>/P0E0B' */
            break;

          case 29:
            /* Outputs for IfAction SubSystem: '<S817>/P0DFA' incorporates:
             *  ActionPort: '<S835>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S835>/Subsystem' incorporates:
             *  EnablePort: '<S917>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S835>/Merge1' incorporates:
                 *  Constant: '<S919>/Constant'
                 *  SignalConversion generated from: '<S917>/VeDNDB_e_FaultSts_GenrPUVW_CurrSnsr_Corr'
                 */
                DNDB_ac_B.Merge1_my = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S835>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S835>/Subsystem1' incorporates:
             *  EnablePort: '<S918>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S835>/Merge1' incorporates:
                 *  Constant: '<S920>/Constant'
                 *  SignalConversion generated from: '<S918>/VeDNDB_e_FaultSts_GenrPUVW_CurrSnsr_Corr'
                 */
                DNDB_ac_B.Merge1_my = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S835>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S817>/P0DFA' */
            break;

          case 30:
            /* Outputs for IfAction SubSystem: '<S817>/P0E0C' incorporates:
             *  ActionPort: '<S845>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S845>/Subsystem' incorporates:
             *  EnablePort: '<S957>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S845>/Merge1' incorporates:
                 *  Constant: '<S959>/Constant'
                 *  SignalConversion generated from: '<S957>/VeDNDB_e_FaultSts_Genr_PUVW_Ckt_Opn'
                 */
                DNDB_ac_B.Merge1_fm = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S845>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S845>/Subsystem1' incorporates:
             *  EnablePort: '<S958>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S845>/Merge1' incorporates:
                 *  Constant: '<S960>/Constant'
                 *  SignalConversion generated from: '<S958>/VeDNDB_e_FaultSts_Genr_PUVW_Ckt_Opn'
                 */
                DNDB_ac_B.Merge1_fm = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S845>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S817>/P0E0C' */
            break;

          case 31:
            /* Outputs for IfAction SubSystem: '<S817>/P104D' incorporates:
             *  ActionPort: '<S846>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S846>/Subsystem' incorporates:
             *  EnablePort: '<S961>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S846>/Merge1' incorporates:
                 *  Constant: '<S963>/Constant'
                 *  SignalConversion generated from: '<S961>/VeDNDB_e_FaultSts_GenrCurrHi'
                 */
                DNDB_ac_B.Merge1_di = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S846>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S846>/Subsystem1' incorporates:
             *  EnablePort: '<S962>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_i == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S846>/Merge1' incorporates:
                 *  Constant: '<S964>/Constant'
                 *  SignalConversion generated from: '<S962>/VeDNDB_e_FaultSts_GenrCurrHi'
                 */
                DNDB_ac_B.Merge1_di = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S846>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S817>/P104D' */
            break;

          default:
            /* no actions */
            break;
        }

        /* End of SwitchCase: '<S817>/SwitchCase' */
    }

    /* End of Outputs for SubSystem: '<S814>/BlocksIndex1' */

    /* Outputs for Enabled SubSystem: '<S814>/BlocksIndex2' incorporates:
     *  EnablePort: '<S816>/Enable'
     */
    if (DNDB_ac_DW.UnitDelay1_DSTATE != rtb_TmpSignalConversionAtSGCP_g)
    {
        /* SwitchCase: '<S973>/SwitchCase' incorporates:
         *  Constant: '<S974>/Constant Value'
         *  Constant: '<S974>/Constant Value1'
         *  Constant: '<S975>/Constant Value'
         *  Constant: '<S975>/Constant Value1'
         *  Constant: '<S976>/Constant Value'
         *  Constant: '<S976>/Constant Value1'
         *  Constant: '<S977>/Constant Value'
         *  Constant: '<S977>/Constant Value1'
         *  Constant: '<S978>/Constant Value'
         *  Constant: '<S978>/Constant Value1'
         *  Constant: '<S979>/Constant Value'
         *  Constant: '<S979>/Constant Value1'
         *  Constant: '<S980>/Constant Value'
         *  Constant: '<S980>/Constant Value1'
         *  Constant: '<S981>/Constant Value'
         *  Constant: '<S981>/Constant Value1'
         *  Constant: '<S982>/Constant Value'
         *  Constant: '<S982>/Constant Value1'
         *  Constant: '<S983>/Constant Value'
         *  Constant: '<S983>/Constant Value1'
         *  Constant: '<S984>/Constant Value'
         *  Constant: '<S984>/Constant Value1'
         *  Constant: '<S985>/Constant Value'
         *  Constant: '<S985>/Constant Value1'
         *  Constant: '<S986>/Constant Value'
         *  Constant: '<S986>/Constant Value1'
         *  Constant: '<S987>/Constant Value'
         *  Constant: '<S987>/Constant Value1'
         *  Constant: '<S988>/Constant Value'
         *  Constant: '<S988>/Constant Value1'
         *  Constant: '<S989>/Constant Value'
         *  Constant: '<S989>/Constant Value1'
         *  Constant: '<S990>/Constant Value'
         *  Constant: '<S990>/Constant Value1'
         *  Constant: '<S991>/Constant Value'
         *  Constant: '<S991>/Constant Value1'
         *  Constant: '<S992>/Constant Value'
         *  Constant: '<S992>/Constant Value1'
         *  Constant: '<S993>/Constant Value'
         *  Constant: '<S993>/Constant Value1'
         *  Constant: '<S994>/Constant Value'
         *  Constant: '<S994>/Constant Value1'
         *  Constant: '<S995>/Constant Value'
         *  Constant: '<S995>/Constant Value1'
         *  Constant: '<S996>/Constant Value'
         *  Constant: '<S996>/Constant Value1'
         *  Constant: '<S997>/Constant Value'
         *  Constant: '<S997>/Constant Value1'
         *  Constant: '<S998>/Constant Value'
         *  Constant: '<S998>/Constant Value1'
         *  RelationalOperator: '<S974>/E1'
         *  RelationalOperator: '<S974>/E2'
         *  RelationalOperator: '<S975>/E1'
         *  RelationalOperator: '<S975>/E2'
         *  RelationalOperator: '<S976>/E1'
         *  RelationalOperator: '<S976>/E2'
         *  RelationalOperator: '<S977>/E1'
         *  RelationalOperator: '<S977>/E2'
         *  RelationalOperator: '<S978>/E1'
         *  RelationalOperator: '<S978>/E2'
         *  RelationalOperator: '<S979>/E1'
         *  RelationalOperator: '<S979>/E2'
         *  RelationalOperator: '<S980>/E1'
         *  RelationalOperator: '<S980>/E2'
         *  RelationalOperator: '<S981>/E1'
         *  RelationalOperator: '<S981>/E2'
         *  RelationalOperator: '<S982>/E1'
         *  RelationalOperator: '<S982>/E2'
         *  RelationalOperator: '<S983>/E1'
         *  RelationalOperator: '<S983>/E2'
         *  RelationalOperator: '<S984>/E1'
         *  RelationalOperator: '<S984>/E2'
         *  RelationalOperator: '<S985>/E1'
         *  RelationalOperator: '<S985>/E2'
         *  RelationalOperator: '<S986>/E1'
         *  RelationalOperator: '<S986>/E2'
         *  RelationalOperator: '<S987>/E1'
         *  RelationalOperator: '<S987>/E2'
         *  RelationalOperator: '<S988>/E1'
         *  RelationalOperator: '<S988>/E2'
         *  RelationalOperator: '<S989>/E1'
         *  RelationalOperator: '<S989>/E2'
         *  RelationalOperator: '<S990>/E1'
         *  RelationalOperator: '<S990>/E2'
         *  RelationalOperator: '<S991>/E1'
         *  RelationalOperator: '<S991>/E2'
         *  RelationalOperator: '<S992>/E1'
         *  RelationalOperator: '<S992>/E2'
         *  RelationalOperator: '<S993>/E1'
         *  RelationalOperator: '<S993>/E2'
         *  RelationalOperator: '<S994>/E1'
         *  RelationalOperator: '<S994>/E2'
         *  RelationalOperator: '<S995>/E1'
         *  RelationalOperator: '<S995>/E2'
         *  RelationalOperator: '<S996>/E1'
         *  RelationalOperator: '<S996>/E2'
         *  RelationalOperator: '<S997>/E1'
         *  RelationalOperator: '<S997>/E2'
         *  RelationalOperator: '<S998>/E1'
         *  RelationalOperator: '<S998>/E2'
         */
        switch (rtb_TmpSignalConversionAtSGCP_g)
        {
          case 0:
            /* Outputs for IfAction SubSystem: '<S973>/P0A4B' incorporates:
             *  ActionPort: '<S978>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S978>/Subsystem' incorporates:
             *  EnablePort: '<S1015>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_j == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S978>/Merge1' incorporates:
                 *  Constant: '<S1017>/Constant'
                 *  SignalConversion generated from: '<S1015>/VeDNDB_e_FaultSts_GenrPstnSnsrCkt'
                 */
                DNDB_ac_B.Merge1_n = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S978>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S978>/Subsystem1' incorporates:
             *  EnablePort: '<S1016>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_j == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S978>/Merge1' incorporates:
                 *  Constant: '<S1018>/Constant'
                 *  SignalConversion generated from: '<S1016>/VeDNDB_e_FaultSts_GenrPstnSnsrCkt'
                 */
                DNDB_ac_B.Merge1_n = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S978>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S973>/P0A4B' */
            break;

          case 1:
            /* Outputs for IfAction SubSystem: '<S973>/P0A4F' incorporates:
             *  ActionPort: '<S980>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S980>/Subsystem' incorporates:
             *  EnablePort: '<S1023>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_j == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S980>/Merge1' incorporates:
                 *  Constant: '<S1025>/Constant'
                 *  SignalConversion generated from: '<S1023>/VeDNDB_e_FaultSts_GenrPosSenrcktIntermt'
                 */
                DNDB_ac_B.Merge1_f = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S980>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S980>/Subsystem1' incorporates:
             *  EnablePort: '<S1024>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_j == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S980>/Merge1' incorporates:
                 *  Constant: '<S1026>/Constant'
                 *  SignalConversion generated from: '<S1024>/VeDNDB_e_FaultSts_GenrPosSenrcktIntermt'
                 */
                DNDB_ac_B.Merge1_f = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S980>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S973>/P0A4F' */
            break;

          case 2:
            /* Outputs for IfAction SubSystem: '<S973>/P0E0F' incorporates:
             *  ActionPort: '<S986>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S986>/Subsystem' incorporates:
             *  EnablePort: '<S1047>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_j == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S986>/Merge1' incorporates:
                 *  Constant: '<S1049>/Constant'
                 *  SignalConversion generated from: '<S1047>/VeDNDB_e_FaultSts_Genr_Invtr_PwrSply1_CktOpn'
                 */
                DNDB_ac_B.Merge1_h0 = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S986>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S986>/Subsystem1' incorporates:
             *  EnablePort: '<S1048>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_j == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S986>/Merge1' incorporates:
                 *  Constant: '<S1050>/Constant'
                 *  SignalConversion generated from: '<S1048>/VeDNDB_e_FaultSts_Genr_Invtr_PwrSply1_CktOpn'
                 */
                DNDB_ac_B.Merge1_h0 = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S986>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S973>/P0E0F' */
            break;

          case 3:
            /* Outputs for IfAction SubSystem: '<S973>/P0E71' incorporates:
             *  ActionPort: '<S987>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S987>/Subsystem' incorporates:
             *  EnablePort: '<S1051>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_j == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S987>/Merge1' incorporates:
                 *  Constant: '<S1053>/Constant'
                 *  SignalConversion generated from: '<S1051>/VeDNDB_e_FaultSts_GenrTrqDlvdPerf'
                 */
                DNDB_ac_B.Merge1_cg = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S987>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S987>/Subsystem1' incorporates:
             *  EnablePort: '<S1052>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_j == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S987>/Merge1' incorporates:
                 *  Constant: '<S1054>/Constant'
                 *  SignalConversion generated from: '<S1052>/VeDNDB_e_FaultSts_GenrTrqDlvdPerf'
                 */
                DNDB_ac_B.Merge1_cg = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S987>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S973>/P0E71' */
            break;

          case 4:
            /* Outputs for IfAction SubSystem: '<S973>/P0DFB' incorporates:
             *  ActionPort: '<S984>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S984>/Subsystem' incorporates:
             *  EnablePort: '<S1039>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_j == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S984>/Merge1' incorporates:
                 *  Constant: '<S1041>/Constant'
                 *  SignalConversion generated from: '<S1039>/VeDNDB_e_FaultSts_Genr_Pos_ExcedLrn_Lim'
                 */
                DNDB_ac_B.Merge1_cf = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S984>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S984>/Subsystem1' incorporates:
             *  EnablePort: '<S1040>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_j == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S984>/Merge1' incorporates:
                 *  Constant: '<S1042>/Constant'
                 *  SignalConversion generated from: '<S1040>/VeDNDB_e_FaultSts_Genr_Pos_ExcedLrn_Lim'
                 */
                DNDB_ac_B.Merge1_cf = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S984>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S973>/P0DFB' */
            break;

          case 5:
            /* Outputs for IfAction SubSystem: '<S973>/P063D' incorporates:
             *  ActionPort: '<S975>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S975>/Subsystem' incorporates:
             *  EnablePort: '<S1003>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_j == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S975>/Merge1' incorporates:
                 *  Constant: '<S1005>/Constant'
                 *  SignalConversion generated from: '<S1003>/VeDNDB_e_FaultSts_GenrVoltSenCktAHi'
                 */
                DNDB_ac_B.Merge1_c1 = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S975>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S975>/Subsystem1' incorporates:
             *  EnablePort: '<S1004>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_j == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S975>/Merge1' incorporates:
                 *  Constant: '<S1006>/Constant'
                 *  SignalConversion generated from: '<S1004>/VeDNDB_e_FaultSts_GenrVoltSenCktAHi'
                 */
                DNDB_ac_B.Merge1_c1 = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S975>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S973>/P063D' */
            break;

          case 6:
            /* Outputs for IfAction SubSystem: '<S973>/P063B' incorporates:
             *  ActionPort: '<S974>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S974>/Subsystem' incorporates:
             *  EnablePort: '<S999>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_j == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S974>/Merge1' incorporates:
                 *  Constant: '<S1001>/Constant'
                 *  SignalConversion generated from: '<S999>/VeDNDB_e_FaultSts_GenrVoltSenCktAPerf'
                 */
                DNDB_ac_B.Merge1_g = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S974>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S974>/Subsystem1' incorporates:
             *  EnablePort: '<S1000>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_j == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S974>/Merge1' incorporates:
                 *  Constant: '<S1002>/Constant'
                 *  SignalConversion generated from: '<S1000>/VeDNDB_e_FaultSts_GenrVoltSenCktAPerf'
                 */
                DNDB_ac_B.Merge1_g = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S974>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S973>/P063B' */
            break;

          case 7:
            /* Outputs for IfAction SubSystem: '<S973>/P1B1D' incorporates:
             *  ActionPort: '<S989>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S989>/Subsystem' incorporates:
             *  EnablePort: '<S1059>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_j == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S989>/Merge1' incorporates:
                 *  Constant: '<S1061>/Constant'
                 *  SignalConversion generated from: '<S1059>/VeDNDB_e_FaultSts_GenrHiVolBattSysVolHi'
                 */
                DNDB_ac_B.Merge1_el = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S989>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S989>/Subsystem1' incorporates:
             *  EnablePort: '<S1060>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_j == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S989>/Merge1' incorporates:
                 *  Constant: '<S1062>/Constant'
                 *  SignalConversion generated from: '<S1060>/VeDNDB_e_FaultSts_GenrHiVolBattSysVolHi'
                 */
                DNDB_ac_B.Merge1_el = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S989>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S973>/P1B1D' */
            break;

          case 8:
            /* Outputs for IfAction SubSystem: '<S973>/P1B1C' incorporates:
             *  ActionPort: '<S988>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S988>/Subsystem' incorporates:
             *  EnablePort: '<S1055>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_j == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S988>/Merge1' incorporates:
                 *  Constant: '<S1057>/Constant'
                 *  SignalConversion generated from: '<S1055>/VeDNDB_e_FaultSts_GenrHiVolBattSysVolLo'
                 */
                DNDB_ac_B.Merge1_am = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S988>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S988>/Subsystem1' incorporates:
             *  EnablePort: '<S1056>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_j == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S988>/Merge1' incorporates:
                 *  Constant: '<S1058>/Constant'
                 *  SignalConversion generated from: '<S1056>/VeDNDB_e_FaultSts_GenrHiVolBattSysVolLo'
                 */
                DNDB_ac_B.Merge1_am = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S988>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S973>/P1B1C' */
            break;

          case 9:
          case 21:
          case 22:
          case 23:
          case 29:
          case 30:
          case 31:
            break;

          case 10:
            /* Outputs for IfAction SubSystem: '<S973>/P0A4C' incorporates:
             *  ActionPort: '<S979>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S979>/Subsystem' incorporates:
             *  EnablePort: '<S1019>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_j == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S979>/Merge1' incorporates:
                 *  Constant: '<S1021>/Constant'
                 *  SignalConversion generated from: '<S1019>/VeDNDB_e_FaultSts_GenrPstnSnsrPerf'
                 */
                DNDB_ac_B.Merge1_ov = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S979>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S979>/Subsystem1' incorporates:
             *  EnablePort: '<S1020>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_j == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S979>/Merge1' incorporates:
                 *  Constant: '<S1022>/Constant'
                 *  SignalConversion generated from: '<S1020>/VeDNDB_e_FaultSts_GenrPstnSnsrPerf'
                 */
                DNDB_ac_B.Merge1_ov = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S979>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S973>/P0A4C' */
            break;

          case 11:
            /* Outputs for IfAction SubSystem: '<S973>/P30A9' incorporates:
             *  ActionPort: '<S993>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S993>/Subsystem' incorporates:
             *  EnablePort: '<S1075>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_j == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S993>/Merge1' incorporates:
                 *  Constant: '<S1077>/Constant'
                 *  SignalConversion generated from: '<S1075>/VeDNDB_e_FaultSts_HB_WkupCntrl_4_OpCktLo'
                 */
                DNDB_ac_B.Merge1_b = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S993>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S993>/Subsystem1' incorporates:
             *  EnablePort: '<S1076>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_j == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S993>/Merge1' incorporates:
                 *  Constant: '<S1078>/Constant'
                 *  SignalConversion generated from: '<S1076>/VeDNDB_e_FaultSts_HB_WkupCntrl_4_OpCktLo'
                 */
                DNDB_ac_B.Merge1_b = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S993>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S973>/P30A9' */
            break;

          case 12:
            /* Outputs for IfAction SubSystem: '<S973>/P30A8' incorporates:
             *  ActionPort: '<S992>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S992>/Subsystem' incorporates:
             *  EnablePort: '<S1071>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_j == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S992>/Merge1' incorporates:
                 *  Constant: '<S1073>/Constant'
                 *  SignalConversion generated from: '<S1071>/VeDNDB_e_FaultSts_HB_Sys_C_VoltHi'
                 */
                DNDB_ac_B.Merge1_c = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S992>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S992>/Subsystem1' incorporates:
             *  EnablePort: '<S1072>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_j == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S992>/Merge1' incorporates:
                 *  Constant: '<S1074>/Constant'
                 *  SignalConversion generated from: '<S1072>/VeDNDB_e_FaultSts_HB_Sys_C_VoltHi'
                 */
                DNDB_ac_B.Merge1_c = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S992>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S973>/P30A8' */
            break;

          case 13:
            /* Outputs for IfAction SubSystem: '<S973>/P0A50' incorporates:
             *  ActionPort: '<S981>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S981>/Subsystem' incorporates:
             *  EnablePort: '<S1027>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_j == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S981>/Merge1' incorporates:
                 *  Constant: '<S1029>/Constant'
                 *  SignalConversion generated from: '<S1027>/VeDNDB_e_FaultSts_GenrPstnSnsrCktOvrSpd'
                 */
                DNDB_ac_B.Merge1_m0 = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S981>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S981>/Subsystem1' incorporates:
             *  EnablePort: '<S1028>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_j == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S981>/Merge1' incorporates:
                 *  Constant: '<S1030>/Constant'
                 *  SignalConversion generated from: '<S1028>/VeDNDB_e_FaultSts_GenrPstnSnsrCktOvrSpd'
                 */
                DNDB_ac_B.Merge1_m0 = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S981>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S973>/P0A50' */
            break;

          case 14:
            /* Outputs for IfAction SubSystem: '<S973>/P065A' incorporates:
             *  ActionPort: '<S976>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S976>/Subsystem' incorporates:
             *  EnablePort: '<S1007>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_j == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S976>/Merge1' incorporates:
                 *  Constant: '<S1009>/Constant'
                 *  SignalConversion generated from: '<S1007>/VeDNDB_e_FaultSts_GenrSysPerf'
                 */
                DNDB_ac_B.Merge1_mt = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S976>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S976>/Subsystem1' incorporates:
             *  EnablePort: '<S1008>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_j == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S976>/Merge1' incorporates:
                 *  Constant: '<S1010>/Constant'
                 *  SignalConversion generated from: '<S1008>/VeDNDB_e_FaultSts_GenrSysPerf'
                 */
                DNDB_ac_B.Merge1_mt = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S976>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S973>/P065A' */
            break;

          case 15:
            /* Outputs for IfAction SubSystem: '<S973>/P0DF4' incorporates:
             *  ActionPort: '<S982>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S982>/Subsystem' incorporates:
             *  EnablePort: '<S1031>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_j == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S982>/Merge1' incorporates:
                 *  Constant: '<S1033>/Constant'
                 *  SignalConversion generated from: '<S1031>/VeDNDB_e_FaultSts_GenrInvrtTempSnsr2_CktPerf'
                 */
                DNDB_ac_B.Merge1_e2 = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S982>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S982>/Subsystem1' incorporates:
             *  EnablePort: '<S1032>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_j == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S982>/Merge1' incorporates:
                 *  Constant: '<S1034>/Constant'
                 *  SignalConversion generated from: '<S1032>/VeDNDB_e_FaultSts_GenrInvrtTempSnsr2_CktPerf'
                 */
                DNDB_ac_B.Merge1_e2 = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S982>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S973>/P0DF4' */
            break;

          case 16:
            /* Outputs for IfAction SubSystem: '<S973>/P0DF7' incorporates:
             *  ActionPort: '<S983>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S983>/Subsystem' incorporates:
             *  EnablePort: '<S1035>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_j == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S983>/Merge1' incorporates:
                 *  Constant: '<S1037>/Constant'
                 *  SignalConversion generated from: '<S1035>/VeDNDB_e_FaultSts_GenrInvrtTempSnsr3_CktPerf'
                 */
                DNDB_ac_B.Merge1_ey = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S983>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S983>/Subsystem1' incorporates:
             *  EnablePort: '<S1036>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_j == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S983>/Merge1' incorporates:
                 *  Constant: '<S1038>/Constant'
                 *  SignalConversion generated from: '<S1036>/VeDNDB_e_FaultSts_GenrInvrtTempSnsr3_CktPerf'
                 */
                DNDB_ac_B.Merge1_ey = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S983>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S973>/P0DF7' */
            break;

          case 17:
            /* Outputs for IfAction SubSystem: '<S973>/P1CDA' incorporates:
             *  ActionPort: '<S990>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S990>/Subsystem' incorporates:
             *  EnablePort: '<S1063>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_j == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S990>/Merge1' incorporates:
                 *  Constant: '<S1065>/Constant'
                 *  SignalConversion generated from: '<S1063>/VeDNDB_e_FaultSts_EVWakeup1CktOpen'
                 */
                DNDB_ac_B.Merge1_d = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S990>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S990>/Subsystem1' incorporates:
             *  EnablePort: '<S1064>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_j == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S990>/Merge1' incorporates:
                 *  Constant: '<S1066>/Constant'
                 *  SignalConversion generated from: '<S1064>/VeDNDB_e_FaultSts_EVWakeup1CktOpen'
                 */
                DNDB_ac_B.Merge1_d = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S990>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S973>/P1CDA' */
            break;

          case 18:
            /* Outputs for IfAction SubSystem: '<S973>/P06E8' incorporates:
             *  ActionPort: '<S977>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S977>/Subsystem' incorporates:
             *  EnablePort: '<S1011>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_j == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S977>/Merge1' incorporates:
                 *  Constant: '<S1013>/Constant'
                 *  SignalConversion generated from: '<S1011>/VeDNDB_e_FaultSts_SnsrPwrSplyC_CktHi'
                 */
                DNDB_ac_B.Merge1_a = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S977>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S977>/Subsystem1' incorporates:
             *  EnablePort: '<S1012>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_j == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S977>/Merge1' incorporates:
                 *  Constant: '<S1014>/Constant'
                 *  SignalConversion generated from: '<S1012>/VeDNDB_e_FaultSts_SnsrPwrSplyC_CktHi'
                 */
                DNDB_ac_B.Merge1_a = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S977>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S973>/P06E8' */
            break;

          case 19:
            /* Outputs for IfAction SubSystem: '<S973>/P29B0' incorporates:
             *  ActionPort: '<S991>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S991>/Subsystem' incorporates:
             *  EnablePort: '<S1067>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_j == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S991>/Merge1' incorporates:
                 *  Constant: '<S1069>/Constant'
                 *  SignalConversion generated from: '<S1067>/VeDNDB_e_FaultSts_GenInv_PU_OvrTemp'
                 */
                DNDB_ac_B.Merge1_e = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S991>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S991>/Subsystem1' incorporates:
             *  EnablePort: '<S1068>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_j == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S991>/Merge1' incorporates:
                 *  Constant: '<S1070>/Constant'
                 *  SignalConversion generated from: '<S1068>/VeDNDB_e_FaultSts_GenInv_PU_OvrTemp'
                 */
                DNDB_ac_B.Merge1_e = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S991>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S973>/P29B0' */
            break;

          case 20:
            /* Outputs for IfAction SubSystem: '<S973>/P0DFC' incorporates:
             *  ActionPort: '<S985>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S985>/Subsystem' incorporates:
             *  EnablePort: '<S1043>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_j == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S985>/Merge1' incorporates:
                 *  Constant: '<S1045>/Constant'
                 *  SignalConversion generated from: '<S1043>/VeDNDB_e_FaultSts_Genr_PosSnsr_NotLrnd'
                 */
                DNDB_ac_B.Merge1_j = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S985>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S985>/Subsystem1' incorporates:
             *  EnablePort: '<S1044>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_j == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S985>/Merge1' incorporates:
                 *  Constant: '<S1046>/Constant'
                 *  SignalConversion generated from: '<S1044>/VeDNDB_e_FaultSts_Genr_PosSnsr_NotLrnd'
                 */
                DNDB_ac_B.Merge1_j = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S985>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S973>/P0DFC' */
            break;

          case 24:
            /* Outputs for IfAction SubSystem: '<S973>/U153B' incorporates:
             *  ActionPort: '<S994>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S994>/Subsystem' incorporates:
             *  EnablePort: '<S1079>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_j == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S994>/Merge1' incorporates:
                 *  Constant: '<S1081>/Constant'
                 *  SignalConversion generated from: '<S1079>/VeDNDB_e_FaultSts_GenrA_CM_InvDataDMCM_A'
                 */
                DNDB_ac_B.Merge1_i = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S994>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S994>/Subsystem1' incorporates:
             *  EnablePort: '<S1080>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_j == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S994>/Merge1' incorporates:
                 *  Constant: '<S1082>/Constant'
                 *  SignalConversion generated from: '<S1080>/VeDNDB_e_FaultSts_GenrA_CM_InvDataDMCM_A'
                 */
                DNDB_ac_B.Merge1_i = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S994>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S973>/U153B' */
            break;

          case 25:
            /* Outputs for IfAction SubSystem: '<S973>/U153C' incorporates:
             *  ActionPort: '<S995>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S995>/Subsystem' incorporates:
             *  EnablePort: '<S1083>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_j == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S995>/Merge1' incorporates:
                 *  Constant: '<S1085>/Constant'
                 *  SignalConversion generated from: '<S1083>/VeDNDB_e_FaultSts_GenrA_CM_InvDataDMCM_B'
                 */
                DNDB_ac_B.Merge1_o = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S995>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S995>/Subsystem1' incorporates:
             *  EnablePort: '<S1084>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_j == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S995>/Merge1' incorporates:
                 *  Constant: '<S1086>/Constant'
                 *  SignalConversion generated from: '<S1084>/VeDNDB_e_FaultSts_GenrA_CM_InvDataDMCM_B'
                 */
                DNDB_ac_B.Merge1_o = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S995>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S973>/U153C' */
            break;

          case 26:
            /* Outputs for IfAction SubSystem: '<S973>/U153D' incorporates:
             *  ActionPort: '<S996>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S996>/Subsystem' incorporates:
             *  EnablePort: '<S1087>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_j == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S996>/Merge1' incorporates:
                 *  Constant: '<S1089>/Constant'
                 *  SignalConversion generated from: '<S1087>/VeDNDB_e_FaultSts_GenrA_CM_InvDataIDCM'
                 */
                DNDB_ac_B.Merge1_m = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S996>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S996>/Subsystem1' incorporates:
             *  EnablePort: '<S1088>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_j == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S996>/Merge1' incorporates:
                 *  Constant: '<S1090>/Constant'
                 *  SignalConversion generated from: '<S1088>/VeDNDB_e_FaultSts_GenrA_CM_InvDataIDCM'
                 */
                DNDB_ac_B.Merge1_m = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S996>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S973>/U153D' */
            break;

          case 27:
            /* Outputs for IfAction SubSystem: '<S973>/U153E' incorporates:
             *  ActionPort: '<S997>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S997>/Subsystem' incorporates:
             *  EnablePort: '<S1091>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_j == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S997>/Merge1' incorporates:
                 *  Constant: '<S1093>/Constant'
                 *  SignalConversion generated from: '<S1091>/VeDNDB_e_FaultSts_GenrA_CM_InvDataEVCU'
                 */
                DNDB_ac_B.Merge1_h = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S997>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S997>/Subsystem1' incorporates:
             *  EnablePort: '<S1092>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_j == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S997>/Merge1' incorporates:
                 *  Constant: '<S1094>/Constant'
                 *  SignalConversion generated from: '<S1092>/VeDNDB_e_FaultSts_GenrA_CM_InvDataEVCU'
                 */
                DNDB_ac_B.Merge1_h = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S997>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S973>/U153E' */
            break;

          case 28:
            /* Outputs for IfAction SubSystem: '<S973>/U153F' incorporates:
             *  ActionPort: '<S998>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S998>/Subsystem' incorporates:
             *  EnablePort: '<S1095>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_j == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S998>/Merge1' incorporates:
                 *  Constant: '<S1097>/Constant'
                 *  SignalConversion generated from: '<S1095>/VeDNDB_e_FaultSts_GenrA_CM_InvDataBPCM'
                 */
                DNDB_ac_B.Merge1 = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S998>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S998>/Subsystem1' incorporates:
             *  EnablePort: '<S1096>/Enable'
             */
            if (rtb_TmpSignalConversionAtSGCP_j == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S998>/Merge1' incorporates:
                 *  Constant: '<S1098>/Constant'
                 *  SignalConversion generated from: '<S1096>/VeDNDB_e_FaultSts_GenrA_CM_InvDataBPCM'
                 */
                DNDB_ac_B.Merge1 = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S998>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S973>/U153F' */
            break;

          default:
            /* no actions */
            break;
        }

        /* End of SwitchCase: '<S973>/SwitchCase' */
    }

    /* End of Outputs for SubSystem: '<S814>/BlocksIndex2' */

    /* Update for UnitDelay: '<S814>/Unit Delay' incorporates:
     *  RelationalOperator: '<S814>/Relational Operator'
     *  RelationalOperator: '<S814>/Relational Operator1'
     *  UnitDelay: '<S814>/Unit Delay1'
     */
    DNDB_ac_DW.UnitDelay_DSTATE = rtb_TmpSignalConversionAtSGCP_D;

    /* Update for UnitDelay: '<S814>/Unit Delay1' */
    DNDB_ac_DW.UnitDelay1_DSTATE = rtb_TmpSignalConversionAtSGCP_g;

    /* End of Outputs for SubSystem: '<S6>/SGCP_PEGASUS_BlockIndexMngt' */

    /* Outport: '<Root>/VeDNDB_e_FaultSts_CM_VehSpdPerf' incorporates:
     *  Merge: '<S818>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_CM_VehSpdPerf_Value(DNDB_ac_B.Merge1_ie);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrVoltSenCktAPerf' incorporates:
     *  Merge: '<S974>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrVoltSenCktAPerf_Value
        (DNDB_ac_B.Merge1_g);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrVoltSenCktAHi' incorporates:
     *  Merge: '<S975>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrVoltSenCktAHi_Value
        (DNDB_ac_B.Merge1_c1);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrSysPerf' incorporates:
     *  Merge: '<S976>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrSysPerf_Value(DNDB_ac_B.Merge1_mt);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_SnsrRefVolt3CktLo' incorporates:
     *  Merge: '<S819>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_SnsrRefVolt3CktLo_Value
        (DNDB_ac_B.Merge1_hl);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_SnsrRefVolt3CktHi' incorporates:
     *  Merge: '<S820>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_SnsrRefVolt3CktHi_Value
        (DNDB_ac_B.Merge1_nt);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_SnsrPwrSplyC_CktHi' incorporates:
     *  Merge: '<S977>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_SnsrPwrSplyC_CktHi_Value
        (DNDB_ac_B.Merge1_a);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenCntrlMode' incorporates:
     *  Merge: '<S821>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenCntrlMode_Value(DNDB_ac_B.Merge1_fg);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrTempSnsrPerf' incorporates:
     *  Merge: '<S822>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrTempSnsrPerf_Value(DNDB_ac_B.Merge1_hh);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrTempSnsrCktLo' incorporates:
     *  Merge: '<S823>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrTempSnsrCktLo_Value
        (DNDB_ac_B.Merge1_pe);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrTempSnsrCktHi' incorporates:
     *  Merge: '<S824>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrTempSnsrCktHi_Value
        (DNDB_ac_B.Merge1_g4);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrOvrtemp' incorporates:
     *  Merge: '<S825>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrOvrtemp_Value(DNDB_ac_B.Merge1_mq);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrPstnSnsrCkt' incorporates:
     *  Merge: '<S978>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrPstnSnsrCkt_Value(DNDB_ac_B.Merge1_n);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrPstnSnsrPerf' incorporates:
     *  Merge: '<S979>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrPstnSnsrPerf_Value(DNDB_ac_B.Merge1_ov);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrPosSenrcktIntermt' incorporates:
     *  Merge: '<S980>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrPosSenrcktIntermt_Value
        (DNDB_ac_B.Merge1_f);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrPstnSnsrCktOvrSpd' incorporates:
     *  Merge: '<S981>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrPstnSnsrCktOvrSpd_Value
        (DNDB_ac_B.Merge1_m0);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrInvrtTempSnsr_Ckt' incorporates:
     *  Merge: '<S826>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrInvrtTempSnsr_Ckt_Value
        (DNDB_ac_B.Merge1_hf);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrInvrtTempSnsr_CktPerf' incorporates:
     *  Merge: '<S827>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrInvrtTempSnsr_CktPerf_Value
        (DNDB_ac_B.Merge1_al);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrInvrtTempSnsr_CktLo' incorporates:
     *  Merge: '<S828>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrInvrtTempSnsr_CktLo_Value
        (DNDB_ac_B.Merge1_ifk);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrInvrtTempSnsr_CktHi' incorporates:
     *  Merge: '<S829>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrInvrtTempSnsr_CktHi_Value
        (DNDB_ac_B.Merge1_gb);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrInvrtTempSnsr2_Ckt' incorporates:
     *  Merge: '<S830>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrInvrtTempSnsr2_Ckt_Value
        (DNDB_ac_B.Merge1_hn);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrInvrtTempSnsr2_CktPerf' incorporates:
     *  Merge: '<S982>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrInvrtTempSnsr2_CktPerf_Value
        (DNDB_ac_B.Merge1_e2);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrInvrtTempSnsr2_CktLo' incorporates:
     *  Merge: '<S831>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrInvrtTempSnsr2_CktLo_Value
        (DNDB_ac_B.Merge1_ou);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrInvrtTempSnsr2_CktHi' incorporates:
     *  Merge: '<S832>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrInvrtTempSnsr2_CktHi_Value
        (DNDB_ac_B.Merge1_ps);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrInvrtTempSnsr3_CktPerf' incorporates:
     *  Merge: '<S983>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrInvrtTempSnsr3_CktPerf_Value
        (DNDB_ac_B.Merge1_ey);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrInvrtTempSnsr3_CktLo' incorporates:
     *  Merge: '<S833>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrInvrtTempSnsr3_CktLo_Value
        (DNDB_ac_B.Merge1_p);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrInvrtTempSnsr3_CktHi' incorporates:
     *  Merge: '<S834>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrInvrtTempSnsr3_CktHi_Value
        (DNDB_ac_B.Merge1_or);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrPUVW_CurrSnsr_Corr' incorporates:
     *  Merge: '<S835>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrPUVW_CurrSnsr_Corr_Value
        (DNDB_ac_B.Merge1_my);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_Genr_Pos_ExcedLrn_Lim' incorporates:
     *  Merge: '<S984>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_Genr_Pos_ExcedLrn_Lim_Value
        (DNDB_ac_B.Merge1_cf);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_Genr_PosSnsr_NotLrnd' incorporates:
     *  Merge: '<S985>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_Genr_PosSnsr_NotLrnd_Value
        (DNDB_ac_B.Merge1_j);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_Genr_PU_CurrSnsr_CktPerf' incorporates:
     *  Merge: '<S836>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_Genr_PU_CurrSnsr_CktPerf_Value
        (DNDB_ac_B.Merge1_lf);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_Genr_PU_CurrSnsr_CktLo' incorporates:
     *  Merge: '<S837>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_Genr_PU_CurrSnsr_CktLo_Value
        (DNDB_ac_B.Merge1_eg);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_Genr_PU_CurrSnsr_CktHi' incorporates:
     *  Merge: '<S838>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_Genr_PU_CurrSnsr_CktHi_Value
        (DNDB_ac_B.Merge1_if);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_Genr_PV_CurrSnsr_CktPerf' incorporates:
     *  Merge: '<S839>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_Genr_PV_CurrSnsr_CktPerf_Value
        (DNDB_ac_B.Merge1_gt);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_Genr_PV_CurrSnsr_CktLo' incorporates:
     *  Merge: '<S840>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_Genr_PV_CurrSnsr_CktLo_Value
        (DNDB_ac_B.Merge1_l);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_Genr_PV_CurrSnsr_CktHi' incorporates:
     *  Merge: '<S841>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_Genr_PV_CurrSnsr_CktHi_Value
        (DNDB_ac_B.Merge1_gg);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_Genr_PW_CurrSnsr_CktPerf' incorporates:
     *  Merge: '<S842>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_Genr_PW_CurrSnsr_CktPerf_Value
        (DNDB_ac_B.Merge1_o3);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_Genr_PW_CurrSnsr_CktLo' incorporates:
     *  Merge: '<S843>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_Genr_PW_CurrSnsr_CktLo_Value
        (DNDB_ac_B.Merge1_da);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_Genr_PW_CurrSnsr_CktHi' incorporates:
     *  Merge: '<S844>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_Genr_PW_CurrSnsr_CktHi_Value
        (DNDB_ac_B.Merge1_a4);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_Genr_PUVW_Ckt_Opn' incorporates:
     *  Merge: '<S845>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_Genr_PUVW_Ckt_Opn_Value
        (DNDB_ac_B.Merge1_fm);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_Genr_Invtr_PwrSply1_CktOpn' incorporates:
     *  Merge: '<S986>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_Genr_Invtr_PwrSply1_CktOpn_Value
        (DNDB_ac_B.Merge1_h0);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrTrqDlvdPerf' incorporates:
     *  Merge: '<S987>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrTrqDlvdPerf_Value(DNDB_ac_B.Merge1_cg);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrCurrHi' incorporates:
     *  Merge: '<S846>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrCurrHi_Value(DNDB_ac_B.Merge1_di);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrHiVolBattSysVolLo' incorporates:
     *  Merge: '<S988>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrHiVolBattSysVolLo_Value
        (DNDB_ac_B.Merge1_am);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrHiVolBattSysVolHi' incorporates:
     *  Merge: '<S989>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrHiVolBattSysVolHi_Value
        (DNDB_ac_B.Merge1_el);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_EVWakeup1CktOpen' incorporates:
     *  Merge: '<S990>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_EVWakeup1CktOpen_Value(DNDB_ac_B.Merge1_d);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenInv_PU_OvrTemp' incorporates:
     *  Merge: '<S991>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenInv_PU_OvrTemp_Value(DNDB_ac_B.Merge1_e);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DrMtr_C_IntCMTorqCalPerf' incorporates:
     *  Merge: '<S847>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DrMtr_C_IntCMTorqCalPerf_Value
        (DNDB_ac_B.Merge1_mh);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_HB_Sys_C_VoltHi' incorporates:
     *  Merge: '<S992>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_HB_Sys_C_VoltHi_Value(DNDB_ac_B.Merge1_c);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_HB_WkupCntrl_4_OpCktLo' incorporates:
     *  Merge: '<S993>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_HB_WkupCntrl_4_OpCktLo_Value
        (DNDB_ac_B.Merge1_b);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrA_CM_InvDataDMCM_A' incorporates:
     *  Merge: '<S994>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrA_CM_InvDataDMCM_A_Value
        (DNDB_ac_B.Merge1_i);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrA_CM_InvDataDMCM_B' incorporates:
     *  Merge: '<S995>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrA_CM_InvDataDMCM_B_Value
        (DNDB_ac_B.Merge1_o);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrA_CM_InvDataIDCM' incorporates:
     *  Merge: '<S996>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrA_CM_InvDataIDCM_Value
        (DNDB_ac_B.Merge1_m);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrA_CM_InvDataEVCU' incorporates:
     *  Merge: '<S997>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrA_CM_InvDataEVCU_Value
        (DNDB_ac_B.Merge1_h);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrA_CM_InvDataBPCM' incorporates:
     *  Merge: '<S998>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrA_CM_InvDataBPCM_Value
        (DNDB_ac_B.Merge1);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_CM_IntrnlTmpSenr_C_Perf' incorporates:
     *  Merge: '<S848>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_CM_IntrnlTmpSenr_C_Perf_Value
        (DNDB_ac_B.Merge1_cn);

    /* End of Outputs for SubSystem: '<S1>/SGCP_PEGASUS_BlockIndexMngt' */
#endif

    /* End of SignalConversion generated from: '<S1>/SGCP_DTC_Idx1' */

    /* SignalConversion generated from: '<S1>/MCPB_DTC_Idx1' incorporates:
     *  Constant: '<Root>/Constant5'
     *  RelationalOperator: '<S512>/Relational Operator'
     *  RelationalOperator: '<S512>/Relational Operator1'
     *  RelationalOperator: '<S512>/Relational Operator2'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0652_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0653_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P06AC_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P07B5_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0A1C_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0A31_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0A32_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0A33_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0A35_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0A45_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0A49_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0A4A_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0A79_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0AF3_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0AF4_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0AF5_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0BD1_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0BD6_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0BD8_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0BD9_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0BE2_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0BE3_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0BF2_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0BF3_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0BF4_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0BF6_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0BF7_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0BF8_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0BFA_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0BFB_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0BFC_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0BFE_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0C04_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0C08_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0C0E_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0C14_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0C18_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0C1A_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P1625_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P1626_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P177A_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P177B_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P177C_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P1AEB_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P1AED_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P1AEF_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P1B04_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P1B08_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P1B10_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P1C92_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P1D7C_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P2159_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P3047_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P30A7_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_U1536_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_U1537_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_U1538_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_U1539_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_U153A_PassFail'
     *  SignalConversion generated from: '<S1>/MCPB_DTC_Idx2'
     *  SignalConversion generated from: '<S1>/MCPB_DTC_Stat1'
     *  SignalConversion generated from: '<S1>/MCPB_DTC_Stat2'
     *  UnitDelay: '<S512>/Unit Delay'
     *  UnitDelay: '<S512>/Unit Delay1'
     *  UnitDelay: '<S512>/Unit Delay2'
     */
#if Rte_SysCon_Variant_DNDB_MCPB_PEGASUS

    /* Outputs for Atomic SubSystem: '<S1>/MCPB_PEGASUS_BlockIndexMngt' */
    /* SignalConversion generated from: '<S1>/MCPB_DTC_Idx1' incorporates:
     *  Inport: '<Root>/VeCRDB_y_MCPB_DTC_Idx1'
     */
    (void)Rte_Read_VeCRDB_y_MCPB_DTC_Idx1_Value(&rtb_TmpSignalConversionAtMCPB_D);

    /* SignalConversion generated from: '<S1>/MCPB_DTC_Stat1' incorporates:
     *  Inport: '<Root>/VeCRDB_y_MCPB_DTC_Stat1'
     */
    (void)Rte_Read_VeCRDB_y_MCPB_DTC_Stat1_Value
        (&rtb_TmpSignalConversionAtMCPB_e);

    /* SignalConversion generated from: '<S1>/MCPB_DTC_Idx2' incorporates:
     *  Inport: '<Root>/VeCRDB_y_MCPB_DTC_Idx2'
     */
    (void)Rte_Read_VeCRDB_y_MCPB_DTC_Idx2_Value(&rtb_TmpSignalConversionAtMCPB_m);

    /* SignalConversion generated from: '<S1>/MCPB_DTC_Stat2' incorporates:
     *  Inport: '<Root>/VeCRDB_y_MCPB_DTC_Stat2'
     */
    (void)Rte_Read_VeCRDB_y_MCPB_DTC_Stat2_Value
        (&rtb_TmpSignalConversionAtMCPB_n);

    /* Outputs for Atomic SubSystem: '<S5>/MCPB_PEGASUS_BlockIndexMngt' */
    /* Outputs for Enabled SubSystem: '<S512>/BlocksIndex1' incorporates:
     *  EnablePort: '<S513>/Enable'
     */
    if (DNDB_ac_DW.UnitDelay_DSTATE_m != rtb_TmpSignalConversionAtMCPB_D)
    {
        /* SwitchCase: '<S516>/SwitchCase' incorporates:
         *  Constant: '<S517>/Constant Value'
         *  Constant: '<S517>/Constant Value1'
         *  Constant: '<S518>/Constant Value'
         *  Constant: '<S518>/Constant Value1'
         *  Constant: '<S519>/Constant Value'
         *  Constant: '<S519>/Constant Value1'
         *  Constant: '<S520>/Constant Value'
         *  Constant: '<S520>/Constant Value1'
         *  Constant: '<S521>/Constant Value'
         *  Constant: '<S521>/Constant Value1'
         *  Constant: '<S522>/Constant Value'
         *  Constant: '<S522>/Constant Value1'
         *  Constant: '<S523>/Constant Value'
         *  Constant: '<S523>/Constant Value1'
         *  Constant: '<S524>/Constant Value'
         *  Constant: '<S524>/Constant Value1'
         *  Constant: '<S525>/Constant Value'
         *  Constant: '<S525>/Constant Value1'
         *  Constant: '<S526>/Constant Value'
         *  Constant: '<S526>/Constant Value1'
         *  Constant: '<S527>/Constant Value'
         *  Constant: '<S527>/Constant Value1'
         *  Constant: '<S528>/Constant Value'
         *  Constant: '<S528>/Constant Value1'
         *  Constant: '<S529>/Constant Value'
         *  Constant: '<S529>/Constant Value1'
         *  Constant: '<S530>/Constant Value'
         *  Constant: '<S530>/Constant Value1'
         *  Constant: '<S531>/Constant Value'
         *  Constant: '<S531>/Constant Value1'
         *  Constant: '<S532>/Constant Value'
         *  Constant: '<S532>/Constant Value1'
         *  Constant: '<S533>/Constant Value'
         *  Constant: '<S533>/Constant Value1'
         *  Constant: '<S534>/Constant Value'
         *  Constant: '<S534>/Constant Value1'
         *  Constant: '<S535>/Constant Value'
         *  Constant: '<S535>/Constant Value1'
         *  Constant: '<S536>/Constant Value'
         *  Constant: '<S536>/Constant Value1'
         *  Constant: '<S537>/Constant Value'
         *  Constant: '<S537>/Constant Value1'
         *  Constant: '<S538>/Constant Value'
         *  Constant: '<S538>/Constant Value1'
         *  Constant: '<S539>/Constant Value'
         *  Constant: '<S539>/Constant Value1'
         *  Constant: '<S540>/Constant Value'
         *  Constant: '<S540>/Constant Value1'
         *  Constant: '<S541>/Constant Value'
         *  Constant: '<S541>/Constant Value1'
         *  Constant: '<S542>/Constant Value'
         *  Constant: '<S542>/Constant Value1'
         *  Constant: '<S543>/Constant Value'
         *  Constant: '<S543>/Constant Value1'
         *  Constant: '<S544>/Constant Value'
         *  Constant: '<S544>/Constant Value1'
         *  Constant: '<S545>/Constant Value'
         *  Constant: '<S545>/Constant Value1'
         *  Constant: '<S546>/Constant Value'
         *  Constant: '<S546>/Constant Value1'
         *  Constant: '<S547>/Constant Value'
         *  Constant: '<S547>/Constant Value1'
         *  RelationalOperator: '<S517>/E1'
         *  RelationalOperator: '<S517>/E2'
         *  RelationalOperator: '<S518>/E1'
         *  RelationalOperator: '<S518>/E2'
         *  RelationalOperator: '<S519>/E1'
         *  RelationalOperator: '<S519>/E2'
         *  RelationalOperator: '<S520>/E1'
         *  RelationalOperator: '<S520>/E2'
         *  RelationalOperator: '<S521>/E1'
         *  RelationalOperator: '<S521>/E2'
         *  RelationalOperator: '<S522>/E1'
         *  RelationalOperator: '<S522>/E2'
         *  RelationalOperator: '<S523>/E1'
         *  RelationalOperator: '<S523>/E2'
         *  RelationalOperator: '<S524>/E1'
         *  RelationalOperator: '<S524>/E2'
         *  RelationalOperator: '<S525>/E1'
         *  RelationalOperator: '<S525>/E2'
         *  RelationalOperator: '<S526>/E1'
         *  RelationalOperator: '<S526>/E2'
         *  RelationalOperator: '<S527>/E1'
         *  RelationalOperator: '<S527>/E2'
         *  RelationalOperator: '<S528>/E1'
         *  RelationalOperator: '<S528>/E2'
         *  RelationalOperator: '<S529>/E1'
         *  RelationalOperator: '<S529>/E2'
         *  RelationalOperator: '<S530>/E1'
         *  RelationalOperator: '<S530>/E2'
         *  RelationalOperator: '<S531>/E1'
         *  RelationalOperator: '<S531>/E2'
         *  RelationalOperator: '<S532>/E1'
         *  RelationalOperator: '<S532>/E2'
         *  RelationalOperator: '<S533>/E1'
         *  RelationalOperator: '<S533>/E2'
         *  RelationalOperator: '<S534>/E1'
         *  RelationalOperator: '<S534>/E2'
         *  RelationalOperator: '<S535>/E1'
         *  RelationalOperator: '<S535>/E2'
         *  RelationalOperator: '<S536>/E1'
         *  RelationalOperator: '<S536>/E2'
         *  RelationalOperator: '<S537>/E1'
         *  RelationalOperator: '<S537>/E2'
         *  RelationalOperator: '<S538>/E1'
         *  RelationalOperator: '<S538>/E2'
         *  RelationalOperator: '<S539>/E1'
         *  RelationalOperator: '<S539>/E2'
         *  RelationalOperator: '<S540>/E1'
         *  RelationalOperator: '<S540>/E2'
         *  RelationalOperator: '<S541>/E1'
         *  RelationalOperator: '<S541>/E2'
         *  RelationalOperator: '<S542>/E1'
         *  RelationalOperator: '<S542>/E2'
         *  RelationalOperator: '<S543>/E1'
         *  RelationalOperator: '<S543>/E2'
         *  RelationalOperator: '<S544>/E1'
         *  RelationalOperator: '<S544>/E2'
         *  RelationalOperator: '<S545>/E1'
         *  RelationalOperator: '<S545>/E2'
         *  RelationalOperator: '<S546>/E1'
         *  RelationalOperator: '<S546>/E2'
         *  RelationalOperator: '<S547>/E1'
         *  RelationalOperator: '<S547>/E2'
         */
        switch (rtb_TmpSignalConversionAtMCPB_D)
        {
          case 0:
            /* Outputs for IfAction SubSystem: '<S516>/P0A1C' incorporates:
             *  ActionPort: '<S520>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S520>/Subsystem' incorporates:
             *  EnablePort: '<S560>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S520>/Merge1' incorporates:
                 *  Constant: '<S562>/Constant'
                 *  SignalConversion generated from: '<S560>/VeDNDB_e_FaultSts_DrvMtrB_CM_Perf'
                 */
                DNDB_ac_B.Merge1_mf = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S520>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S520>/Subsystem1' incorporates:
             *  EnablePort: '<S561>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S520>/Merge1' incorporates:
                 *  Constant: '<S563>/Constant'
                 *  SignalConversion generated from: '<S561>/VeDNDB_e_FaultSts_DrvMtrB_CM_Perf'
                 */
                DNDB_ac_B.Merge1_mf = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S520>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S516>/P0A1C' */
            break;

          case 1:
            break;

          case 2:
            /* Outputs for IfAction SubSystem: '<S516>/P3047' incorporates:
             *  ActionPort: '<S547>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S547>/Subsystem' incorporates:
             *  EnablePort: '<S668>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S547>/Merge1' incorporates:
                 *  Constant: '<S670>/Constant'
                 *  SignalConversion generated from: '<S668>/VeDNDB_e_FaultSts_DrMtr_B_IntCMTorqCalPerf'
                 */
                DNDB_ac_B.Merge1_aq = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S547>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S547>/Subsystem1' incorporates:
             *  EnablePort: '<S669>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S547>/Merge1' incorporates:
                 *  Constant: '<S671>/Constant'
                 *  SignalConversion generated from: '<S669>/VeDNDB_e_FaultSts_DrMtr_B_IntCMTorqCalPerf'
                 */
                DNDB_ac_B.Merge1_aq = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S547>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S516>/P3047' */
            break;

          case 3:
            /* Outputs for IfAction SubSystem: '<S516>/P2159' incorporates:
             *  ActionPort: '<S546>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S546>/Subsystem' incorporates:
             *  EnablePort: '<S664>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S546>/Merge1' incorporates:
                 *  Constant: '<S666>/Constant'
                 *  SignalConversion generated from: '<S664>/VeDNDB_e_FaultSts_VSS_B_Perf'
                 */
                DNDB_ac_B.Merge1_cr = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S546>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S546>/Subsystem1' incorporates:
             *  EnablePort: '<S665>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S546>/Merge1' incorporates:
                 *  Constant: '<S667>/Constant'
                 *  SignalConversion generated from: '<S665>/VeDNDB_e_FaultSts_VSS_B_Perf'
                 */
                DNDB_ac_B.Merge1_cr = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S546>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S516>/P2159' */
            break;

          case 4:
            /* Outputs for IfAction SubSystem: '<S516>/P06AC' incorporates:
             *  ActionPort: '<S519>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S519>/Subsystem' incorporates:
             *  EnablePort: '<S556>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S519>/Merge1' incorporates:
                 *  Constant: '<S558>/Constant'
                 *  SignalConversion generated from: '<S556>/VeDNDB_e_FaultSts_IntrnlTempSnsrB_Perf'
                 */
                DNDB_ac_B.Merge1_mhz = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S519>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S519>/Subsystem1' incorporates:
             *  EnablePort: '<S557>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S519>/Merge1' incorporates:
                 *  Constant: '<S559>/Constant'
                 *  SignalConversion generated from: '<S557>/VeDNDB_e_FaultSts_IntrnlTempSnsrB_Perf'
                 */
                DNDB_ac_B.Merge1_mhz = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S519>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S516>/P06AC' */
            break;

          case 5:
            /* Outputs for IfAction SubSystem: '<S516>/P0652' incorporates:
             *  ActionPort: '<S517>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S517>/Subsystem' incorporates:
             *  EnablePort: '<S548>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S517>/Merge1' incorporates:
                 *  Constant: '<S550>/Constant'
                 *  SignalConversion generated from: '<S548>/VeDNDB_e_FaultSts_SnsrRefVolt2CktLo'
                 */
                DNDB_ac_B.Merge1_oqm = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S517>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S517>/Subsystem1' incorporates:
             *  EnablePort: '<S549>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S517>/Merge1' incorporates:
                 *  Constant: '<S551>/Constant'
                 *  SignalConversion generated from: '<S549>/VeDNDB_e_FaultSts_SnsrRefVolt2CktLo'
                 */
                DNDB_ac_B.Merge1_oqm = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S517>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S516>/P0652' */
            break;

          case 6:
            /* Outputs for IfAction SubSystem: '<S516>/P0653' incorporates:
             *  ActionPort: '<S518>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S518>/Subsystem' incorporates:
             *  EnablePort: '<S552>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S518>/Merge1' incorporates:
                 *  Constant: '<S554>/Constant'
                 *  SignalConversion generated from: '<S552>/VeDNDB_e_FaultSts_SnsrRefVolt2CktHi'
                 */
                DNDB_ac_B.Merge1_lfg = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S518>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S518>/Subsystem1' incorporates:
             *  EnablePort: '<S553>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S518>/Merge1' incorporates:
                 *  Constant: '<S555>/Constant'
                 *  SignalConversion generated from: '<S553>/VeDNDB_e_FaultSts_SnsrRefVolt2CktHi'
                 */
                DNDB_ac_B.Merge1_lfg = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S518>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S516>/P0653' */
            break;

          case 7:
            /* Outputs for IfAction SubSystem: '<S516>/P0A31' incorporates:
             *  ActionPort: '<S521>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S521>/Subsystem' incorporates:
             *  EnablePort: '<S564>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S521>/Merge1' incorporates:
                 *  Constant: '<S566>/Constant'
                 *  SignalConversion generated from: '<S564>/VeDNDB_e_FaultSts_DrvMtrB_TempSnsrPerf'
                 */
                DNDB_ac_B.Merge1_mg = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S521>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S521>/Subsystem1' incorporates:
             *  EnablePort: '<S565>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S521>/Merge1' incorporates:
                 *  Constant: '<S567>/Constant'
                 *  SignalConversion generated from: '<S565>/VeDNDB_e_FaultSts_DrvMtrB_TempSnsrPerf'
                 */
                DNDB_ac_B.Merge1_mg = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S521>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S516>/P0A31' */
            break;

          case 8:
            /* Outputs for IfAction SubSystem: '<S516>/P0A32' incorporates:
             *  ActionPort: '<S522>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S522>/Subsystem' incorporates:
             *  EnablePort: '<S568>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S522>/Merge1' incorporates:
                 *  Constant: '<S570>/Constant'
                 *  SignalConversion generated from: '<S568>/VeDNDB_e_FaultSts_DrvMtrB_TempSnsrCktLo'
                 */
                DNDB_ac_B.Merge1_fv = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S522>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S522>/Subsystem1' incorporates:
             *  EnablePort: '<S569>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S522>/Merge1' incorporates:
                 *  Constant: '<S571>/Constant'
                 *  SignalConversion generated from: '<S569>/VeDNDB_e_FaultSts_DrvMtrB_TempSnsrCktLo'
                 */
                DNDB_ac_B.Merge1_fv = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S522>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S516>/P0A32' */
            break;

          case 9:
            /* Outputs for IfAction SubSystem: '<S516>/P0A33' incorporates:
             *  ActionPort: '<S523>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S523>/Subsystem' incorporates:
             *  EnablePort: '<S572>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S523>/Merge1' incorporates:
                 *  Constant: '<S574>/Constant'
                 *  SignalConversion generated from: '<S572>/VeDNDB_e_FaultSts_DrvMtrB_TempSnsrCktHi'
                 */
                DNDB_ac_B.Merge1_iz = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S523>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S523>/Subsystem1' incorporates:
             *  EnablePort: '<S573>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S523>/Merge1' incorporates:
                 *  Constant: '<S575>/Constant'
                 *  SignalConversion generated from: '<S573>/VeDNDB_e_FaultSts_DrvMtrB_TempSnsrCktHi'
                 */
                DNDB_ac_B.Merge1_iz = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S523>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S516>/P0A33' */
            break;

          case 10:
            /* Outputs for IfAction SubSystem: '<S516>/P0A35' incorporates:
             *  ActionPort: '<S524>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S524>/Subsystem' incorporates:
             *  EnablePort: '<S576>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S524>/Merge1' incorporates:
                 *  Constant: '<S578>/Constant'
                 *  SignalConversion generated from: '<S576>/VeDNDB_e_FaultSts_DrvMtrB_Ovrtemp'
                 */
                DNDB_ac_B.Merge1_fb = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S524>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S524>/Subsystem1' incorporates:
             *  EnablePort: '<S577>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S524>/Merge1' incorporates:
                 *  Constant: '<S579>/Constant'
                 *  SignalConversion generated from: '<S577>/VeDNDB_e_FaultSts_DrvMtrB_Ovrtemp'
                 */
                DNDB_ac_B.Merge1_fb = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S524>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S516>/P0A35' */
            break;

          case 11:
            /* Outputs for IfAction SubSystem: '<S516>/P0BD9' incorporates:
             *  ActionPort: '<S531>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S531>/Subsystem' incorporates:
             *  EnablePort: '<S604>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S531>/Merge1' incorporates:
                 *  Constant: '<S606>/Constant'
                 *  SignalConversion generated from: '<S604>/VeDNDB_e_FaultSts_DM_InvTempSnsrD_CktHi'
                 */
                DNDB_ac_B.Merge1_dp = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S531>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S531>/Subsystem1' incorporates:
             *  EnablePort: '<S605>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S531>/Merge1' incorporates:
                 *  Constant: '<S607>/Constant'
                 *  SignalConversion generated from: '<S605>/VeDNDB_e_FaultSts_DM_InvTempSnsrD_CktHi'
                 */
                DNDB_ac_B.Merge1_dp = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S531>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S516>/P0BD9' */
            break;

          case 12:
            /* Outputs for IfAction SubSystem: '<S516>/P0BE2' incorporates:
             *  ActionPort: '<S532>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S532>/Subsystem' incorporates:
             *  EnablePort: '<S608>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S532>/Merge1' incorporates:
                 *  Constant: '<S610>/Constant'
                 *  SignalConversion generated from: '<S608>/VeDNDB_e_FaultSts_DM_InvTempSnsrF_CktLo'
                 */
                DNDB_ac_B.Merge1_mk = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S532>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S532>/Subsystem1' incorporates:
             *  EnablePort: '<S609>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S532>/Merge1' incorporates:
                 *  Constant: '<S611>/Constant'
                 *  SignalConversion generated from: '<S609>/VeDNDB_e_FaultSts_DM_InvTempSnsrF_CktLo'
                 */
                DNDB_ac_B.Merge1_mk = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S532>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S516>/P0BE2' */
            break;

          case 13:
            /* Outputs for IfAction SubSystem: '<S516>/P0BE3' incorporates:
             *  ActionPort: '<S533>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S533>/Subsystem' incorporates:
             *  EnablePort: '<S612>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S533>/Merge1' incorporates:
                 *  Constant: '<S614>/Constant'
                 *  SignalConversion generated from: '<S612>/VeDNDB_e_FaultSts_DM_InvTempSnsrF_CktHi'
                 */
                DNDB_ac_B.Merge1_lb = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S533>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S533>/Subsystem1' incorporates:
             *  EnablePort: '<S613>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S533>/Merge1' incorporates:
                 *  Constant: '<S615>/Constant'
                 *  SignalConversion generated from: '<S613>/VeDNDB_e_FaultSts_DM_InvTempSnsrF_CktHi'
                 */
                DNDB_ac_B.Merge1_lb = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S533>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S516>/P0BE3' */
            break;

          case 14:
            /* Outputs for IfAction SubSystem: '<S516>/P0AF5' incorporates:
             *  ActionPort: '<S527>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S527>/Subsystem' incorporates:
             *  EnablePort: '<S588>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S527>/Merge1' incorporates:
                 *  Constant: '<S590>/Constant'
                 *  SignalConversion generated from: '<S588>/VeDNDB_e_FaultSts_DM_InvTempSnsrB_CktHi'
                 */
                DNDB_ac_B.Merge1_kc = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S527>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S527>/Subsystem1' incorporates:
             *  EnablePort: '<S589>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S527>/Merge1' incorporates:
                 *  Constant: '<S591>/Constant'
                 *  SignalConversion generated from: '<S589>/VeDNDB_e_FaultSts_DM_InvTempSnsrB_CktHi'
                 */
                DNDB_ac_B.Merge1_kc = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S527>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S516>/P0AF5' */
            break;

          case 15:
            /* Outputs for IfAction SubSystem: '<S516>/P0AF4' incorporates:
             *  ActionPort: '<S526>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S526>/Subsystem' incorporates:
             *  EnablePort: '<S584>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S526>/Merge1' incorporates:
                 *  Constant: '<S586>/Constant'
                 *  SignalConversion generated from: '<S584>/VeDNDB_e_FaultSts_DM_InvTempSnsrB_CktLo'
                 */
                DNDB_ac_B.Merge1_fx = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S526>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S526>/Subsystem1' incorporates:
             *  EnablePort: '<S585>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S526>/Merge1' incorporates:
                 *  Constant: '<S587>/Constant'
                 *  SignalConversion generated from: '<S585>/VeDNDB_e_FaultSts_DM_InvTempSnsrB_CktLo'
                 */
                DNDB_ac_B.Merge1_fx = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S526>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S516>/P0AF4' */
            break;

          case 16:
            /* Outputs for IfAction SubSystem: '<S516>/P0AF3' incorporates:
             *  ActionPort: '<S525>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S525>/Subsystem' incorporates:
             *  EnablePort: '<S580>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S525>/Merge1' incorporates:
                 *  Constant: '<S582>/Constant'
                 *  SignalConversion generated from: '<S580>/VeDNDB_e_FaultSts_DM_InvTempSnsrB_Perf'
                 */
                DNDB_ac_B.Merge1_mw = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S525>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S525>/Subsystem1' incorporates:
             *  EnablePort: '<S581>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S525>/Merge1' incorporates:
                 *  Constant: '<S583>/Constant'
                 *  SignalConversion generated from: '<S581>/VeDNDB_e_FaultSts_DM_InvTempSnsrB_Perf'
                 */
                DNDB_ac_B.Merge1_mw = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S525>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S516>/P0AF3' */
            break;

          case 17:
            /* Outputs for IfAction SubSystem: '<S516>/P0BD8' incorporates:
             *  ActionPort: '<S530>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S530>/Subsystem' incorporates:
             *  EnablePort: '<S600>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S530>/Merge1' incorporates:
                 *  Constant: '<S602>/Constant'
                 *  SignalConversion generated from: '<S600>/VeDNDB_e_FaultSts_DM_InvTempSnsrD_CktLo'
                 */
                DNDB_ac_B.Merge1_oq = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S530>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S530>/Subsystem1' incorporates:
             *  EnablePort: '<S601>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S530>/Merge1' incorporates:
                 *  Constant: '<S603>/Constant'
                 *  SignalConversion generated from: '<S601>/VeDNDB_e_FaultSts_DM_InvTempSnsrD_CktLo'
                 */
                DNDB_ac_B.Merge1_oq = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S530>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S516>/P0BD8' */
            break;

          case 18:
            /* Outputs for IfAction SubSystem: '<S516>/P0BD1' incorporates:
             *  ActionPort: '<S528>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S528>/Subsystem' incorporates:
             *  EnablePort: '<S592>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S528>/Merge1' incorporates:
                 *  Constant: '<S594>/Constant'
                 *  SignalConversion generated from: '<S592>/VeDNDB_e_FaultSts_DM_MtrInvTempSnsr3Ckt'
                 */
                DNDB_ac_B.Merge1_i1 = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S528>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S528>/Subsystem1' incorporates:
             *  EnablePort: '<S593>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S528>/Merge1' incorporates:
                 *  Constant: '<S595>/Constant'
                 *  SignalConversion generated from: '<S593>/VeDNDB_e_FaultSts_DM_MtrInvTempSnsr3Ckt'
                 */
                DNDB_ac_B.Merge1_i1 = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S528>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S516>/P0BD1' */
            break;

          case 19:
            /* Outputs for IfAction SubSystem: '<S516>/P0BD6' incorporates:
             *  ActionPort: '<S529>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S529>/Subsystem' incorporates:
             *  EnablePort: '<S596>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S529>/Merge1' incorporates:
                 *  Constant: '<S598>/Constant'
                 *  SignalConversion generated from: '<S596>/VeDNDB_e_FaultSts_DM_MtrInvTempSnsr4Ckt'
                 */
                DNDB_ac_B.Merge1_ga = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S529>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S529>/Subsystem1' incorporates:
             *  EnablePort: '<S597>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S529>/Merge1' incorporates:
                 *  Constant: '<S599>/Constant'
                 *  SignalConversion generated from: '<S597>/VeDNDB_e_FaultSts_DM_MtrInvTempSnsr4Ckt'
                 */
                DNDB_ac_B.Merge1_ga = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S529>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S516>/P0BD6' */
            break;

          case 20:
            /* Outputs for IfAction SubSystem: '<S516>/P0BF2' incorporates:
             *  ActionPort: '<S534>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S534>/Subsystem' incorporates:
             *  EnablePort: '<S616>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S534>/Merge1' incorporates:
                 *  Constant: '<S618>/Constant'
                 *  SignalConversion generated from: '<S616>/VeDNDB_e_FaultSts_DM_B_PU_CurrSnsrPerf'
                 */
                DNDB_ac_B.Merge1_pv = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S534>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S534>/Subsystem1' incorporates:
             *  EnablePort: '<S617>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S534>/Merge1' incorporates:
                 *  Constant: '<S619>/Constant'
                 *  SignalConversion generated from: '<S617>/VeDNDB_e_FaultSts_DM_B_PU_CurrSnsrPerf'
                 */
                DNDB_ac_B.Merge1_pv = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S534>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S516>/P0BF2' */
            break;

          case 21:
            /* Outputs for IfAction SubSystem: '<S516>/P0BF3' incorporates:
             *  ActionPort: '<S535>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S535>/Subsystem' incorporates:
             *  EnablePort: '<S620>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S535>/Merge1' incorporates:
                 *  Constant: '<S622>/Constant'
                 *  SignalConversion generated from: '<S620>/VeDNDB_e_FaultSts_DM_B_PU_CurrSnsrCktLo'
                 */
                DNDB_ac_B.Merge1_ep = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S535>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S535>/Subsystem1' incorporates:
             *  EnablePort: '<S621>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S535>/Merge1' incorporates:
                 *  Constant: '<S623>/Constant'
                 *  SignalConversion generated from: '<S621>/VeDNDB_e_FaultSts_DM_B_PU_CurrSnsrCktLo'
                 */
                DNDB_ac_B.Merge1_ep = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S535>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S516>/P0BF3' */
            break;

          case 22:
            /* Outputs for IfAction SubSystem: '<S516>/P0BF4' incorporates:
             *  ActionPort: '<S536>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S536>/Subsystem' incorporates:
             *  EnablePort: '<S624>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S536>/Merge1' incorporates:
                 *  Constant: '<S626>/Constant'
                 *  SignalConversion generated from: '<S624>/VeDNDB_e_FaultSts_DM_B_PU_CurrSnsrCktHi'
                 */
                DNDB_ac_B.Merge1_ks = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S536>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S536>/Subsystem1' incorporates:
             *  EnablePort: '<S625>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S536>/Merge1' incorporates:
                 *  Constant: '<S627>/Constant'
                 *  SignalConversion generated from: '<S625>/VeDNDB_e_FaultSts_DM_B_PU_CurrSnsrCktHi'
                 */
                DNDB_ac_B.Merge1_ks = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S536>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S516>/P0BF4' */
            break;

          case 23:
            /* Outputs for IfAction SubSystem: '<S516>/P0BF6' incorporates:
             *  ActionPort: '<S537>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S537>/Subsystem' incorporates:
             *  EnablePort: '<S628>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S537>/Merge1' incorporates:
                 *  Constant: '<S630>/Constant'
                 *  SignalConversion generated from: '<S628>/VeDNDB_e_FaultSts_DM_B_PV_CurrSnsrPerf'
                 */
                DNDB_ac_B.Merge1_l0 = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S537>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S537>/Subsystem1' incorporates:
             *  EnablePort: '<S629>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S537>/Merge1' incorporates:
                 *  Constant: '<S631>/Constant'
                 *  SignalConversion generated from: '<S629>/VeDNDB_e_FaultSts_DM_B_PV_CurrSnsrPerf'
                 */
                DNDB_ac_B.Merge1_l0 = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S537>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S516>/P0BF6' */
            break;

          case 24:
            /* Outputs for IfAction SubSystem: '<S516>/P0BF7' incorporates:
             *  ActionPort: '<S538>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S538>/Subsystem' incorporates:
             *  EnablePort: '<S632>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S538>/Merge1' incorporates:
                 *  Constant: '<S634>/Constant'
                 *  SignalConversion generated from: '<S632>/VeDNDB_e_FaultSts_DM_B_PV_CurrSnsrCktLo'
                 */
                DNDB_ac_B.Merge1_ld = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S538>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S538>/Subsystem1' incorporates:
             *  EnablePort: '<S633>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S538>/Merge1' incorporates:
                 *  Constant: '<S635>/Constant'
                 *  SignalConversion generated from: '<S633>/VeDNDB_e_FaultSts_DM_B_PV_CurrSnsrCktLo'
                 */
                DNDB_ac_B.Merge1_ld = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S538>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S516>/P0BF7' */
            break;

          case 25:
            /* Outputs for IfAction SubSystem: '<S516>/P0BF8' incorporates:
             *  ActionPort: '<S539>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S539>/Subsystem' incorporates:
             *  EnablePort: '<S636>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S539>/Merge1' incorporates:
                 *  Constant: '<S638>/Constant'
                 *  SignalConversion generated from: '<S636>/VeDNDB_e_FaultSts_DM_B_PV_CurrSnsrCktHi'
                 */
                DNDB_ac_B.Merge1_p5 = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S539>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S539>/Subsystem1' incorporates:
             *  EnablePort: '<S637>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S539>/Merge1' incorporates:
                 *  Constant: '<S639>/Constant'
                 *  SignalConversion generated from: '<S637>/VeDNDB_e_FaultSts_DM_B_PV_CurrSnsrCktHi'
                 */
                DNDB_ac_B.Merge1_p5 = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S539>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S516>/P0BF8' */
            break;

          case 26:
            /* Outputs for IfAction SubSystem: '<S516>/P0BFA' incorporates:
             *  ActionPort: '<S540>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S540>/Subsystem' incorporates:
             *  EnablePort: '<S640>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S540>/Merge1' incorporates:
                 *  Constant: '<S642>/Constant'
                 *  SignalConversion generated from: '<S640>/VeDNDB_e_FaultSts_DM_B_PW_CurrSnsrPerf'
                 */
                DNDB_ac_B.Merge1_j5 = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S540>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S540>/Subsystem1' incorporates:
             *  EnablePort: '<S641>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S540>/Merge1' incorporates:
                 *  Constant: '<S643>/Constant'
                 *  SignalConversion generated from: '<S641>/VeDNDB_e_FaultSts_DM_B_PW_CurrSnsrPerf'
                 */
                DNDB_ac_B.Merge1_j5 = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S540>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S516>/P0BFA' */
            break;

          case 27:
            /* Outputs for IfAction SubSystem: '<S516>/P0BFB' incorporates:
             *  ActionPort: '<S541>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S541>/Subsystem' incorporates:
             *  EnablePort: '<S644>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S541>/Merge1' incorporates:
                 *  Constant: '<S646>/Constant'
                 *  SignalConversion generated from: '<S644>/VeDNDB_e_FaultSts_DM_B_PW_CurrSnsrCktLo'
                 */
                DNDB_ac_B.Merge1_pu = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S541>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S541>/Subsystem1' incorporates:
             *  EnablePort: '<S645>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S541>/Merge1' incorporates:
                 *  Constant: '<S647>/Constant'
                 *  SignalConversion generated from: '<S645>/VeDNDB_e_FaultSts_DM_B_PW_CurrSnsrCktLo'
                 */
                DNDB_ac_B.Merge1_pu = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S541>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S516>/P0BFB' */
            break;

          case 28:
            /* Outputs for IfAction SubSystem: '<S516>/P0BFC' incorporates:
             *  ActionPort: '<S542>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S542>/Subsystem' incorporates:
             *  EnablePort: '<S648>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S542>/Merge1' incorporates:
                 *  Constant: '<S650>/Constant'
                 *  SignalConversion generated from: '<S648>/VeDNDB_e_FaultSts_DM_B_PW_CurrSnsrCktHi'
                 */
                DNDB_ac_B.Merge1_mm = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S542>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S542>/Subsystem1' incorporates:
             *  EnablePort: '<S649>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S542>/Merge1' incorporates:
                 *  Constant: '<S651>/Constant'
                 *  SignalConversion generated from: '<S649>/VeDNDB_e_FaultSts_DM_B_PW_CurrSnsrCktHi'
                 */
                DNDB_ac_B.Merge1_mm = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S542>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S516>/P0BFC' */
            break;

          case 29:
            /* Outputs for IfAction SubSystem: '<S516>/P0BFE' incorporates:
             *  ActionPort: '<S543>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S543>/Subsystem' incorporates:
             *  EnablePort: '<S652>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S543>/Merge1' incorporates:
                 *  Constant: '<S654>/Constant'
                 *  SignalConversion generated from: '<S652>/VeDNDB_e_FaultSts_DM_B_PUVW_Corr'
                 */
                DNDB_ac_B.Merge1_fl = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S543>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S543>/Subsystem1' incorporates:
             *  EnablePort: '<S653>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S543>/Merge1' incorporates:
                 *  Constant: '<S655>/Constant'
                 *  SignalConversion generated from: '<S653>/VeDNDB_e_FaultSts_DM_B_PUVW_Corr'
                 */
                DNDB_ac_B.Merge1_fl = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S543>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S516>/P0BFE' */
            break;

          case 30:
            /* Outputs for IfAction SubSystem: '<S516>/P0C08' incorporates:
             *  ActionPort: '<S545>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S545>/Subsystem' incorporates:
             *  EnablePort: '<S660>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S545>/Merge1' incorporates:
                 *  Constant: '<S662>/Constant'
                 *  SignalConversion generated from: '<S660>/VeDNDB_e_FaultSts_DM_B_PUVW_Ckt'
                 */
                DNDB_ac_B.Merge1_bw = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S545>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S545>/Subsystem1' incorporates:
             *  EnablePort: '<S661>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S545>/Merge1' incorporates:
                 *  Constant: '<S663>/Constant'
                 *  SignalConversion generated from: '<S661>/VeDNDB_e_FaultSts_DM_B_PUVW_Ckt'
                 */
                DNDB_ac_B.Merge1_bw = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S545>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S516>/P0C08' */
            break;

          case 31:
            /* Outputs for IfAction SubSystem: '<S516>/P0C04' incorporates:
             *  ActionPort: '<S544>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S544>/Subsystem' incorporates:
             *  EnablePort: '<S656>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S544>/Merge1' incorporates:
                 *  Constant: '<S658>/Constant'
                 *  SignalConversion generated from: '<S656>/VeDNDB_e_FaultSts_DM_B_CurrHi'
                 */
                DNDB_ac_B.Merge1_oh = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S544>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S544>/Subsystem1' incorporates:
             *  EnablePort: '<S657>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_e == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S544>/Merge1' incorporates:
                 *  Constant: '<S659>/Constant'
                 *  SignalConversion generated from: '<S657>/VeDNDB_e_FaultSts_DM_B_CurrHi'
                 */
                DNDB_ac_B.Merge1_oh = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S544>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S516>/P0C04' */
            break;

          default:
            /* no actions */
            break;
        }

        /* End of SwitchCase: '<S516>/SwitchCase' */
    }

    /* End of Outputs for SubSystem: '<S512>/BlocksIndex1' */

    /* Outputs for Enabled SubSystem: '<S512>/BlocksIndex2' incorporates:
     *  EnablePort: '<S514>/Enable'
     */
    if (DNDB_ac_DW.UnitDelay1_DSTATE_d != rtb_TmpSignalConversionAtMCPB_m)
    {
        /* SwitchCase: '<S672>/SwitchCase' incorporates:
         *  Constant: '<S673>/Constant Value'
         *  Constant: '<S673>/Constant Value1'
         *  Constant: '<S674>/Constant Value'
         *  Constant: '<S674>/Constant Value1'
         *  Constant: '<S675>/Constant Value'
         *  Constant: '<S675>/Constant Value1'
         *  Constant: '<S676>/Constant Value'
         *  Constant: '<S676>/Constant Value1'
         *  Constant: '<S677>/Constant Value'
         *  Constant: '<S677>/Constant Value1'
         *  Constant: '<S678>/Constant Value'
         *  Constant: '<S678>/Constant Value1'
         *  Constant: '<S679>/Constant Value'
         *  Constant: '<S679>/Constant Value1'
         *  Constant: '<S680>/Constant Value'
         *  Constant: '<S680>/Constant Value1'
         *  Constant: '<S681>/Constant Value'
         *  Constant: '<S681>/Constant Value1'
         *  Constant: '<S682>/Constant Value'
         *  Constant: '<S682>/Constant Value1'
         *  Constant: '<S683>/Constant Value'
         *  Constant: '<S683>/Constant Value1'
         *  Constant: '<S684>/Constant Value'
         *  Constant: '<S684>/Constant Value1'
         *  Constant: '<S685>/Constant Value'
         *  Constant: '<S685>/Constant Value1'
         *  Constant: '<S686>/Constant Value'
         *  Constant: '<S686>/Constant Value1'
         *  Constant: '<S687>/Constant Value'
         *  Constant: '<S687>/Constant Value1'
         *  Constant: '<S688>/Constant Value'
         *  Constant: '<S688>/Constant Value1'
         *  Constant: '<S689>/Constant Value'
         *  Constant: '<S689>/Constant Value1'
         *  Constant: '<S690>/Constant Value'
         *  Constant: '<S690>/Constant Value1'
         *  Constant: '<S691>/Constant Value'
         *  Constant: '<S691>/Constant Value1'
         *  Constant: '<S692>/Constant Value'
         *  Constant: '<S692>/Constant Value1'
         *  Constant: '<S693>/Constant Value'
         *  Constant: '<S693>/Constant Value1'
         *  Constant: '<S694>/Constant Value'
         *  Constant: '<S694>/Constant Value1'
         *  Constant: '<S695>/Constant Value'
         *  Constant: '<S695>/Constant Value1'
         *  Constant: '<S696>/Constant Value'
         *  Constant: '<S696>/Constant Value1'
         *  Constant: '<S697>/Constant Value'
         *  Constant: '<S697>/Constant Value1'
         *  RelationalOperator: '<S673>/E1'
         *  RelationalOperator: '<S673>/E2'
         *  RelationalOperator: '<S674>/E1'
         *  RelationalOperator: '<S674>/E2'
         *  RelationalOperator: '<S675>/E1'
         *  RelationalOperator: '<S675>/E2'
         *  RelationalOperator: '<S676>/E1'
         *  RelationalOperator: '<S676>/E2'
         *  RelationalOperator: '<S677>/E1'
         *  RelationalOperator: '<S677>/E2'
         *  RelationalOperator: '<S678>/E1'
         *  RelationalOperator: '<S678>/E2'
         *  RelationalOperator: '<S679>/E1'
         *  RelationalOperator: '<S679>/E2'
         *  RelationalOperator: '<S680>/E1'
         *  RelationalOperator: '<S680>/E2'
         *  RelationalOperator: '<S681>/E1'
         *  RelationalOperator: '<S681>/E2'
         *  RelationalOperator: '<S682>/E1'
         *  RelationalOperator: '<S682>/E2'
         *  RelationalOperator: '<S683>/E1'
         *  RelationalOperator: '<S683>/E2'
         *  RelationalOperator: '<S684>/E1'
         *  RelationalOperator: '<S684>/E2'
         *  RelationalOperator: '<S685>/E1'
         *  RelationalOperator: '<S685>/E2'
         *  RelationalOperator: '<S686>/E1'
         *  RelationalOperator: '<S686>/E2'
         *  RelationalOperator: '<S687>/E1'
         *  RelationalOperator: '<S687>/E2'
         *  RelationalOperator: '<S688>/E1'
         *  RelationalOperator: '<S688>/E2'
         *  RelationalOperator: '<S689>/E1'
         *  RelationalOperator: '<S689>/E2'
         *  RelationalOperator: '<S690>/E1'
         *  RelationalOperator: '<S690>/E2'
         *  RelationalOperator: '<S691>/E1'
         *  RelationalOperator: '<S691>/E2'
         *  RelationalOperator: '<S692>/E1'
         *  RelationalOperator: '<S692>/E2'
         *  RelationalOperator: '<S693>/E1'
         *  RelationalOperator: '<S693>/E2'
         *  RelationalOperator: '<S694>/E1'
         *  RelationalOperator: '<S694>/E2'
         *  RelationalOperator: '<S695>/E1'
         *  RelationalOperator: '<S695>/E2'
         *  RelationalOperator: '<S696>/E1'
         *  RelationalOperator: '<S696>/E2'
         *  RelationalOperator: '<S697>/E1'
         *  RelationalOperator: '<S697>/E2'
         */
        switch (rtb_TmpSignalConversionAtMCPB_m)
        {
          case 0:
            /* Outputs for IfAction SubSystem: '<S672>/P0A45' incorporates:
             *  ActionPort: '<S674>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S674>/Subsystem' incorporates:
             *  EnablePort: '<S702>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_n == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S674>/Merge1' incorporates:
                 *  Constant: '<S704>/Constant'
                 *  SignalConversion generated from: '<S702>/VeDNDB_e_FaultSts_DrvMtrB_PstnSnsrCkt'
                 */
                DNDB_ac_B.Merge1_i2 = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S674>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S674>/Subsystem1' incorporates:
             *  EnablePort: '<S703>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_n == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S674>/Merge1' incorporates:
                 *  Constant: '<S705>/Constant'
                 *  SignalConversion generated from: '<S703>/VeDNDB_e_FaultSts_DrvMtrB_PstnSnsrCkt'
                 */
                DNDB_ac_B.Merge1_i2 = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S674>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S672>/P0A45' */
            break;

          case 1:
            /* Outputs for IfAction SubSystem: '<S672>/P0A49' incorporates:
             *  ActionPort: '<S675>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S675>/Subsystem' incorporates:
             *  EnablePort: '<S706>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_n == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S675>/Merge1' incorporates:
                 *  Constant: '<S708>/Constant'
                 *  SignalConversion generated from: '<S706>/VeDNDB_e_FaultSts_DrvMtrB_PstnSnsrCktInt'
                 */
                DNDB_ac_B.Merge1_gn = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S675>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S675>/Subsystem1' incorporates:
             *  EnablePort: '<S707>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_n == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S675>/Merge1' incorporates:
                 *  Constant: '<S709>/Constant'
                 *  SignalConversion generated from: '<S707>/VeDNDB_e_FaultSts_DrvMtrB_PstnSnsrCktInt'
                 */
                DNDB_ac_B.Merge1_gn = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S675>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S672>/P0A49' */
            break;

          case 2:
            /* Outputs for IfAction SubSystem: '<S672>/P0C0E' incorporates:
             *  ActionPort: '<S678>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S678>/Subsystem' incorporates:
             *  EnablePort: '<S718>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_n == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S678>/Merge1' incorporates:
                 *  Constant: '<S720>/Constant'
                 *  SignalConversion generated from: '<S718>/VeDNDB_e_FaultSts_DM_B_I_PwrSplyCkt'
                 */
                DNDB_ac_B.Merge1_k3 = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S678>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S678>/Subsystem1' incorporates:
             *  EnablePort: '<S719>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_n == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S678>/Merge1' incorporates:
                 *  Constant: '<S721>/Constant'
                 *  SignalConversion generated from: '<S719>/VeDNDB_e_FaultSts_DM_B_I_PwrSplyCkt'
                 */
                DNDB_ac_B.Merge1_k3 = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S678>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S672>/P0C0E' */
            break;

          case 3:
            /* Outputs for IfAction SubSystem: '<S672>/P0C1A' incorporates:
             *  ActionPort: '<S681>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S681>/Subsystem' incorporates:
             *  EnablePort: '<S730>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_n == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S681>/Merge1' incorporates:
                 *  Constant: '<S732>/Constant'
                 *  SignalConversion generated from: '<S730>/VeDNDB_e_FaultSts_DM_B_TorqDlvdPerf'
                 */
                DNDB_ac_B.Merge1_no = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S681>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S681>/Subsystem1' incorporates:
             *  EnablePort: '<S731>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_n == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S681>/Merge1' incorporates:
                 *  Constant: '<S733>/Constant'
                 *  SignalConversion generated from: '<S731>/VeDNDB_e_FaultSts_DM_B_TorqDlvdPerf'
                 */
                DNDB_ac_B.Merge1_no = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S681>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S672>/P0C1A' */
            break;

          case 4:
            /* Outputs for IfAction SubSystem: '<S672>/P1B10' incorporates:
             *  ActionPort: '<S689>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S689>/Subsystem' incorporates:
             *  EnablePort: '<S762>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_n == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S689>/Merge1' incorporates:
                 *  Constant: '<S764>/Constant'
                 *  SignalConversion generated from: '<S762>/VeDNDB_e_FaultSts_MCPB_P1B10'
                 */
                DNDB_ac_B.Merge1_jv = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S689>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S689>/Subsystem1' incorporates:
             *  EnablePort: '<S763>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_n == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S689>/Merge1' incorporates:
                 *  Constant: '<S765>/Constant'
                 *  SignalConversion generated from: '<S763>/VeDNDB_e_FaultSts_MCPB_P1B10'
                 */
                DNDB_ac_B.Merge1_jv = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S689>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S672>/P1B10' */
            break;

          case 5:
            /* Outputs for IfAction SubSystem: '<S672>/P1AEB' incorporates:
             *  ActionPort: '<S684>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S684>/Subsystem' incorporates:
             *  EnablePort: '<S742>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_n == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S684>/Merge1' incorporates:
                 *  Constant: '<S744>/Constant'
                 *  SignalConversion generated from: '<S742>/VeDNDB_e_FaultSts_DMCM_B_HB_VoltSnsCktHi'
                 */
                DNDB_ac_B.Merge1_hp = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S684>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S684>/Subsystem1' incorporates:
             *  EnablePort: '<S743>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_n == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S684>/Merge1' incorporates:
                 *  Constant: '<S745>/Constant'
                 *  SignalConversion generated from: '<S743>/VeDNDB_e_FaultSts_DMCM_B_HB_VoltSnsCktHi'
                 */
                DNDB_ac_B.Merge1_hp = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S684>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S672>/P1AEB' */
            break;

          case 6:
            /* Outputs for IfAction SubSystem: '<S672>/P1AED' incorporates:
             *  ActionPort: '<S685>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S685>/Subsystem' incorporates:
             *  EnablePort: '<S746>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_n == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S685>/Merge1' incorporates:
                 *  Constant: '<S748>/Constant'
                 *  SignalConversion generated from: '<S746>/VeDNDB_e_FaultSts_DMCM_B_HB_SysVolt'
                 */
                DNDB_ac_B.Merge1_gl = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S685>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S685>/Subsystem1' incorporates:
             *  EnablePort: '<S747>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_n == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S685>/Merge1' incorporates:
                 *  Constant: '<S749>/Constant'
                 *  SignalConversion generated from: '<S747>/VeDNDB_e_FaultSts_DMCM_B_HB_SysVolt'
                 */
                DNDB_ac_B.Merge1_gl = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S685>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S672>/P1AED' */
            break;

          case 7:
            /* Outputs for IfAction SubSystem: '<S672>/P1AEF' incorporates:
             *  ActionPort: '<S686>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S686>/Subsystem' incorporates:
             *  EnablePort: '<S750>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_n == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S686>/Merge1' incorporates:
                 *  Constant: '<S752>/Constant'
                 *  SignalConversion generated from: '<S750>/VeDNDB_e_FaultSts_DMCM_B_HB_SysVoltHi'
                 */
                DNDB_ac_B.Merge1_de = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S686>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S686>/Subsystem1' incorporates:
             *  EnablePort: '<S751>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_n == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S686>/Merge1' incorporates:
                 *  Constant: '<S753>/Constant'
                 *  SignalConversion generated from: '<S751>/VeDNDB_e_FaultSts_DMCM_B_HB_SysVoltHi'
                 */
                DNDB_ac_B.Merge1_de = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S686>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S672>/P1AEF' */
            break;

          case 8:
            /* Outputs for IfAction SubSystem: '<S672>/P1B08' incorporates:
             *  ActionPort: '<S688>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S688>/Subsystem' incorporates:
             *  EnablePort: '<S758>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_n == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S688>/Merge1' incorporates:
                 *  Constant: '<S760>/Constant'
                 *  SignalConversion generated from: '<S758>/VeDNDB_e_FaultSts_MCPB_P1B08'
                 */
                DNDB_ac_B.Merge1_mym = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S688>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S688>/Subsystem1' incorporates:
             *  EnablePort: '<S759>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_n == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S688>/Merge1' incorporates:
                 *  Constant: '<S761>/Constant'
                 *  SignalConversion generated from: '<S759>/VeDNDB_e_FaultSts_MCPB_P1B08'
                 */
                DNDB_ac_B.Merge1_mym = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S688>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S672>/P1B08' */
            break;

          case 9:
          case 15:
          case 16:
          case 17:
          case 21:
          case 22:
          case 23:
            break;

          case 10:
            /* Outputs for IfAction SubSystem: '<S672>/P1B04' incorporates:
             *  ActionPort: '<S687>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S687>/Subsystem' incorporates:
             *  EnablePort: '<S754>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_n == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S687>/Merge1' incorporates:
                 *  Constant: '<S756>/Constant'
                 *  SignalConversion generated from: '<S754>/VeDNDB_e_FaultSts_DMCM_B_PstnSnsrLossTrk'
                 */
                DNDB_ac_B.Merge1_fy = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S687>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S687>/Subsystem1' incorporates:
             *  EnablePort: '<S755>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_n == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S687>/Merge1' incorporates:
                 *  Constant: '<S757>/Constant'
                 *  SignalConversion generated from: '<S755>/VeDNDB_e_FaultSts_DMCM_B_PstnSnsrLossTrk'
                 */
                DNDB_ac_B.Merge1_fy = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S687>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S672>/P1B04' */
            break;

          case 11:
            /* Outputs for IfAction SubSystem: '<S672>/P1D7C' incorporates:
             *  ActionPort: '<S691>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S691>/Subsystem' incorporates:
             *  EnablePort: '<S770>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_n == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S691>/Merge1' incorporates:
                 *  Constant: '<S772>/Constant'
                 *  SignalConversion generated from: '<S770>/VeDNDB_e_FaultSts_HybWkpCntrl3OpCktShttoGnd'
                 */
                DNDB_ac_B.Merge1_ha = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S691>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S691>/Subsystem1' incorporates:
             *  EnablePort: '<S771>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_n == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S691>/Merge1' incorporates:
                 *  Constant: '<S773>/Constant'
                 *  SignalConversion generated from: '<S771>/VeDNDB_e_FaultSts_HybWkpCntrl3OpCktShttoGnd'
                 */
                DNDB_ac_B.Merge1_ha = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S691>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S672>/P1D7C' */
            break;

          case 12:
            /* Outputs for IfAction SubSystem: '<S672>/P30A7' incorporates:
             *  ActionPort: '<S692>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S692>/Subsystem' incorporates:
             *  EnablePort: '<S774>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_n == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S692>/Merge1' incorporates:
                 *  Constant: '<S776>/Constant'
                 *  SignalConversion generated from: '<S774>/VeDNDB_e_FaultSts_HB_Sys_B_VoltHi'
                 */
                DNDB_ac_B.Merge1_c4 = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S692>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S692>/Subsystem1' incorporates:
             *  EnablePort: '<S775>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_n == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S692>/Merge1' incorporates:
                 *  Constant: '<S777>/Constant'
                 *  SignalConversion generated from: '<S775>/VeDNDB_e_FaultSts_HB_Sys_B_VoltHi'
                 */
                DNDB_ac_B.Merge1_c4 = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S692>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S672>/P30A7' */
            break;

          case 13:
            /* Outputs for IfAction SubSystem: '<S672>/P0A4A' incorporates:
             *  ActionPort: '<S676>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S676>/Subsystem' incorporates:
             *  EnablePort: '<S710>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_n == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S676>/Merge1' incorporates:
                 *  Constant: '<S712>/Constant'
                 *  SignalConversion generated from: '<S710>/VeDNDB_e_FaultSts_DrvMtrB_PstnSnsrOvrspd'
                 */
                DNDB_ac_B.Merge1_kf = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S676>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S676>/Subsystem1' incorporates:
             *  EnablePort: '<S711>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_n == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S676>/Merge1' incorporates:
                 *  Constant: '<S713>/Constant'
                 *  SignalConversion generated from: '<S711>/VeDNDB_e_FaultSts_DrvMtrB_PstnSnsrOvrspd'
                 */
                DNDB_ac_B.Merge1_kf = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S676>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S672>/P0A4A' */
            break;

          case 14:
            /* Outputs for IfAction SubSystem: '<S672>/P0A79' incorporates:
             *  ActionPort: '<S677>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S677>/Subsystem' incorporates:
             *  EnablePort: '<S714>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_n == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S677>/Merge1' incorporates:
                 *  Constant: '<S716>/Constant'
                 *  SignalConversion generated from: '<S714>/VeDNDB_e_FaultSts_DrvMtrB_InvtrPerf'
                 */
                DNDB_ac_B.Merge1_gy = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S677>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S677>/Subsystem1' incorporates:
             *  EnablePort: '<S715>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_n == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S677>/Merge1' incorporates:
                 *  Constant: '<S717>/Constant'
                 *  SignalConversion generated from: '<S715>/VeDNDB_e_FaultSts_DrvMtrB_InvtrPerf'
                 */
                DNDB_ac_B.Merge1_gy = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S677>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S672>/P0A79' */
            break;

          case 18:
            /* Outputs for IfAction SubSystem: '<S672>/P1C92' incorporates:
             *  ActionPort: '<S690>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S690>/Subsystem' incorporates:
             *  EnablePort: '<S766>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_n == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S690>/Merge1' incorporates:
                 *  Constant: '<S768>/Constant'
                 *  SignalConversion generated from: '<S766>/VeDNDB_e_FaultSts_EPSSupply2CktHi'
                 */
                DNDB_ac_B.Merge1_ggg = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S690>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S690>/Subsystem1' incorporates:
             *  EnablePort: '<S767>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_n == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S690>/Merge1' incorporates:
                 *  Constant: '<S769>/Constant'
                 *  SignalConversion generated from: '<S767>/VeDNDB_e_FaultSts_EPSSupply2CktHi'
                 */
                DNDB_ac_B.Merge1_ggg = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S690>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S672>/P1C92' */
            break;

          case 19:
            /* Outputs for IfAction SubSystem: '<S672>/P0C14' incorporates:
             *  ActionPort: '<S679>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S679>/Subsystem' incorporates:
             *  EnablePort: '<S722>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_n == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S679>/Merge1' incorporates:
                 *  Constant: '<S724>/Constant'
                 *  SignalConversion generated from: '<S722>/VeDNDB_e_FaultSts_DM_B_I_PU_Ovrtemp'
                 */
                DNDB_ac_B.Merge1_mx = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S679>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S679>/Subsystem1' incorporates:
             *  EnablePort: '<S723>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_n == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S679>/Merge1' incorporates:
                 *  Constant: '<S725>/Constant'
                 *  SignalConversion generated from: '<S723>/VeDNDB_e_FaultSts_DM_B_I_PU_Ovrtemp'
                 */
                DNDB_ac_B.Merge1_mx = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S679>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S672>/P0C14' */
            break;

          case 20:
            /* Outputs for IfAction SubSystem: '<S672>/P0C18' incorporates:
             *  ActionPort: '<S680>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S680>/Subsystem' incorporates:
             *  EnablePort: '<S726>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_n == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S680>/Merge1' incorporates:
                 *  Constant: '<S728>/Constant'
                 *  SignalConversion generated from: '<S726>/VeDNDB_e_FaultSts_DM_B_PstnNotLrnd'
                 */
                DNDB_ac_B.Merge1_p3 = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S680>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S680>/Subsystem1' incorporates:
             *  EnablePort: '<S727>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_n == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S680>/Merge1' incorporates:
                 *  Constant: '<S729>/Constant'
                 *  SignalConversion generated from: '<S727>/VeDNDB_e_FaultSts_DM_B_PstnNotLrnd'
                 */
                DNDB_ac_B.Merge1_p3 = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S680>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S672>/P0C18' */
            break;

          case 24:
            /* Outputs for IfAction SubSystem: '<S672>/U1536' incorporates:
             *  ActionPort: '<S693>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S693>/Subsystem' incorporates:
             *  EnablePort: '<S778>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_n == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S693>/Merge1' incorporates:
                 *  Constant: '<S780>/Constant'
                 *  SignalConversion generated from: '<S778>/VeDNDB_e_FaultSts_DMCM_B_InvData_DMCM_A'
                 */
                DNDB_ac_B.Merge1_iea = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S693>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S693>/Subsystem1' incorporates:
             *  EnablePort: '<S779>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_n == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S693>/Merge1' incorporates:
                 *  Constant: '<S781>/Constant'
                 *  SignalConversion generated from: '<S779>/VeDNDB_e_FaultSts_DMCM_B_InvData_DMCM_A'
                 */
                DNDB_ac_B.Merge1_iea = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S693>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S672>/U1536' */
            break;

          case 25:
            /* Outputs for IfAction SubSystem: '<S672>/U1537' incorporates:
             *  ActionPort: '<S694>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S694>/Subsystem' incorporates:
             *  EnablePort: '<S782>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_n == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S694>/Merge1' incorporates:
                 *  Constant: '<S784>/Constant'
                 *  SignalConversion generated from: '<S782>/VeDNDB_e_FaultSts_DMCM_B_InvDataGenrA_CM'
                 */
                DNDB_ac_B.Merge1_k = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S694>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S694>/Subsystem1' incorporates:
             *  EnablePort: '<S783>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_n == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S694>/Merge1' incorporates:
                 *  Constant: '<S785>/Constant'
                 *  SignalConversion generated from: '<S783>/VeDNDB_e_FaultSts_DMCM_B_InvDataGenrA_CM'
                 */
                DNDB_ac_B.Merge1_k = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S694>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S672>/U1537' */
            break;

          case 26:
            /* Outputs for IfAction SubSystem: '<S672>/U1538' incorporates:
             *  ActionPort: '<S695>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S695>/Subsystem' incorporates:
             *  EnablePort: '<S786>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_n == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S695>/Merge1' incorporates:
                 *  Constant: '<S788>/Constant'
                 *  SignalConversion generated from: '<S786>/VeDNDB_e_FaultSts_DMCM_B_InvDataIDCM'
                 */
                DNDB_ac_B.Merge1_la = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S695>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S695>/Subsystem1' incorporates:
             *  EnablePort: '<S787>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_n == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S695>/Merge1' incorporates:
                 *  Constant: '<S789>/Constant'
                 *  SignalConversion generated from: '<S787>/VeDNDB_e_FaultSts_DMCM_B_InvDataIDCM'
                 */
                DNDB_ac_B.Merge1_la = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S695>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S672>/U1538' */
            break;

          case 27:
            /* Outputs for IfAction SubSystem: '<S672>/U1539' incorporates:
             *  ActionPort: '<S696>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S696>/Subsystem' incorporates:
             *  EnablePort: '<S790>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_n == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S696>/Merge1' incorporates:
                 *  Constant: '<S792>/Constant'
                 *  SignalConversion generated from: '<S790>/VeDNDB_e_FaultSts_DMCM_B_InvDataEVCU'
                 */
                DNDB_ac_B.Merge1_hhg = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S696>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S696>/Subsystem1' incorporates:
             *  EnablePort: '<S791>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_n == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S696>/Merge1' incorporates:
                 *  Constant: '<S793>/Constant'
                 *  SignalConversion generated from: '<S791>/VeDNDB_e_FaultSts_DMCM_B_InvDataEVCU'
                 */
                DNDB_ac_B.Merge1_hhg = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S696>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S672>/U1539' */
            break;

          case 28:
            /* Outputs for IfAction SubSystem: '<S672>/U153A' incorporates:
             *  ActionPort: '<S697>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S697>/Subsystem' incorporates:
             *  EnablePort: '<S794>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_n == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S697>/Merge1' incorporates:
                 *  Constant: '<S796>/Constant'
                 *  SignalConversion generated from: '<S794>/VeDNDB_e_FaultSts_DMCM_B_InvDataBPCM'
                 */
                DNDB_ac_B.Merge1_ni = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S697>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S697>/Subsystem1' incorporates:
             *  EnablePort: '<S795>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_n == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S697>/Merge1' incorporates:
                 *  Constant: '<S797>/Constant'
                 *  SignalConversion generated from: '<S795>/VeDNDB_e_FaultSts_DMCM_B_InvDataBPCM'
                 */
                DNDB_ac_B.Merge1_ni = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S697>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S672>/U153A' */
            break;

          case 29:
            /* Outputs for IfAction SubSystem: '<S672>/P07B5' incorporates:
             *  ActionPort: '<S673>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S673>/Subsystem' incorporates:
             *  EnablePort: '<S698>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_n == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S673>/Merge1' incorporates:
                 *  Constant: '<S700>/Constant'
                 *  SignalConversion generated from: '<S698>/VeDNDB_e_FaultSts_ParkPawlPS1CP'
                 */
                DNDB_ac_B.Merge1_pd = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S673>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S673>/Subsystem1' incorporates:
             *  EnablePort: '<S699>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_n == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S673>/Merge1' incorporates:
                 *  Constant: '<S701>/Constant'
                 *  SignalConversion generated from: '<S699>/VeDNDB_e_FaultSts_ParkPawlPS1CP'
                 */
                DNDB_ac_B.Merge1_pd = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S673>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S672>/P07B5' */
            break;

          case 30:
            /* Outputs for IfAction SubSystem: '<S672>/P1625' incorporates:
             *  ActionPort: '<S682>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S682>/Subsystem' incorporates:
             *  EnablePort: '<S734>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_n == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S682>/Merge1' incorporates:
                 *  Constant: '<S736>/Constant'
                 *  SignalConversion generated from: '<S734>/VeDNDB_e_FaultSts_PPawlSysFail'
                 */
                DNDB_ac_B.Merge1_egu = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S682>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S682>/Subsystem1' incorporates:
             *  EnablePort: '<S735>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_n == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S682>/Merge1' incorporates:
                 *  Constant: '<S737>/Constant'
                 *  SignalConversion generated from: '<S735>/VeDNDB_e_FaultSts_PPawlSysFail'
                 */
                DNDB_ac_B.Merge1_egu = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S682>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S672>/P1625' */
            break;

          case 31:
            /* Outputs for IfAction SubSystem: '<S672>/P1626' incorporates:
             *  ActionPort: '<S683>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S683>/Subsystem' incorporates:
             *  EnablePort: '<S738>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_n == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S683>/Merge1' incorporates:
                 *  Constant: '<S740>/Constant'
                 *  SignalConversion generated from: '<S738>/VeDNDB_e_FaultSts_PPawlMtrStk'
                 */
                DNDB_ac_B.Merge1_pk = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S683>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S683>/Subsystem1' incorporates:
             *  EnablePort: '<S739>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPB_n == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S683>/Merge1' incorporates:
                 *  Constant: '<S741>/Constant'
                 *  SignalConversion generated from: '<S739>/VeDNDB_e_FaultSts_PPawlMtrStk'
                 */
                DNDB_ac_B.Merge1_pk = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S683>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S672>/P1626' */
            break;

          default:
            /* no actions */
            break;
        }

        /* End of SwitchCase: '<S672>/SwitchCase' */
    }

    /* End of Outputs for SubSystem: '<S512>/BlocksIndex2' */

    /* Outputs for Enabled SubSystem: '<S512>/BlocksIndex3' incorporates:
     *  EnablePort: '<S515>/Enable'
     */
    if (((sint32)DNDB_ac_DW.UnitDelay2_DSTATE) != 0)
    {
        /* Outputs for IfAction SubSystem: '<S798>/P177A' incorporates:
         *  ActionPort: '<S799>/Action Port'
         */
        /* Outputs for Enabled SubSystem: '<S799>/Subsystem' incorporates:
         *  EnablePort: '<S802>/Enable'
         */
        /* SwitchCase: '<S798>/SwitchCase' incorporates:
         *  Constant: '<Root>/Constant4'
         *  Constant: '<S799>/Constant Value'
         *  Constant: '<S799>/Constant Value1'
         *  RelationalOperator: '<S799>/E1'
         *  RelationalOperator: '<S799>/E2'
         */
        if (0 == ((sint32)CeDNDB_e_DiagPassd))
        {
            /* Merge: '<S799>/Merge1' incorporates:
             *  Constant: '<S804>/Constant'
             *  SignalConversion generated from: '<S802>/VeDNDB_e_FaultSts_CurrSnsrCktLo'
             */
            DNDB_ac_B.Merge1_ip = CeDFIB_e_Pass;
        }

        /* End of Outputs for SubSystem: '<S799>/Subsystem' */

        /* Outputs for Enabled SubSystem: '<S799>/Subsystem1' incorporates:
         *  EnablePort: '<S803>/Enable'
         */
        if (0 == ((sint32)CeDNDB_e_DiagFaild))
        {
            /* Merge: '<S799>/Merge1' incorporates:
             *  Constant: '<S805>/Constant'
             *  SignalConversion generated from: '<S803>/VeDNDB_e_FaultSts_CurrSnsrCktLo'
             */
            DNDB_ac_B.Merge1_ip = CeDFIB_e_Fail;
        }

        /* End of SwitchCase: '<S798>/SwitchCase' */
        /* End of Outputs for SubSystem: '<S799>/Subsystem1' */
        /* End of Outputs for SubSystem: '<S798>/P177A' */
    }

    /* End of Outputs for SubSystem: '<S512>/BlocksIndex3' */

    /* Update for UnitDelay: '<S512>/Unit Delay' incorporates:
     *  Constant: '<Root>/Constant5'
     *  RelationalOperator: '<S512>/Relational Operator'
     *  RelationalOperator: '<S512>/Relational Operator1'
     *  RelationalOperator: '<S512>/Relational Operator2'
     *  UnitDelay: '<S512>/Unit Delay1'
     *  UnitDelay: '<S512>/Unit Delay2'
     */
    DNDB_ac_DW.UnitDelay_DSTATE_m = rtb_TmpSignalConversionAtMCPB_D;

    /* Update for UnitDelay: '<S512>/Unit Delay1' */
    DNDB_ac_DW.UnitDelay1_DSTATE_d = rtb_TmpSignalConversionAtMCPB_m;

    /* Update for UnitDelay: '<S512>/Unit Delay2' incorporates:
     *  Constant: '<Root>/Constant5'
     */
    DNDB_ac_DW.UnitDelay2_DSTATE = 0U;

    /* End of Outputs for SubSystem: '<S5>/MCPB_PEGASUS_BlockIndexMngt' */

    /* Outport: '<Root>/VeDNDB_e_FaultSts_SnsrRefVolt2CktLo' incorporates:
     *  Merge: '<S517>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_SnsrRefVolt2CktLo_Value
        (DNDB_ac_B.Merge1_oqm);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_SnsrRefVolt2CktHi' incorporates:
     *  Merge: '<S518>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_SnsrRefVolt2CktHi_Value
        (DNDB_ac_B.Merge1_lfg);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_IntrnlTempSnsrB_Perf' incorporates:
     *  Merge: '<S519>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_IntrnlTempSnsrB_Perf_Value
        (DNDB_ac_B.Merge1_mhz);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_ParkPawlPS1CP' incorporates:
     *  Merge: '<S673>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_ParkPawlPS1CP_Value(DNDB_ac_B.Merge1_pd);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DrvMtrB_CM_Perf' incorporates:
     *  Merge: '<S520>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DrvMtrB_CM_Perf_Value(DNDB_ac_B.Merge1_mf);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DrvMtrB_TempSnsrPerf' incorporates:
     *  Merge: '<S521>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DrvMtrB_TempSnsrPerf_Value
        (DNDB_ac_B.Merge1_mg);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DrvMtrB_TempSnsrCktLo' incorporates:
     *  Merge: '<S522>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DrvMtrB_TempSnsrCktLo_Value
        (DNDB_ac_B.Merge1_fv);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DrvMtrB_TempSnsrCktHi' incorporates:
     *  Merge: '<S523>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DrvMtrB_TempSnsrCktHi_Value
        (DNDB_ac_B.Merge1_iz);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DrvMtrB_Ovrtemp' incorporates:
     *  Merge: '<S524>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DrvMtrB_Ovrtemp_Value(DNDB_ac_B.Merge1_fb);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DrvMtrB_PstnSnsrCkt' incorporates:
     *  Merge: '<S674>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DrvMtrB_PstnSnsrCkt_Value
        (DNDB_ac_B.Merge1_i2);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DrvMtrB_PstnSnsrCktInt' incorporates:
     *  Merge: '<S675>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DrvMtrB_PstnSnsrCktInt_Value
        (DNDB_ac_B.Merge1_gn);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DrvMtrB_PstnSnsrOvrspd' incorporates:
     *  Merge: '<S676>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DrvMtrB_PstnSnsrOvrspd_Value
        (DNDB_ac_B.Merge1_kf);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DrvMtrB_InvtrPerf' incorporates:
     *  Merge: '<S677>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DrvMtrB_InvtrPerf_Value
        (DNDB_ac_B.Merge1_gy);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_InvTempSnsrB_Perf' incorporates:
     *  Merge: '<S525>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_InvTempSnsrB_Perf_Value
        (DNDB_ac_B.Merge1_mw);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_InvTempSnsrB_CktLo' incorporates:
     *  Merge: '<S526>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_InvTempSnsrB_CktLo_Value
        (DNDB_ac_B.Merge1_fx);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_InvTempSnsrB_CktHi' incorporates:
     *  Merge: '<S527>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_InvTempSnsrB_CktHi_Value
        (DNDB_ac_B.Merge1_kc);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_MtrInvTempSnsr3Ckt' incorporates:
     *  Merge: '<S528>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_MtrInvTempSnsr3Ckt_Value
        (DNDB_ac_B.Merge1_i1);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_MtrInvTempSnsr4Ckt' incorporates:
     *  Merge: '<S529>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_MtrInvTempSnsr4Ckt_Value
        (DNDB_ac_B.Merge1_ga);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_InvTempSnsrD_CktLo' incorporates:
     *  Merge: '<S530>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_InvTempSnsrD_CktLo_Value
        (DNDB_ac_B.Merge1_oq);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_InvTempSnsrD_CktHi' incorporates:
     *  Merge: '<S531>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_InvTempSnsrD_CktHi_Value
        (DNDB_ac_B.Merge1_dp);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_InvTempSnsrF_CktLo' incorporates:
     *  Merge: '<S532>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_InvTempSnsrF_CktLo_Value
        (DNDB_ac_B.Merge1_mk);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_InvTempSnsrF_CktHi' incorporates:
     *  Merge: '<S533>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_InvTempSnsrF_CktHi_Value
        (DNDB_ac_B.Merge1_lb);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_B_PU_CurrSnsrPerf' incorporates:
     *  Merge: '<S534>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_B_PU_CurrSnsrPerf_Value
        (DNDB_ac_B.Merge1_pv);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_B_PU_CurrSnsrCktLo' incorporates:
     *  Merge: '<S535>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_B_PU_CurrSnsrCktLo_Value
        (DNDB_ac_B.Merge1_ep);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_B_PU_CurrSnsrCktHi' incorporates:
     *  Merge: '<S536>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_B_PU_CurrSnsrCktHi_Value
        (DNDB_ac_B.Merge1_ks);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_B_PV_CurrSnsrPerf' incorporates:
     *  Merge: '<S537>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_B_PV_CurrSnsrPerf_Value
        (DNDB_ac_B.Merge1_l0);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_B_PV_CurrSnsrCktLo' incorporates:
     *  Merge: '<S538>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_B_PV_CurrSnsrCktLo_Value
        (DNDB_ac_B.Merge1_ld);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_B_PV_CurrSnsrCktHi' incorporates:
     *  Merge: '<S539>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_B_PV_CurrSnsrCktHi_Value
        (DNDB_ac_B.Merge1_p5);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_B_PW_CurrSnsrPerf' incorporates:
     *  Merge: '<S540>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_B_PW_CurrSnsrPerf_Value
        (DNDB_ac_B.Merge1_j5);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_B_PW_CurrSnsrCktLo' incorporates:
     *  Merge: '<S541>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_B_PW_CurrSnsrCktLo_Value
        (DNDB_ac_B.Merge1_pu);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_B_PW_CurrSnsrCktHi' incorporates:
     *  Merge: '<S542>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_B_PW_CurrSnsrCktHi_Value
        (DNDB_ac_B.Merge1_mm);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_B_PUVW_Corr' incorporates:
     *  Merge: '<S543>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_B_PUVW_Corr_Value(DNDB_ac_B.Merge1_fl);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_B_CurrHi' incorporates:
     *  Merge: '<S544>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_B_CurrHi_Value(DNDB_ac_B.Merge1_oh);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_B_PUVW_Ckt' incorporates:
     *  Merge: '<S545>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_B_PUVW_Ckt_Value(DNDB_ac_B.Merge1_bw);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_B_I_PwrSplyCkt' incorporates:
     *  Merge: '<S678>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_B_I_PwrSplyCkt_Value
        (DNDB_ac_B.Merge1_k3);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_B_I_PU_Ovrtemp' incorporates:
     *  Merge: '<S679>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_B_I_PU_Ovrtemp_Value
        (DNDB_ac_B.Merge1_mx);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_B_PstnNotLrnd' incorporates:
     *  Merge: '<S680>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_B_PstnNotLrnd_Value(DNDB_ac_B.Merge1_p3);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_B_TorqDlvdPerf' incorporates:
     *  Merge: '<S681>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_B_TorqDlvdPerf_Value
        (DNDB_ac_B.Merge1_no);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_PPawlSysFail' incorporates:
     *  Merge: '<S682>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_PPawlSysFail_Value(DNDB_ac_B.Merge1_egu);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_PPawlMtrStk' incorporates:
     *  Merge: '<S683>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_PPawlMtrStk_Value(DNDB_ac_B.Merge1_pk);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_CurrSnsrCktLo' incorporates:
     *  Merge: '<S799>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_CurrSnsrCktLo_Value(DNDB_ac_B.Merge1_ip);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_CurrSnsrCktHi' incorporates:
     *  Merge: '<S800>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_CurrSnsrCktHi_Value(DNDB_ac_B.Merge1_hi);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_PPawlMtrCurrPerf' incorporates:
     *  Merge: '<S801>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_PPawlMtrCurrPerf_Value
        (DNDB_ac_B.Merge1_eyk);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DMCM_B_HB_VoltSnsCktHi' incorporates:
     *  Merge: '<S684>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DMCM_B_HB_VoltSnsCktHi_Value
        (DNDB_ac_B.Merge1_hp);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DMCM_B_HB_SysVolt' incorporates:
     *  Merge: '<S685>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DMCM_B_HB_SysVolt_Value
        (DNDB_ac_B.Merge1_gl);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DMCM_B_HB_SysVoltHi' incorporates:
     *  Merge: '<S686>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DMCM_B_HB_SysVoltHi_Value
        (DNDB_ac_B.Merge1_de);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DMCM_B_PstnSnsrLossTrk' incorporates:
     *  Merge: '<S687>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DMCM_B_PstnSnsrLossTrk_Value
        (DNDB_ac_B.Merge1_fy);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_MCPB_P1B08' incorporates:
     *  Merge: '<S688>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_MCPB_P1B08_Value(DNDB_ac_B.Merge1_mym);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_MCPB_P1B10' incorporates:
     *  Merge: '<S689>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_MCPB_P1B10_Value(DNDB_ac_B.Merge1_jv);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_EPSSupply2CktHi' incorporates:
     *  Merge: '<S690>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_EPSSupply2CktHi_Value(DNDB_ac_B.Merge1_ggg);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_HybWkpCntrl3OpCktShttoGnd' incorporates:
     *  Merge: '<S691>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_HybWkpCntrl3OpCktShttoGnd_Value
        (DNDB_ac_B.Merge1_ha);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_VSS_B_Perf' incorporates:
     *  Merge: '<S546>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_VSS_B_Perf_Value(DNDB_ac_B.Merge1_cr);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DrMtr_B_IntCMTorqCalPerf' incorporates:
     *  Merge: '<S547>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DrMtr_B_IntCMTorqCalPerf_Value
        (DNDB_ac_B.Merge1_aq);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_HB_Sys_B_VoltHi' incorporates:
     *  Merge: '<S692>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_HB_Sys_B_VoltHi_Value(DNDB_ac_B.Merge1_c4);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DMCM_B_InvData_DMCM_A' incorporates:
     *  Merge: '<S693>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DMCM_B_InvData_DMCM_A_Value
        (DNDB_ac_B.Merge1_iea);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DMCM_B_InvDataGenrA_CM' incorporates:
     *  Merge: '<S694>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DMCM_B_InvDataGenrA_CM_Value
        (DNDB_ac_B.Merge1_k);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DMCM_B_InvDataIDCM' incorporates:
     *  Merge: '<S695>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DMCM_B_InvDataIDCM_Value
        (DNDB_ac_B.Merge1_la);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DMCM_B_InvDataEVCU' incorporates:
     *  Merge: '<S696>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DMCM_B_InvDataEVCU_Value
        (DNDB_ac_B.Merge1_hhg);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DMCM_B_InvDataBPCM' incorporates:
     *  Merge: '<S697>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DMCM_B_InvDataBPCM_Value
        (DNDB_ac_B.Merge1_ni);

    /* End of Outputs for SubSystem: '<S1>/MCPB_PEGASUS_BlockIndexMngt' */
#endif

    /* End of SignalConversion generated from: '<S1>/MCPB_DTC_Idx1' */

    /* SignalConversion generated from: '<S1>/MCPA_DTC_Idx1' incorporates:
     *  RelationalOperator: '<S227>/Relational Operator'
     *  RelationalOperator: '<S227>/Relational Operator1'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0501_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0642_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0643_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0667_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0A1B_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0A2B_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0A2C_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0A2D_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0A2F_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0A3F_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0A43_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0A44_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0A78_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0AED_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0AEE_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0AEF_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0AF0_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0AF2_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0AFB_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0BD3_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0BD4_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0BDD_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0BDE_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0BE6_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0BE7_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0BE8_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0BEA_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0BEB_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0BEC_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0BEE_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0BEF_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0BF0_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0BFD_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0C01_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0C05_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0C0B_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0C11_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0C17_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0C19_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P1AE9_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P1AEC_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P1AEE_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P1B03_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P1B07_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P1B0F_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P1C8F_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P1CDC_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P2533_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P2534_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P2535_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P3046_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_U1531_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_U1532_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_U1533_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_U1534_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_U1535_PassFail'
     *  SignalConversion generated from: '<S1>/MCPA_DTC_Idx2'
     *  SignalConversion generated from: '<S1>/MCPA_DTC_Stat1'
     *  SignalConversion generated from: '<S1>/MCPA_DTC_Stat2'
     *  UnitDelay: '<S227>/Unit Delay'
     *  UnitDelay: '<S227>/Unit Delay1'
     */
#if Rte_SysCon_Variant_DNDB_MCPA_PEGASUS

    /* Outputs for Atomic SubSystem: '<S1>/MCPA_PEGASUS_BlockIndexMngt' */
    /* SignalConversion generated from: '<S1>/MCPA_DTC_Idx1' incorporates:
     *  Inport: '<Root>/VeCRDB_y_MCPA_DTC_Idx1'
     */
    (void)Rte_Read_VeCRDB_y_MCPA_DTC_Idx1_Value(&rtb_TmpSignalConversionAtMCPA_D);

    /* SignalConversion generated from: '<S1>/MCPA_DTC_Stat1' incorporates:
     *  Inport: '<Root>/VeCRDB_y_MCPA_DTC_Stat1'
     */
    (void)Rte_Read_VeCRDB_y_MCPA_DTC_Stat1_Value
        (&rtb_TmpSignalConversionAtMCPA_c);

    /* SignalConversion generated from: '<S1>/MCPA_DTC_Idx2' incorporates:
     *  Inport: '<Root>/VeCRDB_y_MCPA_DTC_Idx2'
     */
    (void)Rte_Read_VeCRDB_y_MCPA_DTC_Idx2_Value(&rtb_TmpSignalConversionAtMCP_ey);

    /* SignalConversion generated from: '<S1>/MCPA_DTC_Stat2' incorporates:
     *  Inport: '<Root>/VeCRDB_y_MCPA_DTC_Stat2'
     */
    (void)Rte_Read_VeCRDB_y_MCPA_DTC_Stat2_Value
        (&rtb_TmpSignalConversionAtMCPA_b);

    /* Outputs for Atomic SubSystem: '<S4>/MCPA_PEGASUS_BlockIndexMngt' */
    /* Outputs for Enabled SubSystem: '<S227>/BlocksIndex1' incorporates:
     *  EnablePort: '<S228>/Enable'
     */
    if (DNDB_ac_DW.UnitDelay_DSTATE_j != rtb_TmpSignalConversionAtMCPA_D)
    {
        /* SwitchCase: '<S230>/SwitchCase' incorporates:
         *  Constant: '<S231>/Constant Value'
         *  Constant: '<S231>/Constant Value1'
         *  Constant: '<S232>/Constant Value'
         *  Constant: '<S232>/Constant Value1'
         *  Constant: '<S233>/Constant Value'
         *  Constant: '<S233>/Constant Value1'
         *  Constant: '<S234>/Constant Value'
         *  Constant: '<S234>/Constant Value1'
         *  Constant: '<S235>/Constant Value'
         *  Constant: '<S235>/Constant Value1'
         *  Constant: '<S236>/Constant Value'
         *  Constant: '<S236>/Constant Value1'
         *  Constant: '<S237>/Constant Value'
         *  Constant: '<S237>/Constant Value1'
         *  Constant: '<S238>/Constant Value'
         *  Constant: '<S238>/Constant Value1'
         *  Constant: '<S239>/Constant Value'
         *  Constant: '<S239>/Constant Value1'
         *  Constant: '<S240>/Constant Value'
         *  Constant: '<S240>/Constant Value1'
         *  Constant: '<S241>/Constant Value'
         *  Constant: '<S241>/Constant Value1'
         *  Constant: '<S242>/Constant Value'
         *  Constant: '<S242>/Constant Value1'
         *  Constant: '<S243>/Constant Value'
         *  Constant: '<S243>/Constant Value1'
         *  Constant: '<S244>/Constant Value'
         *  Constant: '<S244>/Constant Value1'
         *  Constant: '<S245>/Constant Value'
         *  Constant: '<S245>/Constant Value1'
         *  Constant: '<S246>/Constant Value'
         *  Constant: '<S246>/Constant Value1'
         *  Constant: '<S247>/Constant Value'
         *  Constant: '<S247>/Constant Value1'
         *  Constant: '<S248>/Constant Value'
         *  Constant: '<S248>/Constant Value1'
         *  Constant: '<S249>/Constant Value'
         *  Constant: '<S249>/Constant Value1'
         *  Constant: '<S250>/Constant Value'
         *  Constant: '<S250>/Constant Value1'
         *  Constant: '<S251>/Constant Value'
         *  Constant: '<S251>/Constant Value1'
         *  Constant: '<S252>/Constant Value'
         *  Constant: '<S252>/Constant Value1'
         *  Constant: '<S253>/Constant Value'
         *  Constant: '<S253>/Constant Value1'
         *  Constant: '<S254>/Constant Value'
         *  Constant: '<S254>/Constant Value1'
         *  Constant: '<S255>/Constant Value'
         *  Constant: '<S255>/Constant Value1'
         *  Constant: '<S256>/Constant Value'
         *  Constant: '<S256>/Constant Value1'
         *  Constant: '<S257>/Constant Value'
         *  Constant: '<S257>/Constant Value1'
         *  Constant: '<S258>/Constant Value'
         *  Constant: '<S258>/Constant Value1'
         *  Constant: '<S259>/Constant Value'
         *  Constant: '<S259>/Constant Value1'
         *  Constant: '<S260>/Constant Value'
         *  Constant: '<S260>/Constant Value1'
         *  Constant: '<S261>/Constant Value'
         *  Constant: '<S261>/Constant Value1'
         *  RelationalOperator: '<S231>/E1'
         *  RelationalOperator: '<S231>/E2'
         *  RelationalOperator: '<S232>/E1'
         *  RelationalOperator: '<S232>/E2'
         *  RelationalOperator: '<S233>/E1'
         *  RelationalOperator: '<S233>/E2'
         *  RelationalOperator: '<S234>/E1'
         *  RelationalOperator: '<S234>/E2'
         *  RelationalOperator: '<S235>/E1'
         *  RelationalOperator: '<S235>/E2'
         *  RelationalOperator: '<S236>/E1'
         *  RelationalOperator: '<S236>/E2'
         *  RelationalOperator: '<S237>/E1'
         *  RelationalOperator: '<S237>/E2'
         *  RelationalOperator: '<S238>/E1'
         *  RelationalOperator: '<S238>/E2'
         *  RelationalOperator: '<S239>/E1'
         *  RelationalOperator: '<S239>/E2'
         *  RelationalOperator: '<S240>/E1'
         *  RelationalOperator: '<S240>/E2'
         *  RelationalOperator: '<S241>/E1'
         *  RelationalOperator: '<S241>/E2'
         *  RelationalOperator: '<S242>/E1'
         *  RelationalOperator: '<S242>/E2'
         *  RelationalOperator: '<S243>/E1'
         *  RelationalOperator: '<S243>/E2'
         *  RelationalOperator: '<S244>/E1'
         *  RelationalOperator: '<S244>/E2'
         *  RelationalOperator: '<S245>/E1'
         *  RelationalOperator: '<S245>/E2'
         *  RelationalOperator: '<S246>/E1'
         *  RelationalOperator: '<S246>/E2'
         *  RelationalOperator: '<S247>/E1'
         *  RelationalOperator: '<S247>/E2'
         *  RelationalOperator: '<S248>/E1'
         *  RelationalOperator: '<S248>/E2'
         *  RelationalOperator: '<S249>/E1'
         *  RelationalOperator: '<S249>/E2'
         *  RelationalOperator: '<S250>/E1'
         *  RelationalOperator: '<S250>/E2'
         *  RelationalOperator: '<S251>/E1'
         *  RelationalOperator: '<S251>/E2'
         *  RelationalOperator: '<S252>/E1'
         *  RelationalOperator: '<S252>/E2'
         *  RelationalOperator: '<S253>/E1'
         *  RelationalOperator: '<S253>/E2'
         *  RelationalOperator: '<S254>/E1'
         *  RelationalOperator: '<S254>/E2'
         *  RelationalOperator: '<S255>/E1'
         *  RelationalOperator: '<S255>/E2'
         *  RelationalOperator: '<S256>/E1'
         *  RelationalOperator: '<S256>/E2'
         *  RelationalOperator: '<S257>/E1'
         *  RelationalOperator: '<S257>/E2'
         *  RelationalOperator: '<S258>/E1'
         *  RelationalOperator: '<S258>/E2'
         *  RelationalOperator: '<S259>/E1'
         *  RelationalOperator: '<S259>/E2'
         *  RelationalOperator: '<S260>/E1'
         *  RelationalOperator: '<S260>/E2'
         *  RelationalOperator: '<S261>/E1'
         *  RelationalOperator: '<S261>/E2'
         */
        switch (rtb_TmpSignalConversionAtMCPA_D)
        {
          case 0:
            /* Outputs for IfAction SubSystem: '<S230>/P0A1B' incorporates:
             *  ActionPort: '<S235>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S235>/Subsystem' incorporates:
             *  EnablePort: '<S278>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S235>/Merge1' incorporates:
                 *  Constant: '<S280>/Constant'
                 *  SignalConversion generated from: '<S278>/VeDNDB_e_FaultSts_DrvMtrA_CM_Perf'
                 */
                DNDB_ac_B.Merge1_oh4 = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S235>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S235>/Subsystem1' incorporates:
             *  EnablePort: '<S279>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S235>/Merge1' incorporates:
                 *  Constant: '<S281>/Constant'
                 *  SignalConversion generated from: '<S279>/VeDNDB_e_FaultSts_DrvMtrA_CM_Perf'
                 */
                DNDB_ac_B.Merge1_oh4 = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S235>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S230>/P0A1B' */
            break;

          case 1:
            break;

          case 2:
            /* Outputs for IfAction SubSystem: '<S230>/P3046' incorporates:
             *  ActionPort: '<S261>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S261>/Subsystem' incorporates:
             *  EnablePort: '<S382>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S261>/Merge1' incorporates:
                 *  Constant: '<S384>/Constant'
                 *  SignalConversion generated from: '<S382>/VeDNDB_e_FaultSts_DrMtr_A_IntCMTorqCalPerf'
                 */
                DNDB_ac_B.Merge1_pw = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S261>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S261>/Subsystem1' incorporates:
             *  EnablePort: '<S383>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S261>/Merge1' incorporates:
                 *  Constant: '<S385>/Constant'
                 *  SignalConversion generated from: '<S383>/VeDNDB_e_FaultSts_DrMtr_A_IntCMTorqCalPerf'
                 */
                DNDB_ac_B.Merge1_pw = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S261>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S230>/P3046' */
            break;

          case 3:
            /* Outputs for IfAction SubSystem: '<S230>/P0501' incorporates:
             *  ActionPort: '<S231>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S231>/Subsystem' incorporates:
             *  EnablePort: '<S262>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S231>/Merge1' incorporates:
                 *  Constant: '<S264>/Constant'
                 *  SignalConversion generated from: '<S262>/VeDNDB_e_FaultSts_VSS_A_Perf'
                 */
                DNDB_ac_B.Merge1_bm2 = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S231>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S231>/Subsystem1' incorporates:
             *  EnablePort: '<S263>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S231>/Merge1' incorporates:
                 *  Constant: '<S265>/Constant'
                 *  SignalConversion generated from: '<S263>/VeDNDB_e_FaultSts_VSS_A_Perf'
                 */
                DNDB_ac_B.Merge1_bm2 = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S231>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S230>/P0501' */
            break;

          case 4:
            /* Outputs for IfAction SubSystem: '<S230>/P0667' incorporates:
             *  ActionPort: '<S234>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S234>/Subsystem' incorporates:
             *  EnablePort: '<S274>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S234>/Merge1' incorporates:
                 *  Constant: '<S276>/Constant'
                 *  SignalConversion generated from: '<S274>/VeDNDB_e_FaultSts_InternalTempSnsrPerf'
                 */
                DNDB_ac_B.Merge1_bn = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S234>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S234>/Subsystem1' incorporates:
             *  EnablePort: '<S275>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S234>/Merge1' incorporates:
                 *  Constant: '<S277>/Constant'
                 *  SignalConversion generated from: '<S275>/VeDNDB_e_FaultSts_InternalTempSnsrPerf'
                 */
                DNDB_ac_B.Merge1_bn = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S234>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S230>/P0667' */
            break;

          case 5:
            /* Outputs for IfAction SubSystem: '<S230>/P0642' incorporates:
             *  ActionPort: '<S232>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S232>/Subsystem' incorporates:
             *  EnablePort: '<S266>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S232>/Merge1' incorporates:
                 *  Constant: '<S268>/Constant'
                 *  SignalConversion generated from: '<S266>/VeDNDB_e_FaultSts_SnsrRefVolt1CktLo'
                 */
                DNDB_ac_B.Merge1_kh = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S232>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S232>/Subsystem1' incorporates:
             *  EnablePort: '<S267>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S232>/Merge1' incorporates:
                 *  Constant: '<S269>/Constant'
                 *  SignalConversion generated from: '<S267>/VeDNDB_e_FaultSts_SnsrRefVolt1CktLo'
                 */
                DNDB_ac_B.Merge1_kh = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S232>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S230>/P0642' */
            break;

          case 6:
            /* Outputs for IfAction SubSystem: '<S230>/P0643' incorporates:
             *  ActionPort: '<S233>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S233>/Subsystem' incorporates:
             *  EnablePort: '<S270>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S233>/Merge1' incorporates:
                 *  Constant: '<S272>/Constant'
                 *  SignalConversion generated from: '<S270>/VeDNDB_e_FaultSts_SnsrRefVolt1CktHi'
                 */
                DNDB_ac_B.Merge1_oi = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S233>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S233>/Subsystem1' incorporates:
             *  EnablePort: '<S271>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S233>/Merge1' incorporates:
                 *  Constant: '<S273>/Constant'
                 *  SignalConversion generated from: '<S271>/VeDNDB_e_FaultSts_SnsrRefVolt1CktHi'
                 */
                DNDB_ac_B.Merge1_oi = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S233>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S230>/P0643' */
            break;

          case 7:
            /* Outputs for IfAction SubSystem: '<S230>/P0A2B' incorporates:
             *  ActionPort: '<S236>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S236>/Subsystem' incorporates:
             *  EnablePort: '<S282>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S236>/Merge1' incorporates:
                 *  Constant: '<S284>/Constant'
                 *  SignalConversion generated from: '<S282>/VeDNDB_e_FaultSts_DrvMtrA_TempSnsrPerf'
                 */
                DNDB_ac_B.Merge1_j2 = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S236>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S236>/Subsystem1' incorporates:
             *  EnablePort: '<S283>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S236>/Merge1' incorporates:
                 *  Constant: '<S285>/Constant'
                 *  SignalConversion generated from: '<S283>/VeDNDB_e_FaultSts_DrvMtrA_TempSnsrPerf'
                 */
                DNDB_ac_B.Merge1_j2 = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S236>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S230>/P0A2B' */
            break;

          case 8:
            /* Outputs for IfAction SubSystem: '<S230>/P0A2C' incorporates:
             *  ActionPort: '<S237>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S237>/Subsystem' incorporates:
             *  EnablePort: '<S286>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S237>/Merge1' incorporates:
                 *  Constant: '<S288>/Constant'
                 *  SignalConversion generated from: '<S286>/VeDNDB_e_FaultSts_DrvMtrA_TempSnsrCktLo'
                 */
                DNDB_ac_B.Merge1_jy = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S237>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S237>/Subsystem1' incorporates:
             *  EnablePort: '<S287>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S237>/Merge1' incorporates:
                 *  Constant: '<S289>/Constant'
                 *  SignalConversion generated from: '<S287>/VeDNDB_e_FaultSts_DrvMtrA_TempSnsrCktLo'
                 */
                DNDB_ac_B.Merge1_jy = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S237>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S230>/P0A2C' */
            break;

          case 9:
            /* Outputs for IfAction SubSystem: '<S230>/P0A2D' incorporates:
             *  ActionPort: '<S238>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S238>/Subsystem' incorporates:
             *  EnablePort: '<S290>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S238>/Merge1' incorporates:
                 *  Constant: '<S292>/Constant'
                 *  SignalConversion generated from: '<S290>/VeDNDB_e_FaultSts_DrvMtrA_TempSnsrCktHi'
                 */
                DNDB_ac_B.Merge1_dc = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S238>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S238>/Subsystem1' incorporates:
             *  EnablePort: '<S291>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S238>/Merge1' incorporates:
                 *  Constant: '<S293>/Constant'
                 *  SignalConversion generated from: '<S291>/VeDNDB_e_FaultSts_DrvMtrA_TempSnsrCktHi'
                 */
                DNDB_ac_B.Merge1_dc = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S238>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S230>/P0A2D' */
            break;

          case 10:
            /* Outputs for IfAction SubSystem: '<S230>/P0A2F' incorporates:
             *  ActionPort: '<S239>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S239>/Subsystem' incorporates:
             *  EnablePort: '<S294>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S239>/Merge1' incorporates:
                 *  Constant: '<S296>/Constant'
                 *  SignalConversion generated from: '<S294>/VeDNDB_e_FaultSts_DrvMtrA_Ovrtemp'
                 */
                DNDB_ac_B.Merge1_ldw = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S239>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S239>/Subsystem1' incorporates:
             *  EnablePort: '<S295>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S239>/Merge1' incorporates:
                 *  Constant: '<S297>/Constant'
                 *  SignalConversion generated from: '<S295>/VeDNDB_e_FaultSts_DrvMtrA_Ovrtemp'
                 */
                DNDB_ac_B.Merge1_ldw = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S239>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S230>/P0A2F' */
            break;

          case 11:
            /* Outputs for IfAction SubSystem: '<S230>/P0BD4' incorporates:
             *  ActionPort: '<S246>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S246>/Subsystem' incorporates:
             *  EnablePort: '<S322>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S246>/Merge1' incorporates:
                 *  Constant: '<S324>/Constant'
                 *  SignalConversion generated from: '<S322>/VeDNDB_e_FaultSts_DM_InvTempSnsrC_CktHi'
                 */
                DNDB_ac_B.Merge1_ls = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S246>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S246>/Subsystem1' incorporates:
             *  EnablePort: '<S323>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S246>/Merge1' incorporates:
                 *  Constant: '<S325>/Constant'
                 *  SignalConversion generated from: '<S323>/VeDNDB_e_FaultSts_DM_InvTempSnsrC_CktHi'
                 */
                DNDB_ac_B.Merge1_ls = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S246>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S230>/P0BD4' */
            break;

          case 12:
            /* Outputs for IfAction SubSystem: '<S230>/P0BDD' incorporates:
             *  ActionPort: '<S247>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S247>/Subsystem' incorporates:
             *  EnablePort: '<S326>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S247>/Merge1' incorporates:
                 *  Constant: '<S328>/Constant'
                 *  SignalConversion generated from: '<S326>/VeDNDB_e_FaultSts_DM_InvTempSnsrE_CktLo'
                 */
                DNDB_ac_B.Merge1_ka = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S247>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S247>/Subsystem1' incorporates:
             *  EnablePort: '<S327>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S247>/Merge1' incorporates:
                 *  Constant: '<S329>/Constant'
                 *  SignalConversion generated from: '<S327>/VeDNDB_e_FaultSts_DM_InvTempSnsrE_CktLo'
                 */
                DNDB_ac_B.Merge1_ka = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S247>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S230>/P0BDD' */
            break;

          case 13:
            /* Outputs for IfAction SubSystem: '<S230>/P0BDE' incorporates:
             *  ActionPort: '<S248>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S248>/Subsystem' incorporates:
             *  EnablePort: '<S330>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S248>/Merge1' incorporates:
                 *  Constant: '<S332>/Constant'
                 *  SignalConversion generated from: '<S330>/VeDNDB_e_FaultSts_DM_InvTempSnsrE_CktHi'
                 */
                DNDB_ac_B.Merge1_aa = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S248>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S248>/Subsystem1' incorporates:
             *  EnablePort: '<S331>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S248>/Merge1' incorporates:
                 *  Constant: '<S333>/Constant'
                 *  SignalConversion generated from: '<S331>/VeDNDB_e_FaultSts_DM_InvTempSnsrE_CktHi'
                 */
                DNDB_ac_B.Merge1_aa = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S248>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S230>/P0BDE' */
            break;

          case 14:
            /* Outputs for IfAction SubSystem: '<S230>/P0AF0' incorporates:
             *  ActionPort: '<S243>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S243>/Subsystem' incorporates:
             *  EnablePort: '<S310>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S243>/Merge1' incorporates:
                 *  Constant: '<S312>/Constant'
                 *  SignalConversion generated from: '<S310>/VeDNDB_e_FaultSts_DM_InvTempSnsrA_CktHi'
                 */
                DNDB_ac_B.Merge1_av = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S243>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S243>/Subsystem1' incorporates:
             *  EnablePort: '<S311>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S243>/Merge1' incorporates:
                 *  Constant: '<S313>/Constant'
                 *  SignalConversion generated from: '<S311>/VeDNDB_e_FaultSts_DM_InvTempSnsrA_CktHi'
                 */
                DNDB_ac_B.Merge1_av = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S243>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S230>/P0AF0' */
            break;

          case 15:
            /* Outputs for IfAction SubSystem: '<S230>/P0AEF' incorporates:
             *  ActionPort: '<S242>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S242>/Subsystem' incorporates:
             *  EnablePort: '<S306>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S242>/Merge1' incorporates:
                 *  Constant: '<S308>/Constant'
                 *  SignalConversion generated from: '<S306>/VeDNDB_e_FaultSts_DM_InvTempSnsrA_CktLo'
                 */
                DNDB_ac_B.Merge1_p2 = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S242>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S242>/Subsystem1' incorporates:
             *  EnablePort: '<S307>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S242>/Merge1' incorporates:
                 *  Constant: '<S309>/Constant'
                 *  SignalConversion generated from: '<S307>/VeDNDB_e_FaultSts_DM_InvTempSnsrA_CktLo'
                 */
                DNDB_ac_B.Merge1_p2 = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S242>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S230>/P0AEF' */
            break;

          case 16:
            /* Outputs for IfAction SubSystem: '<S230>/P0AEE' incorporates:
             *  ActionPort: '<S241>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S241>/Subsystem' incorporates:
             *  EnablePort: '<S302>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S241>/Merge1' incorporates:
                 *  Constant: '<S304>/Constant'
                 *  SignalConversion generated from: '<S302>/VeDNDB_e_FaultSts_DM_InvTempSnsrA_Perf'
                 */
                DNDB_ac_B.Merge1_cro = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S241>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S241>/Subsystem1' incorporates:
             *  EnablePort: '<S303>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S241>/Merge1' incorporates:
                 *  Constant: '<S305>/Constant'
                 *  SignalConversion generated from: '<S303>/VeDNDB_e_FaultSts_DM_InvTempSnsrA_Perf'
                 */
                DNDB_ac_B.Merge1_cro = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S241>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S230>/P0AEE' */
            break;

          case 17:
            /* Outputs for IfAction SubSystem: '<S230>/P0BD3' incorporates:
             *  ActionPort: '<S245>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S245>/Subsystem' incorporates:
             *  EnablePort: '<S318>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S245>/Merge1' incorporates:
                 *  Constant: '<S320>/Constant'
                 *  SignalConversion generated from: '<S318>/VeDNDB_e_FaultSts_DM_InvTempSnsrC_CktLo'
                 */
                DNDB_ac_B.Merge1_pdh = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S245>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S245>/Subsystem1' incorporates:
             *  EnablePort: '<S319>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S245>/Merge1' incorporates:
                 *  Constant: '<S321>/Constant'
                 *  SignalConversion generated from: '<S319>/VeDNDB_e_FaultSts_DM_InvTempSnsrC_CktLo'
                 */
                DNDB_ac_B.Merge1_pdh = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S245>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S230>/P0BD3' */
            break;

          case 18:
            /* Outputs for IfAction SubSystem: '<S230>/P0AED' incorporates:
             *  ActionPort: '<S240>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S240>/Subsystem' incorporates:
             *  EnablePort: '<S298>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S240>/Merge1' incorporates:
                 *  Constant: '<S300>/Constant'
                 *  SignalConversion generated from: '<S298>/VeDNDB_e_FaultSts_DM_MtrInvTempSnsr1Ckt'
                 */
                DNDB_ac_B.Merge1_ng = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S240>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S240>/Subsystem1' incorporates:
             *  EnablePort: '<S299>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S240>/Merge1' incorporates:
                 *  Constant: '<S301>/Constant'
                 *  SignalConversion generated from: '<S299>/VeDNDB_e_FaultSts_DM_MtrInvTempSnsr1Ckt'
                 */
                DNDB_ac_B.Merge1_ng = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S240>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S230>/P0AED' */
            break;

          case 19:
            /* Outputs for IfAction SubSystem: '<S230>/P0AF2' incorporates:
             *  ActionPort: '<S244>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S244>/Subsystem' incorporates:
             *  EnablePort: '<S314>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S244>/Merge1' incorporates:
                 *  Constant: '<S316>/Constant'
                 *  SignalConversion generated from: '<S314>/VeDNDB_e_FaultSts_DM_MtrInvTempSnsr2Ckt'
                 */
                DNDB_ac_B.Merge1_pl = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S244>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S244>/Subsystem1' incorporates:
             *  EnablePort: '<S315>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S244>/Merge1' incorporates:
                 *  Constant: '<S317>/Constant'
                 *  SignalConversion generated from: '<S315>/VeDNDB_e_FaultSts_DM_MtrInvTempSnsr2Ckt'
                 */
                DNDB_ac_B.Merge1_pl = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S244>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S230>/P0AF2' */
            break;

          case 20:
            /* Outputs for IfAction SubSystem: '<S230>/P0BE6' incorporates:
             *  ActionPort: '<S249>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S249>/Subsystem' incorporates:
             *  EnablePort: '<S334>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S249>/Merge1' incorporates:
                 *  Constant: '<S336>/Constant'
                 *  SignalConversion generated from: '<S334>/VeDNDB_e_FaultSts_DM_A_PU_CurrSnsrPerf'
                 */
                DNDB_ac_B.Merge1_nx = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S249>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S249>/Subsystem1' incorporates:
             *  EnablePort: '<S335>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S249>/Merge1' incorporates:
                 *  Constant: '<S337>/Constant'
                 *  SignalConversion generated from: '<S335>/VeDNDB_e_FaultSts_DM_A_PU_CurrSnsrPerf'
                 */
                DNDB_ac_B.Merge1_nx = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S249>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S230>/P0BE6' */
            break;

          case 21:
            /* Outputs for IfAction SubSystem: '<S230>/P0BE7' incorporates:
             *  ActionPort: '<S250>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S250>/Subsystem' incorporates:
             *  EnablePort: '<S338>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S250>/Merge1' incorporates:
                 *  Constant: '<S340>/Constant'
                 *  SignalConversion generated from: '<S338>/VeDNDB_e_FaultSts_DM_A_PU_CurrSnsrCktLo'
                 */
                DNDB_ac_B.Merge1_io = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S250>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S250>/Subsystem1' incorporates:
             *  EnablePort: '<S339>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S250>/Merge1' incorporates:
                 *  Constant: '<S341>/Constant'
                 *  SignalConversion generated from: '<S339>/VeDNDB_e_FaultSts_DM_A_PU_CurrSnsrCktLo'
                 */
                DNDB_ac_B.Merge1_io = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S250>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S230>/P0BE7' */
            break;

          case 22:
            /* Outputs for IfAction SubSystem: '<S230>/P0BE8' incorporates:
             *  ActionPort: '<S251>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S251>/Subsystem' incorporates:
             *  EnablePort: '<S342>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S251>/Merge1' incorporates:
                 *  Constant: '<S344>/Constant'
                 *  SignalConversion generated from: '<S342>/VeDNDB_e_FaultSts_DM_A_PU_CurrSnsrCktHi'
                 */
                DNDB_ac_B.Merge1_as = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S251>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S251>/Subsystem1' incorporates:
             *  EnablePort: '<S343>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S251>/Merge1' incorporates:
                 *  Constant: '<S345>/Constant'
                 *  SignalConversion generated from: '<S343>/VeDNDB_e_FaultSts_DM_A_PU_CurrSnsrCktHi'
                 */
                DNDB_ac_B.Merge1_as = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S251>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S230>/P0BE8' */
            break;

          case 23:
            /* Outputs for IfAction SubSystem: '<S230>/P0BEA' incorporates:
             *  ActionPort: '<S252>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S252>/Subsystem' incorporates:
             *  EnablePort: '<S346>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S252>/Merge1' incorporates:
                 *  Constant: '<S348>/Constant'
                 *  SignalConversion generated from: '<S346>/VeDNDB_e_FaultSts_DM_A_PV_CurrSnsrPerf'
                 */
                DNDB_ac_B.Merge1_a3 = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S252>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S252>/Subsystem1' incorporates:
             *  EnablePort: '<S347>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S252>/Merge1' incorporates:
                 *  Constant: '<S349>/Constant'
                 *  SignalConversion generated from: '<S347>/VeDNDB_e_FaultSts_DM_A_PV_CurrSnsrPerf'
                 */
                DNDB_ac_B.Merge1_a3 = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S252>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S230>/P0BEA' */
            break;

          case 24:
            /* Outputs for IfAction SubSystem: '<S230>/P0BEB' incorporates:
             *  ActionPort: '<S253>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S253>/Subsystem' incorporates:
             *  EnablePort: '<S350>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S253>/Merge1' incorporates:
                 *  Constant: '<S352>/Constant'
                 *  SignalConversion generated from: '<S350>/VeDNDB_e_FaultSts_DM_A_PV_CurrSnsrCktLo'
                 */
                DNDB_ac_B.Merge1_gh = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S253>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S253>/Subsystem1' incorporates:
             *  EnablePort: '<S351>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S253>/Merge1' incorporates:
                 *  Constant: '<S353>/Constant'
                 *  SignalConversion generated from: '<S351>/VeDNDB_e_FaultSts_DM_A_PV_CurrSnsrCktLo'
                 */
                DNDB_ac_B.Merge1_gh = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S253>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S230>/P0BEB' */
            break;

          case 25:
            /* Outputs for IfAction SubSystem: '<S230>/P0BEC' incorporates:
             *  ActionPort: '<S254>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S254>/Subsystem' incorporates:
             *  EnablePort: '<S354>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S254>/Merge1' incorporates:
                 *  Constant: '<S356>/Constant'
                 *  SignalConversion generated from: '<S354>/VeDNDB_e_FaultSts_DM_A_PV_CurrSnsrCktHi'
                 */
                DNDB_ac_B.Merge1_h0c = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S254>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S254>/Subsystem1' incorporates:
             *  EnablePort: '<S355>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S254>/Merge1' incorporates:
                 *  Constant: '<S357>/Constant'
                 *  SignalConversion generated from: '<S355>/VeDNDB_e_FaultSts_DM_A_PV_CurrSnsrCktHi'
                 */
                DNDB_ac_B.Merge1_h0c = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S254>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S230>/P0BEC' */
            break;

          case 26:
            /* Outputs for IfAction SubSystem: '<S230>/P0BEE' incorporates:
             *  ActionPort: '<S255>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S255>/Subsystem' incorporates:
             *  EnablePort: '<S358>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S255>/Merge1' incorporates:
                 *  Constant: '<S360>/Constant'
                 *  SignalConversion generated from: '<S358>/VeDNDB_e_FaultSts_DM_A_PW_CurrSnsrPerf'
                 */
                DNDB_ac_B.Merge1_nv = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S255>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S255>/Subsystem1' incorporates:
             *  EnablePort: '<S359>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S255>/Merge1' incorporates:
                 *  Constant: '<S361>/Constant'
                 *  SignalConversion generated from: '<S359>/VeDNDB_e_FaultSts_DM_A_PW_CurrSnsrPerf'
                 */
                DNDB_ac_B.Merge1_nv = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S255>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S230>/P0BEE' */
            break;

          case 27:
            /* Outputs for IfAction SubSystem: '<S230>/P0BEF' incorporates:
             *  ActionPort: '<S256>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S256>/Subsystem' incorporates:
             *  EnablePort: '<S362>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S256>/Merge1' incorporates:
                 *  Constant: '<S364>/Constant'
                 *  SignalConversion generated from: '<S362>/VeDNDB_e_FaultSts_DM_A_PW_CurrSnsrCktLo'
                 */
                DNDB_ac_B.Merge1_by = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S256>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S256>/Subsystem1' incorporates:
             *  EnablePort: '<S363>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S256>/Merge1' incorporates:
                 *  Constant: '<S365>/Constant'
                 *  SignalConversion generated from: '<S363>/VeDNDB_e_FaultSts_DM_A_PW_CurrSnsrCktLo'
                 */
                DNDB_ac_B.Merge1_by = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S256>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S230>/P0BEF' */
            break;

          case 28:
            /* Outputs for IfAction SubSystem: '<S230>/P0BF0' incorporates:
             *  ActionPort: '<S257>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S257>/Subsystem' incorporates:
             *  EnablePort: '<S366>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S257>/Merge1' incorporates:
                 *  Constant: '<S368>/Constant'
                 *  SignalConversion generated from: '<S366>/VeDNDB_e_FaultSts_DM_A_PW_CurrSnsrCktHi'
                 */
                DNDB_ac_B.Merge1_gs = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S257>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S257>/Subsystem1' incorporates:
             *  EnablePort: '<S367>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S257>/Merge1' incorporates:
                 *  Constant: '<S369>/Constant'
                 *  SignalConversion generated from: '<S367>/VeDNDB_e_FaultSts_DM_A_PW_CurrSnsrCktHi'
                 */
                DNDB_ac_B.Merge1_gs = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S257>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S230>/P0BF0' */
            break;

          case 29:
            /* Outputs for IfAction SubSystem: '<S230>/P0BFD' incorporates:
             *  ActionPort: '<S258>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S258>/Subsystem' incorporates:
             *  EnablePort: '<S370>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S258>/Merge1' incorporates:
                 *  Constant: '<S372>/Constant'
                 *  SignalConversion generated from: '<S370>/VeDNDB_e_FaultSts_DM_A_PUVW_Corr'
                 */
                DNDB_ac_B.Merge1_e5 = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S258>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S258>/Subsystem1' incorporates:
             *  EnablePort: '<S371>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S258>/Merge1' incorporates:
                 *  Constant: '<S373>/Constant'
                 *  SignalConversion generated from: '<S371>/VeDNDB_e_FaultSts_DM_A_PUVW_Corr'
                 */
                DNDB_ac_B.Merge1_e5 = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S258>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S230>/P0BFD' */
            break;

          case 30:
            /* Outputs for IfAction SubSystem: '<S230>/P0C05' incorporates:
             *  ActionPort: '<S260>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S260>/Subsystem' incorporates:
             *  EnablePort: '<S378>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S260>/Merge1' incorporates:
                 *  Constant: '<S380>/Constant'
                 *  SignalConversion generated from: '<S378>/VeDNDB_e_FaultSts_DM_A_PUVW_Ckt'
                 */
                DNDB_ac_B.Merge1_jj = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S260>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S260>/Subsystem1' incorporates:
             *  EnablePort: '<S379>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S260>/Merge1' incorporates:
                 *  Constant: '<S381>/Constant'
                 *  SignalConversion generated from: '<S379>/VeDNDB_e_FaultSts_DM_A_PUVW_Ckt'
                 */
                DNDB_ac_B.Merge1_jj = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S260>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S230>/P0C05' */
            break;

          case 31:
            /* Outputs for IfAction SubSystem: '<S230>/P0C01' incorporates:
             *  ActionPort: '<S259>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S259>/Subsystem' incorporates:
             *  EnablePort: '<S374>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S259>/Merge1' incorporates:
                 *  Constant: '<S376>/Constant'
                 *  SignalConversion generated from: '<S374>/VeDNDB_e_FaultSts_DM_A_CurrHi'
                 */
                DNDB_ac_B.Merge1_gk = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S259>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S259>/Subsystem1' incorporates:
             *  EnablePort: '<S375>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_c == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S259>/Merge1' incorporates:
                 *  Constant: '<S377>/Constant'
                 *  SignalConversion generated from: '<S375>/VeDNDB_e_FaultSts_DM_A_CurrHi'
                 */
                DNDB_ac_B.Merge1_gk = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S259>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S230>/P0C01' */
            break;

          default:
            /* no actions */
            break;
        }

        /* End of SwitchCase: '<S230>/SwitchCase' */
    }

    /* End of Outputs for SubSystem: '<S227>/BlocksIndex1' */

    /* Outputs for Enabled SubSystem: '<S227>/BlocksIndex2' incorporates:
     *  EnablePort: '<S229>/Enable'
     */
    if (DNDB_ac_DW.UnitDelay1_DSTATE_p != rtb_TmpSignalConversionAtMCP_ey)
    {
        /* SwitchCase: '<S386>/SwitchCase' incorporates:
         *  Constant: '<S387>/Constant Value'
         *  Constant: '<S387>/Constant Value1'
         *  Constant: '<S388>/Constant Value'
         *  Constant: '<S388>/Constant Value1'
         *  Constant: '<S389>/Constant Value'
         *  Constant: '<S389>/Constant Value1'
         *  Constant: '<S390>/Constant Value'
         *  Constant: '<S390>/Constant Value1'
         *  Constant: '<S391>/Constant Value'
         *  Constant: '<S391>/Constant Value1'
         *  Constant: '<S392>/Constant Value'
         *  Constant: '<S392>/Constant Value1'
         *  Constant: '<S393>/Constant Value'
         *  Constant: '<S393>/Constant Value1'
         *  Constant: '<S394>/Constant Value'
         *  Constant: '<S394>/Constant Value1'
         *  Constant: '<S395>/Constant Value'
         *  Constant: '<S395>/Constant Value1'
         *  Constant: '<S396>/Constant Value'
         *  Constant: '<S396>/Constant Value1'
         *  Constant: '<S397>/Constant Value'
         *  Constant: '<S397>/Constant Value1'
         *  Constant: '<S398>/Constant Value'
         *  Constant: '<S398>/Constant Value1'
         *  Constant: '<S399>/Constant Value'
         *  Constant: '<S399>/Constant Value1'
         *  Constant: '<S400>/Constant Value'
         *  Constant: '<S400>/Constant Value1'
         *  Constant: '<S401>/Constant Value'
         *  Constant: '<S401>/Constant Value1'
         *  Constant: '<S402>/Constant Value'
         *  Constant: '<S402>/Constant Value1'
         *  Constant: '<S403>/Constant Value'
         *  Constant: '<S403>/Constant Value1'
         *  Constant: '<S404>/Constant Value'
         *  Constant: '<S404>/Constant Value1'
         *  Constant: '<S405>/Constant Value'
         *  Constant: '<S405>/Constant Value1'
         *  Constant: '<S406>/Constant Value'
         *  Constant: '<S406>/Constant Value1'
         *  Constant: '<S407>/Constant Value'
         *  Constant: '<S407>/Constant Value1'
         *  Constant: '<S408>/Constant Value'
         *  Constant: '<S408>/Constant Value1'
         *  Constant: '<S409>/Constant Value'
         *  Constant: '<S409>/Constant Value1'
         *  Constant: '<S410>/Constant Value'
         *  Constant: '<S410>/Constant Value1'
         *  Constant: '<S411>/Constant Value'
         *  Constant: '<S411>/Constant Value1'
         *  RelationalOperator: '<S387>/E1'
         *  RelationalOperator: '<S387>/E2'
         *  RelationalOperator: '<S388>/E1'
         *  RelationalOperator: '<S388>/E2'
         *  RelationalOperator: '<S389>/E1'
         *  RelationalOperator: '<S389>/E2'
         *  RelationalOperator: '<S390>/E1'
         *  RelationalOperator: '<S390>/E2'
         *  RelationalOperator: '<S391>/E1'
         *  RelationalOperator: '<S391>/E2'
         *  RelationalOperator: '<S392>/E1'
         *  RelationalOperator: '<S392>/E2'
         *  RelationalOperator: '<S393>/E1'
         *  RelationalOperator: '<S393>/E2'
         *  RelationalOperator: '<S394>/E1'
         *  RelationalOperator: '<S394>/E2'
         *  RelationalOperator: '<S395>/E1'
         *  RelationalOperator: '<S395>/E2'
         *  RelationalOperator: '<S396>/E1'
         *  RelationalOperator: '<S396>/E2'
         *  RelationalOperator: '<S397>/E1'
         *  RelationalOperator: '<S397>/E2'
         *  RelationalOperator: '<S398>/E1'
         *  RelationalOperator: '<S398>/E2'
         *  RelationalOperator: '<S399>/E1'
         *  RelationalOperator: '<S399>/E2'
         *  RelationalOperator: '<S400>/E1'
         *  RelationalOperator: '<S400>/E2'
         *  RelationalOperator: '<S401>/E1'
         *  RelationalOperator: '<S401>/E2'
         *  RelationalOperator: '<S402>/E1'
         *  RelationalOperator: '<S402>/E2'
         *  RelationalOperator: '<S403>/E1'
         *  RelationalOperator: '<S403>/E2'
         *  RelationalOperator: '<S404>/E1'
         *  RelationalOperator: '<S404>/E2'
         *  RelationalOperator: '<S405>/E1'
         *  RelationalOperator: '<S405>/E2'
         *  RelationalOperator: '<S406>/E1'
         *  RelationalOperator: '<S406>/E2'
         *  RelationalOperator: '<S407>/E1'
         *  RelationalOperator: '<S407>/E2'
         *  RelationalOperator: '<S408>/E1'
         *  RelationalOperator: '<S408>/E2'
         *  RelationalOperator: '<S409>/E1'
         *  RelationalOperator: '<S409>/E2'
         *  RelationalOperator: '<S410>/E1'
         *  RelationalOperator: '<S410>/E2'
         *  RelationalOperator: '<S411>/E1'
         *  RelationalOperator: '<S411>/E2'
         */
        switch (rtb_TmpSignalConversionAtMCP_ey)
        {
          case 0:
            /* Outputs for IfAction SubSystem: '<S386>/P0A3F' incorporates:
             *  ActionPort: '<S387>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S387>/Subsystem' incorporates:
             *  EnablePort: '<S412>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_b == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S387>/Merge1' incorporates:
                 *  Constant: '<S414>/Constant'
                 *  SignalConversion generated from: '<S412>/VeDNDB_e_FaultSts_DrvMtrA_PstnSnsrCkt'
                 */
                DNDB_ac_B.Merge1_on = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S387>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S387>/Subsystem1' incorporates:
             *  EnablePort: '<S413>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_b == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S387>/Merge1' incorporates:
                 *  Constant: '<S415>/Constant'
                 *  SignalConversion generated from: '<S413>/VeDNDB_e_FaultSts_DrvMtrA_PstnSnsrCkt'
                 */
                DNDB_ac_B.Merge1_on = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S387>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S386>/P0A3F' */
            break;

          case 1:
            /* Outputs for IfAction SubSystem: '<S386>/P0A43' incorporates:
             *  ActionPort: '<S388>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S388>/Subsystem' incorporates:
             *  EnablePort: '<S416>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_b == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S388>/Merge1' incorporates:
                 *  Constant: '<S418>/Constant'
                 *  SignalConversion generated from: '<S416>/VeDNDB_e_FaultSts_DrvMtrA_PstnSnsrCktInt'
                 */
                DNDB_ac_B.Merge1_df = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S388>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S388>/Subsystem1' incorporates:
             *  EnablePort: '<S417>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_b == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S388>/Merge1' incorporates:
                 *  Constant: '<S419>/Constant'
                 *  SignalConversion generated from: '<S417>/VeDNDB_e_FaultSts_DrvMtrA_PstnSnsrCktInt'
                 */
                DNDB_ac_B.Merge1_df = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S388>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S386>/P0A43' */
            break;

          case 2:
            /* Outputs for IfAction SubSystem: '<S386>/P0C0B' incorporates:
             *  ActionPort: '<S392>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S392>/Subsystem' incorporates:
             *  EnablePort: '<S432>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_b == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S392>/Merge1' incorporates:
                 *  Constant: '<S434>/Constant'
                 *  SignalConversion generated from: '<S432>/VeDNDB_e_FaultSts_DM_A_I_PwrSplyCkt'
                 */
                DNDB_ac_B.Merge1_gf = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S392>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S392>/Subsystem1' incorporates:
             *  EnablePort: '<S433>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_b == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S392>/Merge1' incorporates:
                 *  Constant: '<S435>/Constant'
                 *  SignalConversion generated from: '<S433>/VeDNDB_e_FaultSts_DM_A_I_PwrSplyCkt'
                 */
                DNDB_ac_B.Merge1_gf = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S392>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S386>/P0C0B' */
            break;

          case 3:
            /* Outputs for IfAction SubSystem: '<S386>/P0C19' incorporates:
             *  ActionPort: '<S395>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S395>/Subsystem' incorporates:
             *  EnablePort: '<S444>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_b == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S395>/Merge1' incorporates:
                 *  Constant: '<S446>/Constant'
                 *  SignalConversion generated from: '<S444>/VeDNDB_e_FaultSts_DM_A_TorqDlvdPerf'
                 */
                DNDB_ac_B.Merge1_kq = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S395>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S395>/Subsystem1' incorporates:
             *  EnablePort: '<S445>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_b == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S395>/Merge1' incorporates:
                 *  Constant: '<S447>/Constant'
                 *  SignalConversion generated from: '<S445>/VeDNDB_e_FaultSts_DM_A_TorqDlvdPerf'
                 */
                DNDB_ac_B.Merge1_kq = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S395>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S386>/P0C19' */
            break;

          case 4:
            /* Outputs for IfAction SubSystem: '<S386>/P1B0F' incorporates:
             *  ActionPort: '<S401>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S401>/Subsystem' incorporates:
             *  EnablePort: '<S468>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_b == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S401>/Merge1' incorporates:
                 *  Constant: '<S470>/Constant'
                 *  SignalConversion generated from: '<S468>/VeDNDB_e_FaultSts_MCPA_P1B0F'
                 */
                DNDB_ac_B.Merge1_b0 = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S401>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S401>/Subsystem1' incorporates:
             *  EnablePort: '<S469>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_b == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S401>/Merge1' incorporates:
                 *  Constant: '<S471>/Constant'
                 *  SignalConversion generated from: '<S469>/VeDNDB_e_FaultSts_MCPA_P1B0F'
                 */
                DNDB_ac_B.Merge1_b0 = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S401>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S386>/P1B0F' */
            break;

          case 5:
            /* Outputs for IfAction SubSystem: '<S386>/P1AE9' incorporates:
             *  ActionPort: '<S396>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S396>/Subsystem' incorporates:
             *  EnablePort: '<S448>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_b == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S396>/Merge1' incorporates:
                 *  Constant: '<S450>/Constant'
                 *  SignalConversion generated from: '<S448>/VeDNDB_e_FaultSts_DMCM_A_HB_VoltSnsCktHi'
                 */
                DNDB_ac_B.Merge1_ko = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S396>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S396>/Subsystem1' incorporates:
             *  EnablePort: '<S449>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_b == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S396>/Merge1' incorporates:
                 *  Constant: '<S451>/Constant'
                 *  SignalConversion generated from: '<S449>/VeDNDB_e_FaultSts_DMCM_A_HB_VoltSnsCktHi'
                 */
                DNDB_ac_B.Merge1_ko = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S396>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S386>/P1AE9' */
            break;

          case 6:
            /* Outputs for IfAction SubSystem: '<S386>/P1AEC' incorporates:
             *  ActionPort: '<S397>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S397>/Subsystem' incorporates:
             *  EnablePort: '<S452>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_b == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S397>/Merge1' incorporates:
                 *  Constant: '<S454>/Constant'
                 *  SignalConversion generated from: '<S452>/VeDNDB_e_FaultSts_DMCM_A_HB_SysVolt'
                 */
                DNDB_ac_B.Merge1_a4k = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S397>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S397>/Subsystem1' incorporates:
             *  EnablePort: '<S453>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_b == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S397>/Merge1' incorporates:
                 *  Constant: '<S455>/Constant'
                 *  SignalConversion generated from: '<S453>/VeDNDB_e_FaultSts_DMCM_A_HB_SysVolt'
                 */
                DNDB_ac_B.Merge1_a4k = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S397>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S386>/P1AEC' */
            break;

          case 7:
            /* Outputs for IfAction SubSystem: '<S386>/P1AEE' incorporates:
             *  ActionPort: '<S398>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S398>/Subsystem' incorporates:
             *  EnablePort: '<S456>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_b == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S398>/Merge1' incorporates:
                 *  Constant: '<S458>/Constant'
                 *  SignalConversion generated from: '<S456>/VeDNDB_e_FaultSts_DMCM_A_HB_SysVoltHi'
                 */
                DNDB_ac_B.Merge1_pb = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S398>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S398>/Subsystem1' incorporates:
             *  EnablePort: '<S457>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_b == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S398>/Merge1' incorporates:
                 *  Constant: '<S459>/Constant'
                 *  SignalConversion generated from: '<S457>/VeDNDB_e_FaultSts_DMCM_A_HB_SysVoltHi'
                 */
                DNDB_ac_B.Merge1_pb = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S398>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S386>/P1AEE' */
            break;

          case 8:
            /* Outputs for IfAction SubSystem: '<S386>/P1B07' incorporates:
             *  ActionPort: '<S400>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S400>/Subsystem' incorporates:
             *  EnablePort: '<S464>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_b == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S400>/Merge1' incorporates:
                 *  Constant: '<S466>/Constant'
                 *  SignalConversion generated from: '<S464>/VeDNDB_e_FaultSts_MCPA_P1B07'
                 */
                DNDB_ac_B.Merge1_d3 = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S400>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S400>/Subsystem1' incorporates:
             *  EnablePort: '<S465>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_b == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S400>/Merge1' incorporates:
                 *  Constant: '<S467>/Constant'
                 *  SignalConversion generated from: '<S465>/VeDNDB_e_FaultSts_MCPA_P1B07'
                 */
                DNDB_ac_B.Merge1_d3 = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S400>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S386>/P1B07' */
            break;

          case 9:
          case 15:
          case 16:
          case 17:
          case 29:
          case 30:
          case 31:
            break;

          case 10:
            /* Outputs for IfAction SubSystem: '<S386>/P1B03' incorporates:
             *  ActionPort: '<S399>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S399>/Subsystem' incorporates:
             *  EnablePort: '<S460>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_b == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S399>/Merge1' incorporates:
                 *  Constant: '<S462>/Constant'
                 *  SignalConversion generated from: '<S460>/VeDNDB_e_FaultSts_DMCM_A_PstnSnsrLossTrk'
                 */
                DNDB_ac_B.Merge1_o5 = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S399>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S399>/Subsystem1' incorporates:
             *  EnablePort: '<S461>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_b == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S399>/Merge1' incorporates:
                 *  Constant: '<S463>/Constant'
                 *  SignalConversion generated from: '<S461>/VeDNDB_e_FaultSts_DMCM_A_PstnSnsrLossTrk'
                 */
                DNDB_ac_B.Merge1_o5 = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S399>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S386>/P1B03' */
            break;

          case 11:
            /* Outputs for IfAction SubSystem: '<S386>/P1CDC' incorporates:
             *  ActionPort: '<S403>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S403>/Subsystem' incorporates:
             *  EnablePort: '<S476>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_b == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S403>/Merge1' incorporates:
                 *  Constant: '<S478>/Constant'
                 *  SignalConversion generated from: '<S476>/VeDNDB_e_FaultSts_EVWakeup1CktShortGrnd'
                 */
                DNDB_ac_B.Merge1_h5 = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S403>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S403>/Subsystem1' incorporates:
             *  EnablePort: '<S477>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_b == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S403>/Merge1' incorporates:
                 *  Constant: '<S479>/Constant'
                 *  SignalConversion generated from: '<S477>/VeDNDB_e_FaultSts_EVWakeup1CktShortGrnd'
                 */
                DNDB_ac_B.Merge1_h5 = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S403>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S386>/P1CDC' */
            break;

          case 12:
            /* Outputs for IfAction SubSystem: '<S386>/P0AFB' incorporates:
             *  ActionPort: '<S391>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S391>/Subsystem' incorporates:
             *  EnablePort: '<S428>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_b == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S391>/Merge1' incorporates:
                 *  Constant: '<S430>/Constant'
                 *  SignalConversion generated from: '<S428>/VeDNDB_e_FaultSts_HB_SysVoltHi'
                 */
                DNDB_ac_B.Merge1_ei = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S391>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S391>/Subsystem1' incorporates:
             *  EnablePort: '<S429>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_b == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S391>/Merge1' incorporates:
                 *  Constant: '<S431>/Constant'
                 *  SignalConversion generated from: '<S429>/VeDNDB_e_FaultSts_HB_SysVoltHi'
                 */
                DNDB_ac_B.Merge1_ei = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S391>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S386>/P0AFB' */
            break;

          case 13:
            /* Outputs for IfAction SubSystem: '<S386>/P0A44' incorporates:
             *  ActionPort: '<S389>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S389>/Subsystem' incorporates:
             *  EnablePort: '<S420>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_b == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S389>/Merge1' incorporates:
                 *  Constant: '<S422>/Constant'
                 *  SignalConversion generated from: '<S420>/VeDNDB_e_FaultSts_DrvMtrA_PstnSnsrOvrspd'
                 */
                DNDB_ac_B.Merge1_hfk = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S389>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S389>/Subsystem1' incorporates:
             *  EnablePort: '<S421>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_b == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S389>/Merge1' incorporates:
                 *  Constant: '<S423>/Constant'
                 *  SignalConversion generated from: '<S421>/VeDNDB_e_FaultSts_DrvMtrA_PstnSnsrOvrspd'
                 */
                DNDB_ac_B.Merge1_hfk = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S389>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S386>/P0A44' */
            break;

          case 14:
            /* Outputs for IfAction SubSystem: '<S386>/P0A78' incorporates:
             *  ActionPort: '<S390>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S390>/Subsystem' incorporates:
             *  EnablePort: '<S424>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_b == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S390>/Merge1' incorporates:
                 *  Constant: '<S426>/Constant'
                 *  SignalConversion generated from: '<S424>/VeDNDB_e_FaultSts_DrvMtrA_InvtrPerf'
                 */
                DNDB_ac_B.Merge1_hx = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S390>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S390>/Subsystem1' incorporates:
             *  EnablePort: '<S425>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_b == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S390>/Merge1' incorporates:
                 *  Constant: '<S427>/Constant'
                 *  SignalConversion generated from: '<S425>/VeDNDB_e_FaultSts_DrvMtrA_InvtrPerf'
                 */
                DNDB_ac_B.Merge1_hx = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S390>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S386>/P0A78' */
            break;

          case 18:
            /* Outputs for IfAction SubSystem: '<S386>/P1C8F' incorporates:
             *  ActionPort: '<S402>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S402>/Subsystem' incorporates:
             *  EnablePort: '<S472>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_b == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S402>/Merge1' incorporates:
                 *  Constant: '<S474>/Constant'
                 *  SignalConversion generated from: '<S472>/VeDNDB_e_FaultSts_EPSSupply1CktHi'
                 */
                DNDB_ac_B.Merge1_be = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S402>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S402>/Subsystem1' incorporates:
             *  EnablePort: '<S473>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_b == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S402>/Merge1' incorporates:
                 *  Constant: '<S475>/Constant'
                 *  SignalConversion generated from: '<S473>/VeDNDB_e_FaultSts_EPSSupply1CktHi'
                 */
                DNDB_ac_B.Merge1_be = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S402>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S386>/P1C8F' */
            break;

          case 19:
            /* Outputs for IfAction SubSystem: '<S386>/P0C11' incorporates:
             *  ActionPort: '<S393>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S393>/Subsystem' incorporates:
             *  EnablePort: '<S436>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_b == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S393>/Merge1' incorporates:
                 *  Constant: '<S438>/Constant'
                 *  SignalConversion generated from: '<S436>/VeDNDB_e_FaultSts_DM_A_I_PU_Ovrtemp'
                 */
                DNDB_ac_B.Merge1_mi = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S393>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S393>/Subsystem1' incorporates:
             *  EnablePort: '<S437>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_b == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S393>/Merge1' incorporates:
                 *  Constant: '<S439>/Constant'
                 *  SignalConversion generated from: '<S437>/VeDNDB_e_FaultSts_DM_A_I_PU_Ovrtemp'
                 */
                DNDB_ac_B.Merge1_mi = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S393>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S386>/P0C11' */
            break;

          case 20:
            /* Outputs for IfAction SubSystem: '<S386>/P0C17' incorporates:
             *  ActionPort: '<S394>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S394>/Subsystem' incorporates:
             *  EnablePort: '<S440>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_b == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S394>/Merge1' incorporates:
                 *  Constant: '<S442>/Constant'
                 *  SignalConversion generated from: '<S440>/VeDNDB_e_FaultSts_DM_A_PstnNotLrnd'
                 */
                DNDB_ac_B.Merge1_n4 = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S394>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S394>/Subsystem1' incorporates:
             *  EnablePort: '<S441>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_b == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S394>/Merge1' incorporates:
                 *  Constant: '<S443>/Constant'
                 *  SignalConversion generated from: '<S441>/VeDNDB_e_FaultSts_DM_A_PstnNotLrnd'
                 */
                DNDB_ac_B.Merge1_n4 = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S394>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S386>/P0C17' */
            break;

          case 21:
            /* Outputs for IfAction SubSystem: '<S386>/P2533' incorporates:
             *  ActionPort: '<S404>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S404>/Subsystem' incorporates:
             *  EnablePort: '<S480>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_b == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S404>/Merge1' incorporates:
                 *  Constant: '<S482>/Constant'
                 *  SignalConversion generated from: '<S480>/VeDNDB_e_FaultSts_IgnSwOnStrtPstnCkt'
                 */
                DNDB_ac_B.Merge1_pn = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S404>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S404>/Subsystem1' incorporates:
             *  EnablePort: '<S481>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_b == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S404>/Merge1' incorporates:
                 *  Constant: '<S483>/Constant'
                 *  SignalConversion generated from: '<S481>/VeDNDB_e_FaultSts_IgnSwOnStrtPstnCkt'
                 */
                DNDB_ac_B.Merge1_pn = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S404>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S386>/P2533' */
            break;

          case 22:
            /* Outputs for IfAction SubSystem: '<S386>/P2534' incorporates:
             *  ActionPort: '<S405>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S405>/Subsystem' incorporates:
             *  EnablePort: '<S484>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_b == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S405>/Merge1' incorporates:
                 *  Constant: '<S486>/Constant'
                 *  SignalConversion generated from: '<S484>/VeDNDB_e_FaultSts_IgnSwRunCrnkPstnCktLo'
                 */
                DNDB_ac_B.Merge1_ik = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S405>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S405>/Subsystem1' incorporates:
             *  EnablePort: '<S485>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_b == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S405>/Merge1' incorporates:
                 *  Constant: '<S487>/Constant'
                 *  SignalConversion generated from: '<S485>/VeDNDB_e_FaultSts_IgnSwRunCrnkPstnCktLo'
                 */
                DNDB_ac_B.Merge1_ik = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S405>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S386>/P2534' */
            break;

          case 23:
            /* Outputs for IfAction SubSystem: '<S386>/P2535' incorporates:
             *  ActionPort: '<S406>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S406>/Subsystem' incorporates:
             *  EnablePort: '<S488>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_b == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S406>/Merge1' incorporates:
                 *  Constant: '<S490>/Constant'
                 *  SignalConversion generated from: '<S488>/VeDNDB_e_FaultSts_IgnSwRunCrnkPstnCktHi'
                 */
                DNDB_ac_B.Merge1_c3 = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S406>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S406>/Subsystem1' incorporates:
             *  EnablePort: '<S489>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_b == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S406>/Merge1' incorporates:
                 *  Constant: '<S491>/Constant'
                 *  SignalConversion generated from: '<S489>/VeDNDB_e_FaultSts_IgnSwRunCrnkPstnCktHi'
                 */
                DNDB_ac_B.Merge1_c3 = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S406>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S386>/P2535' */
            break;

          case 24:
            /* Outputs for IfAction SubSystem: '<S386>/U1531' incorporates:
             *  ActionPort: '<S407>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S407>/Subsystem' incorporates:
             *  EnablePort: '<S492>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_b == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S407>/Merge1' incorporates:
                 *  Constant: '<S494>/Constant'
                 *  SignalConversion generated from: '<S492>/VeDNDB_e_FaultSts_DMCM_A_InvData_DMCM_B'
                 */
                DNDB_ac_B.Merge1_ai = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S407>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S407>/Subsystem1' incorporates:
             *  EnablePort: '<S493>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_b == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S407>/Merge1' incorporates:
                 *  Constant: '<S495>/Constant'
                 *  SignalConversion generated from: '<S493>/VeDNDB_e_FaultSts_DMCM_A_InvData_DMCM_B'
                 */
                DNDB_ac_B.Merge1_ai = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S407>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S386>/U1531' */
            break;

          case 25:
            /* Outputs for IfAction SubSystem: '<S386>/U1532' incorporates:
             *  ActionPort: '<S408>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S408>/Subsystem' incorporates:
             *  EnablePort: '<S496>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_b == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S408>/Merge1' incorporates:
                 *  Constant: '<S498>/Constant'
                 *  SignalConversion generated from: '<S496>/VeDNDB_e_FaultSts_DMCM_A_InvDataGenrA_CM'
                 */
                DNDB_ac_B.Merge1_lh = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S408>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S408>/Subsystem1' incorporates:
             *  EnablePort: '<S497>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_b == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S408>/Merge1' incorporates:
                 *  Constant: '<S499>/Constant'
                 *  SignalConversion generated from: '<S497>/VeDNDB_e_FaultSts_DMCM_A_InvDataGenrA_CM'
                 */
                DNDB_ac_B.Merge1_lh = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S408>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S386>/U1532' */
            break;

          case 26:
            /* Outputs for IfAction SubSystem: '<S386>/U1533' incorporates:
             *  ActionPort: '<S409>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S409>/Subsystem' incorporates:
             *  EnablePort: '<S500>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_b == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S409>/Merge1' incorporates:
                 *  Constant: '<S502>/Constant'
                 *  SignalConversion generated from: '<S500>/VeDNDB_e_FaultSts_DMCM_A_InvDataIDCM'
                 */
                DNDB_ac_B.Merge1_ob = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S409>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S409>/Subsystem1' incorporates:
             *  EnablePort: '<S501>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_b == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S409>/Merge1' incorporates:
                 *  Constant: '<S503>/Constant'
                 *  SignalConversion generated from: '<S501>/VeDNDB_e_FaultSts_DMCM_A_InvDataIDCM'
                 */
                DNDB_ac_B.Merge1_ob = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S409>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S386>/U1533' */
            break;

          case 27:
            /* Outputs for IfAction SubSystem: '<S386>/U1534' incorporates:
             *  ActionPort: '<S410>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S410>/Subsystem' incorporates:
             *  EnablePort: '<S504>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_b == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S410>/Merge1' incorporates:
                 *  Constant: '<S506>/Constant'
                 *  SignalConversion generated from: '<S504>/VeDNDB_e_FaultSts_DMCM_A_InvDataEVCU'
                 */
                DNDB_ac_B.Merge1_bm = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S410>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S410>/Subsystem1' incorporates:
             *  EnablePort: '<S505>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_b == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S410>/Merge1' incorporates:
                 *  Constant: '<S507>/Constant'
                 *  SignalConversion generated from: '<S505>/VeDNDB_e_FaultSts_DMCM_A_InvDataEVCU'
                 */
                DNDB_ac_B.Merge1_bm = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S410>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S386>/U1534' */
            break;

          case 28:
            /* Outputs for IfAction SubSystem: '<S386>/U1535' incorporates:
             *  ActionPort: '<S411>/Action Port'
             */
            /* Outputs for Enabled SubSystem: '<S411>/Subsystem' incorporates:
             *  EnablePort: '<S508>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_b == CeDNDB_e_DiagPassd)
            {
                /* Merge: '<S411>/Merge1' incorporates:
                 *  Constant: '<S510>/Constant'
                 *  SignalConversion generated from: '<S508>/VeDNDB_e_FaultSts_DMCM_A_InvDataBPCM'
                 */
                DNDB_ac_B.Merge1_ksg = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S411>/Subsystem' */

            /* Outputs for Enabled SubSystem: '<S411>/Subsystem1' incorporates:
             *  EnablePort: '<S509>/Enable'
             */
            if (rtb_TmpSignalConversionAtMCPA_b == CeDNDB_e_DiagFaild)
            {
                /* Merge: '<S411>/Merge1' incorporates:
                 *  Constant: '<S511>/Constant'
                 *  SignalConversion generated from: '<S509>/VeDNDB_e_FaultSts_DMCM_A_InvDataBPCM'
                 */
                DNDB_ac_B.Merge1_ksg = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S411>/Subsystem1' */
            /* End of Outputs for SubSystem: '<S386>/U1535' */
            break;

          default:
            /* no actions */
            break;
        }

        /* End of SwitchCase: '<S386>/SwitchCase' */
    }

    /* End of Outputs for SubSystem: '<S227>/BlocksIndex2' */

    /* Update for UnitDelay: '<S227>/Unit Delay' incorporates:
     *  RelationalOperator: '<S227>/Relational Operator'
     *  RelationalOperator: '<S227>/Relational Operator1'
     *  UnitDelay: '<S227>/Unit Delay1'
     */
    DNDB_ac_DW.UnitDelay_DSTATE_j = rtb_TmpSignalConversionAtMCPA_D;

    /* Update for UnitDelay: '<S227>/Unit Delay1' */
    DNDB_ac_DW.UnitDelay1_DSTATE_p = rtb_TmpSignalConversionAtMCP_ey;

    /* End of Outputs for SubSystem: '<S4>/MCPA_PEGASUS_BlockIndexMngt' */

    /* Outport: '<Root>/VeDNDB_e_FaultSts_VSS_A_Perf' incorporates:
     *  Merge: '<S231>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_VSS_A_Perf_Value(DNDB_ac_B.Merge1_bm2);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_SnsrRefVolt1CktLo' incorporates:
     *  Merge: '<S232>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_SnsrRefVolt1CktLo_Value
        (DNDB_ac_B.Merge1_kh);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_SnsrRefVolt1CktHi' incorporates:
     *  Merge: '<S233>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_SnsrRefVolt1CktHi_Value
        (DNDB_ac_B.Merge1_oi);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_InternalTempSnsrPerf' incorporates:
     *  Merge: '<S234>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_InternalTempSnsrPerf_Value
        (DNDB_ac_B.Merge1_bn);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DrvMtrA_CM_Perf' incorporates:
     *  Merge: '<S235>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DrvMtrA_CM_Perf_Value(DNDB_ac_B.Merge1_oh4);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DrvMtrA_TempSnsrPerf' incorporates:
     *  Merge: '<S236>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DrvMtrA_TempSnsrPerf_Value
        (DNDB_ac_B.Merge1_j2);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DrvMtrA_TempSnsrCktLo' incorporates:
     *  Merge: '<S237>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DrvMtrA_TempSnsrCktLo_Value
        (DNDB_ac_B.Merge1_jy);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DrvMtrA_TempSnsrCktHi' incorporates:
     *  Merge: '<S238>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DrvMtrA_TempSnsrCktHi_Value
        (DNDB_ac_B.Merge1_dc);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DrvMtrA_Ovrtemp' incorporates:
     *  Merge: '<S239>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DrvMtrA_Ovrtemp_Value(DNDB_ac_B.Merge1_ldw);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DrvMtrA_PstnSnsrCkt' incorporates:
     *  Merge: '<S387>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DrvMtrA_PstnSnsrCkt_Value
        (DNDB_ac_B.Merge1_on);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DrvMtrA_PstnSnsrCktInt' incorporates:
     *  Merge: '<S388>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DrvMtrA_PstnSnsrCktInt_Value
        (DNDB_ac_B.Merge1_df);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DrvMtrA_PstnSnsrOvrspd' incorporates:
     *  Merge: '<S389>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DrvMtrA_PstnSnsrOvrspd_Value
        (DNDB_ac_B.Merge1_hfk);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DrvMtrA_InvtrPerf' incorporates:
     *  Merge: '<S390>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DrvMtrA_InvtrPerf_Value
        (DNDB_ac_B.Merge1_hx);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_MtrInvTempSnsr1Ckt' incorporates:
     *  Merge: '<S240>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_MtrInvTempSnsr1Ckt_Value
        (DNDB_ac_B.Merge1_ng);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_InvTempSnsrA_Perf' incorporates:
     *  Merge: '<S241>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_InvTempSnsrA_Perf_Value
        (DNDB_ac_B.Merge1_cro);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_InvTempSnsrA_CktLo' incorporates:
     *  Merge: '<S242>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_InvTempSnsrA_CktLo_Value
        (DNDB_ac_B.Merge1_p2);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_InvTempSnsrA_CktHi' incorporates:
     *  Merge: '<S243>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_InvTempSnsrA_CktHi_Value
        (DNDB_ac_B.Merge1_av);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_MtrInvTempSnsr2Ckt' incorporates:
     *  Merge: '<S244>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_MtrInvTempSnsr2Ckt_Value
        (DNDB_ac_B.Merge1_pl);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_HB_SysVoltHi' incorporates:
     *  Merge: '<S391>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_HB_SysVoltHi_Value(DNDB_ac_B.Merge1_ei);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_InvTempSnsrC_CktLo' incorporates:
     *  Merge: '<S245>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_InvTempSnsrC_CktLo_Value
        (DNDB_ac_B.Merge1_pdh);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_InvTempSnsrC_CktHi' incorporates:
     *  Merge: '<S246>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_InvTempSnsrC_CktHi_Value
        (DNDB_ac_B.Merge1_ls);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_InvTempSnsrE_CktLo' incorporates:
     *  Merge: '<S247>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_InvTempSnsrE_CktLo_Value
        (DNDB_ac_B.Merge1_ka);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_InvTempSnsrE_CktHi' incorporates:
     *  Merge: '<S248>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_InvTempSnsrE_CktHi_Value
        (DNDB_ac_B.Merge1_aa);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_A_PU_CurrSnsrPerf' incorporates:
     *  Merge: '<S249>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_A_PU_CurrSnsrPerf_Value
        (DNDB_ac_B.Merge1_nx);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_A_PU_CurrSnsrCktLo' incorporates:
     *  Merge: '<S250>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_A_PU_CurrSnsrCktLo_Value
        (DNDB_ac_B.Merge1_io);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_A_PU_CurrSnsrCktHi' incorporates:
     *  Merge: '<S251>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_A_PU_CurrSnsrCktHi_Value
        (DNDB_ac_B.Merge1_as);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_A_PV_CurrSnsrPerf' incorporates:
     *  Merge: '<S252>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_A_PV_CurrSnsrPerf_Value
        (DNDB_ac_B.Merge1_a3);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_A_PV_CurrSnsrCktLo' incorporates:
     *  Merge: '<S253>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_A_PV_CurrSnsrCktLo_Value
        (DNDB_ac_B.Merge1_gh);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_A_PV_CurrSnsrCktHi' incorporates:
     *  Merge: '<S254>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_A_PV_CurrSnsrCktHi_Value
        (DNDB_ac_B.Merge1_h0c);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_A_PW_CurrSnsrPerf' incorporates:
     *  Merge: '<S255>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_A_PW_CurrSnsrPerf_Value
        (DNDB_ac_B.Merge1_nv);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_A_PW_CurrSnsrCktLo' incorporates:
     *  Merge: '<S256>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_A_PW_CurrSnsrCktLo_Value
        (DNDB_ac_B.Merge1_by);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_A_PW_CurrSnsrCktHi' incorporates:
     *  Merge: '<S257>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_A_PW_CurrSnsrCktHi_Value
        (DNDB_ac_B.Merge1_gs);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_A_PUVW_Corr' incorporates:
     *  Merge: '<S258>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_A_PUVW_Corr_Value(DNDB_ac_B.Merge1_e5);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_A_CurrHi' incorporates:
     *  Merge: '<S259>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_A_CurrHi_Value(DNDB_ac_B.Merge1_gk);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_A_PUVW_Ckt' incorporates:
     *  Merge: '<S260>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_A_PUVW_Ckt_Value(DNDB_ac_B.Merge1_jj);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_A_I_PwrSplyCkt' incorporates:
     *  Merge: '<S392>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_A_I_PwrSplyCkt_Value
        (DNDB_ac_B.Merge1_gf);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_A_I_PU_Ovrtemp' incorporates:
     *  Merge: '<S393>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_A_I_PU_Ovrtemp_Value
        (DNDB_ac_B.Merge1_mi);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_A_PstnNotLrnd' incorporates:
     *  Merge: '<S394>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_A_PstnNotLrnd_Value(DNDB_ac_B.Merge1_n4);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_A_TorqDlvdPerf' incorporates:
     *  Merge: '<S395>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_A_TorqDlvdPerf_Value
        (DNDB_ac_B.Merge1_kq);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DMCM_A_HB_VoltSnsCktHi' incorporates:
     *  Merge: '<S396>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DMCM_A_HB_VoltSnsCktHi_Value
        (DNDB_ac_B.Merge1_ko);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DMCM_A_HB_SysVolt' incorporates:
     *  Merge: '<S397>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DMCM_A_HB_SysVolt_Value
        (DNDB_ac_B.Merge1_a4k);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DMCM_A_HB_SysVoltHi' incorporates:
     *  Merge: '<S398>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DMCM_A_HB_SysVoltHi_Value
        (DNDB_ac_B.Merge1_pb);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DMCM_A_PstnSnsrLossTrk' incorporates:
     *  Merge: '<S399>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DMCM_A_PstnSnsrLossTrk_Value
        (DNDB_ac_B.Merge1_o5);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_MCPA_P1B07' incorporates:
     *  Merge: '<S400>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_MCPA_P1B07_Value(DNDB_ac_B.Merge1_d3);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_MCPA_P1B0F' incorporates:
     *  Merge: '<S401>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_MCPA_P1B0F_Value(DNDB_ac_B.Merge1_b0);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_EPSSupply1CktHi' incorporates:
     *  Merge: '<S402>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_EPSSupply1CktHi_Value(DNDB_ac_B.Merge1_be);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_EVWakeup1CktShortGrnd' incorporates:
     *  Merge: '<S403>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_EVWakeup1CktShortGrnd_Value
        (DNDB_ac_B.Merge1_h5);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_IgnSwOnStrtPstnCkt' incorporates:
     *  Merge: '<S404>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_IgnSwOnStrtPstnCkt_Value
        (DNDB_ac_B.Merge1_pn);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_IgnSwRunCrnkPstnCktLo' incorporates:
     *  Merge: '<S405>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_IgnSwRunCrnkPstnCktLo_Value
        (DNDB_ac_B.Merge1_ik);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_IgnSwRunCrnkPstnCktHi' incorporates:
     *  Merge: '<S406>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_IgnSwRunCrnkPstnCktHi_Value
        (DNDB_ac_B.Merge1_c3);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DrMtr_A_IntCMTorqCalPerf' incorporates:
     *  Merge: '<S261>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DrMtr_A_IntCMTorqCalPerf_Value
        (DNDB_ac_B.Merge1_pw);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DMCM_A_InvData_DMCM_B' incorporates:
     *  Merge: '<S407>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DMCM_A_InvData_DMCM_B_Value
        (DNDB_ac_B.Merge1_ai);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DMCM_A_InvDataGenrA_CM' incorporates:
     *  Merge: '<S408>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DMCM_A_InvDataGenrA_CM_Value
        (DNDB_ac_B.Merge1_lh);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DMCM_A_InvDataIDCM' incorporates:
     *  Merge: '<S409>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DMCM_A_InvDataIDCM_Value
        (DNDB_ac_B.Merge1_ob);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DMCM_A_InvDataEVCU' incorporates:
     *  Merge: '<S410>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DMCM_A_InvDataEVCU_Value
        (DNDB_ac_B.Merge1_bm);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DMCM_A_InvDataBPCM' incorporates:
     *  Merge: '<S411>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DMCM_A_InvDataBPCM_Value
        (DNDB_ac_B.Merge1_ksg);

    /* End of Outputs for SubSystem: '<S1>/MCPA_PEGASUS_BlockIndexMngt' */
#endif

    /* End of SignalConversion generated from: '<S1>/MCPA_DTC_Idx1' */

    /* SignalConversion generated from: '<S1>/VeDNDB_e_B21E3_PassFail' incorporates:
     *  Constant: '<Root>/Constant'
     *  Constant: '<Root>/Constant2'
     *  RelationalOperator: '<S7>/Relational Operator'
     *  RelationalOperator: '<S7>/Relational Operator1'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_B22A9_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P06E7_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0A8F_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0AF7_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0C39_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0C3E_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0CF3_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0CF4_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0CF5_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0CF6_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0CFD_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0CFE_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0D21_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0D27_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0D2A_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0D33_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0D37_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0D57_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0D58_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0D59_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0D85_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0E33_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P0E34_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P1503_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P160A_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P1ABC_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P1ABD_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P1B2D_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P1C94_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P1C95_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P1CDD_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P1CDE_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P1CDF_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_P24F0_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_U0074_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_U0293_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_U0594_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_U1814_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_U1819_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_U209E_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_U3501_PassFail'
     *  SignalConversion generated from: '<S1>/VeDNDB_e_U3502_PassFail'
     *  UnitDelay: '<S7>/Unit Delay'
     *  UnitDelay: '<S7>/Unit Delay1'
     */
#if Rte_SysCon_Variant_DNDB_IDCM_PEGASUS

    /* Outputs for Atomic SubSystem: '<S1>/IDCM_PEGASUS_BlockIndexMngt' */
    /* Outputs for Atomic SubSystem: '<S3>/IDCM_PEGASUS_BlockIndexMngt' */
    /* Outputs for Enabled SubSystem: '<S7>/BlocksIndex1' incorporates:
     *  EnablePort: '<S8>/Enable'
     */
    if (((sint32)DNDB_ac_DW.UnitDelay_DSTATE_f) != 0)
    {
        /* Outputs for IfAction SubSystem: '<S10>/P0CF3' incorporates:
         *  ActionPort: '<S12>/Action Port'
         */
        /* Outputs for Enabled SubSystem: '<S12>/Subsystem' incorporates:
         *  EnablePort: '<S42>/Enable'
         */
        /* SwitchCase: '<S10>/SwitchCase' incorporates:
         *  Constant: '<Root>/Constant1'
         *  Constant: '<S12>/Constant Value'
         *  Constant: '<S12>/Constant Value1'
         *  RelationalOperator: '<S12>/E1'
         *  RelationalOperator: '<S12>/E2'
         */
        if (0 == ((sint32)CeDNDB_e_DiagPassd))
        {
            /* Merge: '<S12>/Merge1' incorporates:
             *  Constant: '<S44>/Constant'
             *  SignalConversion generated from: '<S42>/VeDNDB_e_FaultSts_CtrlPilotCkt'
             */
            DNDB_ac_B.Merge1_c5 = CeDFIB_e_Pass;
        }

        /* End of Outputs for SubSystem: '<S12>/Subsystem' */

        /* Outputs for Enabled SubSystem: '<S12>/Subsystem1' incorporates:
         *  EnablePort: '<S43>/Enable'
         */
        if (0 == ((sint32)CeDNDB_e_DiagFaild))
        {
            /* Merge: '<S12>/Merge1' incorporates:
             *  Constant: '<S45>/Constant'
             *  SignalConversion generated from: '<S43>/VeDNDB_e_FaultSts_CtrlPilotCkt'
             */
            DNDB_ac_B.Merge1_c5 = CeDFIB_e_Fail;
        }

        /* End of SwitchCase: '<S10>/SwitchCase' */
        /* End of Outputs for SubSystem: '<S12>/Subsystem1' */
        /* End of Outputs for SubSystem: '<S10>/P0CF3' */
    }

    /* End of Outputs for SubSystem: '<S7>/BlocksIndex1' */

    /* Outputs for Enabled SubSystem: '<S7>/BlocksIndex2' incorporates:
     *  EnablePort: '<S9>/Enable'
     */
    if (((sint32)DNDB_ac_DW.UnitDelay1_DSTATE_k) != 0)
    {
        /* Outputs for IfAction SubSystem: '<S146>/P1ABC' incorporates:
         *  ActionPort: '<S156>/Action Port'
         */
        /* Outputs for Enabled SubSystem: '<S156>/Subsystem' incorporates:
         *  EnablePort: '<S199>/Enable'
         */
        /* SwitchCase: '<S146>/SwitchCase' incorporates:
         *  Constant: '<Root>/Constant3'
         *  Constant: '<S156>/Constant Value'
         *  Constant: '<S156>/Constant Value1'
         *  RelationalOperator: '<S156>/E1'
         *  RelationalOperator: '<S156>/E2'
         */
        if (0 == ((sint32)CeDNDB_e_DiagPassd))
        {
            /* Merge: '<S156>/Merge1' incorporates:
             *  Constant: '<S201>/Constant'
             *  SignalConversion generated from: '<S199>/VeDNDB_e_FaultSts_APM_HVBattSysVoltLo'
             */
            DNDB_ac_B.Merge1_mo = CeDFIB_e_Pass;
        }

        /* End of Outputs for SubSystem: '<S156>/Subsystem' */

        /* Outputs for Enabled SubSystem: '<S156>/Subsystem1' incorporates:
         *  EnablePort: '<S200>/Enable'
         */
        if (0 == ((sint32)CeDNDB_e_DiagFaild))
        {
            /* Merge: '<S156>/Merge1' incorporates:
             *  Constant: '<S202>/Constant'
             *  SignalConversion generated from: '<S200>/VeDNDB_e_FaultSts_APM_HVBattSysVoltLo'
             */
            DNDB_ac_B.Merge1_mo = CeDFIB_e_Fail;
        }

        /* End of SwitchCase: '<S146>/SwitchCase' */
        /* End of Outputs for SubSystem: '<S156>/Subsystem1' */
        /* End of Outputs for SubSystem: '<S146>/P1ABC' */
    }

    /* End of Outputs for SubSystem: '<S7>/BlocksIndex2' */

    /* Update for UnitDelay: '<S7>/Unit Delay' incorporates:
     *  Constant: '<Root>/Constant'
     *  Constant: '<Root>/Constant2'
     *  RelationalOperator: '<S7>/Relational Operator'
     *  RelationalOperator: '<S7>/Relational Operator1'
     *  UnitDelay: '<S7>/Unit Delay1'
     */
    DNDB_ac_DW.UnitDelay_DSTATE_f = 0U;

    /* Update for UnitDelay: '<S7>/Unit Delay1' incorporates:
     *  Constant: '<Root>/Constant2'
     */
    DNDB_ac_DW.UnitDelay1_DSTATE_k = 0U;

    /* End of Outputs for SubSystem: '<S3>/IDCM_PEGASUS_BlockIndexMngt' */

    /* Outport: '<Root>/VeDNDB_e_FaultSts_APM_B21E3' incorporates:
     *  Merge: '<S147>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_APM_B21E3_Value(DNDB_ac_B.Merge1_i3);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_ECUIntPer' incorporates:
     *  Merge: '<S148>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_ECUIntPer_Value(DNDB_ac_B.Merge1_nq);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_SnsrPwrSplyC_CktLo' incorporates:
     *  Merge: '<S11>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_SnsrPwrSplyC_CktLo_Value
        (DNDB_ac_B.Merge1_k3q);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DCtoDCConv_SysPerf' incorporates:
     *  Merge: '<S149>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DCtoDCConv_SysPerf_Value
        (DNDB_ac_B.Merge1_g1);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DCtoDCConv_IntTempTooHi' incorporates:
     *  Merge: '<S150>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DCtoDCConv_IntTempTooHi_Value
        (DNDB_ac_B.Merge1_eym);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DCDConTemSen1Per' incorporates:
     *  Merge: '<S151>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DCDConTemSen1Per_Value(DNDB_ac_B.Merge1_bj);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DCDConTemSen2Per' incorporates:
     *  Merge: '<S152>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DCDConTemSen2Per_Value(DNDB_ac_B.Merge1_op);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_CtrlPilotCkt' incorporates:
     *  Merge: '<S12>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_CtrlPilotCkt_Value(DNDB_ac_B.Merge1_c5);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_CtrlPilotCktPerf' incorporates:
     *  Merge: '<S13>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_CtrlPilotCktPerf_Value(DNDB_ac_B.Merge1_ma);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_CtrlPilotCktLo' incorporates:
     *  Merge: '<S14>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_CtrlPilotCktLo_Value(DNDB_ac_B.Merge1_lj);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_CtrlPilotCktHi' incorporates:
     *  Merge: '<S15>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_CtrlPilotCktHi_Value(DNDB_ac_B.Merge1_og);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_CtrlPilotChrgSwStkOff' incorporates:
     *  Merge: '<S16>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_CtrlPilotChrgSwStkOff_Value
        (DNDB_ac_B.Merge1_mox);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_CtrlPilotChrgSwStkOn' incorporates:
     *  Merge: '<S17>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_CtrlPilotChrgSwStkOn_Value
        (DNDB_ac_B.Merge1_dib);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_ChrgOutVoltLo' incorporates:
     *  Merge: '<S18>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_ChrgOutVoltLo_Value(DNDB_ac_B.Merge1_fmu);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_ChrgInVoltLo' incorporates:
     *  Merge: '<S19>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_ChrgInVoltLo_Value(DNDB_ac_B.Merge1_l2);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_ChrgInCurrHi' incorporates:
     *  Merge: '<S20>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_ChrgInCurrHi_Value(DNDB_ac_B.Merge1_mqk);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DCDC_CurrHigh' incorporates:
     *  Merge: '<S153>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DCDC_CurrHigh_Value(DNDB_ac_B.Merge1_cz);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_HB_CurrHigh' incorporates:
     *  Merge: '<S21>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_HB_CurrHigh_Value(DNDB_ac_B.Merge1_plb);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_ProxCktPerf' incorporates:
     *  Merge: '<S22>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_ProxCktPerf_Value(DNDB_ac_B.Merge1_bk);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_ProxCktLo' incorporates:
     *  Merge: '<S23>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_ProxCktLo_Value(DNDB_ac_B.Merge1_pp);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_ProxCktHi' incorporates:
     *  Merge: '<S24>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_ProxCktHi_Value(DNDB_ac_B.Merge1_bex);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_ChrgOutVoltHi' incorporates:
     *  Merge: '<S25>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_ChrgOutVoltHi_Value(DNDB_ac_B.Merge1_oe);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DCDC_VoltSnsLo' incorporates:
     *  Merge: '<S154>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DCDC_VoltSnsLo_Value(DNDB_ac_B.Merge1_mtr);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DCDC_VoltSnsHi' incorporates:
     *  Merge: '<S155>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DCDC_VoltSnsHi_Value(DNDB_ac_B.Merge1_et);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_CtrlPilotDC_OOR' incorporates:
     *  Merge: '<S26>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_CtrlPilotDC_OOR_Value(DNDB_ac_B.Merge1_fj);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_OBCM_OvrTemp' incorporates:
     *  Merge: '<S27>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_OBCM_OvrTemp_Value(DNDB_ac_B.Merge1_lpw);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_APM_HVBattSysVoltLo' incorporates:
     *  Merge: '<S156>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_APM_HVBattSysVoltLo_Value
        (DNDB_ac_B.Merge1_mo);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_APM_HVBattSysVoltHi' incorporates:
     *  Merge: '<S157>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_APM_HVBattSysVoltHi_Value
        (DNDB_ac_B.Merge1_fbb);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_OBCMCntrlSysShtDwn' incorporates:
     *  Merge: '<S28>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_OBCMCntrlSysShtDwn_Value
        (DNDB_ac_B.Merge1_l1);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_PwrSupply3CktLo' incorporates:
     *  Merge: '<S158>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_PwrSupply3CktLo_Value(DNDB_ac_B.Merge1_hd);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_PwrSupply3CktHi' incorporates:
     *  Merge: '<S159>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_PwrSupply3CktHi_Value(DNDB_ac_B.Merge1_lp);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_OBCMWkUpCktOpn' incorporates:
     *  Merge: '<S29>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_OBCMWkUpCktOpn_Value(DNDB_ac_B.Merge1_bq);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_OBCMWkUpCktHi' incorporates:
     *  Merge: '<S30>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_OBCMWkUpCktHi_Value(DNDB_ac_B.Merge1_oz);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_OBCMWkUpCktLo' incorporates:
     *  Merge: '<S31>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_OBCMWkUpCktLo_Value(DNDB_ac_B.Merge1_ff);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_CtrlModWkUpCktLo' incorporates:
     *  Merge: '<S32>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_CtrlModWkUpCktLo_Value
        (DNDB_ac_B.Merge1_bwc);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_CommBus_B_Off' incorporates:
     *  Merge: '<S33>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_CommBus_B_Off_Value(DNDB_ac_B.Merge1_ont);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_LostCommHPCM' incorporates:
     *  Merge: '<S34>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_LostCommHPCM_Value(DNDB_ac_B.Merge1_fc);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_InvData_HPCM' incorporates:
     *  Merge: '<S35>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_InvData_HPCM_Value(DNDB_ac_B.Merge1_cy);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_OBCM_LostComm_BECM' incorporates:
     *  Merge: '<S160>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_OBCM_LostComm_BECM_Value
        (DNDB_ac_B.Merge1_ask);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_OBCM_LostComm_ORC' incorporates:
     *  Merge: '<S36>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_OBCM_LostComm_ORC_Value
        (DNDB_ac_B.Merge1_pm);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_OBCM_InvData_BECM' incorporates:
     *  Merge: '<S37>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_OBCM_InvData_BECM_Value
        (DNDB_ac_B.Merge1_mn);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_ConModInpPowACirLow' incorporates:
     *  Merge: '<S161>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_ConModInpPowACirLow_Value
        (DNDB_ac_B.Merge1_m1);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_ConModInpPowACirHig' incorporates:
     *  Merge: '<S162>/Merge1'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_ConModInpPowACirHig_Value
        (DNDB_ac_B.Merge1_bz);

    /* End of Outputs for SubSystem: '<S1>/IDCM_PEGASUS_BlockIndexMngt' */
#endif

    /* End of SignalConversion generated from: '<S1>/VeDNDB_e_B21E3_PassFail' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' */
}

/* Model initialize function */
FUNC(void, DNDB_CODE) DNDB_ac_Init(void)
{
    /* Outputs for Atomic SubSystem: '<Root>/Init' */
#if Rte_SysCon_Variant_DNDB_SGCP_PEGASUS

    /* Outputs for Atomic SubSystem: '<S2>/SGCP_PEGASUS_BlockIndexInit' */
    /* Outputs for Atomic SubSystem: '<S1102>/SGCP_PEGASUS_BlockIndexInit' */
    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenCntrlMode' incorporates:
     *  Constant: '<S1265>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenCntrlMode_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DrMtr_C_IntCMTorqCalPerf' incorporates:
     *  Constant: '<S1266>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DrMtr_C_IntCMTorqCalPerf_Value
        (CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_CM_VehSpdPerf' incorporates:
     *  Constant: '<S1277>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_CM_VehSpdPerf_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_CM_IntrnlTmpSenr_C_Perf' incorporates:
     *  Constant: '<S1288>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_CM_IntrnlTmpSenr_C_Perf_Value
        (CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_SnsrRefVolt3CktLo' incorporates:
     *  Constant: '<S1290>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_SnsrRefVolt3CktLo_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_SnsrRefVolt3CktHi' incorporates:
     *  Constant: '<S1291>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_SnsrRefVolt3CktHi_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrTempSnsrPerf' incorporates:
     *  Constant: '<S1292>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrTempSnsrPerf_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrTempSnsrCktLo' incorporates:
     *  Constant: '<S1293>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrTempSnsrCktLo_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrTempSnsrCktHi' incorporates:
     *  Constant: '<S1294>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrTempSnsrCktHi_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrOvrtemp' incorporates:
     *  Constant: '<S1295>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrOvrtemp_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrInvrtTempSnsr2_CktHi' incorporates:
     *  Constant: '<S1267>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrInvrtTempSnsr2_CktHi_Value
        (CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrInvrtTempSnsr3_CktLo' incorporates:
     *  Constant: '<S1268>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrInvrtTempSnsr3_CktLo_Value
        (CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrInvrtTempSnsr3_CktHi' incorporates:
     *  Constant: '<S1269>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrInvrtTempSnsr3_CktHi_Value
        (CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrInvrtTempSnsr_CktHi' incorporates:
     *  Constant: '<S1270>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrInvrtTempSnsr_CktHi_Value
        (CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrInvrtTempSnsr_CktLo' incorporates:
     *  Constant: '<S1271>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrInvrtTempSnsr_CktLo_Value
        (CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrInvrtTempSnsr_CktPerf' incorporates:
     *  Constant: '<S1272>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrInvrtTempSnsr_CktPerf_Value
        (CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrInvrtTempSnsr2_CktLo' incorporates:
     *  Constant: '<S1273>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrInvrtTempSnsr2_CktLo_Value
        (CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrInvrtTempSnsr_Ckt' incorporates:
     *  Constant: '<S1274>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrInvrtTempSnsr_Ckt_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrInvrtTempSnsr2_Ckt' incorporates:
     *  Constant: '<S1275>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrInvrtTempSnsr2_Ckt_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_Genr_PU_CurrSnsr_CktPerf' incorporates:
     *  Constant: '<S1276>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_Genr_PU_CurrSnsr_CktPerf_Value
        (CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_Genr_PU_CurrSnsr_CktLo' incorporates:
     *  Constant: '<S1278>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_Genr_PU_CurrSnsr_CktLo_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_Genr_PU_CurrSnsr_CktHi' incorporates:
     *  Constant: '<S1279>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_Genr_PU_CurrSnsr_CktHi_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_Genr_PV_CurrSnsr_CktPerf' incorporates:
     *  Constant: '<S1280>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_Genr_PV_CurrSnsr_CktPerf_Value
        (CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_Genr_PV_CurrSnsr_CktLo' incorporates:
     *  Constant: '<S1281>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_Genr_PV_CurrSnsr_CktLo_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_Genr_PV_CurrSnsr_CktHi' incorporates:
     *  Constant: '<S1282>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_Genr_PV_CurrSnsr_CktHi_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_Genr_PW_CurrSnsr_CktPerf' incorporates:
     *  Constant: '<S1283>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_Genr_PW_CurrSnsr_CktPerf_Value
        (CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_Genr_PW_CurrSnsr_CktLo' incorporates:
     *  Constant: '<S1284>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_Genr_PW_CurrSnsr_CktLo_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_Genr_PW_CurrSnsr_CktHi' incorporates:
     *  Constant: '<S1285>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_Genr_PW_CurrSnsr_CktHi_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrPUVW_CurrSnsr_Corr' incorporates:
     *  Constant: '<S1286>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrPUVW_CurrSnsr_Corr_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_Genr_PUVW_Ckt_Opn' incorporates:
     *  Constant: '<S1287>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_Genr_PUVW_Ckt_Opn_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrCurrHi' incorporates:
     *  Constant: '<S1289>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrCurrHi_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrPstnSnsrCkt' incorporates:
     *  Constant: '<S1296>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrPstnSnsrCkt_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrPosSenrcktIntermt' incorporates:
     *  Constant: '<S1297>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrPosSenrcktIntermt_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_Genr_Invtr_PwrSply1_CktOpn' incorporates:
     *  Constant: '<S1298>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_Genr_Invtr_PwrSply1_CktOpn_Value
        (CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrTrqDlvdPerf' incorporates:
     *  Constant: '<S1299>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrTrqDlvdPerf_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_Genr_Pos_ExcedLrn_Lim' incorporates:
     *  Constant: '<S1300>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_Genr_Pos_ExcedLrn_Lim_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrVoltSenCktAHi' incorporates:
     *  Constant: '<S1301>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrVoltSenCktAHi_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrVoltSenCktAPerf' incorporates:
     *  Constant: '<S1302>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrVoltSenCktAPerf_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrHiVolBattSysVolHi' incorporates:
     *  Constant: '<S1303>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrHiVolBattSysVolHi_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrHiVolBattSysVolLo' incorporates:
     *  Constant: '<S1304>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrHiVolBattSysVolLo_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrPstnSnsrPerf' incorporates:
     *  Constant: '<S1305>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrPstnSnsrPerf_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_HB_WkupCntrl_4_OpCktLo' incorporates:
     *  Constant: '<S1306>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_HB_WkupCntrl_4_OpCktLo_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_HB_Sys_C_VoltHi' incorporates:
     *  Constant: '<S1307>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_HB_Sys_C_VoltHi_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrPstnSnsrCktOvrSpd' incorporates:
     *  Constant: '<S1308>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrPstnSnsrCktOvrSpd_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrSysPerf' incorporates:
     *  Constant: '<S1309>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrSysPerf_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrInvrtTempSnsr2_CktPerf' incorporates:
     *  Constant: '<S1310>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrInvrtTempSnsr2_CktPerf_Value
        (CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrInvrtTempSnsr3_CktPerf' incorporates:
     *  Constant: '<S1311>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrInvrtTempSnsr3_CktPerf_Value
        (CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_EVWakeup1CktOpen' incorporates:
     *  Constant: '<S1312>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_EVWakeup1CktOpen_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_SnsrPwrSplyC_CktHi' incorporates:
     *  Constant: '<S1313>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_SnsrPwrSplyC_CktHi_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenInv_PU_OvrTemp' incorporates:
     *  Constant: '<S1314>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenInv_PU_OvrTemp_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_Genr_PosSnsr_NotLrnd' incorporates:
     *  Constant: '<S1315>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_Genr_PosSnsr_NotLrnd_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrA_CM_InvDataDMCM_A' incorporates:
     *  Constant: '<S1316>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrA_CM_InvDataDMCM_A_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrA_CM_InvDataDMCM_B' incorporates:
     *  Constant: '<S1317>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrA_CM_InvDataDMCM_B_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrA_CM_InvDataIDCM' incorporates:
     *  Constant: '<S1318>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrA_CM_InvDataIDCM_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrA_CM_InvDataEVCU' incorporates:
     *  Constant: '<S1319>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrA_CM_InvDataEVCU_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_GenrA_CM_InvDataBPCM' incorporates:
     *  Constant: '<S1320>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_GenrA_CM_InvDataBPCM_Value(CeDFIB_e_Init);

    /* End of Outputs for SubSystem: '<S1102>/SGCP_PEGASUS_BlockIndexInit' */
    /* End of Outputs for SubSystem: '<S2>/SGCP_PEGASUS_BlockIndexInit' */
#endif

#if Rte_SysCon_Variant_DNDB_MCPB_PEGASUS

    /* Outputs for Atomic SubSystem: '<S2>/MCPB_PEGASUS_BlockIndexInit' */
    /* Outputs for Atomic SubSystem: '<S1101>/MCPB_PEGASUS_BlockIndexInit' */
    /* Outport: '<Root>/VeDNDB_e_FaultSts_DrvMtrB_CM_Perf' incorporates:
     *  Constant: '<S1205>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DrvMtrB_CM_Perf_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DrMtr_B_IntCMTorqCalPerf' incorporates:
     *  Constant: '<S1206>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DrMtr_B_IntCMTorqCalPerf_Value
        (CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_VSS_B_Perf' incorporates:
     *  Constant: '<S1217>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_VSS_B_Perf_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_IntrnlTempSnsrB_Perf' incorporates:
     *  Constant: '<S1228>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_IntrnlTempSnsrB_Perf_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_SnsrRefVolt2CktLo' incorporates:
     *  Constant: '<S1230>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_SnsrRefVolt2CktLo_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_SnsrRefVolt2CktHi' incorporates:
     *  Constant: '<S1231>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_SnsrRefVolt2CktHi_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DrvMtrB_TempSnsrPerf' incorporates:
     *  Constant: '<S1232>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DrvMtrB_TempSnsrPerf_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DrvMtrB_TempSnsrCktLo' incorporates:
     *  Constant: '<S1233>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DrvMtrB_TempSnsrCktLo_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DrvMtrB_TempSnsrCktHi' incorporates:
     *  Constant: '<S1234>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DrvMtrB_TempSnsrCktHi_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DrvMtrB_Ovrtemp' incorporates:
     *  Constant: '<S1235>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DrvMtrB_Ovrtemp_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_InvTempSnsrD_CktHi' incorporates:
     *  Constant: '<S1207>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_InvTempSnsrD_CktHi_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_InvTempSnsrF_CktLo' incorporates:
     *  Constant: '<S1208>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_InvTempSnsrF_CktLo_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_InvTempSnsrF_CktHi' incorporates:
     *  Constant: '<S1209>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_InvTempSnsrF_CktHi_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_InvTempSnsrB_CktHi' incorporates:
     *  Constant: '<S1210>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_InvTempSnsrB_CktHi_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_InvTempSnsrB_CktLo' incorporates:
     *  Constant: '<S1211>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_InvTempSnsrB_CktLo_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_InvTempSnsrB_Perf' incorporates:
     *  Constant: '<S1212>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_InvTempSnsrB_Perf_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_InvTempSnsrD_CktLo' incorporates:
     *  Constant: '<S1213>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_InvTempSnsrD_CktLo_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_MtrInvTempSnsr3Ckt' incorporates:
     *  Constant: '<S1214>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_MtrInvTempSnsr3Ckt_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_MtrInvTempSnsr4Ckt' incorporates:
     *  Constant: '<S1215>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_MtrInvTempSnsr4Ckt_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_B_PU_CurrSnsrPerf' incorporates:
     *  Constant: '<S1216>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_B_PU_CurrSnsrPerf_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_B_PU_CurrSnsrCktLo' incorporates:
     *  Constant: '<S1218>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_B_PU_CurrSnsrCktLo_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_B_PU_CurrSnsrCktHi' incorporates:
     *  Constant: '<S1219>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_B_PU_CurrSnsrCktHi_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_B_PV_CurrSnsrPerf' incorporates:
     *  Constant: '<S1220>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_B_PV_CurrSnsrPerf_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_B_PV_CurrSnsrCktLo' incorporates:
     *  Constant: '<S1221>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_B_PV_CurrSnsrCktLo_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_B_PV_CurrSnsrCktHi' incorporates:
     *  Constant: '<S1222>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_B_PV_CurrSnsrCktHi_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_B_PW_CurrSnsrPerf' incorporates:
     *  Constant: '<S1223>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_B_PW_CurrSnsrPerf_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_B_PW_CurrSnsrCktLo' incorporates:
     *  Constant: '<S1224>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_B_PW_CurrSnsrCktLo_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_B_PW_CurrSnsrCktHi' incorporates:
     *  Constant: '<S1225>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_B_PW_CurrSnsrCktHi_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_B_PUVW_Corr' incorporates:
     *  Constant: '<S1226>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_B_PUVW_Corr_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_B_PUVW_Ckt' incorporates:
     *  Constant: '<S1227>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_B_PUVW_Ckt_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_B_CurrHi' incorporates:
     *  Constant: '<S1229>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_B_CurrHi_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DrvMtrB_PstnSnsrCkt' incorporates:
     *  Constant: '<S1239>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DrvMtrB_PstnSnsrCkt_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DrvMtrB_PstnSnsrCktInt' incorporates:
     *  Constant: '<S1240>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DrvMtrB_PstnSnsrCktInt_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_B_I_PwrSplyCkt' incorporates:
     *  Constant: '<S1241>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_B_I_PwrSplyCkt_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_B_TorqDlvdPerf' incorporates:
     *  Constant: '<S1242>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_B_TorqDlvdPerf_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_MCPB_P1B10' incorporates:
     *  Constant: '<S1243>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_MCPB_P1B10_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DMCM_B_HB_VoltSnsCktHi' incorporates:
     *  Constant: '<S1244>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DMCM_B_HB_VoltSnsCktHi_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DMCM_B_HB_SysVolt' incorporates:
     *  Constant: '<S1245>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DMCM_B_HB_SysVolt_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DMCM_B_HB_SysVoltHi' incorporates:
     *  Constant: '<S1246>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DMCM_B_HB_SysVoltHi_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_MCPB_P1B08' incorporates:
     *  Constant: '<S1247>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_MCPB_P1B08_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DMCM_B_PstnSnsrLossTrk' incorporates:
     *  Constant: '<S1248>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DMCM_B_PstnSnsrLossTrk_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_HybWkpCntrl3OpCktShttoGnd' incorporates:
     *  Constant: '<S1249>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_HybWkpCntrl3OpCktShttoGnd_Value
        (CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_HB_Sys_B_VoltHi' incorporates:
     *  Constant: '<S1250>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_HB_Sys_B_VoltHi_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DrvMtrB_PstnSnsrOvrspd' incorporates:
     *  Constant: '<S1251>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DrvMtrB_PstnSnsrOvrspd_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DrvMtrB_InvtrPerf' incorporates:
     *  Constant: '<S1252>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DrvMtrB_InvtrPerf_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_EPSSupply2CktHi' incorporates:
     *  Constant: '<S1253>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_EPSSupply2CktHi_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_B_I_PU_Ovrtemp' incorporates:
     *  Constant: '<S1254>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_B_I_PU_Ovrtemp_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_B_PstnNotLrnd' incorporates:
     *  Constant: '<S1255>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_B_PstnNotLrnd_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DMCM_B_InvData_DMCM_A' incorporates:
     *  Constant: '<S1256>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DMCM_B_InvData_DMCM_A_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DMCM_B_InvDataGenrA_CM' incorporates:
     *  Constant: '<S1257>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DMCM_B_InvDataGenrA_CM_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DMCM_B_InvDataIDCM' incorporates:
     *  Constant: '<S1258>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DMCM_B_InvDataIDCM_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DMCM_B_InvDataEVCU' incorporates:
     *  Constant: '<S1259>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DMCM_B_InvDataEVCU_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DMCM_B_InvDataBPCM' incorporates:
     *  Constant: '<S1260>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DMCM_B_InvDataBPCM_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_ParkPawlPS1CP' incorporates:
     *  Constant: '<S1261>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_ParkPawlPS1CP_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_PPawlSysFail' incorporates:
     *  Constant: '<S1262>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_PPawlSysFail_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_PPawlMtrStk' incorporates:
     *  Constant: '<S1263>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_PPawlMtrStk_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_CurrSnsrCktLo' incorporates:
     *  Constant: '<S1236>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_CurrSnsrCktLo_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_CurrSnsrCktHi' incorporates:
     *  Constant: '<S1237>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_CurrSnsrCktHi_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_PPawlMtrCurrPerf' incorporates:
     *  Constant: '<S1238>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_PPawlMtrCurrPerf_Value(CeDFIB_e_Init);

    /* End of Outputs for SubSystem: '<S1101>/MCPB_PEGASUS_BlockIndexInit' */
    /* End of Outputs for SubSystem: '<S2>/MCPB_PEGASUS_BlockIndexInit' */
#endif

#if Rte_SysCon_Variant_DNDB_MCPA_PEGASUS

    /* Outputs for Atomic SubSystem: '<S2>/MCPA_PEGASUS_BlockIndexInit' */
    /* Outputs for Atomic SubSystem: '<S1100>/MCPA_PEGASUS_BlockIndexInit' */
    /* Outport: '<Root>/VeDNDB_e_FaultSts_DrvMtrA_CM_Perf' incorporates:
     *  Constant: '<S1148>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DrvMtrA_CM_Perf_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DrMtr_A_IntCMTorqCalPerf' incorporates:
     *  Constant: '<S1149>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DrMtr_A_IntCMTorqCalPerf_Value
        (CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_VSS_A_Perf' incorporates:
     *  Constant: '<S1160>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_VSS_A_Perf_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_InternalTempSnsrPerf' incorporates:
     *  Constant: '<S1171>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_InternalTempSnsrPerf_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_SnsrRefVolt1CktLo' incorporates:
     *  Constant: '<S1173>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_SnsrRefVolt1CktLo_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_SnsrRefVolt1CktHi' incorporates:
     *  Constant: '<S1174>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_SnsrRefVolt1CktHi_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DrvMtrA_TempSnsrPerf' incorporates:
     *  Constant: '<S1175>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DrvMtrA_TempSnsrPerf_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DrvMtrA_TempSnsrCktLo' incorporates:
     *  Constant: '<S1176>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DrvMtrA_TempSnsrCktLo_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DrvMtrA_TempSnsrCktHi' incorporates:
     *  Constant: '<S1177>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DrvMtrA_TempSnsrCktHi_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DrvMtrA_Ovrtemp' incorporates:
     *  Constant: '<S1178>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DrvMtrA_Ovrtemp_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_InvTempSnsrC_CktHi' incorporates:
     *  Constant: '<S1150>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_InvTempSnsrC_CktHi_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_InvTempSnsrE_CktLo' incorporates:
     *  Constant: '<S1151>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_InvTempSnsrE_CktLo_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_InvTempSnsrE_CktHi' incorporates:
     *  Constant: '<S1152>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_InvTempSnsrE_CktHi_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_InvTempSnsrA_CktHi' incorporates:
     *  Constant: '<S1153>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_InvTempSnsrA_CktHi_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_InvTempSnsrA_CktLo' incorporates:
     *  Constant: '<S1154>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_InvTempSnsrA_CktLo_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_InvTempSnsrA_Perf' incorporates:
     *  Constant: '<S1155>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_InvTempSnsrA_Perf_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_InvTempSnsrC_CktLo' incorporates:
     *  Constant: '<S1156>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_InvTempSnsrC_CktLo_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_MtrInvTempSnsr1Ckt' incorporates:
     *  Constant: '<S1157>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_MtrInvTempSnsr1Ckt_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_MtrInvTempSnsr2Ckt' incorporates:
     *  Constant: '<S1158>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_MtrInvTempSnsr2Ckt_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_A_PU_CurrSnsrPerf' incorporates:
     *  Constant: '<S1159>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_A_PU_CurrSnsrPerf_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_A_PU_CurrSnsrCktLo' incorporates:
     *  Constant: '<S1161>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_A_PU_CurrSnsrCktLo_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_A_PU_CurrSnsrCktHi' incorporates:
     *  Constant: '<S1162>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_A_PU_CurrSnsrCktHi_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_A_PV_CurrSnsrPerf' incorporates:
     *  Constant: '<S1163>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_A_PV_CurrSnsrPerf_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_A_PV_CurrSnsrCktLo' incorporates:
     *  Constant: '<S1164>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_A_PV_CurrSnsrCktLo_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_A_PV_CurrSnsrCktHi' incorporates:
     *  Constant: '<S1165>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_A_PV_CurrSnsrCktHi_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_A_PW_CurrSnsrPerf' incorporates:
     *  Constant: '<S1166>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_A_PW_CurrSnsrPerf_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_A_PW_CurrSnsrCktLo' incorporates:
     *  Constant: '<S1167>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_A_PW_CurrSnsrCktLo_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_A_PW_CurrSnsrCktHi' incorporates:
     *  Constant: '<S1168>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_A_PW_CurrSnsrCktHi_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_A_PUVW_Corr' incorporates:
     *  Constant: '<S1169>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_A_PUVW_Corr_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_A_PUVW_Ckt' incorporates:
     *  Constant: '<S1170>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_A_PUVW_Ckt_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_A_CurrHi' incorporates:
     *  Constant: '<S1172>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_A_CurrHi_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DrvMtrA_PstnSnsrCkt' incorporates:
     *  Constant: '<S1179>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DrvMtrA_PstnSnsrCkt_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DrvMtrA_PstnSnsrCktInt' incorporates:
     *  Constant: '<S1180>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DrvMtrA_PstnSnsrCktInt_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_A_I_PwrSplyCkt' incorporates:
     *  Constant: '<S1181>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_A_I_PwrSplyCkt_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_A_TorqDlvdPerf' incorporates:
     *  Constant: '<S1182>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_A_TorqDlvdPerf_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_MCPA_P1B0F' incorporates:
     *  Constant: '<S1183>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_MCPA_P1B0F_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DMCM_A_HB_VoltSnsCktHi' incorporates:
     *  Constant: '<S1184>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DMCM_A_HB_VoltSnsCktHi_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DMCM_A_HB_SysVolt' incorporates:
     *  Constant: '<S1185>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DMCM_A_HB_SysVolt_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DMCM_A_HB_SysVoltHi' incorporates:
     *  Constant: '<S1186>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DMCM_A_HB_SysVoltHi_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_MCPA_P1B07' incorporates:
     *  Constant: '<S1187>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_MCPA_P1B07_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DMCM_A_PstnSnsrLossTrk' incorporates:
     *  Constant: '<S1188>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DMCM_A_PstnSnsrLossTrk_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_EVWakeup1CktShortGrnd' incorporates:
     *  Constant: '<S1189>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_EVWakeup1CktShortGrnd_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_HB_SysVoltHi' incorporates:
     *  Constant: '<S1190>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_HB_SysVoltHi_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DrvMtrA_PstnSnsrOvrspd' incorporates:
     *  Constant: '<S1191>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DrvMtrA_PstnSnsrOvrspd_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DrvMtrA_InvtrPerf' incorporates:
     *  Constant: '<S1192>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DrvMtrA_InvtrPerf_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_EPSSupply1CktHi' incorporates:
     *  Constant: '<S1193>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_EPSSupply1CktHi_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_A_I_PU_Ovrtemp' incorporates:
     *  Constant: '<S1194>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_A_I_PU_Ovrtemp_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DM_A_PstnNotLrnd' incorporates:
     *  Constant: '<S1195>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DM_A_PstnNotLrnd_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_IgnSwOnStrtPstnCkt' incorporates:
     *  Constant: '<S1196>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_IgnSwOnStrtPstnCkt_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_IgnSwRunCrnkPstnCktLo' incorporates:
     *  Constant: '<S1197>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_IgnSwRunCrnkPstnCktLo_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_IgnSwRunCrnkPstnCktHi' incorporates:
     *  Constant: '<S1198>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_IgnSwRunCrnkPstnCktHi_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DMCM_A_InvData_DMCM_B' incorporates:
     *  Constant: '<S1199>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DMCM_A_InvData_DMCM_B_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DMCM_A_InvDataGenrA_CM' incorporates:
     *  Constant: '<S1200>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DMCM_A_InvDataGenrA_CM_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DMCM_A_InvDataIDCM' incorporates:
     *  Constant: '<S1201>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DMCM_A_InvDataIDCM_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DMCM_A_InvDataEVCU' incorporates:
     *  Constant: '<S1202>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DMCM_A_InvDataEVCU_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DMCM_A_InvDataBPCM' incorporates:
     *  Constant: '<S1203>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DMCM_A_InvDataBPCM_Value(CeDFIB_e_Init);

    /* End of Outputs for SubSystem: '<S1100>/MCPA_PEGASUS_BlockIndexInit' */
    /* End of Outputs for SubSystem: '<S2>/MCPA_PEGASUS_BlockIndexInit' */
#endif

#if Rte_SysCon_Variant_DNDB_IDCM_PEGASUS

    /* Outputs for Atomic SubSystem: '<S2>/IDCM_PEGASUS_BlockIndexInit' */
    /* Outputs for Atomic SubSystem: '<S1099>/IDCM_PEGASUS_BlockIndexInit' */
    /* Outport: '<Root>/VeDNDB_e_FaultSts_CtrlPilotCkt' incorporates:
     *  Constant: '<S1104>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_CtrlPilotCkt_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_CtrlPilotCktPerf' incorporates:
     *  Constant: '<S1105>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_CtrlPilotCktPerf_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_CtrlPilotCktLo' incorporates:
     *  Constant: '<S1116>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_CtrlPilotCktLo_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_CtrlPilotCktHi' incorporates:
     *  Constant: '<S1124>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_CtrlPilotCktHi_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_CtrlPilotChrgSwStkOff' incorporates:
     *  Constant: '<S1125>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_CtrlPilotChrgSwStkOff_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_CtrlPilotChrgSwStkOn' incorporates:
     *  Constant: '<S1126>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_CtrlPilotChrgSwStkOn_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_ChrgOutVoltLo' incorporates:
     *  Constant: '<S1127>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_ChrgOutVoltLo_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_ChrgInVoltLo' incorporates:
     *  Constant: '<S1128>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_ChrgInVoltLo_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_ChrgInCurrHi' incorporates:
     *  Constant: '<S1129>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_ChrgInCurrHi_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_ProxCktPerf' incorporates:
     *  Constant: '<S1130>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_ProxCktPerf_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_ProxCktLo' incorporates:
     *  Constant: '<S1106>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_ProxCktLo_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_ProxCktHi' incorporates:
     *  Constant: '<S1107>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_ProxCktHi_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_ChrgOutVoltHi' incorporates:
     *  Constant: '<S1108>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_ChrgOutVoltHi_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_CtrlPilotDC_OOR' incorporates:
     *  Constant: '<S1109>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_CtrlPilotDC_OOR_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_OBCM_OvrTemp' incorporates:
     *  Constant: '<S1110>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_OBCM_OvrTemp_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_CtrlModWkUpCktLo' incorporates:
     *  Constant: '<S1111>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_CtrlModWkUpCktLo_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_OBCMWkUpCktOpn' incorporates:
     *  Constant: '<S1112>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_OBCMWkUpCktOpn_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_OBCMWkUpCktLo' incorporates:
     *  Constant: '<S1113>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_OBCMWkUpCktLo_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_OBCMWkUpCktHi' incorporates:
     *  Constant: '<S1114>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_OBCMWkUpCktHi_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_CommBus_B_Off' incorporates:
     *  Constant: '<S1115>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_CommBus_B_Off_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_LostCommHPCM' incorporates:
     *  Constant: '<S1117>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_LostCommHPCM_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_OBCM_LostComm_ORC' incorporates:
     *  Constant: '<S1118>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_OBCM_LostComm_ORC_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_OBCM_InvData_BECM' incorporates:
     *  Constant: '<S1119>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_OBCM_InvData_BECM_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_InvData_HPCM' incorporates:
     *  Constant: '<S1120>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_InvData_HPCM_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_OBCMCntrlSysShtDwn' incorporates:
     *  Constant: '<S1121>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_OBCMCntrlSysShtDwn_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_HB_CurrHigh' incorporates:
     *  Constant: '<S1122>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_HB_CurrHigh_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_SnsrPwrSplyC_CktLo' incorporates:
     *  Constant: '<S1123>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_SnsrPwrSplyC_CktLo_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_APM_HVBattSysVoltLo' incorporates:
     *  Constant: '<S1131>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_APM_HVBattSysVoltLo_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_APM_HVBattSysVoltHi' incorporates:
     *  Constant: '<S1132>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_APM_HVBattSysVoltHi_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DCtoDCConv_SysPerf' incorporates:
     *  Constant: '<S1133>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DCtoDCConv_SysPerf_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DCtoDCConv_IntTempTooHi' incorporates:
     *  Constant: '<S1134>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DCtoDCConv_IntTempTooHi_Value
        (CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DCDConTemSen1Per' incorporates:
     *  Constant: '<S1135>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DCDConTemSen1Per_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DCDConTemSen2Per' incorporates:
     *  Constant: '<S1136>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DCDConTemSen2Per_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DCDC_VoltSnsLo' incorporates:
     *  Constant: '<S1137>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DCDC_VoltSnsLo_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DCDC_VoltSnsHi' incorporates:
     *  Constant: '<S1138>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DCDC_VoltSnsHi_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_APM_B21E3' incorporates:
     *  Constant: '<S1139>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_APM_B21E3_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_OBCM_LostComm_BECM' incorporates:
     *  Constant: '<S1140>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_OBCM_LostComm_BECM_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_ConModInpPowACirLow' incorporates:
     *  Constant: '<S1141>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_ConModInpPowACirLow_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_ConModInpPowACirHig' incorporates:
     *  Constant: '<S1142>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_ConModInpPowACirHig_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_DCDC_CurrHigh' incorporates:
     *  Constant: '<S1143>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_DCDC_CurrHigh_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_PwrSupply3CktLo' incorporates:
     *  Constant: '<S1144>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_PwrSupply3CktLo_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_PwrSupply3CktHi' incorporates:
     *  Constant: '<S1145>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_PwrSupply3CktHi_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDNDB_e_FaultSts_ECUIntPer' incorporates:
     *  Constant: '<S1146>/Constant'
     */
    (void)Rte_Write_VeDNDB_e_FaultSts_ECUIntPer_Value(CeDFIB_e_Init);

    /* End of Outputs for SubSystem: '<S1099>/IDCM_PEGASUS_BlockIndexInit' */
    /* End of Outputs for SubSystem: '<S2>/IDCM_PEGASUS_BlockIndexInit' */
#endif

    /* End of Outputs for SubSystem: '<Root>/Init' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
