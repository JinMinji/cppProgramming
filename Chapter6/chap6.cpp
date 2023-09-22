/*
 * chap6.cpp
 *
 *  Created on: 2023. 9. 18.
 *      Author: KOSCOM
 */

// ★☆★ 함수 ★☆★

#include <iostream>
#include <ctime>
using namespace std;

int larger(int x, int y) {

	int max;
	if (x > y)
		max = x;
	else
		max = y;
	return max;
}

int cur_time() {
	long timeAsSecond = time(0);
	int curSec = timeAsSecond % 60;
	long timeAsMin = timeAsSecond / 60;
	int curMin = timeAsMin % 60;
	long timeAsHour = timeAsMin / 60;
	int curHour = (timeAsHour + 9) % 24;	//한국시간 +9

	cout << "현재 시간은 " << curHour << "시 " << curMin << "분 " << curSec << "초 입니다.";
	return 0;
}

void fun(int); // 프로토타입
int fun1(int);
void fun2(int&);
void fun3(int*);

void divide(int x, int y, int& res, int& mod) {
	res = x / y;
	mod = x % y;
}

int main() {

//	cout << "큰 수는 " << larger(10, 20) << endl;
	cur_time();
//	int n = 10;
//	fun(n); // 함수 콜
//	cout << "n = " << n << endl;
//	n = fun1(n);
//	cout << "n = " << n << endl;
//	fun2(n);
//	cout << "n = " << n << endl;
//	fun3(&n);
//	cout << "n = " << n << endl;
//
//	int res, mod;
//	int a = 10, y = 3;
//	divide(a, y, res, mod);
//	cout << a << " % " << y << " 연산 결과  몫: " << res << ", 나머지: " << mod;

	return 0;
}

// 함수 정의
void fun(int x) {
	x++;
}

int fun1(int x) {	// pass-by-reference
	return ++x;
}

void fun2(int& x) {	// pointer 흉내
	x++;
}
//레퍼런스? 변수의 닉네임(alias). 초기값 반드시 필요
//변수와 타입이 같다.
// pointer 흉내
// c++에서는 레퍼런스 많이 씀

void fun3(int*x) {
	(*x)++;
}

// 오버로딩(overloading), 중복. 같은 이름, 다른 매개변수(개수, 타입)
// 오버라이딩(overriding), 재정의. 상속받은 하위클래스에서 변경하여 사용하는 것


// 기본 매개변수는 선언에서만 가능, 바디에선 불가
// 오른쪽부터 기본매개변수 지정 가능.

// 범위 지정 연산자 '::' -> 전역변수
