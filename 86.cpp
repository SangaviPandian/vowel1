#include <iostream>
#include<string.h>
using namespace std;
int main() 
{
	char str[50];
	int i,flag=0;
	cout<<"\nenter the string:";
	cin>>str;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==str[i+1])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		cout<<"\nno";
	}
	else
	{
		cout<<"\nyes";
	}
	return 0;
}
