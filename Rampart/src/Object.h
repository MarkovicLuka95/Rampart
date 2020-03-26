#pragma once

#include "Utilities.h"

class Object
{
public:
	Object(double x=0, double y=0, double z=0);
	~Object();




	void setColision(bool value) {
		colision = value;
	}

	bool getColisionStatus() {
		return colision;
	}

private:
	bool colision = false;
	double mass=0;
	Vector3 speed = Vector3(0, 0, 0);
	Vector3 rotation = Vector3(0, 0, 0);
	Vector3 position = Vector3(0, 0, 0);
};




