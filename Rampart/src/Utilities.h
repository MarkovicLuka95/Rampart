#pragma once

struct Vector3 
{
public:
	Vector3(double x, double y, double z) 
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}
	double x;
	double y;
	double z;
};