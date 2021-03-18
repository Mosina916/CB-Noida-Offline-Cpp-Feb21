#include <iostream>
using namespace std;
// void printstatements() -->function declaration
void printstatements(){
	// Function definition
	cout<<"this is coding blocks"<<endl;
	cout<<"hello everyone"<<endl;
	cout<<"humpty dumpty sat on a wall"<<endl;
	cout<<"this is blocks"<<endl;
	cout<<"hello "<<endl;
	cout<<"humpty dumpty"<<endl;

}
int sum(int x,int b){
	int sum=x+b;
	// cout<<sum<<endl;

	return sum;



}

void sum(int x,int b,int c){
	int sum=x+b+c;
	cout<<sum<<endl;

	// return sum;

}

int update(){
	int x=50;


	return x;
}

int main(){

	// printstatements(); //function calling /invoking
	// printstatements();
	// printstatements();
	// printstatements();
	// printstatements();

	int a=80,b=30,c=20;
	// cout<<sum(a,b)<<endl; direct print
	int x=sum(a,b,c); //store 
	
	cout<<x<<endl;

	cout<<update()<<endl;









	return 0;
}