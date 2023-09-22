/*
 * Person.h
 *
 *  Created on: 2023. 9. 21.
 *      Author: KOSCOM
 */

#ifndef PERSON_H_
#define PERSON_H_
#include <string>

using namespace std;

class Person {
protected:
	int id;
	string name;

public:
	Person();
	Person(int, string);
	virtual void print() const;
};



#endif /* PERSON_H_ */
