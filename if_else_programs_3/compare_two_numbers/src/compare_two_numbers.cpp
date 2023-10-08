//============================================================================
// Name        : compare_two_numbers.cpp
// Author      : Aanchal Patidar
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a;
	int b;

	cout << "Enter a number : "<< endl;
	cin >> a;

	cout << "Enter another number : "<< endl;
	cin >> b;

	if(a > b)
		cout << a << " is grater" << endl;
	else if(a < b)
		cout << b << " is grater" << endl;
	else
		cout << a << " and " << b << " are equal" <<  endl;


	return 0;
}
