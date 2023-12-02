//============================================================================
// Name        : maximum_occ_charecter.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<string>
using namespace std;

int getLen(char name[]){
	int count = 0;
	for(int i = 0; name[i] != '\0' ; i++){
		count++;
	}
	return count;
}


char getMaxOccCheracter(string s){
	int arr[26] = {0};

	//create an array of count of charecters
	for(int i = 0 ; i < s.length() ; i++){
		char ch = s[i];
		int number = 0;
		number = ch - 'a';
		arr[number]++;
	}


	// find maximum occ character
	int maxi = -1, ans = 0;
	for(int i = 0 ; i < 26 ;i++){
		if(maxi < arr[i]){
			ans = i;
			maxi = arr[i];
		}
	}
	char finalAns = 'a'+ans;
	return finalAns;
}

int main(){
	string s;
	cin >> s;
	cout << getMaxOccCheracter(s) << endl;
	return 0;
}

