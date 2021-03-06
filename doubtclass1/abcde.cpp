#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
    for(int i=1;i<=n;i++){
      char ch='A';
      // abcde
      for(int k=1;k<=n+1-i;k++){
        cout<<ch;
        ch++;


      }
      //edcba
      ch=ch-1;
      for(int k=1;k<=n+1-i;k++){
        cout<<ch;
        ch--;


      }
      cout<<endl;

    }
    return 0;
}
