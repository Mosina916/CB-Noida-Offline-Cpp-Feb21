#include<iostream>
using namespace std;
int main(){
	int arr[100][100];
	int rows,cols;
	cin>>rows>>cols; //rows -->3 cols -->4


	// taking imput in array
	int number=1;
	for(int rowno=0;rowno<rows;rowno++){

		for(int colno=0;colno<cols;colno++){
			arr[rowno][colno]=number;
			number++;
		}

	}
	int key;
	cin>>key;
	int rowno,colno;

	for( rowno=0;rowno<rows;rowno++){
		for(colno=0;colno<cols;colno++){
			if(arr[rowno][colno]==key){
				cout<<"key is present at row no "<<rowno<<" and colno "<<colno<<endl;
				// rowno=rows;
				break;
			}
			/* code */
		}
		if(colno<cols){
			break;

		}	
	}
	if(rowno==rows){
		cout<<"key not present"<<endl;
	}

	return 0;
}