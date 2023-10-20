//============================================================================
// Name        : more_pricisely_sqrt_decimal.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
using namespace std;
// we can get decimal of any square root
// use long long int because of integer is not able to store large values
long long int sqrtInteger(int n){
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
double morePricision(int n,int precision,int tempSol){
	double factor = 1;
	double ans = tempSol;

	for (int i = 0; i < precision; i++){
		factor = factor / 10;
		for(double j = ans ; j*j < n ; j+=factor){
			ans = j;
		}
	}
	return ans;
}

int main() {

	int n;
	cout << "enter an number";
	cin >> n;
	int tempSol = sqrtInteger(n);
	cout<< "Sqrt " <<  morePricision(n , 3 ,tempSol);
	return 0;
}
