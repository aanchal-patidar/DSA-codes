//============================================================================
// Name        : switch_code.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
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
