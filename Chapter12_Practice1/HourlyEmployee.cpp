/*
 * HourlyEmployee.cpp
 *
 *  Created on: 2023. 9. 21.
 *      Author: KOSCOM
 */

#include "HourlyEmployee.h"
#include <iostream>
using namespace std;

HourlyEmployee::HourlyEmployee()
:Employee(0, ""), hours(0), payPerHour(0)
{
}

HourlyEmployee::HourlyEmployee(int id, string name, int h, int p)
:Employee(id, name), hours(h), payPerHour(p)
{
}

int HourlyEmployee::calculatePay() const
{
	return hours * payPerHour;
}

