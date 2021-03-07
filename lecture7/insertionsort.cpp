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

	// insertion sort

	for(int i=1;i<=n-1;i++){
		int currentelement=arr[i];
		int j;
		for(j=i-1;j>=0&&arr[j]>currentelement;j--){
			arr[j+1]=arr[j];
		}
		arr[j+1]=currentelement;
	}




	cout<<"Array After sorting"<<endl;
	for(int i=0;i<=n-1;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	
	return 0;
}