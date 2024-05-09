#include "Trapezoid.h"

Trapezoid::Trapezoid(int sizeA, int sizeB, int height) :Figure("Trapezoid")
{
	_sizeA = sizeA;
	_sizeB = sizeB;
	_height = height;
}

float Trapezoid::square()
{
	return (_sizeA+_sizeB)*_height/2;
}
