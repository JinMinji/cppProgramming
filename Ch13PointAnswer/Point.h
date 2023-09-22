#pragma once
#include <iostream>
using namespace std;

class Point
{
	friend ostream& operator<<(ostream& a, Point& p);

private:
	int x;
	int y;
public:
	//생성자 구현
	Point();
	Point(int);//변환 생성자  int=>Point
	Point(int, int);
	//Point(int=0, int=0);
	void Print() const;
	Point operator+(const Point&);
	bool operator==(const Point&);
	bool operator!=(const Point&);
	Point operator++();
	Point operator++(int);
	//explicit operator int(); //형 변환 연산자
	operator int(); //형 변환 연산자
	int operator[](int n);
};
