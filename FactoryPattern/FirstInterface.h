#pragma once
#include "Interface.h"

class CFirstInterface :
	public CInterface
{

public:
	CFirstInterface() {}
	~CFirstInterface() {}

	virtual void PrintWhoUR() const override;
};

