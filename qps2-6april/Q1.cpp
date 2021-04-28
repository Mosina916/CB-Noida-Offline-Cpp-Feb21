/*

Maximum Subarray Sum

You are given a one dimensional array that may contain both positive and negative integers. 

Find the sum of contiguous subarray of numbers which has the largest sum. 

For example, if the given array is {-2, -5, 6, -2, -3, 1, 5, -6}, then the maximum subarray sum is 7.

*/

#include<iostream>
#include<climits>

using namespace std;

int main(){

	// input the size of the array
	int n;
	cin>>n;

	// declare an array of size n
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}

	// // Approach 1 -> Brute Force Approach (3 Loops)

	// int MAX_SUM=INT_MIN;
	// int start=0;
	// int end=0;
	// for(int i=0; i<n; i++){
	// 	for(int j=i; j<n; j++){
	// 		// I am considering sub-array starting at index i and ending at index j
	// 		int subarray_sum=0;
	// 		for(int k=i; k<=j; k++){
	// 			subarray_sum += arr[k];
	// 		}
	// 		if(subarray_sum>MAX_SUM){
	// 			start=i;
	// 			end=j;
	// 			MAX_SUM=subarray_sum;
	// 		}

	// 	}
	// }

	// cout<<"Maximum Subarray Sum is"<<MAX_SUM<<endl;

	// for(int i=start; i<=end; i++){
	// 	cout<<arr[i]<<" ";
	// }

	// cout<<endl;

	// Approach 2 -> Cumulative Sum (2 Loops)

	// int csum[n];
	// csum[0]=arr[0];
	// for(int i=1; i<n; i++){
	// 	csum[i]=csum[i-1]+arr[i];
	// }

	// int MAX_SUM=INT_MIN;
	// int start=0;
	// int end=0;
	// for(int i=0; i<n; i++){
	// 	for(int j=i; j<n; j++){
	// 		int subarray_sum = csum[j]-csum[i-1];
	// 		if(subarray_sum>MAX_SUM){
	// 			start=i;
	// 			end=j;
	// 			MAX_SUM=subarray_sum;
	// 		}

	// 	}
	// }

	// cout<<"Maximum Subarray Sum is"<<MAX_SUM<<endl;

	// for(int i=start; i<=end; i++){
	// 	cout<<arr[i]<<" ";
	// }

	// cout<<endl;

	// Approach 3 -> Kadane's Algorithm (1 Loop)

	int start=0;
	int end=0;
	int temp=0;

	int MAX_SUM=INT_MIN;
	int CUR_SUM=0; // it looks for only the positve contiguous segments

	for(int i=0; i<n; i++){
		CUR_SUM = CUR_SUM + arr[i];
		if(CUR_SUM>MAX_SUM){
			MAX_SUM=CUR_SUM;
			start=temp;
			end=i;
			{
				
			};
		}
		if(CUR_SUM<0){
			CUR_SUM=0;
			temp=i+1;
		}
	}
	
	cout<<"Maximum Subarray Sum is"<<MAX_SUM<<endl;

	for(int i=start; i<=end; i++){
		cout<<arr[i]<<" ";
	}

	cout<<endl;



	return 0;
}