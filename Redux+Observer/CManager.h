#pragma once
#include "Singleton.h"

class CObserver;

class CManager :
	public CSingleton<CManager>
{
public:
	CManager();
	~CManager();

	void AddSubscriber(CObserver* InObserver) { SubscribeWidgets.push_back(InObserver); }

	void CheckSubscribers();
	bool NotifySubscriber();

	// each manager can get subscribers
protected:
	std::vector<CObserver*> SubscribeWidgets;

};
