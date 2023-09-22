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
	void Draw() const override;	// override 키워드 사용!
	double GetArea() const;
};

