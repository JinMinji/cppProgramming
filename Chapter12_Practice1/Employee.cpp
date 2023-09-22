/*
 * Employee.cpp
 *
 *  Created on: 2023. 9. 21.
 *      Author: KOSCOM
 */

#include <iostream>
#include "Employee.h"
using namespace std;

Employee::Employee()
:id(0), name("")
{

}

Employee::Employee(int i, string name)
:id(i), name(name)
{

}

Employee::~Employee() {

};

void Employee::print() const {
	cout << "name: " << name << endl;
}
