//============================================================================
// Name        : fibonacci_series.cpp
// Author      : Aanchal Patidar
// Version     :
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
		int n;
		cout << "Enter a number : ";
		cin >> n;

		int a = 0;
		int b = 1;
		cout << a << " " << b << " ";

		for(int i = 2 ; i <=n ; i++){
			int nextnum = a + b;
			cout << nextnum << " " ;

			a = b;
			b = nextnum;

		}

	return 0;
}
