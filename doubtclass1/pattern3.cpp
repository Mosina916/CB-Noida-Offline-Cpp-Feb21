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
        //increasing
       int val=i;
       int k=1;
       while(k<=i){
        cout<<val<<" ";
        val++;
        k++;

       }

       //decresing part

       int dec=1;
       val=2*i-2;
       while(dec<=i-1){
        cout<<val<<" ";
        val--;
        dec++;
       }
       
        cout<<endl;
        i++;
    }
    return 0;
}
