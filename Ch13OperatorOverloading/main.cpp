#include <iostream>
using namespace std;

#include "Complex.h"


int main()
{
	Complex c1(2,3);
	Complex c2(2,3);

	c1.Print();
	c2.Print();

	cout << "==연산자 사용: ";
	if (c1 == c2)
		cout << "같다" << endl;
	else
		cout << "다르다" << endl;

	cout << "!=연산자 사용: ";
	if (c1 != c2)
			cout << "다르다" << endl;
		else
			cout << "같다" << endl;

	Complex c3(4,6);

	Complex c4;
	c4= c2 + c3;

	c4.Print();

	Complex c5 = c4++;
	c5.Print();
	Complex c6 = ++c4;
	c6.Print();

	cout << endl << "- 전역함수 테스트" << endl;
	c3.Print();
	c3 = c1 - c3;	// 멤버함수 c3 = c1.operator-(c3)
	// 전역함수 c3 = operator-(c1, c3)

	c3.Print();

	cout << c3 << endl;
	return 0;
}


// cin, cout
// extern Ostream cout
// 이렇게 정의된 것,, c++내부에서! 그래서 우리가 멤버함수로 따로 정의는 못함. 전역으로만 해야함.
// Ostream객체로 반환한다.
