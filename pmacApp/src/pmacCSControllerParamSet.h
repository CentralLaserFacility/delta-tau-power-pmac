#ifndef pmacCSControllerParamSet_H
#define pmacCSControllerParamSet_H

#include "asynMotorControllerParamSet.h"


#define PMAC_CS_FirstParamString           "PMAC_CS_FIRSTPARAM"
#define PMAC_CS_LastParamString            "PMAC_CS_LASTPARAM"
#define PMAC_CS_CsMoveTimeString           "PMAC_C_CS_MOVE_TIME"
#define PMAC_CS_CsAbortString              "PMAC_C_ABORT"
#define PMAC_CS_RealMotorNumberString      "PMAC_REAL_MOTOR_NUMBER"
#define PMAC_CS_MotorScaleString           "PMAC_MOTOR_SCALE"
#define PMAC_CS_MotorResString             "PMAC_MRES"
#define PMAC_CS_MotorOffsetString          "PMAC_OFFSET"
#define PMAC_CS_ForwardKinematicString     "PMAC_CS_FWD_KIN"
#define PMAC_CS_InverseKinematicString     "PMAC_CS_INV_KIN"
#define PMAC_CS_QVariablesString           "PMAC_CS_Q_VARIABLES"


class pmacCSControllerParamSet : virtual public asynMotorControllerParamSet
{
public:
    pmacCSControllerParamSet() {
        this->add(PMAC_CS_FirstParamString, asynParamInt32, &PMAC_CS_FirstParam_);
        this->add(PMAC_CS_CsMoveTimeString, asynParamFloat64, &PMAC_CS_CsMoveTime_);
        this->add(PMAC_CS_RealMotorNumberString, asynParamInt32, &PMAC_CS_RealMotorNumber_);
        this->add(PMAC_CS_MotorScaleString, asynParamInt32, &PMAC_CS_MotorScale_);
        this->add(PMAC_CS_MotorResString, asynParamFloat64, &PMAC_CS_MotorRes_);
        this->add(PMAC_CS_MotorOffsetString, asynParamFloat64, &PMAC_CS_MotorOffset_);
        this->add(PMAC_CS_CsAbortString, asynParamInt32, &PMAC_CS_Abort_);
        this->add(PMAC_CS_ForwardKinematicString, asynParamOctet, &PMAC_CS_ForwardKinematic_);
        this->add(PMAC_CS_InverseKinematicString, asynParamOctet, &PMAC_CS_InverseKinematic_);
        this->add(PMAC_CS_QVariablesString, asynParamOctet, &PMAC_CS_QVariables_);
        this->add(PMAC_CS_LastParamString, asynParamInt32, &PMAC_CS_LastParam_);
    }

protected:
    int PMAC_CS_FirstParam_;
    #define FIRST_PMAC_CS_PARAM PMAC_CS_FirstParam_
    int PMAC_CS_CsMoveTime_;
    int PMAC_CS_RealMotorNumber_;
    int PMAC_CS_MotorScale_;
    int PMAC_CS_MotorRes_;
    int PMAC_CS_MotorOffset_;
    int PMAC_CS_Abort_;
    int PMAC_CS_LastParam_;
    int PMAC_CS_ForwardKinematic_;
    int PMAC_CS_InverseKinematic_;
    int PMAC_CS_QVariables_;
};

#endif // pmacCSControllerParamSet_H
