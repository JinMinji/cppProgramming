/*
 * main.cpp
 *
 *  Created on: 2023. 9. 21.
 *      Author: KOSCOM
 */

// this pointer ����Լ����� �����ϴ� ������. ��������� ���� �̸����� �Ű������� ���� ��, ������ ���� ����� �� �ִ�.

// private���, ��� ������ ���� ������ ���ϴ� �� ��.

// Base Class private, public, protected(�ܺο� private, ��ӹ��� �ֵ�����  public)
// Derived Class public

// 2-level ����� ���� ����. �� �̻��� ��κ�.
// �׷��⿡ �ַ� public.

// virtual �����Լ� class�� vftable ����
// ��ü�� vfptr �߰�

// �߻� Ŭ����, ���� �����Լ�

// ���� ���?
// Ÿ ��� ���� ��� �Ⱦ�. �Ƚᵵ �����Ǵϱ�
// Virtual Base Class��,, ���ĳ... ��..

#include <iostream>
#include "Person.h"
#include "Student.h"
using namespace std;

int main() {
	Person p1(1, "hong");
	p1.print();

	Student s1(2, "kim", 4.0);
	s1.print();
	s1.test();
	return 0;
}

