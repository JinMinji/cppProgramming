#pragma once
#include "SalariedEmp.h"
class SalesPerson :	public SalariedEmp
{
	int incentive;
	int sales;
public:
	SalesPerson(int id, string name, int salary, int slaes, int inc);
	~SalesPerson();
	int CalculatePay() const;
};

