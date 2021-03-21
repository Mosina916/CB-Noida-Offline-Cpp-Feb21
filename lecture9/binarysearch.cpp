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
	int key;
	cin>>key;
	int s=0;
	int e=n-1;

	while(s<=e){
		int mid=(s+e)/2;
	if(arr[mid]==key){
		cout<<"key present at index "<<mid<<endl;
		break;
	}
	else if(arr[mid]<key){
		s=mid+1;

	}
	else{
		e=mid-1;
	}

	}
	if(s>e){
		cout<<"key is not present"<<endl;
	}

	


	
	return 0;
}