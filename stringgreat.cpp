#include<iostream>
#include<string.h>
using namespace std;
int main() 
{
	char str1[50],str2[50];
	int n1,n2;
	cout<<"enter the string1:"<<endl;
	cin>>str1;
            cout<<"enter the string2:"<<endl;
	cin>>str2;
	n1=strlen(str1);
	n2=strlen(str2);
	if(n1>n2)
	{
		cout<<str1;
	}
	else
	{
		cout<<str2;
	}
	
	return 0;
}
