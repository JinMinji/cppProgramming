/**************************************************************
 * Person 클래스의 인터페이스 파일                            *
 **************************************************************/
#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <cassert>
#include <iostream>
using namespace std;

class Person
{
  protected:
   string name;  // protected 데이터 멤버
  public:
    Person();
    Person(string name);
    ~Person();
    void print();
};
#endif
