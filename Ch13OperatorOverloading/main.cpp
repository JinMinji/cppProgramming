#include <iostream>
using namespace std;

#include "Complex.h"


int main()
{
	Complex c1(2,3);
	Complex c2(2,3);

	c1.Print();
	c2.Print();

	cout << "==������ ���: ";
	if (c1 == c2)
		cout << "����" << endl;
	else
		cout << "�ٸ���" << endl;

	cout << "!=������ ���: ";
	if (c1 != c2)
			cout << "�ٸ���" << endl;
		else
			cout << "����" << endl;

	Complex c3(4,6);

	Complex c4;
	c4= c2 + c3;

	c4.Print();

	Complex c5 = c4++;
	c5.Print();
	Complex c6 = ++c4;
	c6.Print();

	cout << endl << "- �����Լ� �׽�Ʈ" << endl;
	c3.Print();
	c3 = c1 - c3;	// ����Լ� c3 = c1.operator-(c3)
	// �����Լ� c3 = operator-(c1, c3)

	c3.Print();

	cout << c3 << endl;
	return 0;
}


// cin, cout
// extern Ostream cout
// �̷��� ���ǵ� ��,, c++���ο���! �׷��� �츮�� ����Լ��� ���� ���Ǵ� ����. �������θ� �ؾ���.
// Ostream��ü�� ��ȯ�Ѵ�.
