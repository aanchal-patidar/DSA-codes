//============================================================================
// Name        : space_row_number_triangle.cpp
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

	int i = 1;
	while(i <= n){
		int space = 1;
		while(space < i){
			cout << " " ;
			space = space + 1;
		}
		int j = 1;
		while(j<= n-i+1){
			cout << i ;
			j = j + 1;
		}
		cout << endl;
		i = i +1;
	}
	return 0;
}
