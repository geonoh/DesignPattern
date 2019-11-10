#pragma once
#include "Singleton.h"

class CDynamicObject :
	public CDynamicAllocSingleton<CDynamicObject>
{
	CDynamicObject() {}
	~CDynamicObject()
	{
		std::cout << "~CDynamicObject has been called \n";
	}
};
