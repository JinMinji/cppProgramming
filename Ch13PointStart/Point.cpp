
#include <iostream>
using namespace std;
#include "Point.h"
Point::Point()
	: x(0), y(0)
{
}
Point::Point(int a)
	: x(a), y(0)
{
}

Point::Point(int a, int b)
	: x(a), y(b)
{
}
void Point::Print() const
{
	cout << "x:" << x << " y:" << y << endl;
}
