#include<iostream>
using namespace std;

int main(){
	char ch;
	int cnt=0;
	// cin>>ch; //cin ignore whitespaces
	ch=cin.get(); //doesn't ignore whitespaces
	while(ch!='$'){
		cnt++;
		cin>>ch;
		// ch=cin.get();

	}
	cout<<"Count of characters is : "<<cnt<<endl;






	

	return 0;
}