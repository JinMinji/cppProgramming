#ifndef COMPLEX_H_
#define COMPLEX_H_

class Complex
{
	friend Complex operator-(const Complex&, const Complex&);	// 전역함수로 정의할 때, private 값에 접근할 수 있도록 열어주는 것
	friend ostream& operator<<(ostream& out, const Complex& c);
private:
	int real;
	int imaginary;
public:
	Complex();
	Complex(int);
	Complex(int,int);
	void Print() const;
	bool operator==(const Complex&);	// 매개변수로 들어오는 값을 변경할 필요가 없음. -> const, 별명사용 -> &
	bool operator!=(const Complex&);	// ==와 쌍이되는 !=도 같이 구현
	Complex operator+(const Complex&);
	Complex operator++();
	Complex operator++(int);
	int operator[](int);
	operator int(); // 변환 연산자. 반환타입 안적음
//	explicit operator int(); // 명시적으로 써준다?
};

#endif /* COMPLEX_H_ */
