#include<iostream>
using namespace std;
int main(){

	int n;
	cin>>n;
	int ans=0;
	int no;

	int counter=1; //initilization
	while(counter<=n){ //condition check
		
		cin>>no;
		ans=(ans^no);


		counter++; //updation

	}
	cout<<ans<<endl;




	return 0;
}