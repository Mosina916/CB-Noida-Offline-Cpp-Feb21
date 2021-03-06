#include<iostream>
using namespace std;
int main()
{
    int row;
    cin>>row;
    int i=1;
    while(i<=row)
    {
        int spaces=1;
        // print spaces 
        while(spaces<=row-i)
        {
            cout<<"  ";
            spaces++;
        }
        int val=1; //print val
        int k=1; //count
        while(k<=2*i-1){
            cout<<val<<" ";
            val++;
            k++;

        }
       
        cout<<endl;
        i++;
    }
    return 0;
}
