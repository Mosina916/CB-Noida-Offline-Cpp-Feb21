#include<iostream>
using namespace std;
// blueprint //-->takes no space 
class car{
	int price;
public: //aap  variables ko class k bahar access kar sakte ho directly
	// char name[100];
	char *name;

	int modelno;
	int seats;
	// int price;
	// default constructor -->helps in making of object
	//whenever object is formed constructor is called
	// car(){

	// }

	// agar mai constructor ko override karti hun tou overrise wala constructor 
	// kaam karta hai
	car(){

		cout<<"inside default constructor"<<endl;
		name=NULL;

	}

	// parametrized constructor
	car(char*n,int m,int s,int p){
		name=new char[strlen(n)+1];
		strcpy(name,n);
		modelno=m;
		seats=s;
		price=p;

	}
	// // permitrized constructor
	// car(char*n,int m,int s){
	// 	strcpy(name,n);
	// 	modelno=m;
	// 	seats=s;
	// 	price=2000;

	// }


	void print(){
		cout<<name<<endl;
		cout<<price<<endl;
		cout<<seats<<endl;
		cout<<modelno<<endl;
	}

	void update(char *n){
		if(name!=NULL){
			delete[] name;
			name=NULL;

		}
		name=new char[strlen(n)+1];
		strcpy(name,n);

	}

	// agar mujhe private members ko access karna hota hai tou mai class 
	// k functions ki help se karti hun
	// getters and setter

	// setter
	void setprice(int p){
		if(p<200){
			price=500;
		}
		else{
			price=p;

		}

	}

	// getter
	int getprice(){
		return price;
	}









};
int main(){
	// int a;
	car A; //user defined datatype; //A object formed of the type car
	//object form memory space use
	// A.name="BMW"; string ko char array mai nahi daal sakte
	// strcpy(A.name,"BMW"); //segmentation fault
	A.update("BMW"); 
	// A.price=500;
		A.setprice(200);
	A.seats=4;
	A.modelno=2020;

	// A.update("asdf");



	cout<<A.name<<endl;
	// cout<<A.price<<endl;
	cout<<A.getprice()<<endl;
	cout<<A.seats<<endl;
	cout<<A.modelno<<endl;

	A.print(); //a calls print function


	// car B

	// car B; //user defined datatype; //A object formed of the type car
	//object form memory space use
	// A.name="BMW"; string ko char array mai nahi daal sakte
	// strcpy(B.name,"Audi");
	// B.update("AUdi");
	// B.price=700;
	// B.seats=7;
	// B.modelno=2019;
	// B.print();


	// cout<<B.name<<endl;
	// cout<<B.price<<endl;
	// cout<<B.seats<<endl;
	// cout<<B.modelno<<endl;

	// car C("duster",2017,8,1000);
	// C.print();
	// car D("qwerty",2000,5);


	// cout<<C.name<<endl;
	// cout<<C.price<<endl;
	// cout<<C.seats<<endl;
	// cout<<C.modelno<<endl;

	// cout<<D.name<<endl;
	// cout<<D.price<<endl;
	// cout<<D.seats<<endl;
	// cout<<D.modelno<<endl;







	return 0;
}