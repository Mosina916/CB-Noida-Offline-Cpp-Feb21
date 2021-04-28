/*

Rainwater Harvesting

Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it is able to trap after raining.

*/

#include<iostream>

using namespace std;

int main(){

	int n;
	cin>>n;

	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}

	// // Approach 1 - Inefficient Approach

	// int W=0; // total amount of water conserved 

	// for(int i=1; i<n-1; i++){


	// 	// Overlapping work...
	// 	int left_max=arr[i];
	// 	for(int j=0; j<i; j++){
	// 		left_max = max(left_max, arr[j]);
	// 	}

	// 	int right_max=arr[i];
	// 	for(int j=i+1; j<n; j++){
	// 		right_max = max(right_max, arr[j]);
	// 	}
		
	// 	int w_i = min(left_max, right_max) - arr[i]; // water conserved at the top of ith bar
	// 	W += w_i; 
	// }

	// cout << W << endl;

	// Approach 2

	int W=0; // total amount of water conserved 

	int left[n]; // we will fill it from left to right
	left[0]=arr[0];
	for(int i=1; i<n; i++){
		left[i]=max(left[i-1], arr[i]);
	}

	int right[n]; // we will fill it from right to left
	right[n-1]=arr[n-1];
	for(int i=n-2; i>=0; i--){
		right[i]=max(right[i+1], arr[i]);
	}

	for(int i=1; i<n-1; i++){
		int w_i = min(left[i], right[i]) - arr[i]; // water conserved at the top of ith bar
		W += w_i; 
	}

	cout << W << endl;


	return 0;
}