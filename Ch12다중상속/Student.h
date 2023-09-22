/**************************************************************
 * Student 클래스의 인터페이스 파일                           *
 **************************************************************/
#ifndef STUDENT_H
#define STUDENT_H
#include "person.h"

class Student:  public Person  //
{
  protected:
    double gpa;  // protected 데이터 멤버
  public:
    Student(string name, double gpa);
    ~Student();
    void print();
};
#endif
