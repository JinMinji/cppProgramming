/*
 * FunctionTemplate.cpp
 *
 *  Created on: 2023. 9. 22.
 *      Author: KOSCOM
 */

#include <iostream>
#include <algorithm>	// STL

using namespace std;

//int smaller(int a, int b) {
//	return a < b ? a : b;
//}
//
//double smaller(double a, double b) {
//	return a < b ? a : b;
//}

// ���� �ڵ嵵 ������,, ������ Ÿ�Ը��� �� ���������� ����, ���ø� �������

template<typename T>	// ���ø�, �Ϲ�ȭ
T smaller(T a, T b) {
	return a < b ? a : b;
}	//��� Ÿ�Կ��� ���������� ���� ����.
// ȣ�� �� Ÿ���� ��� -> smaller<int, int>(x, y)

int main() {
	int x = 10, y = 20;
	cout << smaller(x, y) << endl;

	return 0;
}

//char* smaller(char *c, char b*) {
//	if(strcmp(a, b) < 0)
//		return a;
//	else
//		return b;
//}

template<typename T>
void mySwap(T& a, T& b) {
	T tmp = a;
	a = b;
	b = tmp;
}

//template<typename _Tp> //under score? _ ���־��Ե�?



