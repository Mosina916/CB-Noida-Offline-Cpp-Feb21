#include<iostream>
using namespace std;
int main(){
	// 1st way of initilization
	// int arr[4][4]={
	// 	{1,2,3,4},
	// 	{5,6,7,8},
	// 	{9,10,11,12},
	// 	{13,14,15,16}
	// };


	// cout<<arr[0]<<endl;
	// cout<<arr[1]<<endl;
	// cout<<arr[2]<<endl;
	// cout<<arr[3]<<endl;


	// 2nd ways
	int arr[][4]={
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16},
	};
	// char 2d array


	char ch[][4]={
		{'A','B','C','\0'},
		{'D','E','F','\0'},
		{'G','H','I','\0'},

	};

	cout<<ch[0]<<endl; //abcdefghi
	cout<<ch[1]<<endl; //defghi
	cout<<ch[2]<<endl; //ghi
	// char charr[3][3]={
	// 	{'A','B','C'},
	// 	{'D','E','F'},
	// 	{'G','H','I'},

	// };
	// cout<<charr[0]<<endl; 
	// cout<<charr[1]<<endl; 
	// cout<<charr[2]<<endl;

	char arr2[][7]={
		"cod",
		"blocks",
		"mosina"
	};
	cout<<arr2[0]<<endl; 
	cout<<arr2[1]<<endl; 
	cout<<arr2[2]<<endl;




	// // printing array
	// for(int rowno=0;rowno<4;rowno++){

	// 	for(int colno=0;colno<4;colno++){
	// 		cout<<arr[rowno][colno]<<" ";
	// 	}
	// 	cout<<endl;

	// }
	// cout<<arr[0]<<endl;





	return 0;
}