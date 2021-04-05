#include<iostream>
using namespace std;
int fibo(int n){
	// base case

	if(n==0||n==1){
		return n;
	}


	// recursive case
	int chotiproblem=fibo(n-1);//pure assumption
	int chotiproblem2=fibo(n-2);//pure assumption




	// calculate the ans using above two
	int badiproblem=chotiproblem+chotiproblem2;
	return badiproblem;
}

int fibomod(int n){
	// base case

	if(n==0||n==1){
		return n;
	}
	// recursive case
	
	return fibomod(n-1)+fibomod(n-2);//pure assumption
}
// index start from 1
int fibomodindexchage(int n){
	// base case

	if(n==1||n==2){
		return n-1;
	}


	// recursive case
	
	return fibomodindexchage(n-1)+fibomodindexchage(n-2);//pure assumption
}

int main(){
	int n;
	cin>>n;
	cout<<fibo(n)<<endl;
	cout<<fibomod(n)<<endl;

	cout<<fibomodindexchage(n)<<endl;



	return 0;
}