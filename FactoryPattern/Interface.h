#pragma once
#include <iostream>

enum class EInterfaceType
{
	First,
	Second,
	Max
};

class CInterface
{
public:
	CInterface() {}
	~CInterface() {}

	virtual void PrintWhoUR() const = 0;

	static CInterface* CreateInstance(EInterfaceType InInterfaceType);
};
