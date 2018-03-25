#include<iostream>

using namespace std;

int main()
{
int N;
cout<<"Enter the Number : "<<endl;
cin>>N;
while(N%2==0)
{
N=N/2;	
}
cout<<"After recurse division of 2 the value is : "<<N<<endl;
return 0;
}
