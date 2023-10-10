//============================================================================
// Name        : column_half_diamond_number.cpp
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
		int space = 1;
		while(space <= n-i){
			cout << " ";
			space = space +1;
		}
		int j = 1;
		while(j <= i){
			cout << j;
			j++;
		}
		int k = 1;
		int row = i - 1;
		while(k <= i -1 ){
			cout << row;
			row = row - 1;
			k = k + 1;
		}
		cout << endl;
		i++;
	}
	return 0;
}
