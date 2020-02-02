#pragma once
#include "Interface.h"
class CSecondInterface :
	public CInterface
{
public:
	CSecondInterface() {}
	~CSecondInterface() {}

	virtual void PrintWhoUR() const override;
};

