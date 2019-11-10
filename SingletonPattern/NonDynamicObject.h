#pragma once
#include "Singleton.h"

class CNonDynamicObject :
	public CNonDynamicAllocSingleton<CNonDynamicObject>
{
public:
	CNonDynamicObject() {}
	~CNonDynamicObject()
	{
		std::cout << "~CNonDynamicObject has been called \n";
	}
};

