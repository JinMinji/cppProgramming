#include "Shape.h"
#include <iostream>
using namespace std;

Shape::Shape()
	: x(0)	, y(0)
{
	cout << "Shape() 생성자" << endl;
}
Shape::Shape(int a, int b)
	: x(a)	, y(b)
{
	cout << "Shape(int,int) 생성자" << endl;
}


Shape::~Shape()
{
	cout << "Shape() 소멸자" << endl;
}


void Shape::Draw() const
{
	cout << "x=" << x << " y=" << y << endl;
}
double Shape::GetArea() const
{
	return 0;
}
