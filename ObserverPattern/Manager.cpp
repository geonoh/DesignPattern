#include "Manager.h"

#include "Observer.h"

CManager::CManager()
{
	Observers.reserve(5);
}

CManager::~CManager()
{

}

void CManager::AddObserver(CObserver* InObserver)
{
	Observers.push_back(InObserver);
}

bool CManager::RemoveObserver(CObserver* InObserver)
{
	for (int i = 0; i < Observers.size(); ++i)
	{
		if (Observers[i]->GetObserverNumber() == InObserver->GetObserverNumber())
		{
			Observers.erase(Observers.begin() + i);
			return true;
		}
	}

	std::cout << "CManager::RemoveObserver - Input Observer does not exist." << std::endl;
	return false;
}

void CManager::NotifyToObservers(int InTestNumber)
{
	for (CObserver* Observer : Observers)
	{
		Observer->OnNotify(InTestNumber);
	}
}
