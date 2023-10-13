//============================================================================
// Name        : print_sum_1_to_n.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n;
	int sum = 0;
	cout << "Enter a number : ";
	cin >> n;

	for(int i = 1; i <=n ; i++){
		sum += i;
	}
	cout << "Sum : " << sum << endl;
	return 0;
}
