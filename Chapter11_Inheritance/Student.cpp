/*
 * Student.cpp
 *
 *  Created on: 2023. 9. 21.
 *      Author: KOSCOM
 */

#include <iostream>
#include "Student.h"

using namespace std;

Student::Student()
: gpa(0)	// 쓰지 않으면 기본적으로 매개변수없는 기본생성자를 호출함(Person())
{

}

Student::Student(int id, string name, double gpa)
: gpa(gpa), Person(id, name)
{

}


// class명을 붙여 호출하는 경우?
// 1. 멤버함수 static으로 선언하면, 이름만으로 부를 수 있다. (객체가 없는 상태로, class명을 붙여 호출)
// 2. 상속받은 쪽에서 base class에 있는 멤버를 부르고 싶을 경우.

// 재정의 시에는 virtual 키워드를 반드시 사용한다!
// why? up casting의 문제. 부모를 지정하는데, 자식이..? 그 자리를 채울 수 있다.
// ex) Person에 대한 포인터에, Student객체 주소를 넣어도 타입이 다르다는 에러가 나지 않음.
// Student가 Person자리엔 가지만(up casting) Person이 Student자리에 갈 수는 없음(down casting)
// Derived Class가 Base Class로 정의된 것을 사용하는 게 편한 상황들이 존재.
// 아무튼 virtual 쓰자
// virtual function table
// virtual로 쓰면 자동으로 pointer가 하나 들어감.

// 반환값도, 매개변수도 다 같아야 Overriding.
void Student::print() const {
	Person::print();
	cout << "GPA:" << gpa << endl;
}


// final: 더 이상 상속하지 않겠다.
