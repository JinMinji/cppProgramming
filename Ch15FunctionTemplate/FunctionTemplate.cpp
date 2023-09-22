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

// 내부 코드도 같은데,, 저렇게 타입마다 다 구현해주지 말고, 템플릿 사용하자

template<typename T>	// 템플릿, 일반화
T smaller(T a, T b) {
	return a < b ? a : b;
}	//모든 타입에서 동작하지는 않을 수도.
// 호출 시 타입을 명시 -> smaller<int, int>(x, y)

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

//template<typename _Tp> //under score? _ 자주쓰게됨?



