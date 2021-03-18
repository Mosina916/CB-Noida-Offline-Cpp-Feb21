#include<iostream>
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

	int initial,final,step;
	// int initial;
	// int final;
	// int step;
	cin>>initial>>final>>step;
	printtable(initial,final,step);
	cin>>initial>>final>>step;
	printtable(initial,final,step);

	

	return 0;



}