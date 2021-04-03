#include<iostream>
using namespace std;

int main(){


	// char a[100]="12347465874..'$567@...7684537..26354@9834923...'''78856#3576..983495..\0";
	// syntax
	// pointer=strtok(array name,"")

	// char *p=strtok(a,".@$'#");
	// cout<<p<<endl;

	// // p=strtok(a,".@$'#");
	// // cout<<p<<endl;

	// p=strtok(NULL,".@$'#");
	// cout<<p<<endl;

	// p=strtok(NULL,".@$'#");
	// cout<<p<<endl;


	// char *p=strtok(a,".@'#");
	// while(p!=NULL){
	// 	cout<<p<<endl;
	// 	p=strtok(NULL,".@'#");

	// }

	char a[100]="Abcdefbs..'$567@...7684537..26354@9834923...'''78856#3576..983495..\0";
	char *p=strtok(a,".@'#$0123456789");
	while(p!=NULL){
		cout<<p<<endl;
		p=strtok(NULL,".@'#$0123456789");

	}




	return 0;
}