#include<iostream>
using namespace std;

void update(int arr[]){
	int n=sizeof(arr)/sizeof(int);
	for (int i = 0; i < n; ++i)
	{
		arr[i]=arr[i]+2;
		/* code */
	}
}




int main(){
	int arr[]={1,2,3,4,5,6,7};
	// int arr[100];
	int n=sizeof(arr)/sizeof(int);
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
		/* code */
	}
	cout<<endl;

	update(arr);

	cout<<"after update function"<<endl;

	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
		/* code */
	}
	cout<<endl;


	return 0;
}