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
	static double interest; 	//항상 똑같은 값
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
	static int getCount();	//객체 생성 전 함수를 사용하고 싶을 때! static 사용하면 가능

//	int getAccNo();
};



#endif /* ACCOUNT_H_ */
