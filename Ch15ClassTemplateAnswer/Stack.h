
#ifndef STACK_H_
#define STACK_H_

#include <iostream>
using namespace std;

template<typename T=int,int size=5>
class Stack
{
private:
	T data[size];
	int top;//Top Of Stack
public:
	Stack():top(-1)
	{
	}
	void Push(T n)
	{
		if (top == size - 1)
		{
			cout << "Stack Overflow!";
			return;
		}
		data[++top] = n;
	}
	T Pop();

};

//Compiler Time에 코드 생성
template<typename T, int size>
T Stack<T, size>::Pop() //<==
{
	if (top < 0)
	{
		cout << "Stack Underflow!";
		return 0;
	}
	return data[top--];
}


#endif /* STACK_H_ */
