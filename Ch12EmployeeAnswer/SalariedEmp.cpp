#include "SalariedEmp.h"
SalariedEmp::SalariedEmp(int id, string name, int s)
	:salary(s),Employee(id,name)
{

}
SalariedEmp::~SalariedEmp()
{

}
int SalariedEmp::CalculatePay() const
{
	return salary;
}