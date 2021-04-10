#include<iostream>
using namespace std;
int stringtoint(string s,int l){
	// base case
	if(l==0){
		return 0;
	}

	// recursive case

	int ldigit=s[l-1]-'0'; // int 7
	// int chotaans=stringtoint(s,l-1); //int 235
	// int badaans=chotaans*10+ldigit; //235*10+7
	// return badaans;

	return stringtoint(s,l-1)*10+ldigit;
}

int main(){

	string s; //"2357"
	cin>>s;
	int l=s.length(); //4

	// cout<<s+10<<endl;
	int ans= stringtoint(s,l); //2357

	cout<<ans<<endl;
	cout<<ans+1000<<endl;



	

	return 0;
}