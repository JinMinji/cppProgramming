#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class Employee  //�߻� Ŭ����
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
