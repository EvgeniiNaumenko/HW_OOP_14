#pragma once
#include <iostream>
using namespace std;
#include "Figure.h"

class Rectangle:public Figure
{
	int _sizeA;
	int _sizeB;
public:
	Rectangle(int, int);
	float square();
};

