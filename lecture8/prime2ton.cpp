#include<iostream>
using namespace std;
void printprimes(int no){

	for(int j=2;j<=no;j++){


	
	int i=2;
	while(i<=j-1){
		if(j%i==0){ //remainder == 0
			// cout<<"No is not prime"<<endl;
			break;

		}


		i++;
	}
	if(i==j){
		cout<<j<<endl;
	}




	}


}

bool israiningornot(){
	int r=10;
	if(r==10){
		return true;
	}
	else{
		return false;
	}

}
int main(){


	int no;
	cin>>no;
	printprimes(no);


	return 0;
}