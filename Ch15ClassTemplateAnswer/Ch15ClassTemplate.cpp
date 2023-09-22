#include <iostream>
#include <string>
using namespace std;
#include "stack.h"
#include "stack.h"

int main()
{

	Stack<int> s1;
	s1.Push(10);
	s1.Push(20);
	s1.Push(30);

	cout << s1.Pop() << endl;  //30
	cout << s1.Pop() << endl;  //20
	cout << s1.Pop() << endl;  //10
	//cout << s1.Pop() << endl;  // Stack Underflow

	Stack<double,3> s2;
	s2.Push(1.1);
	s2.Push(2.3);
	s2.Push(3.4);
	cout << s2.Pop() << endl;  //3.4
	cout << s2.Pop() << endl;  //2.3
	cout << s2.Pop() << endl;  //1.1

}

