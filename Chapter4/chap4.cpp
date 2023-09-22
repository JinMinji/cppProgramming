/*
 * chapter4.cpp
 *
 *  Created on: 2023. 9. 18.
 *      Author: KOSCOM
 */

// ★☆★ 조건문 ★☆★

#include <iostream>
using namespace std;

int grade_check_if() {
	cout << "점수를 입력하세요: ";
	int score;
	cin >> score;

	char grade;

	if (score > 100 || score < 0) {
		cerr << "잘못된 값을 입력했습니다." << endl;
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

	cout << "당신의 학점은 " << grade << "입니다." << endl;
	return 0;
}

int grade_check_switch() {
	cout << "점수를 입력하세요: ";
	int score;
	cin >> score;

	char grade;

	if (score > 100 || score < 0) {
		cerr << "잘못된 값을 입력했습니다." << endl;
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

	cout << "당신의 학점은 " << grade << "입니다." << endl;
	return 0;

}

int num_check() {
	int input_num;
	cout << "숫자를 입력하세요: ";
	cin >> input_num;

	string result;

	if (input_num % 2 == 0)
		result = "짝";
	else
		result = "홀";

//	cout << "입력하신 숫자는 " << result << "수 입니다." << endl;

	cout << "입력하신 숫자는 " << (input_num % 2 == 0 ? "짝" : "홀") << "수 입니다." << endl;
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


