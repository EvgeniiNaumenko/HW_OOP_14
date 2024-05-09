#pragma once
#include <iostream>
using namespace std;

//Створити абстрактний базовий клас Employer(службовець) з чисто віртуальною функцією Print().
class Employer
{
	string _name;
public:
	Employer(string);
	string getName();
	virtual void print() = 0;

};

