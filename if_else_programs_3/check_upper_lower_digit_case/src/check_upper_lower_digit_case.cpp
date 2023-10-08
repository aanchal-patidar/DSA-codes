//============================================================================
// Name        : check_upper_lower_digit_case.cpp
// Author      : Aanchal Patidar
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	char a;
	cout << "Enter a charecter : "<< endl;
	cin >> a;

	if(a >= 'A' && a <= 'Z'){
		cout<< a << " is in uppercase" << endl;
	}else if(a >= 'a' && a <= 'z'){
		cout << a << " is in lowercase" << endl;
	}else if(a >= '0' && a <= '9'){
		cout << a << " is in digit form" << endl;
	}
	return 0;
}
