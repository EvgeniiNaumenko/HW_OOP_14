#pragma once
#include <iostream>
using namespace std;
#include "Employer.h"

class Manager :public Employer
{
	string _jobTitle;
public:
	Manager(string);
	void print();
};

