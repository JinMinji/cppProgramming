#include <iostream>
using namespace std;

#include "Employee.h"
#include "HourlyEmp.h"

int main()
{
	const int size = 1;//<==3
	Employee *p[size];
	p[0] = new HourlyEmp(1, "박찬호", 40, 5000); //upcasting
	//p[1] = new SalariedEmp(2, "홍길동", 1000000);
	//p[2] = new SalesPerson(3, "이승엽", 1000000, 10, 10000);

	for (int i = 0; i < size; i++)
	{
		p[i]->Print();
	}
	for (int i = 0; i < size; i++)
	{
		delete p[i];
	}
}

