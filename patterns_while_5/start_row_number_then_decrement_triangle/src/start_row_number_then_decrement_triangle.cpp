//============================================================================
// Name        : start_row_number_then_decrement_triangle.cpp
// Author      : Aanchal Patidar
// Version     :
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter a number : " ;
	cin >> n;

	int i = 1;
	while(i <= n){
		int j = 1;
		int  row = i;
		while(j <=i){
			cout << row << " ";
			row = row - 1;
			//cout << i +j -1 << " ";
			j = j+ 1;
		}
		cout << endl;
		i = i +1;
	}
	return 0;
}
