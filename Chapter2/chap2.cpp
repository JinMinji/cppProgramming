// �ڡ١� cpp ���α׷��� �⺻ �ڡ١�

#include <iostream>

using namespace std;

int main() {
	std::cout << "hello";
	std::cout << "world" << std::endl;
	std::cout << "Good morning" << std::endl;
//	std::cout << "���̸� �Է��ϼ���: ";
//	int age;
//	std::cin >> age;
//	std::cout << "����� ����: " << age << std::endl;

	float pi = 3.14159253653424f;

	double dpi = 3.14159293034234;

	long double lpi = 3.141592536549382L;

	cout << "float" << sizeof(pi) << "\t" << pi << endl;
	cout << "double" << sizeof(dpi) << "\t" << dpi << endl;
	cout <<"long double" << sizeof(lpi) << "\t"<< lpi << lpi << endl;

	int a = 30;
	int b = 4;
	double c = 4;

	cout << a/b << endl;
	cout << a/c << endl;
	cout << (double)a/b << endl;

	return 0;
}


