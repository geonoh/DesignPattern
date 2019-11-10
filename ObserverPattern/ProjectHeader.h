#pragma once

#include "Singleton.h"
#include "Observer.h"

CObserver* GetObserver()
{
	return CObserver::Get();
}

void Subscirbe(CObject* InObejct, EObserverContent InObserverContent)
{
	CObserver* Observer = CObserver::Get();
	Observer->Subscirbe(InObejct, InObserverContent);
}
