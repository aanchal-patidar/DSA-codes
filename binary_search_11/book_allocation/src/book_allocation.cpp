//============================================================================
// Name        : book_allocation.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

/* n is size of array
 m is number of students
 partition type problem  */

bool isPossible(int arr[], int n, int m ,int mid){
	int studentCount = 1;
	int pageSum = 0;

	for(int i = 0; i < n ; i++){
		if(pageSum +arr[i] <= mid){
			pageSum += arr[i];
		}else{
			studentCount++;
			if(studentCount > m || arr[i] > mid){
				return false;
			}
			pageSum = arr[i];
		}
	}
	return true;
}

int allocateBooks(int arr[],int n, int m){
	int s = 0;
	int sum = 0;
	for(int i = 0;i <n; i++){
		sum += arr[i];
	}
	int e = sum;
	int ans = -1;
	int mid = s +(e-s)/2;

	while(s<=e){
		if(isPossible(arr,n,m,mid)){
			ans = mid;
			e = mid -1;
		}
		else{
			s = mid+1;
		}
		mid = s +(e-s)/2;
	}
	return ans;
}

int main(){

	int arr[5] = {2,5,8,3,9};
	int books = allocateBooks(arr,5,2);
	cout << books;
	return 0;
}

