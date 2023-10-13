//============================================================================
// Name        : check_prime_or_not_prime.cpp
// Author      : Aanchal Patidar
// Version     :
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
		int n;
		cout << "Enter a number : ";
		cin >> n;

		bool isprime = 1;

		for(int i = 2; i < n ; i++){
			if(n % i == 0)
				isprime = 0;
			else
				break;
		}
		if(isprime == 0){
			cout << "It is not a prime number"<< endl;
		}else{
			cout << "It is a prime number" << endl;
		}
	return 0;
}
