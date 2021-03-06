#include<iostream>
using namespace std;

int main(){
	int x=0;
	int y=0;
	char ch;
	// cin>>ch;
	ch=cin.get();
	while(ch!='\n'){
		if(ch=='E'){
			x++;

		}
		else if(ch=='W'){
			x--;
		}
		else if(ch=='N'){
			y++;
		}
		else if(ch=='S'){
			y--;
		}


		ch=cin.get();



	}
	// cout<<"x is "<<x<<endl;
	// cout<<"y is "<<y<<endl;
	if(x>=0&&y>=0){
		//ist quadrant
		// east print
		for(int i=1;i<=x;i++){
			cout<<'E';
		}
		for(int j=1;j<=y;j++){
			cout<<'N';
		}

	}
	else if(x<=0&&y>=0){

		// 2nd  quadrant
		for(int i=1;i<=y;i++){
			cout<<'N';
		}
		for(int i=1;i<=abs(x);i++){
			cout<<'W';

		}
	}
	else if(x<=0&&y<=0){
		// 3rd quadrant
		for(int i=1;i<=abs(y);i++){
			cout<<'S';

		}
		for(int i=1;i<=abs(x);i++){
			cout<<'W';

		}
	}
	else{

		// 4th quadrant
		for(int i=1;i<=x;i++){
			cout<<'E';
		}
		for(int i=1;i<=abs(y);i++){
			cout<<'S';

		}
	}
	cout<<endl;

	return 0;
}