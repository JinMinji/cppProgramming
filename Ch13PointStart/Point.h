#pragma once

#include <iostream>
using namespace std;

class Point
{


private:
	int x;
	int y;
public:

	Point();
	Point(int);
	Point(int, int);
	//Point(int=0, int=0);
	void Print() const;

};
