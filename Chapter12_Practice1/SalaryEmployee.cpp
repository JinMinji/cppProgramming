/*
 * SalaryEmployee.cpp
 *
 *  Created on: 2023. 9. 21.
 *      Author: KOSCOM
 */

#include "SalaryEmployee.h"
#include <iostream>
using namespace std;


SalaryEmployee::SalaryEmployee()
	: Employee(0, ""), salary(0)
{
}

SalaryEmployee::SalaryEmployee(int id, string name, int s)
	: Employee(id,name), salary(s)
{
}

int SalaryEmployee::calculatePay() const
{
	return salary;
}


