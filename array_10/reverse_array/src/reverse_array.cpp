//============================================================================
// Name        : reverse_array.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void reverse(int arr[] , int n){
	int start = 0;
	int end = n - 1;
	while(start <= end){
		swap(arr[start] , arr[end]);
		start++;
		end--;
	}
}
void printarr(int arr[] , int n){
	for(int i = 0; i < n ;i++){
		cout << arr[i] << " ";
	}
}

int main() {
	int arr[5] = {1,2,3,4,5};


	reverse(arr , 5 );
	printarr(arr , 5);

	return 0;
}
