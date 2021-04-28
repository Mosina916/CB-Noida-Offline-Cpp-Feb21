/*

Target Sum Pairs

You are given a one dimensional array containing N integers and a "target"

Write a function which prints all pairs of numbers which sum to target.

*/

#include<iostream>

using namespace std;

int main(){

	
	// input the number of elements in the array
	int n;
	cin>>n;

	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}

	int target;
	cin>>target;

	int start=0;
	int end=n-1;

	while(start<end){

		if(arr[start]+arr[end]==target){
			// found a pair
			cout<<arr[start]<<" and "<<arr[end]<<endl;
			start++;
			end--;
		} else if(arr[start]+arr[end]<target){
			start++;
		} else {
			end--;
		}

	}

	return 0;
}