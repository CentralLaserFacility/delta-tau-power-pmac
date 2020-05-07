/********************************************
 *  pmacController.h
 *
 *  PMAC Asyn motor based on the
 *  asynMotorController class.
 *
 *  Matthew Pearson
 *  23 May 2012
 *
 ********************************************/

#ifndef pmacController_H
#define pmacController_H

#include "asynMotorController.h"
#include "asynMotorAxis.h"
#include "pmacAxis.h"
#include "pmacCsGroups.h"
#include "pmacMessageBroker.h"
#include "pmacTrajectory.h"
#include "pmacHardwareTurbo.h"
#include "pmacHardwarePower.h"
#include "IntegerHashtable.h"
#include "pmacControllerParamSet.h"

#define FIRST_PMAC_PARAM paramSet->FIRST_PMAC_PARAM_INDEX

#define PMAC_TRAJECTORY_VERSION 3

#define PMAC_CPU_GEO_240MHZ               "DSP56321"            // Approved geobrick for trajectory scans
#define PMAC_CPU_CLIPPER                  "DSP56303"            // Allowed for trajectory scans

#define PMAC_MAXBUF 1024

#define PMAC_MAX_PARAMETERS 1000

#define PMAC_MAX_CS 16
#define PMAC_MAX_CS_AXES 9

#define PMAC_MAX_TRAJECTORY_POINTS 10000000

#define PMAC_POINTS_PER_WRITE 17

#define PMAC_MEDIUM_LOOP_TIME 2000
#define PMAC_SLOW_LOOP_TIME   5000

#define PMAC_PVT_TIME_MODE       "I42"   // PVT Time Control Mode (0=4,095 ms max time, 1=8,388,607 ms max time)

#define PMAC_CPU_PHASE_INTR      "M70" // Time between phase interrupts (CPU cycles/2)
#define PMAC_CPU_PHASE_TIME      "M71" // Time for phase tasks (CPU cycles/2)
#define PMAC_CPU_SERVO_TIME      "M72" // Time for servo tasks (CPU cycles/2)
#define PMAC_CPU_RTI_TIME        "M73" // Time for RTI tasks (CPU cycles/2)
#define PMAC_CPU_I8              "I8"
#define PMAC_CPU_I7002           "I7002"

#define PMAC_TRAJ_STATUS         "M4034" // Status of motion program for EPICS - 0: Idle, 1: Running, 2: Finished, 3: Error
#define PMAC_TRAJ_ABORT          "M4035" // Abort trigger for EPICS
#define PMAC_TRAJ_AXES           "M4036" // An int between 1 and 511 specifying which axes to use
#define PMAC_TRAJ_BUFFER_LENGTH  "M4037" // Length of a single buffer e.g. AX, AY
#define PMAC_TRAJ_TOTAL_POINTS   "M4038" // Total number of points scanned through
#define PMAC_TRAJ_CURRENT_INDEX  "M4039" // Current index position in buffers
#define PMAC_TRAJ_CURRENT_BUFFER "M4040" // Current buffer specifier - 0: A, 1: B
#define PMAC_TRAJ_BUFF_ADR_A     "M4041" // Start index of buffer A
#define PMAC_TRAJ_BUFF_ADR_B     "M4042" // Start index of buffer B
#define PMAC_TRAJ_CURR_ADR       "M4043" // A or B buffer address
#define PMAC_TRAJ_BUFF_FILL_A    "M4044" // Fill level of buffer A
#define PMAC_TRAJ_BUFF_FILL_B    "M4045" // Fill level of buffer B
#define PMAC_TRAJ_CURR_FILL      "M4046" // The indexes that current buffer has been filled up to
#define PMAC_TRAJ_PROG_VERSION   "M4049" // The indexes that current buffer has been filled up to

#define PMAC_TRAJ_BUFFER_A 0
#define PMAC_TRAJ_BUFFER_B 1

#define PMAC_TRAJ_STATUS_RUNNING 1
#define PMAC_TRAJ_STATUS_FINISHED 2

class pmacCSMonitor;

class pmacCSController;

