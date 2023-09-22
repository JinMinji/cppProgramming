/*
 * chap7.cpp
 *
 *  Created on: 2023. 9. 19.
 *      Author: KOSCOM
 */

// ★☆★ 클래스 ★☆★

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
		//inline 함수로 처리 (함수 호출 때마다 코드를 삽입, 코드가 길어지므로 5줄 이내의 함수에만 사용)
		void setRadius(int r)
		{
			radius = r;
		};

};

Circle::Circle(int a, int b, int r) {
	x = a;
	y = b;
	radius = r;
	cout << "Circle 생성자" << endl;
}

Circle::~Circle() {
	cout << "Circle 소멸자" << endl;
	// 스코프 나갈 때 자동 호출됨
}


// 선언되지않은 함수를 사용할 경우 Link Error(ld)
void Circle::draw() const {
	cout << "x = " << x << ", y = " << y << ", radius = " << radius << endl;
}

double Circle::getArea() const {
	return 3.14 * (radius*radius);
}

// const 상수는, 최적화를 위해서 사용하는 것. 변하지 않는 값.
// const 사용법 3
// 1. 변수 선언시
// 2. 함수 선언시
// 3. 매개변수에 -> pointer

// inline 함수 - 짧은 함수(5줄 이내)의 경우 왔다갔다하는 불필요한 과정을 버리고 간결하게 사용. (컴파일러가 내부적으로 처리하는 방법이 다름)

// struct는 기본이 public, 상속 불가, C와의 호환성 때문에 사용.
// class는 기본이 private, 상속 가능

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

//	cout << "정수 입력: ";
//	int n;
//	cin >> n;
//
//	cout << "입력하신 정수는 " << n << "입니다." << endl;

//	Circle c1;	// class object(instance): 메모리에 생성: stack
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
	birth.show(); //2014년 3월 20일
	Date today; //2023년 9월19일 ,현재시간구하기(p227참고)
	today.show();//2023년 4월 10일
	cout << birth.getYear() << "년 " << birth.getMonth() << "월 " << birth.getDay() << "일" << endl;
	//2014,3,20
	today.setYear(2024);
	today.show();//2024년 4월 10일

	return 0;
}


// #pragma once ?????????????



