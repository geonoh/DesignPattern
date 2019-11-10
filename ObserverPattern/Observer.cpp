#include "Observer.h"

//////////////////////////////////////////////////////////////////////////
// Observer content
#include "World.h"
//////////////////////////////////////////////////////////////////////////

void CObserver::NativeConstruct()
{
}

void CObserver::NativeDestuct()
{
}

void CObserver::Tick()
{
	GetWorld()->Tick();
}

void CObserver::Subscirbe(CObject* InObejct, EObserverContent InObserverContent)
{
	// Gunny Todo
	// apply InObejct to Observer
}

CWorld* CObserver::GetWorld()
{
	return CWorld::Get();
}
