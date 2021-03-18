#include <iostream>
#include <cstring>
using namespace std;
void printtable(int initial,int final,int step){

	int fer=initial;
	while(fer<=final){
		// int cel=(5/9.0)*(fer-32);

		int cel=5*(fer-32)/9;
		cout<<fer<<" "<<cel<<endl;

		fer=fer+step;

	}
}

int main(){
	// int initial,final,step;
	// // int initial;
	// // int final;
	// // int step;
	// cin>>initial>>final>>step;

	// printtable(initial,final,step);


	int no;
	cin>>no;

	
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





	
	return 0;
}