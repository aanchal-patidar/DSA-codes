//============================================================================
// Name        : aggresive_cows.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
#include<iostream>
using namespace std;

bool isPossible(vector<int>&stalls,int k , int mid){
	int cowCount = 1;
	int lastPos = stalls[0];
	for(int i =0 ; i < stalls.size();i++){
		if(stalls[i]-lastPos >= mid){
			cowCount ++;
			if(cowCount == k){
				return true;
			}
			lastPos = stalls[i];

		}
	}
	return false;
}

int aggresiveCow(vector<int>&stalls,int k){
	sort(stalls.begin(),stalls.end());
	int s = 0;
	int maxi = -1;
	for(int i = 0 ; i < stalls.size();i++){
		maxi = max(maxi,stalls[i]);
	}
	int e = maxi;
	int ans = -1;
	int mid = s +(e-s)/2;
	while(s<=e){
		if(isPossible(stalls,k,mid)){
			ans = mid;
			s = mid +1;
		}else{
			e = mid - 1;
		}
		mid = s +(e-s)/2;
	}
	return ans;
}

int main() {
	int arr[5] = { 3,4,3,9,1};
	// error in the next line
	int distance = aggresiveCow(arr,9);
	cout << distance;
	return 0;
}
