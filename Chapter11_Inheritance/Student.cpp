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
: gpa(0)	// ���� ������ �⺻������ �Ű��������� �⺻�����ڸ� ȣ����(Person())
{

}

Student::Student(int id, string name, double gpa)
: gpa(gpa), Person(id, name)
{

}


// class���� �ٿ� ȣ���ϴ� ���?
// 1. ����Լ� static���� �����ϸ�, �̸������� �θ� �� �ִ�. (��ü�� ���� ���·�, class���� �ٿ� ȣ��)
// 2. ��ӹ��� �ʿ��� base class�� �ִ� ����� �θ��� ���� ���.

// ������ �ÿ��� virtual Ű���带 �ݵ�� ����Ѵ�!
// why? up casting�� ����. �θ� �����ϴµ�, �ڽ���..? �� �ڸ��� ä�� �� �ִ�.
// ex) Person�� ���� �����Ϳ�, Student��ü �ּҸ� �־ Ÿ���� �ٸ��ٴ� ������ ���� ����.
// Student�� Person�ڸ��� ������(up casting) Person�� Student�ڸ��� �� ���� ����(down casting)
// Derived Class�� Base Class�� ���ǵ� ���� ����ϴ� �� ���� ��Ȳ���� ����.
// �ƹ�ư virtual ����
// virtual function table
// virtual�� ���� �ڵ����� pointer�� �ϳ� ��.

// ��ȯ����, �Ű������� �� ���ƾ� Overriding.
void Student::print() const {
	Person::print();
	cout << "GPA:" << gpa << endl;
}


// final: �� �̻� ������� �ʰڴ�.
