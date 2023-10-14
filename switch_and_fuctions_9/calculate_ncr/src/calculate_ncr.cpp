//============================================================================
// Name        : calculate_ncr.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int factorial(int num){
	int fact = 1;
	for(int i = 1 ; i <= num ; i++){
		fact = fact * i;
	}
	return fact;
}

int ncr(int n , int r){
	int numarator = factorial(n);
	int denominator = factorial(r) * factorial(n-r);
	int ans = numarator / denominator;
	return ans;
}


int main() {

	int x , y;
	cout << "Enter numbers : ";
	cin >> x >> y;

	int answer = ncr(x , y);
	cout << "Answer : " << answer << endl;


	return 0;
}
