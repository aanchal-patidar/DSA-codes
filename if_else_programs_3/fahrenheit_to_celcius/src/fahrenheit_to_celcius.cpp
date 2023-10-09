//============================================================================
// Name        : fahrenheit_to_celcius.cpp
// Author      : Aanchal Patidar
// Version     :
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	float fahrenheit ;
	cout << "fahrenheit value : ";
	cin >>fahrenheit;

	float celcius = (5.0/9)*(fahrenheit - 32);
	cout << celcius<< endl;

	return 0;
}
