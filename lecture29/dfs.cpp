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
		int component=1;
		unordered_map<int,bool> visited;
		dfshelper(start,visited);
		for(auto node:h){
			if(!visited[node.first]){
				dfshelper(node.first,visited);
				component++;
			}
		}

		cout<<"no of components are "<<component<<endl;


	}




};
int main(){

	Graph<int>g;
	// comp1
	g.addEdge(0, 1);
	g.addEdge(0, 4);
	g.addEdge(2, 1);
	g.addEdge(2, 4);
	g.addEdge(3, 4);
	g.addEdge(3, 2);
	g.addEdge(3, 5);

	// comp2
	g.addEdge(11, 12);
	g.addEdge(13, 12);
	g.addEdge(14, 12);

	// comp3

	g.addEdge(114, 115);
	g.addEdge(114, 116);
	g.addEdge(114, 117);

	// comp4
	// g.addEdge(500,600);
	// g.addEdge(400,600);






	
	// g.print();
	// unordered_map<int,bool> visited;
	// cout<<"dfs output is "<<endl;
	// g.dfs(0,visited);

	cout<<"dfs output is "<<endl;
	g.dfs(0);

return 0;







}


