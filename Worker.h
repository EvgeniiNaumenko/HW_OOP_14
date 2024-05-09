#pragma once
#include <iostream>
using namespace std;
#include "Employer.h"

class Worker :public Employer
{
	string _jobTitle;
public:
	Worker(string);
	void print();
};

