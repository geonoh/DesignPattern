#pragma once
#include "Singleton.h"

class CThreadManager :
	public CDynamicAllocSingleton<CThreadManager>
{
public:
	CThreadManager() {}
	 ~CThreadManager()
	 {
		 std::cout << "~ThreadManager() has been called \n";
	 }
};

