#include<iostream>
using namespace std;
int main(){

	int no=10;
	int i=1;
	while(i<=no){ //control comes here after continue
		if(i==7){
			i=i+1;
			continue;
		}
		cout<<i<<" ";
		i++;

	}



	return 0;
}