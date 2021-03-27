#include<iostream>
using namespace std;
int main(){


	// creation of char arrays

	//1 way

	// datatype name[size];

	// int arr[]={1,2,3};
	// cout<<arr<<endl; //address of array


// character arrays are treated diffrently by compiler
	// char ch[]={'A','B','C','\0'}; //ch -->string (set of characters terminated by \0)
	// cout<<ch<<endl; //the value at that bucket

	//2 way 

	// char ch2[]="coding"; //strings have by default null at end;
	// cout<<ch2<<endl;


	// char ch3[6]="hello";
	// cout<<ch3<<endl;

	//3 way

	// char ch4[1000];
	// cin>>ch4; //-->cin ignore white spaces ('\n',' ','\t')
	// cout<<ch4<<endl;


	// cin.get();-->don't ignore white spaces ('\n',' ','\t')
	char arr[100];
	char ch;
	ch=cin.get();
	int i=0;
	while(ch!='\n'){
		arr[i]=ch;
		i++;
		ch=cin.get();
	}
	arr[i]='\0';


	cout<<arr<<endl;











}