#include<iostream>
using namespace std;
int main(){
	int arr[100];
	int n;
	cin>>n;
	// input array
	for(int i=0;i<=n-1;i++){
		cin>>arr[i];
	}


	cout<<"Array before sorting"<<endl;
	for(int i=0;i<=n-1;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	// Bubblesort

	for (int i = 0; i <=n-2; i++)
	{
		for (int j = 0; j<=n-2-i; j++)
		{
			if(arr[j]>arr[j+1]){
				// Swap

				// 1st way
				// with using 3rd varible

				// int temp=arr[j];
				// arr[j]=arr[j+1];
				// arr[j+1]=temp;


				// 2nd way
				// without using 3rd variable

				// arr[j]=arr[j]+arr[j+1];
				// arr[j+1]=arr[j]-arr[j+1];
				// arr[j]=arr[j]-arr[j+1];

				// 3rd way

				// inbuilt function

				swap(arr[j],arr[j+1]);
			}
		}
		
	}
	cout<<"Array After sorting"<<endl;
	for(int i=0;i<=n-1;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	
	return 0;
}