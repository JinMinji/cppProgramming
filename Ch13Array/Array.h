/**************************************************************
 * Array 클래스의 인터페이스 파일                             *
 **************************************************************/
#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>
#include <cassert>
using namespace std;
                                                                               
class Array 
{
  private:
    double* ptr;	//주소 저장 = heap사용: 4개 만들어줘야한다. 생성자, 소멸자, 복사 연산자, 대입 연산자
    int size;
  public: 
    Array(int size);  // 생성자
    ~Array();  // 소멸자
    // 값을 넘길 때 &(레퍼런스)로 넘겨야 내부적으로 복사생성자를 자동으로 부르는 일을 막을 수 있다.
    // 복사생성자 불러지는 거 불필요! 가급적 &로 쓰자아

    // 반환할 때에도 자동으로 복사생성자가 불림. 반환할 때 stack내용을 삭제하기 전, 임시적으로 복사. 근데 임시값은 사라지므로 레퍼런스로 반환값을 지정하면 사용할 수  없음
    // 그냥 자주자주 불리기 때문에 복사생성자 정의해주는 것이 좋다.
    Array(const Array&);	//복사 생성자
    // 대입연산자, 할당연산자는 반!드!시! 멤버함수로 구현해야함.
    Array operator=(const Array&);
//    Array& operator=(const Array&);
    double& operator[](int index) const; // 접근자
    double& operator[](int index) ;  // 설정자
};
#endif
