#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int times;
	cin>>times;


	int count=0;
	float inc=1;
	float i=0;
	while(count<=times){
		while(i*i<=n){
			i=i+inc;

		}
		i=i-inc;

		inc=inc/10;
		count=count+1;
	}
	cout<<i<<endl;



	return 0;




}