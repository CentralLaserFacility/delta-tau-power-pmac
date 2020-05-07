#ifndef pmacControllerParamSet_H
#define pmacControllerParamSet_H

#include "asynMotorControllerParamSet.h"

#define PMAC_C_FirstParamString           "PMAC_C_FIRSTPARAM"
#define PMAC_C_LastParamString            "PMAC_C_LASTPARAM"
#define PMAC_C_PollAllNowString           "PMAC_C_POLLALLNOW"
#define PMAC_C_StopAllString              "PMAC_C_STOPALL"
#define PMAC_C_KillAllString              "PMAC_C_KILLALL"
#define PMAC_C_GlobalStatusString         "PMAC_C_GLOBALSTATUS"
#define PMAC_C_CommsErrorString           "PMAC_C_COMMSERROR"
#define PMAC_C_FeedRateString             "PMAC_C_FEEDRATE"
#define PMAC_C_FeedRateLimitString        "PMAC_C_FEEDRATE_LIMIT"
#define PMAC_C_FeedRatePollString         "PMAC_C_FEEDRATE_POLL"
#define PMAC_C_FeedRateProblemString      "PMAC_C_FEEDRATE_PROBLEM"
#define PMAC_C_FeedRateCSString           "PMAC_C_FEEDRATE_CS"
#define PMAC_C_CoordSysGroup              "PMAC_C_COORDINATE_SYS_GROUP"
#define PMAC_C_GroupCSPortString          "PMAC_C_GROUP_CS_PORT"
#define PMAC_C_GroupCSPortRBVString       "PMAC_C_GROUP_CS_PORT_RBV"
#define PMAC_C_GroupAssignString          "PMAC_C_GROUP_ASSIGN"
#define PMAC_C_GroupAssignRBVString       "PMAC_C_GROUP_ASSIGN_RBV"
#define PMAC_C_GroupExecuteString         "PMAC_C_GROUP_EXECUTE"
#define PMAC_C_DebugLevelString           "PMAC_C_DEBUG_LEVEL"
#define PMAC_C_DebugAxisString            "PMAC_C_DEBUG_AXIS"
#define PMAC_C_DebugCSString              "PMAC_C_DEBUG_CS"
#define PMAC_C_DebugCmdString             "PMAC_C_DEBUG_CMD"
#define PMAC_C_DisablePollingString       "PMAC_C_DEBUG_POLL_OFF"
#define PMAC_C_FastUpdateTimeString       "PMAC_C_FAST_UPDATE_TIME"
#define PMAC_C_CpuUsageString             "PMAC_C_CPU_USAGE"
#define PMAC_C_AxisCSString               "PMAC_C_AXIS_CS"
#define PMAC_C_AxisReadonlyString         "PMAC_C_AXIS_READONLY"
#define PMAC_C_WriteCmdString             "PMAC_C_WRITE_CMD"
#define PMAC_C_KillAxisString             "PMAC_C_KILL_AXIS"
#define PMAC_C_PLCBits00String            "PMAC_C_PLC_BITS00"
#define PMAC_C_PLCBits01String            "PMAC_C_PLC_BITS01"
#define PMAC_C_StatusBits01String         "PMAC_C_STATUS_BITS01"
#define PMAC_C_StatusBits02String         "PMAC_C_STATUS_BITS02"
#define PMAC_C_StatusBits03String         "PMAC_C_STATUS_BITS03"
#define PMAC_C_GpioInputsString           "PMAC_C_GPIO_INPUTS"
#define PMAC_C_GpioOutputsString          "PMAC_C_GPIO_OUTPUTS"
#define PMAC_C_ProgBitsString             "PMAC_C_PROG_BITS"
#define PMAC_C_AxisBits01String           "PMAC_C_AXIS_BITS01"
#define PMAC_C_AxisBits02String           "PMAC_C_AXIS_BITS02"
#define PMAC_C_AxisBits03String           "PMAC_C_AXIS_BITS03"
#define PMAC_C_NoOfMsgsString             "PMAC_C_NO_OF_MSGS"
#define PMAC_C_TotalBytesWrittenString    "PMAC_C_TBYTES_WRITE"
#define PMAC_C_TotalBytesReadString       "PMAC_C_TBYTES_READ"
#define PMAC_C_MsgBytesWrittenString      "PMAC_C_MBYTES_WRITE"
#define PMAC_C_MsgBytesReadString         "PMAC_C_MBYTES_READ"
#define PMAC_C_MsgTimeString              "PMAC_C_MSG_TIME"
#define PMAC_C_MaxBytesWrittenString      "PMAC_C_MAX_BYTES_WRITE"
#define PMAC_C_MaxBytesReadString         "PMAC_C_MAX_BYTES_READ"
#define PMAC_C_MaxTimeString              "PMAC_C_MAX_TIME"
#define PMAC_C_AveBytesWrittenString      "PMAC_C_AVE_BYTES_WRITE"
#define PMAC_C_AveBytesReadString         "PMAC_C_AVE_BYTES_READ"
#define PMAC_C_AveTimeString              "PMAC_C_AVE_TIME"
#define PMAC_C_FastStoreString            "PMAC_C_FAST_STORE"
#define PMAC_C_MediumStoreString          "PMAC_C_MEDIUM_STORE"
#define PMAC_C_SlowStoreString            "PMAC_C_SLOW_STORE"
#define PMAC_C_ReportFastString           "PMAC_C_REPORT_FAST"
#define PMAC_C_ReportMediumString         "PMAC_C_REPORT_MEDIUM"
#define PMAC_C_ReportSlowString           "PMAC_C_REPORT_SLOW"
#define PMAC_C_HomingStatusString         "HOMING_STATUS"
#define PMAC_C_RealMotorNumberString      "PMAC_REAL_MOTOR_NUMBER"
#define PMAC_C_MotorScaleString           "PMAC_MOTOR_SCALE"
#define PMAC_C_MotorResString             "PMAC_MRES"
#define PMAC_C_MotorOffsetString          "PMAC_OFFSET"
#define PMAC_C_IVariablesString           "PMAC_I_VARIABLES"
#define PMAC_C_MVariablesString           "PMAC_M_VARIABLES"
#define PMAC_C_PVariablesString           "PMAC_P_VARIABLES"
#define PMAC_C_ProfileUseAxisAString      "PROFILE_USE_AXIS_A"
#define PMAC_C_ProfileUseAxisBString      "PROFILE_USE_AXIS_B"
#define PMAC_C_ProfileUseAxisCString      "PROFILE_USE_AXIS_C"
#define PMAC_C_ProfileUseAxisUString      "PROFILE_USE_AXIS_U"
#define PMAC_C_ProfileUseAxisVString      "PROFILE_USE_AXIS_V"
#define PMAC_C_ProfileUseAxisWString      "PROFILE_USE_AXIS_W"
#define PMAC_C_ProfileUseAxisXString      "PROFILE_USE_AXIS_X"
#define PMAC_C_ProfileUseAxisYString      "PROFILE_USE_AXIS_Y"
#define PMAC_C_ProfileUseAxisZString      "PROFILE_USE_AXIS_Z"
#define PMAC_C_ProfilePositionsAString    "PROFILE_POSITIONS_A"
#define PMAC_C_ProfilePositionsBString    "PROFILE_POSITIONS_B"
#define PMAC_C_ProfilePositionsCString    "PROFILE_POSITIONS_C"
#define PMAC_C_ProfilePositionsUString    "PROFILE_POSITIONS_U"
#define PMAC_C_ProfilePositionsVString    "PROFILE_POSITIONS_V"
#define PMAC_C_ProfilePositionsWString    "PROFILE_POSITIONS_W"
#define PMAC_C_ProfilePositionsXString    "PROFILE_POSITIONS_X"
#define PMAC_C_ProfilePositionsYString    "PROFILE_POSITIONS_Y"
#define PMAC_C_ProfilePositionsZString    "PROFILE_POSITIONS_Z"
#define PMAC_C_ProfileAppendString        "PROFILE_APPEND"
#define PMAC_C_ProfileAppendStateString   "PROFILE_APPEND_STATE"
#define PMAC_C_ProfileAppendStatusString  "PROFILE_APPEND_STATUS"
#define PMAC_C_ProfileAppendMessageString "PROFILE_APPEND_MESSAGE"
#define PMAC_C_ProfileNumBuildString      "PROFILE_NUM_BUILD"
#define PMAC_C_ProfileBuiltPointsString   "PROFILE_POINTS_BUILT"
#define PMAC_C_ProfileUserString          "PMAC_PROFILE_USER"    // User buffer for trajectory scan
#define PMAC_C_ProfileVelModeString       "PMAC_PROFILE_VELMODE" // Velocity mode buffer for trajectory scan
#define PMAC_C_TrajBufferLengthString     "PMAC_C_TRAJ_LENGTH"  // Length of a single buffer e.g. AX, AY
#define PMAC_C_TrajTotalPointsString      "PMAC_C_TRAJ_POINTS"  // Total number of points scanned through
#define PMAC_C_TrajStatusString           "PMAC_C_TRAJ_STATUS"  // Current status reported by the PMAC
#define PMAC_C_TrajCurrentIndexString     "PMAC_C_TRAJ_INDEX"   // Current index position in buffers
#define PMAC_C_TrajCurrentBufferString    "PMAC_C_TRAJ_CBUFF"   // Current buffer specifier - 0: A, 1: B
#define PMAC_C_TrajBuffAdrAString         "PMAC_C_TRAJ_ADRA"    // Start index of buffer A
#define PMAC_C_TrajBuffAdrBString         "PMAC_C_TRAJ_ADRB"    // Start index of buffer B
#define PMAC_C_TrajBuffFillAString        "PMAC_C_TRAJ_FILLA"   // Fill level of buffer A
#define PMAC_C_TrajBuffFillBString        "PMAC_C_TRAJ_FILLB"   // Fill level of buffer B
#define PMAC_C_TrajRunTimeString          "PMAC_C_TRAJ_TIME"    // Current run time of scan (s)
#define PMAC_C_TrajCSNumberString         "PMAC_C_TRAJ_CS"      // Current CS scan is executing on
#define PMAC_C_TrajCSPortString           "PMAC_C_TRAJ_CS_PORT" // Desired CS port to execute
#define PMAC_C_TrajPercentString          "PMAC_C_TRAJ_PERCENT" // Percentage of scan complete
#define PMAC_C_TrajEStatusString          "PMAC_C_TRAJ_ESTATUS" // Our report of tScan status
#define PMAC_C_TrajProgString             "PMAC_C_TRAJ_PROG"    // Which motion program to execute
#define PMAC_C_TrajProgVersionString      "PMAC_C_TRAJ_PROG_V"  // Motion program version number
#define PMAC_C_TrajCodeVersionString      "PMAC_C_TRAJ_CODE_V"  // Version of this control code


