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
public:
	// void addEdge(T u,T v,bool birdir=true){
	// 	h[u].push_back(v);
	// 	if(birdir){
	// 		h[v].push_back(u);

	// 	}
	// }
	void addEdge(T u,T v,bool birdir=false){
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

	void bfs(T start){
		// make a queue of type T that will help us in choosing a node and pushing its children in queue

		queue<T> q;
		// push start point in queue
		q.push(start);
		// visited map will keep track of which nodes are visited
		unordered_map<T,bool> visited;
		// distance map will keep track of which min distance of every node from start
		unordered_map<T,int> distance;
		// distance from start tp itself is 0
		distance[start]=0;

		// start is already pushed in queue 
		visited[start]=true;
		
		// do the task till queue is not empty
		while(!q.empty()){

			T node=q.front();
			q.pop();
			cout<<node<<" ";
			// access the children of current node from its hashmap h
			for(auto children:h[node]){
				// if children already not visited then only push it into queue
				if(!visited[children]){
					q.push(children);
					visited[children]=true;//mark visited now as true
					distance[children]=distance[node]+1; //distance of children will be distance of its parent +1

				}
			}
		}
		// min distance of every node from its start
		cout<<endl;
		// // print the distance hashmap
		// for(auto node:distance){
		// 	// node.first will give destination and node.second will give distance of that dest from start
		// 	cout<<"distance of "<<node.first<<" from "<<start<<" is "<<node.second<<endl;


		// }
		// cout<<endl;

	}







	// sssp-->single source shortest path


	int SSSP(T start,T dest){ //0 5
		// make a queue of type T that will help us in choosing a node and pushing its children in queue

		queue<T> q;
		// push start point in queue
		q.push(start);
		// visited map will keep track of which nodes are visited
		unordered_map<T,bool> visited;
		// distance map will keep track of which min distance of every node from start
		unordered_map<T,int> distance;
		// distance from start tp itself is 0
		distance[start]=0;

		// start is already pushed in queue 
		visited[start]=true;
		// do the task till queue is not empty
		unordered_map<T,T> parent;
		parent[start]=start;
		while(!q.empty()){

			T node=q.front();
			q.pop();
			// cout<<node<<" ";
			// access the children of current node from its hashmap h
			for(auto children:h[node]){
				// if children already not visited then only push it into queue
				if(!visited[children]){
					q.push(children);
					visited[children]=true;//mark visited now as true
					distance[children]=distance[node]+1; //distance of children will be distance of its parent +1
					parent[children]=node;
				}
			}
		}
		// print path 
		//
		cout<<"printing path"<<endl;
		T temp=dest;
		while(temp!=parent[temp]){
			cout<<temp<<"<--";
			temp=parent[temp];
		}
		cout<<temp<<endl;
		cout<<endl;
		return distance[dest];


	}


};
int main(){

	// int noe,non;
	// cin>>noe>>non; //7 5
	// Graph<int> g;

	// int u,v;
	// for(int i=0;i<noe;i++){
	// 	cin>>u>>v;
	// 	g.addEdge(u,v); u=0,v=1;


	
	// g.print();

	// cout<<"Bfs is : "<<endl;
	// g.bfs(0);
	// cout<<endl;

	// Graph<string> g;
	// g.addEdge("Putin", "Trump");
	// g.addEdge("Putin", "Modi");
	// g.addEdge("Putin", "Pope");
	// g.addEdge("Modi", "Trump", true);
	// g.addEdge("Modi", "Yogi", true);
	// g.addEdge("Yogi", "Prabhu");
	// g.addEdge("Prabhu", "Modi");
	// g.print();


	// int ans=g.SSSP(2,3);

	// cout<<"minimum distance from "<<2<<" to "<<3<<" is "<<ans<<endl;



	Graph<int> g;
	int board[50] = {0};
	board[2] = 13;
	board[5] = 2;
	board[9] = 18;
	board[18] = 11;
	board[17] = -13;
	board[20] = -14;
	board[24] = -8;
	board[25] = -10;
	board[32] = -2;
	board[34] = -22;


	for(int u=0;u<36;u++){
		for(int dice=1;dice<=6;dice++){
			int v=u+dice+board[u+dice];
			g.addEdge(u,v);

		}
	}

	int ans=g.SSSP(0,36);
	 cout<<"minimum distance from "<<0<<" to "<<36<<" is "<<ans<<endl;


	return 0;



}


