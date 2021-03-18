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


int main(){
	int n,r;
	cin>>n>>r;
	cout<<fact(n)/(fact(r)*fact(n-r))<<endl;
	

	return 0;
}