#include "President.h"

President::President(string name) :Employer(name), _jobTitle("President") {}

void President::print()
{
	cout << "Job Title: " << _jobTitle << endl;
	
	cout << "Name: " << getName() << endl;
}
