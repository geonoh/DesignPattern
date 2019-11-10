#include "DynamicObejct.h"
#include "NonDynamicObject.h"

int main()
{
	CDynamicObject* DynamicObject = CDynamicObject::Get();
	CNonDynamicObject* NonDynamicObject = CNonDynamicObject::Get();

	// DynamicObject should call a CDynamicAllocSingleton::Destroy
	DynamicObject->Destroy();
	DynamicObject = nullptr;
}
