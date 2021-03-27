#include<iostream>
using namespace std;
// int sum(int a,int b){
// 	return a+b;
// }

// int sum(int a,int b,int c){
// 	return a+b+c;
// }
// int sum(int a,int b,int c,int d){
// 	return a+b+c+d;
// }


int sum(int a=0,int b=0,int c=0,int d=0){
	return a+b+c+d;
}


int main(){

	// cout<<sum(2,4)<<endl;
	// cout<<sum(1,4,6)<<endl;
	// cout<<sum(1,4,6,3)<<endl;

	cout<<sum(2,0,8)<<endl;
	cout<<sum(2,4,3)<<endl;
	cout<<sum()<<endl;





return 0;

}