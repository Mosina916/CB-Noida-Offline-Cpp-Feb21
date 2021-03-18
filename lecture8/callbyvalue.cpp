#include<iostream>
using namespace std;

// void update(int a){

// 	a=a+1;
// 	cout<<"value of a inside update is "<<a<<endl; //1


// }


// call by refrence
void update(int &a){

	a=a+1;
	cout<<"value of a inside update is "<<a<<endl; //1


}




int main(){
	int a=1;
	cout<<"value of a inside main is "<<a<<endl; //1
	

	update(a);

	cout<<"value of a inside main is "<<a<<endl; //2


	

	return 0;
}