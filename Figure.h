#pragma once
#include <iostream>
using namespace std;


//Створити абстрактний базовий клас з віртуальною
//функцією — площа.
class Figure
{
	string _figure;
public:
	Figure(string);
	string getF();
	virtual float square() = 0;
};

