#include<iostream>
using namespace std;
int main(){


	cout<<"5&7 is "<<(5&7)<<endl;
	cout<<"5|7 is "<<(5|7)<<endl;
	cout<<"5^7 is "<<(5^7)<<endl;
	cout<<"5<<1 is "<<(5<<1)<<endl;
	cout<<"5>>1 is "<<(5>>1)<<endl;

	int a=-2;
	cout<<(a<<1)<<endl;

	int x=-4;
	cout<<(x>>1)<<endl;//-2   -2 -2 -2
	cout<<(x>>2)<<endl; //-1  -2 -1 0
	cout<<(x>>3)<<endl; //0   -2 1 0





	return 0;
}