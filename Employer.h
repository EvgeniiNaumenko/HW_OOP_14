#pragma once
#include <iostream>
using namespace std;

//�������� ����������� ������� ���� Employer(����������) � ����� ���������� �������� Print().
class Employer
{
	string _name;
public:
	Employer(string);
	string getName();
	virtual void print() = 0;

};

