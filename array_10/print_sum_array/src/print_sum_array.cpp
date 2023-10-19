//============================================================================
// Name        : print_sum_array.cpp
// Author      : Aanchal Patidar
// Version     :
// Description : printing the sum of an array
//============================================================================

#include <iostream>
using namespace std;

int sumArray(int arr[] , int n){
	int sum = 0;
	for(int i = 0 ; i < n ;i++){
		sum += arr[i];
	}

	cout<< "Sum : " << sum  << endl;
}

int main() {
	int arr[5]  = {17,23,81,44,59};

	sumArray(arr,5);

	return 0;
}
