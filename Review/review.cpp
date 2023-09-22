/*
 * review.cpp
 *
 *  Created on: 2023. 9. 20.
 *      Author: KOSCOM
 */

//
//ptr = a[1]
//num = 1
//1. 결과: num = 2
//
//2. &a[1]
//
//3. a = ++ptr; 배열의 이름은 constant pointer 라서 변경할 수 없다.
//
//4. myNumber = 10
//
//5. x = 30, y = 1000
//		p = x의 주소 + 4byte
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
//	for (i = 0; *input_ptr++ != '\0'; i++)	// *input_ptr++ != '\0' 포인터가 가리키는 값이 NULL이 아니면 포인터 값 ++
//		cout << "answer is " << i << input[i] << endl;

	int a[5] = {1,2,3,4,5};
	int *ptr, num;
	ptr = a;

	ptr++;
	num = *ptr++;
	cout << num << endl;

	return 0;
}

