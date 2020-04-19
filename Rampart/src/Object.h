#pragma once
#ifndef __OBJECT_H__
#define __OBJECT_H__



#include "Utilities.h"

#include "Physics.h"


class Object
{
public:
	Object(double x = 0, double y = 0, double z = 0);
	~Object();



	inline void setCollisionStatus(bool value) { collision = value; }
	inline bool getCollisionStatus() { return collision; }
	


	Vector3 getForceTotal(double deltaT) { return physicsManager.getForceTotal(deltaT); }
	void addForce(Force* force) { physicsManager.addForce(force); }


	void addSound(Sound* sound)
	{
		sounds.push_back(sound);
		playSound();
	}

private:

	bool collision = false;
	double mass = 0;
	Vector3 speed = Vector3();
	Vector3 rotation = Vector3();
	Vector3 position = Vector3();
	Physics physicsManager = Physics();

};

#endif //__OBJECT_H__


