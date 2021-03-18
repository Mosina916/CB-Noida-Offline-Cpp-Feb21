#include<iostream>
using namespace std;
int fact(int no){
	int result=1;
	
	for(int i=1;i<=no;i++){
		result=result*i;

	}
	// cout<<result<<endl;
	return result;
}


int main(){
	int no;
	cin>>no;
	cout<<fact(no)<<endl;
	


	
	return 0;
}