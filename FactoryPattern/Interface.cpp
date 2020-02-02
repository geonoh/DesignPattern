#include "Interface.h"
#include "FirstInterface.h"
#include "SecondInterface.h"

void CInterface::PrintWhoUR() const
{
	// this is a interface class.
	// you can't instancing
}

CInterface* CInterface::CreateInstance(EInterfaceType InInterfaceType)
{
	switch (InInterfaceType)
	{
		case EInterfaceType::First:
			return new CFirstInterface;
		case EInterfaceType::Second:
			return new CSecondInterface;
		default:
			std::cout << "CInterface::CreateInstance - InInterfaceType does not exist." << std::endl;
			return nullptr;
	}
}
