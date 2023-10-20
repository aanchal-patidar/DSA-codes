//============================================================================
// Name        : binary_search_example.cpp
// Author      : Aanchal Patidar
// Version     :
// Description : example 
//============================================================================

#include <iostream>
using namespace std;

int binarySearch(int arr[], int size , int key){
	int start = 0;
	int end = size - 1;
	int mid = start + (end - start)/2;

	while(start <= end){
		if(arr[mid] == key){
			return mid;
		}
		if(key > arr[mid]){
			start = mid+1;
		}
		if(key < arr[mid]){
			end = mid-1;
		}
		mid = start + (end - start)/2;
	}
	return -1;
}

int main() {
	// binary search always apply in increasing or decreasing order
	// binary search use for less comparision compare to linear search
	int arr1[6] = {2,4,6,9,14,26};
	int arr2[5] = {3,5,9,11,13};

	int index1 = binarySearch(arr1,6,14);
	cout << index1 << endl;
	int index2 = binarySearch(arr2,5,5);
	cout << index2 << endl;

	return 0;
}
