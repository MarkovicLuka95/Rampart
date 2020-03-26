#include "Object.h"

Object::Object(double x, double y, double z) {
	position.x = x;
	position.y = y;
	position.z = z;
}

Object::~Object() {

}

void Object::playSound()
{
	for (auto s : sounds) 
	{
		s->playSound();
	}
}
