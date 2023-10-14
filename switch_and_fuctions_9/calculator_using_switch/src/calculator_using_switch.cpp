//============================================================================
// Name        : calculator_using_switch.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a;
	cout << "Enter a number:  " << endl;
	cin >> a;

	int b;
	cout << "Enter another number: " << endl;
	cin >> b;

	char op;
	cout << "Enter the operation : " << endl;
	cin >> op;

	switch(op){
	case '+':
		cout << a+b ;
		break;
	case '-':
		cout << a-b << endl;
		break;
	case '*':
		cout << a*b << endl;
		break;
	case '/':
		cout << a/b << endl;
		break;
	case '%':
		cout << a%b << endl;
		break;
	default :
		cout << "invalid operation" << endl;
	}
	return 0;
}
