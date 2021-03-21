#include<iostream>
using namespace std;

void printarray(int *arr,int n){
	for (int i = 0; i < n; ++i)
	{
		cout<<*(arr+i)<<endl;;
		/* code */
	}
	cout<<endl;
}

void revesrearray(int *arr,int n){
	for (int i = n-1; i>=0; i--)
	{
		cout<<arr[i]<<" "<<*(arr+i)<<endl;;
		/* code */
	}
	cout<<endl;
}

int main(){
	int arr[]={1,3,4,2,6,5};
	int n=6;

	cout<<"address of arr is "<<arr<<endl;
	cout<<"address of arr[0] is "<<&arr[0]<<endl;

	int *arrptr=arr;
	cout<<arrptr<<endl;
	cout<<&arr[0]<<endl;
	cout<<arrptr+1<<endl;
	cout<<&arr[1]<<endl;
	cout<<arrptr+2<<endl;
	cout<<&arr[2]<<endl;
	printarray(arr,n);
	revesrearray(arr,n);


	int *x=&n;
	cout<<x<<endl;
	cout<<x[1]<<endl;
	cout<<x[2]<<endl;












	return 0;
}