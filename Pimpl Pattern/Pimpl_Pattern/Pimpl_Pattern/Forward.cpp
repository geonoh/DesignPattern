#include "Forward.h"

Forward::Forward()
{
	TestNumber = 0;
	std::cout << "Forward constructor was called. Its member : " << TestNumber << " \n";
}

Forward::Forward(int InNumber)
{
	TestNumber = InNumber;
	std::cout << "Forward constructor(with parameter) was called. Its member : " << TestNumber << " \n";
}

Forward::~Forward()
{
	std::cout << "Forward destructor was called. Its member : " << TestNumber << " \n";
}

void Forward::Print()
{
	std::cout << "Forward::Print was called. Its member : " << TestNumber << " \n";
}
