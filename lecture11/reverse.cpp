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
void reverse(char*arr){
	int i=0;
	int j=length(arr)-1;
	while(i<j){

		swap(arr[i],arr[j]);
		i++;
		j--;
	}
}




int main(){
	
	char arr[100];
	// cin>>arr; //hello
	cin.getline(arr,100);
	cout<<"before reverse "<<arr<<endl;

	reverse(arr);
	cout<<"After reverse "<<arr<<endl;






return 0;



}