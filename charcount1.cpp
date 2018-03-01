#include <iostream>
using namespace std;
int main(void) 
{
	char str[50];
	int i,count=0;
	cout<<"enter the sentence:";
	cin >>str;
	for(i=0;str[i]!='\0';i++)
	{
		count=count+1;
	}
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			count=count-1;
		}
	}
	cout<<"\nthe number of characters in the line are:";
	cout<<count;
	return 0;
}
