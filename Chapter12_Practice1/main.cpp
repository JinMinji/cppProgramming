/*
 * main.cpp
 *
 *  Created on: 2023. 9. 21.
 *      Author: KOSCOM
 */


#include "Employee.h"
#include "SalaryEmployee.h"
#include "HourlyEmployee.h"
#include "SalesPerson.h"
using namespace std;

int main() {
	const int size = 3;
	Employee *p[size];
	p[0] = new HourlyEmployee(1, "시간제", 40, 5000); //upcasting
	p[1] = new SalaryEmployee(2, "월급제", 1000000);
	p[2] = new SalesPerson(3, "성과제", 1000000, 10, 10000);

	for (int i = 0; i < size; i++)
	{
		p[i]-> print();
		cout << (p[i]-> calculatePay()) << endl;
	}
	for (int i = 0; i < size; i++)
	{
		delete p[i];
	}

	return 0;
}



