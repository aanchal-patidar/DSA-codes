//============================================================================
// Name        : printing_array.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void array(int arr[] , int size){
	for(int i = 0; i < size ; i++){
		cout << arr[i] << " ";
	}
}

int main() {
	int a[15] = {1,4,3,5,7};
	array(a , 5);

	return 0;
}
