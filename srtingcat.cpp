#include <iostream>
#include<string>
using namespace std;

int main() {
	char first[100],second[100];
int i=0,j=0;
cout<<"Enter first string:- ";
gets(first);
cout<<"Enter second string:- ";
gets(second);
while(first[i]!='\0')
{
 i++;
}
while(second[j]!='\0')
{
 first[i]=second[j];
 i++;
 j++;
}
cout<<"String after concatenation is :- "<<first;
	return 0;
}
