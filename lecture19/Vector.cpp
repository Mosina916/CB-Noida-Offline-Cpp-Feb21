#include<iostream>
using namespace std;
class Vector{
public:
	int *arr;
	int cs;
	int ms;
	// constructor
	Vector(int s=2){
		cs=0;
		ms=s;
		arr=new int[s]; //dynamically allocation


	}
	void push_back(int data){
		if(cs==ms){ //puri memory fill hai
			int *oldarr=arr;
			int oldms=ms;//2
			arr=new int[2*oldms]; //4
			ms=2*ms;
			for(int i=0;i<oldms;i++){
				arr[i]=oldarr[i];
			}
			// delete old arr

			delete[] oldarr;

		}
		arr[cs]=data;
		cs++;


	}
	void pop_back(){
		if(cs>0){
			cs--;
		}

	}
	int capacity(){
		return ms;


	}
	int size(){
		return cs;

	}
	int operator[](int i){
		return arr[i];


	}

};
int main(){
	Vector v;
	v.push_back(1);
	v.push_back(10);
	v.push_back(12);
	v.push_back(15);
	v.push_back(13);
	v.push_back(11);
	v.push_back(17);
	v.push_back(17);
	v.push_back(11);

	cout<<v.size()<<endl;
	cout<<v.capacity()<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;





	return 0;
}