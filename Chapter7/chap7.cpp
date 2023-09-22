/*
 * chap7.cpp
 *
 *  Created on: 2023. 9. 19.
 *      Author: KOSCOM
 */

// �ڡ١� Ŭ���� �ڡ١�

#include <iostream>
#include <ctime>
#include <iomanip>
#include <time.h>
using namespace std;

class Circle
{
	private:
		int x;
		int y;
		int radius;

	public:
		Circle(int=0, int=0, int=0);
		~Circle();
		void draw() const;
		double getArea() const;
		//inline �Լ��� ó�� (�Լ� ȣ�� ������ �ڵ带 ����, �ڵ尡 ������Ƿ� 5�� �̳��� �Լ����� ���)
		void setRadius(int r)
		{
			radius = r;
		};

};

Circle::Circle(int a, int b, int r) {
	x = a;
	y = b;
	radius = r;
	cout << "Circle ������" << endl;
}

Circle::~Circle() {
	cout << "Circle �Ҹ���" << endl;
	// ������ ���� �� �ڵ� ȣ���
}


// ����������� �Լ��� ����� ��� Link Error(ld)
void Circle::draw() const {
	cout << "x = " << x << ", y = " << y << ", radius = " << radius << endl;
}

double Circle::getArea() const {
	return 3.14 * (radius*radius);
}

// const �����, ����ȭ�� ���ؼ� ����ϴ� ��. ������ �ʴ� ��.
// const ���� 3
// 1. ���� �����
// 2. �Լ� �����
// 3. �Ű������� -> pointer

// inline �Լ� - ª�� �Լ�(5�� �̳�)�� ��� �Դٰ����ϴ� ���ʿ��� ������ ������ �����ϰ� ���. (�����Ϸ��� ���������� ó���ϴ� ����� �ٸ�)

// struct�� �⺻�� public, ��� �Ұ�, C���� ȣȯ�� ������ ���.
// class�� �⺻�� private, ��� ����

class Date
{
	private:
		int year;
		int month;
		int day;
//		int sec;

	public:
		Date(int=0, int= 0, int=0);
		void show();
		int getYear();
		void setYear(int);
		int getMonth();
		void setMonth(int);
		int getDay();
		void setDay(int);

};

//Date::Date() {
//	today?
//}

Date::Date(int y, int m, int d) {
	year = y;
	month = m;
	day = d;
}

void Date::show() {
	cout << "Your Date: " << setw(4) << setfill('0') << year << "." << setw(2) << setfill('0')
			<<  month << "." << setw(2) << setfill('0') << day << endl;
}

int Date::getDay() {
	return day;
}

void Date::setDay(int d) {
	day = d;
}

int Date::getMonth() {
	return month;
}

void Date::setMonth(int m) {
	month = m;
}

int Date::getYear() {
	return year;
}

void Date::setYear(int y) {
	year = y;
}

int main() {

//	cout << "���� �Է�: ";
//	int n;
//	cin >> n;
//
//	cout << "�Է��Ͻ� ������ " << n << "�Դϴ�." << endl;

//	Circle c1;	// class object(instance): �޸𸮿� ����: stack
//	c1.draw();
//	double area = c1.getArea();
//	cout << area << endl;
//
//	Circle c2(100, 100);
//	c2.setRadius(10);
//	c2.draw();
//
//	Circle c3(100, 100, 5);
//	c3.draw();
//	cout << c3.getArea() << endl;
//	c3.setRadius(3);
//	c3.draw();
//	cout << c3.getArea() << endl;

	Date birth(2014, 3, 20);//
	birth.show(); //2014�� 3�� 20��
	Date today; //2023�� 9��19�� ,����ð����ϱ�(p227����)
	today.show();//2023�� 4�� 10��
	cout << birth.getYear() << "�� " << birth.getMonth() << "�� " << birth.getDay() << "��" << endl;
	//2014,3,20
	today.setYear(2024);
	today.show();//2024�� 4�� 10��

	return 0;
}


// #pragma once ?????????????



