#include<iostream>
#include<list>
#include<unordered_map>
#include<queue>
#include<map>
#include<set>
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
	void dijastras(T src,T des){
		unordered_map<T,int> distance;
		for(auto node:h){
			distance[node.first]=INT_MAX;
		}
		distance[src]=0;
		unordered_map<T,T> p;//map parents koan hai
		p[src]=src;
		set<pair<int,T> > s;
		s.insert(make_pair(0,src));

		while(!s.empty()){
		auto node=*(s.begin());//s.begin()-->address so we need to derefer it
		s.erase(s.begin()); //(0,A)
		int parentdist=node.first; //0
		T parent=node.second; //A

		for(auto children:h[parent]){ //(b,1)
			int edgedist=children.second; //1
			if(distance[children.first]>parentdist+edgedist){
				// i am checking whether this pair is presemt in my set or not
				auto f=s.find(make_pair(distance[children.first],children.first));
				if(f!=s.end()){
					s.erase(f);

				}


				distance[children.first]=parentdist+edgedist; //1
				s.insert(make_pair(distance[children.first],children.first));
				p[children.first]=parent;

			}
		}



		}


		// printing distance hashmap
		for(auto node:distance){
			cout<<" min distance of "<<node.first<<" from "<<src<<" is "<<node.second<<endl;
		}

		// printing the path

		T temp=des;
		while(temp!=src){
			cout<<temp<<"<--";
			temp=p[temp];

		

		}
		cout<<temp<<endl;
	





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

	// g.print();
	g.dijastras("Jaipur","Bhopal");

	return 0;
}


