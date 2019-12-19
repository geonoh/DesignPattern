
#include "Point.h"
#include "PointImpl.h"


Point::Point() 
{
	pImpl = std::shared_ptr<PointImpl>(); 
}

void Point::print()
{
	pImpl->print();
}

