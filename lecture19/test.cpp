#include<iostream>
using namespace std;
class Pair{
public:
	int a,b;
	// constructor
	Pair(int a,int b){
		// a=x;
		// b=y;
		this->a=a;
		this->b=b;

	}
	// operator overloading
	 bool operator<(Pair &Z)const{ //pair Z=y
	 	if(a<Z.a&&b<Z.b){
	 		return true;

	 	}
	 	else{
	 		return false;
	 	}

	 } 


};

int main(){
	Pair x(30,20);
	Pair y(20,30);
	if(x<y){
		cout<<"x is less than y"<<endl;
	}
	else{
		cout<<"y is less than x"<<endl;

	}



	return 0;
}