/**************************************************************
 * Array 클래스를 사용하는 애플리케이션                     *
 **************************************************************/
#include "Array.h"


// 생성자 - new
// 소멸자 - delete
// 대입연산자 - =
// 복사생성자 -
// 1) 	Array a(3);
//		Array b = a; :Array b(a);
// 2)Pass-by-Value로 값 전달
int main()
{
  // 3개의 요소를 가지는 Array 클래스 인스턴스화
  Array arr(3);
  // [ ] 연산자로 값 저장
  arr[0] = 22.31;
  arr[1] = 78.61;
  arr[2] = 65.22;
  // [] 연산자로 값 추출    
  for(int i = 0; i < 3; i++)
  {
    cout << "arr[" << i <<"]: " << arr[i] << endl;
  }

  Array b = arr;
  cout << b[0] <<endl;

  Array c(6);
  c = b ;
  cout << c[0] <<endl;

  return 0;
}