class pmacController :
    public pmacControllerParamSet,
    public asynMotorController,
    public pmacCallbackInterface,
    public pmacDebugger
{
public:
    pmacController(const char *portName, const char *lowLevelPortName, int lowLevelPortAddress,
                   int numAxes, double movingPollPeriod,
                   double idlePollPeriod);
    virtual ~pmacController();
    asynStatus checkConnection();
    asynStatus initialSetup();
    bool initialised(void);
    void createAsynParams(void);
    void initAsynParams(void);
    void pollAllNow(void);
    void setupBrokerVariables(void);
    void startPMACPolling();
    void setDebugLevel(int level, int axis, int csNo);

    asynStatus drvUserCreate(asynUser *pasynUser, const char *drvInfo, const char **pptypeName, size_t *psize);
    asynStatus processDrvInfo(char *input, char *output);
    virtual void callback(pmacCommandStore *sPtr, int type);
    asynStatus slowUpdate(pmacCommandStore *sPtr);
    asynStatus mediumUpdate(pmacCommandStore *sPtr);
    asynStatus prefastUpdate(pmacCommandStore *sPtr);
    asynStatus fastUpdate(pmacCommandStore *sPtr);
    asynStatus parseIntegerVariable(const std::string &command,
                                    const std::string &response,
                                    const std::string &desc,
                                    int &value);

    //asynStatus printConnectedStatus(void);
    asynStatus immediateWriteRead(const char *command, char *response);
    asynStatus axisWriteRead(const char *command, char *response);

    /* These are the methods that we override */
    asynStatus writeInt32(asynUser *pasynUser, epicsInt32 value);
    asynStatus writeFloat64(asynUser *pasynUser, epicsFloat64 value);
    asynStatus writeFloat64Array(asynUser *pasynUser, epicsFloat64 *value, size_t nElements);
    asynStatus writeInt32Array(asynUser *pasynUser, epicsInt32 *value, size_t nElements);
    asynStatus writeOctet(asynUser *pasynUser, const char *value, size_t nChars, size_t *nActual);

    asynStatus readEnum(asynUser *pasynUser, char *strings[], int values[], int severities[], size_t nElements,
             size_t *nIn);

    void report(FILE *fp, int level);
    pmacAxis *getAxis(asynUser *pasynUser);
    pmacAxis *getAxis(int axisNo);
    asynStatus poll();

    // Trajectory scanning methods
    asynStatus initializeProfile(size_t maxPoints);
    asynStatus buildProfile();
    asynStatus buildProfile(int csNo);
    asynStatus appendToProfile();
    asynStatus preparePMAC();
    asynStatus executeProfile();
    asynStatus executeProfile(int csNo);
    asynStatus abortProfile();

    void trajectoryTask();
    void setBuildStatus(int state, int status, const std::string &message);
    void setAppendStatus(int state, int status, const std::string &message);
    void setProfileStatus(int state, int status, const std::string &message);
    asynStatus sendTrajectoryDemands(int buffer);

    //Disable the check for disabled hardware limits.
    asynStatus pmacDisableLimitsCheck(int axis);
    asynStatus pmacDisableLimitsCheck(void);

    //Set the axis scale factor.
    asynStatus pmacSetAxisScale(int axis, int scale);

    //Set the open loop encoder axis
    asynStatus pmacSetOpenLoopEncoderAxis(int axis, int encoder_axis);

    // Registration for callbacks
    asynStatus registerForCallbacks(pmacCallbackInterface *cbPtr, int type);

    // Add PMAC variable/status item to monitor
    asynStatus monitorPMACVariable(int poll_speed, const char *var);

    // Register a coordinate system with this controller
    asynStatus registerCS(pmacCSController *csPtr, const char *portName, int csNo);

    // Initialise the hardware and connection for a coordinate system
    asynStatus initCSHardware(int csNo);

    // Ensure CS demands (Q71..9) are consistent after a motor move or CS change
    asynStatus makeCSDemandsConsistent();

    // Read out the device type (cid)
    asynStatus readDeviceType();

    // List PLC program
    asynStatus listPLCProgram(int plcNo, char *buffer, size_t size);
    asynStatus executeManualGroup();
    asynStatus updateCsAssignmentParameters();
    asynStatus copyCsReadbackToDemand(bool manual);
    asynStatus tScanBuildProfileArray(double *positions, int axis, int numPoints);
    asynStatus tScanIncludedAxes(int *axisMask);
    void registerForLock(asynPortDriver *controller);

protected:
    pmacAxis **pAxes_;       /**< Array of pointers to axis objects */
    int parameters[PMAC_MAX_PARAMETERS];

public:
    pmacCsGroups *pGroupList;
    bool useCsVelocity;
    pmacHardwareInterface *pHardware_;

    void addBrokerVariables(const std::string &monitorVariables);

private:
    int connected_;
    int initialised_;
    int cid_;
    std::string cpu_;
    int parameterIndex_;
    pmacMessageBroker *pBroker_;
    pmacTrajectory *pTrajectory_;
    IntegerHashtable *pPortToCs_;
    IntegerHashtable *pIntParams_;
    IntegerHashtable *pHexParams_;
    IntegerHashtable *pDoubleParams_;
    IntegerHashtable *pStringParams_;
    StringHashtable *pWriteParams_;
    pmacCSMonitor *pAxisZero;
    pmacCSController **pCSControllers_;
    asynUser *lowLevelPortUser_;
    epicsUInt32 movesDeferred_;
    epicsTimeStamp nowTime_;
    epicsFloat64 nowTimeSecs_;
    epicsFloat64 lastTimeSecs_;
    epicsTimeStamp lastMediumTime_;
    epicsTimeStamp lastSlowTime_;
    bool printNextError_;
    bool feedRatePoll_;
    double movingPollPeriod_;
    double idlePollPeriod_;
    int i8_;
    int i7002_;
    bool csResetAllDemands;
    int csCount;

    // Trajectory scan variables
    int pvtTimeMode_;
    bool profileInitialized_;
    bool profileBuilt_;
    bool appendAvailable_;
    bool tScanShortScan_;           // Is the scan a short scan (< 3.0 seconds)
    int tScanExecuting_;            // Is a scan executing
    int tScanCSNo_;                 // The CS number of the executing scan
    int tScanNumPoints_;            // Total number of points in the scan
    int tScanAxisMask_;             // Mask describing which axes are used in the scan
    int tScanPointCtr_;             // Counter of scan points written
    int tScanPmacBufferPtr_;
    int tScanPmacTotalPts_;
    int tScanPmacStatus_;
    int tScanPmacBufferNumber_;     // Which half buffer (A=0,B=1) is the PMAC reading
    int tScanPmacBufferAddressA_;
    int tScanPmacBufferAddressB_;
    int tScanPmacBufferSize_;
    double tScanPmacProgVersion_;
    double **eguProfilePositions_;  // 2D array of profile positions in EGU (1 array for each axis)
    double **tScanPositions_;       // 2D array of profile positions (1 array for each axis)
    int *profileUser_;              // Array of profile user values
    int *profileVelMode_;           // Array of profile velocity modes
    epicsEventId startEventId_;
    epicsEventId stopEventId_;

    asynStatus lowLevelWriteRead(const char *command, char *response);

    asynStatus updateStatistics();

    asynStatus processDeferredMoves(void);

    //static class data members

    static const epicsUInt32 PMAC_MAXBUF_;
    static const epicsFloat64 PMAC_TIMEOUT_;
    static const epicsUInt32 PMAC_FEEDRATE_LIM_;
    static const epicsUInt32 PMAC_FEEDRATE_DEADBAND_;
    static const epicsUInt32 PMAC_ERROR_PRINT_TIME_;
    static const epicsUInt32 PMAC_FORCED_FAST_POLLS_;
    static const epicsUInt32 PMAC_OK_;
    static const epicsUInt32 PMAC_ERROR_;
    static const epicsInt32 PMAC_CID_PMAC_;
    static const epicsInt32 PMAC_CID_GEOBRICK_;
    static const epicsInt32 PMAC_CID_CLIPPER_;
    static const epicsInt32 PMAC_CID_POWER_;

    static const epicsUInt32 PMAC_STATUS1_MAXRAPID_SPEED;
    static const epicsUInt32 PMAC_STATUS1_ALT_CMNDOUT_MODE;
    static const epicsUInt32 PMAC_STATUS1_SOFT_POS_CAPTURE;
    static const epicsUInt32 PMAC_STATUS1_ERROR_TRIGGER;
    static const epicsUInt32 PMAC_STATUS1_FOLLOW_ENABLE;
    static const epicsUInt32 PMAC_STATUS1_FOLLOW_OFFSET;
    static const epicsUInt32 PMAC_STATUS1_PHASED_MOTOR;
    static const epicsUInt32 PMAC_STATUS1_ALT_SRC_DEST;
    static const epicsUInt32 PMAC_STATUS1_USER_SERVO;
    static const epicsUInt32 PMAC_STATUS1_USER_PHASE;
    static const epicsUInt32 PMAC_STATUS1_HOMING;
    static const epicsUInt32 PMAC_STATUS1_BLOCK_REQUEST;
    static const epicsUInt32 PMAC_STATUS1_DECEL_ABORT;
    static const epicsUInt32 PMAC_STATUS1_DESIRED_VELOCITY_ZERO;
    static const epicsUInt32 PMAC_STATUS1_DATABLKERR;
    static const epicsUInt32 PMAC_STATUS1_DWELL;
    static const epicsUInt32 PMAC_STATUS1_INTEGRATE_MODE;
    static const epicsUInt32 PMAC_STATUS1_MOVE_TIME_ON;
    static const epicsUInt32 PMAC_STATUS1_OPEN_LOOP;
    static const epicsUInt32 PMAC_STATUS1_AMP_ENABLED;
    static const epicsUInt32 PMAC_STATUS1_X_SERVO_ON;
    static const epicsUInt32 PMAC_STATUS1_POS_LIMIT_SET;
    static const epicsUInt32 PMAC_STATUS1_NEG_LIMIT_SET;
    static const epicsUInt32 PMAC_STATUS1_MOTOR_ON;

    static const epicsUInt32 PMAC_STATUS2_IN_POSITION;
    static const epicsUInt32 PMAC_STATUS2_WARN_FOLLOW_ERR;
    static const epicsUInt32 PMAC_STATUS2_ERR_FOLLOW_ERR;
    static const epicsUInt32 PMAC_STATUS2_AMP_FAULT;
    static const epicsUInt32 PMAC_STATUS2_NEG_BACKLASH;
    static const epicsUInt32 PMAC_STATUS2_I2T_AMP_FAULT;
    static const epicsUInt32 PMAC_STATUS2_I2_FOLLOW_ERR;
    static const epicsUInt32 PMAC_STATUS2_TRIGGER_MOVE;
    static const epicsUInt32 PMAC_STATUS2_PHASE_REF_ERR;
    static const epicsUInt32 PMAC_STATUS2_PHASE_SEARCH;
    static const epicsUInt32 PMAC_STATUS2_HOME_COMPLETE;
    static const epicsUInt32 PMAC_STATUS2_POS_LIMIT_STOP;
    static const epicsUInt32 PMAC_STATUS2_DESIRED_STOP;
    static const epicsUInt32 PMAC_STATUS2_FORE_IN_POS;
    static const epicsUInt32 PMAC_STATUS2_NA14;
    static const epicsUInt32 PMAC_STATUS2_ASSIGNED_CS;

    /*Global status ???*/
    static const epicsUInt32 PMAC_GSTATUS_CARD_ADDR;
    static const epicsUInt32 PMAC_GSTATUS_ALL_CARD_ADDR;
    static const epicsUInt32 PMAC_GSTATUS_RESERVED;
    static const epicsUInt32 PMAC_GSTATUS_PHASE_CLK_MISS;
    static const epicsUInt32 PMAC_GSTATUS_MACRO_RING_ERRORCHECK;
    static const epicsUInt32 PMAC_GSTATUS_MACRO_RING_COMMS;
    static const epicsUInt32 PMAC_GSTATUS_TWS_PARITY_ERROR;
    static const epicsUInt32 PMAC_GSTATUS_CONFIG_ERROR;
    static const epicsUInt32 PMAC_GSTATUS_ILLEGAL_LVAR;
    static const epicsUInt32 PMAC_GSTATUS_REALTIME_INTR;
    static const epicsUInt32 PMAC_GSTATUS_FLASH_ERROR;
    static const epicsUInt32 PMAC_GSTATUS_DPRAM_ERROR;
    static const epicsUInt32 PMAC_GSTATUS_CKSUM_ACTIVE;
    static const epicsUInt32 PMAC_GSTATUS_CKSUM_ERROR;
    static const epicsUInt32 PMAC_GSTATUS_LEADSCREW_COMP;
    static const epicsUInt32 PMAC_GSTATUS_WATCHDOG;
    static const epicsUInt32 PMAC_GSTATUS_SERVO_REQ;
    static const epicsUInt32 PMAC_GSTATUS_DATA_GATHER_START;
    static const epicsUInt32 PMAC_GSTATUS_RESERVED2;
    static const epicsUInt32 PMAC_GSTATUS_DATA_GATHER_ON;
    static const epicsUInt32 PMAC_GSTATUS_SERVO_ERROR;
    static const epicsUInt32 PMAC_GSTATUS_CPUTYPE;
    static const epicsUInt32 PMAC_GSTATUS_REALTIME_INTR_RE;
    static const epicsUInt32 PMAC_GSTATUS_RESERVED3;

    static const epicsUInt32 PMAC_HARDWARE_PROB;
    static const epicsUInt32 PMAX_AXIS_GENERAL_PROB1;
    static const epicsUInt32 PMAX_AXIS_GENERAL_PROB2;

    friend class pmacAxis;

    friend class pmacCsGroups;

    friend class pmacCSController;

    friend class pmacHardwareInterface;
};

#endif /* pmacController_H */
