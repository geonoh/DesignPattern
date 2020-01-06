#include "Project.h"
#include "Observer.h"
#include "Manager.h"

static const int NUM_OBSERVER = 5;
static const int ASCII_TO_INT_DIFF = 48;

CManager* Manager = nullptr;
std::vector<CObserver*> Observers;

void Init();
void ReceiveKeyInput();
void Destructor();

int main()
{
	Init();

	while (true)
	{
		ReceiveKeyInput();
	}
}

void Init()
{
	Manager = new CManager();

	for (int i = 0; i < NUM_OBSERVER; ++i)
	{
		Observers.emplace_back(new CObserver(i));
	}

	// You can add more observers
	Manager->AddObserver(Observers[0]);
	Manager->AddObserver(Observers[1]);
	Manager->AddObserver(Observers[2]);
	Manager->AddObserver(Observers[3]);
}

void ReceiveKeyInput()
{
	while (true)
	{
		int InputAscii = _getch();
		InputAscii -= ASCII_TO_INT_DIFF;
		CObserver* CalledObserver = nullptr;

		switch (InputAscii)
		{
			case 0:
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
				break; // fall through
			default:
				Destructor();
				exit(1);
				break;
		}

		Manager->NotifyToObservers(InputAscii);
	}
}

void Destructor()
{
	for (int i = 0; i < NUM_OBSERVER; ++i)
	{
		delete Observers[i];
	}

	Observers.clear();

	delete Manager;
	Manager = nullptr;
}
