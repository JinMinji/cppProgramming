#pragma once

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
	virtual double GetArea() const ;
};

