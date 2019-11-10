#pragma once
#include "Singleton.h"

enum class EObserverContent
{
	World,
	Max,
};

// forward declare
class CWorld;
class CObject;

class CObserver
	: public CSingleton<typename CObserver>
{
public:
	CObserver() {}
	~CObserver() {}

	// Construct and Destruct
	virtual void NativeConstruct() override;
	virtual void NativeDestuct() override;

	virtual	void Tick() override;

	// Subscriber 
	void Subscirbe(CObject* InObejct, EObserverContent InObserverContent);

private:
	CWorld* GetWorld();
};
