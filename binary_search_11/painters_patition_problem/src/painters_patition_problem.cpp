//============================================================================
// Name        : painters_patition_problem.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

bool isPossible(int arr[], int n, int m ,int mid){
	int PaintersCount = 1;
	int partitionSum = 0;

	for(int i = 0; i < n ; i++){
		if(partitionSum +arr[i] <= mid){
			partitionSum += arr[i];
		}else{
			PaintersCount++;
			if(PaintersCount > m || arr[i] > mid){
				return false;
			}
			partitionSum = arr[i];
		}
	}
	return true;
}

int allocatePatition(int arr[],int n, int m){
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
	int patition = allocatePatition(arr,5,2);
	cout << patition;
	return 0;
}

