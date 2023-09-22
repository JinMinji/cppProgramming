/*
 * HourlyEmployee.h
 *
 *  Created on: 2023. 9. 21.
 *      Author: KOSCOM
 */

#ifndef HOURLYEMPLOYEE_H_
#define HOURLYEMPLOYEE_H_

#include "Employee.h"

class HourlyEmployee : public Employee
{
private:
	int hours;
	int payPerHour;
public:
	HourlyEmployee();
	HourlyEmployee(int, string, int, int);
	int calculatePay() const;
};


#endif /* HOURLYEMPLOYEE_H_ */
