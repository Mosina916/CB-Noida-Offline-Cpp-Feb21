/*

Target Sum Pairs

You are given a one dimensional array containing N integers and a "target"

Write a function which prints all pairs of numbers which sum to target.

*/

#include<iostream>
#include<algorithm>

using namespace std;

int main(){

	
	// input the number of elements in the array
	int n;
	cin>>n;

	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}

	// sort the array. 

	sort(arr, arr+n);

	int target;
	cin>>target;

	// int start=0;
	// int end=n-1;

	// while(start<end){

	// 	if(arr[start]+arr[end]==target){
	// 		// found a pair
	// 		cout<<arr[start]<<" and "<<arr[end]<<endl;
	// 		start++;
	// 		end--;
	// 	} else if(arr[start]+arr[end]<target){
	// 		start++;
	// 	} else {
	// 		end--;
	// 	}

	// }

	for(int pivot_index=0; pivot_index<n-2; pivot_index++){
		int new_target = target - arr[pivot_index];
		// find a pair (y, z) in arr[pivot_index+1....n] such that y+z==new_target;
		int start=pivot_index+1;
		int end=n-1;

		while(start<end){

			if(arr[start]+arr[end]==new_target){
				// found a triplet
				cout<<arr[pivot_index]<<", "<<arr[start]<<" and "<<arr[end]<<endl;
				start++;
				end--;
			} else if(arr[start]+arr[end]<new_target){
				start++;
			} else {
				end--;
			}

		}

	}

	return 0;
}