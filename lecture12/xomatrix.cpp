#include<iostream>
using namespace std;

void spiralprint(char arr[][100],int rows,int cols){

	int sr=0,sc=0,ec=cols-1,er=rows-1;
	char ch='X';

	while(sc<=ec&&sr<=er){


		// for 1st row
	for(int j=sc;j<=ec;j++){
		arr[sr][j]=ch;
	}
	sr++;
	for(int i=sr;i<=er;i++){
		arr[i][ec]=ch;
	}
	ec--;

		for(int j=ec;j>=sc;j--){
		arr[er][j]=ch;
	}
	er--;


	
	

		for(int i=er;i>=sr;i--){
		arr[i][sc]=ch;
		
	}
	sc++;
	




	if(ch=='X'){
		ch='O';
	}
	else{
		ch='X';
	}




	




	}
	
}
int main(){
	char arr[100][100];
	int rows,cols;
	cin>>rows>>cols; //rows -->3 cols -->5






	spiralprint(arr,rows,cols);

	for(int rowno=0;rowno<rows;rowno++){

		for(int colno=0;colno<cols;colno++){
			cout<<arr[rowno][colno]<<" ";
			
		}
		cout<<endl;



	}
	cout<<endl;



	return 0;
}