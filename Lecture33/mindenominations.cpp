#include<iostream>
#include<climits>
using namespace std;
int mindenomination(int *coins,int amount,int n){
	// base case
	if(amount==0){
		return 0;
	}

	// recursive case
	int ans=INT_MAX;
	for(int i=0;i<n;i++){
		// kya mai denomination utha sakti hun?
		if(amount-coins[i]>=0){
			int chotaamount=amount-coins[i];
			int chotaans=mindenomination(coins,chotaamount,n); //x
			if(chotaans!=INT_MAX&&chotaans<ans){
				ans=chotaans+1;

			}


		}
	}
	return ans;

}




// top down 



int mindenominationtopdown(int *coins,int amount,int n,int *dp){
	// base case
	if(amount==0){
		// return karne se pehle store
		return dp[amount]=0;
	}
	// calculate karne se pehle check
	if(dp[amount]!=-1){
		return dp[amount];

	}
	// recursive case
	int ans=INT_MAX;
	for(int i=0;i<n;i++){
		// kya mai denomination utha sakti hun?
		if(amount-coins[i]>=0){
			int chotaamount=amount-coins[i];
			int chotaans=mindenominationtopdown(coins,chotaamount,n,dp); //x
			if(chotaans!=INT_MAX&&chotaans<ans){
				ans=chotaans+1;

			}


		}
	}
	return dp[amount]=ans;

}

// bottom up 


int bottomup(int *coins,int amount,int n){
	int *dp=new int[amount+1];
	for (int i = 0; i <=amount; ++i)
	{
		dp[i]=INT_MAX;
	}
	dp[0]=0;
	for(int rup=1;rup<=amount;rup++){
		for(int i=0;i<n;i++){ //coins wali array pe iterate karega
			if(rup-coins[i]>=0){
				int chotaamount=rup-coins[i];
				dp[rup]=min(dp[chotaamount]+1,dp[rup]); //1

			}

		}

	}
	for (int i = 0; i <=amount; ++i)
	{
		cout<<dp[i]<<" ";
	}
	cout<<endl;
	return dp[amount];
}



int main(){
	// int n;
	// cin>>n;
	int coins[]={1,7,10}; //contain denomination
	int n=sizeof(coins)/sizeof(int);
	// for (int i = 0; i < n; ++i)
	// {
	// 	cin>>coins[i];
	// }
	int amount;
	cin>>amount;
	int dp[100];
	// memset(dp,-1,sizeof(dp));
	for (int i = 0; i < 100; ++i)
	{
		dp[i]=-1;
	}

	cout<<"min denominations "<<mindenominationtopdown(coins,amount,n,dp)<<endl;


	cout<<"min denominations "<<bottomup(coins,amount,n)<<endl;
	int ans=mindenomination(coins,amount,n);
	cout<<"min denominations "<<ans<<endl;



	return 0;



}