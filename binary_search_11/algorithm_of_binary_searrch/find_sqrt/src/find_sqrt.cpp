//============================================================================
// Name        : find_sqrt.cpp
// Author      : Aanchal Patidar
// Version     :
// Description : finding the sqrt of the number
//============================================================================

#include <iostream>
using namespace std;

// use long long int because of integer is not able to store large values
long long int binarySearch(int n){
	int s = 0;
	int e = n;
	long long int mid = s + (e-s)/2;
	long long int ans = -1;

	while(s<=e){
		long long int square = mid * mid;
		if(square == n){
			return mid;
		}
		if(square < n){
			ans = mid;
			s = mid+1;
		}else{
			e=mid-1;
		}
		mid = s + (e-s)/2;
	}

	return ans;
}

int main() {

	int n;
	cout << "enter an number";
	cin >> n;
	long long int sqrt =  binarySearch(n);
	cout<< "Sqrt " << sqrt;
	return 0;
}
