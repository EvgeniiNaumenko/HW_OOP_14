#pragma once
#include <iostream>
using namespace std;
#include "Figure.h"

class RightTriangle :public Figure
{
	int _sizeA;
	int _sizeB;
public:
	RightTriangle(int, int);
	float square();
};

