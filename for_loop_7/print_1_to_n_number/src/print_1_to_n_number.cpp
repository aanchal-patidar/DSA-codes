//============================================================================
// Name        : print_1_to_n_number.cpp
// Author      : 
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

	/*
	  int i= 1;
	 for(;i<=n;)
	 i++ */
	/* for(;;)
	  use break statement
	 */

	for(int i = 1; i <=n ; i++){
		cout << i << " " ;
	}

	return 0;
}
