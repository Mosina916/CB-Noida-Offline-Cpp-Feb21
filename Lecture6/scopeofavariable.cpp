#include<iostream>
using namespace std;
int abc=90; //global variable

int main(){
	int x=10;
	int y=20;
	// int z;
	if(x>9){
		//if k local variables
		int x=30;
		int z=65;
		int abc=78;
		cout<<x<<endl;
		cout<<y<<endl;
		cout<<z<<endl;
		cout<<"value of abc is "<<::abc<<endl; // 78
		::abc=::abc+5;
		abc=abc+89;
	}

		cout<<x<<endl;
		cout<<y<<endl;
		// cout<<z<<endl;
		cout<<"value of abc is "<<abc<<endl;





	return 0;
}