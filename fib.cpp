#include <iostream>

using namespace std;

int main() 

{

int a=1,b=1,i,n,c;

cout<<"\n enter the range to print the Fibonacci numbers\n";

cin>>n;

cout<<a;

cout<<b;

for(i=1;i<=n-2;i++)

{

c=a+b;

cout<<c;

a=b;

b=c;

}

return 0;

}
