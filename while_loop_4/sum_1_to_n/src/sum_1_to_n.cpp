//============================================================================
// Name        : sum_1_to_n.cpp
// Author      : Aanchal Patidar
// Version     :
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter an number : ";
	cin >> n;

	int i = 1 , sum = 0;

	while(i<=n){
		sum = sum + i;
		i = i +1;
	}
	cout << "Sum : " << sum << endl;

	return 0;
}
