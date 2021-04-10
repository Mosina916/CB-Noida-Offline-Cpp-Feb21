#include<iostream>
using namespace std;
void bubblesortrec(int *arr,int n,int i){
	// base case
	if(i==n-1){
		return;
	}
	// recursive case
	for (int j = 0; j<=n-2-i; j++)
		{
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
		bubblesortrec(arr,n,i+1);
}


void bubbleop(int *arr,int n,int i,int j){

	// base case
	if(i==n-1){
		return;
	}

	// recursive case
	if(j==n-i-1){
		bubbleop(arr,n,i+1,0);
	}
	else{
		if(arr[j]>arr[j+1]){   //5 4 3 2 1
			

				swap(arr[j],arr[j+1]); //4 5 3 2 1
			}

			bubbleop(arr,n,i,j+1);

	}


	

}

int main(){

	int arr[]={5,4,3,2,1,6,3,7,8,9,2};
	int n=sizeof(arr)/sizeof(int);


	cout<<"before bubble sort"<<endl;

	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;


	// bubblesortrec(arr,n,0);
	bubbleop(arr,n,0,0);
	cout<<"After bubble sort"<<endl;

	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	

	return 0;
}