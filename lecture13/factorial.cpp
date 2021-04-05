#include<iostream>
using namespace std;
int fact(int n){
	// base case
	if(n==0){
		return 1;
	}

	// recursive case
	int chotaans=fact(n-1);



	// with the above two steps calculate the  problem
	int bigproblem=n*chotaans;

	return bigproblem;

}
int factmod(int n){
	// base case
	if(n==0){
		return 1;
	}

	// recursive case
	
	return n*factmod(n-1); //pure assumption

}
int main(){
	int n;
	cin>>n;
	cout<<fact(n)<<endl;
	cout<<factmod(n)<<endl;




	return 0;
}