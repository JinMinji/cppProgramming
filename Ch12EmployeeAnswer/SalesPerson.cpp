#include "SalesPerson.h"
SalesPerson::SalesPerson(int id, string name, int salary, int sales, int inc)
	:sales(sales),incentive(inc), SalariedEmp(id,name,salary)
{

}
SalesPerson::~SalesPerson()
{

}
int SalesPerson::CalculatePay() const
{
	//return SalariedEmp::CalculatePay() + sales * incentive;
	return salary + sales * incentive;//protected
}