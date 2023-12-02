//============================================================================
// Name        : selection_sorting.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void sectionSort(vector<int>&arr,int n){
	for(int i = 0;i < n-1 ; i++){
		int minIndex = i;
		for(int j = i+1;j < n;j++){
			minIndex = j;
		}
		swap(arr[minIndex],arr[i]);
	}
}

int main() {
	int arr[5]={2,7,4,9,1};
	// error in the next line
	int sortedArr = sectionSort(arr,5);
	cout << sortedArr;
	return 0;
}
