#include "HourlyEmp.h"
#include <iostream>
using namespace std;


HourlyEmp::HourlyEmp(int id, string name, int h, int p)
	: Employee(id,name), hours(h), payPerHour(p)
{
}

int HourlyEmp::CalculatePay() const
{
	return hours * payPerHour;
}