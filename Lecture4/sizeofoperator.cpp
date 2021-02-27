#include<iostream>
using namespace std;
int main(){
	int a=10;
	float f=3.98;
	double d=4.563;
	bool israining=true;
	char ch='a';
     
     //SIZEOF DATA TYPE PASS
	cout<<sizeof(int)<<endl; //4
	cout<<sizeof(float)<<endl; //4
	cout<<sizeof(double)<<endl; //8
	cout<<sizeof(bool)<<endl; //1
	cout<<sizeof(char)<<endl; //1

	// pass variable name
	cout<<sizeof(a)<<endl; //4
	cout<<sizeof(f)<<endl; //4
	cout<<sizeof(d)<<endl; //8
	cout<<sizeof(israining)<<endl; //1
	cout<<sizeof(ch)<<endl; //1

	// value pass 
	cout<<sizeof(10)<<endl; //4
	cout<<sizeof(4.56)<<endl; //4 8
	cout<<sizeof(6.76)<<endl; //8 4
	cout<<sizeof(true)<<endl; //1
	cout<<sizeof('a')<<endl; //1






	


	return 0;




}