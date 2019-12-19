#pragma once

class Forward;
class Origin
{
public:
	Origin();
	explicit Origin(int InNumber);
	~Origin();

	void Print();

private:
	static const int DummyNumber = -1;

	Forward* ForwardMember;
};
