#include<iostream>
using namespace std;
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
			cout<<arr[rowno][colno]<<" ";
			
		}
		cout<<endl;



	}
	cout<<endl;

	for (int i= 0; i < cols;i++)
	{
		if(i%2==0){ //if colno is even
			for (int j=0;j<rows;j++)
			{
				cout<<arr[j][i]<<" ";
			}

		}
		else{
			for(int j=rows-1;j>=0;j--){
				cout<<arr[j][i]<<" ";
			}

		}
	}
	cout<<endl;


	return 0;
}