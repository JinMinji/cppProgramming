/*
 * chap5.cpp
 *
 *  Created on: 2023. 9. 18.
 *      Author: KOSCOM
 */

// ★☆★ 반복문 ★☆★

#include <iostream>

using namespace std;

int test1() {
	int x = 3;

	int y, z;

	y = ++x;
	cout << "y = " << y << " x = " << x << endl;
	z = x++;
	cout << "z = " << z << " x = " << x << endl;

	return 0;
}

int grade_check_if_do_while() {
	int score;
//	cerr << "잘못된 값을 입력했습니다." << endl;

//	do {
//		cout << "점수를 입력하세요: ";
//		cin >> score;
//		if (score <= 100 && score >= 0) {
//			break;
//		}
//		cout << "0~100사이의 값을 입력하세요" << endl << endl;
//	} while(true);

	while(true) {
		cout << "점수를 입력하세요: ";
		cin >> score;
		if (score <= 100 && score >= 0) {
			break;
		}
		cout << "0~100사이의 값을 입력하세요" << endl << endl;
	};

	char grade;
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

int nums_range() {
	int start_num, end_num;
	cout << "첫번째 숫자: ";
	cin >> start_num;
	cout << "두번째 숫자: ";
	cin >> end_num;

	if (start_num > end_num) {
		int tmp_num = start_num;
		start_num = end_num;
		end_num = tmp_num;
	}
	cout << "범위: " << start_num << " ~ " << end_num << endl;

	int o_cnt = 0, p_cnt =0;
	for (int i = start_num; i <= end_num ; i++) {
		if (i % 2 != 0) {
			o_cnt++;
		}
		else {
			p_cnt++;
		}
	}

	cout << "짝수의 개수 " << p_cnt << endl;
	cout << "홀수의 개수 " << o_cnt << endl;

	return 0;
}

int main() {
	grade_check_if_do_while();
	return 0;
}



