//============================================================================
// Name        : pattern_square_star.cpp
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

	int i = 0;
	while(i < n){
		int j = 0;
		while(j < n){
			cout << "* " ;
			j = j +1;
		}
		cout << endl;
		i = i + 1;
	}
	return 0;
}
