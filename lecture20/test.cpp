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
int lenrec(node*head){
	// base case 
	if(head==NULL){
		return 0;
	}

	// recursive case
	return 1+lenrec(head->next);
}
// node* searchitratively(node*head,int key){
bool searchitratively(node*head,int key){
	while(head!=NULL){
		if(head->data==key){
			// return head;
			return true;
		}
		head=head->next;
	}
	// pura iterate kiya ll and mujhe key nahi mili
	// return NULL;
	return false;
}


node*searchrec(node*head,int key){
	// base case
	if(head==NULL){
		return NULL;

	}


	// recursive case
	if(head->data==key){
		return head;
	}
	return searchrec(head->next,key);
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
// deletion


void deleteatfront(node*&head,node*&tail){
	// 1 ll is empty
	if(head==NULL){
		return;

	}
	// 2 ll contains only one node
	else if(head->next==NULL){
		delete head;
		head=tail=NULL; //ll empty ho jayega 

	}
	// 3 multiple nodes hai ll mai
	else{
		node*n=head;
		head=head->next;
		delete n;

	}

}



void deleteatend(node*&head,node*&tail){
	// 1 ll is empty
	if(head==NULL){
		return;

	}
	// 2 ll contains only one node
	else if(head->next==NULL){
		delete head;
		head=tail=NULL; //ll empty ho jayega 

	}
	// 3 multiple nodes hai ll mai
	else{
		node*temp=head;
		// temp ko tail k ek position peeche rakha
		while(temp->next!=tail){
			temp=temp->next;
		}

		delete tail;
		tail=temp;
		tail->next=NULL;

	}

}
node* mid(node*head){
	if(head==NULL){
		return NULL;
	}


	node*slow=head;
	node*fast=head; //advantage
	// node*fast=head->next;
	while(fast!=NULL&&fast->next!=NULL){
		fast=fast->next->next; //2x
		slow=slow->next; //x

	}
	return slow;
}
bool iscyclic(node*head){
	node*slow=head;
	node*fast=head;
	while(fast!=NULL&&fast->next!=NULL){ //bahar aayega if linear ll hai
		fast=fast->next->next;
		slow=slow->next;
		if(fast==slow){
			return true;
		}

	}
	return false;
}
void breakcycle(node*head){

	node*slow=head;
	node*fast=head;
	while(fast!=NULL&&fast->next!=NULL){ //bahar aayega if linear ll hai
		fast=fast->next->next;
		slow=slow->next;
		if(fast==slow){
			break;
		}

	}
	// take slow back to head
	slow=head;
	// take prev pointer which should be pointing to 1 position before fast
	node*prev=head;
	while(prev->next!=fast){
		prev=prev->next;
	}
	while(fast!=slow){
		prev=fast;
		fast=fast->next;
		slow=slow->next;
	}
	prev->next=NULL;

	
}

void createcycle(node*head){
	node*temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=head->next->next;
}

void reversell(node*&head){
	// node*ans1=head; //100
	node*prev=NULL;//pichli wali link jahan mujhe node ko point karana hai
	node*c=head; //jis node ki link piche le jana hai
	node*n; //baki ll ka pointer so that wo ll kho na jaye
	while(c!=NULL){
		n=c->next;
		c->next=prev;
		prev=c;
		c=n;

	}
	head=prev;
	// tail=ans1;

}


void deleteatanypos(node*&head,node*&tail,int pos){
	// if(pos==0)
	if(pos==0){
		deleteatfront(head,tail);
	}
	else if(pos>=length(head)-1){
		deleteatend(head,tail);
	}
	else{
		node*temp=head;
		for(int i=1;i<pos;i++){
			temp=temp->next;

		}
		node*n=temp->next; //jo node delete karna hai
		temp->next=n->next;
		delete n;

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

	insertatfront(head,tail,76); //70 20 18 16 12 9

	print(head);
	breakcycle(head);
	print(head);
	// insertattail(head,tail,19);//20 18 16 12 9 19
	// insertattail(head,tail,190);//20 18 16 12 9 19 190
	// print(head);
	// insertatanypostion(head,tail,50,3);//20 18 16 50 12 9 19 190
	// print(head);
	// deleteatfront(head,tail);
	// deleteatfront(head,tail);
	// print(head);//16 12 9
	// deleteatend(head,tail);
	// print(head);//16 12 
	// deleteatanypos(head,tail,6);
	// print(head);
	// node*ans=searchitratively(head,12);
	// bool ans=searchitratively(head,12);
	// // if(ans==NULL){
	// // 	cout<<"key is not present"<<endl;
	// // }
	// // else{
	// // 	cout<<"key is present"<<endl;
	// // }
	// if(ans==false){
	// 	cout<<"key is not present"<<endl;
	// }
	// else{
	// 	cout<<"key is present"<<endl;
	// }

	// node* ans2=searchrec(head,90);
	// if(ans2==NULL){
	// 	cout<<"key is not present"<<endl;
	// }
	// else{
	// 	cout<<"key is present"<<endl;
	// }
	// node* m=mid(head);
	// if(m==NULL){
	// 	cout<<"linked list is not present"<<endl;
	// }
	// else{
	// 	cout<<m->data<<endl;
	// }
	// reversell(head);
	// print(head);
	// if(iscyclic(head)){
	// 	cout<<"linked list is cyclic"<<endl;

	// }
	// else{
	// 	cout<<"not cyclic"<<endl;
	// }
	// createcycle(head);
	// if(iscyclic(head)){
	// 	cout<<"linked list is cyclic"<<endl;

	// }
	// else{
	// 	cout<<"not cyclic"<<endl;
	// }
	// breakcycle(head);
	// if(iscyclic(head)){
	// 	cout<<"linked list is cyclic"<<endl;

	// }
	// else{
	// 	cout<<"not cyclic"<<endl;
	// }
	// print(head);








	return 0;
}