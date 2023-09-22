/*
 * chap9.cpp
 *
 *  Created on: 2023. 9. 20.
 *      Author: KOSCOM
 */

// �ڡ١� ����, ������, �޸𸮰��� �ڡ١�

// �����ʹ� ��������?

//1. c��� - �Ű����� ����(Pass-By-Value�� �䳻)
//	==> C++ ���� (Reference)

//2. Heap(���� �޸�)�� ���
//	int *p = new int;
//	int *pa = new int[10];

// ������, ���ϱ� ���� ���� ��.

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
////	*pp = &pi;	// ����!
////	cout << "*pp= " << *pp << endl;
//	double* pd;
//	pd = &pi;
//	cout << "*pd= " << *pd << endl;
//
//	int arr[5] = {1, 2, 3, 4, 5};
//	int sum = Sum(arr, 5);	// ũ�� ������ �ݵ�� �˸���.

	// const ������
	const int score = 92;
	int score2 = 100;
	const int* pScore = &score;	// pScore�� ����Ű�� ���� const
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
//	int* const pScore3 = &score2;	// pScore ��(�ּ�)�� const
//	pScore3 = &score3;

	const int tmp = 200;
	const int* const pScore3 = &tmp; // error, why?

	cout << "*pScore3: " << *pScore3 << endl;
//	score2 = 80;
	return 0;
}

int input_size() {
	// ����ڿ��� �Է¹��� ������ �迭�� ���̸� �����ϰ� ���� ��.
	// ��Ÿ�Ӷ��� �迭 ����� ����. -> �����Ҵ� �ʿ�
	// heap �޸� ���, �����Ӱ� ����� ������ ��ŭ ������� å���� ����. -> �޸� ����

	// C����?
//	int *p = (int*) malloc(sizeof(int));
//	*p = 100;
//	free(p); 	// p�� ����Ű�� ���� �޸� ����

	// C++������ ���
	// 1. ����
	int *p = new int;
	delete p; // p�� �����(X), p�� ����Ű�� ���� �޸𸮸� �����Ѵ�(O)

	// 2. �迭
	int *pa =  new int[5];
	*pa = 1;
	*(pa+1) = 2; 	// pa[1] = 2
	delete [] pa;	// �ݵ�� []�� ������Ѵ�! �ȱ׷��� �Ǿո� ������

	// 3. ��ü
	Circle *pc = new Circle;
	(*pc).getArea();
	pc -> getArea();
	delete pc;

	// 4. ��ü �迭
	Circle *pca = new Circle[3];
	(*(pca+1)).setRadius(3);
	cout << "test! " << (*(pca+1)).getArea() <<endl;
	pca[1].getArea();
	(pca+1)->getArea();
	delete [] pca;

	// 5. ������ �迭 �ڡڡڡڡ� ���� ���� ��!
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
