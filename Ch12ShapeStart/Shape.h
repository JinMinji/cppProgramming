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
	virtual ~Shape();		// virtual�Լ��� �ϳ��� �����ϸ�, �Ҹ��ڵ� virtual �������

public:
	virtual void draw() const  ;
	virtual double getArea() const=0;//���� ���� �Լ�
};

