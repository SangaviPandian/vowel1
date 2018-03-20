#include <iostream>
#include<string.h>
using namespace std;
int main() 
{
	char str[50],temp[10];
	int i,j,n,k;
cout<<"enter the string:";
	cin>>str;
	n=strlen(str);
	while(i<j)
	{
		for(i=0;i<n;i++)
		{
			for(j=n;j>=1;j--)
			{
				temp[k]=str[i];
				str[i]=str[j];
				str[j]=str[i];
			}
		}
	}
	cout<<"\nyes";
	return 0;
}
