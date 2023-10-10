//============================================================================
// Name        : reverse_count_number_square.cpp
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
	int count = 1;
	while(i <= n){
		int j = 1;
		int val = n-j+6;
		while(j <= n){
			cout <<val << " ";
			val= val -1;
			count = count+1;
			j = j+1;
		}
		cout << endl;
		i = i+1;
	}
	return 0;
}
