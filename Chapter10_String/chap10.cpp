/*
 * chap10.cpp
 *
 *  Created on: 2023. 9. 20.
 *      Author: KOSCOM
 */
// ★☆★ 문자열 ★☆★

#include <iostream>
#include <cstring>	// #include <string.h>
//#include <string.h>
using namespace std;

int arr_str_ptr() {	//str 함수

	cout << "주소를 입력하세요: ";
	char address[100];
	cin >> address;

	cout << address << endl;

	// 공백까지 입력받기 -> getline
	cout << "주소를 입력하세요: ";
	char address2[100];
	cin.getline(address2, 100);

	char str1[10];
	char str2[5] = "good";
//	char str2[4] = "good"; // 맨끝 \0 까지 포함하여 +1만큼 길이를 지정해야함.
	char str3[4] = {'g', 'o', 'o', 'd'};
//	char str3[5] = {'g', 'o', 'o', 'd', '\0'};
	int a[3] = {1, 2, 3};

	cout << a << endl;
	cout << str2 << endl;
	cout << str3 << endl;

	cout << sizeof(str2) << endl;
	cout << sizeof(str3) << endl;

	if (str2==str3) {	// 이건 배열의 주소(배열의 이름)끼리의 비교를 의미하는 것.
		cout << "두 문자열이 같다." << endl;
	}
	else {
		cout << "두 문자열이 다르다." << endl;
	}

//	strcpy(str1, str2);
	if (strcmp(str2, str3) == 0) {
		cout << "두 문자열이 같다." << endl;
	}
	else {
		cout << "두 문자열이 다르다." << endl;
	}
}

int string_test() {
	string s1;
	s1 = "hello";
	cout << s1 << endl;
	string s2("hello");

	if(s1 == s2)
		cout << "같다" << endl;
	else
		cout << "다르다" << endl;
	return 0;
}

int string_find() {
	string filepath = "c:\\temp\\test\\test.txt";
	cout << "filepath" << endl;

	int index = filepath.find_last_of("\\");	// 뒤에서부터 찾는다.	rfind(c, idx)
	cout << "last: " << filepath.substr(index+1) << endl;
	cout << "last & 2char: " << filepath.substr(index+1, 2) << endl;
	index = filepath.find_first_of("\\");	// 앞에서부터 찾는다.	find(c, idx)
	cout << "first: " << filepath.substr(0, index) << endl;

	return 0;
}

int input_empty_space_test() {
	cout << "주소를 입력하세요: ";
	string addr;
//	cin.getline(addr, 100); 	//cin.getline은 *char[]만 매개변수로 받음

	getline(cin, addr);
	cout << addr << endl;
}

int main() {
//	string_test();
//	string_find();
	input_empty_space_test();
	return 0;

}



