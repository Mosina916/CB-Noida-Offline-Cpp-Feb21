#include<iostream>
using namespace std;
int main(){
	int arr[100];
	int n;
	cin>>n;
	for(int i=0;i<=n-1;i++){
		cin>>arr[i];
	}
	int key;
	int i;
	cin>>key;
	for(i=0;i<=n-1;i++){
		if(arr[i]==key){
			cout<<"key is present in array at index "<<i<<endl;
			break;

		}
	}
	if(i==n){
		cout<<"key not present "<<endl;
	}
	


	return 0;
}