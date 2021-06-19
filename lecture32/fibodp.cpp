#include<iostream>
using namespace std;
int fibo(int n){
	// base case
	if(n==0||n==1){
		return n;

	}

	// recursive case
	return fibo(n-1)+fibo(n-2);
}

// top down solution
int topdownfibodp(int n,int *dp){
	// base case
	if(n==0||n==1){
		return dp[n]=n;

	}
	// calculate karne se pehle check kar rahi thi
	if(dp[n]!=-1){ //already calculated hai
		return dp[n];


	}


	// recursive case

	// return karne se pehle store kar rahi thi -->array mai
	return dp[n]=topdownfibodp(n-1,dp)+topdownfibodp(n-2,dp);
}

int bottomupfibodp(int n){
	int *arr=new int[n+1];
	// top down base case-->inilization condition
	arr[0]=0;
	arr[1]=1;
	for(int i=2;i<=n;i++){
		arr[i]=arr[i-1]+arr[i-2];
	}
	// printing of array
	for(int i=0;i<=n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	int ans=arr[n];
	delete[]arr; //delete the arr

	return ans;

}
int main(){
	int n;
	cin>>n;
	// int arr[n];wrong
	int *arr=new int[n+1];
	// initilize whole array with 0 
	for(int i=0;i<=n;i++){
		arr[i]=-1;
	}


	cout<<"nth fibonacci number is by dp topdownfibodp "<<endl;

	cout<<topdownfibodp(n,arr)<<endl;

	for(int i=0;i<=n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;




	cout<<"nth fibonacci number is by dp bottomupfibodp "<<endl;
	cout<<bottomupfibodp(n)<<endl;
	cout<<"nth fibonacci number is "<<endl;
	cout<<fibo(n)<<endl;




	return 0;
}