class pmacControllerParamSet : virtual public asynMotorControllerParamSet
{
public:
    pmacControllerParamSet() {
        std::cout << "pmacControllerParamSet" << std::endl;
        this->add(PMAC_C_FirstParamString, asynParamInt32, &PMAC_C_FirstParam_);
        this->add(PMAC_C_PollAllNowString, asynParamInt32, &PMAC_C_PollAllNow_);
        this->add(PMAC_C_StopAllString, asynParamInt32, &PMAC_C_StopAll_);
        this->add(PMAC_C_KillAllString, asynParamInt32, &PMAC_C_KillAll_);
        this->add(PMAC_C_GlobalStatusString, asynParamInt32, &PMAC_C_GlobalStatus_);
        this->add(PMAC_C_CommsErrorString, asynParamInt32, &PMAC_C_CommsError_);
        this->add(PMAC_C_FeedRateString, asynParamInt32, &PMAC_C_FeedRate_);
        this->add(PMAC_C_FeedRateLimitString, asynParamInt32, &PMAC_C_FeedRateLimit_);
        this->add(PMAC_C_FeedRatePollString, asynParamInt32, &PMAC_C_FeedRatePoll_);
        this->add(PMAC_C_FeedRateProblemString, asynParamInt32, &PMAC_C_FeedRateProblem_);
        this->add(PMAC_C_FeedRateCSString, asynParamInt32, &PMAC_C_FeedRateCS_);
        this->add(PMAC_C_CoordSysGroup, asynParamInt32, &PMAC_C_CoordSysGroup_);
        this->add(PMAC_C_GroupCSPortString, asynParamInt32, &PMAC_C_GroupCSPort_);
        this->add(PMAC_C_GroupCSPortRBVString, asynParamInt32, &PMAC_C_GroupCSPortRBV_);
        this->add(PMAC_C_GroupAssignString, asynParamOctet, &PMAC_C_GroupAssign_);
        this->add(PMAC_C_GroupAssignRBVString, asynParamOctet, &PMAC_C_GroupAssignRBV_);
        this->add(PMAC_C_GroupExecuteString, asynParamInt32, &PMAC_C_GroupExecute_);
        this->add(PMAC_C_DebugLevelString, asynParamInt32, &PMAC_C_DebugLevel_);
        this->add(PMAC_C_DebugAxisString, asynParamInt32, &PMAC_C_DebugAxis_);
        this->add(PMAC_C_DebugCSString, asynParamInt32, &PMAC_C_DebugCS_);
        this->add(PMAC_C_DebugCmdString, asynParamInt32, &PMAC_C_DebugCmd_);
        this->add(PMAC_C_DisablePollingString, asynParamInt32, &PMAC_C_DisablePolling_);
        this->add(PMAC_C_FastUpdateTimeString, asynParamFloat64, &PMAC_C_FastUpdateTime_);
        this->add(PMAC_C_LastParamString, asynParamInt32, &PMAC_C_LastParam_);
        this->add(PMAC_C_CpuUsageString, asynParamFloat64, &PMAC_C_CpuUsage_);
        this->add(PMAC_C_AxisCSString, asynParamInt32, &PMAC_C_AxisCS_);
        this->add(PMAC_C_AxisReadonlyString, asynParamInt32, &PMAC_C_AxisReadonly_);
        this->add(PMAC_C_WriteCmdString, asynParamOctet, &PMAC_C_WriteCmd_);
        this->add(PMAC_C_KillAxisString, asynParamInt32, &PMAC_C_KillAxis_);
        this->add(PMAC_C_PLCBits00String, asynParamInt32, &PMAC_C_PLCBits00_);
        this->add(PMAC_C_PLCBits01String, asynParamInt32, &PMAC_C_PLCBits01_);
        this->add(PMAC_C_StatusBits01String, asynParamInt32, &PMAC_C_StatusBits01_);
        this->add(PMAC_C_StatusBits02String, asynParamInt32, &PMAC_C_StatusBits02_);
        this->add(PMAC_C_StatusBits03String, asynParamInt32, &PMAC_C_StatusBits03_);
        this->add(PMAC_C_GpioInputsString, asynParamInt32, &PMAC_C_GpioInputs_);
        this->add(PMAC_C_GpioOutputsString, asynParamInt32, &PMAC_C_GpioOutputs_);
        this->add(PMAC_C_ProgBitsString, asynParamInt32, &PMAC_C_ProgBits_);
        this->add(PMAC_C_AxisBits01String, asynParamInt32, &PMAC_C_AxisBits01_);
        this->add(PMAC_C_AxisBits02String, asynParamInt32, &PMAC_C_AxisBits02_);
        this->add(PMAC_C_AxisBits03String, asynParamInt32, &PMAC_C_AxisBits03_);
        this->add(PMAC_C_ProfileUseAxisAString, asynParamInt32, &PMAC_C_ProfileUseAxisA_);
        this->add(PMAC_C_ProfileUseAxisBString, asynParamInt32, &PMAC_C_ProfileUseAxisB_);
        this->add(PMAC_C_ProfileUseAxisCString, asynParamInt32, &PMAC_C_ProfileUseAxisC_);
        this->add(PMAC_C_ProfileUseAxisUString, asynParamInt32, &PMAC_C_ProfileUseAxisU_);
        this->add(PMAC_C_ProfileUseAxisVString, asynParamInt32, &PMAC_C_ProfileUseAxisV_);
        this->add(PMAC_C_ProfileUseAxisWString, asynParamInt32, &PMAC_C_ProfileUseAxisW_);
        this->add(PMAC_C_ProfileUseAxisXString, asynParamInt32, &PMAC_C_ProfileUseAxisX_);
        this->add(PMAC_C_ProfileUseAxisYString, asynParamInt32, &PMAC_C_ProfileUseAxisY_);
        this->add(PMAC_C_ProfileUseAxisZString, asynParamInt32, &PMAC_C_ProfileUseAxisZ_);
        this->add(PMAC_C_ProfilePositionsAString, asynParamFloat64Array, &PMAC_C_ProfilePositionsA_);
        this->add(PMAC_C_ProfilePositionsBString, asynParamFloat64Array, &PMAC_C_ProfilePositionsB_);
        this->add(PMAC_C_ProfilePositionsCString, asynParamFloat64Array, &PMAC_C_ProfilePositionsC_);
        this->add(PMAC_C_ProfilePositionsUString, asynParamFloat64Array, &PMAC_C_ProfilePositionsU_);
        this->add(PMAC_C_ProfilePositionsVString, asynParamFloat64Array, &PMAC_C_ProfilePositionsV_);
        this->add(PMAC_C_ProfilePositionsWString, asynParamFloat64Array, &PMAC_C_ProfilePositionsW_);
        this->add(PMAC_C_ProfilePositionsXString, asynParamFloat64Array, &PMAC_C_ProfilePositionsX_);
        this->add(PMAC_C_ProfilePositionsYString, asynParamFloat64Array, &PMAC_C_ProfilePositionsY_);
        this->add(PMAC_C_ProfilePositionsZString, asynParamFloat64Array, &PMAC_C_ProfilePositionsZ_);
        this->add(PMAC_C_ProfileAppendString, asynParamInt32, &PMAC_C_ProfileAppend_);
        this->add(PMAC_C_ProfileAppendStateString, asynParamInt32, &PMAC_C_ProfileAppendState_);
        this->add(PMAC_C_ProfileAppendStatusString, asynParamInt32, &PMAC_C_ProfileAppendStatus_);
        this->add(PMAC_C_ProfileAppendMessageString, asynParamOctet, &PMAC_C_ProfileAppendMessage_);
        this->add(PMAC_C_ProfileNumBuildString, asynParamInt32, &PMAC_C_ProfileNumBuild_);
        this->add(PMAC_C_ProfileBuiltPointsString, asynParamInt32, &PMAC_C_ProfileBuiltPoints_);
        this->add(PMAC_C_ProfileUserString, asynParamInt32Array, &PMAC_C_ProfileUser_);
        this->add(PMAC_C_ProfileVelModeString, asynParamInt32Array, &PMAC_C_ProfileVelMode_);
        this->add(PMAC_C_TrajBufferLengthString, asynParamInt32, &PMAC_C_TrajBufferLength_);
        this->add(PMAC_C_TrajTotalPointsString, asynParamInt32, &PMAC_C_TrajTotalPoints_);
        this->add(PMAC_C_TrajStatusString, asynParamInt32, &PMAC_C_TrajStatus_);
        this->add(PMAC_C_TrajCurrentIndexString, asynParamInt32, &PMAC_C_TrajCurrentIndex_);
        this->add(PMAC_C_TrajCurrentBufferString, asynParamInt32, &PMAC_C_TrajCurrentBuffer_);
        this->add(PMAC_C_TrajBuffAdrAString, asynParamInt32, &PMAC_C_TrajBuffAdrA_);
        this->add(PMAC_C_TrajBuffAdrBString, asynParamInt32, &PMAC_C_TrajBuffAdrB_);
        this->add(PMAC_C_TrajBuffFillAString, asynParamInt32, &PMAC_C_TrajBuffFillA_);
        this->add(PMAC_C_TrajBuffFillBString, asynParamInt32, &PMAC_C_TrajBuffFillB_);
        this->add(PMAC_C_TrajRunTimeString, asynParamFloat64, &PMAC_C_TrajRunTime_);
        this->add(PMAC_C_TrajCSNumberString, asynParamInt32, &PMAC_C_TrajCSNumber_);
        this->add(PMAC_C_TrajCSPortString, asynParamInt32, &PMAC_C_TrajCSPort_);
        this->add(PMAC_C_TrajPercentString, asynParamFloat64, &PMAC_C_TrajPercent_);
        this->add(PMAC_C_TrajEStatusString, asynParamInt32, &PMAC_C_TrajEStatus_);
        this->add(PMAC_C_TrajProgString, asynParamInt32, &PMAC_C_TrajProg_);
        this->add(PMAC_C_TrajProgVersionString, asynParamFloat64, &PMAC_C_TrajProgVersion_);
        this->add(PMAC_C_TrajCodeVersionString, asynParamFloat64, &PMAC_C_TrajCodeVersion_);
        this->add(PMAC_C_NoOfMsgsString, asynParamInt32, &PMAC_C_NoOfMsgs_);
        this->add(PMAC_C_TotalBytesWrittenString, asynParamInt32, &PMAC_C_TotalBytesWritten_);
        this->add(PMAC_C_TotalBytesReadString, asynParamInt32, &PMAC_C_TotalBytesRead_);
        this->add(PMAC_C_MsgBytesWrittenString, asynParamInt32, &PMAC_C_MsgBytesWritten_);
        this->add(PMAC_C_MsgBytesReadString, asynParamInt32, &PMAC_C_MsgBytesRead_);
        this->add(PMAC_C_MsgTimeString, asynParamInt32, &PMAC_C_MsgTime_);
        this->add(PMAC_C_MaxBytesWrittenString, asynParamInt32, &PMAC_C_MaxBytesWritten_);
        this->add(PMAC_C_MaxBytesReadString, asynParamInt32, &PMAC_C_MaxBytesRead_);
        this->add(PMAC_C_MaxTimeString, asynParamInt32, &PMAC_C_MaxTime_);
        this->add(PMAC_C_AveBytesWrittenString, asynParamInt32, &PMAC_C_AveBytesWritten_);
        this->add(PMAC_C_AveBytesReadString, asynParamInt32, &PMAC_C_AveBytesRead_);
        this->add(PMAC_C_AveTimeString, asynParamInt32, &PMAC_C_AveTime_);
        this->add(PMAC_C_FastStoreString, asynParamInt32, &PMAC_C_FastStore_);
        this->add(PMAC_C_MediumStoreString, asynParamInt32, &PMAC_C_MediumStore_);
        this->add(PMAC_C_SlowStoreString, asynParamInt32, &PMAC_C_SlowStore_);
        this->add(PMAC_C_ReportFastString, asynParamInt32, &PMAC_C_ReportFast_);
        this->add(PMAC_C_ReportMediumString, asynParamInt32, &PMAC_C_ReportMedium_);
        this->add(PMAC_C_ReportSlowString, asynParamInt32, &PMAC_C_ReportSlow_);
        this->add(PMAC_C_HomingStatusString, asynParamInt32, &PMAC_C_HomingStatus_);
        this->add(PMAC_C_RealMotorNumberString, asynParamInt32, &PMAC_C_RealMotorNumber_);
        this->add(PMAC_C_MotorScaleString, asynParamInt32, &PMAC_C_MotorScale_);
        this->add(PMAC_C_MotorResString, asynParamFloat64, &PMAC_C_MotorRes_);
        this->add(PMAC_C_MotorOffsetString, asynParamFloat64, &PMAC_C_MotorOffset_);
        this->add(PMAC_C_IVariablesString, asynParamOctet, &PMAC_I_Variables_);
        this->add(PMAC_C_MVariablesString, asynParamOctet, &PMAC_M_Variables_);
        this->add(PMAC_C_PVariablesString, asynParamOctet, &PMAC_P_Variables_);
    }

protected:
    int PMAC_C_FirstParam_;
    #define FIRST_PMAC_PARAM_INDEX PMAC_C_FirstParam_
    int PMAC_C_StopAll_;
    int PMAC_C_KillAll_;
    int PMAC_C_PollAllNow_;
    int PMAC_C_GlobalStatus_;
    int PMAC_C_CommsError_;
    int PMAC_C_FeedRate_;
    int PMAC_C_FeedRateLimit_;
    int PMAC_C_FeedRatePoll_;
    int PMAC_C_FeedRateProblem_;
    int PMAC_C_FeedRateCS_;
    int PMAC_C_CoordSysGroup_;
    int PMAC_C_GroupCSPort_;
    int PMAC_C_GroupCSPortRBV_;
    int PMAC_C_GroupAssign_;
    int PMAC_C_GroupAssignRBV_;
    int PMAC_C_GroupExecute_;
    int PMAC_C_DebugLevel_;
    int PMAC_C_DebugAxis_;
    int PMAC_C_DebugCS_;
    int PMAC_C_DebugCmd_;
    int PMAC_C_DisablePolling_;
    int PMAC_C_FastUpdateTime_;
    int PMAC_C_CpuUsage_;
    int PMAC_C_AxisCS_;
    int PMAC_C_AxisReadonly_;
    int PMAC_C_WriteCmd_;
    int PMAC_C_KillAxis_;
    int PMAC_C_PLCBits00_;
    int PMAC_C_PLCBits01_;
    int PMAC_C_StatusBits01_;
    int PMAC_C_StatusBits02_;
    int PMAC_C_StatusBits03_;
    int PMAC_C_GpioInputs_;
    int PMAC_C_GpioOutputs_;
    int PMAC_C_ProgBits_;
    int PMAC_C_AxisBits01_;
    int PMAC_C_AxisBits02_;
    int PMAC_C_AxisBits03_;
    int PMAC_C_ProfileUseAxisA_;
    int PMAC_C_ProfileUseAxisB_;
    int PMAC_C_ProfileUseAxisC_;
    int PMAC_C_ProfileUseAxisU_;
    int PMAC_C_ProfileUseAxisV_;
    int PMAC_C_ProfileUseAxisW_;
    int PMAC_C_ProfileUseAxisX_;
    int PMAC_C_ProfileUseAxisY_;
    int PMAC_C_ProfileUseAxisZ_;
    int PMAC_C_ProfilePositionsA_;
    int PMAC_C_ProfilePositionsB_;
    int PMAC_C_ProfilePositionsC_;
    int PMAC_C_ProfilePositionsU_;
    int PMAC_C_ProfilePositionsV_;
    int PMAC_C_ProfilePositionsW_;
    int PMAC_C_ProfilePositionsX_;
    int PMAC_C_ProfilePositionsY_;
    int PMAC_C_ProfilePositionsZ_;
    int PMAC_C_ProfileAppend_;
    int PMAC_C_ProfileAppendState_;
    int PMAC_C_ProfileAppendStatus_;
    int PMAC_C_ProfileAppendMessage_;
    int PMAC_C_ProfileNumBuild_;
    int PMAC_C_ProfileBuiltPoints_;
    int PMAC_C_ProfileUser_;
    int PMAC_C_ProfileVelMode_;
    int PMAC_C_TrajBufferLength_;
    int PMAC_C_TrajTotalPoints_;
    int PMAC_C_TrajStatus_;
    int PMAC_C_TrajCurrentIndex_;
    int PMAC_C_TrajCurrentBuffer_;
    int PMAC_C_TrajBuffAdrA_;
    int PMAC_C_TrajBuffAdrB_;
    int PMAC_C_TrajBuffFillA_;
    int PMAC_C_TrajBuffFillB_;
    int PMAC_C_TrajRunTime_;
    int PMAC_C_TrajCSNumber_;
    int PMAC_C_TrajCSPort_;
    int PMAC_C_TrajPercent_;
    int PMAC_C_TrajEStatus_;
    int PMAC_C_TrajProg_;
    int PMAC_C_TrajProgVersion_;
    int PMAC_C_TrajCodeVersion_;
    int PMAC_C_NoOfMsgs_;
    int PMAC_C_TotalBytesWritten_;
    int PMAC_C_TotalBytesRead_;
    int PMAC_C_MsgBytesWritten_;
    int PMAC_C_MsgBytesRead_;
    int PMAC_C_MsgTime_;
    int PMAC_C_MaxBytesWritten_;
    int PMAC_C_MaxBytesRead_;
    int PMAC_C_MaxTime_;
    int PMAC_C_AveBytesWritten_;
    int PMAC_C_AveBytesRead_;
    int PMAC_C_AveTime_;
    int PMAC_C_FastStore_;
    int PMAC_C_MediumStore_;
    int PMAC_C_SlowStore_;
    int PMAC_C_ReportFast_;
    int PMAC_C_ReportMedium_;
    int PMAC_C_ReportSlow_;
    int PMAC_C_HomingStatus_;
    int PMAC_C_RealMotorNumber_;
    int PMAC_C_MotorScale_;
    int PMAC_C_MotorRes_;
    int PMAC_C_MotorOffset_;
    int PMAC_I_Variables_;
    int PMAC_M_Variables_;
    int PMAC_P_Variables_;
    int PMAC_C_LastParam_;
};

#endif // pmacControllerParamSet_H
