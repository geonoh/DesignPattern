#include "Observer.h"

#include "Project.h"

CObserver::CObserver()
	: ObserverId(0)
{

}

CObserver::~CObserver()
{

}

void CObserver::OnNotify(int InTestNumber)
{
	std::cout << "Observer[" << ObserverId << "] TestNumber : " << InTestNumber << std::endl;
}