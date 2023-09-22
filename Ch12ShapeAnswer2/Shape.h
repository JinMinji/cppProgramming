#pragma once
//�߻� Ŭ���� -��ü�� ��������
class Shape 
{
protected:
	int x;
	int y;
public:
	Shape();
	Shape(int,int);
	virtual ~Shape();
public:
	virtual void Draw() const  ;
	virtual double GetArea() const=0;//순수 가상 함수
};

