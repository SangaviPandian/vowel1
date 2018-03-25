#include <iostream>
using namespace std;
int main() 
 
{
int n,remainder,reverse=0;
 
int result;
 
cout<<"\n enter the number:";
 
cin>>n;
 
while(n!=0)
 
{
 
remainder=n%10;
 
reverse=reverse*10+remainder;
 
n=n/10;
 
}
 cout<<reverse;
return 0;
 
}
