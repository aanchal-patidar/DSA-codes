//============================================================================
// Name        : check_even_odd_number.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

bool isEven(int a){
	if(a&1){
		return 0;
	}
	return 1;
}

int main() {
	int x;
	cout << "Enter a number : " ;
	cin >> x;

	if(isEven(x)){
		cout << "Number is even" << endl;
	}else{
		cout << "Number is odd" << endl;
	}

	return 0;
}
