/*
 * SalesPerson.h
 *
 *  Created on: 2023. 9. 21.
 *      Author: KOSCOM
 */

#ifndef SALESPERSON_H_
#define SALESPERSON_H_

#include "SalaryEmployee.h"

class SalesPerson : public SalaryEmployee
{
private:
	int sales;
	int incentive;
public:
	SalesPerson();
	SalesPerson(int, string, int, int, int);
	int calculatePay() const;
};





#endif /* SALESPERSON_H_ */
