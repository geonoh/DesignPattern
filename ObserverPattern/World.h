#pragma once
#include "Observer.h"

class CWorld :
	public CSingleton<CWorld>
{
public:
	CWorld() {}
	~CWorld() {}

	virtual void NativeConstruct() override;
	virtual void NativeDestuct() override;

	void Tick() override;
};
