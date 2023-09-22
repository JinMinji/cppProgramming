/*
 * SalesPerson.cpp
 *
 *  Created on: 2023. 9. 21.
 *      Author: KOSCOM
 */


#include "SalesPerson.h"
#include <iostream>
using namespace std;


SalesPerson::SalesPerson()
:SalaryEmployee(0, "", 0), sales(0), incentive(0)
{

}

SalesPerson::SalesPerson(int id, string name, int s, int sales, int i)
:SalaryEmployee(id, name, s), sales(sales), incentive(i)
{
}

int SalesPerson::calculatePay() const
{
	return salary + (sales * incentive);
}




