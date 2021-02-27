#include<iostream>
using namespace std;
int main(){

	char ch;
	cin>>ch;

	// 1st way
	// if(ch>=65&&ch<=90){
	// 	cout<<"UPPER CASE"<<endl;
	// }
	// else if(ch>=97&&ch<=122){
	// 	cout<<"lower case"<<endl;
	// }
	// else{
	// 	cout<<"invalid input"<<endl;
	// }

	// 2 way

	// if(ch>='A'&&ch<='Z'){
	// 	cout<<"UPPER CASE"<<endl;
	// }
	// else if(ch>='a'&&ch<='z'){
	// 	cout<<"lower case"<<endl;
	// }
	// else{
	// 	cout<<"invalid input"<<endl;
	// }

	// 3rd way


	if(isupper(ch)){ //inbuild functions
		cout<<"UPPER CASE"<<endl;

	}
	else if(islower(ch)){
		cout<<"lower case"<<endl;

	}
	else{

		cout<<"invalid input"<<endl;

	}




	return 0;




}