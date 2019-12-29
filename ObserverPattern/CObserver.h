#pragma once

#include "Object.h"

enum class ESubscribeType
{
	// Gunny Temporary code
	Manager,

	// Gunny Todo
	Character,
	User,
};

// usually using in widget
// Observer can subscribe to manager
// when the data of manager is changed, then shoot data to subscribers

class CObserver :
	public CObject
{
public:
	CObserver();
	~CObserver();

	virtual void NativeConstruct() override;
	virtual void NativeDestuct() override;

	virtual void Tick() override;

protected:
	void Init();
	void SubscribeTo(ESubscribeType InSubs);
	virtual bool Receive();
};
