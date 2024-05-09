#pragma once
#include <iostream>
using namespace std;
#include "Figure.h"


class Trapezoid :public Figure
{
	int _sizeA;
	int _sizeB;
	int _height;
public:
	Trapezoid(int, int, int);
	float square();
};

