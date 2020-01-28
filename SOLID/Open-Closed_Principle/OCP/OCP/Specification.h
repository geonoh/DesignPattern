#pragma once
#include "Product.h"

template <class T> struct AndSpecification;

template<class T> struct Specification
{
	virtual bool is_Satisfied(T* item) = 0;

	AndSpecification<T> operator&& (Specification&& other)
	{
		return AndSpecification<T>(*this, other);
	}
};

//���� ���Ϳ� ���� �� 
struct ColorSpecification : public Specification<Product>
{

	Color color;

	explicit ColorSpecification(const Color color) : color{ color } {}

	bool is_Satisfied(Product* item) override {
		return item->color == color;
	}
};

//ũ�� ���Ϳ� ���� ��
struct SizeSpecification : public Specification<Product>
{
	Size size;

	explicit SizeSpecification(const Size size) : size{size}{}

	bool is_Satisfied(Product* item) override {
		return item->size == size;
	}

};


//����� ũ�⸦ ���ÿ� ���͸� �ϴ� �������� ����� And ���� ��
template <class T> struct AndSpecification : public Specification<T>
{
	Specification<T>& first;
	Specification<T>& second;

	AndSpecification(Specification<T>& first, Specification<T>& second) : first{ first }, second{ second }{}

	bool is_Satisfied(T* item) override
	{
		return first.is_Satisfied(item) && second.is_Satisfied(item);
	}
};
