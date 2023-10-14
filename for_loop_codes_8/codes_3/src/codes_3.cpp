//============================================================================
// Name        : codes_3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	for(int i = 0 ; i < 5 ; i++){
			for(int j = i ; j <= 5 ; j++){
				if(i+j == 10){
					break;
				}
				cout << i << " " << j << endl;
			}
		}
	return 0;
}
