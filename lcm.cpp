#include <iostream>
using namespace std;
int main(void) 
{
int x,y,remainder,lcm,gcd,a,b;
cout<<"\n enter the first number:";
cin>>x;
cout<<"\n enter the second number:";
cin>>y;
a=x;
b=y;
do
{
remainder=x%y;
if(remainder==0)
break;
x=y;
y=remainder;
}while(remainder!=0);
gcd=y;
lcm=(a*b)/gcd;
cout<<"\n the lcm of the given number is:"<<lcm;
return 0;
}
