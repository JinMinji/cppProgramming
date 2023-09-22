/*
 * Person.cpp
 *
 *  Created on: 2023. 9. 21.
 *      Author: KOSCOM
 */
#include <iostream>
#include "Person.h"

using namespace std;


Person::Person()
:id(0), name("")	// 콜론 초기화
{
}

Person::Person(int id, string name)
:id(id), name(name)
{
//	this.id = id;
}

void Person::print() const
{
	cout << "ID: " << id << "\tName: " << name << endl;
}


