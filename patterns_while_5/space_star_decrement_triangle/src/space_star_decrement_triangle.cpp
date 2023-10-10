//============================================================================
// Name        : space_star_decrement_triangle.cpp
// Author      : Aanchal Patidar
// Version     :
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n;
	cout<< "Enter a number :";
	cin >> n;

	int i = 1;
	while(i <=n){
		int space = 1;
		while(space < i){
			cout << " ";
			space = space + 1;
		}
		int j = 1;
		while(j <=n-i+1){
			cout << "*" ;
			j++;
		}
		cout << endl;
		i++;
	}

	return 0;
}
