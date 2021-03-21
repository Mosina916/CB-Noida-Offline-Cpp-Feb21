#include<iostream>
using namespace std;

int main(){
	// manually input

	// int a[7]={3,4,5};
	// int b[4]={1,2,6,7};
	// int m=3;
	// int n=4;
	// user input
	int a[1000];
	int b[1000];
	int m,n;
	cin>>m>>n;
	for (int i = 0; i < m; ++i)
	{
		cin>>a[i];
		/* code */
	}
	for (int i = 0; i < n; ++i)
	{
		cin>>b[i];
		/* code */
	}
	int i=m-1;
	int j=n-1;
	int k=m+n-1;
	while(i>=0&&j>=0){
		if(a[i]<b[j]){
			a[k]=b[j];
			k--;
			j--;
		}
		else{
			a[k]=a[i];
			i--;
			k--;
		}
	}
	while(j>=0){
		a[k]=b[j];
		k--;
		j--;
	}
	cout<<"array after merging and sorting"<<endl;
	for (int i = 0; i < m+n; ++i)
	{
		cout<<a[i]<<" ";
		/* code */
	}
	cout<<endl;

	
	return 0;
}