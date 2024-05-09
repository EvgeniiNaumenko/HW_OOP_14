#include "Rectangle.h"

Rectangle::Rectangle(int sizeA, int sizeB): Figure("Rectangle")
{
	_sizeA = sizeA;
	_sizeB = sizeB;
}

float Rectangle::square()
{
	return _sizeA * _sizeB;

}
