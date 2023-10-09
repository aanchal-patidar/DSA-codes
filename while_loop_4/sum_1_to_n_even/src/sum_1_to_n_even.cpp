//============================================================================
// Name        : sum_1_to_n_even.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n;
		cout << "Enter an number : ";
		cin >> n;

		int i = 2 , sum = 0;

		while(i<=n){
			sum = sum + i;
			i = i +2;
		}
		cout << "Sum : " << sum << endl;
	return 0;
}
