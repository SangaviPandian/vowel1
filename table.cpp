#include <iostream>
using namespace std;

int main() 
{
int i,no,table=1;
cout<<"Enter any num : ";
cin>>no;
cout<<"Table of "<<no;
for(i=1;i<=5;i++)
{
table=no*i;
cout<<" \n"<<table;
cout<<"\n";
}
return 0;
}
