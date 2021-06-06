#include<iostream>
#include<list>
#include<unordered_map>
#include<queue>
// #include<map>
#include<cstring>
using namespace std;
template <typename T>
class Graph{
	unordered_map<T,list<T> > h;

	void dfshelper(T start,unordered_map<T,bool>&visited){
		visited[start]=true;
		cout<<start<<" ";
		for(auto children:h[start]){
			if(!visited[children]){
				dfshelper(children,visited);
			}
		}

	}
public:
	void addEdge(T u,T v,bool birdir=true){
		h[u].push_back(v);
		if(birdir){
			h[v].push_back(u);

		}
	}

	void print(){
		for(auto node:h){//node-->full row -->key and value pair
			cout<<node.first<<" : "; //putin
			for(auto neigh:node.second){ //node.second-->list of strings
				cout<<neigh<<" "; //trump modi pope

			}
			cout<<endl;

		}
	}


	
	void dfs(T start){
		unordered_map<int,bool> visited;
		dfshelper(start,visited);

	}




};
int main(){

	int noe,non;
	cin>>noe>>non; 
	Graph<int> g;

	int u,v;
	for(int i=0;i<noe;i++){
		cin>>u>>v;
		g.addEdge(u,v); 
	}





	
	g.print();
	// unordered_map<int,bool> visited;
	// cout<<"dfs output is "<<endl;
	// g.dfs(0,visited);

	cout<<"dfs output is "<<endl;
	g.dfs(0);

return 0;




}


