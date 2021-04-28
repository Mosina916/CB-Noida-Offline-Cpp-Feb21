/*

Given a 2D array of size n x n. Rotate the array 90 degrees anti-clockwise.

*/

#include<iostream>
#include<algorithm>

using namespace std;

void reverse(int* arr, int n) {
	for(int i=0; i<n/2; i++){
		swap(arr[i], arr[n-1-i]);
	}
	return;
}

void rotate(int** arr, int n) {
	// rotates arr by 90 deg. anti-clockwise

	// // 1. reverse each row
	// for(int i=0; i<n; i++){
	// 	// reverse(arr[i], n); // custom reverse fn.
	// 	reverse(arr[i], arr[i]+n); // built-in reverse fn; reverse(i, j) [i, j) 
	// }

	// // 2. take the transpose
	// for(int i=0; i<n; i++){
	// 	for(int j=0; j<n; j++){
	// 		if(i<j){
	// 			swap(arr[i][j], arr[j][i]);
	// 		}
	// 	}
	// }

	// 1. take the transpose
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i<j){
				swap(arr[i][j], arr[j][i]);
			}
		}
	}

	// 2. reverse each row
	for(int i=0; i<n; i++){
		// reverse(arr[i], n); // custom reverse fn.
		reverse(arr[i], arr[i]+n); // built-in reverse fn; reverse(i, j) [i, j) 
	}


	return;
}

int main() {

	// read dimension of 2D array (nxn)
	int n;
	cin>>n;

	// declare a 2D array
	int** arr = new int*[n];
	for(int i=0; i<n; i++){
		arr[i]=new int[n];
	}

	// read input
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>arr[i][j];
		}
	}

	rotate(arr, n); // In C++, arrays are passed by reference

	// print the rotated array
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}



	return 0;
}