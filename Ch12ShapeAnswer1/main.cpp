#include <iostream>
using namespace std;
#include "Circle.h"
#include "Rect.h"
int main()
{	
	//Shape s;
	//double n =s.GetArea();

	const int size = 2;//<==
	Shape* p[size];
	p[0] = new Circle(10, 10, 5);  // upcasting
	p[1] = new Rect(10, 10, 100, 100); //upcasting
							//x   y width  height
	for (int i = 0; i < size; i++)
	{
		p[i]->Draw();// Shape::Draw();
		cout << "Area:" << p[i]->GetArea() << endl;// Shape::GetArea();
	}
	for (int i = 0; i < size; i++)
		delete p[i];


	//Circle c(10, 10, 5);
	//c.Draw();//static binding =Compile-Time Binding
	//cout << "Area:"  << c.GetArea() << endl;

	//Rect r(10, 10, 100, 100);
	//r.Draw();
	//cout <<"Area:"  << r.GetArea() << endl;

	return 0;
}
