#include "Circle.h"
#include <iostream>
using namespace std;

Circle::Circle()
	: radius(0)
{
	cout << "Circle() 생성자" << endl;
}
Circle::Circle(int x, int y, int r)
	: radius(r), Shape(x,y)
{
	cout << "Circle(int,int,int)  생성자" << endl;
}
Circle::~Circle()
{
	cout << "Circle()소멸자" << endl;
}
void Circle::Draw() const
{
	Shape::Draw();
	cout << "radius=" << radius << endl;
}
double Circle::GetArea() const
{
	return 3.14 * radius*radius;
}
