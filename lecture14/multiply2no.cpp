#include<iostream>
using namespace std;
int multiply(int a,int b){ //3 5
	// base case
	if(b==0||a==0){
		return 0;
	}

	// if(b==0){
	// 	return 0;
	// }

	// recursive case
	// int chotaans=multiply(a,b-1);// 3 4-->12

	// int badaans=a+chotaans;// 3+12-->15
	// return badaans;

	return a+multiply(a,b-1);
}

int main(){

	int a,b;
	cin>>a>>b;
	cout<<"After multiplication result is "<<multiply(a,b)<<endl;


	return 0;
}