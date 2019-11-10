#pragma once
#include "Singleton.h"

class CDynamicObject :
	public CDynamicAllocSingleton<CDynamicObject>
{
public:
	CDynamicObject() {}
	~CDynamicObject()
	{
		std::cout << "~CDynamicObject has been called \n";
	}
};
