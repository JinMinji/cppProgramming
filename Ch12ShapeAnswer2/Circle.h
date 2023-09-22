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
	void Draw() const  ;
	double GetArea() const ;

};

