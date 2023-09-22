#include <iostream>
using namespace std;
#include "Circle.h"
#include "Rect.h"



int main()
{	
	const int size = 1;
	Shape* p[size];
	p[0] = new Circle(10, 10, 5);  // upcasting
//	p[1] = new Rect(10, 10, 100, 100); //upcasting
							//x   y width  height
	for (int i = 0; i < size; i++)
	{
		p[i]->draw();// Shape::Draw();
		cout << "Area:" << p[i]->getArea() << endl;
	}
	for (int i = 0; i < size; i++)
		delete p[i];


	Circle c(10, 10, 5);
	c.draw();//static binding =Compile-Time Binding
	cout << "Area:" << c.getArea() << endl;

	Rect r(10, 10, 100, 100);
	r.draw();
	cout << "Area:" << r.getArea() << endl;

	return 0;
}
