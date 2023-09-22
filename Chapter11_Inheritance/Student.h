/*
 * Student.h
 *
 *  Created on: 2023. 9. 21.
 *      Author: KOSCOM
 */

#ifndef STUDENT_H_
#define STUDENT_H_
#include <string>
#include "Person.h"

using namespace std;

class Student : public Person {
private:
	double gpa;

public:
	Student();
	Student(int, string, double);
	void test()
	{
		cout << "name: " << name << endl;
	}
	void print() const;
};


#endif /* STUDENT_H_ */
