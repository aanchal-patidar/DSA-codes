//============================================================================
// Name        : find_pivot_in.cpp
// Author      : Aanchal Patidar
// Version     :
// Description : finding pivot(peak) in array
//============================================================================

#include <iostream>
using namespace std;

int getPivot(int arr[],int n){
	int start = 0;
	int end = n - 1;

	int mid = start + (end - start)/ 2;

	while(start < end){
		//for first line
		if(arr[mid]>= arr[0]){
			start = mid+1;
		}else{
			//for second line
			end = mid;
		}
		mid = start + (end - start)/ 2;
	}
	return start;
}

int main() {
	int arr[5]={3,8,10,17,1};
	//get least pivot point of the array
	cout << "pivot index is " << getPivot(arr,5);
	return 0;
}
