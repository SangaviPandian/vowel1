#include <iostream>
#include<string.h>
using namespace std;
int main() 
{
	char str[20];
	int i,n;
	cout<<"\nenter the string:";
	cin>>str;
	n=strlen(str);
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			cout<<str[i];
		}
		
	}
	cout<<" ";
	for(i=0;i<n;i++)
	{
		if(i%2==1)
		{
			cout<<str[i];
		}
		
	}
	
	return 0;
}
