/*
 * main.cpp
 *
 *  Created on: 2023. 9. 19.
 *      Author: KOSCOM
 */

#include "Account.h"

using namespace std;

int main() {

	cout << "Before ���� ����,  ������ ���� " << Account::getCount() << endl;
	Account a1(111110, "����", 10232090);
	a1.setInterest(0.02);
	cout << "�� ���� ���� " << a1.getCount() << endl;
	Account a2(222220, "����", 404030);
	cout << a1.getName() << "��, ������: " << a1.getInterest() << endl;
	cout << a2.getName() << "��, ������: " << a2.getInterest() << endl;

	cout << "������ ���� " << a1.getCount() << endl;
	if (true) {
		Account a3(3333330, "����", 7406750);
		cout << "������ ���� " << a1.getCount() << endl;
		a3.setInterest(0.6);
	}

	cout << "������ ���� " << a1.getCount() << endl;
	cout << a1.getName() << "��, ������: " << a1.getInterest() << endl;
}



