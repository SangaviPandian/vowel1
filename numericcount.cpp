#include <iostream>
using namespace std;
int main() 
{
	char s[50];
	int i,count=0;
	cout<<"enter the string:";
cin>>s;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='0' && s[i]<='9')
		{
			count=count+1;
		}
	}
	cout<<count;
	return 0;
}
