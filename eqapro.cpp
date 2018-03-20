#include <iostream>
using namespace std;
int main() 
{
	int n1,n2,pro,i,flag=0;
	cout<<"enter the two number:";
	cin>>n1>>n2;
	pro=n1*n2;
	for(i=1;i<=pro/2;i++)
	{
		if(i*i==pro)
		{
			flag=1;
			break;
		}
	
	}
	
	if(flag==1)
	{
		cout<<"\nyes";
	}
	else
	{
		cout<<"\nno";
	}
	return 0;
}
