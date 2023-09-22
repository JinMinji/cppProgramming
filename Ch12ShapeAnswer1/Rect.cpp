#include "Rect.h"
#include <iostream>
using namespace std;
Rect::Rect()
	:width(0),height(0)
{
	cout << "Rect() ������" << endl;
}
Rect::Rect(int x, int y, int w, int h)
	:width(w),height(h),Shape(x,y)
{
	cout << "Rect(int,int,int,int) ������" << endl;
}
Rect::~Rect()
{
	cout << "Rect() �Ҹ���" << endl;
}
void Rect::Draw() const
{
	Shape::Draw();//<===
	cout << "width=" << width << " height=" << height << endl;
}
double Rect::GetArea() const
{
	return width * height;
}
