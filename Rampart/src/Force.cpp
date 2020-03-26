#include "Force.h"
#include <math>

#define FORCE_CONST -1000

Force::Force(Vector3 firstValue, double k, double duration)
{
	this->firstValue = firstValue;
	this->k = k;
	this->duration = duration;
}

Vector3 Force::getForce(double deltaT)
{
	//Force does not depend on time if duration == -1000
	if (this->duration == FORCE_CONST)
	{
		return this->Value;
	}
	//If time elapsed is lower than the duration of the force
	//You calculate it using the formula F = F0 * (1 + k * deltaT)
	else if (this->elapsed <= this->duration)
	{
		this->Value.x += this->k * deltaT;
		this->Value.y += this->k * deltaT;
		this->Value.z += this->k * deltaT;
		this->elapsed += deltaT;
	}
	//If time elapsed is higher than the duration of the force it's set to 0
	else
	{
		this->Value.x = 0;
		this->Value.y = 0;
		this->Value.z = 0;
		this->finished = true;
	}
}

double Force::getIntensity()
{
	return sqrt(this->Value.x * this->Value.x	+	this->Value.y * this->Value.y	+	this->Value.z * this->Value.z);
}