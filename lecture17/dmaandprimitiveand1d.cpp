#include<iostream>
using namespace std;
int main(){

	// primitive datatypes

	// int a; //sma
	// a=10

	int*aptr=new int;
	*aptr=10;//derefer bucket

	cout<<*aptr<<endl;


	// float f;
	// f=10.16

	float *fptr=new float;

	*fptr=10.16;
	cout<<*fptr<<endl;

	// char ch;
	// ch='A';

	char *cptr=new char;

	*cptr='A';
	cout<<*cptr<<endl;


	// 1D array

	// int a[100];
	int *arrptr=new int[100];
	for(int i=0;i<5;i++){
		// cin>>arrptr[i];
		cin>>*(arrptr+i);
	}
	for(int i=0;i<5;i++){
		cout<<arrptr[i]<<" "<<*(arrptr+i)<<endl;
	}
	cout<<endl;

	delete aptr;
	aptr=NULL; //pointer should either point to valid address or NULL


	delete fptr;
	fptr=NULL;
	delete cptr;
	cptr=NULL;



	// delete dma array


	delete[] arrptr;
	arrptr=NULL;









	return 0;
}