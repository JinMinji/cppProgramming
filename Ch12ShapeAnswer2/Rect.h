#pragma once
#include "Shape.h"
class Rect : 	public Shape
{
	int width;
	int height;
public:
	Rect();
	Rect(int, int,int,int);
	~Rect();
	void Draw() const;
	double GetArea() const;
};

