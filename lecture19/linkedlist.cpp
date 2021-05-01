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
void insertattail(node*&head,node*&tail,int data){
	// pehle node banega jisko point n karega

	node*n=new node(data);
	// 1. ll is empty
	if(head==NULL){
		head=tail=n; //pehla node create hoga ll ka


	}
	// 2. ll is not empty
	else{
		tail->next=n;
		tail=n;

	}


}
int length(node*head){
	int cnt=0;

	while(head!=NULL){
		cnt++;
		head=head->next;
	}
	return cnt;

}

void insertatanypostion(node*&head,node*&tail,int data,int pos){
	if(pos==0){
		insertatfront(head,tail,data);
	}
	if(pos>=length(head)){
		insertattail(head,tail,data);
	}
	else{
		node*temp=head;
		node*n=new node(data);
		for(int jump=1;jump<pos;jump++){
			temp=temp->next;
		}
		n->next=temp->next;
		temp->next=n;

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
	insertatfront(head,tail,20); //20 18 16 12 9

	print(head);
	insertattail(head,tail,19);//20 18 16 12 9 19
	insertattail(head,tail,190);//20 18 16 12 9 19 190
	print(head);
	insertatanypostion(head,tail,50,3);//20 18 16 50 12 9 19 190
	print(head);




	return 0;
}