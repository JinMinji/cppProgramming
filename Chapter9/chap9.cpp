/*
 * chap9.cpp
 *
 *  Created on: 2023. 9. 20.
 *      Author: KOSCOM
 */

// ★☆★ 참조, 포인터, 메모리관리 ★☆★

// 포인터는 언제쓸까?

//1. c언어 - 매개변수 전달(Pass-By-Value를 흉내)
//	==> C++ 참조 (Reference)

//2. Heap(동적 메모리)를 사용
//	int *p = new int;
//	int *pa = new int[10];

// 포인터, 더하기 빼기 연산 됨.

// +1 => +sizeof(c)

#include <iostream>
using namespace std;

//int Sum(int p[], int size) {
int Sum(int *p, int size) {
	cout << "sizeof(p) = " << sizeof(p) << endl;
	int s=0;
	for(int i = 0; i < 5; i++) {
		s = s + p[i];
		cout << p[i];
	}
}

class Circle {
private:
	int x;
	int y;
	int r;
public:
	Circle(int=0, int=0, int=0);
	double getArea() {
		return 3.14*r*r;
	};
	void setRadius(int=0);
};

Circle::Circle(int a, int b, int c) {
	x = a;
	y = b;
	r = c;
}

void Circle::setRadius(int a) {
	r = a;
}


int pointer_test() {
//	int n = 10;
//	int* p;
//	p = &n;
//
//	cout << "p= " << p << endl;
//	cout << "&n= " << &n << endl;
//	cout << "&p= " << &p << endl;
//
//	*p = 99;
//	cout << "*p= " << *p << endl;
//
//	int n2 = 11;
//
//	int* pp = &n2;
//	double pi = 3.14;
////	*pp = &pi;	// 오류!
////	cout << "*pp= " << *pp << endl;
//	double* pd;
//	pd = &pi;
//	cout << "*pd= " << *pd << endl;
//
//	int arr[5] = {1, 2, 3, 4, 5};
//	int sum = Sum(arr, 5);	// 크기 정보를 반드시 알린다.

	// const 한정자
	const int score = 92;
	int score2 = 100;
	const int* pScore = &score;	// pScore가 가리키는 값이 const
	pScore = &score2;
	cout << "*pScore: " << *pScore << endl;
	const int* pScore2 = &score2;
	cout << "score2: " << score2 << endl;
//	*pScore2 = 80;
	score2 = 70;
	cout << "score2: " << score2 << endl;
	cout << "*pScore: " << *pScore << endl;
	score2 = 70;
	cout << "score2: " << score2 << endl;

	int score3 = 200;
//	int* const pScore3 = &score2;	// pScore 값(주소)이 const
//	pScore3 = &score3;

	const int tmp = 200;
	const int* const pScore3 = &tmp; // error, why?

	cout << "*pScore3: " << *pScore3 << endl;
//	score2 = 80;
	return 0;
}

int input_size() {
	// 사용자에게 입력받은 값으로 배열의 길이를 지정하고 싶을 때.
	// 런타임때에 배열 사이즈를 결정. -> 동적할당 필요
	// heap 메모리 사용, 자유롭게 사용이 가능한 만큼 사용자의 책임이 증가. -> 메모리 해제

	// C언어는?
//	int *p = (int*) malloc(sizeof(int));
//	*p = 100;
//	free(p); 	// p가 가리키는 곳의 메모리 해제

	// C++에서의 용법
	// 1. 변수
	int *p = new int;
	delete p; // p를 지운다(X), p가 가리키는 곳의 메모리를 해제한다(O)

	// 2. 배열
	int *pa =  new int[5];
	*pa = 1;
	*(pa+1) = 2; 	// pa[1] = 2
	delete [] pa;	// 반드시 []를 써줘야한다! 안그러면 맨앞만 지워짐

	// 3. 객체
	Circle *pc = new Circle;
	(*pc).getArea();
	pc -> getArea();
	delete pc;

	// 4. 객체 배열
	Circle *pca = new Circle[3];
	(*(pca+1)).setRadius(3);
	cout << "test! " << (*(pca+1)).getArea() <<endl;
	pca[1].getArea();
	(pca+1)->getArea();
	delete [] pca;

	// 5. 포인터 배열 ★★★★★ 제일 많이 씀!
	Circle *pp[3];
	pp[0] = new Circle(100,100);
	pp[1] = new Circle(10, 10, 5);
	pp[2] = new Circle();
	pp[0]->getArea();

	delete pp[0];
	delete pp[1];
	delete pp[2];

}


int main() {
//	input_size();
	return 0;
}
