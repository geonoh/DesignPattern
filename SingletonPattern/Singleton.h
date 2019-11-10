#pragma once
#include "Includer.h"

//////////////////////////////////////////////////////////////////////////
// 동적할당 싱글톤
// 따로 싱글톤의 Destroy 함수를 불러서 동적할당을 해제해야하는 번거로움이 있다. 
// * new 로 생성된 객체이기때문에 자동으로 소멸자를 불러주지 않는다. 
//////////////////////////////////////////////////////////////////////////
template<typename T>
class CDynamicAllocSingleton
{
public:
	CDynamicAllocSingleton() {}
	virtual ~CDynamicAllocSingleton()
	{
		std::cout << "~CDynamicAllocSingleton has been called \n";
	}

	static T* Get()
	{
		if (!Instance)
		{
			Instance = new T;
		}

		return Instance;
	}

	static void Destroy()
	{
		std::cout << "~CDynamicAllocSingleton has been called \n";
		if (Instance)
		{
			delete Instance;
		}
	}

private:
	static T* Instance;
};

template<typename T>
T* CDynamicAllocSingleton<T>::Instance = nullptr;

//////////////////////////////////////////////////////////////////////////
// 안전한 버전의 싱글톤
// 소멸자가 불리면서 해당 객체는 알아서 사라진다 (scope 에서 벗어난 객체가 사라지듯 ㅎ)
//////////////////////////////////////////////////////////////////////////
template<typename T>
class CNonDynamicAllocSingleton
{
public:
	CNonDynamicAllocSingleton() {}
	~CNonDynamicAllocSingleton()
	{
		std::cout << "~CNonDynamicAllocSingleton has been called \n";
	}

	static T* Get()
	{
		return &Instance;
	}

private:
	static T Instance;
};

template<typename T>
T CNonDynamicAllocSingleton<T>::Instance;
