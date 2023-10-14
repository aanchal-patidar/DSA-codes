//============================================================================
// Name        : calculate_power.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int power(int num1 , int num2){
	int ans = 1;
	for(int i = 1 ; i <= num2 ; i++){
		ans = ans * num1;
	}
	return ans;
}

int main() {
	int a , b;
	cout << "Enter both numbers : ";
	cin >> a >> b;

	int answer = power(a , b);
	cout << "Answer : " << answer << endl;

	return 0;
}
