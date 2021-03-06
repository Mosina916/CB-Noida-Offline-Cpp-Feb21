#include<iostream>
using namespace std;

int main(){
	char ch;
	ch=cin.get();
	int countd=0;
	int counta=0;
	int counts=0;
	int countwhi=0;
	while(ch!='$'){
		if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z'){
			counta++;

		}
		else if(ch>='0'&&ch<='9'){
			countd++;

		}
		else if(ch==' '||ch=='\n'||ch=='\t'){
			countwhi++;
		}
		else{
			counts++;
		}
		ch=cin.get();
	}
	cout<<"count of countd"<<countd<<endl;
	cout<<"count of counts"<<counts<<endl;
	cout<<"count of countwhi"<<countwhi<<endl;
	cout<<"count of counta"<<counta<<endl;

	

	return 0;
}