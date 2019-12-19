#include "Point.h"
#include "Origin.h"

int main()
{
	// 2019 12 19 SMJ
	//Point p;
	//p.print();

	// 2019 12 19 Gunny
	Origin InstanceWithNoParam;
	InstanceWithNoParam.Print();

	Origin InstanceWithParam(500);
	InstanceWithParam.Print();
}
