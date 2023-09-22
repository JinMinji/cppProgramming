/*
 * SalaryEmployee.h
 *
 *  Created on: 2023. 9. 21.
 *      Author: KOSCOM
 */

#ifndef SALARYEMPLOYEE_H_
#define SALARYEMPLOYEE_H_

#include "Employee.h"

class SalaryEmployee : public Employee
{
protected:
	int salary;
public:
	SalaryEmployee();
	SalaryEmployee(int, string, int);
	int calculatePay() const;
};




#endif /* SALARYEMPLOYEE_H_ */
