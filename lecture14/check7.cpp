#include<iostream>
using namespace std;
bool check7ornot(int *arr,int n){
	// base case
	if(n==0){
		return false;
	}

	// recursive case
	if(arr[0]==7){
		return true;
	}
	return check7ornot(arr+1,n-1);
}


int first7(int *arr,int n,int i){
	// base case
	if(i==n){
		return -1;
	}



	// recursive case
	if(arr[i]==7){
		return i;
	}
	return first7(arr,n,i+1);


}

int last7(int arr[],int n,int i){
	// base case
	if(i==-1){
		return -1;
	}



	// recursive case
	if(arr[i]==7){
		return i;
	}
	return last7(arr,n,i-1);


}
void printall7indices(int arr[],int n,int i){
	if(i==n){
		return; //terminate
	}

	// recursive case
	if(arr[i]==7){
		cout<<i<<" ";
	}
	printall7indices(arr,n,i+1);

}

int main(){

	int arr[]={1,3,2,4,4,7,6,5,4,8,7,7,7,7,2};
	int n=sizeof(arr)/sizeof(int);
	if(check7ornot(arr,n)){
		cout<<"7 is present"<<endl;
	}
	else{
		cout<<"7 is not present"<<endl;

	}


	int x=first7(arr,n,0);
	if(x==-1){
		cout<<"7 is not present "<<x<<endl;

	}
	else{
		cout<<"7 is present at index "<<x<<endl;
	}


	 x=last7(arr,n,n-1);
	if(x==-1){
		cout<<"7 is not present "<<x<<endl;

	}
	else{
		cout<<"7 is present at index "<<x<<endl;
	}


	printall7indices(arr,n,0);


	return 0;
}