#include <iostream>
using namespace std;

#include "Complex.h"

Complex::Complex()
: real(0),imaginary(0)
{
}
Complex::Complex(int r)
: real(r),imaginary(0)
{
}

Complex::Complex(int r, int i)
: real(r),imaginary(i)
{
}

void Complex::Print() const
{
	cout << real << " + " << imaginary <<"i" <<endl;
}

bool Complex::operator ==(const Complex& c) {
	if (real == c.real && imaginary == c.imaginary)
		return true;
	else
		return false;
}

bool Complex::operator !=(const Complex& c) {
	return !(*this == c);		// this(내 주소)가 가리키는 값이 c와 같은지 확인 후, 결과의 반대를 반환
}

Complex Complex::operator+(const Complex& c) {
	return Complex(real + c.real, imaginary + c.imaginary);
}	// *참고! +연산자를 구현했다고해서, ++이 자동으로 적용되지는 않는다.

// ++을 앞에 쓰느냐? 뒤에 쓰느냐에 따라 형식이 다르다. 후치연산자만 매개변수 int로 구현.


Complex Complex::operator++() {		// 전치연산, ++c
	real++;
	imaginary++;
	return *this;
}

Complex Complex::operator++(int) {	// 후치연산, c++
	Complex temp = *this;
	this->real++;
	this->imaginary++;
	return temp;
}

Complex::operator int() {
	return real;
}


int Complex::operator[](int n) {
	if (n == 0) {
		return real;
	}
	else if(n == 1) {
		return imaginary;
	}
	else {
		return -1;
	}
}

Complex operator-(const Complex& a, const Complex& b) {
	return Complex(a.real - b.real, a.imaginary - b.imaginary);
}

ostream& operator<<(ostream& out, const Complex& c) {
	out << c.real << " + " << c.imaginary << "i";
}
