#pragma once
#include "Employee.h"
class SalariedEmp :	public Employee
{
protected:
	int salary;
public:
	SalariedEmp(int id, string name, int s);
	~SalariedEmp();
	int CalculatePay() const;
};

