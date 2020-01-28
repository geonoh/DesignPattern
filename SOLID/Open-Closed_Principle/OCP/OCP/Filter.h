#pragma once
#include "Product.h"
#include "Specification.h"

template <class T> struct Filter
{
	virtual std::vector<T*> filter(std::vector<T*> items, Specification<T>& spec) = 0;
};

struct BetterFilter : public Filter<Product>
{

	std::vector<Product*> filter(std::vector<Product*> items, Specification<Product>& spec) override
	{
		std::vector<Product*> result;
		for (auto& p : items)
		{
			if (spec.is_Satisfied(p))
			{
				result.push_back(p);

			}
		
		}
		return result;
	}
};
