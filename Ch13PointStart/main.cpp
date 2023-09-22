// Ch7Point.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;
#include "Point.h"

int main()
{
	Point p1;  //x=0 y =0   //디폴트 생성자
	Point p2(2, 4); //x=2 y=4
	Point p3(5);// x=5 y=0  // 변환 생성자  int=>Point


//	p1 = p2 + p3;   // p1 = p2.operator+(p3)
	p1.Print(); // x:7 y:4
//
//	Point p4(2, 4);
//	if (p2 == p4)  //if(p2.operator==(p4) )   ==  !=
//		cout << "같다" << endl;  //같다
//	else
//		cout << "다르다" << endl;
//
//	p1 = p2++; // p1=p2; p2++
//	cout << p1 << endl;//2 4   operator<<  p567참조  전역함수-friend
//	cout << p2 << endl; //3 5
//
//	p1 = ++p4;// p4++; p1=p4
//	cout << p1 << endl;//3 5
//	cout << p4 << endl; //3 5



}
// 실행결과
//x:7 y:4
//같다
//x:2 y:4
//x:3 y:5
//x:3 y:5
//x:3 y:5
