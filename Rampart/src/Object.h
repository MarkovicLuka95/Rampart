#pragma once

#include "Utilities.h"
#include "Sound.h"
#include <vector>

class Object
{
public:
	Object(double x=0, double y=0, double z=0);
	~Object();




	void setColision(bool value)
	{
		colision = value;
	}

	bool getColisionStatus()
	{
		return colision;
	}

	void addSound(Sound* sound)
	{
		sounds.push_back(sound);
		playSound();
	}

private:
	void playSound();
	std::vector<Sound*> sounds;
	bool colision = false;
	double mass=0;
	Vector3 speed = Vector3(0, 0, 0);
	Vector3 rotation = Vector3(0, 0, 0);
	Vector3 position = Vector3(0, 0, 0);
};




