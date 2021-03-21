#include<iostream>
using namespace std;
#define ll long long int 
ll n,m,x,y;

bool kyamaimidnoofstudentskoschalorshipdesaktihun(int mid){
	return (mid*x<=m+(n-mid)*y);


}
int main(){
	
	// n-->no of students 
	//m -->copons available at cb

	//x -->no of copons required to get 100% scholarship
	//y -->copons return if you don't get scholarship

	cin>>n>>m>>x>>y;
	int s=0;
	int e=n;
	int ans=0;
	while(s<=e){
		int mid=(s+e)/2;
		if(kyamaimidnoofstudentskoschalorshipdesaktihun(mid)){
			ans=mid;
			s=mid+1;
		}
		else{
			e=mid-1;
		}

	}
	cout<<ans<<endl;


	
	return 0;
}