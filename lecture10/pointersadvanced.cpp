#include<iostream>
using namespace std;
int main(){
	int radius=1;
	// int *rptr=&radius;
	int *rptr=NULL;
	// int *rptr=0;


	// circumfrence of circle


	// cout<<2*3.14*radius<<endl;
	cout<<2*3.14*(*rptr)<<endl;




	return 0;
}