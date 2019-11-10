#pragma once
#include "Singleton.h"

class CDummyManager :
	public CDynamicAllocSingleton<CDummyManager>
{
public:
	CDummyManager() {}
	~CDummyManager()
	{
		std::cout << "~CDummyManager has been called \n";
	}
};

