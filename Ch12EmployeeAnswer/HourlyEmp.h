#ifndef HOURLYEMP_H
#define HOURLYEMP_H

#include "Employee.h"

class HourlyEmp : public Employee
{
private:
	int hours;
	int payPerHour;
public:
	HourlyEmp(int, string, int, int);
	~HourlyEmp();
	int CalculatePay() const;
};

#endif
