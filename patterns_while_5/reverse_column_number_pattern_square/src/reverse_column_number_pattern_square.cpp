//============================================================================
// Name        : reverse_column_number_pattern_square.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n;
		cout << "Enter a number:";
		cin>> n;

		int i = 1;
		while(i <= n){
			int j = 1;
			while(j <= n){
				int value = n-j+1;
				cout << value << " ";
				j = j+1;
			}
			cout << endl;
			i = i+1;
		}

	return 0;
}
