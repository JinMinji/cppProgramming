/*
 * main.cpp
 *
 *  Created on: 2023. 9. 19.
 *      Author: KOSCOM
 */

#include "Account.h"

using namespace std;

int main() {

	cout << "Before °èÁÂ °³¼³,  ¢º°èÁÂ °³¼ö " << Account::getCount() << endl;
	Account a1(111110, "¹ÎÁö", 10232090);
	a1.setInterest(0.02);
	cout << "¢º °èÁÂ °³¼ö " << a1.getCount() << endl;
	Account a2(222220, "¼ø½Å", 404030);
	cout << a1.getName() << "°í°´, ÀÌÀÚÀ²: " << a1.getInterest() << endl;
	cout << a2.getName() << "°í°´, ÀÌÀÚÀ²: " << a2.getInterest() << endl;

	cout << "¢º°èÁÂ °³¼ö " << a1.getCount() << endl;
	if (true) {
		Account a3(3333330, "¿¬¾Æ", 7406750);
		cout << "¢º°èÁÂ °³¼ö " << a1.getCount() << endl;
		a3.setInterest(0.6);
	}

	cout << "¢º°èÁÂ °³¼ö " << a1.getCount() << endl;
	cout << a1.getName() << "°í°´, ÀÌÀÚÀ²: " << a1.getInterest() << endl;
}



