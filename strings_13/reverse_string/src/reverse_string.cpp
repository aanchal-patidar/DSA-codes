//============================================================================
// Name        : reverse_string.cpp
// Author      : Aanchal Patidar
// Description : 
//============================================================================

#include <iostream>
#include<math.h>
using namespace std;

void reverse(char name[], int n){
	int s = 0;
	int e = n-1;

	while(s < e){
		swap(name[s++],name[e--]);
	}
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
	cout << "Enter the name " ;
	cin >> name;
	cout << "Your name is " << name << endl;
	int length = getLen(name);
	cout << "Length : " << length << endl;
	reverse(name,length);
	cout <<"reverse name " << name;

	return 0;
}
