//============================================================================
// Name        : ap_series.cpp
// Author      : Aanchal Patidar
// Version     :
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int ap(int n){
	int value = (3*n)+7;
	for (int i = 1 ; i <= n ; i++){
		cout << value << " ";
		value = value * 2;
	}
}

int main() {
	int n;
	cout << "Enter a number : ";
	cin >> n;

	ap(n);
	return 0;
}
