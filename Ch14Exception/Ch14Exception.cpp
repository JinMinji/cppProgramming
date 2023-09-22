#include <iostream>
using namespace std;

void Test() throw(int) {	//throw() -> ?? ������ ���� �߻���Ű�� �ʴ´�?
	try {

	} catch {

	}
}

int main()
{
    int num1, num2, result;

    try {
		cout << "������ �Է��ϼ���: ";
		cin >> num1;
		cout << "�� �ٸ� ������ �Է��ϼ���: ";
		cin >> num2;
		if(num1 < 1 || num1 > 100)
			throw "1-100 ������ ���ڸ� �Է��ϼ���";
		if(num2 == 0)
			throw "0���� �������� �մϴ�";	// string���� ��� X const char*�� ����.
			// ���ڿ��� ������,
//			string s = "0���� �������� �մϴ�";
//			throw s;
		result = num1/num2; // ���ܸ� �߻���ų �� �ִ� ǥ����
		cout << "��� = " << result << endl;
    }	// stack unwinding: ���� �߻���, ���� �߻������� �ǵ��� ��
    catch(const char* s) {
    	cout << s << endl;
    }
    catch(...) {	// catch(...) -> ��� ���ܸ� �� �޴´�.
    	cout << "General Exception" << endl;
    }
    // �ʿ��, catch�������� throw����.
    // catch�� ���� �� �� ��, ������ �߿�! ������ �������鼭 �ϳ��� �ɸ���, ��������

	cout <<"--Program End---" <<endl;

    return 0;
}
