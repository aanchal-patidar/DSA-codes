//============================================================================
// Name        : ap_series.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int ap(int n){
	int value = (3*n)+7;
	for (int i = 1 ; i <= n ; i++){
		cout << value << " ";
		value = value * 2;
	}
}

int main() {
	int n;
	cout << "Enter a number : ";
	cin >> n;

	ap(n);
	return 0;
}
