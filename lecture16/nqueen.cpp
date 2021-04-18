#include<iostream>
using namespace std;
bool kyamaiqueenrakhsaktihun(int board[][50],int i,int j,int n){
	// checking for horizontal and vertical


	// vertical

	for(int k=0;k<n;k++){
		if(board[k][j]==1||board[i][k]==1){
			return false;
		}
	}

	// horizontal;
	// for(int k=0;k<n;k++){
	// 	if(board[i][k]==1){
	// 		return false;
	// 	}
	// }

	int r=i,c=j;
	// right diagonal
	while(i>=0&&j<n){
		if(board[i][j]==1){
			return false;
		}
		i--;
		j++;
	}

	// left diagonal
	while(r>=0&&c>=0){
		if(board[r][c]==1){
			return false;
		}
		r--;
		c--;

	}
	return true;


}


bool Nqueen(int board[][50],int i,int n){

	// base case
	if(i==n){
		for(int k=0;k<n;k++){
			for(int l=0;l<n;l++){
				if(board[k][l]==1){
					cout<<"Q ";
				}
				else{
					cout<<"- ";
				}
			}
			cout<<endl;
		}
		cout<<endl;
		// return true;

		return false; //sari combination dekhni hai
	}



	// recursive case
	for(int j=0;j<n;j++){
		
		if(kyamaiqueenrakhsaktihun(board,i,j,n)){
			board[i][j]=1;
			bool kyabakirowspeplacehogayi=Nqueen(board,i+1,n);
			if(kyabakirowspeplacehogayi==true){
				return true;
			}
			board[i][j]=0; //backtracking


		}
	}
	return false;
}
int main(){
	int board[50][50]={0};
	int n;
	cin>>n;
	Nqueen(board,0,n);



	return 0;
}