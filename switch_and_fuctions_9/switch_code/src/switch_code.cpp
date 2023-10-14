//============================================================================
// Name        : switch_code.cpp
// Author      : Aanchal Patidar
// Version     :
// Description : Performing some operation using switch case
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a = 1330;
	int x , y , z , b;
	char notes;
	cin>> notes;
	x = a/100;
	y = x / 50;
	z = y / 10;
	b = z/1;

	switch(notes){
	case 100:
		cout << x ;
		break;
	case 50:
		cout << y  ;
		break;
	case 10:
		cout << z  ;
		break;
	case 1:
		cout << b  ;
		break;
	}
	return 0;
}
