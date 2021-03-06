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
		while(spaces<=row-i)
		{
			cout<<" ";
			spaces++;
		}
		int j=1;
		while(j<=i)
		{
			cout<<j;
			j++;
		}
		int dec=i-1;
		int k=1;
		while(k<=dec)
		{
			cout<<dec;
			dec--;
		}
		cout<<endl;
		i++;
	}
	return 0;
}
