#include<iostream>
using namespace std;

void spiralprint(int arr[][100],int rows,int cols){

	int sr=0,sc=0,ec=cols-1,er=rows-1;

	while(sc<=ec&&sr<=er){

		// for 1st row
	for(int j=sc;j<=ec;j++){
		cout<<arr[sr][j]<<" ";
	}
	sr++;
	for(int i=sr;i<=er;i++){
		cout<<arr[i][ec]<<" ";
	}
	ec--;
	if(sr<er){
		for(int j=ec;j>=sc;j--){
		cout<<arr[er][j]<<" ";
	}
	er--;

	}
	
	
	if(sc<ec){
		for(int i=er;i>=sr;i--){
		cout<<arr[i][sc]<<" ";
	}
	sc++;

	}
	




	}
	
}
int main(){
	int arr[100][100];
	int rows,cols;
	cin>>rows>>cols; //rows -->3 cols -->5


	// taking imput in array
	int number=1;
	for(int rowno=0;rowno<rows;rowno++){

		for(int colno=0;colno<cols;colno++){
			arr[rowno][colno]=number;
			number++;
		}



	}


	for(int rowno=0;rowno<rows;rowno++){

		for(int colno=0;colno<cols;colno++){
			cout<<arr[rowno][colno]<<'\t';
			
		}
		cout<<endl;



	}
	cout<<endl;


	spiralprint(arr,rows,cols);



	return 0;
}