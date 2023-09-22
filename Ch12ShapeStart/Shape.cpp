#include "Shape.h"
#include <iostream>
using namespace std;

Shape::Shape()
	: x(0)	, y(0)
{
	cout << "Shape() ������" << endl;
}
Shape::Shape(int a, int b)
	: x(a)	, y(b)
{
	cout << "Shape(int,int) ������" << endl;
}


Shape::~Shape()
{
	cout << "Shape() �Ҹ���" << endl;
}


void Shape::draw() const
{
	cout << "x=" << x << " y=" << y << endl;
}
//double Shape::GetArea() const
//{
//	return 0;
//}
