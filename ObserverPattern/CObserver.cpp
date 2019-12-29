#include "CObserver.h"

#include "CManager.h"

CObserver::CObserver()
{

}

CObserver::~CObserver()
{

}

void CObserver::NativeConstruct()
{

}

void CObserver::NativeDestuct()
{

}

void CObserver::Tick()
{
	CObject::Tick();
}

void CObserver::Init()
{

}

void CObserver::SubscribeTo(ESubscribeType InSubs)
{
	switch (InSubs)
	{
		case ESubscribeType::Manager:
		{
			CManager* Manager = CManager::Get();
			Manager->AddSubscriber(this);
			break;
		}
		// Gunny Todo
		case ESubscribeType::Character:
		{
			break;
		}
		case ESubscribeType::User:
		{
			break;
		}
		default:
			std::cout << "CObserver::SubscribeTo - SubscribeType does not exist." << std::endl;
			break;
	}
}

bool CObserver::Receive()
{
	return false;
}
