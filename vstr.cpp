#include <iostream>
using namespace std;

int main() 
{
char string[50];
int i=0,count=0,flag=0;
cout<<"\n enter the given string:";
cin>>string;
while(string[i]!='\0')
{
if(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u'||string[i]=='A'||string[i]=='E'||string[i]=='I'||string[i]=='O'||string[i]=='U')
flag=1;
i++;
}
if(flag==1)
{
	cout<<"\nyes";
}
else
{
	cout<<"\n no";
}
return 0;
}
