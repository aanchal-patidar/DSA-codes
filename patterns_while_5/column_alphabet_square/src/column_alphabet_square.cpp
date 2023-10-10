//============================================================================
// Name        : column_alphabet_square.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n;
		cout << "Enter a number : " ;
		cin >> n;

		int i = 1;
		while(i<=n){
			int j = 1;
			while(j <= n){
				char ch = 'A'+ j - 1;
				cout << ch << " ";
				j++;
			}
			cout << endl;
			i++;
		}
	return 0;
}
