#pragma once
#include "Includer.h"

class CObject
{
public:
	CObject() {}
	~CObject() {}

protected:
	virtual void NativeConstruct() = 0;
	virtual void NativeDestuct() = 0;

	virtual void Tick() {}
};
