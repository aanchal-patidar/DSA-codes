//============================================================================
// Name        : search_key_linearly.cpp
// Author      : Aanchal Patidar
// Version     :
// Description : serching key linearly
//============================================================================

#include <iostream>
using namespace std;

bool search(int arr[] , int size , int key){
	for (int i = 0 ; i < size ; i++){
		if(arr[i] == key){
			return 1;
		}
	}
	return 0;
}

int main() {
	int a[10] = {2,4,6,7,8,4,9,0,76,23};
	int key;
	cout << "Enter a key : ";
	cin >> key;

	bool found = search(a , 10 , key);
	if(found){
		cout << "key is available " << endl;

	}else{
		cout << "Key is not available " << endl;
	}

	return 0;
}
