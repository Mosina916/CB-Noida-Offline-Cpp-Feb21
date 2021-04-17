#include<iostream>
using namespace std;
void subsequences(char *in,int i,char *out,int j){
	// base case 
	if(in[i]=='\0'){
		out[j]='\0';
		cout<<out<<endl;
		return;
	}



	// recursive case
	// 1. without taking a 
	subsequences(in,i+1,out,j);


	// 2. with a
	out[j]=in[i];
	subsequences(in,i+1,out,j+1);
}
int main(){

	char in[100],out[100];
	cin>>in;
	subsequences(in,0,out,0);


	return 0;
}