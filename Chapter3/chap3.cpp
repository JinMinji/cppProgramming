/*
 * ch3.cpp
 *
 *  Created on: 2023. 9. 18.
 *      Author: KOSCOM
 */

// ★☆★ 표현식, 문장 ★☆★

#include <iostream>
#include <iomanip>
using namespace std;

#define MAX 10

int global;

int main() {
	int size = MAX;
	const int maxSize = 10;

	int n = 100;
	double d = 345.678;

	cout << n << d << endl;
	cout << setw(10) << n << setw(10) << d << endl;

}



