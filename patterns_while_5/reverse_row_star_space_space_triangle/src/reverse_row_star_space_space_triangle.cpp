//============================================================================
// Name        : reverse_row_star_space_space_triangle.cpp
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


		int i = 1;
		while(i <=n){

			int j = 1;
			while(j<=n-i+1){
				cout << "*";
				j = j+1;
			}
			cout << endl;
			i = i+1;
		}
	return 0;
}
