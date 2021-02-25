// Largestof3numbers
#include <iostream>
using namespace std;

int main(){

	int a,b,c;
	cin>>a>>b>>c;

	if(a>=b && a>=c){
		cout<<"A is largest "<<a<<endl;
	}
	else if(b>=a && b>=c){
		cout<<"B is largest "<<b<<endl;
	}
	else{
		cout<<"C is largest "<<c<<endl;
	}



	return 0;
}