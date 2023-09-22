#include "Circle.h"
#include <iostream>
using namespace std;

Circle::Circle()
	: radius(0)
{
	cout << "Circle() ������" << endl;
}
Circle::Circle(int x, int y, int r)
	: radius(r), Shape(x,y)
{
	cout << "Circle(int,int,int) ������" << endl;
}
Circle::~Circle()
{
	cout << "Circle() �Ҹ���" << endl;
}
void Circle::draw() const
{
	Shape::draw();
	cout << "radius=" << radius << endl;
}
double Circle::getArea() const
{
	return 3.14 * radius*radius;
}
