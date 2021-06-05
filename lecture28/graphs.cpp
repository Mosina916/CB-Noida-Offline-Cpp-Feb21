#include<iostream>
#include<list>
using namespace std;
class Graph{
public:
	list<int>*l;
	int n; //

	// constructor
	Graph(int N){
		l=new list<int>[N];
		n=N;

	}
	void addedge(int u,int v,bool birdir=true){
		l[u].push_back(v);
		if(birdir){
			l[v].push_back(u);
		}
	}
	void print(){
		for(int i=0;i<n;i++){
			cout<<i<<" --> ";
			for(auto neighbour:l[i]){
				cout<<neighbour<<"-->";

			}
			cout<<endl;
		}
	}

};
int main(){
	
	int noe,non;
	cin>>noe>>non; //7 5
	Graph g(non);

	int u,v;
	for(int i=0;i<noe;i++){
		cin>>u>>v;
		g.addedge(u,v);


	}
	g.print();
	cout<<endl;
	return 0;



}
