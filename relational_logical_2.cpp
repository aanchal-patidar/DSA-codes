//============================================================================
// Name        : relational_logical_2.cpp
// Author      : Aanchal Patidar
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a = 3 , b = 5 , c = 1;
	int x = (a > b && c <= b);
	cout << x << endl;

	int y = (a == c || b > c);
	cout << y << endl;

	int z =	!(a > b );
	cout << z << endl;


	return 0;
}
