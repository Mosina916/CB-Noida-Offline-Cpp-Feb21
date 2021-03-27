#include<iostream>
using namespace std;
// void readstring(char arr[]){
void readstring(char *arr,char delimiter='\n'){

	char ch;
	ch=cin.get();
	int i=0;
	while(ch!=delimiter){
		arr[i]=ch;
		i++;
		ch=cin.get();
	}
	arr[i]='\0';

}
int main(){
	// cin.get();-->don't ignore white spaces ('\n',' ','\t')
	char arr[100];
	readstring(arr,'$');

	cout<<arr<<endl;


		// inbuilt function

	// syntax--> cin.getline(arr name,size of arr,delimiter)
	// cin.getline(arr,100,'$'); //paragraphs 


	cout<<arr<<endl;











}