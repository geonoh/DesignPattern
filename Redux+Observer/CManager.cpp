#include "CManager.h"

CManager::CManager()
{

}

CManager::~CManager()
{

}

void CManager::CheckSubscribers()
{
	for (const CObserver* Observer : SubscribeWidgets)
	{
	}
}

bool CManager::NotifySubscriber()
{
	return false;
}
