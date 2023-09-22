
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
Point Point::operator+(const Point& p)
{
	Point a;
	a.x = this->x + p.x;
	a.y = this->y + p.y;
	return a;
}
bool Point::operator==(const Point& p)
{
	if (this->x == p.x && this->y == p.y)
		return true;
	else
		return false;
}
bool Point::operator!=(const Point& p)
{
	return !(*this == p);
}
Point Point::operator++()//++p
{
	this->x++;
	this->y++;
	return *this;
}
Point Point::operator++(int) //p++
{
	Point temp = *this;
	this->x++;
	this->y++;
	return temp;
}
//형 변환 연산자
Point::operator int()
{//?
	return x;
}
int Point::operator[](int n)
{//?
	if (n == 0)
		return x;
	else if (n == 1)
		return y;
	else
		return -1;
}


//반드시 전역함수로 -friend로 선언
ostream& operator<<(ostream& a, Point& p)
{
	a << "x:" << p.x << " y:" << p.y ;
	return a;
}



