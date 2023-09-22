/*
 * chap8.cpp
 *
 *  Created on: 2023. 9. 20.
 *      Author: KOSCOM
 */

// ★☆★ 배열 ★☆★

#include <iostream>
#include "Circle.h"

using namespace std;


int main() {
	const int size = 8;
	int scores[size];	//const를 빼면 오류 남. 언제든 변할 수 있는 변수로 사이즈를 설정할 수 없다. compile 시점에는 고정적인 값을 알 수 있어야함
	int n = 10;
	scores[0] = 1;
	scores[7] = 7;
	scores[8] = 8;

	int a[size] = {1, 2, 3, 4, 5, 6, 7, 8};
	int b[] = {1, 2, 3, 4};
//	int c[];	//초기화 안한 채로, 사이즈를 비워둘 수 없다.
	int c[10];
	// 이름 = 시작주소 -> 함수이름, 배열이름

	cout << "가비지 값? " << scores[9] << endl;

	for (int i = 0; i < 8; i++) {
		cout << "scores[i]: " << scores[i] << endl;
	}

	for (int n : scores)
		cout << n << endl;

	double d[3] = {1.1, 2.2, 3.3};
	for(int i = 0 ; i < 3; i++)
		cout << d[i] << endl;

	auto nn = 10;
	auto k = 5.02;	// 초기값에 맞는 타입 자동 설정

	int sum = 0;
	for (int i=0; i < size; i++) {
		cout << i+1 << "번째 학생의 점수: ";
		cin >> scores[i];
		sum += scores[i];
	}

	cout << "평균: " << double(sum) / size << endl;

	return 0;
}

