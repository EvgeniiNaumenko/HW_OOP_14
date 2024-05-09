#include "Manager.h"

Manager::Manager(string name) :Employer(name), _jobTitle("Manager") {}

void Manager::print()
{
	cout << "Job Title: " << _jobTitle << endl;

	cout << "Name: " << getName() << endl;
}
