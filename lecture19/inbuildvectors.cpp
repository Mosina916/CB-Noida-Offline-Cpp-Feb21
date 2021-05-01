#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
bool mycompare(int a,int b){
	// return a<b;//increasing order
	return a>b; //decreasing order

}

int main(){

	// syntax
	vector<int> v;
	v.push_back(1);
	v.push_back(10);
	v.push_back(12);
	v.push_back(15);
	v.push_back(13);
	v.push_back(11);
	v.push_back(17);
	v.push_back(17);
	cout<<v.size()<<endl;
	cout<<v.capacity()<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	v.push_back(11);
	// sort(v.begin(),v.end()); //increasing order
	// sort(v.begin(),v.end(),mycompare);
	cout<<v.size()<<endl;
	cout<<v.capacity()<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	v.pop_back();
	cout<<v.size()<<endl;
	cout<<v.capacity()<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	vector<string> s;
	s.push_back("ahello");
	s.push_back("wheh");
	s.push_back("wqegyq");
	for(int i=0;i<s.size();i++){
		cout<<s[i]<<" ";
	}
	cout<<endl;
	


	




	return 0;
}