/*
 * main.cpp
 *
 *  Created on: 2023. 9. 21.
 *      Author: KOSCOM
 */

// this pointer 멤버함수에게 제공하는 포인터. 멤버변수와 같은 이름으로 매개변수를 받을 때, 구분을 위해 사용할 수 있다.

// private상속, 상속 받으나 직접 접근을 못하는 것 뿐.

// Base Class private, public, protected(외부엔 private, 상속받은 애들한텐  public)
// Derived Class public

// 2-level 상속은 거의 없다. 그 이상이 대부분.
// 그렇기에 주로 public.

// virtual 가상함수 class당 vftable 생성
// 객체당 vfptr 추가

// 추상 클래스, 순수 가상함수

// 다중 상속?
// 타 언어 다중 상속 안씀. 안써도 구현되니까
// Virtual Base Class를,, 어뜨캐... 잘..

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

