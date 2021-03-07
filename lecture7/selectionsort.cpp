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
	// selection sort

	for(int i=0;i<=n-2;i++){
		int min=i;
		for(int j=i+1;j<=n-1;j++){
			if(arr[j]<arr[min]){
				min=j;
			}

		}
		swap(arr[min],arr[i]);
	}




	cout<<"Array After sorting"<<endl;
	for(int i=0;i<=n-1;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	
	return 0;
}