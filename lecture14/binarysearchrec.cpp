#include<iostream>
using namespace std;
int binarysearch(int *arr,int s,int e,int key){

	//base case
	if(s>e){
		return -1;
	}
	// recursive case
	int mid=(s+e)/2;
	if(key==arr[mid]){
		return mid;
	}
	else if(arr[mid]<key){
		return binarysearch(arr,mid+1,e,key);


	}
	else{
		return binarysearch(arr,s,mid-1,key);
	}

}
int main(){

	int arr[]={1,2,3,5,5,5,7,8,8,8,10};
	int n=sizeof(arr)/sizeof(int);
	int key;
	cin>>key;

	int ans=binarysearch(arr,0,n-1,key);

	cout<<"key is present at index "<<ans<<endl;


	

	

	return 0;
}