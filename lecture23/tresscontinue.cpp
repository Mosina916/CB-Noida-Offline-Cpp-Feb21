#include<iostream>
#include<queue>
using namespace std;
class node{
public:
	int data;
	node*left;
	node*right;
	// constructor
	node(int d){
		data=d;
		left=NULL;
		right=NULL;
	}
};
node* buildtree(){
	int data;
	cin>>data;
	if(data==-1){
		return NULL;
	}
	else{
		node*root=new node(data);
		root->left=buildtree(); //lst
		root->right=buildtree(); //rst
		return root;

	}
	
}

void preorder(node*root){
	// base case
	if(root==NULL){
		return;
	}

	// recursive case
	// root->data
	cout<<root->data<<" ";

	// lst
	preorder(root->left);

	// rst
	preorder(root->right);

}
void inorder(node*root){
	// base case
	if(root==NULL){
		return;
	}

	// recursive case
	// lst
	inorder(root->left);
	// root->data
	cout<<root->data<<" ";

	// rst
	inorder(root->right);

}
void postorder(node*root){
	// base case
	if(root==NULL){
		return;
	}

	// recursive case
	// lst
	postorder(root->left);
	// rst
	postorder(root->right);
	// root->data
	cout<<root->data<<" ";

	

}

// count nodes in a tree

int countnodes(node*root){
	// base case
	if(root==NULL){
		return 0;
	}

	// recursive case
	// lst+rst+1
	// int x=countnodes(root->left);
	// int y=countnodes(root->right);
	// return x+y+1;

	return countnodes(root->left)+countnodes(root->right)+1;

}
int height(node*root){
	// base case
	if(root==NULL){
		return 0;
	}


    // recursive case
    int lh=height(root->left);
    int rh=height(root->right);
    return max(lh,rh)+1;
}


// sum of nodes of tree

int sum(node*root){
	// base case
	if(root==NULL){
		return 0;
	}

	// recursive case
	int ls=sum(root->left);
	int rs=sum(root->right);
	return ls+rs+root->data;

}
void mirror(node*root){
	// base case
	if(root==NULL){
		return;
	}
	// recursive case
	swap(root->left,root->right);
	mirror(root->left);
	mirror(root->right);

}
int diameter(node*root){
	// base case
	if(root==NULL){
		return 0;
	}
	// recurive case

	//1. case where diameter lies in lst and don't pass through root
	int op1=diameter(root->left);
	//2. case where diameter lies in rst and don't pass through root
	int op2=diameter(root->right);

	// 3 .agar diameter passes through root
	int op3=height(root->left)+height(root->right);
	return max(op1,max(op2,op3));

}

class Pair{
public:
	int height;
	int diameter;

};
Pair fastdiamter(node*root){
	Pair p;
	// base case
	if(root==NULL){
		p.diameter=p.height=0;
		return p;
	}


	// recursive case
	Pair left=fastdiamter(root->left);//jo left st hoga it will contain left ki height and left ka dia
	Pair right=fastdiamter(root->right);//right st ki height and dia
	p.height=max(left.height,right.height)+1;

	int op1=left.height+right.height;//agar mera dia passes through root
	int op2=left.diameter;//agar mera dia passes through lst
	int op3=right.diameter;//agar mera dia passes through rst
	p.diameter=max(op1,max(op2,op3));
	return p;



}
void printlevelwise(node*root){
	// queue
	queue<node*> q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		node*x=q.front();
		q.pop();
		// if x is NULL
		if(x==NULL){
			cout<<endl;
			if(!q.empty()){
				q.push(NULL);
			}

		}
		else{
			cout<<x->data<<" ";
			if(x->left!=NULL){
				q.push(x->left);
			}
			if(x->right!=NULL){
				q.push(x->right);
			}
		}


	}
}

// build tree levelwise
node*buildtreelevelwise(){
	node*root=NULL;
	int data;
	cout<<"enter root data "<<endl;
	cin>>data;
	//root node k lye hai
	if(data==-1){
		return NULL;
	}
	else{
		root=new node(data);
		queue<node*> q;
		q.push(root);

		while(!q.empty()){
		node*x=q.front(); //x-->8 ka address
		q.pop();
		cout<<"enter left and right child of "<<x->data<<endl;

		int leftchild;
		int rightchild;
		cin>>leftchild>>rightchild;
		if(leftchild!=-1){
			x->left=new node(leftchild);
			q.push(x->left);
		}
		if(rightchild!=-1){
			x->right=new node(rightchild);
			q.push(x->right);

		}

		}

		return root;

		



	}





	





}


//input-->8 3 1 -1 -1 6 4 -1 -1 7 -1 -1 10 -1 14 13 -1 -1 -1
int main(){
	// node*parent=buildtree();
	node*parent=buildtreelevelwise();
	// cout<<"preorder : ";
	// preorder(parent);
	// cout<<endl;
	// cout<<"inorder : ";
	// inorder(parent);
	// cout<<endl;
	// cout<<"postorder : ";
	// postorder(parent);
	// cout<<endl;


	// cout<<"count of nodes is : "<<countnodes(parent)<<endl;
	// cout<<"height of tree is : "<<height(parent)<<endl;
	// cout<<"sum of nodes of tree is : "<<sum(parent)<<endl;

	// mirror(parent);
	// cout<<"preorder : ";
	// preorder(parent);
	// cout<<endl;
	// cout<<"inorder : ";
	// inorder(parent);
	// cout<<endl;
	// cout<<"postorder : ";
	// postorder(parent);
	// cout<<endl;
	// cout<<"Diameter of tree is : "<<diameter(parent)<<endl; //o(n^2)
	// Pair x=fastdiamter(parent); //(4,6)
	// cout<<"Diameter of tree is : "<<x.diameter<<endl; //o(n)
	// cout<<"height of tree is : "<<x.height<<endl;
	printlevelwise(parent);





	return 0;
}