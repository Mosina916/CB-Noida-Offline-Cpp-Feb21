#include<iostream>
using namespace std;
int Nstaircase(int n){
	// base case
	if(n==0){
		return 1;
	}
	// for negative values
	if(n<0){
		return 0;
	}



	// recursive case
	return Nstaircase(n-1)+Nstaircase(n-2)+Nstaircase(n-3);



}

int main(){
	int n;
	cin>>n;
	int x=Nstaircase(n); //1
	cout<<"Total no of ways "<<x<<endl;
	

	return 0;
}