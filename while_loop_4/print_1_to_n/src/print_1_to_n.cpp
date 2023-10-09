//============================================================================
// Name        : print_1_to_n.cpp
// Author      : Aanchal Patidar
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter a number : ";
	cin >> n;
	int i = 1;
	while(i <= n){
		cout << i << " " ;
		i = i+1;
	}

	return 0;
}
