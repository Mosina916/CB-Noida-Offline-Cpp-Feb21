#include<iostream>
#include<list>
#include<unordered_map>
#include<queue>
#include<map>
#include<cstring>
using namespace std;
#define pb push_back
#define mp make_pair

template <typename T>
class Graph{
	// unordered_map<T,list<pair<T,int> > >h;
	map<T,list<pair<T,int> > >h;
public:
	void addEdge(T src,T des,int dist,bool dir=true){
		h[src].pb(mp(des,dist));
		if(dir){
			h[des].pb(mp(src,dist));

		}



	}
	void print(){
		for(auto node:h){
			cout<<node.first<<" : ";
			for(auto children:node.second){
				cout<<"("<<children.first<<" , "<<children.second<<") ,";
			}
			cout<<endl;

		}

	}
};
int main(){

	Graph<string> g;


	g.addEdge("Amritsar", "Agra", 1);
	g.addEdge("Amritsar", "Jaipur", 4);
	g.addEdge("Delhi", "Jaipur", 2);
	g.addEdge("Delhi", "Agra", 1);
	g.addEdge("Bhopal", "Agra", 2);
	g.addEdge("Bhopal", "Mumbai", 3);
	g.addEdge("Jaipur", "Mumbai", 8);

	g.print();

	return 0;
}


