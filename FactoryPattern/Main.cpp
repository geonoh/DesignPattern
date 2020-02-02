#include "Interface.h"
#include "FirstInterface.h"
#include "SecondInterface.h"

#include <vector>

int main()
{
	std::vector<CInterface*> InterfaceContainer;
	for (int i = 0; i < static_cast<int>(EInterfaceType::Max); ++i)
	{
		InterfaceContainer.push_back(
			CInterface::CreateInstance(EInterfaceType(i))
		);
	}

	for (const auto& Iter : InterfaceContainer)
	{
		Iter->PrintWhoUR();
	}

	// delete elements
	for (const auto& Iter : InterfaceContainer)
	{
		delete Iter;
	}
}
