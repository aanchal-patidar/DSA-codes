//============================================================================
// Name        : print_count_number.cpp
// Author      : Aanchal Patidar
// Version     :
// Description : Print counting
//============================================================================

#include <iostream>
using namespace std;

void countingNumber(int num){
	for(int i = 1 ; i <= num ; i++){
		cout << i << " ";
	}
}

int main() {
	int n;
	cout << "Enter a number : " ;
	cin >> n;

	countingNumber(n);
	return 0;
}
