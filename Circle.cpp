#include "Circle.h"

Circle1::Circle1(float radius):Figure("Circle"), PI(3.14)
{
	_radius = radius;
}

float Circle1::square()
{
	return PI*pow(_radius,2);
}
