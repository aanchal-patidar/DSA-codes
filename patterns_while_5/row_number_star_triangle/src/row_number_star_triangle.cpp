//============================================================================
// Name        : row_number_star_triangle.cpp
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
	while(i<=n){
		int j = 1;
		while(j <=i){
			//cout << "* ";
			cout << i;
			j = j+1;
		}
		cout << endl;
		i = i+1;
	}
	return 0;
}
