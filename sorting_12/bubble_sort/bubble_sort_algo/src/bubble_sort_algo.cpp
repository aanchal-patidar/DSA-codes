//============================================================================
// Name        : bubble_sort_algo.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int> &arr,int n){
	for(int i = 1; i < n ; i++){
		//for round 1 to n-1
		bool swapped = false;
		for(int j = 0; j< n-i ; j++){
			//process elemnet till n-i th index
			if(arr[j]>arr[j+1]){
			swap(arr[j],arr[j+1]);
			swapped = true;

			}
		}
		if(swapped == false){
			break;
		}
}

int main() {

	return 0;
}
