#include<iostream>
using namespace std;
int sum(int*arr,int n){
	// base case 
	// if(n==0){
	// 	return 0
	// }
	if(n==1){
		return arr[0];
	}


	// recursive case
	return arr[0]+sum(arr+1,n-1);
}

int main(){
	// int n;
	// cin>>n;
	int arr[]={4,1,2,5,3};
	int n=sizeof(arr)/sizeof(int);

	sum(arr,n;


	return 0;
}