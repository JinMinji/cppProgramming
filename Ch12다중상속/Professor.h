/**************************************************************
 * Professor 클래스의 인터페이스 파일                         *
 **************************************************************/
#ifndef PROFESSOR_H
#define PROFESSOR_H
#include "person.h"

class Professor:  public Person
{
  protected:
    double salary;  // protected 데이터 멤버
  public:
    Professor(string name, double salary);
    ~Professor();
    void print();
};
#endif
