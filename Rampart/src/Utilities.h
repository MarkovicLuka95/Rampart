#pragma once


#ifndef __UTILITIES_H__
#define __UTILITIES_H__


struct Vector3 {


	Vector3(double x, double y, double z) 
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}
	Vector3()
	{
		this->x = 0;
		this->y = 0;
		this->z = 0;
	}
	Vector3(const Vector3& old_obj)
	{
		this->x = old_obj.x;
		this->y = old_obj.y;
		this->z = old_obj.z;
	}


	double x;
	double y;
	double z;

	friend Vector3 operator+(Vector3 lhs, Vector3 const& rhs);
	friend Vector3 operator-(Vector3 lhs, Vector3 const& rhs);
	Vector3& operator+=(Vector3 const& rhs);
};



#endif // !__UTILITIES_H__