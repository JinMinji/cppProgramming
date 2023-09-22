#pragma once
#include "Shape.h"

class Circle :	public Shape
{
public:
	Circle();
	Circle(int,int,int);
	~Circle();
private:
	int radius;
public:
	void draw() const  ;
	double getArea() const ;

};

