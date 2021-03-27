#include<iostream>
using namespace std;
int length(char*arr){
	int i;
	int cnt=0;
	for(i=0;arr[i]!='\0';i++){
		cnt++;
	}
	return cnt;
}


bool palindrome(char*arr){
	int i=0;
	int j=length(arr)-1;
	while(i<j){ 
		if(arr[i]!=arr[j]){
			return false;
		}
		i++;
		j--;

	}
	return true;
}



int main(){
	
	char arr[100];
	// cin>>arr; //hello
	cin.getline(arr,100);

	cout<<length(arr)<<endl;

	bool ispalindrome=palindrome(arr);
	if(ispalindrome==true){
		cout<<"string is palindrome"<<endl;
	}
	else{
		cout<<"string is not palindrome"<<endl;

	}





return 0;



}