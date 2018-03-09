#include <iostream>

 using namespace std;

int main() 

{

int x,y,temp;

cout<<"\n enter two numbers to swap:";

cin>>x>>y;

cout<<"\n before swapping:";

cout<<"\nx="<<x;

cout<<"\ny="<<y;

temp=x;

x=y;

y=temp;

cout<<"\n after swapping:";

cout<<"\nx="<<x;

cout<<"\ny="<<y;

return 0;

}
