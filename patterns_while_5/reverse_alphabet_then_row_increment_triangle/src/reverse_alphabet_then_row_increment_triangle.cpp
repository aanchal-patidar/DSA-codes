//============================================================================
// Name        : reverse_alphabet_then_row_increment_triangle.cpp
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
						char ch = 'A'+n-i;
						while(j <= i){
							cout <<ch << " ";
							ch= ch +1;
							j = j+1;
						}
						cout << endl;
						i = i+1;
					}
	return 0;
}
