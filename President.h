#pragma once
#include <iostream>
using namespace std;
#include "Employer.h"


class President:public Employer
{
	string _jobTitle;
public:
	President(string);
	void print();
};

