#include<iostream>
using namespace std;
bool issorted(int *arr,int n){
	// Base case
	if(n==1){
		return true;
	}

	// recursive case
	if(issorted(arr+1,n-1)&&arr[0]<=arr[1]){
		return true;


	}
	// else{
	// 	return false;
	// }


	return false;


}


bool issorted2(int *arr,int n){
	// Base case
	if(n==1){
		return true;
	}

	// recursive case
	if(issorted2(arr,n-1)&&arr[n-1]>=arr[n-2]){
		return true;


	}
	// else{
	// 	return false;
	// }


	return false;


}

bool issorted3(int *arr,int n,int i){
	// Base case
	if(i==n-1){
		return true;
	}

	// recursive case
	if(issorted3(arr,n,i+1)&&arr[i]<=arr[i+1]){
		return true;


	}
	// else{
	// 	return false;
	// }


	return false;


}
int main(){
	// int n;
	// cin>>n;
	int arr[]={1,2,4,6,7,9,10};
	int n=sizeof(arr)/sizeof(int);


	if(issorted(arr,n)){
		cout<<"Array is sorted"<<endl;
	}
	else{
		cout<<"array is not sorted"<<endl;
	}

	if(issorted2(arr,n)){
		cout<<"Array is sorted"<<endl;
	}
	else{
		cout<<"array is not sorted"<<endl;
	}

	if(issorted3(arr,n,0)){
		cout<<"Array is sorted"<<endl;
	}
	else{
		cout<<"array is not sorted"<<endl;
	}





	return 0;
}