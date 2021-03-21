#include<iostream>
using namespace std;
void update(int *z){
	*z=*z+10;

}

int main(){
	int x=45;
	int*y=&x;
	cout<<"value of x is "<<x<<endl;
	update(y);
	cout<<"value of x is "<<x<<endl;






	return 0;
}