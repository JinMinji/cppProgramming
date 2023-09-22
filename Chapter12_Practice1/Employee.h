/*
 * Employee.h
 *
 *  Created on: 2023. 9. 21.
 *      Author: KOSCOM
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include <iostream>
using namespace std;

class Employee {
private:
	int id;
	string name;
public:
	Employee();
	Employee(int id, string name);
	virtual ~Employee();
	void print() const;
	virtual int calculatePay() const=0;
};



#endif /* EMPLOYEE_H_ */
