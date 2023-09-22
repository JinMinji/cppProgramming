#include <iostream>
#include <string>
using namespace std;

template<typename T>
class Stack
{
private:
	T data[10];
	int top;//Top Of Stack
public:
	Stack():top(-1)
	{
	}
	void Push(T n)
	{
		if (top == 10 - 1)
		{
			cout << "Stack Overflow!";
			return;
		}
		data[++top] = n;
	}
	T Pop()
	{
		if (top < 0)
		{
			cout << "Stack Underflow!";
			return 0;
		}
		return data[top--];
	}
};

template<typename T>
class MyClass
{
};

template<typename T=int, int size=5>
class MyClass2
{
};

template<typename T>
T Stack<T>::Pop()
{
	if(top < 0) {
		cout << "Stack Underflow!";
		return 0;
	}
	return;
}

// export 안되는 듯
int main()
{
	Stack<MyClass<int>> s4;
	MyClass2<int, 10> mc1;
	Stack<int> s1;	//객체 생성 시 타입 명시해주어야 함
	s1.Push(10);
	s1.Push(20);
	s1.Push(30);

	cout << s1.Pop() << endl;  //30
	cout << s1.Pop() << endl;  //20
	cout << s1.Pop() << endl;  //10
	//cout << s1.Pop() << endl;  // Stack Underflow

	Stack<double> s2;
	s2.Push(1.1);
	s2.Push(2.3);
	s2.Push(3.4);
	cout << s2.Pop() << endl;  //3.4
	cout << s2.Pop() << endl;  //2.3
	cout << s2.Pop() << endl;  //1.1

}

