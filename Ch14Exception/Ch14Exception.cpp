#include <iostream>
using namespace std;

void Test() throw(int) {	//throw() -> ?? 에러를 절대 발생시키지 않는다?
	try {

	} catch {

	}
}

int main()
{
    int num1, num2, result;

    try {
		cout << "정수를 입력하세요: ";
		cin >> num1;
		cout << "또 다른 정수를 입력하세요: ";
		cin >> num2;
		if(num1 < 1 || num1 > 100)
			throw "1-100 사이의 숫자를 입력하세요";
		if(num2 == 0)
			throw "0으로 나누려고 합니다";	// string으로 취급 X const char*로 본다.
			// 문자열로 보려면,
//			string s = "0으로 나누려고 합니다";
//			throw s;
		result = num1/num2; // 예외를 발생시킬 수 있는 표현식
		cout << "결과 = " << result << endl;
    }	// stack unwinding: 에러 발생시, 문제 발생전으로 되돌려 줌
    catch(const char* s) {
    	cout << s << endl;
    }
    catch(...) {	// catch(...) -> 모든 예외를 다 받는다.
    	cout << "General Exception" << endl;
    }
    // 필요시, catch내에서도 throw가능.
    // catch문 여러 개 일 때, 순서가 중요! 위에서 내려오면서 하나라도 걸리면, 빠져나옴

	cout <<"--Program End---" <<endl;

    return 0;
}
