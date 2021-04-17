#include<iostream>
using namespace std;
void permutations(char *in,int i){
	// base case 
	if(in[i]=='\0'){
		cout<<in<<endl;
		return;
	}



	// recursive case

	for(int j=i;in[j]!='\0';j++){
		swap(in[i],in[j]);
		permutations(in,i+1); //pure assumption
		swap(in[i],in[j]); //backtracking
	}


}
int main(){

	char in[100];
	cin>>in;
	permutations(in,0);

	return 0;
}