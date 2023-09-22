/*
 * chapter4.cpp
 *
 *  Created on: 2023. 9. 18.
 *      Author: KOSCOM
 */

// �ڡ١� ���ǹ� �ڡ١�

#include <iostream>
using namespace std;

int grade_check_if() {
	cout << "������ �Է��ϼ���: ";
	int score;
	cin >> score;

	char grade;

	if (score > 100 || score < 0) {
		cerr << "�߸��� ���� �Է��߽��ϴ�." << endl;
		return 0;
	}
	if (score >= 90)
		grade = 'A';
	else if (score >= 80)
		grade = 'B';
	else if (score >= 70)
		grade = 'C';
	else if (score >= 60)
		grade = 'D';
	else
		grade = 'F';

	cout << "����� ������ " << grade << "�Դϴ�." << endl;
	return 0;
}

int grade_check_switch() {
	cout << "������ �Է��ϼ���: ";
	int score;
	cin >> score;

	char grade;

	if (score > 100 || score < 0) {
		cerr << "�߸��� ���� �Է��߽��ϴ�." << endl;
		return 0;
	}

	score /= 10;

	switch(score)
	{
	case 10:
	case 9:
		grade = 'A';
		break;
	case 8:
		grade = 'B';
		break;
	case 7:
		grade = 'C';
		break;
	case 6:
		grade = 'D';
		break;
	default:
		grade = 'F';
	}

	cout << "����� ������ " << grade << "�Դϴ�." << endl;
	return 0;

}

int num_check() {
	int input_num;
	cout << "���ڸ� �Է��ϼ���: ";
	cin >> input_num;

	string result;

	if (input_num % 2 == 0)
		result = "¦";
	else
		result = "Ȧ";

//	cout << "�Է��Ͻ� ���ڴ� " << result << "�� �Դϴ�." << endl;

	cout << "�Է��Ͻ� ���ڴ� " << (input_num % 2 == 0 ? "¦" : "Ȧ") << "�� �Դϴ�." << endl;
}

int switch_exam1() {
	int x = 0;

	switch(x) {
	case 2: x++;
		break;
	case 3: x--;
		break;
	default: cerr << "End!" << endl;
		break;
	}

	char ch = 'J';
	int countA = 0;
	int countE = 0;
	int countI = 0;

	switch(ch) {
	case 'A':
	case 'a':
		countA++;
		break;
	case 'E':
	case 'e':
		countE++;
		break;
	case 'I':
	case 'i':
		countI++;
		break;
	default: cerr << "Error--Not A, E, or I " << endl;
	}
}

int main() {
	grade_check_switch();
	return 0;
}


