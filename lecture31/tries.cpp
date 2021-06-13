#include<iostream>
#include<unordered_map>
using namespace std;
class node{
public:
	char data;
	bool isterminal;
	unordered_map<char,node*>h;
	//constructor
	node(char ch){
		data=ch;
		isterminal=false;

	}
};
class tries{
	node*root;
public:
	// constructor
	tries(){
		root=new node('\0');

	}

	void insert(char *word){
		node*temp=root;
		for(int i=0;word[i]!='\0';i++){
			char ch=word[i];
			// if char map mai exist karta hai ya nahi
			if(temp->h.count(ch)){
				// if exists in map
				temp=temp->h[ch];
			}
			else{
				// if not exists in map
				temp->h[ch]=new node(ch);
				temp=temp->h[ch];



			}

		}

		temp->isterminal=true;


	}
	bool search(char*word){ //code
		node*temp=root;
		for(int i=0;word[i]!='\0';i++){
			char ch=word[i];//e
			if(temp->h.count(ch)){
				// agar exist karta hai
				temp=temp->h[ch];
			}
			else{
				return false;

			}
		}
		// if(temp->isterminal==true){
		// 	return true;
		// }
		// else{
		// 	return false;
		// }
		return temp->isterminal;


	}
	

};
int main(){
	tries t;
	char a[]="code";
	t.insert(a);

	// t.insert("code");
	t.insert("coder");
	t.insert("coding");
	t.insert("hello");
	t.insert("hell");
	t.insert("the");
	t.insert("these");
	char key[100];
	while(1){ //infinite loop
		cin>>key;
	if(t.search(key)){
		cout<<"key is present"<<endl;

	}
	else{
		cout<<"key is not present"<<endl;
	}

	}
	


	return 0;
}