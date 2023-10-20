//============================================================================
// Name        : search_in_rotated_sorted_array.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int getPivot(int arr[],int n){
	int start = 0;
	int end = n - 1;

	int mid = start + (end - start)/ 2;

	while(start < end){
		if(arr[mid]>= arr[0]){
			start = mid+1;
		}else{
			end = mid;
		}
		mid = start + (end - start)/ 2;
	}
	return start;
}

int binarySearch(int arr[], int s , int e , int key){
	int start= s;
	int end = e;
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
int findPosition(int arr[],int n,int k){
	int pivot = getPivot(arr, n);
	if(k > arr[pivot] && k < n-1){
		return binarySearch(arr,pivot,n-1,k);
	}else{
		return binarySearch(arr,0,pivot-1,k);
	}
}

int main() {
	int arr[5] = {7,8,1,2,3};
	int sortedArr = findPosition(arr,5,1);
	cout << sortedArr;
	return 0;
}
