/*
 * Account.cpp
 *
 *  Created on: 2023. 9. 19.
 *      Author: KOSCOM
 */

#include <iostream>
#include "Account.h"
using namespace std;

double Account::interest;
int Account::count = 0;

void Account::print() const {
	cout << "���¹�ȣ: " << accNo << "����: " << name << "�ܾ�: " << balance << endl;
}

void Account::deposit(long a) {
	balance += a;
}

bool Account::withdraw(long a) {
	if (balance >= a) {
		balance -= a;
		return true;
	}
	else {
		cout << "�ܾ� �̻����� ����� �� �����ϴ�." << endl;
		return false;
	}
}

Account::Account(int a, string b, long c) {
	accNo = a;
	name = b;
	balance = c;
	cout << "������ ȣ��" << endl;
	count++;
};

Account::~Account() {
	cout << "�Ҹ���" << endl;
	count--;
}

void Account::setName(string a) {
	name = a;
}
string Account::getName() {
	return name;
}

void Account::setInterest(double i) {
	interest = i;
}

double Account::getInterest() {
	return interest;
}

int Account::getCount() {
	return count;
}
