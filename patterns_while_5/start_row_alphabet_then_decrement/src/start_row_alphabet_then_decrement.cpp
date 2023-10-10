//============================================================================
// Name        : start_row_alphabet_then_decrement.cpp
// Author      : Aanchal Patidar
// Version     :
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
		char ch = 'A' + i -1;

		while(j <= n){
			cout <<ch << " ";
			ch = ch - 1;
			j = j+1;
		}
		cout << endl;
		i = i+1;
	}
	return 0;
}
