//============================================================================
// Name        : codes_3.cpp
// Author      : Aanchal Patidar
// Version     :
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