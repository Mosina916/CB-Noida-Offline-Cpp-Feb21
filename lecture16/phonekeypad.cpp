#include<iostream>
using namespace std;
char keys[10][10]={"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};


void phonekeypad(char *in,int i,char *out,int j){ //23
	// base case
	if(in[i]=='\0'){
		out[j]='\0';
		cout<<out<<endl;
		return;
	}


	//RECURSIVE CASE
	int digit=in[i]-'0'; //2
	for(int k=0;keys[digit][k]!='\0';k++){
		out[j]=keys[digit][k];
		phonekeypad(in,i+1,out,j+1);


	}


}

int main(){
	char in[100],out[100];
	cin>>in;
	phonekeypad(in,0,out,0);
	

	return 0;
}