#include<iostream>
#include<climits>
using namespace std;
int main(){
	int arr[100];
	int n;
	cin>>n;
	for(int i=0;i<=n-1;i++){
		cin>>arr[i];
	}
	int largest=INT_MIN;
	for (int i = 0; i <= n-1; ++i)
	{
		if(arr[i]>largest){
			largest=arr[i];
		}
	}
	cout<<"Largest number in an array is "<<largest<<endl;
	

	return 0;
}