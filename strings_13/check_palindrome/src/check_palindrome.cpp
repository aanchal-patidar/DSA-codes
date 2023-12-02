//============================================================================
// Name        : check_palindrome.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

bool checkPalindrome(char name[] , int n){
	int s = 0;
	int e = n - 1;

	while( s<=e){
		if(name[s] != name[e]){
			return 0;
		}
		else{
			s++;
			e--;
		}
	}
	return 1;
}
int getLen(char name[]){
	int count = 0;
	for(int i = 0; name[i] != '\0' ; i++){
		count++;
	}
	return count;
}

int main() {
	char name[20];
	cout << "Enter the name" << endl;
	cin >> name;

	int length = getLen(name);
	cout << "Length : " << length << endl;
	cout << "check Palindrome or not " << checkPalindrome(name,length);

	return 0;
}
