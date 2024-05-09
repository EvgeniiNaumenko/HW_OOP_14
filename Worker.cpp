#include "Worker.h"

Worker::Worker(string name) :Employer(name), _jobTitle("Worker") {}

void Worker::print()
{
	cout << "Job Title: " << _jobTitle << endl;

	cout << "Name: " << getName() << endl;
}
