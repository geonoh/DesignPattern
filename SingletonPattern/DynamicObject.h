#pragma once
#include "Singleton.h"

class CDynamicObejct :
	public CDynamicAllocSingleton<CDynamicObejct>
{
public:
	CDynamicObejct() {}
	~CDynamicObejct()
	{
		std::cout << "~CDynamicObejct() - has been called \n";
	}
};

