#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class Employee  
{
private:	
	int id;
	string name;
public:
	Employee();
	Employee( int id,string n);
	void Print() const;
	int CalculatePay() const ;
};
#endif
