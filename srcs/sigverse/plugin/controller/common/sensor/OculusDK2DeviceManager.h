/*
 * OculusDK2DeviceManager.h
 *
 *  Created on: 2015/07/30
 *      Author: Wada
 */
#ifndef SIGVERSE_OCULUS_DK2_DEVICE_MANAGER_H
#define SIGVERSE_OCULUS_DK2_DEVICE_MANAGER_H

#include <sigverse/commonlib/SimObj.h>
#include <sigverse/commonlib/ControllerImpl.h>

#include <sigverse/plugin/controller/common/ManNiiPosture.h>
#include <sigverse/plugin/common/sensor/SensorData.h>

class OculusDK2DeviceManager
{
public:
	static const dQuaternion defaultHeadJoint0Quaternion;

	BaseService *service;

	std::string serviceName;
	std::string deviceType;
	std::string deviceUniqueID;

	OculusDK2DeviceManager();
	OculusDK2DeviceManager(std::string &name, std::string &deviceType, std::string &deviceUniqueID);

	///@brief Convert euler angle to avatar posture structure.
	static ManNiiPosture convertQuaternion2ManNiiPosture(const SigCmn::Vector4 &quaternion);

	static void setJointQuaternions2ManNii(SimObj *obj, const ManNiiPosture &posture);
};

#endif //SIGVERSE_OCULUS_DK2_DEVICE_MANAGER_H
