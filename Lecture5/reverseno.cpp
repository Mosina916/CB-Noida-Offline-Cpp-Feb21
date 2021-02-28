#include<iostream>
using namespace std;
int main(){

	int n;
	cin>>n;
	int ans=0;
	while(n!=0){
		int digitextract=n%10; //step 1
		ans=ans*10+digitextract; //step 2
			// ans=ans*10+n%10; 
		n=n/10; //step 3


	}
	cout<<ans<<endl;

	return 0;
}