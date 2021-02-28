#include<iostream>
using namespace std;
int main(){

	int n;
	cin>>n;
	int ans=0;
	int no;


	for(int counter=1;counter<=n;counter++){
		cin>>no;
		ans=(ans^no);

	}

	// int counter=1; //initialization
	// for(;counter<=n;){ //condition check
	// 	cin>>no;
	// 	ans=(ans^no);
	// 	counter++;  //updation

	// }




	
	cout<<ans<<endl;




	// initilization



	// condition check
	// updation

	return 0;
}