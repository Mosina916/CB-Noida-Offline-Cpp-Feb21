/*

Given an n x m matrix, where every row and column is sorted in increasing order, 
and a number x . Find if element x is present in the matrix or not.

Approach 2 - Linear+Binary Search : NlogM Steps

*/

#include<iostream>
#include<algorithm>

using namespace std;

bool binary_search(int* arr, int M, int key) {
	int start = 0;
	int end = M-1;
	while(start<=end) {
		int mid = start + (end-start)/2; 
		if(arr[mid]==key){
			// key has been found in arr[i]
			return true;
		} else if(arr[mid]>key){
			// search in arr[start....mid-1]
			end=mid-1;
		} else {
			// search in arr[mid+1....end]
			start=mid+1;
		}
	}
	return false;
}

bool search(int** arr, int N, int M, int key) {

	for(int i=0; i<N; i++){
		// bool isFound = binary_search(arr[i], M, key); // custom binary search
		bool isFound = binary_search(arr[i], arr[i]+M, key); // built-in function
		if(isFound) {
			return true;
		}
	}
	return false;
}

int main() {

	int N;
	cin>>N;

	int M;
	cin>>M;

	// declare a 2D array
	int** arr = new int*[N];
	for(int i=0; i<N; i++) {
		arr[i] = new int[M];
	}

	// read 2D array
	for(int i=0; i<N; i++) {
		for(int j=0; j<M; j++){
			cin>>arr[i][j];
		}
	}

	// read key
	int key;
	cin>>key;

	search(arr, N, M, key) ? cout<<"Key is found!"<<endl : cout<<"Key is not found!"<<endl;

	return 0;
}