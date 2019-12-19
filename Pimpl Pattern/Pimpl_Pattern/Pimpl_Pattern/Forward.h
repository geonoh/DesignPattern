#pragma once
#include <iostream>

class Forward
{
public:
	Forward();
	explicit Forward(int InTestNumber);
	~Forward();

	void Print();

private:
	int TestNumber;
};
