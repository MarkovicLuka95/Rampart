#include "Physics.h"

Vector3 Physics::getForceTotal(double deltaT)
{
	Vector3 result;
	for (auto& i : forces)
	{
		//result += (*i).getForce(deltaT);
	}
	return result;
}
