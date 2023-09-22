#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class Employee  //추상 클래스
{
private:	
	int id;
	string name;
public:
	Employee();
	Employee( int id,string n);
	virtual ~Employee();
	void Print() const;
	virtual int CalculatePay() const=0 ;
};
#endif
