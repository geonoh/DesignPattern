#include "CObserver.h"
#include "CManager.h"

CObserver* MakeWidget()
{
	return new CObserver;
}

void Init()
{
	// Init instances

}

int main()
{
	Init();

	// Test Logic
	while (true)
	{
		// Get Key input 


		// Check for subscribers and notify subscribers
		CManager* Manager = CManager::Get();
		Manager->CheckSubscribers();
		Manager->NotifySubscriber();
	}
}
