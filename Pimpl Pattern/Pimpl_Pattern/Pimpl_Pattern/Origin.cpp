#include "Origin.h"
#include "Forward.h"

Origin::Origin()
{
	std::cout << "Origin constructor was called\n";
	ForwardMember = new Forward(DummyNumber);
}

Origin::Origin(int InNumber)
{
	std::cout << "Origin constructor(with parameter) was called\n";
	ForwardMember = new Forward(InNumber);
}

Origin::~Origin()
{
	std::cout << "Origin destructor was called\n";

	delete ForwardMember;
}

void Origin::Print()
{
	ForwardMember->Print();
}