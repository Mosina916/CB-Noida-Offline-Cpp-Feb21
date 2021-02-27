#include<iostream>
using namespace std;

int main(){

	// int a=0;
	// int b=10;
	// if(a>0&&b++){
	// 	a=a+1;
	// }
	// else{
	// 	b=b+1;
	// }

	// cout<<a<<endl;
	// cout<<b<<endl;

	// a=0;
	// b=10;

	// if(b++&&a>0){
	// 	a=a+1;
	// }
	// else{
	// 	b=b+1;
	// }

	// cout<<a<<endl;
	// cout<<b<<endl;

	int x=1;
	int y=0;
	if(x++&&y==0){
		x=x+1;
	}
	else{
		y=y+1;
	}
	cout<<x<<endl;
	cout<<y<<endl;
	
	return 0;




}