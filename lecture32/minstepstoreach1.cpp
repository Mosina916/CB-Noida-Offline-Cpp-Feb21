#include<iostream>
#include<climits>
using namespace std;
int mintoreach1(int n){
	// base case
	if(n==1){
		return 0;
	}

	// recursive case

	int op1,op2,op3; //n=15
	op1=op2=op3=INT_MAX;
	op1 =mintoreach1(n-1); //14-->x
	if(n%2==0){
		op2=mintoreach1(n/2);
	}
	if(n%3==0){
		op3=mintoreach1(n/3);//15/3--5

	}
	return min(op1,min(op2,op3))+1;

}

int bottomupminstepstoreach1(int n){
	int*dp=new int[n+1];
	dp[1]=0;
	int op1,op2,op3;
	for(int i=2;i<=n;i++){
		op1=op2=op3=INT_MAX;
		op1=dp[i-1];
		if(i%2==0){
			op2=dp[i/2];
		}
		if(i%3==0){
			op3=dp[i/3];
		}

		dp[i]=min(op1,min(op2,op3))+1;


	}


	for(int i=1;i<=n;i++){
		cout<<dp[i]<<" ";
	}
	cout<<endl;
	int ans=dp[n];
	delete[]dp;
	return ans;


	// return dp[n];




}


int topdownmintoreach1(int n,int *dp){ //n=14-->13->12->11->10->9--0
	// base case
	if(n==1){
		// return karne se pehle store
		return dp[n]=0;
	}

	// calculate karne se pehle check karna hai

	if(dp[n]!=-1){
		return dp[n];
	}

	// recursive case

	int op1,op2,op3; //n=15
	op1=op2=op3=INT_MAX;
	op1 =topdownmintoreach1(n-1,dp); //14-->x
	if(n%2==0){
		op2=topdownmintoreach1(n/2,dp);
	}
	if(n%3==0){
		op3=topdownmintoreach1(n/3,dp);//15/3--5

	}

	// return karne se pehle store
	return dp[n]=min(op1,min(op2,op3))+1;

}



int main(){

	int n;
	cin>>n;
	int *arr=new int[n+1];
	for(int i=0;i<=n;i++){
		arr[i]=-1;
	}
	cout<<"minimum steps to reach 1 is topdownmintoreach1 "<<topdownmintoreach1(n,arr)<<endl;
	for(int i=1;i<=n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

		cout<<"minimum steps to reach 1 is bottomupminstepstoreach1 "<<bottomupminstepstoreach1(n)<<endl;

	cout<<"minimum steps to reach 1 is "<<mintoreach1(n)<<endl;
	

	return 0;
}