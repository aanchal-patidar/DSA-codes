//============================================================================
// Name        : check_positive_negative.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a;
	cout << "Enter an number : " << endl;
	cin >> a;

	if(a > 0)
		cout << a << " is positive" << endl;
	else if(a < 0)
		cout << a << " is negative" << endl;
	else
		cout << a << " is zero" << endl;
	return 0;
}
