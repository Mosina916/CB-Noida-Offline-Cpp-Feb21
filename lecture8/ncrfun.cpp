#include<iostream>
using namespace std;
int fact(int no){
	int result=1;
	
	for(int i=1;i<=no;i++){
		result=result*i;

	}
	// cout<<result<<endl;
	return result;
}
int ncr(int n,int r){
	int x=fact(n)/(fact(r)*fact(n-r));
	return x;
}


int main(){
	int n,r;
	cin>>n>>r;
	cout<<ncr(n,r)<<endl;
	

	return 0;
}