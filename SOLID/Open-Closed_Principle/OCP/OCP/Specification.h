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

//색상 필터에 대한 명세 
struct ColorSpecification : public Specification<Product>
{

	Color color;

	explicit ColorSpecification(const Color color) : color{ color } {}

	bool is_Satisfied(Product* item) override {
		return item->color == color;
	}
};

//크기 필터에 대한 명세
struct SizeSpecification : public Specification<Product>
{
	Size size;

	explicit SizeSpecification(const Size size) : size{size}{}

	bool is_Satisfied(Product* item) override {
		return item->size == size;
	}

};


//색상과 크기를 동시에 필터링 하는 조건으로 만드는 And 복합 명세
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
