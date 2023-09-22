/*
 * Account.h
 *
 *  Created on: 2023. 9. 19.
 *      Author: KOSCOM
 */

#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include <iostream>
using namespace std;

class Account
{
private:
	int accNo;
	string name;
	long balance;
	static double interest; 	//�׻� �Ȱ��� ��
	static int count;

public:
	Account(int=0, string="", long=0);
	~Account();
	void setName(string);
	string getName();
	void print() const;
	void deposit(long);
	bool withdraw(long);
	double getInterest();
	static void setInterest(double);
	static int getCount();	//��ü ���� �� �Լ��� ����ϰ� ���� ��! static ����ϸ� ����

//	int getAccNo();
};



#endif /* ACCOUNT_H_ */
