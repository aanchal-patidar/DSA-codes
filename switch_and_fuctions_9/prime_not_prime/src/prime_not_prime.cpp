//============================================================================
// Name        : prime_not_prime.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

bool isPrime(int n){
	for(int i = 2; i < n ; i++){
		if(n % i == 0){
			return 0;
		}


	}
	return 1;
}

int main() {
	int x;
	cout << "Enter a number : ";
	cin >> x;

	if(isPrime(x)){
		cout << "It is  a prime number"<< endl;

	}
	else{
		cout << "It is not a prime number" << endl;
	}
	return 0;
}
