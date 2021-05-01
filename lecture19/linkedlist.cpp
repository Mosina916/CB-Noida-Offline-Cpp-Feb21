#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
class node{
	public:
		int data;
		node*next; //self refrential class
		// constructor

		node(int d){
			data=d;
			next=NULL;
		}


};
void insertatfront(node*&head,node*&tail,int data){
	// pehle node banega jisko point n karega

	node*n=new node(data);
	// 1. ll is empty
	if(head==NULL){
		head=tail=n; //pehle node create hoga ll ka


	}
	// 2. ll is not empty
	else{
		n->next=head;
		head=n;

	}


}
void print(node*head){
	// node*temp=head;
	// while(temp!=NULL){
	// 	cout<<temp->data<<" ";
	// 	temp=temp->next;
	// }
	// cout<<"NULL"<<endl;

	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<"NULL"<<endl;

}


int main(){
	// node n1(40); //n1 is object of type node
	// node n2(50);
	// // n1.next //n1 k next wale bucket mai
	// n1.next=&n2;
	// // cout<<n1.data<<" "<<n2.data<<endl;
	// cout<<n1.data<<" "<<(*n1.next).data<<endl;
	// cout<<n1.data<<" "<<n1.next->data<<endl;

	node*head=NULL;
	node*tail=NULL;
	insertatfront(head,tail,9);   
	insertatfront(head,tail,12);
	insertatfront(head,tail,16);
	insertatfront(head,tail,18);
	insertatfront(head,tail,20);
	print(head);
	print(head);


	return 0;
}