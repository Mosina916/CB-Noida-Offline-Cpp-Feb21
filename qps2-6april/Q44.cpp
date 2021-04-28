/*

Chewbacca and Number

Luke Skywalker gave Chewbacca an integer number x. 

Chewbacca isn't good at numbers but he loves inverting digits in them. 

Inverting digit t means replacing it with digit 9 - t.

Help Chewbacca to transform the initial number x to the minimum possible positive number by inverting some (possibly, zero) digits. 

The decimal representation of the final number shouldn't start with a zero.

Contraints: 

 x (1 ≤ x ≤ 10^18) — the number that Luke Skywalker gave to Chewbacca.

*/

#include<iostream>

using namespace std;

int main(){

	long long X;
	cin>>X;

	long long Y=0; // store the smallest possible number after transforming X through digit inversion
	long long M=1;

	while(X>0){
		long long d = X%10;
		if(d>=5){
			if(9-d==0 && X/10==0){
				// I am at first digit and it is 9, do nothing
			} else {
				// invert the digit
				d = 9-d;
			}
		}

		Y += M*d;
		M *= 10;
		X /= 10;
	}

	cout<<Y<<endl;
	
	return 0;
}