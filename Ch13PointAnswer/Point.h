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
	//������ ����
	Point();
	Point(int);//��ȯ ������  int=>Point
	Point(int, int);
	//Point(int=0, int=0);
	void Print() const;
	Point operator+(const Point&);
	bool operator==(const Point&);
	bool operator!=(const Point&);
	Point operator++();
	Point operator++(int);
	//explicit operator int(); //�� ��ȯ ������
	operator int(); //�� ��ȯ ������
	int operator[](int n);
};
