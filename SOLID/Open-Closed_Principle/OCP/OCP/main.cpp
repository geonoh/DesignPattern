#include <iostream>
#include "Filter.h"

/*	
	OCP �� ��ü���� 5�� ��Ģ SOLID �� O�� �ش��ϴ� ����-���� ��Ģ�̴� 
	���� ���� ��Ģ�̶� "Ȯ��"���� �����־�� �ϰ�, "����"���� �����־�� �Ѵٴ� ��ü���� ��Ģ�̴�.

	�� ������ �־��� ��ǰ ������ ���ǿ� ���� ���͸� �ϴ� ����� ���÷� ��� �ִ�.
	ó������ ������ �������� ��ǰ�� �����ϴ� ����� �����ߴ�. ������ �ð��� ������ ũ�⸦ �������� �� ���͸� ��ɵ� ������ �޶�� 
	�䱸������ ���� �� �ִ�. �� �䱸 ������ �����ϱ� ���� Filter Ŭ������ ã�Ƽ� ������ �� �ٽ� ������ �ؾ��Ѵ�. 

	�̴� ���� �۾��� �ݺ��ϴ� ������ ��ȿ�����̴�. 
	���� ���������� ������ ����(�Լ��� �������) �� ���� �޴� ���� �Լ��� ����� ���� ���̴�. 
	���� ���� ���� ��Ģ�� �ʿ��ϴ�. ��, ���� �ڵ��� ���� ����(�̹� ������ ������ �� �����ϴ� �ڵ带 �ٽ� ������ �� �ʿ����) ���͸��� 
	Ȯ���� �� �ִ� ����� �ʿ��ϴ�.(�Ƹ��� ���� �����ϵǴ� ����� �־�� �� ��.) 
	
	��� �׷��� �� �� ���� ��? -> ���� ���͸� ������ ���������� �� ���� �κ����� ������� �Ѵ�. 

	ù °�� "����(Filter)" �̰� (�׸� ������ �Ѱ� �޾� �� �Ϻθ� ����), ��°�� "��(Specification)" (������ �׸��� �����ϱ� ���� ������ ����)�̴�.  
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
	//�������θ� ����
	auto green_things = bf.filter(all, green);

	for (auto& x : green_things) {
		std::cout << x->name << " is green" << std::endl;
	}
	////////////////////////////////////////////////////////////

	///////////////////////////////////////////////////////////
	//ũ��� �������� ����
	SizeSpecification large(Size::Large);
	AndSpecification<Product> green_and_large{ green,large };

	auto big_green_things = bf.filter(all, green_and_large);

	for (auto& x : big_green_things)
	{
		std::cout << x->name<< " is large and green " << std::endl;
	}
	///////////////////////////////////////////////////////////
	//������ �����ε����� ������ �� �����ϰ� ����	
	auto blue_and_large = ColorSpecification(Color::Blue) && SizeSpecification(Size::Large);

	auto big_blue_things = bf.filter(all, blue_and_large);

	for (auto& x : big_blue_things)
	{
		std::cout << x->name << " is large and blue " << std::endl;
	}

}