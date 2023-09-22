#ifndef COMPLEX_H_
#define COMPLEX_H_

class Complex
{
	friend Complex operator-(const Complex&, const Complex&);	// �����Լ��� ������ ��, private ���� ������ �� �ֵ��� �����ִ� ��
	friend ostream& operator<<(ostream& out, const Complex& c);
private:
	int real;
	int imaginary;
public:
	Complex();
	Complex(int);
	Complex(int,int);
	void Print() const;
	bool operator==(const Complex&);	// �Ű������� ������ ���� ������ �ʿ䰡 ����. -> const, ������ -> &
	bool operator!=(const Complex&);	// ==�� ���̵Ǵ� !=�� ���� ����
	Complex operator+(const Complex&);
	Complex operator++();
	Complex operator++(int);
	int operator[](int);
	operator int(); // ��ȯ ������. ��ȯŸ�� ������
//	explicit operator int(); // ��������� ���ش�?
};

#endif /* COMPLEX_H_ */
