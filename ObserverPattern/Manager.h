#pragma once
#include "Project.h"

enum class EManagerType
{
	Test,
	// you can add more Manager types
};

class CObserver;

class CManager
{
public:
	CManager();
	~CManager();

	void AddObserver(CObserver* InObserver);
	bool RemoveObserver(CObserver* InObserver);
	void NotifyToObservers(int InTestNumber);

private:
	std::vector<CObserver*> Observers;
};
