/*
 * chap5.cpp
 *
 *  Created on: 2023. 9. 18.
 *      Author: KOSCOM
 */

// �ڡ١� �ݺ��� �ڡ١�

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
//	cerr << "�߸��� ���� �Է��߽��ϴ�." << endl;

//	do {
//		cout << "������ �Է��ϼ���: ";
//		cin >> score;
//		if (score <= 100 && score >= 0) {
//			break;
//		}
//		cout << "0~100������ ���� �Է��ϼ���" << endl << endl;
//	} while(true);

	while(true) {
		cout << "������ �Է��ϼ���: ";
		cin >> score;
		if (score <= 100 && score >= 0) {
			break;
		}
		cout << "0~100������ ���� �Է��ϼ���" << endl << endl;
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

	cout << "����� ������ " << grade << "�Դϴ�." << endl;
	return 0;
}

int nums_range() {
	int start_num, end_num;
	cout << "ù��° ����: ";
	cin >> start_num;
	cout << "�ι�° ����: ";
	cin >> end_num;

	if (start_num > end_num) {
		int tmp_num = start_num;
		start_num = end_num;
		end_num = tmp_num;
	}
	cout << "����: " << start_num << " ~ " << end_num << endl;

	int o_cnt = 0, p_cnt =0;
	for (int i = start_num; i <= end_num ; i++) {
		if (i % 2 != 0) {
			o_cnt++;
		}
		else {
			p_cnt++;
		}
	}

	cout << "¦���� ���� " << p_cnt << endl;
	cout << "Ȧ���� ���� " << o_cnt << endl;

	return 0;
}

int main() {
	grade_check_if_do_while();
	return 0;
}



