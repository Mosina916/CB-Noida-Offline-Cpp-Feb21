#include<iostream>
using namespace std;
int* f(int n){
	int *arr=new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	int *dptr=arr;
	return dptr;
	// return arr;

}
int main(){

	int n;
	cin>>n;
	int*nptr=f(n);
	for (int i = 0; i < n; ++i)
	{
		cout<<nptr[i]<<" ";
	}
	cout<<endl;

	delete[] nptr;
	nptr=NULL;


	return 0;
}