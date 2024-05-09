#include "RightTriangle.h"

RightTriangle::RightTriangle(int sizeA, int sizeB) :Figure("Right Triangle")
{
	_sizeA = sizeA;
	_sizeB = sizeB;
}

float RightTriangle::square()
{
	return _sizeA*_sizeB/2;
}
