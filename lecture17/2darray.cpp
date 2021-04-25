#include<iostream>
using namespace std;
int main(){

	
	int rows,cols;
	cin>>rows>>cols;
	int **aptr;
	aptr=new int*[rows];
	for(int i=0;i<rows;i++){
		aptr[i]=new int[cols];

	}
	for (int i = 0; i < rows; ++i)
	{
		for(int j=0;j<cols;j++){
			cin>>aptr[i][j];
		}
	}
	for (int i = 0; i < rows; ++i)
	{
		for(int j=0;j<cols;j++){
			cout<<aptr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;



	// delete


	for(int i=0;i<rows;i++){
		delete[]aptr[i];
		aptr[i]=NULL;
	}
	delete []aptr;
	aptr=NULL;








	return 0;
}