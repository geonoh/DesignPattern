#include "ProjectHeader.h"

// Project Init
void Init();
void Destroy();

// Observer
void InitObserver();
void DestroyObserver();

// Widget
void InitWidgets();
void DestroyWidgets();

int main()
{
	Init();

	while (true)
	{
		GetObserver()->Tick();
	}

}

void Init()
{
	InitObserver();
	InitWidgets();
}

void Destroy()
{
	DestroyObserver();
}

void InitObserver()
{
	GetObserver()->NativeConstruct();
}

void DestroyObserver()
{
	GetObserver()->NativeDestuct();
}

void InitWidgets()
{

}

void DestroyWidgets()
{

}
