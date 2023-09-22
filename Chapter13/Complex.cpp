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
	return !(*this == c);		// this(�� �ּ�)�� ����Ű�� ���� c�� ������ Ȯ�� ��, ����� �ݴ븦 ��ȯ
}

Complex Complex::operator+(const Complex& c) {
	return Complex(real + c.real, imaginary + c.imaginary);
}	// *����! +�����ڸ� �����ߴٰ��ؼ�, ++�� �ڵ����� ��������� �ʴ´�.

// ++�� �տ� ������? �ڿ� �����Ŀ� ���� ������ �ٸ���. ��ġ�����ڸ� �Ű����� int�� ����.


Complex Complex::operator++() {		// ��ġ����, ++c
	real++;
	imaginary++;
	return *this;
}

Complex Complex::operator++(int) {	// ��ġ����, c++
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
