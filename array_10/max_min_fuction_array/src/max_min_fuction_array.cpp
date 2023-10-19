//============================================================================
// Name        : max_min_fuction_array.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int maxvalue(int arr[] , int size){						// error
	int max = INT_MIN;
	for(int i = 0 ; i < size ; i++){
	if(arr[i] > max){
		max = arr[i];
	}
	return max;
}
int minvalue(int arr1[] , int n){
	int mix = INT_MAX;
	for(int i = 0 ; i < n ; i++){
	if(arr[i] < min){
		min = arr1[i];
	}
	return min;
}


int main() {
	int a[15];

	cout << "Maximum : " << maxvalue(a,5) << endl;
	cout << "Minimum : " << minvalue(a,5) << endl;

	return 0;
}
