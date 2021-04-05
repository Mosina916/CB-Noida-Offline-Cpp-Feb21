#include<iostream>
using namespace std;

string s[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
void problem2048(int n){
	// base case
	if(n==0){
		return;
	}



	// recursive case

	int digit=n%10; //8

	cout<<s[digit]<<" ";
	problem2048(n/10);

}

int main(){
	int n;
	cin>>n;
	problem2048(n);
	


	return 0;
}