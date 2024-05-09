#pragma once
#include <iostream>
using namespace std;
#include "Figure.h"
#include <cmath>

class Circle1 :public Figure
{
	float _radius;
	const float PI;
public:
	Circle1(float);
	float square();
};

