/*

Piyush is lost in a magical park which contains N rows and M columns.
In order to get out of park safely and return home, he needs atleast K amount of strength.
Given a N by M pattern, your task is to find weather Piyush can ever escape the park.

Piyush enters the park with strength S. 
The park is filled with some obstacles denoted by ‘.’ , 
some magical beans denoted by ‘*’ and some blockades denoted as ‘#’. 

If he encounters an obstacle (.) , strength decreases by 2. 
If he encounters a magic bean (' * ') , his strength increases by 5. 

Piyush can only walk row wise, so he starts from left of a row and moves towards right 
and he does this for every row. 

However when he encounters a blockade (#) , 
he cannot go any further in his current row and simply jumps to the start of a new line 
without losing any strength. Piyush requires a strength of 1 for every step.
His strength should always be greater than K while traversing or else Piyush will get lost. 

Assume that Piyush can shift immediately from last of one row to the start of next one 
without loss of any strength, help out Piyush to escape the park. 

His escape is successful if he is able to return home with atleast K strength.

First line of input contains four integers – 
N,M,K and S. Next N lines contains M space separated characters which can be '.', '*' or '#'.

Print "Yes" or "No" depending on whether Piyush can escape or not. 
If the answer is "Yes", also print the amount of strength he escaped with.

*/

#include<iostream>

using namespace std;

bool canPiyushEscape(char** park, int N, int M, int K, int& S) {

	for(int i=0; i<N; i++){
		for(int j=0; j<M; j++) {
			if(S<K) {
				return false;
			}

			char ch = park[i][j];
			if(ch=='*') {
				S += 5;
			} else if(ch=='.') {
				S -= 2;
			} else {
				// ch == '#'
				break;
			}

			// (i, j) -> (i, j+1) then S decrease by 1
			// If you are at the last column of a row, 
			// my next step will take me to the 0th column of the next row
			// in that case do not decrease S by 1

			if(j!=M-1) S -= 1;
		}
	}

	return S>=K;
}

int main() {

	int N;
	cin>>N;

	int M;
	cin>>M;

	int K;
	cin>>K;

	int S;
	cin>>S;

	// declare a 2D array
	char** park = new char*[N];
	for(int i=0; i<N; i++){
		park[i]=new char[M];
	}

	// read input
	for(int i=0; i<N; i++){
		for(int j=0; j<M; j++){
			cin>>park[i][j];
		}
	}

	canPiyushEscape(park, N, M, K, S) ? cout<<"Yes"<<endl<<S<<endl : cout<<"No";

	delete [] park; // to avoid memory leak

	return 0;
}