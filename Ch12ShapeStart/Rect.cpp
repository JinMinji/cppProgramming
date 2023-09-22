/*
 * Rect.cpp
 *
 *  Created on: 2023. 9. 21.
 *      Author: KOSCOM
 */

#include "Rect.h"
#include <iostream>
using namespace std;

Rect::Rect()
	:width(0),height(0)
{
	cout << "Rect() 持失切" << endl;
}
Rect::Rect(int x, int y, int w, int h)
	:width(w),height(h),Shape(x,y)
{
	cout << "Rect(int,int,int,int) 持失切" << endl;
}
Rect::~Rect()
{
	cout << "Rect() 社瑚切" << endl;
}
void Rect::draw() const
{
	Shape::draw();//<===
	cout << "width=" << width << " height=" << height << endl;
}
double Rect::getArea() const
{
	return width * height;
}
