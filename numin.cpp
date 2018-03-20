#include<iostream>
using namespace std;

int main() 
{
	int n,l,r;
	cout<<"\n enter the number:";
	cin>>n;
	cout<<"\n enter the left and right range:";
	cin>>l>>r;
	if(n>l && n<r)
	{
		cout<<"\n yes";
	}
	else
	{
		cout<<"\n no";
	}
	return 0;
}
