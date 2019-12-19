#pragma once
#include <iostream>
class PointImpl;			//완전한 선언이 없어도 포인터는 가능
class Point
{
	std::shared_ptr<PointImpl> pImpl;
public:
	Point();		//어떠한 값을 포인터로 쓰고 있다면 헤더 포함 대신에 전방선언만 해주면 된다
	void print();
};

