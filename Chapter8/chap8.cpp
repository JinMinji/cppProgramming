/*
 * chap8.cpp
 *
 *  Created on: 2023. 9. 20.
 *      Author: KOSCOM
 */

// �ڡ١� �迭 �ڡ١�

#include <iostream>
#include "Circle.h"

using namespace std;


int main() {
	const int size = 8;
	int scores[size];	//const�� ���� ���� ��. ������ ���� �� �ִ� ������ ����� ������ �� ����. compile �������� �������� ���� �� �� �־����
	int n = 10;
	scores[0] = 1;
	scores[7] = 7;
	scores[8] = 8;

	int a[size] = {1, 2, 3, 4, 5, 6, 7, 8};
	int b[] = {1, 2, 3, 4};
//	int c[];	//�ʱ�ȭ ���� ä��, ����� ����� �� ����.
	int c[10];
	// �̸� = �����ּ� -> �Լ��̸�, �迭�̸�

	cout << "������ ��? " << scores[9] << endl;

	for (int i = 0; i < 8; i++) {
		cout << "scores[i]: " << scores[i] << endl;
	}

	for (int n : scores)
		cout << n << endl;

	double d[3] = {1.1, 2.2, 3.3};
	for(int i = 0 ; i < 3; i++)
		cout << d[i] << endl;

	auto nn = 10;
	auto k = 5.02;	// �ʱⰪ�� �´� Ÿ�� �ڵ� ����

	int sum = 0;
	for (int i=0; i < size; i++) {
		cout << i+1 << "��° �л��� ����: ";
		cin >> scores[i];
		sum += scores[i];
	}

	cout << "���: " << double(sum) / size << endl;

	return 0;
}

