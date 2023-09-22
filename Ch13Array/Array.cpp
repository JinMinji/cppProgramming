/**************************************************************
 * Array 클래스의 구현 파일                                   *
 **************************************************************/
#include "array.h"

// 생성자(힙 메모리에 할당)
Array::Array(int s)
:size(s)
{
  ptr = new double[size];
}
 // 소멸자(힙의 메모리 해제)
Array::~Array()
{
  delete[] ptr;
} 
// 첨자 접근자
double& Array::operator[](int index) const
{ 
  if(index < 0 || index >= size)
  {
    cout << "유효하지 않은 인덱스입니다. 프로그램을 중단합니다.";
    assert(false);
  }
  return ptr[index];
}
// 첨자 설정자 
double& Array::operator[](int index)
{
  if(index < 0 || index >= size)
  {
    cout << "유효하지 않은 인덱스입니다. 프로그램을 중단합니다.";
    assert(false);
  }
  return ptr[index];
}

Array::Array(const Array& a) {
	// 멤버 대 멤버 복사 -> Shallow Copy
//	ptr = a.ptr;
//	size = a.size;
// 이렇게 하면 안됨!!! 이클립스에서는 오류를 안보여주지만,,!

	// 우리는 Deep Copy를 해야함
//	1. 메모리 할당
	ptr = new double[a.size];
//	2. 일일이 복사
	for (int i=0 ; i < a.size; i++) {
		ptr[i] = a.ptr[i];
	}
	size = a.size;
}

Array Array::operator =(const Array& a) {
//Array& Array::operator =(const Array& a) {
//	ptr = a.ptr;
//	size = a.size;
//이렇게 하면 안됨..

//	1. 기존 메모리 해제
	if (ptr != NULL)
		delete [] ptr;
//	2. 메모리 신규 할당
	ptr = new double[a.size];
//	3. 일일이 복사
	for (int i=0 ; i < a.size; i++)
		ptr[i] =  a.ptr[i];
	size = a.size;

	return *this;
}


