#include<iostream>
using namespace std;

void primeornot(int no){

	int i=2;
	while(i<=no-1){
		if(no%i==0){ //remainder == 0
			cout<<"No is not prime"<<endl;
			break;

		}


		i++;
	}
	if(i==no){
		cout<<"No is  prime"<<endl;
	}
}
 
 int main(){

 	int no;
	cin>>no;

	primeornot(no);


	


	return 0;



 }

