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


void copy(char *a,char*b){
	int blen=length(b);
	int i=0;
	while(i<=blen){
		a[i]=b[i];
		i++;

	}

}


int main(){
	
	// char a[100],b[100];

	// cin.getline(a,100);
	// cin.getline(b,100);
	// cout<<"before copying "<<endl;
	// cout<<a<<endl<<b<<endl;

	// copy(a,b);
	// cout<<"after copying "<<endl;
	// cout<<a<<endl<<b<<endl;


	int n;
	char arr[100],maxstring[100];
	int maxlength=INT_MIN;
	cin>>n; //n==4
	// cin.ignore();
	for (int i = 0; i <n; ++i)
	{
		// cin.getline(arr,100); //coding ,blocks, elephant ,hello
		cin>>arr;
		int l=length(arr); //6

		if(l>maxlength){
			maxlength=l; //6
			copy(maxstring,arr);

		}

		
	}


	cout<<"maxlength is "<<maxlength<<endl;
	cout<<"string with maximum length is "<<maxstring<<endl;

	


return 0;



}