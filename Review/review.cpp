/*
 * review.cpp
 *
 *  Created on: 2023. 9. 20.
 *      Author: KOSCOM
 */

//
//ptr = a[1]
//num = 1
//1. ���: num = 2
//
//2. &a[1]
//
//3. a = ++ptr; �迭�� �̸��� constant pointer �� ������ �� ����.
//
//4. myNumber = 10
//
//5. x = 30, y = 1000
//		p = x�� �ּ� + 4byte
//6.

#include <iostream>
using namespace std;


int main() {
//	char input[50], *input_ptr;
//	int i;
//	cout << "input: ";
//	cin >> input;
//	cout << "? " << input;
//	input_ptr = input;
//	for (i = 0; *input_ptr++ != '\0'; i++)	// *input_ptr++ != '\0' �����Ͱ� ����Ű�� ���� NULL�� �ƴϸ� ������ �� ++
//		cout << "answer is " << i << input[i] << endl;

	int a[5] = {1,2,3,4,5};
	int *ptr, num;
	ptr = a;

	ptr++;
	num = *ptr++;
	cout << num << endl;

	return 0;
}

