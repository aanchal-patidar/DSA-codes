//============================================================================
// Name        : codes_2.cpp
// Author      : Aanchal Patidar
// Version     :
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	for(int i = 0 ; i < 5 ; i++){
		for(int j = i ; j <= 5 ; j++){
			cout << i << " " << j << endl;
		}
	}
	return 0;
}
