#include <iostream>
#include "Filter.h"

/*	
	OCP 는 객체지향 5대 원칙 SOLID 중 O의 해당하는 열림-닫힘 원칙이다 
	열림 닫힘 원칙이란 "확장"에는 열려있어야 하고, "수정"에는 닫혀있어야 한다는 객체지향 원칙이다.

	이 예제는 주어진 제품 집합을 조건에 따라 필터링 하는 기능을 예시로 들고 있다.
	처음에는 색상만을 기준으로 제품을 구분하는 기능을 구현했다. 하지만 시간이 지나서 크기를 기준으로 한 필터링 기능도 구현해 달라는 
	요구사항이 들어올 수 있다. 그 요구 사항을 구현하기 위해 Filter 클래스를 찾아서 수정한 후 다시 컴파일 해야한다. 

	이는 같은 작업을 반복하는 것으로 비효율적이다. 
	따라서 범용적으로 임의의 조건(함수로 만들어지) 을 지정 받는 필터 함수를 만들면 편리할 것이다. 
	따라서 열림 닫힘 원칙이 필요하다. 즉, 기존 코드의 수정 없이(이미 고객에게 배포된 잘 동작하던 코드를 다시 컴파일 할 필요없이) 필터링을 
	확장할 수 있는 방법이 필요하다.(아마도 따로 컴파일되는 모듈이 있어야 할 것.) 
	
	어떻게 그렇게 할 수 있을 까? -> 먼저 필터링 절차를 개념적으로 두 개의 부분으로 나누어야 한다. 

	첫 째는 "필터(Filter)" 이고 (항목 집합을 넘겨 받아 그 일부를 리턴), 둘째는 "명세(Specification)" (데이터 항목을 구분하기 위한 조건의 정의)이다.  
*/

int main(void)
{
	Product apple{ "Apple",Color::Green,Size::Small };
	Product tree{ "Tree",Color::Green,Size::Large };
	Product house{ "House",Color::Blue,Size::Large };

	std::vector<Product*> all{ &apple,&tree,&house };

	BetterFilter bf;
	ColorSpecification green(Color::Green);
	
	///////////////////////////////////////////////////////////
	//색상으로만 필터
	auto green_things = bf.filter(all, green);

	for (auto& x : green_things) {
		std::cout << x->name << " is green" << std::endl;
	}
	////////////////////////////////////////////////////////////

	///////////////////////////////////////////////////////////
	//크기와 색상으로 필터
	SizeSpecification large(Size::Large);
	AndSpecification<Product> green_and_large{ green,large };

	auto big_green_things = bf.filter(all, green_and_large);

	for (auto& x : big_green_things)
	{
		std::cout << x->name<< " is large and green " << std::endl;
	}
	///////////////////////////////////////////////////////////
	//연산자 오버로딩으로 위보다 더 간단하게 구현	
	auto blue_and_large = ColorSpecification(Color::Blue) && SizeSpecification(Size::Large);

	auto big_blue_things = bf.filter(all, blue_and_large);

	for (auto& x : big_blue_things)
	{
		std::cout << x->name << " is large and blue " << std::endl;
	}

}