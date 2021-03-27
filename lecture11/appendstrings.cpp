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
void append(char *a,char *b){
	int j=length(a);
	for(int i=0;i<=length(b);i++){
		a[j]=b[i];
		j++;
	}
}
int main(){
	
	char a[100],b[100];

	cin.getline(a,100);
	cin.getline(b,100);

	cout<<"string before append "<<a<<endl<<b<<endl;
	append(a,b);

	cout<<"string after append "<<a<<endl<<b<<endl;

	





return 0;



}