/*
 * ManNiiPosture.h
 *
 *  Created on: 2015/03/12
 *      Author: Nozaki
 */

#ifndef SIGVERSE_MAN_NII_POSTURE_H
#define SIGVERSE_MAN_NII_POSTURE_H

#include <sigverse/plugin/controller/common/Posture.h>
#include <sigverse/plugin/common/Quaternion.h>
#include <string>
#include <sstream>


class ManNiiPosture : public Posture
{
public:
	enum ManNiiJointType
	{
		HEAD_JOINT0 = 0,
		HEAD_JOINT1 = 1,
		LARM_JOINT0 = 2,
		LARM_JOINT1 = 3,
		LARM_JOINT2 = 4,
		LARM_JOINT3 = 5,
		LARM_JOINT4 = 6,
		LARM_JOINT5 = 7,
		LARM_JOINT6 = 8,
		LARM_JOINT7 = 9,
		RARM_JOINT0 = 10,
		RARM_JOINT1 = 11,
		RARM_JOINT2 = 12,
		RARM_JOINT3 = 13,
		RARM_JOINT4 = 14,
		RARM_JOINT5 = 15,
		RARM_JOINT6 = 16,
		RARM_JOINT7 = 17,
		WAIST_JOINT0 = 18,
		WAIST_JOINT1 = 19,
		WAIST_JOINT2 = 20,
		ROOT_JOINT0 = 21,
		ROOT_JOINT1 = 22,
		ROOT_JOINT2 = 23,
		LLEG_JOINT2 = 24,
		LLEG_JOINT4 = 25,
		LLEG_JOINT6 = 26,
		RLEG_JOINT2 = 27,
		RLEG_JOINT4 = 28,
		RLEG_JOINT6 = 29,
		LEYE_JOINT1 = 30,
		LEYE_JOINT0 = 31,
		REYE_JOINT1 = 32,
		REYE_JOINT0 = 33,
		ManNiiJointType_Count = (REYE_JOINT0 + 1)
	};

	static std::string manNiiJointTypeStr(ManNiiJointType e)
	{
		switch(e)
		{
			case HEAD_JOINT0 : { return("HEAD_JOINT0" ); }
			case HEAD_JOINT1 : { return("HEAD_JOINT1" ); }
			case LARM_JOINT0 : { return("LARM_JOINT0" ); }
			case LARM_JOINT1 : { return("LARM_JOINT1" ); }
			case LARM_JOINT2 : { return("LARM_JOINT2" ); }
			case LARM_JOINT3 : { return("LARM_JOINT3" ); }
			case LARM_JOINT4 : { return("LARM_JOINT4" ); }
			case LARM_JOINT5 : { return("LARM_JOINT5" ); }
			case LARM_JOINT6 : { return("LARM_JOINT6" ); }
			case LARM_JOINT7 : { return("LARM_JOINT7" ); }
			case RARM_JOINT0 : { return("RARM_JOINT0" ); }
			case RARM_JOINT1 : { return("RARM_JOINT1" ); }
			case RARM_JOINT2 : { return("RARM_JOINT2" ); }
			case RARM_JOINT3 : { return("RARM_JOINT3" ); }
			case RARM_JOINT4 : { return("RARM_JOINT4" ); }
			case RARM_JOINT5 : { return("RARM_JOINT5" ); }
			case RARM_JOINT6 : { return("RARM_JOINT6" ); }
			case RARM_JOINT7 : { return("RARM_JOINT7" ); }
			case WAIST_JOINT0: { return("WAIST_JOINT0"); }
			case WAIST_JOINT1: { return("WAIST_JOINT1"); }
			case WAIST_JOINT2: { return("WAIST_JOINT2"); }
			case ROOT_JOINT0 : { return("ROOT_JOINT0" ); }
			case ROOT_JOINT1 : { return("ROOT_JOINT1" ); }
			case ROOT_JOINT2 : { return("ROOT_JOINT2" ); }
			case LLEG_JOINT2 : { return("LLEG_JOINT2" ); }
			case LLEG_JOINT4 : { return("LLEG_JOINT4" ); }
			case LLEG_JOINT6 : { return("LLEG_JOINT6" ); }
			case RLEG_JOINT2 : { return("RLEG_JOINT2" ); }
			case RLEG_JOINT4 : { return("RLEG_JOINT4" ); }
			case RLEG_JOINT6 : { return("RLEG_JOINT6" ); }
			case LEYE_JOINT1 : { return("LEYE_JOINT1" ); }
			case LEYE_JOINT0 : { return("LEYE_JOINT0" ); }
			case REYE_JOINT1 : { return("REYE_JOINT1" ); }
			case REYE_JOINT0 : { return("REYE_JOINT0" ); }
			//default: { return("illegal"); }
		}
	}

	//Avatar joints
	enum SigVec
	{
		HIP = 0,
		HTOTOR,
		WAIST,
		RSHOULDER,
		LSHOULDER,
		RELBOW,
		LELBOW,
		LEG,
		FOOT
	};

	typedef struct _ManNiiJoint
	{
		ManNiiJointType jointType;
		Quaternion quaternion;
		bool isValid;
	} ManNiiJoint;


	static SigCmn::Vector3 getSigVec(const SigVec &sigvec);

	ManNiiPosture();
	void clearJointValidFlag();

	ManNiiJoint joint[ManNiiJointType_Count];
};

#endif /* SIGVERSE_MAN_NII_POSTURE_H */
