#include<iostream>
using namespace std;
int* sumofarray(int *arr,int n){
	int sum=0;
	int *sumptr=&sum;
	for (int i = 0; i < n; ++i)
	{
		// sum+=arr[i];
		sum+=*(arr+i); //*(arr+i)
		/* code */
	 //*(arr+j+1)
	}
	// cout<<"sum is "<<sum<<endl;
	return sumptr;

}
int main(){
	int arr[]={1,3,4,2,6,5};
	int n=6;

	int *d=sumofarray(arr,n);
	cout<<*d<<endl;


	cout<<&sum<<endl;

	return 0;
}