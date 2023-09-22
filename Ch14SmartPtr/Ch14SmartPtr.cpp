#include <iostream>
#include <memory>
using namespace std;

//p646
class SmartPtr
{
	int *ptr;
public:
	SmartPtr(int *p) : ptr(p)
	{
	}
	~SmartPtr()
	{
		delete ptr;
		cout <<"메모리 해제됨"<<endl;
	}
};

int main()
{
	try
	{
		int *p = new int[100];
		SmartPtr sp(p);
		//shared_ptr<int> spi(p);  //C++11   #include <memory>


		cout <<"메모리 할당받음"<<endl;
		p[0]=1;
		p[1]=2;
		//...
		if(true)
			throw 0;
		//..
		delete [] p;
	//	cout <<"메모리 해제됨"<<endl;
	} //Stack unwinding
	catch(...)
	{
		cout <<"exception" <<endl;
	}
	cout << "-- program end---" <<endl;

	return 0;
}
