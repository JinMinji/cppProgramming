/*
 * chap6.cpp
 *
 *  Created on: 2023. 9. 18.
 *      Author: KOSCOM
 */

// �ڡ١� �Լ� �ڡ١�

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
	int curHour = (timeAsHour + 9) % 24;	//�ѱ��ð� +9

	cout << "���� �ð��� " << curHour << "�� " << curMin << "�� " << curSec << "�� �Դϴ�.";
	return 0;
}

void fun(int); // ������Ÿ��
int fun1(int);
void fun2(int&);
void fun3(int*);

void divide(int x, int y, int& res, int& mod) {
	res = x / y;
	mod = x % y;
}

int main() {

//	cout << "ū ���� " << larger(10, 20) << endl;
	cur_time();
//	int n = 10;
//	fun(n); // �Լ� ��
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
//	cout << a << " % " << y << " ���� ���  ��: " << res << ", ������: " << mod;

	return 0;
}

// �Լ� ����
void fun(int x) {
	x++;
}

int fun1(int x) {	// pass-by-reference
	return ++x;
}

void fun2(int& x) {	// pointer �䳻
	x++;
}
//���۷���? ������ �г���(alias). �ʱⰪ �ݵ�� �ʿ�
//������ Ÿ���� ����.
// pointer �䳻
// c++������ ���۷��� ���� ��

void fun3(int*x) {
	(*x)++;
}

// �����ε�(overloading), �ߺ�. ���� �̸�, �ٸ� �Ű�����(����, Ÿ��)
// �������̵�(overriding), ������. ��ӹ��� ����Ŭ�������� �����Ͽ� ����ϴ� ��


// �⺻ �Ű������� ���𿡼��� ����, �ٵ𿡼� �Ұ�
// �����ʺ��� �⺻�Ű����� ���� ����.

// ���� ���� ������ '::' -> ��������
