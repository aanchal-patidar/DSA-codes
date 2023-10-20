//============================================================================
// Name        : peak_index_in_mountain_array.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
/*		/\
   	   /  \
   	  mountain array
*/

int peakIndex(int arr[],int n){
	int start = 0;
	int end = n -1;
	int mid = start + (end - start)/2;

	while(start < end){

		if(arr[mid] < arr[mid+1]){
			start = mid+1;
		}else {
			end = mid;
		}
		mid  = start + (end - start)/2;
	}
	return start;
}

int main() {
	int arr[5]= {1,3,5,4,1};
	int index = peakIndex(arr,5);
	cout << index;
	return 0;
}
