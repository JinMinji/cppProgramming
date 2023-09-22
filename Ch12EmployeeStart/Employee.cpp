#include "Employee.h"
#include <iostream>
using namespace std;


Employee::Employee()
	:id(0), name("")
{

}
Employee::Employee(int i, string n)
	: id(i), name(n)
{

}
void Employee::Print() const
{
	cout << id <<"\t"<< name <<"\t"<< CalculatePay() << endl;
}
int Employee::CalculatePay()  const
{
	return 0;
}