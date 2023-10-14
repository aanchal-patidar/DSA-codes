//============================================================================
// Name        : fibonacci_number_series.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void fabonacci(int num){
	int a = 0 ;
	int b = 1 ;
	cout << a << " " << b << " " ;
	for(int i = 2 ;i <= num ;i++ ){

		int nextnum = a + b;

		cout << nextnum << " ";

		a = b;
		b = nextnum;

	}
	return ;
}

int main() {


	int n;
	cout << "Enter a number : " ;
	cin >> n;

	fabonacci(n);
	return 0;
}
