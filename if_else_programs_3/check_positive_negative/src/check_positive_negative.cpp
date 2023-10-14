//============================================================================
// Name        : check_positive_negative.cpp
// Author      : Aanchal Patidar
// Version     :
// Description : check positive or negative numbers
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a;
	cout << "Enter an number : " << endl;
	cin >> a;

	if(a > 0)
		cout << a << " is positive" << endl;
	else if(a < 0)
		cout << a << " is negative" << endl;
	else
		cout << a << " is zero" << endl;
	return 0;
}
