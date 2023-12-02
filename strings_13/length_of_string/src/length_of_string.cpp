//============================================================================
// Name        : length_of_string.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int getLen(char name[]){
	int count = 0;
	for(int i = 0; name[i] != '\0' ; i++){
		count++;
	}
	return count;
}

int main() {

	char name[20];
	cout << "Enter the name " ;
	cin >> name;
	cout << "Your name is " << name << endl;
	int length = getLen(name);
	cout << "Length : " << length;

	return 0;
}
