/*
 * chap10.cpp
 *
 *  Created on: 2023. 9. 20.
 *      Author: KOSCOM
 */
// �ڡ١� ���ڿ� �ڡ١�

#include <iostream>
#include <cstring>	// #include <string.h>
//#include <string.h>
using namespace std;

int arr_str_ptr() {	//str �Լ�

	cout << "�ּҸ� �Է��ϼ���: ";
	char address[100];
	cin >> address;

	cout << address << endl;

	// ������� �Է¹ޱ� -> getline
	cout << "�ּҸ� �Է��ϼ���: ";
	char address2[100];
	cin.getline(address2, 100);

	char str1[10];
	char str2[5] = "good";
//	char str2[4] = "good"; // �ǳ� \0 ���� �����Ͽ� +1��ŭ ���̸� �����ؾ���.
	char str3[4] = {'g', 'o', 'o', 'd'};
//	char str3[5] = {'g', 'o', 'o', 'd', '\0'};
	int a[3] = {1, 2, 3};

	cout << a << endl;
	cout << str2 << endl;
	cout << str3 << endl;

	cout << sizeof(str2) << endl;
	cout << sizeof(str3) << endl;

	if (str2==str3) {	// �̰� �迭�� �ּ�(�迭�� �̸�)������ �񱳸� �ǹ��ϴ� ��.
		cout << "�� ���ڿ��� ����." << endl;
	}
	else {
		cout << "�� ���ڿ��� �ٸ���." << endl;
	}

//	strcpy(str1, str2);
	if (strcmp(str2, str3) == 0) {
		cout << "�� ���ڿ��� ����." << endl;
	}
	else {
		cout << "�� ���ڿ��� �ٸ���." << endl;
	}
}

int string_test() {
	string s1;
	s1 = "hello";
	cout << s1 << endl;
	string s2("hello");

	if(s1 == s2)
		cout << "����" << endl;
	else
		cout << "�ٸ���" << endl;
	return 0;
}

int string_find() {
	string filepath = "c:\\temp\\test\\test.txt";
	cout << "filepath" << endl;

	int index = filepath.find_last_of("\\");	// �ڿ������� ã�´�.	rfind(c, idx)
	cout << "last: " << filepath.substr(index+1) << endl;
	cout << "last & 2char: " << filepath.substr(index+1, 2) << endl;
	index = filepath.find_first_of("\\");	// �տ������� ã�´�.	find(c, idx)
	cout << "first: " << filepath.substr(0, index) << endl;

	return 0;
}

int input_empty_space_test() {
	cout << "�ּҸ� �Է��ϼ���: ";
	string addr;
//	cin.getline(addr, 100); 	//cin.getline�� *char[]�� �Ű������� ����

	getline(cin, addr);
	cout << addr << endl;
}

int main() {
//	string_test();
//	string_find();
	input_empty_space_test();
	return 0;

}



