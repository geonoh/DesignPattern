#pragma once

class CObserver
{
public:
	CObserver();
	explicit CObserver(int InNumber) { ObserverId = InNumber; }

	CObserver(const CObserver& InObject) { this->ObserverId = InObject.ObserverId; }
	CObserver(CObserver&& InObject) noexcept { this->ObserverId = InObject.ObserverId; }

	~CObserver();

	int GetObserverNumber() const { return ObserverId; }
	void OnNotify(int InTestNumber);

private:
	int ObserverId;
};
