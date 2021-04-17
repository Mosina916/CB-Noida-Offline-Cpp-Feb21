#include<iostream>
using namespace std;

// void mergetwosortedarrays(int *arr1,int *arr2,int s1,int s2){
// 	int i=0,j=0,k=0;
// 	int temp[10000];
// 	while(i<s1&&j<s2){
// 		if(arr1[i]<arr2[j]){
// 			temp[k]=arr1[i];
// 			i++;
// 			k++;
// 		}
// 		else{
// 			temp[k]=arr2[j];
// 			j++;
// 			k++;

// 		}
// 	}
// 	while(i<s1){
// 		temp[k]=arr1[i];
// 		i++;
// 		k++;
// 	}
// 	while(j<s2){
// 		temp[k]=arr2[j];
// 		j++;
// 		k++;
// 	}
// 	int ts=s1+s2;


// 	cout<<"arrays after merging"<<endl;

// 	for(int i=0;i<k;i++){
// 		cout<<temp[i]<<" ";
// 	}
// 	cout<<endl;



// }

// merge sort
void mergetwosortedarraysmodified(int *arr,int s,int e){
	int mid=(s+e)/2;
	int i=s,j=mid+1,k=s;
	int temp[10000];
	while(i<=mid&&j<=e){
		if(arr[i]<arr[j]){
			temp[k]=arr[i];
			i++;
			k++;
		}
		else{
			temp[k]=arr[j];
			j++;
			k++;

		}
	}
	while(i<=mid){
		temp[k]=arr[i];
		i++;
		k++;
	}
	while(j<=e){
		temp[k]=arr[j];
		j++;
		k++;
	}
	for(int i=s;i<=e;i++){
		arr[i]=temp[i];
	}
	// cout<<endl;



}


void mergesort(int *arr,int s,int e){
	// base case
	if(s>=e){
		return;
	}


	// recursive case
	int mid=(s+e)/2;
	mergesort(arr,s,mid);
	mergesort(arr,mid+1,e);
	mergetwosortedarraysmodified(arr,s,e);
}
int main(){

	// int arr1[]={1,2,3,5,7,9,12,13,14,};
	// int arr2[]={2,4,6,8};
	// int s1=sizeof(arr1)/sizeof(int);
	// int s2=sizeof(arr2)/sizeof(int);


	// mergetwosortedarrays(arr1,arr2,s1,s2);
	int arr[]={4,2,1,5,3,2,6,3};
	int n=sizeof(arr)/sizeof(int);
	cout<<"before sorting"<<endl;
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	mergesort(arr,0,n-1);

	cout<<"after sorting"<<endl;


	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;



	return 0;
}