/*

Given an n x m matrix, where every row and column is sorted in increasing order, 
and a number x . Find if element x is present in the matrix or not.

Approach 1 - Linear Search : NM Steps

*/

#include<iostream>

using namespace std;

bool search(int** arr, int N, int M, int key) {

	for(int i=0; i<N; i++){
		for(int j=0; j<M; j++){
			if(arr[i][j]==key){
				// key has been found
				return true;
			}
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