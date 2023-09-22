#pragma once
//추상 클래스 -객체를 생성못함
class Shape 
{
protected:
	int x;
	int y;
public:
	Shape();
	Shape(int,int);
	virtual ~Shape();		// virtual함수가 하나라도 존재하면, 소멸자도 virtual 해줘야함

public:
	virtual void draw() const  ;
	virtual double getArea() const=0;//순수 가상 함수
};

